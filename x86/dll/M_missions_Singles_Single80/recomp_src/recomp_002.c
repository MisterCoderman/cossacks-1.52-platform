#include "recomp.h"

/* FUN_10012fd0 @ 0x11d92fd0 (58 bytes, 32 insns) */
void f_11d92fd0(void) {
  FTRACE(0x11d92fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d92fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d92fd1 mov ebp, esp */
  EBP = (ESP);
  /* 11d92fd3 push esi */
  push32((uint32_t)(ESI));
  /* 11d92fd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d92fd6 push eax */
  push32((uint32_t)(EAX));
  /* 11d92fd7 push eax */
  push32((uint32_t)(EAX));
  /* 11d92fd8 push eax */
  push32((uint32_t)(EAX));
  /* 11d92fd9 push eax */
  push32((uint32_t)(EAX));
  /* 11d92fda push eax */
  push32((uint32_t)(EAX));
  /* 11d92fdb push eax */
  push32((uint32_t)(EAX));
  /* 11d92fdc push eax */
  push32((uint32_t)(EAX));
  /* 11d92fdd push eax */
  push32((uint32_t)(EAX));
  /* 11d92fde mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d92fe1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d92fe4:;
  /* 11d92fe4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d92fe6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d92fe8 je 0x11d92ff1 */
  if (C.zf) goto L_11d92ff1;
  /* 11d92fea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11d92feb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11d92feb");
  /* 11d92fef jmp 0x11d92fe4 */
  goto L_11d92fe4;
L_11d92ff1:;
  /* 11d92ff1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11d92ff4:;
  /* 11d92ff4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d92ff6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d92ff8 je 0x11d93004 */
  if (C.zf) goto L_11d93004;
  /* 11d92ffa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d92ffb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11d92ffb");
  /* 11d92fff jae 0x11d92ff4 */
  if (!C.cf) goto L_11d92ff4;
  /* 11d93001 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11d93004:;
  /* 11d93004 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93007 pop esi */
  ESI = (pop32());
  /* 11d93008 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d93009 ret  */
  ESPCHK(0x11d92fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013010 @ 0x11d93010 (512 bytes, 147 insns) */
void f_11d93010(void) {
  FTRACE(0x11d93010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d93010 push ebp */
  push32((uint32_t)(EBP));
  /* 11d93011 mov ebp, esp */
  EBP = (ESP);
  /* 11d93013 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93016 cmp dword ptr [0x11db1a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9301d jne 0x11d93042 */
  if (!C.zf) goto L_11d93042;
  /* 11d9301f call 0x11d93ae0 */
  push32(0x11d93024u); f_11d93ae0();
  /* 11d93024 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d93026 je 0x11d93032 */
  if (C.zf) goto L_11d93032;
  /* 11d93028 mov eax, dword ptr [0x11db42e0] */
  EAX = (r32((uint32_t)(0x11db42e0)));
  /* 11d9302d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d93030 jmp 0x11d93039 */
  goto L_11d93039;
L_11d93032:;
  /* 11d93032 mov dword ptr [ebp - 8], 0x11d93b30 */
  w32((uint32_t)(EBP + -0x8), (0x11d93b30u));
L_11d93039:;
  /* 11d93039 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d9303c mov dword ptr [0x11db1a24], ecx */
  w32((uint32_t)(0x11db1a24), (ECX));
L_11d93042:;
  /* 11d93042 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93046 jne 0x11d93052 */
  if (!C.zf) goto L_11d93052;
  /* 11d93048 call 0x11d93930 */
  push32(0x11d9304du); f_11d93930();
  /* 11d9304d jmp 0x11d9311e */
  goto L_11d9311e;
L_11d93052:;
  /* 11d93052 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93055 mov dword ptr [0x11db1a14], edx */
  w32((uint32_t)(0x11db1a14), (EDX));
  /* 11d9305b cmp dword ptr [0x11db1a14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93062 je 0x11d93084 */
  if (C.zf) goto L_11d93084;
  /* 11d93064 mov eax, dword ptr [0x11db1a14] */
  EAX = (r32((uint32_t)(0x11db1a14)));
  /* 11d93069 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d9306c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d9306e je 0x11d93084 */
  if (C.zf) goto L_11d93084;
  /* 11d93070 push 0x11db1a14 */
  push32((uint32_t)(0x11db1a14u));
  /* 11d93075 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11d93077 push 0x11db0bb0 */
  push32((uint32_t)(0x11db0bb0u));
  /* 11d9307c call 0x11d93210 */
  push32(0x11d93081u); f_11d93210();
  /* 11d93081 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d93084:;
  /* 11d93084 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93087 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9308a mov dword ptr [0x11db1a18], edx */
  w32((uint32_t)(0x11db1a18), (EDX));
  /* 11d93090 cmp dword ptr [0x11db1a18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93097 je 0x11d930b9 */
  if (C.zf) goto L_11d930b9;
  /* 11d93099 mov eax, dword ptr [0x11db1a18] */
  EAX = (r32((uint32_t)(0x11db1a18)));
  /* 11d9309e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d930a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d930a3 je 0x11d930b9 */
  if (C.zf) goto L_11d930b9;
  /* 11d930a5 push 0x11db1a18 */
  push32((uint32_t)(0x11db1a18u));
  /* 11d930aa push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11d930ac push 0x11db0af8 */
  push32((uint32_t)(0x11db0af8u));
  /* 11d930b1 call 0x11d93210 */
  push32(0x11d930b6u); f_11d93210();
  /* 11d930b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d930b9:;
  /* 11d930b9 mov dword ptr [0x11db1a1c], 0 */
  w32((uint32_t)(0x11db1a1c), (0x0u));
  /* 11d930c3 cmp dword ptr [0x11db1a14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d930ca je 0x11d930fd */
  if (C.zf) goto L_11d930fd;
  /* 11d930cc mov edx, dword ptr [0x11db1a14] */
  EDX = (r32((uint32_t)(0x11db1a14)));
  /* 11d930d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d930d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d930d7 je 0x11d930fd */
  if (C.zf) goto L_11d930fd;
  /* 11d930d9 cmp dword ptr [0x11db1a18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d930e0 je 0x11d930f6 */
  if (C.zf) goto L_11d930f6;
  /* 11d930e2 mov ecx, dword ptr [0x11db1a18] */
  ECX = (r32((uint32_t)(0x11db1a18)));
  /* 11d930e8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d930eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d930ed je 0x11d930f6 */
  if (C.zf) goto L_11d930f6;
  /* 11d930ef call 0x11d932a0 */
  push32(0x11d930f4u); f_11d932a0();
  /* 11d930f4 jmp 0x11d930fb */
  goto L_11d930fb;
L_11d930f6:;
  /* 11d930f6 call 0x11d93690 */
  push32(0x11d930fbu); f_11d93690();
L_11d930fb:;
  /* 11d930fb jmp 0x11d9311e */
  goto L_11d9311e;
L_11d930fd:;
  /* 11d930fd cmp dword ptr [0x11db1a18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93104 je 0x11d93119 */
  if (C.zf) goto L_11d93119;
  /* 11d93106 mov eax, dword ptr [0x11db1a18] */
  EAX = (r32((uint32_t)(0x11db1a18)));
  /* 11d9310b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d9310e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d93110 je 0x11d93119 */
  if (C.zf) goto L_11d93119;
  /* 11d93112 call 0x11d93830 */
  push32(0x11d93117u); f_11d93830();
  /* 11d93117 jmp 0x11d9311e */
  goto L_11d9311e;
L_11d93119:;
  /* 11d93119 call 0x11d93930 */
  push32(0x11d9311eu); f_11d93930();
L_11d9311e:;
  /* 11d9311e cmp dword ptr [0x11db1a1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93125 jne 0x11d9312e */
  if (!C.zf) goto L_11d9312e;
  /* 11d93127 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d93129 jmp 0x11d9320c */
  goto L_11d9320c;
L_11d9312e:;
  /* 11d9312e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93131 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93137 push edx */
  push32((uint32_t)(EDX));
  /* 11d93138 call 0x11d93960 */
  push32(0x11d9313du); f_11d93960();
  /* 11d9313d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93140 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d93143 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93147 je 0x11d9315c */
  if (C.zf) goto L_11d9315c;
  /* 11d93149 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9314c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d93151 push eax */
  push32((uint32_t)(EAX));
  /* 11d93152 call dword ptr [0x11db42e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42e4))), 0x11d93158u);
  /* 11d93158 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d9315a jne 0x11d93163 */
  if (!C.zf) goto L_11d93163;
L_11d9315c:;
  /* 11d9315c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d9315e jmp 0x11d9320c */
  goto L_11d9320c;
L_11d93163:;
  /* 11d93163 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d93165 mov ecx, dword ptr [0x11db1a04] */
  ECX = (r32((uint32_t)(0x11db1a04)));
  /* 11d9316b push ecx */
  push32((uint32_t)(ECX));
  /* 11d9316c call dword ptr [0x11db42e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42e8))), 0x11d93172u);
  /* 11d93172 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d93174 jne 0x11d9317d */
  if (!C.zf) goto L_11d9317d;
  /* 11d93176 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d93178 jmp 0x11d9320c */
  goto L_11d9320c;
L_11d9317d:;
  /* 11d9317d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93181 je 0x11d931a8 */
  if (C.zf) goto L_11d931a8;
  /* 11d93183 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d93186 mov ax, word ptr [0x11db1a04] */
  AX = (r16((uint32_t)(0x11db1a04)));
  /* 11d9318c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11d9318f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d93192 mov dx, word ptr [0x11db1a20] */
  DX = (r16((uint32_t)(0x11db1a20)));
  /* 11d93199 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 11d9319d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d931a0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11d931a4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11d931a8:;
  /* 11d931a8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d931ac je 0x11d93207 */
  if (C.zf) goto L_11d93207;
  /* 11d931ae push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11d931b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d931b3 push edx */
  push32((uint32_t)(EDX));
  /* 11d931b4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11d931b9 mov eax, dword ptr [0x11db1a04] */
  EAX = (r32((uint32_t)(0x11db1a04)));
  /* 11d931be push eax */
  push32((uint32_t)(EAX));
  /* 11d931bf call dword ptr [0x11db1a24] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db1a24))), 0x11d931c5u);
  /* 11d931c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d931c7 jne 0x11d931cd */
  if (!C.zf) goto L_11d931cd;
  /* 11d931c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d931cb jmp 0x11d9320c */
  goto L_11d9320c;
L_11d931cd:;
  /* 11d931cd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11d931cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d931d2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d931d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d931d6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 11d931db mov edx, dword ptr [0x11db1a20] */
  EDX = (r32((uint32_t)(0x11db1a20)));
  /* 11d931e1 push edx */
  push32((uint32_t)(EDX));
  /* 11d931e2 call dword ptr [0x11db1a24] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db1a24))), 0x11d931e8u);
  /* 11d931e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d931ea jne 0x11d931f0 */
  if (!C.zf) goto L_11d931f0;
  /* 11d931ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d931ee jmp 0x11d9320c */
  goto L_11d9320c;
L_11d931f0:;
  /* 11d931f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11d931f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d931f5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d931fa push eax */
  push32((uint32_t)(EAX));
  /* 11d931fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d931fe push ecx */
  push32((uint32_t)(ECX));
  /* 11d931ff call 0x11d89330 */
  push32(0x11d93204u); f_11d89330();
  /* 11d93204 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d93207:;
  /* 11d93207 mov eax, 1 */
  EAX = (0x1u);
L_11d9320c:;
  /* 11d9320c mov esp, ebp */
  ESP = (EBP);
  /* 11d9320e pop ebp */
  EBP = (pop32());
  /* 11d9320f ret  */
  ESPCHK(0x11d93010u, _esp0);
  ESP += 4; return;
}

/* FUN_10013210 @ 0x11d93210 (130 bytes, 47 insns) */
void f_11d93210(void) {
  FTRACE(0x11d93210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d93210 push ebp */
  push32((uint32_t)(EBP));
  /* 11d93211 mov ebp, esp */
  EBP = (ESP);
  /* 11d93213 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93216 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11d9321d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11d93224:;
  /* 11d93224 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d93227 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9322a jg 0x11d9328e */
  if ((!C.zf&&C.sf==C.of)) goto L_11d9328e;
  /* 11d9322c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93230 je 0x11d9328e */
  if (C.zf) goto L_11d9328e;
  /* 11d93232 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d93235 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93238 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d93239 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d9323b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d9323d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d93240 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d93243 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93246 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11d93249 push eax */
  push32((uint32_t)(EAX));
  /* 11d9324a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d9324d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d9324f push edx */
  push32((uint32_t)(EDX));
  /* 11d93250 call 0x11d959d0 */
  push32(0x11d93255u); f_11d959d0();
  /* 11d93255 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93258 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d9325b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9325f jne 0x11d93272 */
  if (!C.zf) goto L_11d93272;
  /* 11d93261 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d93264 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93267 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 11d9326b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d9326e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d93270 jmp 0x11d9328c */
  goto L_11d9328c;
L_11d93272:;
  /* 11d93272 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93276 jge 0x11d93283 */
  if ((C.sf==C.of)) goto L_11d93283;
  /* 11d93278 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9327b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d9327e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11d93281 jmp 0x11d9328c */
  goto L_11d9328c;
L_11d93283:;
  /* 11d93283 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d93286 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93289 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11d9328c:;
  /* 11d9328c jmp 0x11d93224 */
  goto L_11d93224;
L_11d9328e:;
  /* 11d9328e mov esp, ebp */
  ESP = (EBP);
  /* 11d93290 pop ebp */
  EBP = (pop32());
  /* 11d93291 ret  */
  ESPCHK(0x11d93210u, _esp0);
  ESP += 4; return;
}

/* FUN_100132a0 @ 0x11d932a0 (186 bytes, 50 insns) */
void f_11d932a0(void) {
  FTRACE(0x11d932a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d932a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d932a1 mov ebp, esp */
  EBP = (ESP);
  /* 11d932a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d932a4 mov eax, dword ptr [0x11db1a14] */
  EAX = (r32((uint32_t)(0x11db1a14)));
  /* 11d932a9 push eax */
  push32((uint32_t)(EAX));
  /* 11d932aa call 0x11d89620 */
  push32(0x11d932afu); f_11d89620();
  /* 11d932af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d932b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d932b4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d932b7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11d932ba mov dword ptr [0x11db1a10], ecx */
  w32((uint32_t)(0x11db1a10), (ECX));
  /* 11d932c0 mov edx, dword ptr [0x11db1a18] */
  EDX = (r32((uint32_t)(0x11db1a18)));
  /* 11d932c6 push edx */
  push32((uint32_t)(EDX));
  /* 11d932c7 call 0x11d89620 */
  push32(0x11d932ccu); f_11d89620();
  /* 11d932cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d932cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d932d1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d932d4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11d932d7 mov dword ptr [0x11db1a08], ecx */
  w32((uint32_t)(0x11db1a08), (ECX));
  /* 11d932dd mov dword ptr [0x11db1a04], 0 */
  w32((uint32_t)(0x11db1a04), (0x0u));
  /* 11d932e7 cmp dword ptr [0x11db1a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d932ee je 0x11d932f9 */
  if (C.zf) goto L_11d932f9;
  /* 11d932f0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11d932f7 jmp 0x11d9330b */
  goto L_11d9330b;
L_11d932f9:;
  /* 11d932f9 mov edx, dword ptr [0x11db1a14] */
  EDX = (r32((uint32_t)(0x11db1a14)));
  /* 11d932ff push edx */
  push32((uint32_t)(EDX));
  /* 11d93300 call 0x11d93d40 */
  push32(0x11d93305u); f_11d93d40();
  /* 11d93305 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93308 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d9330b:;
  /* 11d9330b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9330e mov dword ptr [0x11db1a0c], eax */
  w32((uint32_t)(0x11db1a0c), (EAX));
  /* 11d93313 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d93315 push 0x11d93360 */
  push32((uint32_t)(0x11d93360u));
  /* 11d9331a call dword ptr [0x11db42dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42dc))), 0x11d93320u);
  /* 11d93320 mov ecx, dword ptr [0x11db1a1c] */
  ECX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d93326 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11d9332c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d9332e je 0x11d9334c */
  if (C.zf) goto L_11d9334c;
  /* 11d93330 mov edx, dword ptr [0x11db1a1c] */
  EDX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d93336 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 11d9333c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d9333e je 0x11d9334c */
  if (C.zf) goto L_11d9334c;
  /* 11d93340 mov eax, dword ptr [0x11db1a1c] */
  EAX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d93345 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11d93348 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d9334a jne 0x11d93356 */
  if (!C.zf) goto L_11d93356;
L_11d9334c:;
  /* 11d9334c mov dword ptr [0x11db1a1c], 0 */
  w32((uint32_t)(0x11db1a1c), (0x0u));
L_11d93356:;
  /* 11d93356 mov esp, ebp */
  ESP = (EBP);
  /* 11d93358 pop ebp */
  EBP = (pop32());
  /* 11d93359 ret  */
  ESPCHK(0x11d932a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013360 @ 0x11d93360 (804 bytes, 220 insns) */
void f_11d93360(void) {
  FTRACE(0x11d93360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d93360 push ebp */
  push32((uint32_t)(EBP));
  /* 11d93361 mov ebp, esp */
  EBP = (ESP);
  /* 11d93363 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93366 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93369 push eax */
  push32((uint32_t)(EAX));
  /* 11d9336a call 0x11d93cc0 */
  push32(0x11d9336fu); f_11d93cc0();
  /* 11d9336f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93372 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11d93375 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11d93377 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11d9337a push ecx */
  push32((uint32_t)(ECX));
  /* 11d9337b mov edx, dword ptr [0x11db1a08] */
  EDX = (r32((uint32_t)(0x11db1a08)));
  /* 11d93381 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d93383 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93385 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11d9338b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93391 push edx */
  push32((uint32_t)(EDX));
  /* 11d93392 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d93395 push eax */
  push32((uint32_t)(EAX));
  /* 11d93396 call dword ptr [0x11db1a24] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db1a24))), 0x11d9339cu);
  /* 11d9339c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d9339e jne 0x11d933b4 */
  if (!C.zf) goto L_11d933b4;
  /* 11d933a0 mov dword ptr [0x11db1a1c], 0 */
  w32((uint32_t)(0x11db1a1c), (0x0u));
  /* 11d933aa mov eax, 1 */
  EAX = (0x1u);
  /* 11d933af jmp 0x11d9367e */
  goto L_11d9367e;
L_11d933b4:;
  /* 11d933b4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11d933b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d933b8 mov edx, dword ptr [0x11db1a18] */
  EDX = (r32((uint32_t)(0x11db1a18)));
  /* 11d933be push edx */
  push32((uint32_t)(EDX));
  /* 11d933bf call 0x11d959d0 */
  push32(0x11d933c4u); f_11d959d0();
  /* 11d933c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d933c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d933c9 jne 0x11d934ef */
  if (!C.zf) goto L_11d934ef;
  /* 11d933cf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11d933d1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11d933d4 push eax */
  push32((uint32_t)(EAX));
  /* 11d933d5 mov ecx, dword ptr [0x11db1a10] */
  ECX = (r32((uint32_t)(0x11db1a10)));
  /* 11d933db neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d933dd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d933df and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11d933e5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d933eb push ecx */
  push32((uint32_t)(ECX));
  /* 11d933ec mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d933ef push edx */
  push32((uint32_t)(EDX));
  /* 11d933f0 call dword ptr [0x11db1a24] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db1a24))), 0x11d933f6u);
  /* 11d933f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d933f8 jne 0x11d9340e */
  if (!C.zf) goto L_11d9340e;
  /* 11d933fa mov dword ptr [0x11db1a1c], 0 */
  w32((uint32_t)(0x11db1a1c), (0x0u));
  /* 11d93404 mov eax, 1 */
  EAX = (0x1u);
  /* 11d93409 jmp 0x11d9367e */
  goto L_11d9367e;
L_11d9340e:;
  /* 11d9340e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11d93411 push eax */
  push32((uint32_t)(EAX));
  /* 11d93412 mov ecx, dword ptr [0x11db1a14] */
  ECX = (r32((uint32_t)(0x11db1a14)));
  /* 11d93418 push ecx */
  push32((uint32_t)(ECX));
  /* 11d93419 call 0x11d959d0 */
  push32(0x11d9341eu); f_11d959d0();
  /* 11d9341e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93421 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d93423 jne 0x11d93450 */
  if (!C.zf) goto L_11d93450;
  /* 11d93425 mov edx, dword ptr [0x11db1a1c] */
  EDX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d9342b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11d93431 mov dword ptr [0x11db1a1c], edx */
  w32((uint32_t)(0x11db1a1c), (EDX));
  /* 11d93437 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d9343a mov dword ptr [0x11db1a20], eax */
  w32((uint32_t)(0x11db1a20), (EAX));
  /* 11d9343f mov ecx, dword ptr [0x11db1a20] */
  ECX = (r32((uint32_t)(0x11db1a20)));
  /* 11d93445 mov dword ptr [0x11db1a04], ecx */
  w32((uint32_t)(0x11db1a04), (ECX));
  /* 11d9344b jmp 0x11d934ef */
  goto L_11d934ef;
L_11d93450:;
  /* 11d93450 mov edx, dword ptr [0x11db1a1c] */
  EDX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d93456 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11d93459 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d9345b jne 0x11d934ef */
  if (!C.zf) goto L_11d934ef;
  /* 11d93461 cmp dword ptr [0x11db1a0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93468 je 0x11d934bd */
  if (C.zf) goto L_11d934bd;
  /* 11d9346a mov eax, dword ptr [0x11db1a0c] */
  EAX = (r32((uint32_t)(0x11db1a0c)));
  /* 11d9346f push eax */
  push32((uint32_t)(EAX));
  /* 11d93470 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11d93473 push ecx */
  push32((uint32_t)(ECX));
  /* 11d93474 mov edx, dword ptr [0x11db1a14] */
  EDX = (r32((uint32_t)(0x11db1a14)));
  /* 11d9347a push edx */
  push32((uint32_t)(EDX));
  /* 11d9347b call 0x11d95aa0 */
  push32(0x11d93480u); f_11d95aa0();
  /* 11d93480 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93483 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d93485 jne 0x11d934bd */
  if (!C.zf) goto L_11d934bd;
  /* 11d93487 mov eax, dword ptr [0x11db1a1c] */
  EAX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d9348c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11d9348e mov dword ptr [0x11db1a1c], eax */
  w32((uint32_t)(0x11db1a1c), (EAX));
  /* 11d93493 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d93496 mov dword ptr [0x11db1a20], ecx */
  w32((uint32_t)(0x11db1a20), (ECX));
  /* 11d9349c mov edx, dword ptr [0x11db1a14] */
  EDX = (r32((uint32_t)(0x11db1a14)));
  /* 11d934a2 push edx */
  push32((uint32_t)(EDX));
  /* 11d934a3 call 0x11d89620 */
  push32(0x11d934a8u); f_11d89620();
  /* 11d934a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d934ab cmp eax, dword ptr [0x11db1a0c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11db1a0c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d934b1 jne 0x11d934bb */
  if (!C.zf) goto L_11d934bb;
  /* 11d934b3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d934b6 mov dword ptr [0x11db1a04], eax */
  w32((uint32_t)(0x11db1a04), (EAX));
L_11d934bb:;
  /* 11d934bb jmp 0x11d934ef */
  goto L_11d934ef;
L_11d934bd:;
  /* 11d934bd mov ecx, dword ptr [0x11db1a1c] */
  ECX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d934c3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d934c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d934c8 jne 0x11d934ef */
  if (!C.zf) goto L_11d934ef;
  /* 11d934ca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d934cd push edx */
  push32((uint32_t)(EDX));
  /* 11d934ce call 0x11d93a00 */
  push32(0x11d934d3u); f_11d93a00();
  /* 11d934d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d934d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d934d8 je 0x11d934ef */
  if (C.zf) goto L_11d934ef;
  /* 11d934da mov eax, dword ptr [0x11db1a1c] */
  EAX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d934df or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11d934e1 mov dword ptr [0x11db1a1c], eax */
  w32((uint32_t)(0x11db1a1c), (EAX));
  /* 11d934e6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d934e9 mov dword ptr [0x11db1a20], ecx */
  w32((uint32_t)(0x11db1a20), (ECX));
L_11d934ef:;
  /* 11d934ef mov edx, dword ptr [0x11db1a1c] */
  EDX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d934f5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11d934fb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93501 je 0x11d93671 */
  if (C.zf) goto L_11d93671;
  /* 11d93507 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11d93509 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11d9350c push eax */
  push32((uint32_t)(EAX));
  /* 11d9350d mov ecx, dword ptr [0x11db1a10] */
  ECX = (r32((uint32_t)(0x11db1a10)));
  /* 11d93513 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d93515 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93517 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11d9351d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93523 push ecx */
  push32((uint32_t)(ECX));
  /* 11d93524 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d93527 push edx */
  push32((uint32_t)(EDX));
  /* 11d93528 call dword ptr [0x11db1a24] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db1a24))), 0x11d9352eu);
  /* 11d9352e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d93530 jne 0x11d93546 */
  if (!C.zf) goto L_11d93546;
  /* 11d93532 mov dword ptr [0x11db1a1c], 0 */
  w32((uint32_t)(0x11db1a1c), (0x0u));
  /* 11d9353c mov eax, 1 */
  EAX = (0x1u);
  /* 11d93541 jmp 0x11d9367e */
  goto L_11d9367e;
L_11d93546:;
  /* 11d93546 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11d93549 push eax */
  push32((uint32_t)(EAX));
  /* 11d9354a mov ecx, dword ptr [0x11db1a14] */
  ECX = (r32((uint32_t)(0x11db1a14)));
  /* 11d93550 push ecx */
  push32((uint32_t)(ECX));
  /* 11d93551 call 0x11d959d0 */
  push32(0x11d93556u); f_11d959d0();
  /* 11d93556 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d9355b jne 0x11d93610 */
  if (!C.zf) goto L_11d93610;
  /* 11d93561 mov edx, dword ptr [0x11db1a1c] */
  EDX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d93567 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11d9356a mov dword ptr [0x11db1a1c], edx */
  w32((uint32_t)(0x11db1a1c), (EDX));
  /* 11d93570 cmp dword ptr [0x11db1a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93577 je 0x11d9359a */
  if (C.zf) goto L_11d9359a;
  /* 11d93579 mov eax, dword ptr [0x11db1a1c] */
  EAX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d9357e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11d93581 mov dword ptr [0x11db1a1c], eax */
  w32((uint32_t)(0x11db1a1c), (EAX));
  /* 11d93586 cmp dword ptr [0x11db1a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9358d jne 0x11d93598 */
  if (!C.zf) goto L_11d93598;
  /* 11d9358f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d93592 mov dword ptr [0x11db1a04], ecx */
  w32((uint32_t)(0x11db1a04), (ECX));
L_11d93598:;
  /* 11d93598 jmp 0x11d9360e */
  goto L_11d9360e;
L_11d9359a:;
  /* 11d9359a cmp dword ptr [0x11db1a0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d935a1 je 0x11d935ef */
  if (C.zf) goto L_11d935ef;
  /* 11d935a3 mov edx, dword ptr [0x11db1a14] */
  EDX = (r32((uint32_t)(0x11db1a14)));
  /* 11d935a9 push edx */
  push32((uint32_t)(EDX));
  /* 11d935aa call 0x11d89620 */
  push32(0x11d935afu); f_11d89620();
  /* 11d935af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d935b2 cmp eax, dword ptr [0x11db1a0c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11db1a0c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d935b8 jne 0x11d935ef */
  if (!C.zf) goto L_11d935ef;
  /* 11d935ba push 1 */
  push32((uint32_t)(0x1u));
  /* 11d935bc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d935bf push eax */
  push32((uint32_t)(EAX));
  /* 11d935c0 call 0x11d93a50 */
  push32(0x11d935c5u); f_11d93a50();
  /* 11d935c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d935c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d935ca je 0x11d935ed */
  if (C.zf) goto L_11d935ed;
  /* 11d935cc mov ecx, dword ptr [0x11db1a1c] */
  ECX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d935d2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11d935d5 mov dword ptr [0x11db1a1c], ecx */
  w32((uint32_t)(0x11db1a1c), (ECX));
  /* 11d935db cmp dword ptr [0x11db1a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d935e2 jne 0x11d935ed */
  if (!C.zf) goto L_11d935ed;
  /* 11d935e4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d935e7 mov dword ptr [0x11db1a04], edx */
  w32((uint32_t)(0x11db1a04), (EDX));
L_11d935ed:;
  /* 11d935ed jmp 0x11d9360e */
  goto L_11d9360e;
L_11d935ef:;
  /* 11d935ef mov eax, dword ptr [0x11db1a1c] */
  EAX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d935f4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11d935f7 mov dword ptr [0x11db1a1c], eax */
  w32((uint32_t)(0x11db1a1c), (EAX));
  /* 11d935fc cmp dword ptr [0x11db1a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93603 jne 0x11d9360e */
  if (!C.zf) goto L_11d9360e;
  /* 11d93605 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d93608 mov dword ptr [0x11db1a04], ecx */
  w32((uint32_t)(0x11db1a04), (ECX));
L_11d9360e:;
  /* 11d9360e jmp 0x11d93671 */
  goto L_11d93671;
L_11d93610:;
  /* 11d93610 cmp dword ptr [0x11db1a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93617 jne 0x11d93671 */
  if (!C.zf) goto L_11d93671;
  /* 11d93619 cmp dword ptr [0x11db1a0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93620 je 0x11d93671 */
  if (C.zf) goto L_11d93671;
  /* 11d93622 mov edx, dword ptr [0x11db1a0c] */
  EDX = (r32((uint32_t)(0x11db1a0c)));
  /* 11d93628 push edx */
  push32((uint32_t)(EDX));
  /* 11d93629 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11d9362c push eax */
  push32((uint32_t)(EAX));
  /* 11d9362d mov ecx, dword ptr [0x11db1a14] */
  ECX = (r32((uint32_t)(0x11db1a14)));
  /* 11d93633 push ecx */
  push32((uint32_t)(ECX));
  /* 11d93634 call 0x11d95aa0 */
  push32(0x11d93639u); f_11d95aa0();
  /* 11d93639 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9363c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d9363e jne 0x11d93671 */
  if (!C.zf) goto L_11d93671;
  /* 11d93640 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d93642 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d93645 push edx */
  push32((uint32_t)(EDX));
  /* 11d93646 call 0x11d93a50 */
  push32(0x11d9364bu); f_11d93a50();
  /* 11d9364b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9364e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d93650 je 0x11d93671 */
  if (C.zf) goto L_11d93671;
  /* 11d93652 mov eax, dword ptr [0x11db1a1c] */
  EAX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d93657 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11d9365a mov dword ptr [0x11db1a1c], eax */
  w32((uint32_t)(0x11db1a1c), (EAX));
  /* 11d9365f cmp dword ptr [0x11db1a04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93666 jne 0x11d93671 */
  if (!C.zf) goto L_11d93671;
  /* 11d93668 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d9366b mov dword ptr [0x11db1a04], ecx */
  w32((uint32_t)(0x11db1a04), (ECX));
L_11d93671:;
  /* 11d93671 mov eax, dword ptr [0x11db1a1c] */
  EAX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d93676 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11d93679 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d9367b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d9367d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11d9367e:;
  /* 11d9367e mov esp, ebp */
  ESP = (EBP);
  /* 11d93680 pop ebp */
  EBP = (pop32());
  /* 11d93681 ret 4 */
  ESPCHK(0x11d93360u, _esp0);
  ESP += 8; return;
}

/* FUN_10013690 @ 0x11d93690 (116 bytes, 33 insns) */
void f_11d93690(void) {
  FTRACE(0x11d93690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d93690 push ebp */
  push32((uint32_t)(EBP));
  /* 11d93691 mov ebp, esp */
  EBP = (ESP);
  /* 11d93693 push ecx */
  push32((uint32_t)(ECX));
  /* 11d93694 mov eax, dword ptr [0x11db1a14] */
  EAX = (r32((uint32_t)(0x11db1a14)));
  /* 11d93699 push eax */
  push32((uint32_t)(EAX));
  /* 11d9369a call 0x11d89620 */
  push32(0x11d9369fu); f_11d89620();
  /* 11d9369f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d936a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d936a4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d936a7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11d936aa mov dword ptr [0x11db1a10], ecx */
  w32((uint32_t)(0x11db1a10), (ECX));
  /* 11d936b0 cmp dword ptr [0x11db1a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d936b7 je 0x11d936c2 */
  if (C.zf) goto L_11d936c2;
  /* 11d936b9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11d936c0 jmp 0x11d936d4 */
  goto L_11d936d4;
L_11d936c2:;
  /* 11d936c2 mov edx, dword ptr [0x11db1a14] */
  EDX = (r32((uint32_t)(0x11db1a14)));
  /* 11d936c8 push edx */
  push32((uint32_t)(EDX));
  /* 11d936c9 call 0x11d93d40 */
  push32(0x11d936ceu); f_11d93d40();
  /* 11d936ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d936d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d936d4:;
  /* 11d936d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d936d7 mov dword ptr [0x11db1a0c], eax */
  w32((uint32_t)(0x11db1a0c), (EAX));
  /* 11d936dc push 1 */
  push32((uint32_t)(0x1u));
  /* 11d936de push 0x11d93710 */
  push32((uint32_t)(0x11d93710u));
  /* 11d936e3 call dword ptr [0x11db42dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42dc))), 0x11d936e9u);
  /* 11d936e9 mov ecx, dword ptr [0x11db1a1c] */
  ECX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d936ef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11d936f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d936f4 jne 0x11d93700 */
  if (!C.zf) goto L_11d93700;
  /* 11d936f6 mov dword ptr [0x11db1a1c], 0 */
  w32((uint32_t)(0x11db1a1c), (0x0u));
L_11d93700:;
  /* 11d93700 mov esp, ebp */
  ESP = (EBP);
  /* 11d93702 pop ebp */
  EBP = (pop32());
  /* 11d93703 ret  */
  ESPCHK(0x11d93690u, _esp0);
  ESP += 4; return;
}

/* FUN_10013710 @ 0x11d93710 (287 bytes, 86 insns) */
void f_11d93710(void) {
  FTRACE(0x11d93710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d93710 push ebp */
  push32((uint32_t)(EBP));
  /* 11d93711 mov ebp, esp */
  EBP = (ESP);
  /* 11d93713 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93719 push eax */
  push32((uint32_t)(EAX));
  /* 11d9371a call 0x11d93cc0 */
  push32(0x11d9371fu); f_11d93cc0();
  /* 11d9371f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93722 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11d93725 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11d93727 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11d9372a push ecx */
  push32((uint32_t)(ECX));
  /* 11d9372b mov edx, dword ptr [0x11db1a10] */
  EDX = (r32((uint32_t)(0x11db1a10)));
  /* 11d93731 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d93733 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93735 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11d9373b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93741 push edx */
  push32((uint32_t)(EDX));
  /* 11d93742 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d93745 push eax */
  push32((uint32_t)(EAX));
  /* 11d93746 call dword ptr [0x11db1a24] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db1a24))), 0x11d9374cu);
  /* 11d9374c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d9374e jne 0x11d93764 */
  if (!C.zf) goto L_11d93764;
  /* 11d93750 mov dword ptr [0x11db1a1c], 0 */
  w32((uint32_t)(0x11db1a1c), (0x0u));
  /* 11d9375a mov eax, 1 */
  EAX = (0x1u);
  /* 11d9375f jmp 0x11d93829 */
  goto L_11d93829;
L_11d93764:;
  /* 11d93764 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11d93767 push ecx */
  push32((uint32_t)(ECX));
  /* 11d93768 mov edx, dword ptr [0x11db1a14] */
  EDX = (r32((uint32_t)(0x11db1a14)));
  /* 11d9376e push edx */
  push32((uint32_t)(EDX));
  /* 11d9376f call 0x11d959d0 */
  push32(0x11d93774u); f_11d959d0();
  /* 11d93774 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93777 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d93779 jne 0x11d937b9 */
  if (!C.zf) goto L_11d937b9;
  /* 11d9377b cmp dword ptr [0x11db1a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93782 jne 0x11d93796 */
  if (!C.zf) goto L_11d93796;
  /* 11d93784 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d93786 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d93789 push eax */
  push32((uint32_t)(EAX));
  /* 11d9378a call 0x11d93a50 */
  push32(0x11d9378fu); f_11d93a50();
  /* 11d9378f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93792 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d93794 je 0x11d937b7 */
  if (C.zf) goto L_11d937b7;
L_11d93796:;
  /* 11d93796 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d93799 mov dword ptr [0x11db1a20], ecx */
  w32((uint32_t)(0x11db1a20), (ECX));
  /* 11d9379f mov edx, dword ptr [0x11db1a20] */
  EDX = (r32((uint32_t)(0x11db1a20)));
  /* 11d937a5 mov dword ptr [0x11db1a04], edx */
  w32((uint32_t)(0x11db1a04), (EDX));
  /* 11d937ab mov eax, dword ptr [0x11db1a1c] */
  EAX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d937b0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11d937b2 mov dword ptr [0x11db1a1c], eax */
  w32((uint32_t)(0x11db1a1c), (EAX));
L_11d937b7:;
  /* 11d937b7 jmp 0x11d9381c */
  goto L_11d9381c;
L_11d937b9:;
  /* 11d937b9 cmp dword ptr [0x11db1a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d937c0 jne 0x11d9381c */
  if (!C.zf) goto L_11d9381c;
  /* 11d937c2 cmp dword ptr [0x11db1a0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d937c9 je 0x11d9381c */
  if (C.zf) goto L_11d9381c;
  /* 11d937cb mov ecx, dword ptr [0x11db1a0c] */
  ECX = (r32((uint32_t)(0x11db1a0c)));
  /* 11d937d1 push ecx */
  push32((uint32_t)(ECX));
  /* 11d937d2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11d937d5 push edx */
  push32((uint32_t)(EDX));
  /* 11d937d6 mov eax, dword ptr [0x11db1a14] */
  EAX = (r32((uint32_t)(0x11db1a14)));
  /* 11d937db push eax */
  push32((uint32_t)(EAX));
  /* 11d937dc call 0x11d95aa0 */
  push32(0x11d937e1u); f_11d95aa0();
  /* 11d937e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d937e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d937e6 jne 0x11d9381c */
  if (!C.zf) goto L_11d9381c;
  /* 11d937e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d937ea mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d937ed push ecx */
  push32((uint32_t)(ECX));
  /* 11d937ee call 0x11d93a50 */
  push32(0x11d937f3u); f_11d93a50();
  /* 11d937f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d937f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d937f8 je 0x11d9381c */
  if (C.zf) goto L_11d9381c;
  /* 11d937fa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d937fd mov dword ptr [0x11db1a20], edx */
  w32((uint32_t)(0x11db1a20), (EDX));
  /* 11d93803 mov eax, dword ptr [0x11db1a20] */
  EAX = (r32((uint32_t)(0x11db1a20)));
  /* 11d93808 mov dword ptr [0x11db1a04], eax */
  w32((uint32_t)(0x11db1a04), (EAX));
  /* 11d9380d mov ecx, dword ptr [0x11db1a1c] */
  ECX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d93813 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11d93816 mov dword ptr [0x11db1a1c], ecx */
  w32((uint32_t)(0x11db1a1c), (ECX));
L_11d9381c:;
  /* 11d9381c mov eax, dword ptr [0x11db1a1c] */
  EAX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d93821 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11d93824 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d93826 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93828 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11d93829:;
  /* 11d93829 mov esp, ebp */
  ESP = (EBP);
  /* 11d9382b pop ebp */
  EBP = (pop32());
  /* 11d9382c ret 4 */
  ESPCHK(0x11d93710u, _esp0);
  ESP += 8; return;
}

/* FUN_10013830 @ 0x11d93830 (69 bytes, 20 insns) */
void f_11d93830(void) {
  FTRACE(0x11d93830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d93830 push ebp */
  push32((uint32_t)(EBP));
  /* 11d93831 mov ebp, esp */
  EBP = (ESP);
  /* 11d93833 mov eax, dword ptr [0x11db1a18] */
  EAX = (r32((uint32_t)(0x11db1a18)));
  /* 11d93838 push eax */
  push32((uint32_t)(EAX));
  /* 11d93839 call 0x11d89620 */
  push32(0x11d9383eu); f_11d89620();
  /* 11d9383e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93841 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d93843 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93846 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11d93849 mov dword ptr [0x11db1a08], ecx */
  w32((uint32_t)(0x11db1a08), (ECX));
  /* 11d9384f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d93851 push 0x11d93880 */
  push32((uint32_t)(0x11d93880u));
  /* 11d93856 call dword ptr [0x11db42dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42dc))), 0x11d9385cu);
  /* 11d9385c mov edx, dword ptr [0x11db1a1c] */
  EDX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d93862 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11d93865 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d93867 jne 0x11d93873 */
  if (!C.zf) goto L_11d93873;
  /* 11d93869 mov dword ptr [0x11db1a1c], 0 */
  w32((uint32_t)(0x11db1a1c), (0x0u));
L_11d93873:;
  /* 11d93873 pop ebp */
  EBP = (pop32());
  /* 11d93874 ret  */
  ESPCHK(0x11d93830u, _esp0);
  ESP += 4; return;
}

/* FUN_10013880 @ 0x11d93880 (172 bytes, 54 insns) */
void f_11d93880(void) {
  FTRACE(0x11d93880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d93880 push ebp */
  push32((uint32_t)(EBP));
  /* 11d93881 mov ebp, esp */
  EBP = (ESP);
  /* 11d93883 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93886 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93889 push eax */
  push32((uint32_t)(EAX));
  /* 11d9388a call 0x11d93cc0 */
  push32(0x11d9388fu); f_11d93cc0();
  /* 11d9388f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93892 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11d93895 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11d93897 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11d9389a push ecx */
  push32((uint32_t)(ECX));
  /* 11d9389b mov edx, dword ptr [0x11db1a08] */
  EDX = (r32((uint32_t)(0x11db1a08)));
  /* 11d938a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d938a3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d938a5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11d938ab add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d938b1 push edx */
  push32((uint32_t)(EDX));
  /* 11d938b2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d938b5 push eax */
  push32((uint32_t)(EAX));
  /* 11d938b6 call dword ptr [0x11db1a24] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db1a24))), 0x11d938bcu);
  /* 11d938bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d938be jne 0x11d938d1 */
  if (!C.zf) goto L_11d938d1;
  /* 11d938c0 mov dword ptr [0x11db1a1c], 0 */
  w32((uint32_t)(0x11db1a1c), (0x0u));
  /* 11d938ca mov eax, 1 */
  EAX = (0x1u);
  /* 11d938cf jmp 0x11d93926 */
  goto L_11d93926;
L_11d938d1:;
  /* 11d938d1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11d938d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d938d5 mov edx, dword ptr [0x11db1a18] */
  EDX = (r32((uint32_t)(0x11db1a18)));
  /* 11d938db push edx */
  push32((uint32_t)(EDX));
  /* 11d938dc call 0x11d959d0 */
  push32(0x11d938e1u); f_11d959d0();
  /* 11d938e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d938e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d938e6 jne 0x11d93919 */
  if (!C.zf) goto L_11d93919;
  /* 11d938e8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d938eb push eax */
  push32((uint32_t)(EAX));
  /* 11d938ec call 0x11d93a00 */
  push32(0x11d938f1u); f_11d93a00();
  /* 11d938f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d938f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d938f6 je 0x11d93919 */
  if (C.zf) goto L_11d93919;
  /* 11d938f8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11d938fb mov dword ptr [0x11db1a20], ecx */
  w32((uint32_t)(0x11db1a20), (ECX));
  /* 11d93901 mov edx, dword ptr [0x11db1a20] */
  EDX = (r32((uint32_t)(0x11db1a20)));
  /* 11d93907 mov dword ptr [0x11db1a04], edx */
  w32((uint32_t)(0x11db1a04), (EDX));
  /* 11d9390d mov eax, dword ptr [0x11db1a1c] */
  EAX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d93912 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11d93914 mov dword ptr [0x11db1a1c], eax */
  w32((uint32_t)(0x11db1a1c), (EAX));
L_11d93919:;
  /* 11d93919 mov eax, dword ptr [0x11db1a1c] */
  EAX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d9391e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11d93921 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d93923 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93925 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11d93926:;
  /* 11d93926 mov esp, ebp */
  ESP = (EBP);
  /* 11d93928 pop ebp */
  EBP = (pop32());
  /* 11d93929 ret 4 */
  ESPCHK(0x11d93880u, _esp0);
  ESP += 8; return;
}

/* FUN_10013930 @ 0x11d93930 (43 bytes, 11 insns) */
void f_11d93930(void) {
  FTRACE(0x11d93930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d93930 push ebp */
  push32((uint32_t)(EBP));
  /* 11d93931 mov ebp, esp */
  EBP = (ESP);
  /* 11d93933 mov eax, dword ptr [0x11db1a1c] */
  EAX = (r32((uint32_t)(0x11db1a1c)));
  /* 11d93938 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11d9393d mov dword ptr [0x11db1a1c], eax */
  w32((uint32_t)(0x11db1a1c), (EAX));
  /* 11d93942 call dword ptr [0x11db42d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42d8))), 0x11d93948u);
  /* 11d93948 mov dword ptr [0x11db1a20], eax */
  w32((uint32_t)(0x11db1a20), (EAX));
  /* 11d9394d mov ecx, dword ptr [0x11db1a20] */
  ECX = (r32((uint32_t)(0x11db1a20)));
  /* 11d93953 mov dword ptr [0x11db1a04], ecx */
  w32((uint32_t)(0x11db1a04), (ECX));
  /* 11d93959 pop ebp */
  EBP = (pop32());
  /* 11d9395a ret  */
  ESPCHK(0x11d93930u, _esp0);
  ESP += 4; return;
}

/* FUN_10013960 @ 0x11d93960 (155 bytes, 57 insns) */
void f_11d93960(void) {
  FTRACE(0x11d93960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d93960 push ebp */
  push32((uint32_t)(EBP));
  /* 11d93961 mov ebp, esp */
  EBP = (ESP);
  /* 11d93963 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93966 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9396a je 0x11d9398b */
  if (C.zf) goto L_11d9398b;
  /* 11d9396c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9396f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d93972 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d93974 je 0x11d9398b */
  if (C.zf) goto L_11d9398b;
  /* 11d93976 push 0x11dadb94 */
  push32((uint32_t)(0x11dadb94u));
  /* 11d9397b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9397e push edx */
  push32((uint32_t)(EDX));
  /* 11d9397f call 0x11d8d280 */
  push32(0x11d93984u); f_11d8d280();
  /* 11d93984 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93987 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d93989 jne 0x11d939b3 */
  if (!C.zf) goto L_11d939b3;
L_11d9398b:;
  /* 11d9398b push 8 */
  push32((uint32_t)(0x8u));
  /* 11d9398d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11d93990 push eax */
  push32((uint32_t)(EAX));
  /* 11d93991 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11d93996 mov ecx, dword ptr [0x11db1a20] */
  ECX = (r32((uint32_t)(0x11db1a20)));
  /* 11d9399c push ecx */
  push32((uint32_t)(ECX));
  /* 11d9399d call dword ptr [0x11db1a24] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db1a24))), 0x11d939a3u);
  /* 11d939a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d939a5 jne 0x11d939ab */
  if (!C.zf) goto L_11d939ab;
  /* 11d939a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d939a9 jmp 0x11d939f7 */
  goto L_11d939f7;
L_11d939ab:;
  /* 11d939ab lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11d939ae mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11d939b1 jmp 0x11d939eb */
  goto L_11d939eb;
L_11d939b3:;
  /* 11d939b3 push 0x11dadb90 */
  push32((uint32_t)(0x11dadb90u));
  /* 11d939b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d939bb push eax */
  push32((uint32_t)(EAX));
  /* 11d939bc call 0x11d8d280 */
  push32(0x11d939c1u); f_11d8d280();
  /* 11d939c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d939c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d939c6 jne 0x11d939eb */
  if (!C.zf) goto L_11d939eb;
  /* 11d939c8 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d939ca lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11d939cd push ecx */
  push32((uint32_t)(ECX));
  /* 11d939ce push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d939d0 mov edx, dword ptr [0x11db1a20] */
  EDX = (r32((uint32_t)(0x11db1a20)));
  /* 11d939d6 push edx */
  push32((uint32_t)(EDX));
  /* 11d939d7 call dword ptr [0x11db1a24] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db1a24))), 0x11d939ddu);
  /* 11d939dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d939df jne 0x11d939e5 */
  if (!C.zf) goto L_11d939e5;
  /* 11d939e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d939e3 jmp 0x11d939f7 */
  goto L_11d939f7;
L_11d939e5:;
  /* 11d939e5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11d939e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11d939eb:;
  /* 11d939eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d939ee push ecx */
  push32((uint32_t)(ECX));
  /* 11d939ef call 0x11d8d030 */
  push32(0x11d939f4u); f_11d8d030();
  /* 11d939f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d939f7:;
  /* 11d939f7 mov esp, ebp */
  ESP = (EBP);
  /* 11d939f9 pop ebp */
  EBP = (pop32());
  /* 11d939fa ret  */
  ESPCHK(0x11d93960u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a00 @ 0x11d93a00 (79 bytes, 26 insns) */
void f_11d93a00(void) {
  FTRACE(0x11d93a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d93a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11d93a01 mov ebp, esp */
  EBP = (ESP);
  /* 11d93a03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93a06 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11d93a0a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11d93a0e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d93a15 jmp 0x11d93a20 */
  goto L_11d93a20;
L_11d93a17:;
  /* 11d93a17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d93a1a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93a1d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11d93a20:;
  /* 11d93a20 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93a24 jae 0x11d93a46 */
  if (!C.cf) goto L_11d93a46;
  /* 11d93a26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d93a29 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d93a2f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d93a32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d93a34 mov cx, word ptr [eax*2 + 0x11db0ae4] */
  CX = (r16((uint32_t)(EAX*2 + 0x11db0ae4)));
  /* 11d93a3c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93a3e jne 0x11d93a44 */
  if (!C.zf) goto L_11d93a44;
  /* 11d93a40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d93a42 jmp 0x11d93a4b */
  goto L_11d93a4b;
L_11d93a44:;
  /* 11d93a44 jmp 0x11d93a17 */
  goto L_11d93a17;
L_11d93a46:;
  /* 11d93a46 mov eax, 1 */
  EAX = (0x1u);
L_11d93a4b:;
  /* 11d93a4b mov esp, ebp */
  ESP = (EBP);
  /* 11d93a4d pop ebp */
  EBP = (pop32());
  /* 11d93a4e ret  */
  ESPCHK(0x11d93a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a50 @ 0x11d93a50 (135 bytes, 48 insns) */
void f_11d93a50(void) {
  FTRACE(0x11d93a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d93a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11d93a51 mov ebp, esp */
  EBP = (ESP);
  /* 11d93a53 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93a56 push esi */
  push32((uint32_t)(ESI));
  /* 11d93a57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93a5a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d93a5f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d93a64 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d93a69 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11d93a6c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d93a71 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d93a74 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11d93a76 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11d93a79 push ecx */
  push32((uint32_t)(ECX));
  /* 11d93a7a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d93a7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d93a7f push edx */
  push32((uint32_t)(EDX));
  /* 11d93a80 call dword ptr [0x11db1a24] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db1a24))), 0x11d93a86u);
  /* 11d93a86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d93a88 jne 0x11d93a8e */
  if (!C.zf) goto L_11d93a8e;
  /* 11d93a8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d93a8c jmp 0x11d93ad2 */
  goto L_11d93ad2;
L_11d93a8e:;
  /* 11d93a8e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11d93a91 push eax */
  push32((uint32_t)(EAX));
  /* 11d93a92 call 0x11d93cc0 */
  push32(0x11d93a97u); f_11d93cc0();
  /* 11d93a97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93a9a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93a9d je 0x11d93acd */
  if (C.zf) goto L_11d93acd;
  /* 11d93a9f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93aa3 je 0x11d93acd */
  if (C.zf) goto L_11d93acd;
  /* 11d93aa5 mov ecx, dword ptr [0x11db1a14] */
  ECX = (r32((uint32_t)(0x11db1a14)));
  /* 11d93aab push ecx */
  push32((uint32_t)(ECX));
  /* 11d93aac call 0x11d93d40 */
  push32(0x11d93ab1u); f_11d93d40();
  /* 11d93ab1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93ab4 mov esi, eax */
  ESI = (EAX);
  /* 11d93ab6 mov edx, dword ptr [0x11db1a14] */
  EDX = (r32((uint32_t)(0x11db1a14)));
  /* 11d93abc push edx */
  push32((uint32_t)(EDX));
  /* 11d93abd call 0x11d89620 */
  push32(0x11d93ac2u); f_11d89620();
  /* 11d93ac2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93ac5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93ac7 jne 0x11d93acd */
  if (!C.zf) goto L_11d93acd;
  /* 11d93ac9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d93acb jmp 0x11d93ad2 */
  goto L_11d93ad2;
L_11d93acd:;
  /* 11d93acd mov eax, 1 */
  EAX = (0x1u);
L_11d93ad2:;
  /* 11d93ad2 pop esi */
  ESI = (pop32());
  /* 11d93ad3 mov esp, ebp */
  ESP = (EBP);
  /* 11d93ad5 pop ebp */
  EBP = (pop32());
  /* 11d93ad6 ret  */
  ESPCHK(0x11d93a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ae0 @ 0x11d93ae0 (77 bytes, 18 insns) */
void f_11d93ae0(void) {
  FTRACE(0x11d93ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d93ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d93ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11d93ae3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93ae9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11d93af3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11d93af9 push eax */
  push32((uint32_t)(EAX));
  /* 11d93afa call dword ptr [0x11db42d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42d4))), 0x11d93b00u);
  /* 11d93b00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d93b02 je 0x11d93b19 */
  if (C.zf) goto L_11d93b19;
  /* 11d93b04 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93b0b jne 0x11d93b19 */
  if (!C.zf) goto L_11d93b19;
  /* 11d93b0d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11d93b17 jmp 0x11d93b23 */
  goto L_11d93b23;
L_11d93b19:;
  /* 11d93b19 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11d93b23:;
  /* 11d93b23 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11d93b29 mov esp, ebp */
  ESP = (EBP);
  /* 11d93b2b pop ebp */
  EBP = (pop32());
  /* 11d93b2c ret  */
  ESPCHK(0x11d93ae0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11d93b30 (388 bytes, 118 insns) */
void f_11d93b30(void) {
  FTRACE(0x11d93b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d93b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11d93b31 mov ebp, esp */
  EBP = (ESP);
  /* 11d93b33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93b36 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d93b3d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11d93b44 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11d93b4b:;
  /* 11d93b4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d93b4e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93b51 jg 0x11d93c98 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d93c98;
  /* 11d93b57 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d93b5a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93b5d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d93b5e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93b60 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d93b62 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d93b65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d93b68 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d93b6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93b6e cmp edx, dword ptr [ecx + 0x11db0640] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11db0640))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93b74 jne 0x11d93c6e */
  if (!C.zf) goto L_11d93c6e;
  /* 11d93b7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d93b7d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d93b80 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93b84 ja 0x11d93ba7 */
  if ((!C.cf&&!C.zf)) goto L_11d93ba7;
  /* 11d93b86 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93b8a je 0x11d93c19 */
  if (C.zf) goto L_11d93c19;
  /* 11d93b90 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93b94 je 0x11d93bc4 */
  if (C.zf) goto L_11d93bc4;
  /* 11d93b96 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93b9a je 0x11d93be6 */
  if (C.zf) goto L_11d93be6;
  /* 11d93b9c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93ba0 je 0x11d93c08 */
  if (C.zf) goto L_11d93c08;
  /* 11d93ba2 jmp 0x11d93c38 */
  goto L_11d93c38;
L_11d93ba7:;
  /* 11d93ba7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93bae je 0x11d93bd5 */
  if (C.zf) goto L_11d93bd5;
  /* 11d93bb0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93bb7 je 0x11d93bf7 */
  if (C.zf) goto L_11d93bf7;
  /* 11d93bb9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93bc0 je 0x11d93c2a */
  if (C.zf) goto L_11d93c2a;
  /* 11d93bc2 jmp 0x11d93c38 */
  goto L_11d93c38;
L_11d93bc4:;
  /* 11d93bc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d93bc7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d93bca add ecx, 0x11db0644 */
  { uint32_t _a=(ECX),_b=(0x11db0644u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93bd0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d93bd3 jmp 0x11d93c38 */
  goto L_11d93c38;
L_11d93bd5:;
  /* 11d93bd5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d93bd8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d93bdb mov eax, dword ptr [edx + 0x11db064c] */
  EAX = (r32((uint32_t)(EDX + 0x11db064c)));
  /* 11d93be1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d93be4 jmp 0x11d93c38 */
  goto L_11d93c38;
L_11d93be6:;
  /* 11d93be6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d93be9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d93bec add ecx, 0x11db0650 */
  { uint32_t _a=(ECX),_b=(0x11db0650u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93bf2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d93bf5 jmp 0x11d93c38 */
  goto L_11d93c38;
L_11d93bf7:;
  /* 11d93bf7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d93bfa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d93bfd mov eax, dword ptr [edx + 0x11db0654] */
  EAX = (r32((uint32_t)(EDX + 0x11db0654)));
  /* 11d93c03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d93c06 jmp 0x11d93c38 */
  goto L_11d93c38;
L_11d93c08:;
  /* 11d93c08 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d93c0b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d93c0e add ecx, 0x11db0658 */
  { uint32_t _a=(ECX),_b=(0x11db0658u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93c14 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d93c17 jmp 0x11d93c38 */
  goto L_11d93c38;
L_11d93c19:;
  /* 11d93c19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d93c1c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d93c1f add edx, 0x11db065c */
  { uint32_t _a=(EDX),_b=(0x11db065cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93c25 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d93c28 jmp 0x11d93c38 */
  goto L_11d93c38;
L_11d93c2a:;
  /* 11d93c2a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d93c2d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d93c30 add eax, 0x11db0664 */
  { uint32_t _a=(EAX),_b=(0x11db0664u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93c35 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d93c38:;
  /* 11d93c38 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93c3c je 0x11d93c44 */
  if (C.zf) goto L_11d93c44;
  /* 11d93c3e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93c42 jge 0x11d93c46 */
  if ((C.sf==C.of)) goto L_11d93c46;
L_11d93c44:;
  /* 11d93c44 jmp 0x11d93c98 */
  goto L_11d93c98;
L_11d93c46:;
  /* 11d93c46 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d93c49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93c4c push ecx */
  push32((uint32_t)(ECX));
  /* 11d93c4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d93c50 push edx */
  push32((uint32_t)(EDX));
  /* 11d93c51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d93c54 push eax */
  push32((uint32_t)(EAX));
  /* 11d93c55 call 0x11d8a010 */
  push32(0x11d93c5au); f_11d8a010();
  /* 11d93c5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93c5d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d93c60 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93c63 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11d93c67 mov eax, 1 */
  EAX = (0x1u);
  /* 11d93c6c jmp 0x11d93cae */
  goto L_11d93cae;
L_11d93c6e:;
  /* 11d93c6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d93c71 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d93c74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93c77 cmp eax, dword ptr [edx + 0x11db0640] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11db0640))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93c7d jae 0x11d93c8a */
  if (!C.cf) goto L_11d93c8a;
  /* 11d93c7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d93c82 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93c85 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d93c88 jmp 0x11d93c93 */
  goto L_11d93c93;
L_11d93c8a:;
  /* 11d93c8a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d93c8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93c90 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11d93c93:;
  /* 11d93c93 jmp 0x11d93b4b */
  goto L_11d93b4b;
L_11d93c98:;
  /* 11d93c98 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d93c9b push eax */
  push32((uint32_t)(EAX));
  /* 11d93c9c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d93c9f push ecx */
  push32((uint32_t)(ECX));
  /* 11d93ca0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d93ca3 push edx */
  push32((uint32_t)(EDX));
  /* 11d93ca4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93ca7 push eax */
  push32((uint32_t)(EAX));
  /* 11d93ca8 call dword ptr [0x11db42e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42e0))), 0x11d93caeu);
L_11d93cae:;
  /* 11d93cae mov esp, ebp */
  ESP = (EBP);
  /* 11d93cb0 pop ebp */
  EBP = (pop32());
  /* 11d93cb1 ret 0x10 */
  ESPCHK(0x11d93b30u, _esp0);
  ESP += 20; return;
}

/* FUN_10013cc0 @ 0x11d93cc0 (118 bytes, 42 insns) */
void f_11d93cc0(void) {
  FTRACE(0x11d93cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d93cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d93cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11d93cc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93cc6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d93ccd:;
  /* 11d93ccd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93cd0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d93cd2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11d93cd5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d93cd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93cdc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93cdf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d93ce2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d93ce4 je 0x11d93d2f */
  if (C.zf) goto L_11d93d2f;
  /* 11d93ce6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d93cea cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93ced jl 0x11d93d02 */
  if ((C.sf!=C.of)) goto L_11d93d02;
  /* 11d93cef movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d93cf3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93cf6 jg 0x11d93d02 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d93d02;
  /* 11d93cf8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11d93cfb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d93cfd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11d93d00 jmp 0x11d93d1c */
  goto L_11d93d1c;
L_11d93d02:;
  /* 11d93d02 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d93d06 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93d09 jl 0x11d93d1c */
  if ((C.sf!=C.of)) goto L_11d93d1c;
  /* 11d93d0b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d93d0f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93d12 jg 0x11d93d1c */
  if ((!C.zf&&C.sf==C.of)) goto L_11d93d1c;
  /* 11d93d14 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11d93d17 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d93d19 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11d93d1c:;
  /* 11d93d1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d93d1f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11d93d22 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d93d26 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11d93d2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d93d2d jmp 0x11d93ccd */
  goto L_11d93ccd;
L_11d93d2f:;
  /* 11d93d2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d93d32 mov esp, ebp */
  ESP = (EBP);
  /* 11d93d34 pop ebp */
  EBP = (pop32());
  /* 11d93d35 ret  */
  ESPCHK(0x11d93cc0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11d93d40 (101 bytes, 36 insns) */
void f_11d93d40(void) {
  FTRACE(0x11d93d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d93d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11d93d41 mov ebp, esp */
  EBP = (ESP);
  /* 11d93d43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d93d46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d93d4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93d50 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d93d52 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11d93d55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93d58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93d5b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11d93d5e:;
  /* 11d93d5e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11d93d62 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93d65 jl 0x11d93d70 */
  if ((C.sf!=C.of)) goto L_11d93d70;
  /* 11d93d67 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11d93d6b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93d6e jle 0x11d93d82 */
  if ((C.zf||C.sf!=C.of)) goto L_11d93d82;
L_11d93d70:;
  /* 11d93d70 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11d93d74 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93d77 jl 0x11d93d9e */
  if ((C.sf!=C.of)) goto L_11d93d9e;
  /* 11d93d79 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11d93d7d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93d80 jg 0x11d93d9e */
  if ((!C.zf&&C.sf==C.of)) goto L_11d93d9e;
L_11d93d82:;
  /* 11d93d82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d93d85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93d88 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d93d8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93d8e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d93d90 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11d93d93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93d96 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93d99 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11d93d9c jmp 0x11d93d5e */
  goto L_11d93d5e;
L_11d93d9e:;
  /* 11d93d9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d93da1 mov esp, ebp */
  ESP = (EBP);
  /* 11d93da3 pop ebp */
  EBP = (pop32());
  /* 11d93da4 ret  */
  ESPCHK(0x11d93d40u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11d93dc0 (193 bytes, 91 insns) */
void f_11d93dc0(void) {
  FTRACE(0x11d93dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d93dc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d93dc2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11d93dc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11d93dc7 mov ebx, eax */
  EBX = (EAX);
  /* 11d93dc9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11d93dcc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d93dd0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11d93dd6 je 0x11d93deb */
  if (C.zf) goto L_11d93deb;
L_11d93dd8:;
  /* 11d93dd8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11d93dda inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11d93ddb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d93ddd je 0x11d93db0 */
  if (C.zf) { jmp_ind(0x11d93db0u); return; }
  /* 11d93ddf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11d93de1 je 0x11d93e34 */
  if (C.zf) goto L_11d93e34;
  /* 11d93de3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11d93de9 jne 0x11d93dd8 */
  if (!C.zf) goto L_11d93dd8;
L_11d93deb:;
  /* 11d93deb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11d93ded push edi */
  push32((uint32_t)(EDI));
  /* 11d93dee mov eax, ebx */
  EAX = (EBX);
  /* 11d93df0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11d93df3 push esi */
  push32((uint32_t)(ESI));
  /* 11d93df4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11d93df6:;
  /* 11d93df6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11d93df8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11d93dfd mov eax, ecx */
  EAX = (ECX);
  /* 11d93dff mov esi, edi */
  ESI = (EDI);
  /* 11d93e01 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11d93e03 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93e05 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93e07 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d93e0a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d93e0d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11d93e0f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11d93e11 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93e14 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11d93e1a jne 0x11d93e38 */
  if (!C.zf) goto L_11d93e38;
  /* 11d93e1c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11d93e21 je 0x11d93df6 */
  if (C.zf) goto L_11d93df6;
  /* 11d93e23 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11d93e28 jne 0x11d93e32 */
  if (!C.zf) goto L_11d93e32;
  /* 11d93e2a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11d93e30 jne 0x11d93df6 */
  if (!C.zf) goto L_11d93df6;
L_11d93e32:;
  /* 11d93e32 pop esi */
  ESI = (pop32());
  /* 11d93e33 pop edi */
  EDI = (pop32());
L_11d93e34:;
  /* 11d93e34 pop ebx */
  EBX = (pop32());
  /* 11d93e35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d93e37 ret  */
  ESPCHK(0x11d93dc0u, _esp0);
  ESP += 4; return;
L_11d93e38:;
  /* 11d93e38 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11d93e3b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d93e3d je 0x11d93e75 */
  if (C.zf) goto L_11d93e75;
  /* 11d93e3f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d93e41 je 0x11d93e32 */
  if (C.zf) goto L_11d93e32;
  /* 11d93e43 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d93e45 je 0x11d93e6e */
  if (C.zf) goto L_11d93e6e;
  /* 11d93e47 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11d93e49 je 0x11d93e32 */
  if (C.zf) goto L_11d93e32;
  /* 11d93e4b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d93e4e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d93e50 je 0x11d93e67 */
  if (C.zf) goto L_11d93e67;
  /* 11d93e52 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d93e54 je 0x11d93e32 */
  if (C.zf) goto L_11d93e32;
  /* 11d93e56 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d93e58 je 0x11d93e60 */
  if (C.zf) goto L_11d93e60;
  /* 11d93e5a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11d93e5c je 0x11d93e32 */
  if (C.zf) goto L_11d93e32;
  /* 11d93e5e jmp 0x11d93df6 */
  goto L_11d93df6;
L_11d93e60:;
  /* 11d93e60 pop esi */
  ESI = (pop32());
  /* 11d93e61 pop edi */
  EDI = (pop32());
  /* 11d93e62 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11d93e65 pop ebx */
  EBX = (pop32());
  /* 11d93e66 ret  */
  ESPCHK(0x11d93dc0u, _esp0);
  ESP += 4; return;
L_11d93e67:;
  /* 11d93e67 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11d93e6a pop esi */
  ESI = (pop32());
  /* 11d93e6b pop edi */
  EDI = (pop32());
  /* 11d93e6c pop ebx */
  EBX = (pop32());
  /* 11d93e6d ret  */
  ESPCHK(0x11d93dc0u, _esp0);
  ESP += 4; return;
L_11d93e6e:;
  /* 11d93e6e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11d93e71 pop esi */
  ESI = (pop32());
  /* 11d93e72 pop edi */
  EDI = (pop32());
  /* 11d93e73 pop ebx */
  EBX = (pop32());
  /* 11d93e74 ret  */
  ESPCHK(0x11d93dc0u, _esp0);
  ESP += 4; return;
L_11d93e75:;
  /* 11d93e75 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11d93e78 pop esi */
  ESI = (pop32());
  /* 11d93e79 pop edi */
  EDI = (pop32());
  /* 11d93e7a pop ebx */
  EBX = (pop32());
  /* 11d93e7b ret  */
  ESPCHK(0x11d93dc0u, _esp0);
  ESP += 4; return;
  /* 11d93e7c int3  */
  x86_unimpl("int3 @ 0x11d93e7c");
  /* 11d93e7d int3  */
  x86_unimpl("int3 @ 0x11d93e7d");
  /* 11d93e7e int3  */
  x86_unimpl("int3 @ 0x11d93e7e");
  /* 11d93e7f int3  */
  x86_unimpl("int3 @ 0x11d93e7f");
  /* 11d93e80 push ebp */
  push32((uint32_t)(EBP));
}

/* FUN_10013e80 @ 0x11d93e80 (122 bytes, 39 insns) */
void f_11d93e80(void) {
  FTRACE(0x11d93e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d93e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11d93e81 mov ebp, esp */
  EBP = (ESP);
  /* 11d93e83 push ecx */
  push32((uint32_t)(ECX));
  /* 11d93e84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93e87 cmp eax, dword ptr [0x11db31fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11db31fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93e8d jae 0x11d93eb1 */
  if (!C.cf) goto L_11d93eb1;
  /* 11d93e8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93e92 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d93e95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93e98 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11d93e9b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d93e9e mov eax, dword ptr [ecx*4 + 0x11db30c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11db30c0)));
  /* 11d93ea5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11d93eaa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d93ead test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d93eaf jne 0x11d93ecc */
  if (!C.zf) goto L_11d93ecc;
L_11d93eb1:;
  /* 11d93eb1 call 0x11d8e6c0 */
  push32(0x11d93eb6u); f_11d8e6c0();
  /* 11d93eb6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d93ebc call 0x11d8e6d0 */
  push32(0x11d93ec1u); f_11d8e6d0();
  /* 11d93ec1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d93ec7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d93eca jmp 0x11d93ef6 */
  goto L_11d93ef6;
L_11d93ecc:;
  /* 11d93ecc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93ecf push edx */
  push32((uint32_t)(EDX));
  /* 11d93ed0 call 0x11d908c0 */
  push32(0x11d93ed5u); f_11d908c0();
  /* 11d93ed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93ed8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93edb push eax */
  push32((uint32_t)(EAX));
  /* 11d93edc call 0x11d93f00 */
  push32(0x11d93ee1u); f_11d93f00();
  /* 11d93ee1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93ee4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d93ee7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93eea push ecx */
  push32((uint32_t)(ECX));
  /* 11d93eeb call 0x11d90950 */
  push32(0x11d93ef0u); f_11d90950();
  /* 11d93ef0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93ef3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d93ef6:;
  /* 11d93ef6 mov esp, ebp */
  ESP = (EBP);
  /* 11d93ef8 pop ebp */
  EBP = (pop32());
  /* 11d93ef9 ret  */
  ESPCHK(0x11d93e80u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11d93f00 (170 bytes, 59 insns) */
void f_11d93f00(void) {
  FTRACE(0x11d93f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d93f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11d93f01 mov ebp, esp */
  EBP = (ESP);
  /* 11d93f03 push ecx */
  push32((uint32_t)(ECX));
  /* 11d93f04 push esi */
  push32((uint32_t)(ESI));
  /* 11d93f05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93f08 push eax */
  push32((uint32_t)(EAX));
  /* 11d93f09 call 0x11d90740 */
  push32(0x11d93f0eu); f_11d90740();
  /* 11d93f0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93f11 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93f14 je 0x11d93f53 */
  if (C.zf) goto L_11d93f53;
  /* 11d93f16 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93f1a je 0x11d93f22 */
  if (C.zf) goto L_11d93f22;
  /* 11d93f1c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93f20 jne 0x11d93f3c */
  if (!C.zf) goto L_11d93f3c;
L_11d93f22:;
  /* 11d93f22 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d93f24 call 0x11d90740 */
  push32(0x11d93f29u); f_11d90740();
  /* 11d93f29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93f2c mov esi, eax */
  ESI = (EAX);
  /* 11d93f2e push 2 */
  push32((uint32_t)(0x2u));
  /* 11d93f30 call 0x11d90740 */
  push32(0x11d93f35u); f_11d90740();
  /* 11d93f35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93f38 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93f3a je 0x11d93f53 */
  if (C.zf) goto L_11d93f53;
L_11d93f3c:;
  /* 11d93f3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93f3f push ecx */
  push32((uint32_t)(ECX));
  /* 11d93f40 call 0x11d90740 */
  push32(0x11d93f45u); f_11d90740();
  /* 11d93f45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93f48 push eax */
  push32((uint32_t)(EAX));
  /* 11d93f49 call dword ptr [0x11db42d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42d0))), 0x11d93f4fu);
  /* 11d93f4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d93f51 je 0x11d93f5c */
  if (C.zf) goto L_11d93f5c;
L_11d93f53:;
  /* 11d93f53 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d93f5a jmp 0x11d93f65 */
  goto L_11d93f65;
L_11d93f5c:;
  /* 11d93f5c call dword ptr [0x11db43a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43a0))), 0x11d93f62u);
  /* 11d93f62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d93f65:;
  /* 11d93f65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93f68 push edx */
  push32((uint32_t)(EDX));
  /* 11d93f69 call 0x11d90660 */
  push32(0x11d93f6eu); f_11d90660();
  /* 11d93f6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93f71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93f74 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d93f77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93f7a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d93f7d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d93f80 mov edx, dword ptr [eax*4 + 0x11db30c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11db30c0)));
  /* 11d93f87 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 11d93f8c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93f90 je 0x11d93fa3 */
  if (C.zf) goto L_11d93fa3;
  /* 11d93f92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d93f95 push eax */
  push32((uint32_t)(EAX));
  /* 11d93f96 call 0x11d8e620 */
  push32(0x11d93f9bu); f_11d8e620();
  /* 11d93f9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93f9e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d93fa1 jmp 0x11d93fa5 */
  goto L_11d93fa5;
L_11d93fa3:;
  /* 11d93fa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d93fa5:;
  /* 11d93fa5 pop esi */
  ESI = (pop32());
  /* 11d93fa6 mov esp, ebp */
  ESP = (EBP);
  /* 11d93fa8 pop ebp */
  EBP = (pop32());
  /* 11d93fa9 ret  */
  ESPCHK(0x11d93f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10013fb0 @ 0x11d93fb0 (146 bytes, 52 insns) */
void f_11d93fb0(void) {
  FTRACE(0x11d93fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d93fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d93fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11d93fb3 push ebx */
  push32((uint32_t)(EBX));
  /* 11d93fb4 push esi */
  push32((uint32_t)(ESI));
  /* 11d93fb5 push edi */
  push32((uint32_t)(EDI));
L_11d93fb6:;
  /* 11d93fb6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93fba jne 0x11d93fda */
  if (!C.zf) goto L_11d93fda;
  /* 11d93fbc push 0x11dad4d0 */
  push32((uint32_t)(0x11dad4d0u));
  /* 11d93fc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d93fc3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11d93fc5 push 0x11dadb98 */
  push32((uint32_t)(0x11dadb98u));
  /* 11d93fca push 2 */
  push32((uint32_t)(0x2u));
  /* 11d93fcc call 0x11d84e40 */
  push32(0x11d93fd1u); f_11d84e40();
  /* 11d93fd1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d93fd4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d93fd7 jne 0x11d93fda */
  if (!C.zf) goto L_11d93fda;
  /* 11d93fd9 int3  */
  x86_unimpl("int3 @ 0x11d93fd9");
L_11d93fda:;
  /* 11d93fda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d93fdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d93fde jne 0x11d93fb6 */
  if (!C.zf) goto L_11d93fb6;
  /* 11d93fe0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93fe3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d93fe6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11d93fec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d93fee je 0x11d9403d */
  if (C.zf) goto L_11d9403d;
  /* 11d93ff0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d93ff3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d93ff6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11d93ff9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d93ffb je 0x11d9403d */
  if (C.zf) goto L_11d9403d;
  /* 11d93ffd push 2 */
  push32((uint32_t)(0x2u));
  /* 11d93fff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d94002 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d94005 push eax */
  push32((uint32_t)(EAX));
  /* 11d94006 call 0x11d86560 */
  push32(0x11d9400bu); f_11d86560();
  /* 11d9400b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9400e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d94011 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d94014 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11d9401a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9401d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11d94020 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d94023 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11d94029 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9402c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11d94033 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d94036 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11d9403d:;
  /* 11d9403d pop edi */
  EDI = (pop32());
  /* 11d9403e pop esi */
  ESI = (pop32());
  /* 11d9403f pop ebx */
  EBX = (pop32());
  /* 11d94040 pop ebp */
  EBP = (pop32());
  /* 11d94041 ret  */
  ESPCHK(0x11d93fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014050 @ 0x11d94050 (289 bytes, 97 insns) */
void f_11d94050(void) {
  FTRACE(0x11d94050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d94050 push ebp */
  push32((uint32_t)(EBP));
  /* 11d94051 mov ebp, esp */
  EBP = (ESP);
  /* 11d94053 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d94056 push esi */
  push32((uint32_t)(ESI));
  /* 11d94057 mov eax, dword ptr [0x11db0dc0] */
  EAX = (r32((uint32_t)(0x11db0dc0)));
  /* 11d9405c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d9405f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d94066 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d9406d jmp 0x11d94078 */
  goto L_11d94078;
L_11d9406f:;
  /* 11d9406f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d94072 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94075 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11d94078:;
  /* 11d94078 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9407c jae 0x11d940b1 */
  if (!C.cf) goto L_11d940b1;
  /* 11d9407e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d94081 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d94084 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11d94087 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94088 call 0x11d89620 */
  push32(0x11d9408du); f_11d89620();
  /* 11d9408d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94090 mov esi, eax */
  ESI = (EAX);
  /* 11d94092 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d94095 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d94098 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11d9409c push ecx */
  push32((uint32_t)(ECX));
  /* 11d9409d call 0x11d89620 */
  push32(0x11d940a2u); f_11d89620();
  /* 11d940a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d940a5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d940a8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11d940ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d940af jmp 0x11d9406f */
  goto L_11d9406f;
L_11d940b1:;
  /* 11d940b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d940b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d940b7 push eax */
  push32((uint32_t)(EAX));
  /* 11d940b8 call 0x11d85ab0 */
  push32(0x11d940bdu); f_11d85ab0();
  /* 11d940bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d940c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d940c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d940c7 je 0x11d94169 */
  if (C.zf) goto L_11d94169;
  /* 11d940cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d940d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d940d3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d940da jmp 0x11d940e5 */
  goto L_11d940e5;
L_11d940dc:;
  /* 11d940dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d940df add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d940e2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11d940e5:;
  /* 11d940e5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d940e9 jae 0x11d9415a */
  if (!C.cf) goto L_11d9415a;
  /* 11d940eb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d940ee mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11d940f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d940f4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d940f7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d940fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d940fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d94100 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11d94103 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94104 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94107 push edx */
  push32((uint32_t)(EDX));
  /* 11d94108 call 0x11d897a0 */
  push32(0x11d9410du); f_11d897a0();
  /* 11d9410d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94110 push eax */
  push32((uint32_t)(EAX));
  /* 11d94111 call 0x11d89620 */
  push32(0x11d94116u); f_11d89620();
  /* 11d94116 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94119 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d9411c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9411e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d94121 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94124 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11d94127 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d9412a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9412d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d94130 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d94133 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d94136 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11d9413a push eax */
  push32((uint32_t)(EAX));
  /* 11d9413b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d9413e push ecx */
  push32((uint32_t)(ECX));
  /* 11d9413f call 0x11d897a0 */
  push32(0x11d94144u); f_11d897a0();
  /* 11d94144 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94147 push eax */
  push32((uint32_t)(EAX));
  /* 11d94148 call 0x11d89620 */
  push32(0x11d9414du); f_11d89620();
  /* 11d9414d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94150 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94153 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94155 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d94158 jmp 0x11d940dc */
  goto L_11d940dc;
L_11d9415a:;
  /* 11d9415a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d9415d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11d94160 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94163 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94166 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11d94169:;
  /* 11d94169 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9416c pop esi */
  ESI = (pop32());
  /* 11d9416d mov esp, ebp */
  ESP = (EBP);
  /* 11d9416f pop ebp */
  EBP = (pop32());
  /* 11d94170 ret  */
  ESPCHK(0x11d94050u, _esp0);
  ESP += 4; return;
}

/* FUN_10014180 @ 0x11d94180 (291 bytes, 97 insns) */
void f_11d94180(void) {
  FTRACE(0x11d94180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d94180 push ebp */
  push32((uint32_t)(EBP));
  /* 11d94181 mov ebp, esp */
  EBP = (ESP);
  /* 11d94183 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d94186 push esi */
  push32((uint32_t)(ESI));
  /* 11d94187 mov eax, dword ptr [0x11db0dc0] */
  EAX = (r32((uint32_t)(0x11db0dc0)));
  /* 11d9418c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d9418f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d94196 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d9419d jmp 0x11d941a8 */
  goto L_11d941a8;
L_11d9419f:;
  /* 11d9419f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d941a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d941a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11d941a8:;
  /* 11d941a8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d941ac jae 0x11d941e2 */
  if (!C.cf) goto L_11d941e2;
  /* 11d941ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d941b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d941b4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11d941b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11d941b9 call 0x11d89620 */
  push32(0x11d941beu); f_11d89620();
  /* 11d941be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d941c1 mov esi, eax */
  ESI = (EAX);
  /* 11d941c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d941c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d941c9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11d941cd push ecx */
  push32((uint32_t)(ECX));
  /* 11d941ce call 0x11d89620 */
  push32(0x11d941d3u); f_11d89620();
  /* 11d941d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d941d6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d941d9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11d941dd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d941e0 jmp 0x11d9419f */
  goto L_11d9419f;
L_11d941e2:;
  /* 11d941e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d941e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d941e8 push eax */
  push32((uint32_t)(EAX));
  /* 11d941e9 call 0x11d85ab0 */
  push32(0x11d941eeu); f_11d85ab0();
  /* 11d941ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d941f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d941f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d941f8 je 0x11d9429b */
  if (C.zf) goto L_11d9429b;
  /* 11d941fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d94201 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d94204 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d9420b jmp 0x11d94216 */
  goto L_11d94216;
L_11d9420d:;
  /* 11d9420d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d94210 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94213 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11d94216:;
  /* 11d94216 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9421a jae 0x11d9428c */
  if (!C.cf) goto L_11d9428c;
  /* 11d9421c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d9421f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11d94222 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94225 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94228 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d9422b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d9422e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d94231 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11d94235 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94236 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94239 push edx */
  push32((uint32_t)(EDX));
  /* 11d9423a call 0x11d897a0 */
  push32(0x11d9423fu); f_11d897a0();
  /* 11d9423f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94242 push eax */
  push32((uint32_t)(EAX));
  /* 11d94243 call 0x11d89620 */
  push32(0x11d94248u); f_11d89620();
  /* 11d94248 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9424b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d9424e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94250 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d94253 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94256 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11d94259 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d9425c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9425f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d94262 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d94265 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d94268 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11d9426c push eax */
  push32((uint32_t)(EAX));
  /* 11d9426d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94270 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94271 call 0x11d897a0 */
  push32(0x11d94276u); f_11d897a0();
  /* 11d94276 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94279 push eax */
  push32((uint32_t)(EAX));
  /* 11d9427a call 0x11d89620 */
  push32(0x11d9427fu); f_11d89620();
  /* 11d9427f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94282 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94285 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94287 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d9428a jmp 0x11d9420d */
  goto L_11d9420d;
L_11d9428c:;
  /* 11d9428c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d9428f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11d94292 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94295 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94298 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11d9429b:;
  /* 11d9429b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9429e pop esi */
  ESI = (pop32());
  /* 11d9429f mov esp, ebp */
  ESP = (EBP);
  /* 11d942a1 pop ebp */
  EBP = (pop32());
  /* 11d942a2 ret  */
  ESPCHK(0x11d94180u, _esp0);
  ESP += 4; return;
}

/* FUN_100142b0 @ 0x11d942b0 (878 bytes, 273 insns) */
void f_11d942b0(void) {
  FTRACE(0x11d942b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d942b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d942b1 mov ebp, esp */
  EBP = (ESP);
  /* 11d942b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d942b6 push esi */
  push32((uint32_t)(ESI));
  /* 11d942b7 mov eax, dword ptr [0x11db0dc0] */
  EAX = (r32((uint32_t)(0x11db0dc0)));
  /* 11d942bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d942bf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d942c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d942cd jmp 0x11d942d8 */
  goto L_11d942d8;
L_11d942cf:;
  /* 11d942cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d942d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d942d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11d942d8:;
  /* 11d942d8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d942dc jae 0x11d94311 */
  if (!C.cf) goto L_11d94311;
  /* 11d942de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d942e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d942e4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11d942e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d942e8 call 0x11d89620 */
  push32(0x11d942edu); f_11d89620();
  /* 11d942ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d942f0 mov esi, eax */
  ESI = (EAX);
  /* 11d942f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d942f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d942f8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11d942fc push ecx */
  push32((uint32_t)(ECX));
  /* 11d942fd call 0x11d89620 */
  push32(0x11d94302u); f_11d89620();
  /* 11d94302 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94305 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94308 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11d9430c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d9430f jmp 0x11d942cf */
  goto L_11d942cf;
L_11d94311:;
  /* 11d94311 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d94318 jmp 0x11d94323 */
  goto L_11d94323;
L_11d9431a:;
  /* 11d9431a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d9431d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94320 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11d94323:;
  /* 11d94323 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94327 jae 0x11d9435d */
  if (!C.cf) goto L_11d9435d;
  /* 11d94329 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d9432c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d9432f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11d94333 push eax */
  push32((uint32_t)(EAX));
  /* 11d94334 call 0x11d89620 */
  push32(0x11d94339u); f_11d89620();
  /* 11d94339 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9433c mov esi, eax */
  ESI = (EAX);
  /* 11d9433e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d94341 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d94344 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11d94348 push eax */
  push32((uint32_t)(EAX));
  /* 11d94349 call 0x11d89620 */
  push32(0x11d9434eu); f_11d89620();
  /* 11d9434e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94351 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94354 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11d94358 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d9435b jmp 0x11d9431a */
  goto L_11d9431a;
L_11d9435d:;
  /* 11d9435d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d94360 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11d94366 push eax */
  push32((uint32_t)(EAX));
  /* 11d94367 call 0x11d89620 */
  push32(0x11d9436cu); f_11d89620();
  /* 11d9436c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9436f mov esi, eax */
  ESI = (EAX);
  /* 11d94371 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d94374 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 11d9437a push edx */
  push32((uint32_t)(EDX));
  /* 11d9437b call 0x11d89620 */
  push32(0x11d94380u); f_11d89620();
  /* 11d94380 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94383 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94386 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11d9438a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d9438d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d94390 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11d94396 push edx */
  push32((uint32_t)(EDX));
  /* 11d94397 call 0x11d89620 */
  push32(0x11d9439cu); f_11d89620();
  /* 11d9439c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9439f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d943a2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11d943a6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d943a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d943ac mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11d943b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d943b3 call 0x11d89620 */
  push32(0x11d943b8u); f_11d89620();
  /* 11d943b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d943bb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d943be lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11d943c2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d943c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d943c8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11d943ce push edx */
  push32((uint32_t)(EDX));
  /* 11d943cf call 0x11d89620 */
  push32(0x11d943d4u); f_11d89620();
  /* 11d943d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d943d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d943da lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11d943de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d943e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d943e4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d943e9 push eax */
  push32((uint32_t)(EAX));
  /* 11d943ea call 0x11d85ab0 */
  push32(0x11d943efu); f_11d85ab0();
  /* 11d943ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d943f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d943f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d943f9 je 0x11d94616 */
  if (C.zf) goto L_11d94616;
  /* 11d943ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d94402 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11d94405 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d94408 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9440e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d94411 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11d94416 mov eax, dword ptr [0x11db0dc0] */
  EAX = (r32((uint32_t)(0x11db0dc0)));
  /* 11d9441b push eax */
  push32((uint32_t)(EAX));
  /* 11d9441c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9441f push ecx */
  push32((uint32_t)(ECX));
  /* 11d94420 call 0x11d8ccf0 */
  push32(0x11d94425u); f_11d8ccf0();
  /* 11d94425 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94428 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d9442f jmp 0x11d9443a */
  goto L_11d9443a;
L_11d94431:;
  /* 11d94431 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d94434 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94437 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11d9443a:;
  /* 11d9443a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9443e jae 0x11d944ae */
  if (!C.cf) goto L_11d944ae;
  /* 11d94440 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d94443 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d94446 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94449 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11d9444c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d9444f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d94452 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11d94455 push edx */
  push32((uint32_t)(EDX));
  /* 11d94456 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94459 push eax */
  push32((uint32_t)(EAX));
  /* 11d9445a call 0x11d897a0 */
  push32(0x11d9445fu); f_11d897a0();
  /* 11d9445f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94462 push eax */
  push32((uint32_t)(EAX));
  /* 11d94463 call 0x11d89620 */
  push32(0x11d94468u); f_11d89620();
  /* 11d94468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9446b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d9446e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11d94472 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d94475 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d94478 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d9447b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d9447e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11d94482 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d94485 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d94488 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 11d9448c push edx */
  push32((uint32_t)(EDX));
  /* 11d9448d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94490 push eax */
  push32((uint32_t)(EAX));
  /* 11d94491 call 0x11d897a0 */
  push32(0x11d94496u); f_11d897a0();
  /* 11d94496 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94499 push eax */
  push32((uint32_t)(EAX));
  /* 11d9449a call 0x11d89620 */
  push32(0x11d9449fu); f_11d89620();
  /* 11d9449f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d944a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d944a5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11d944a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d944ac jmp 0x11d94431 */
  goto L_11d94431;
L_11d944ae:;
  /* 11d944ae mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d944b5 jmp 0x11d944c0 */
  goto L_11d944c0;
L_11d944b7:;
  /* 11d944b7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d944ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d944bd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11d944c0:;
  /* 11d944c0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d944c4 jae 0x11d94536 */
  if (!C.cf) goto L_11d94536;
  /* 11d944c6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d944c9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d944cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d944cf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11d944d3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d944d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d944d9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11d944dd push eax */
  push32((uint32_t)(EAX));
  /* 11d944de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d944e1 push ecx */
  push32((uint32_t)(ECX));
  /* 11d944e2 call 0x11d897a0 */
  push32(0x11d944e7u); f_11d897a0();
  /* 11d944e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d944ea push eax */
  push32((uint32_t)(EAX));
  /* 11d944eb call 0x11d89620 */
  push32(0x11d944f0u); f_11d89620();
  /* 11d944f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d944f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d944f6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11d944fa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d944fd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d94500 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d94503 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94506 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 11d9450a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d9450d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d94510 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11d94514 push eax */
  push32((uint32_t)(EAX));
  /* 11d94515 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94518 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94519 call 0x11d897a0 */
  push32(0x11d9451eu); f_11d897a0();
  /* 11d9451e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94521 push eax */
  push32((uint32_t)(EAX));
  /* 11d94522 call 0x11d89620 */
  push32(0x11d94527u); f_11d89620();
  /* 11d94527 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9452a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d9452d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11d94531 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d94534 jmp 0x11d944b7 */
  goto L_11d944b7;
L_11d94536:;
  /* 11d94536 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d94539 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d9453c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11d94542 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d94545 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11d9454b push ecx */
  push32((uint32_t)(ECX));
  /* 11d9454c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d9454f push edx */
  push32((uint32_t)(EDX));
  /* 11d94550 call 0x11d897a0 */
  push32(0x11d94555u); f_11d897a0();
  /* 11d94555 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94558 push eax */
  push32((uint32_t)(EAX));
  /* 11d94559 call 0x11d89620 */
  push32(0x11d9455eu); f_11d89620();
  /* 11d9455e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94561 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94564 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11d94568 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d9456b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d9456e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94571 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11d94577 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d9457a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11d94580 push eax */
  push32((uint32_t)(EAX));
  /* 11d94581 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94584 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94585 call 0x11d897a0 */
  push32(0x11d9458au); f_11d897a0();
  /* 11d9458a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9458d push eax */
  push32((uint32_t)(EAX));
  /* 11d9458e call 0x11d89620 */
  push32(0x11d94593u); f_11d89620();
  /* 11d94593 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94596 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94599 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11d9459d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d945a0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d945a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d945a6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 11d945ac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d945af mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11d945b5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d945b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d945b9 push edx */
  push32((uint32_t)(EDX));
  /* 11d945ba call 0x11d897a0 */
  push32(0x11d945bfu); f_11d897a0();
  /* 11d945bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d945c2 push eax */
  push32((uint32_t)(EAX));
  /* 11d945c3 call 0x11d89620 */
  push32(0x11d945c8u); f_11d89620();
  /* 11d945c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d945cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d945ce lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11d945d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d945d5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d945d8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d945db mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11d945e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d945e4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11d945ea push eax */
  push32((uint32_t)(EAX));
  /* 11d945eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d945ee push ecx */
  push32((uint32_t)(ECX));
  /* 11d945ef call 0x11d897a0 */
  push32(0x11d945f4u); f_11d897a0();
  /* 11d945f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d945f7 push eax */
  push32((uint32_t)(EAX));
  /* 11d945f8 call 0x11d89620 */
  push32(0x11d945fdu); f_11d89620();
  /* 11d945fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94600 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94603 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11d94607 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d9460a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d9460d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d94610 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11d94616:;
  /* 11d94616 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d94619 pop esi */
  ESI = (pop32());
  /* 11d9461a mov esp, ebp */
  ESP = (EBP);
  /* 11d9461c pop ebp */
  EBP = (pop32());
  /* 11d9461d ret  */
  ESPCHK(0x11d942b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014620 @ 0x11d94620 (31 bytes, 15 insns) */
void f_11d94620(void) {
  FTRACE(0x11d94620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d94620 push ebp */
  push32((uint32_t)(EBP));
  /* 11d94621 mov ebp, esp */
  EBP = (ESP);
  /* 11d94623 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d94625 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94628 push eax */
  push32((uint32_t)(EAX));
  /* 11d94629 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d9462c push ecx */
  push32((uint32_t)(ECX));
  /* 11d9462d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94630 push edx */
  push32((uint32_t)(EDX));
  /* 11d94631 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d94634 push eax */
  push32((uint32_t)(EAX));
  /* 11d94635 call 0x11d94640 */
  push32(0x11d9463au); f_11d94640();
  /* 11d9463a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9463d pop ebp */
  EBP = (pop32());
  /* 11d9463e ret  */
  ESPCHK(0x11d94620u, _esp0);
  ESP += 4; return;
}

/* FUN_10014640 @ 0x11d94640 (393 bytes, 123 insns) */
void f_11d94640(void) {
  FTRACE(0x11d94640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d94640 push ebp */
  push32((uint32_t)(EBP));
  /* 11d94641 mov ebp, esp */
  EBP = (ESP);
  /* 11d94643 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d94646 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9464a jne 0x11d94656 */
  if (!C.zf) goto L_11d94656;
  /* 11d9464c mov eax, dword ptr [0x11db0dc0] */
  EAX = (r32((uint32_t)(0x11db0dc0)));
  /* 11d94651 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d94654 jmp 0x11d9465c */
  goto L_11d9465c;
L_11d94656:;
  /* 11d94656 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d94659 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11d9465c:;
  /* 11d9465c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d9465f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d94662 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94665 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d94668 push 0x11db1a64 */
  push32((uint32_t)(0x11db1a64u));
  /* 11d9466d call dword ptr [0x11db43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43c4))), 0x11d94673u);
  /* 11d94673 cmp dword ptr [0x11db1a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9467a je 0x11d9469a */
  if (C.zf) goto L_11d9469a;
  /* 11d9467c push 0x11db1a64 */
  push32((uint32_t)(0x11db1a64u));
  /* 11d94681 call dword ptr [0x11db43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43b4))), 0x11d94687u);
  /* 11d94687 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d94689 call 0x11d886f0 */
  push32(0x11d9468eu); f_11d886f0();
  /* 11d9468e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94691 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11d94698 jmp 0x11d946a1 */
  goto L_11d946a1;
L_11d9469a:;
  /* 11d9469a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11d946a1:;
  /* 11d946a1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d946a5 jbe 0x11d94792 */
  if ((C.cf||C.zf)) goto L_11d94792;
  /* 11d946ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d946ae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d946b0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11d946b3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d946b7 je 0x11d946c1 */
  if (C.zf) goto L_11d946c1;
  /* 11d946b9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d946bd je 0x11d946c6 */
  if (C.zf) goto L_11d946c6;
  /* 11d946bf jmp 0x11d94720 */
  goto L_11d94720;
L_11d946c1:;
  /* 11d946c1 jmp 0x11d94792 */
  goto L_11d94792;
L_11d946c6:;
  /* 11d946c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d946c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d946cc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11d946cf mov dword ptr [0x11db1a40], 0 */
  w32((uint32_t)(0x11db1a40), (0x0u));
  /* 11d946d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d946dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d946df cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d946e2 jne 0x11d946f7 */
  if (!C.zf) goto L_11d946f7;
  /* 11d946e4 mov dword ptr [0x11db1a40], 1 */
  w32((uint32_t)(0x11db1a40), (0x1u));
  /* 11d946ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d946f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d946f4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11d946f7:;
  /* 11d946f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d946fa push ecx */
  push32((uint32_t)(ECX));
  /* 11d946fb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11d946fe push edx */
  push32((uint32_t)(EDX));
  /* 11d946ff lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11d94702 push eax */
  push32((uint32_t)(EAX));
  /* 11d94703 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94706 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94707 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d9470a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d9470c push eax */
  push32((uint32_t)(EAX));
  /* 11d9470d call 0x11d947d0 */
  push32(0x11d94712u); f_11d947d0();
  /* 11d94712 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94715 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94718 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9471b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11d9471e jmp 0x11d9478d */
  goto L_11d9478d;
L_11d94720:;
  /* 11d94720 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94723 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d94725 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d94727 mov ecx, dword ptr [0x11dafdb8] */
  ECX = (r32((uint32_t)(0x11dafdb8)));
  /* 11d9472d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d9472f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11d94733 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11d94739 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d9473b je 0x11d94768 */
  if (C.zf) goto L_11d94768;
  /* 11d9473d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94741 jbe 0x11d94768 */
  if ((C.cf||C.zf)) goto L_11d94768;
  /* 11d94743 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d94746 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94749 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d9474b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d9474d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d94750 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94753 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d94756 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94759 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9475c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11d9475f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d94762 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d94765 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11d94768:;
  /* 11d94768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9476b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d9476e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d94770 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d94772 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d94775 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94778 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d9477b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d9477e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94781 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11d94784 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d94787 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d9478a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11d9478d:;
  /* 11d9478d jmp 0x11d946a1 */
  goto L_11d946a1;
L_11d94792:;
  /* 11d94792 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94796 je 0x11d947a4 */
  if (C.zf) goto L_11d947a4;
  /* 11d94798 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d9479a call 0x11d88790 */
  push32(0x11d9479fu); f_11d88790();
  /* 11d9479f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d947a2 jmp 0x11d947af */
  goto L_11d947af;
L_11d947a4:;
  /* 11d947a4 push 0x11db1a64 */
  push32((uint32_t)(0x11db1a64u));
  /* 11d947a9 call dword ptr [0x11db43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43b4))), 0x11d947afu);
L_11d947af:;
  /* 11d947af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d947b3 jbe 0x11d947c3 */
  if ((C.cf||C.zf)) goto L_11d947c3;
  /* 11d947b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d947b8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11d947bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d947be sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d947c1 jmp 0x11d947c5 */
  goto L_11d947c5;
L_11d947c3:;
  /* 11d947c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d947c5:;
  /* 11d947c5 mov esp, ebp */
  ESP = (EBP);
  /* 11d947c7 pop ebp */
  EBP = (pop32());
  /* 11d947c8 ret  */
  ESPCHK(0x11d94640u, _esp0);
  ESP += 4; return;
}

/* FUN_100147d0 @ 0x11d947d0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11d947d0(void) {
  FTRACE(0x11d947d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d947d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d947d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d947d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d947d6 push esi */
  push32((uint32_t)(ESI));
  /* 11d947d7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11d947db mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d947de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d947e1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d947e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d947e7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d947eb ja 0x11d94d38 */
  if ((!C.cf&&!C.zf)) goto L_11d94d38;
  /* 11d947f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d947f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d947f6 mov dl, byte ptr [eax + 0x11d94d99] */
  DL = (r8((uint32_t)(EAX + 0x11d94d99)));
  /* 11d947fc jmp dword ptr [edx*4 + 0x11d94d3d] */
  switch (EDX) {
    case 0: goto L_11d94d16;
    case 1: goto L_11d94825;
    case 2: goto L_11d9486b;
    case 3: goto L_11d949b8;
    case 4: goto L_11d949e0;
    case 5: goto L_11d94a7f;
    case 6: goto L_11d94aeb;
    case 7: goto L_11d94b14;
    case 8: goto L_11d94b55;
    case 9: goto L_11d94c37;
    case 10: goto L_11d94c9e;
    case 11: goto L_11d94ceb;
    case 12: goto L_11d94803;
    case 13: goto L_11d94848;
    case 14: goto L_11d9488e;
    case 15: goto L_11d9498e;
    case 16: goto L_11d94a25;
    case 17: goto L_11d94a52;
    case 18: goto L_11d94aa7;
    case 19: goto L_11d94b2b;
    case 20: goto L_11d94bd9;
    case 21: goto L_11d94c68;
    case 22: goto L_11d94d38;
    default: x86_unimpl("switch@0x11d947fc out of table"); return;
  }
L_11d94803:;
  /* 11d94803 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94806 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94807 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d9480a push edx */
  push32((uint32_t)(EDX));
  /* 11d9480b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d9480e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11d94811 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d94814 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11d94817 push eax */
  push32((uint32_t)(EAX));
  /* 11d94818 call 0x11d94df0 */
  push32(0x11d9481du); f_11d94df0();
  /* 11d9481d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94820 jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d94825:;
  /* 11d94825 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94828 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94829 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d9482c push edx */
  push32((uint32_t)(EDX));
  /* 11d9482d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94830 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11d94833 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d94836 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11d9483a push eax */
  push32((uint32_t)(EAX));
  /* 11d9483b call 0x11d94df0 */
  push32(0x11d94840u); f_11d94df0();
  /* 11d94840 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94843 jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d94848:;
  /* 11d94848 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d9484b push ecx */
  push32((uint32_t)(ECX));
  /* 11d9484c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d9484f push edx */
  push32((uint32_t)(EDX));
  /* 11d94850 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94853 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d94856 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d94859 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11d9485d push eax */
  push32((uint32_t)(EAX));
  /* 11d9485e call 0x11d94df0 */
  push32(0x11d94863u); f_11d94df0();
  /* 11d94863 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94866 jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d9486b:;
  /* 11d9486b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d9486e push ecx */
  push32((uint32_t)(ECX));
  /* 11d9486f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94872 push edx */
  push32((uint32_t)(EDX));
  /* 11d94873 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94876 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d94879 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d9487c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11d94880 push eax */
  push32((uint32_t)(EAX));
  /* 11d94881 call 0x11d94df0 */
  push32(0x11d94886u); f_11d94df0();
  /* 11d94886 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94889 jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d9488e:;
  /* 11d9488e cmp dword ptr [0x11db1a40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94895 je 0x11d94916 */
  if (C.zf) goto L_11d94916;
  /* 11d94897 mov dword ptr [0x11db1a40], 0 */
  w32((uint32_t)(0x11db1a40), (0x0u));
  /* 11d948a1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d948a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d948a5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d948a8 push edx */
  push32((uint32_t)(EDX));
  /* 11d948a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d948ac push eax */
  push32((uint32_t)(EAX));
  /* 11d948ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d948b0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d948b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d948b4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11d948ba push eax */
  push32((uint32_t)(EAX));
  /* 11d948bb call 0x11d94fa0 */
  push32(0x11d948c0u); f_11d94fa0();
  /* 11d948c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d948c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d948c6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d948c9 jne 0x11d948d0 */
  if (!C.zf) goto L_11d948d0;
  /* 11d948cb jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d948d0:;
  /* 11d948d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d948d3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d948d5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11d948d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d948db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d948dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d948e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d948e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d948e5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d948e8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d948ea sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d948ed mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d948f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d948f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d948f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d948f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d948f9 push edx */
  push32((uint32_t)(EDX));
  /* 11d948fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d948fd push eax */
  push32((uint32_t)(EAX));
  /* 11d948fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94901 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94902 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d94905 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11d9490b push eax */
  push32((uint32_t)(EAX));
  /* 11d9490c call 0x11d94fa0 */
  push32(0x11d94911u); f_11d94fa0();
  /* 11d94911 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94914 jmp 0x11d94989 */
  goto L_11d94989;
L_11d94916:;
  /* 11d94916 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d94919 push ecx */
  push32((uint32_t)(ECX));
  /* 11d9491a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d9491d push edx */
  push32((uint32_t)(EDX));
  /* 11d9491e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94921 push eax */
  push32((uint32_t)(EAX));
  /* 11d94922 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94925 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94926 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d94929 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11d9492f push eax */
  push32((uint32_t)(EAX));
  /* 11d94930 call 0x11d94fa0 */
  push32(0x11d94935u); f_11d94fa0();
  /* 11d94935 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94938 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d9493b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9493e jne 0x11d94945 */
  if (!C.zf) goto L_11d94945;
  /* 11d94940 jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d94945:;
  /* 11d94945 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94948 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d9494a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11d9494d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94950 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d94952 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94955 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94958 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d9495a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d9495d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d9495f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d94962 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94965 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d94967 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d9496a push ecx */
  push32((uint32_t)(ECX));
  /* 11d9496b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d9496e push edx */
  push32((uint32_t)(EDX));
  /* 11d9496f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94972 push eax */
  push32((uint32_t)(EAX));
  /* 11d94973 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94976 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94977 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d9497a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11d94980 push eax */
  push32((uint32_t)(EAX));
  /* 11d94981 call 0x11d94fa0 */
  push32(0x11d94986u); f_11d94fa0();
  /* 11d94986 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d94989:;
  /* 11d94989 jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d9498e:;
  /* 11d9498e mov ecx, dword ptr [0x11db1a40] */
  ECX = (r32((uint32_t)(0x11db1a40)));
  /* 11d94994 mov dword ptr [0x11db1a50], ecx */
  w32((uint32_t)(0x11db1a50), (ECX));
  /* 11d9499a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d9499d push edx */
  push32((uint32_t)(EDX));
  /* 11d9499e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d949a1 push eax */
  push32((uint32_t)(EAX));
  /* 11d949a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d949a4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d949a7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d949aa push edx */
  push32((uint32_t)(EDX));
  /* 11d949ab call 0x11d94e40 */
  push32(0x11d949b0u); f_11d94e40();
  /* 11d949b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d949b3 jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d949b8:;
  /* 11d949b8 mov eax, dword ptr [0x11db1a40] */
  EAX = (r32((uint32_t)(0x11db1a40)));
  /* 11d949bd mov dword ptr [0x11db1a50], eax */
  w32((uint32_t)(0x11db1a50), (EAX));
  /* 11d949c2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d949c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d949c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d949c9 push edx */
  push32((uint32_t)(EDX));
  /* 11d949ca push 2 */
  push32((uint32_t)(0x2u));
  /* 11d949cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d949cf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d949d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d949d3 call 0x11d94e40 */
  push32(0x11d949d8u); f_11d94e40();
  /* 11d949d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d949db jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d949e0:;
  /* 11d949e0 mov edx, dword ptr [0x11db1a40] */
  EDX = (r32((uint32_t)(0x11db1a40)));
  /* 11d949e6 mov dword ptr [0x11db1a50], edx */
  w32((uint32_t)(0x11db1a50), (EDX));
  /* 11d949ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d949ef mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d949f2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d949f3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11d949f8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d949fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d949fd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94a01 jne 0x11d94a0a */
  if (!C.zf) goto L_11d94a0a;
  /* 11d94a03 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11d94a0a:;
  /* 11d94a0a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94a0d push edx */
  push32((uint32_t)(EDX));
  /* 11d94a0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94a11 push eax */
  push32((uint32_t)(EAX));
  /* 11d94a12 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d94a14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d94a17 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94a18 call 0x11d94e40 */
  push32(0x11d94a1du); f_11d94e40();
  /* 11d94a1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94a20 jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d94a25:;
  /* 11d94a25 mov edx, dword ptr [0x11db1a40] */
  EDX = (r32((uint32_t)(0x11db1a40)));
  /* 11d94a2b mov dword ptr [0x11db1a50], edx */
  w32((uint32_t)(0x11db1a50), (EDX));
  /* 11d94a31 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94a34 push eax */
  push32((uint32_t)(EAX));
  /* 11d94a35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94a38 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94a39 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d94a3b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94a3e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11d94a41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94a44 push eax */
  push32((uint32_t)(EAX));
  /* 11d94a45 call 0x11d94e40 */
  push32(0x11d94a4au); f_11d94e40();
  /* 11d94a4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94a4d jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d94a52:;
  /* 11d94a52 mov ecx, dword ptr [0x11db1a40] */
  ECX = (r32((uint32_t)(0x11db1a40)));
  /* 11d94a58 mov dword ptr [0x11db1a50], ecx */
  w32((uint32_t)(0x11db1a50), (ECX));
  /* 11d94a5e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94a61 push edx */
  push32((uint32_t)(EDX));
  /* 11d94a62 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94a65 push eax */
  push32((uint32_t)(EAX));
  /* 11d94a66 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d94a68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94a6b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11d94a6e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94a71 push edx */
  push32((uint32_t)(EDX));
  /* 11d94a72 call 0x11d94e40 */
  push32(0x11d94a77u); f_11d94e40();
  /* 11d94a77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94a7a jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d94a7f:;
  /* 11d94a7f mov eax, dword ptr [0x11db1a40] */
  EAX = (r32((uint32_t)(0x11db1a40)));
  /* 11d94a84 mov dword ptr [0x11db1a50], eax */
  w32((uint32_t)(0x11db1a50), (EAX));
  /* 11d94a89 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94a8c push ecx */
  push32((uint32_t)(ECX));
  /* 11d94a8d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94a90 push edx */
  push32((uint32_t)(EDX));
  /* 11d94a91 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d94a93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94a96 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d94a99 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94a9a call 0x11d94e40 */
  push32(0x11d94a9fu); f_11d94e40();
  /* 11d94a9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94aa2 jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d94aa7:;
  /* 11d94aa7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94aaa cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94aae jg 0x11d94acc */
  if ((!C.zf&&C.sf==C.of)) goto L_11d94acc;
  /* 11d94ab0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94ab3 push eax */
  push32((uint32_t)(EAX));
  /* 11d94ab4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94ab7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94ab8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d94abb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11d94ac1 push eax */
  push32((uint32_t)(EAX));
  /* 11d94ac2 call 0x11d94df0 */
  push32(0x11d94ac7u); f_11d94df0();
  /* 11d94ac7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94aca jmp 0x11d94ae6 */
  goto L_11d94ae6;
L_11d94acc:;
  /* 11d94acc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94acf push ecx */
  push32((uint32_t)(ECX));
  /* 11d94ad0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94ad3 push edx */
  push32((uint32_t)(EDX));
  /* 11d94ad4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d94ad7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11d94add push ecx */
  push32((uint32_t)(ECX));
  /* 11d94ade call 0x11d94df0 */
  push32(0x11d94ae3u); f_11d94df0();
  /* 11d94ae3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d94ae6:;
  /* 11d94ae6 jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d94aeb:;
  /* 11d94aeb mov edx, dword ptr [0x11db1a40] */
  EDX = (r32((uint32_t)(0x11db1a40)));
  /* 11d94af1 mov dword ptr [0x11db1a50], edx */
  w32((uint32_t)(0x11db1a50), (EDX));
  /* 11d94af7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94afa push eax */
  push32((uint32_t)(EAX));
  /* 11d94afb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94afe push ecx */
  push32((uint32_t)(ECX));
  /* 11d94aff push 2 */
  push32((uint32_t)(0x2u));
  /* 11d94b01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94b04 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d94b06 push eax */
  push32((uint32_t)(EAX));
  /* 11d94b07 call 0x11d94e40 */
  push32(0x11d94b0cu); f_11d94e40();
  /* 11d94b0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94b0f jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d94b14:;
  /* 11d94b14 mov ecx, dword ptr [0x11db1a40] */
  ECX = (r32((uint32_t)(0x11db1a40)));
  /* 11d94b1a mov dword ptr [0x11db1a50], ecx */
  w32((uint32_t)(0x11db1a50), (ECX));
  /* 11d94b20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94b23 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11d94b26 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d94b29 jmp 0x11d94b7d */
  goto L_11d94b7d;
L_11d94b2b:;
  /* 11d94b2b mov ecx, dword ptr [0x11db1a40] */
  ECX = (r32((uint32_t)(0x11db1a40)));
  /* 11d94b31 mov dword ptr [0x11db1a50], ecx */
  w32((uint32_t)(0x11db1a50), (ECX));
  /* 11d94b37 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94b3a push edx */
  push32((uint32_t)(EDX));
  /* 11d94b3b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94b3e push eax */
  push32((uint32_t)(EAX));
  /* 11d94b3f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d94b41 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94b44 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11d94b47 push edx */
  push32((uint32_t)(EDX));
  /* 11d94b48 call 0x11d94e40 */
  push32(0x11d94b4du); f_11d94e40();
  /* 11d94b4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94b50 jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d94b55:;
  /* 11d94b55 mov eax, dword ptr [0x11db1a40] */
  EAX = (r32((uint32_t)(0x11db1a40)));
  /* 11d94b5a mov dword ptr [0x11db1a50], eax */
  w32((uint32_t)(0x11db1a50), (EAX));
  /* 11d94b5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94b62 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94b66 jne 0x11d94b71 */
  if (!C.zf) goto L_11d94b71;
  /* 11d94b68 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11d94b6f jmp 0x11d94b7d */
  goto L_11d94b7d;
L_11d94b71:;
  /* 11d94b71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94b74 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11d94b77 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d94b7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d94b7d:;
  /* 11d94b7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94b80 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11d94b83 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94b86 jge 0x11d94b91 */
  if ((C.sf==C.of)) goto L_11d94b91;
  /* 11d94b88 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d94b8f jmp 0x11d94bbe */
  goto L_11d94bbe;
L_11d94b91:;
  /* 11d94b91 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94b94 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11d94b97 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d94b98 mov ecx, 7 */
  ECX = (0x7u);
  /* 11d94b9d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d94b9f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d94ba2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94ba5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11d94ba8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d94ba9 mov ecx, 7 */
  ECX = (0x7u);
  /* 11d94bae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d94bb0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94bb3 jl 0x11d94bbe */
  if ((C.sf!=C.of)) goto L_11d94bbe;
  /* 11d94bb5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d94bb8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94bbb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d94bbe:;
  /* 11d94bbe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94bc1 push eax */
  push32((uint32_t)(EAX));
  /* 11d94bc2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94bc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94bc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d94bc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d94bcb push edx */
  push32((uint32_t)(EDX));
  /* 11d94bcc call 0x11d94e40 */
  push32(0x11d94bd1u); f_11d94e40();
  /* 11d94bd1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94bd4 jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d94bd9:;
  /* 11d94bd9 cmp dword ptr [0x11db1a40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94be0 je 0x11d94c10 */
  if (C.zf) goto L_11d94c10;
  /* 11d94be2 mov dword ptr [0x11db1a40], 0 */
  w32((uint32_t)(0x11db1a40), (0x0u));
  /* 11d94bec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d94bef push eax */
  push32((uint32_t)(EAX));
  /* 11d94bf0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94bf4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94bf7 push edx */
  push32((uint32_t)(EDX));
  /* 11d94bf8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94bfb push eax */
  push32((uint32_t)(EAX));
  /* 11d94bfc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d94bff mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11d94c05 push edx */
  push32((uint32_t)(EDX));
  /* 11d94c06 call 0x11d94fa0 */
  push32(0x11d94c0bu); f_11d94fa0();
  /* 11d94c0b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94c0e jmp 0x11d94c32 */
  goto L_11d94c32;
L_11d94c10:;
  /* 11d94c10 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d94c13 push eax */
  push32((uint32_t)(EAX));
  /* 11d94c14 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94c17 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94c18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94c1b push edx */
  push32((uint32_t)(EDX));
  /* 11d94c1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94c1f push eax */
  push32((uint32_t)(EAX));
  /* 11d94c20 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d94c23 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11d94c29 push edx */
  push32((uint32_t)(EDX));
  /* 11d94c2a call 0x11d94fa0 */
  push32(0x11d94c2fu); f_11d94fa0();
  /* 11d94c2f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d94c32:;
  /* 11d94c32 jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d94c37:;
  /* 11d94c37 mov dword ptr [0x11db1a40], 0 */
  w32((uint32_t)(0x11db1a40), (0x0u));
  /* 11d94c41 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d94c44 push eax */
  push32((uint32_t)(EAX));
  /* 11d94c45 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94c48 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94c49 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94c4c push edx */
  push32((uint32_t)(EDX));
  /* 11d94c4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94c50 push eax */
  push32((uint32_t)(EAX));
  /* 11d94c51 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d94c54 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11d94c5a push edx */
  push32((uint32_t)(EDX));
  /* 11d94c5b call 0x11d94fa0 */
  push32(0x11d94c60u); f_11d94fa0();
  /* 11d94c60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94c63 jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d94c68:;
  /* 11d94c68 mov eax, dword ptr [0x11db1a40] */
  EAX = (r32((uint32_t)(0x11db1a40)));
  /* 11d94c6d mov dword ptr [0x11db1a50], eax */
  w32((uint32_t)(0x11db1a50), (EAX));
  /* 11d94c72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94c75 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11d94c78 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d94c79 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11d94c7e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d94c80 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d94c83 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94c86 push edx */
  push32((uint32_t)(EDX));
  /* 11d94c87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94c8a push eax */
  push32((uint32_t)(EAX));
  /* 11d94c8b push 2 */
  push32((uint32_t)(0x2u));
  /* 11d94c8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d94c90 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94c91 call 0x11d94e40 */
  push32(0x11d94c96u); f_11d94e40();
  /* 11d94c96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94c99 jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d94c9e:;
  /* 11d94c9e mov edx, dword ptr [0x11db1a40] */
  EDX = (r32((uint32_t)(0x11db1a40)));
  /* 11d94ca4 mov dword ptr [0x11db1a50], edx */
  w32((uint32_t)(0x11db1a50), (EDX));
  /* 11d94caa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94cad mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d94cb0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d94cb1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11d94cb6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d94cb8 mov ecx, eax */
  ECX = (EAX);
  /* 11d94cba add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94cbd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d94cc0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94cc3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d94cc6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d94cc7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11d94ccc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d94cce add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94cd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d94cd3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94cd6 push eax */
  push32((uint32_t)(EAX));
  /* 11d94cd7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94cda push ecx */
  push32((uint32_t)(ECX));
  /* 11d94cdb push 4 */
  push32((uint32_t)(0x4u));
  /* 11d94cdd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d94ce0 push edx */
  push32((uint32_t)(EDX));
  /* 11d94ce1 call 0x11d94e40 */
  push32(0x11d94ce6u); f_11d94e40();
  /* 11d94ce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94ce9 jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d94ceb:;
  /* 11d94ceb call 0x11d889f0 */
  push32(0x11d94cf0u); f_11d889f0();
  /* 11d94cf0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94cf3 push eax */
  push32((uint32_t)(EAX));
  /* 11d94cf4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94cf7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94cf8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94cfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d94cfd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94d01 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11d94d04 mov ecx, dword ptr [eax*4 + 0x11dafd14] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11dafd14)));
  /* 11d94d0b push ecx */
  push32((uint32_t)(ECX));
  /* 11d94d0c call 0x11d94df0 */
  push32(0x11d94d11u); f_11d94df0();
  /* 11d94d11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94d14 jmp 0x11d94d38 */
  goto L_11d94d38;
L_11d94d16:;
  /* 11d94d16 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94d19 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d94d1b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11d94d1e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94d21 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d94d23 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94d26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94d29 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d94d2b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94d2e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d94d30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d94d33 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94d36 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11d94d38:;
  /* 11d94d38 pop esi */
  ESI = (pop32());
  /* 11d94d39 mov esp, ebp */
  ESP = (EBP);
  /* 11d94d3b pop ebp */
  EBP = (pop32());
  /* 11d94d3c ret  */
  ESPCHK(0x11d947d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11d94df0 (72 bytes, 30 insns) */
void f_11d94df0(void) {
  FTRACE(0x11d94df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d94df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d94df1 mov ebp, esp */
  EBP = (ESP);
L_11d94df3:;
  /* 11d94df3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94df6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94df9 je 0x11d94e36 */
  if (C.zf) goto L_11d94e36;
  /* 11d94dfb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d94dfe movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d94e01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d94e03 je 0x11d94e36 */
  if (C.zf) goto L_11d94e36;
  /* 11d94e05 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94e08 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d94e0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d94e0d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d94e0f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d94e11 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94e14 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d94e16 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94e19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94e1c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d94e1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d94e21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94e24 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11d94e27 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94e2a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d94e2c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d94e2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94e32 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d94e34 jmp 0x11d94df3 */
  goto L_11d94df3;
L_11d94e36:;
  /* 11d94e36 pop ebp */
  EBP = (pop32());
  /* 11d94e37 ret  */
  ESPCHK(0x11d94df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e40 @ 0x11d94e40 (173 bytes, 64 insns) */
void f_11d94e40(void) {
  FTRACE(0x11d94e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d94e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11d94e41 mov ebp, esp */
  EBP = (ESP);
  /* 11d94e43 push ecx */
  push32((uint32_t)(ECX));
  /* 11d94e44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d94e4b cmp dword ptr [0x11db1a50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94e52 je 0x11d94e6a */
  if (C.zf) goto L_11d94e6a;
  /* 11d94e54 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94e57 push eax */
  push32((uint32_t)(EAX));
  /* 11d94e58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94e5b push ecx */
  push32((uint32_t)(ECX));
  /* 11d94e5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d94e5f push edx */
  push32((uint32_t)(EDX));
  /* 11d94e60 call 0x11d94ef0 */
  push32(0x11d94e65u); f_11d94ef0();
  /* 11d94e65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94e68 jmp 0x11d94ee9 */
  goto L_11d94ee9;
L_11d94e6a:;
  /* 11d94e6a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94e6d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94e70 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94e72 jae 0x11d94ee0 */
  if (!C.cf) goto L_11d94ee0;
  /* 11d94e74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94e77 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d94e7a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11d94e7d jmp 0x11d94e88 */
  goto L_11d94e88;
L_11d94e7f:;
  /* 11d94e7f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94e82 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d94e85 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11d94e88:;
  /* 11d94e88 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94e8b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94e8e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d94e90 je 0x11d94ec4 */
  if (C.zf) goto L_11d94ec4;
  /* 11d94e92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d94e95 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d94e96 mov ecx, 0xa */
  ECX = (0xau);
  /* 11d94e9b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d94e9d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94ea0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94ea3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d94ea5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94ea8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 11d94eab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d94eae cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d94eaf mov ecx, 0xa */
  ECX = (0xau);
  /* 11d94eb4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d94eb6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d94eb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d94ebc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94ebf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d94ec2 jmp 0x11d94e7f */
  goto L_11d94e7f;
L_11d94ec4:;
  /* 11d94ec4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94ec7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d94ec9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94ecc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94ecf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d94ed1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94ed4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d94ed6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d94ed9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94edc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d94ede jmp 0x11d94ee9 */
  goto L_11d94ee9;
L_11d94ee0:;
  /* 11d94ee0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94ee3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11d94ee9:;
  /* 11d94ee9 mov esp, ebp */
  ESP = (EBP);
  /* 11d94eeb pop ebp */
  EBP = (pop32());
  /* 11d94eec ret  */
  ESPCHK(0x11d94e40u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11d94ef0 (172 bytes, 65 insns) */
void f_11d94ef0(void) {
  FTRACE(0x11d94ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d94ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d94ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11d94ef3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d94ef6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94ef9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d94efb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d94efe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94f01 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94f04 jbe 0x11d94f4b */
  if ((C.cf||C.zf)) goto L_11d94f4b;
L_11d94f06:;
  /* 11d94f06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d94f09 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d94f0a mov ecx, 0xa */
  ECX = (0xau);
  /* 11d94f0f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d94f11 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94f14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d94f17 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d94f19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d94f1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94f1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d94f22 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94f25 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d94f27 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d94f2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94f2d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d94f2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d94f32 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d94f33 mov ecx, 0xa */
  ECX = (0xau);
  /* 11d94f38 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d94f3a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d94f3d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94f41 jle 0x11d94f4b */
  if ((C.zf||C.sf!=C.of)) goto L_11d94f4b;
  /* 11d94f43 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d94f46 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94f49 ja 0x11d94f06 */
  if ((!C.cf&&!C.zf)) goto L_11d94f06;
L_11d94f4b:;
  /* 11d94f4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94f4e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d94f50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d94f53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d94f56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d94f59 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11d94f5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d94f5e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d94f61 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d94f64:;
  /* 11d94f64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d94f67 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d94f69 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11d94f6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d94f6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d94f72 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d94f74 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d94f76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d94f79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d94f7c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d94f7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d94f82 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11d94f85 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11d94f87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d94f8a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94f8d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d94f90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d94f93 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94f96 jb 0x11d94f64 */
  if (C.cf) goto L_11d94f64;
  /* 11d94f98 mov esp, ebp */
  ESP = (EBP);
  /* 11d94f9a pop ebp */
  EBP = (pop32());
  /* 11d94f9b ret  */
  ESPCHK(0x11d94ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014fa0 @ 0x11d94fa0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11d94fa0(void) {
  FTRACE(0x11d94fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d94fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d94fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11d94fa3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11d94fa6:;
  /* 11d94fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d94fa9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d94fac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d94fae je 0x11d9541c */
  if (C.zf) goto L_11d9541c;
  /* 11d94fb4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d94fb7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94fba je 0x11d9541c */
  if (C.zf) goto L_11d9541c;
  /* 11d94fc0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d94fc4 mov dword ptr [0x11db1a50], 0 */
  w32((uint32_t)(0x11db1a50), (0x0u));
  /* 11d94fce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d94fd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d94fd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d94fdb jmp 0x11d94fe6 */
  goto L_11d94fe6;
L_11d94fdd:;
  /* 11d94fdd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d94fe0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94fe3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11d94fe6:;
  /* 11d94fe6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d94fe9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d94fec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d94fef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d94ff2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d94ff5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d94ff8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d94ffb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d94ffd jne 0x11d95001 */
  if (!C.zf) goto L_11d95001;
  /* 11d94fff jmp 0x11d94fdd */
  goto L_11d94fdd;
L_11d95001:;
  /* 11d95001 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d95004 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d95007 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d9500a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9500d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d95010 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d95013 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d95016 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d95019 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d9501c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95020 ja 0x11d95370 */
  if ((!C.cf&&!C.zf)) goto L_11d95370;
  /* 11d95026 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d95029 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d9502b mov al, byte ptr [ecx + 0x11d9544c] */
  AL = (r8((uint32_t)(ECX + 0x11d9544c)));
  /* 11d95031 jmp dword ptr [eax*4 + 0x11d95420] */
  switch (EAX) {
    case 0: goto L_11d9528f;
    case 1: goto L_11d95173;
    case 2: goto L_11d950fe;
    case 3: goto L_11d95038;
    case 4: goto L_11d95076;
    case 5: goto L_11d950d7;
    case 6: goto L_11d95125;
    case 7: goto L_11d9514c;
    case 8: goto L_11d951ba;
    case 9: goto L_11d950b4;
    case 10: goto L_11d95370;
    default: x86_unimpl("switch@0x11d95031 out of table"); return;
  }
L_11d95038:;
  /* 11d95038 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d9503b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11d9503e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d95041 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d95044 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d95047 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9504b ja 0x11d95071 */
  if ((!C.cf&&!C.zf)) goto L_11d95071;
  /* 11d9504d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d95050 jmp dword ptr [ecx*4 + 0x11d9549f] */
  switch (ECX) {
    case 0: goto L_11d95057;
    case 1: goto L_11d95061;
    case 2: goto L_11d95067;
    case 3: goto L_11d9506d;
    case 4: goto L_11d95095;
    case 5: goto L_11d9509f;
    case 6: goto L_11d950a5;
    case 7: goto L_11d950ab;
    default: x86_unimpl("switch@0x11d95050 out of table"); return;
  }
L_11d95057:;
  /* 11d95057 mov dword ptr [0x11db1a50], 1 */
  w32((uint32_t)(0x11db1a50), (0x1u));
L_11d95061:;
  /* 11d95061 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11d95065 jmp 0x11d95071 */
  goto L_11d95071;
L_11d95067:;
  /* 11d95067 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 11d9506b jmp 0x11d95071 */
  goto L_11d95071;
L_11d9506d:;
  /* 11d9506d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11d95071:;
  /* 11d95071 jmp 0x11d95370 */
  goto L_11d95370;
L_11d95076:;
  /* 11d95076 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d95079 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11d9507c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d9507f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d95082 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d95085 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95089 ja 0x11d950af */
  if ((!C.cf&&!C.zf)) goto L_11d950af;
  /* 11d9508b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d9508e jmp dword ptr [ecx*4 + 0x11d954af] */
  switch (ECX) {
    case 0: goto L_11d95095;
    case 1: goto L_11d9509f;
    case 2: goto L_11d950a5;
    case 3: goto L_11d950ab;
    default: x86_unimpl("switch@0x11d9508e out of table"); return;
  }
L_11d95095:;
  /* 11d95095 mov dword ptr [0x11db1a50], 1 */
  w32((uint32_t)(0x11db1a50), (0x1u));
L_11d9509f:;
  /* 11d9509f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11d950a3 jmp 0x11d950af */
  goto L_11d950af;
L_11d950a5:;
  /* 11d950a5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11d950a9 jmp 0x11d950af */
  goto L_11d950af;
L_11d950ab:;
  /* 11d950ab mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_11d950af:;
  /* 11d950af jmp 0x11d95370 */
  goto L_11d95370;
L_11d950b4:;
  /* 11d950b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d950b7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11d950ba cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d950be je 0x11d950c8 */
  if (C.zf) goto L_11d950c8;
  /* 11d950c0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d950c4 je 0x11d950ce */
  if (C.zf) goto L_11d950ce;
  /* 11d950c6 jmp 0x11d950d2 */
  goto L_11d950d2;
L_11d950c8:;
  /* 11d950c8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 11d950cc jmp 0x11d950d2 */
  goto L_11d950d2;
L_11d950ce:;
  /* 11d950ce mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11d950d2:;
  /* 11d950d2 jmp 0x11d95370 */
  goto L_11d95370;
L_11d950d7:;
  /* 11d950d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d950da mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d950dd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d950e1 je 0x11d950eb */
  if (C.zf) goto L_11d950eb;
  /* 11d950e3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d950e7 je 0x11d950f5 */
  if (C.zf) goto L_11d950f5;
  /* 11d950e9 jmp 0x11d950f9 */
  goto L_11d950f9;
L_11d950eb:;
  /* 11d950eb mov dword ptr [0x11db1a50], 1 */
  w32((uint32_t)(0x11db1a50), (0x1u));
L_11d950f5:;
  /* 11d950f5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11d950f9:;
  /* 11d950f9 jmp 0x11d95370 */
  goto L_11d95370;
L_11d950fe:;
  /* 11d950fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d95101 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11d95104 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95108 je 0x11d95112 */
  if (C.zf) goto L_11d95112;
  /* 11d9510a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9510e je 0x11d9511c */
  if (C.zf) goto L_11d9511c;
  /* 11d95110 jmp 0x11d95120 */
  goto L_11d95120;
L_11d95112:;
  /* 11d95112 mov dword ptr [0x11db1a50], 1 */
  w32((uint32_t)(0x11db1a50), (0x1u));
L_11d9511c:;
  /* 11d9511c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11d95120:;
  /* 11d95120 jmp 0x11d95370 */
  goto L_11d95370;
L_11d95125:;
  /* 11d95125 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d95128 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11d9512b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9512f je 0x11d95139 */
  if (C.zf) goto L_11d95139;
  /* 11d95131 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95135 je 0x11d95143 */
  if (C.zf) goto L_11d95143;
  /* 11d95137 jmp 0x11d95147 */
  goto L_11d95147;
L_11d95139:;
  /* 11d95139 mov dword ptr [0x11db1a50], 1 */
  w32((uint32_t)(0x11db1a50), (0x1u));
L_11d95143:;
  /* 11d95143 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11d95147:;
  /* 11d95147 jmp 0x11d95370 */
  goto L_11d95370;
L_11d9514c:;
  /* 11d9514c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d9514f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11d95152 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95156 je 0x11d95160 */
  if (C.zf) goto L_11d95160;
  /* 11d95158 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9515c je 0x11d9516a */
  if (C.zf) goto L_11d9516a;
  /* 11d9515e jmp 0x11d9516e */
  goto L_11d9516e;
L_11d95160:;
  /* 11d95160 mov dword ptr [0x11db1a50], 1 */
  w32((uint32_t)(0x11db1a50), (0x1u));
L_11d9516a:;
  /* 11d9516a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11d9516e:;
  /* 11d9516e jmp 0x11d95370 */
  goto L_11d95370;
L_11d95173:;
  /* 11d95173 push 0x11dadccc */
  push32((uint32_t)(0x11dadcccu));
  /* 11d95178 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9517b push ecx */
  push32((uint32_t)(ECX));
  /* 11d9517c call 0x11d959d0 */
  push32(0x11d95181u); f_11d959d0();
  /* 11d95181 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d95186 jne 0x11d95193 */
  if (!C.zf) goto L_11d95193;
  /* 11d95188 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9518b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9518e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d95191 jmp 0x11d951b1 */
  goto L_11d951b1;
L_11d95193:;
  /* 11d95193 push 0x11dadcc8 */
  push32((uint32_t)(0x11dadcc8u));
  /* 11d95198 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9519b push eax */
  push32((uint32_t)(EAX));
  /* 11d9519c call 0x11d959d0 */
  push32(0x11d951a1u); f_11d959d0();
  /* 11d951a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d951a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d951a6 jne 0x11d951b1 */
  if (!C.zf) goto L_11d951b1;
  /* 11d951a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d951ab add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d951ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d951b1:;
  /* 11d951b1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11d951b5 jmp 0x11d95370 */
  goto L_11d95370;
L_11d951ba:;
  /* 11d951ba mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d951bd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d951c1 jg 0x11d951d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d951d1;
  /* 11d951c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d951c6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11d951cc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d951cf jmp 0x11d951dd */
  goto L_11d951dd;
L_11d951d1:;
  /* 11d951d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d951d4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11d951da mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11d951dd:;
  /* 11d951dd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d951e1 jle 0x11d95284 */
  if ((C.zf||C.sf!=C.of)) goto L_11d95284;
  /* 11d951e7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d951ea cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d951ed jbe 0x11d95284 */
  if ((C.cf||C.zf)) goto L_11d95284;
  /* 11d951f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d951f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d951f8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d951fa mov ecx, dword ptr [0x11dafdb8] */
  ECX = (r32((uint32_t)(0x11dafdb8)));
  /* 11d95200 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d95202 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11d95206 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11d9520c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d9520e je 0x11d95247 */
  if (C.zf) goto L_11d95247;
  /* 11d95210 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d95213 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95216 jbe 0x11d95247 */
  if ((C.cf||C.zf)) goto L_11d95247;
  /* 11d95218 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d9521b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d9521d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d95220 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d95222 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11d95224 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d95227 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d95229 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9522c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d9522f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d95231 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d95234 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95237 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11d9523a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d9523d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d9523f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d95242 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d95245 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d95247:;
  /* 11d95247 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d9524a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d9524c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d9524f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d95251 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d95253 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d95256 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d95258 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9525b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d9525e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d95260 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d95263 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95266 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d95269 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d9526c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d9526e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d95271 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d95274 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d95276 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d95279 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d9527c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d9527f jmp 0x11d951dd */
  goto L_11d951dd;
L_11d95284:;
  /* 11d95284 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d95287 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d9528a jmp 0x11d94fa6 */
  goto L_11d94fa6;
L_11d9528f:;
  /* 11d9528f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d95292 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d95295 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d95297 je 0x11d95362 */
  if (C.zf) goto L_11d95362;
  /* 11d9529d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d952a0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d952a3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11d952a6:;
  /* 11d952a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d952a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d952ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d952ae je 0x11d95360 */
  if (C.zf) goto L_11d95360;
  /* 11d952b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d952b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d952ba je 0x11d95360 */
  if (C.zf) goto L_11d95360;
  /* 11d952c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d952c3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d952c6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d952c9 jne 0x11d952d9 */
  if (!C.zf) goto L_11d952d9;
  /* 11d952cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d952ce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d952d1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11d952d4 jmp 0x11d95360 */
  goto L_11d95360;
L_11d952d9:;
  /* 11d952d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d952dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d952de mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d952e0 mov edx, dword ptr [0x11dafdb8] */
  EDX = (r32((uint32_t)(0x11dafdb8)));
  /* 11d952e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d952e8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11d952ec and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11d952f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d952f3 je 0x11d9532c */
  if (C.zf) goto L_11d9532c;
  /* 11d952f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d952f8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d952fb jbe 0x11d9532c */
  if ((C.cf||C.zf)) goto L_11d9532c;
  /* 11d952fd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d95300 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d95302 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95305 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d95307 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d95309 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d9530c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d9530e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95311 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d95314 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d95316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95319 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9531c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d9531f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d95322 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d95324 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d95327 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d9532a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11d9532c:;
  /* 11d9532c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d9532f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d95331 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95334 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d95336 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11d95338 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d9533b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d9533d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95340 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d95343 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d95345 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95348 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9534b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11d9534e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d95351 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d95353 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d95356 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d95359 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d9535b jmp 0x11d952a6 */
  goto L_11d952a6;
L_11d95360:;
  /* 11d95360 jmp 0x11d9536b */
  goto L_11d9536b;
L_11d95362:;
  /* 11d95362 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95365 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95368 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11d9536b:;
  /* 11d9536b jmp 0x11d94fa6 */
  goto L_11d94fa6;
L_11d95370:;
  /* 11d95370 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d95374 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d95376 je 0x11d9539c */
  if (C.zf) goto L_11d9539c;
  /* 11d95378 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d9537b push edx */
  push32((uint32_t)(EDX));
  /* 11d9537c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d9537f push eax */
  push32((uint32_t)(EAX));
  /* 11d95380 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d95383 push ecx */
  push32((uint32_t)(ECX));
  /* 11d95384 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d95387 push edx */
  push32((uint32_t)(EDX));
  /* 11d95388 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11d9538b push eax */
  push32((uint32_t)(EAX));
  /* 11d9538c call 0x11d947d0 */
  push32(0x11d95391u); f_11d947d0();
  /* 11d95391 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95394 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d95397 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11d9539a jmp 0x11d95417 */
  goto L_11d95417;
L_11d9539c:;
  /* 11d9539c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9539f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d953a1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d953a3 mov ecx, dword ptr [0x11dafdb8] */
  ECX = (r32((uint32_t)(0x11dafdb8)));
  /* 11d953a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d953ab mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11d953af and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11d953b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d953b7 je 0x11d953e8 */
  if (C.zf) goto L_11d953e8;
  /* 11d953b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d953bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d953be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d953c1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d953c3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d953c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d953c8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d953ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d953cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d953d0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d953d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d953d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d953d8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11d953db mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d953de mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d953e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d953e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d953e6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11d953e8:;
  /* 11d953e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d953eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d953ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d953f0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d953f2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d953f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d953f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d953f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d953fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d953ff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d95401 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95404 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95407 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d9540a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d9540d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d9540f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d95412 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d95415 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11d95417:;
  /* 11d95417 jmp 0x11d94fa6 */
  goto L_11d94fa6;
L_11d9541c:;
  /* 11d9541c mov esp, ebp */
  ESP = (EBP);
  /* 11d9541e pop ebp */
  EBP = (pop32());
  /* 11d9541f ret  */
  ESPCHK(0x11d94fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100154c0 @ 0x11d954c0 (650 bytes, 178 insns) */
void f_11d954c0(void) {
  FTRACE(0x11d954c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d954c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d954c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d954c3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d954c9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d954cd jne 0x11d95629 */
  if (!C.zf) goto L_11d95629;
  /* 11d954d3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d954d6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11d954dc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11d954e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d954e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d954ec mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11d954f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d954f8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11d954fe push edx */
  push32((uint32_t)(EDX));
  /* 11d954ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d95502 push eax */
  push32((uint32_t)(EAX));
  /* 11d95503 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d95506 push ecx */
  push32((uint32_t)(ECX));
  /* 11d95507 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d9550a push edx */
  push32((uint32_t)(EDX));
  /* 11d9550b call 0x11d95d50 */
  push32(0x11d95510u); f_11d95d50();
  /* 11d95510 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95513 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d95516 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9551a jne 0x11d955af */
  if (!C.zf) goto L_11d955af;
  /* 11d95520 call dword ptr [0x11db43a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43a0))), 0x11d95526u);
  /* 11d95526 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95529 je 0x11d95530 */
  if (C.zf) goto L_11d95530;
  /* 11d9552b jmp 0x11d9560d */
  goto L_11d9560d;
L_11d95530:;
  /* 11d95530 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95532 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95534 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95536 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d95539 push eax */
  push32((uint32_t)(EAX));
  /* 11d9553a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d9553d push ecx */
  push32((uint32_t)(ECX));
  /* 11d9553e call 0x11d95d50 */
  push32(0x11d95543u); f_11d95d50();
  /* 11d95543 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95546 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11d9554c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95553 jne 0x11d9555a */
  if (!C.zf) goto L_11d9555a;
  /* 11d95555 jmp 0x11d9560d */
  goto L_11d9560d;
L_11d9555a:;
  /* 11d9555a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11d9555c push 0x11dadcd4 */
  push32((uint32_t)(0x11dadcd4u));
  /* 11d95561 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d95563 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11d95569 push edx */
  push32((uint32_t)(EDX));
  /* 11d9556a call 0x11d85ad0 */
  push32(0x11d9556fu); f_11d85ad0();
  /* 11d9556f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95572 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d95575 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95579 jne 0x11d95580 */
  if (!C.zf) goto L_11d95580;
  /* 11d9557b jmp 0x11d9560d */
  goto L_11d9560d;
L_11d95580:;
  /* 11d95580 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d95587 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95589 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11d9558f push eax */
  push32((uint32_t)(EAX));
  /* 11d95590 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d95593 push ecx */
  push32((uint32_t)(ECX));
  /* 11d95594 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d95597 push edx */
  push32((uint32_t)(EDX));
  /* 11d95598 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d9559b push eax */
  push32((uint32_t)(EAX));
  /* 11d9559c call 0x11d95d50 */
  push32(0x11d955a1u); f_11d95d50();
  /* 11d955a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d955a4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d955a7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d955ab jne 0x11d955af */
  if (!C.zf) goto L_11d955af;
  /* 11d955ad jmp 0x11d9560d */
  goto L_11d9560d;
L_11d955af:;
  /* 11d955af push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11d955b1 push 0x11dadcd4 */
  push32((uint32_t)(0x11dadcd4u));
  /* 11d955b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d955b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d955bb push ecx */
  push32((uint32_t)(ECX));
  /* 11d955bc call 0x11d85ad0 */
  push32(0x11d955c1u); f_11d85ad0();
  /* 11d955c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d955c4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 11d955ca mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11d955cc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11d955d2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d955d5 jne 0x11d955d9 */
  if (!C.zf) goto L_11d955d9;
  /* 11d955d7 jmp 0x11d9560d */
  goto L_11d9560d;
L_11d955d9:;
  /* 11d955d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d955dc push ecx */
  push32((uint32_t)(ECX));
  /* 11d955dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d955e0 push edx */
  push32((uint32_t)(EDX));
  /* 11d955e1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11d955e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d955e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d955ea call 0x11d8a010 */
  push32(0x11d955efu); f_11d8a010();
  /* 11d955ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d955f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d955f6 je 0x11d95606 */
  if (C.zf) goto L_11d95606;
  /* 11d955f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d955fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d955fd push edx */
  push32((uint32_t)(EDX));
  /* 11d955fe call 0x11d86560 */
  push32(0x11d95603u); f_11d86560();
  /* 11d95603 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d95606:;
  /* 11d95606 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d95608 jmp 0x11d95746 */
  goto L_11d95746;
L_11d9560d:;
  /* 11d9560d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95611 je 0x11d95621 */
  if (C.zf) goto L_11d95621;
  /* 11d95613 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d95615 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d95618 push eax */
  push32((uint32_t)(EAX));
  /* 11d95619 call 0x11d86560 */
  push32(0x11d9561eu); f_11d86560();
  /* 11d9561e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d95621:;
  /* 11d95621 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d95624 jmp 0x11d95746 */
  goto L_11d95746;
L_11d95629:;
  /* 11d95629 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9562d jne 0x11d95743 */
  if (!C.zf) goto L_11d95743;
  /* 11d95633 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11d9563d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d95640 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11d95646 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95648 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11d9564e push edx */
  push32((uint32_t)(EDX));
  /* 11d9564f push 0x11db1a28 */
  push32((uint32_t)(0x11db1a28u));
  /* 11d95654 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d95657 push eax */
  push32((uint32_t)(EAX));
  /* 11d95658 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d9565b push ecx */
  push32((uint32_t)(ECX));
  /* 11d9565c call 0x11d95bb0 */
  push32(0x11d95661u); f_11d95bb0();
  /* 11d95661 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95664 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d95666 jne 0x11d95670 */
  if (!C.zf) goto L_11d95670;
  /* 11d95668 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d9566b jmp 0x11d95746 */
  goto L_11d95746;
L_11d95670:;
  /* 11d95670 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11d95676 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11d95679 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11d95683 jmp 0x11d95694 */
  goto L_11d95694;
L_11d95685:;
  /* 11d95685 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d9568b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9568e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11d95694:;
  /* 11d95694 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9569b jge 0x11d9573f */
  if ((C.sf==C.of)) goto L_11d9573f;
  /* 11d956a1 cmp dword ptr [0x11daffc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11daffc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d956a8 jle 0x11d956db */
  if ((C.zf||C.sf!=C.of)) goto L_11d956db;
  /* 11d956aa push 4 */
  push32((uint32_t)(0x4u));
  /* 11d956ac mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d956b2 mov dl, byte ptr [ecx*2 + 0x11db1a28] */
  DL = (r8((uint32_t)(ECX*2 + 0x11db1a28)));
  /* 11d956b9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11d956bf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11d956c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d956ca push eax */
  push32((uint32_t)(EAX));
  /* 11d956cb call 0x11d8c420 */
  push32(0x11d956d0u); f_11d8c420();
  /* 11d956d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d956d3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11d956d9 jmp 0x11d9570e */
  goto L_11d9570e;
L_11d956db:;
  /* 11d956db mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d956e1 mov dl, byte ptr [ecx*2 + 0x11db1a28] */
  DL = (r8((uint32_t)(ECX*2 + 0x11db1a28)));
  /* 11d956e8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11d956ee mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11d956f4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d956f9 mov ecx, dword ptr [0x11dafdb8] */
  ECX = (r32((uint32_t)(0x11dafdb8)));
  /* 11d956ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d95701 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11d95705 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11d95708 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11d9570e:;
  /* 11d9570e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95715 je 0x11d95738 */
  if (C.zf) goto L_11d95738;
  /* 11d95717 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11d9571d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d95720 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d95723 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11d9572a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11d9572e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11d95734 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d95736 jmp 0x11d9573a */
  goto L_11d9573a;
L_11d95738:;
  /* 11d95738 jmp 0x11d9573f */
  goto L_11d9573f;
L_11d9573a:;
  /* 11d9573a jmp 0x11d95685 */
  goto L_11d95685;
L_11d9573f:;
  /* 11d9573f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d95741 jmp 0x11d95746 */
  goto L_11d95746;
L_11d95743:;
  /* 11d95743 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11d95746:;
  /* 11d95746 mov esp, ebp */
  ESP = (EBP);
  /* 11d95748 pop ebp */
  EBP = (pop32());
  /* 11d95749 ret  */
  ESPCHK(0x11d954c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015750 @ 0x11d95750 (10 bytes, 5 insns) */
void f_11d95750(void) {
  FTRACE(0x11d95750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d95750 push ebp */
  push32((uint32_t)(EBP));
  /* 11d95751 mov ebp, esp */
  EBP = (ESP);
  /* 11d95753 mov eax, dword ptr [0x11db0eb0] */
  EAX = (r32((uint32_t)(0x11db0eb0)));
  /* 11d95758 pop ebp */
  EBP = (pop32());
  /* 11d95759 ret  */
  ESPCHK(0x11d95750u, _esp0);
  ESP += 4; return;
}

/* FUN_10015760 @ 0x11d95760 (575 bytes, 196 insns) */
void f_11d95760(void) {
  FTRACE(0x11d95760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d95760 push ebp */
  push32((uint32_t)(EBP));
  /* 11d95761 mov ebp, esp */
  EBP = (ESP);
  /* 11d95763 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d95765 push 0x11dadce0 */
  push32((uint32_t)(0x11dadce0u));
  /* 11d9576a push 0x11d8fa38 */
  push32((uint32_t)(0x11d8fa38u));
  /* 11d9576f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d95775 push eax */
  push32((uint32_t)(EAX));
  /* 11d95776 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d9577d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95780 push ebx */
  push32((uint32_t)(EBX));
  /* 11d95781 push esi */
  push32((uint32_t)(ESI));
  /* 11d95782 push edi */
  push32((uint32_t)(EDI));
  /* 11d95783 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d95786 cmp dword ptr [0x11db1a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9578d jne 0x11d957de */
  if (!C.zf) goto L_11d957de;
  /* 11d9578f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11d95792 push eax */
  push32((uint32_t)(EAX));
  /* 11d95793 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d95795 push 0x11dad398 */
  push32((uint32_t)(0x11dad398u));
  /* 11d9579a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d9579c call dword ptr [0x11db4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4314))), 0x11d957a2u);
  /* 11d957a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d957a4 je 0x11d957b2 */
  if (C.zf) goto L_11d957b2;
  /* 11d957a6 mov dword ptr [0x11db1a34], 1 */
  w32((uint32_t)(0x11db1a34), (0x1u));
  /* 11d957b0 jmp 0x11d957de */
  goto L_11d957de;
L_11d957b2:;
  /* 11d957b2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11d957b5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d957b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d957b8 push 0x11dad394 */
  push32((uint32_t)(0x11dad394u));
  /* 11d957bd push 1 */
  push32((uint32_t)(0x1u));
  /* 11d957bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11d957c1 call dword ptr [0x11db4318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4318))), 0x11d957c7u);
  /* 11d957c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d957c9 je 0x11d957d7 */
  if (C.zf) goto L_11d957d7;
  /* 11d957cb mov dword ptr [0x11db1a34], 2 */
  w32((uint32_t)(0x11db1a34), (0x2u));
  /* 11d957d5 jmp 0x11d957de */
  goto L_11d957de;
L_11d957d7:;
  /* 11d957d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d957d9 jmp 0x11d959b9 */
  goto L_11d959b9;
L_11d957de:;
  /* 11d957de cmp dword ptr [0x11db1a34], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d957e5 jne 0x11d95802 */
  if (!C.zf) goto L_11d95802;
  /* 11d957e7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d957ea push edx */
  push32((uint32_t)(EDX));
  /* 11d957eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d957ee push eax */
  push32((uint32_t)(EAX));
  /* 11d957ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d957f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d957f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d957f6 push edx */
  push32((uint32_t)(EDX));
  /* 11d957f7 call dword ptr [0x11db4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4314))), 0x11d957fdu);
  /* 11d957fd jmp 0x11d959b9 */
  goto L_11d959b9;
L_11d95802:;
  /* 11d95802 cmp dword ptr [0x11db1a34], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a34))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95809 jne 0x11d959b7 */
  if (!C.zf) goto L_11d959b7;
  /* 11d9580f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95813 jne 0x11d9581d */
  if (!C.zf) goto L_11d9581d;
  /* 11d95815 mov eax, dword ptr [0x11db19a0] */
  EAX = (r32((uint32_t)(0x11db19a0)));
  /* 11d9581a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11d9581d:;
  /* 11d9581d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d9581f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95821 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95823 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95825 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d95828 push ecx */
  push32((uint32_t)(ECX));
  /* 11d95829 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d9582c push edx */
  push32((uint32_t)(EDX));
  /* 11d9582d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11d95832 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d95835 push eax */
  push32((uint32_t)(EAX));
  /* 11d95836 call dword ptr [0x11db4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4368))), 0x11d9583cu);
  /* 11d9583c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d9583f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95843 jne 0x11d9584c */
  if (!C.zf) goto L_11d9584c;
  /* 11d95845 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d95847 jmp 0x11d959b9 */
  goto L_11d959b9;
L_11d9584c:;
  /* 11d9584c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d95853 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d95856 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95859 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d9585b call 0x11d89990 */
  push32(0x11d95860u); f_11d89990();
  /* 11d95860 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11d95863 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d95866 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d95869 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11d9586c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d9586f push edx */
  push32((uint32_t)(EDX));
  /* 11d95870 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95872 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d95875 push eax */
  push32((uint32_t)(EAX));
  /* 11d95876 call 0x11d8a180 */
  push32(0x11d9587bu); f_11d8a180();
  /* 11d9587b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d9587e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d95885 jmp 0x11d9589e */
  goto L_11d9589e;
  /* 11d95887 mov eax, 1 */
  EAX = (0x1u);
  /* 11d9588c ret  */
  ESPCHK(0x11d95760u, _esp0);
  ESP += 4; return;
  /* 11d9588d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d95890 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11d95897 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d9589e:;
  /* 11d9589e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d958a2 jne 0x11d958ab */
  if (!C.zf) goto L_11d958ab;
  /* 11d958a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d958a6 jmp 0x11d959b9 */
  goto L_11d959b9;
L_11d958ab:;
  /* 11d958ab push 0 */
  push32((uint32_t)(0x0u));
  /* 11d958ad push 0 */
  push32((uint32_t)(0x0u));
  /* 11d958af mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d958b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d958b3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d958b6 push edx */
  push32((uint32_t)(EDX));
  /* 11d958b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d958ba push eax */
  push32((uint32_t)(EAX));
  /* 11d958bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d958be push ecx */
  push32((uint32_t)(ECX));
  /* 11d958bf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11d958c4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d958c7 push edx */
  push32((uint32_t)(EDX));
  /* 11d958c8 call dword ptr [0x11db4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4368))), 0x11d958ceu);
  /* 11d958ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d958d0 jne 0x11d958d9 */
  if (!C.zf) goto L_11d958d9;
  /* 11d958d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d958d4 jmp 0x11d959b9 */
  goto L_11d959b9;
L_11d958d9:;
  /* 11d958d9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d958e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d958e3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11d958e7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d958ea and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d958ec call 0x11d89990 */
  push32(0x11d958f1u); f_11d89990();
  /* 11d958f1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11d958f4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d958f7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d958fa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11d958fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d95904 jmp 0x11d9591d */
  goto L_11d9591d;
  /* 11d95906 mov eax, 1 */
  EAX = (0x1u);
  /* 11d9590b ret  */
  ESPCHK(0x11d95760u, _esp0);
  ESP += 4; return;
  /* 11d9590c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d9590f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11d95916 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d9591d:;
  /* 11d9591d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95921 jne 0x11d9592a */
  if (!C.zf) goto L_11d9592a;
  /* 11d95923 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d95925 jmp 0x11d959b9 */
  goto L_11d959b9;
L_11d9592a:;
  /* 11d9592a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d9592e jne 0x11d95939 */
  if (!C.zf) goto L_11d95939;
  /* 11d95930 mov edx, dword ptr [0x11db1990] */
  EDX = (r32((uint32_t)(0x11db1990)));
  /* 11d95936 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11d95939:;
  /* 11d95939 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d9593c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d9593f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11d95945 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d95948 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d9594b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11d95952 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d95955 push ecx */
  push32((uint32_t)(ECX));
  /* 11d95956 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d95959 push edx */
  push32((uint32_t)(EDX));
  /* 11d9595a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d9595d push eax */
  push32((uint32_t)(EAX));
  /* 11d9595e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95961 push ecx */
  push32((uint32_t)(ECX));
  /* 11d95962 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d95965 push edx */
  push32((uint32_t)(EDX));
  /* 11d95966 call dword ptr [0x11db4318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4318))), 0x11d9596cu);
  /* 11d9596c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d9596f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d95972 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d95975 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d95977 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11d9597c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95982 je 0x11d95998 */
  if (C.zf) goto L_11d95998;
  /* 11d95984 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d95987 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d9598a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d9598c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11d95990 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95996 je 0x11d9599c */
  if (C.zf) goto L_11d9599c;
L_11d95998:;
  /* 11d95998 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d9599a jmp 0x11d959b9 */
  goto L_11d959b9;
L_11d9599c:;
  /* 11d9599c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d9599f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d959a1 push eax */
  push32((uint32_t)(EAX));
  /* 11d959a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d959a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d959a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d959a9 push edx */
  push32((uint32_t)(EDX));
  /* 11d959aa call 0x11d8e6e0 */
  push32(0x11d959afu); f_11d8e6e0();
  /* 11d959af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d959b2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d959b5 jmp 0x11d959b9 */
  goto L_11d959b9;
L_11d959b7:;
  /* 11d959b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d959b9:;
  /* 11d959b9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11d959bc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d959bf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d959c6 pop edi */
  EDI = (pop32());
  /* 11d959c7 pop esi */
  ESI = (pop32());
  /* 11d959c8 pop ebx */
  EBX = (pop32());
  /* 11d959c9 mov esp, ebp */
  ESP = (EBP);
  /* 11d959cb pop ebp */
  EBP = (pop32());
  /* 11d959cc ret  */
  ESPCHK(0x11d95760u, _esp0);
  ESP += 4; return;
}

/* FUN_100159d0 @ 0x11d959d0 (208 bytes, 85 insns) */
void f_11d959d0(void) {
  FTRACE(0x11d959d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d959d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d959d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d959d3 push edi */
  push32((uint32_t)(EDI));
  /* 11d959d4 push esi */
  push32((uint32_t)(ESI));
  /* 11d959d5 push ebx */
  push32((uint32_t)(EBX));
  /* 11d959d6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d959d9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d959dc lea eax, [0x11db1988] */
  EAX = ((uint32_t)(0x11db1988));
  /* 11d959e2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d959e6 jne 0x11d95a23 */
  if (!C.zf) goto L_11d95a23;
  /* 11d959e8 mov al, 0xff */
  AL = (0xffu);
  /* 11d959ea mov edi, edi */
  EDI = (EDI);
L_11d959ec:;
  /* 11d959ec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d959ee je 0x11d95a1e */
  if (C.zf) goto L_11d95a1e;
  /* 11d959f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d959f2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d959f3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11d959f5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d959f6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d959f8 je 0x11d959ec */
  if (C.zf) goto L_11d959ec;
  /* 11d959fa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d959fc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d959fe sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d95a00 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11d95a03 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d95a05 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d95a07 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11d95a09 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d95a0b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d95a0d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d95a0f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11d95a12 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d95a14 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d95a16 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d95a18 je 0x11d959ec */
  if (C.zf) goto L_11d959ec;
  /* 11d95a1a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d95a1c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11d95a1e:;
  /* 11d95a1e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11d95a21 jmp 0x11d95a9b */
  goto L_11d95a9b;
L_11d95a23:;
  /* 11d95a23 lock inc dword ptr [0x11db1a64] */
  x86_unimpl("lock inc @ 0x11d95a23");
  /* 11d95a2a cmp dword ptr [0x11db1a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95a31 jg 0x11d95a37 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d95a37;
  /* 11d95a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95a35 jmp 0x11d95a4c */
  goto L_11d95a4c;
L_11d95a37:;
  /* 11d95a37 lock dec dword ptr [0x11db1a64] */
  x86_unimpl("lock dec @ 0x11d95a37");
  /* 11d95a3e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d95a40 call 0x11d886f0 */
  push32(0x11d95a45u); f_11d886f0();
  /* 11d95a45 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11d95a4c:;
  /* 11d95a4c mov eax, 0xff */
  EAX = (0xffu);
  /* 11d95a51 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d95a53 nop  */
  /* nop */
L_11d95a54:;
  /* 11d95a54 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d95a56 je 0x11d95a7f */
  if (C.zf) goto L_11d95a7f;
  /* 11d95a58 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d95a5a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d95a5b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11d95a5d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d95a5e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d95a60 je 0x11d95a54 */
  if (C.zf) goto L_11d95a54;
  /* 11d95a62 push eax */
  push32((uint32_t)(EAX));
  /* 11d95a63 push ebx */
  push32((uint32_t)(EBX));
  /* 11d95a64 call 0x11d95fb0 */
  push32(0x11d95a69u); f_11d95fb0();
  /* 11d95a69 mov ebx, eax */
  EBX = (EAX);
  /* 11d95a6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95a6e call 0x11d95fb0 */
  push32(0x11d95a73u); f_11d95fb0();
  /* 11d95a73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95a76 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d95a78 je 0x11d95a54 */
  if (C.zf) goto L_11d95a54;
  /* 11d95a7a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d95a7c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11d95a7f:;
  /* 11d95a7f mov ebx, eax */
  EBX = (EAX);
  /* 11d95a81 pop eax */
  EAX = (pop32());
  /* 11d95a82 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d95a84 jne 0x11d95a8f */
  if (!C.zf) goto L_11d95a8f;
  /* 11d95a86 lock dec dword ptr [0x11db1a64] */
  x86_unimpl("lock dec @ 0x11d95a86");
  /* 11d95a8d jmp 0x11d95a99 */
  goto L_11d95a99;
L_11d95a8f:;
  /* 11d95a8f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d95a91 call 0x11d88790 */
  push32(0x11d95a96u); f_11d88790();
  /* 11d95a96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d95a99:;
  /* 11d95a99 mov eax, ebx */
  EAX = (EBX);
L_11d95a9b:;
  /* 11d95a9b pop ebx */
  EBX = (pop32());
  /* 11d95a9c pop esi */
  ESI = (pop32());
  /* 11d95a9d pop edi */
  EDI = (pop32());
  /* 11d95a9e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d95a9f ret  */
  ESPCHK(0x11d959d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015aa0 @ 0x11d95aa0 (257 bytes, 103 insns) */
void f_11d95aa0(void) {
  FTRACE(0x11d95aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d95aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d95aa1 mov ebp, esp */
  EBP = (ESP);
  /* 11d95aa3 push edi */
  push32((uint32_t)(EDI));
  /* 11d95aa4 push esi */
  push32((uint32_t)(ESI));
  /* 11d95aa5 push ebx */
  push32((uint32_t)(EBX));
  /* 11d95aa6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d95aa9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d95aab je 0x11d95b9a */
  if (C.zf) goto L_11d95b9a;
  /* 11d95ab1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95ab4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d95ab7 lea eax, [0x11db1988] */
  EAX = ((uint32_t)(0x11db1988));
  /* 11d95abd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95ac1 jne 0x11d95b11 */
  if (!C.zf) goto L_11d95b11;
  /* 11d95ac3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11d95ac5 mov bl, 0x5a */
  BL = (0x5au);
  /* 11d95ac7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11d95ac9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d95acc:;
  /* 11d95acc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11d95ace or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11d95ad0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11d95ad2 je 0x11d95af5 */
  if (C.zf) goto L_11d95af5;
  /* 11d95ad4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d95ad6 je 0x11d95af5 */
  if (C.zf) goto L_11d95af5;
  /* 11d95ad8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d95ad9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d95ada cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d95adc jb 0x11d95ae4 */
  if (C.cf) goto L_11d95ae4;
  /* 11d95ade cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d95ae0 ja 0x11d95ae4 */
  if ((!C.cf&&!C.zf)) goto L_11d95ae4;
  /* 11d95ae2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11d95ae4:;
  /* 11d95ae4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d95ae6 jb 0x11d95aee */
  if (C.cf) goto L_11d95aee;
  /* 11d95ae8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d95aea ja 0x11d95aee */
  if ((!C.cf&&!C.zf)) goto L_11d95aee;
  /* 11d95aec add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11d95aee:;
  /* 11d95aee cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d95af0 jne 0x11d95aff */
  if (!C.zf) goto L_11d95aff;
  /* 11d95af2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d95af3 jne 0x11d95acc */
  if (!C.zf) goto L_11d95acc;
L_11d95af5:;
  /* 11d95af5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d95af7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d95af9 je 0x11d95b9a */
  if (C.zf) goto L_11d95b9a;
L_11d95aff:;
  /* 11d95aff mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11d95b04 jb 0x11d95b9a */
  if (C.cf) goto L_11d95b9a;
  /* 11d95b0a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d95b0c jmp 0x11d95b9a */
  goto L_11d95b9a;
L_11d95b11:;
  /* 11d95b11 lock inc dword ptr [0x11db1a64] */
  x86_unimpl("lock inc @ 0x11d95b11");
  /* 11d95b18 cmp dword ptr [0x11db1a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95b1f jg 0x11d95b25 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d95b25;
  /* 11d95b21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95b23 jmp 0x11d95b3e */
  goto L_11d95b3e;
L_11d95b25:;
  /* 11d95b25 lock dec dword ptr [0x11db1a64] */
  x86_unimpl("lock dec @ 0x11d95b25");
  /* 11d95b2c mov ebx, ecx */
  EBX = (ECX);
  /* 11d95b2e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d95b30 call 0x11d886f0 */
  push32(0x11d95b35u); f_11d886f0();
  /* 11d95b35 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11d95b3c mov ecx, ebx */
  ECX = (EBX);
L_11d95b3e:;
  /* 11d95b3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d95b40 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d95b42 mov edi, edi */
  EDI = (EDI);
L_11d95b44:;
  /* 11d95b44 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d95b46 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d95b48 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11d95b4a je 0x11d95b6f */
  if (C.zf) goto L_11d95b6f;
  /* 11d95b4c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d95b4e je 0x11d95b6f */
  if (C.zf) goto L_11d95b6f;
  /* 11d95b50 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d95b51 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d95b52 push ecx */
  push32((uint32_t)(ECX));
  /* 11d95b53 push eax */
  push32((uint32_t)(EAX));
  /* 11d95b54 push ebx */
  push32((uint32_t)(EBX));
  /* 11d95b55 call 0x11d95fb0 */
  push32(0x11d95b5au); f_11d95fb0();
  /* 11d95b5a mov ebx, eax */
  EBX = (EAX);
  /* 11d95b5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95b5f call 0x11d95fb0 */
  push32(0x11d95b64u); f_11d95fb0();
  /* 11d95b64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95b67 pop ecx */
  ECX = (pop32());
  /* 11d95b68 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95b6a jne 0x11d95b75 */
  if (!C.zf) goto L_11d95b75;
  /* 11d95b6c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d95b6d jne 0x11d95b44 */
  if (!C.zf) goto L_11d95b44;
L_11d95b6f:;
  /* 11d95b6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d95b71 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95b73 je 0x11d95b7e */
  if (C.zf) goto L_11d95b7e;
L_11d95b75:;
  /* 11d95b75 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11d95b7a jb 0x11d95b7e */
  if (C.cf) goto L_11d95b7e;
  /* 11d95b7c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11d95b7e:;
  /* 11d95b7e pop eax */
  EAX = (pop32());
  /* 11d95b7f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d95b81 jne 0x11d95b8c */
  if (!C.zf) goto L_11d95b8c;
  /* 11d95b83 lock dec dword ptr [0x11db1a64] */
  x86_unimpl("lock dec @ 0x11d95b83");
  /* 11d95b8a jmp 0x11d95b9a */
  goto L_11d95b9a;
L_11d95b8c:;
  /* 11d95b8c mov ebx, ecx */
  EBX = (ECX);
  /* 11d95b8e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d95b90 call 0x11d88790 */
  push32(0x11d95b95u); f_11d88790();
  /* 11d95b95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95b98 mov ecx, ebx */
  ECX = (EBX);
L_11d95b9a:;
  /* 11d95b9a mov eax, ecx */
  EAX = (ECX);
  /* 11d95b9c pop ebx */
  EBX = (pop32());
  /* 11d95b9d pop esi */
  ESI = (pop32());
  /* 11d95b9e pop edi */
  EDI = (pop32());
  /* 11d95b9f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d95ba0 ret  */
  ESPCHK(0x11d95aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015bb0 @ 0x11d95bb0 (382 bytes, 135 insns) */
void f_11d95bb0(void) {
  FTRACE(0x11d95bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d95bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d95bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11d95bb3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d95bb5 push 0x11dadcf8 */
  push32((uint32_t)(0x11dadcf8u));
  /* 11d95bba push 0x11d8fa38 */
  push32((uint32_t)(0x11d8fa38u));
  /* 11d95bbf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d95bc5 push eax */
  push32((uint32_t)(EAX));
  /* 11d95bc6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d95bcd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95bd0 push ebx */
  push32((uint32_t)(EBX));
  /* 11d95bd1 push esi */
  push32((uint32_t)(ESI));
  /* 11d95bd2 push edi */
  push32((uint32_t)(EDI));
  /* 11d95bd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d95bd6 cmp dword ptr [0x11db1a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95bdd jne 0x11d95c22 */
  if (!C.zf) goto L_11d95c22;
  /* 11d95bdf push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95be1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95be3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d95be5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95be7 call dword ptr [0x11db42cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42cc))), 0x11d95bedu);
  /* 11d95bed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d95bef je 0x11d95bfd */
  if (C.zf) goto L_11d95bfd;
  /* 11d95bf1 mov dword ptr [0x11db1a38], 1 */
  w32((uint32_t)(0x11db1a38), (0x1u));
  /* 11d95bfb jmp 0x11d95c22 */
  goto L_11d95c22;
L_11d95bfd:;
  /* 11d95bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95bff push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95c01 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d95c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95c05 call dword ptr [0x11db42e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42e0))), 0x11d95c0bu);
  /* 11d95c0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d95c0d je 0x11d95c1b */
  if (C.zf) goto L_11d95c1b;
  /* 11d95c0f mov dword ptr [0x11db1a38], 2 */
  w32((uint32_t)(0x11db1a38), (0x2u));
  /* 11d95c19 jmp 0x11d95c22 */
  goto L_11d95c22;
L_11d95c1b:;
  /* 11d95c1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d95c1d jmp 0x11d95d31 */
  goto L_11d95d31;
L_11d95c22:;
  /* 11d95c22 cmp dword ptr [0x11db1a38], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a38))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95c29 jne 0x11d95c46 */
  if (!C.zf) goto L_11d95c46;
  /* 11d95c2b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d95c2e push eax */
  push32((uint32_t)(EAX));
  /* 11d95c2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d95c32 push ecx */
  push32((uint32_t)(ECX));
  /* 11d95c33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d95c36 push edx */
  push32((uint32_t)(EDX));
  /* 11d95c37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95c3a push eax */
  push32((uint32_t)(EAX));
  /* 11d95c3b call dword ptr [0x11db42cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42cc))), 0x11d95c41u);
  /* 11d95c41 jmp 0x11d95d31 */
  goto L_11d95d31;
L_11d95c46:;
  /* 11d95c46 cmp dword ptr [0x11db1a38], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a38))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95c4d jne 0x11d95d2f */
  if (!C.zf) goto L_11d95d2f;
  /* 11d95c53 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95c57 jne 0x11d95c62 */
  if (!C.zf) goto L_11d95c62;
  /* 11d95c59 mov ecx, dword ptr [0x11db19a0] */
  ECX = (r32((uint32_t)(0x11db19a0)));
  /* 11d95c5f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11d95c62:;
  /* 11d95c62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95c64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95c66 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d95c69 push edx */
  push32((uint32_t)(EDX));
  /* 11d95c6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95c6d push eax */
  push32((uint32_t)(EAX));
  /* 11d95c6e call dword ptr [0x11db42e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42e0))), 0x11d95c74u);
  /* 11d95c74 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d95c77 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95c7b jne 0x11d95c84 */
  if (!C.zf) goto L_11d95c84;
  /* 11d95c7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d95c7f jmp 0x11d95d31 */
  goto L_11d95d31;
L_11d95c84:;
  /* 11d95c84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d95c8b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d95c8e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95c91 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d95c93 call 0x11d89990 */
  push32(0x11d95c98u); f_11d89990();
  /* 11d95c98 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11d95c9b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d95c9e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d95ca1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11d95ca4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d95cab jmp 0x11d95cc4 */
  goto L_11d95cc4;
  /* 11d95cad mov eax, 1 */
  EAX = (0x1u);
  /* 11d95cb2 ret  */
  ESPCHK(0x11d95bb0u, _esp0);
  ESP += 4; return;
  /* 11d95cb3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d95cb6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11d95cbd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d95cc4:;
  /* 11d95cc4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95cc8 jne 0x11d95cce */
  if (!C.zf) goto L_11d95cce;
  /* 11d95cca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d95ccc jmp 0x11d95d31 */
  goto L_11d95d31;
L_11d95cce:;
  /* 11d95cce mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d95cd1 push edx */
  push32((uint32_t)(EDX));
  /* 11d95cd2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d95cd5 push eax */
  push32((uint32_t)(EAX));
  /* 11d95cd6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d95cd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d95cda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95cdd push edx */
  push32((uint32_t)(EDX));
  /* 11d95cde call dword ptr [0x11db42e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42e0))), 0x11d95ce4u);
  /* 11d95ce4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d95ce6 jne 0x11d95cec */
  if (!C.zf) goto L_11d95cec;
  /* 11d95ce8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d95cea jmp 0x11d95d31 */
  goto L_11d95d31;
L_11d95cec:;
  /* 11d95cec cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95cf0 jne 0x11d95d0d */
  if (!C.zf) goto L_11d95d0d;
  /* 11d95cf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95cf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95cf6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d95cf8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d95cfb push eax */
  push32((uint32_t)(EAX));
  /* 11d95cfc push 1 */
  push32((uint32_t)(0x1u));
  /* 11d95cfe mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d95d01 push ecx */
  push32((uint32_t)(ECX));
  /* 11d95d02 call dword ptr [0x11db431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db431c))), 0x11d95d08u);
  /* 11d95d08 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d95d0b jmp 0x11d95d2a */
  goto L_11d95d2a;
L_11d95d0d:;
  /* 11d95d0d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d95d10 push edx */
  push32((uint32_t)(EDX));
  /* 11d95d11 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d95d14 push eax */
  push32((uint32_t)(EAX));
  /* 11d95d15 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d95d17 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d95d1a push ecx */
  push32((uint32_t)(ECX));
  /* 11d95d1b push 1 */
  push32((uint32_t)(0x1u));
  /* 11d95d1d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d95d20 push edx */
  push32((uint32_t)(EDX));
  /* 11d95d21 call dword ptr [0x11db431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db431c))), 0x11d95d27u);
  /* 11d95d27 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11d95d2a:;
  /* 11d95d2a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d95d2d jmp 0x11d95d31 */
  goto L_11d95d31;
L_11d95d2f:;
  /* 11d95d2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d95d31:;
  /* 11d95d31 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11d95d34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d95d37 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d95d3e pop edi */
  EDI = (pop32());
  /* 11d95d3f pop esi */
  ESI = (pop32());
  /* 11d95d40 pop ebx */
  EBX = (pop32());
  /* 11d95d41 mov esp, ebp */
  ESP = (EBP);
  /* 11d95d43 pop ebp */
  EBP = (pop32());
  /* 11d95d44 ret  */
  ESPCHK(0x11d95bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d50 @ 0x11d95d50 (398 bytes, 140 insns) */
void f_11d95d50(void) {
  FTRACE(0x11d95d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d95d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11d95d51 mov ebp, esp */
  EBP = (ESP);
  /* 11d95d53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d95d55 push 0x11dadd08 */
  push32((uint32_t)(0x11dadd08u));
  /* 11d95d5a push 0x11d8fa38 */
  push32((uint32_t)(0x11d8fa38u));
  /* 11d95d5f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d95d65 push eax */
  push32((uint32_t)(EAX));
  /* 11d95d66 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d95d6d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95d70 push ebx */
  push32((uint32_t)(EBX));
  /* 11d95d71 push esi */
  push32((uint32_t)(ESI));
  /* 11d95d72 push edi */
  push32((uint32_t)(EDI));
  /* 11d95d73 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d95d76 cmp dword ptr [0x11db1a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95d7d jne 0x11d95dc2 */
  if (!C.zf) goto L_11d95dc2;
  /* 11d95d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95d81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95d83 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d95d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95d87 call dword ptr [0x11db42cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42cc))), 0x11d95d8du);
  /* 11d95d8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d95d8f je 0x11d95d9d */
  if (C.zf) goto L_11d95d9d;
  /* 11d95d91 mov dword ptr [0x11db1a3c], 1 */
  w32((uint32_t)(0x11db1a3c), (0x1u));
  /* 11d95d9b jmp 0x11d95dc2 */
  goto L_11d95dc2;
L_11d95d9d:;
  /* 11d95d9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95d9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95da1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d95da3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95da5 call dword ptr [0x11db42e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42e0))), 0x11d95dabu);
  /* 11d95dab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d95dad je 0x11d95dbb */
  if (C.zf) goto L_11d95dbb;
  /* 11d95daf mov dword ptr [0x11db1a3c], 2 */
  w32((uint32_t)(0x11db1a3c), (0x2u));
  /* 11d95db9 jmp 0x11d95dc2 */
  goto L_11d95dc2;
L_11d95dbb:;
  /* 11d95dbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d95dbd jmp 0x11d95ee1 */
  goto L_11d95ee1;
L_11d95dc2:;
  /* 11d95dc2 cmp dword ptr [0x11db1a3c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95dc9 jne 0x11d95de6 */
  if (!C.zf) goto L_11d95de6;
  /* 11d95dcb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d95dce push eax */
  push32((uint32_t)(EAX));
  /* 11d95dcf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d95dd2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d95dd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d95dd6 push edx */
  push32((uint32_t)(EDX));
  /* 11d95dd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95dda push eax */
  push32((uint32_t)(EAX));
  /* 11d95ddb call dword ptr [0x11db42e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42e0))), 0x11d95de1u);
  /* 11d95de1 jmp 0x11d95ee1 */
  goto L_11d95ee1;
L_11d95de6:;
  /* 11d95de6 cmp dword ptr [0x11db1a3c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a3c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95ded jne 0x11d95edf */
  if (!C.zf) goto L_11d95edf;
  /* 11d95df3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95df7 jne 0x11d95e02 */
  if (!C.zf) goto L_11d95e02;
  /* 11d95df9 mov ecx, dword ptr [0x11db19a0] */
  ECX = (r32((uint32_t)(0x11db19a0)));
  /* 11d95dff mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11d95e02:;
  /* 11d95e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95e04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95e06 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d95e09 push edx */
  push32((uint32_t)(EDX));
  /* 11d95e0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95e0d push eax */
  push32((uint32_t)(EAX));
  /* 11d95e0e call dword ptr [0x11db42cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42cc))), 0x11d95e14u);
  /* 11d95e14 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d95e17 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95e1b jne 0x11d95e24 */
  if (!C.zf) goto L_11d95e24;
  /* 11d95e1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d95e1f jmp 0x11d95ee1 */
  goto L_11d95ee1;
L_11d95e24:;
  /* 11d95e24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d95e2b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d95e2e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d95e30 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95e33 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d95e35 call 0x11d89990 */
  push32(0x11d95e3au); f_11d89990();
  /* 11d95e3a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11d95e3d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d95e40 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d95e43 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11d95e46 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d95e4d jmp 0x11d95e66 */
  goto L_11d95e66;
  /* 11d95e4f mov eax, 1 */
  EAX = (0x1u);
  /* 11d95e54 ret  */
  ESPCHK(0x11d95d50u, _esp0);
  ESP += 4; return;
  /* 11d95e55 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d95e58 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11d95e5f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d95e66:;
  /* 11d95e66 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95e6a jne 0x11d95e70 */
  if (!C.zf) goto L_11d95e70;
  /* 11d95e6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d95e6e jmp 0x11d95ee1 */
  goto L_11d95ee1;
L_11d95e70:;
  /* 11d95e70 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d95e73 push edx */
  push32((uint32_t)(EDX));
  /* 11d95e74 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d95e77 push eax */
  push32((uint32_t)(EAX));
  /* 11d95e78 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d95e7b push ecx */
  push32((uint32_t)(ECX));
  /* 11d95e7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95e7f push edx */
  push32((uint32_t)(EDX));
  /* 11d95e80 call dword ptr [0x11db42cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db42cc))), 0x11d95e86u);
  /* 11d95e86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d95e88 jne 0x11d95e8e */
  if (!C.zf) goto L_11d95e8e;
  /* 11d95e8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d95e8c jmp 0x11d95ee1 */
  goto L_11d95ee1;
L_11d95e8e:;
  /* 11d95e8e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95e92 jne 0x11d95eb6 */
  if (!C.zf) goto L_11d95eb6;
  /* 11d95e94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95e96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95e98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95e9c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d95e9e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d95ea1 push eax */
  push32((uint32_t)(EAX));
  /* 11d95ea2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11d95ea7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d95eaa push ecx */
  push32((uint32_t)(ECX));
  /* 11d95eab call dword ptr [0x11db4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4368))), 0x11d95eb1u);
  /* 11d95eb1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d95eb4 jmp 0x11d95eda */
  goto L_11d95eda;
L_11d95eb6:;
  /* 11d95eb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95eb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d95eba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d95ebd push edx */
  push32((uint32_t)(EDX));
  /* 11d95ebe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d95ec1 push eax */
  push32((uint32_t)(EAX));
  /* 11d95ec2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d95ec4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d95ec7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d95ec8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11d95ecd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d95ed0 push edx */
  push32((uint32_t)(EDX));
  /* 11d95ed1 call dword ptr [0x11db4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db4368))), 0x11d95ed7u);
  /* 11d95ed7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11d95eda:;
  /* 11d95eda mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d95edd jmp 0x11d95ee1 */
  goto L_11d95ee1;
L_11d95edf:;
  /* 11d95edf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d95ee1:;
  /* 11d95ee1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11d95ee4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d95ee7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d95eee pop edi */
  EDI = (pop32());
  /* 11d95eef pop esi */
  ESI = (pop32());
  /* 11d95ef0 pop ebx */
  EBX = (pop32());
  /* 11d95ef1 mov esp, ebp */
  ESP = (EBP);
  /* 11d95ef3 pop ebp */
  EBP = (pop32());
  /* 11d95ef4 ret  */
  ESPCHK(0x11d95d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f00 @ 0x11d95f00 (11 bytes, 6 insns) */
void f_11d95f00(void) {
  FTRACE(0x11d95f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d95f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11d95f01 mov ebp, esp */
  EBP = (ESP);
  /* 11d95f03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95f06 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95f09 pop ebp */
  EBP = (pop32());
  /* 11d95f0a ret  */
  ESPCHK(0x11d95f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f10 @ 0x11d95f10 (147 bytes, 43 insns) */
void f_11d95f10(void) {
  FTRACE(0x11d95f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d95f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11d95f11 mov ebp, esp */
  EBP = (ESP);
  /* 11d95f13 push ecx */
  push32((uint32_t)(ECX));
  /* 11d95f14 cmp dword ptr [0x11db1990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95f1b jne 0x11d95f37 */
  if (!C.zf) goto L_11d95f37;
  /* 11d95f1d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95f21 jl 0x11d95f32 */
  if ((C.sf!=C.of)) goto L_11d95f32;
  /* 11d95f23 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95f27 jg 0x11d95f32 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d95f32;
  /* 11d95f29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95f2c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95f2f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11d95f32:;
  /* 11d95f32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95f35 jmp 0x11d95f9f */
  goto L_11d95f9f;
L_11d95f37:;
  /* 11d95f37 push 0x11db1a64 */
  push32((uint32_t)(0x11db1a64u));
  /* 11d95f3c call dword ptr [0x11db43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43c4))), 0x11d95f42u);
  /* 11d95f42 cmp dword ptr [0x11db1a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95f49 je 0x11d95f69 */
  if (C.zf) goto L_11d95f69;
  /* 11d95f4b push 0x11db1a64 */
  push32((uint32_t)(0x11db1a64u));
  /* 11d95f50 call dword ptr [0x11db43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43b4))), 0x11d95f56u);
  /* 11d95f56 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d95f58 call 0x11d886f0 */
  push32(0x11d95f5du); f_11d886f0();
  /* 11d95f5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95f60 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d95f67 jmp 0x11d95f70 */
  goto L_11d95f70;
L_11d95f69:;
  /* 11d95f69 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d95f70:;
  /* 11d95f70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95f73 push ecx */
  push32((uint32_t)(ECX));
  /* 11d95f74 call 0x11d95fb0 */
  push32(0x11d95f79u); f_11d95fb0();
  /* 11d95f79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95f7c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d95f7f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95f83 je 0x11d95f91 */
  if (C.zf) goto L_11d95f91;
  /* 11d95f85 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d95f87 call 0x11d88790 */
  push32(0x11d95f8cu); f_11d88790();
  /* 11d95f8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95f8f jmp 0x11d95f9c */
  goto L_11d95f9c;
L_11d95f91:;
  /* 11d95f91 push 0x11db1a64 */
  push32((uint32_t)(0x11db1a64u));
  /* 11d95f96 call dword ptr [0x11db43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11db43b4))), 0x11d95f9cu);
L_11d95f9c:;
  /* 11d95f9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11d95f9f:;
  /* 11d95f9f mov esp, ebp */
  ESP = (EBP);
  /* 11d95fa1 pop ebp */
  EBP = (pop32());
  /* 11d95fa2 ret  */
  ESPCHK(0x11d95f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015fb0 @ 0x11d95fb0 (299 bytes, 91 insns) */
void f_11d95fb0(void) {
  FTRACE(0x11d95fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d95fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d95fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11d95fb3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d95fb6 cmp dword ptr [0x11db1990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11db1990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95fbd jne 0x11d95fdc */
  if (!C.zf) goto L_11d95fdc;
  /* 11d95fbf cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95fc3 jl 0x11d95fd4 */
  if ((C.sf!=C.of)) goto L_11d95fd4;
  /* 11d95fc5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95fc9 jg 0x11d95fd4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d95fd4;
  /* 11d95fcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95fce add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95fd1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11d95fd4:;
  /* 11d95fd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95fd7 jmp 0x11d960d7 */
  goto L_11d960d7;
L_11d95fdc:;
  /* 11d95fdc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95fe3 jge 0x11d96023 */
  if ((C.sf==C.of)) goto L_11d96023;
  /* 11d95fe5 cmp dword ptr [0x11daffc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11daffc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d95fec jle 0x11d96001 */
  if ((C.zf||C.sf!=C.of)) goto L_11d96001;
  /* 11d95fee push 1 */
  push32((uint32_t)(0x1u));
  /* 11d95ff0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d95ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d95ff4 call 0x11d8c420 */
  push32(0x11d95ff9u); f_11d8c420();
  /* 11d95ff9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d95ffc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d95fff jmp 0x11d96015 */
  goto L_11d96015;
L_11d96001:;
  /* 11d96001 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d96004 mov eax, dword ptr [0x11dafdb8] */
  EAX = (r32((uint32_t)(0x11dafdb8)));
  /* 11d96009 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d9600b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11d9600f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d96012 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11d96015:;
  /* 11d96015 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d96019 jne 0x11d96023 */
  if (!C.zf) goto L_11d96023;
  /* 11d9601b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9601e jmp 0x11d960d7 */
  goto L_11d960d7;
L_11d96023:;
  /* 11d96023 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d96026 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11d96029 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d9602f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d96035 mov eax, dword ptr [0x11dafdb8] */
  EAX = (r32((uint32_t)(0x11dafdb8)));
  /* 11d9603a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d9603c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11d96040 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11d96046 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d96048 je 0x11d9606c */
  if (C.zf) goto L_11d9606c;
  /* 11d9604a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d9604d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11d96050 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d96056 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11d96059 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11d9605c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11d9605f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11d96063 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11d9606a jmp 0x11d9607d */
  goto L_11d9607d;
L_11d9606c:;
  /* 11d9606c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11d9606f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11d96072 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11d96076 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11d9607d:;
  /* 11d9607d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d9607f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d96081 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d96083 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11d96086 push edx */
  push32((uint32_t)(EDX));
  /* 11d96087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d9608a push eax */
  push32((uint32_t)(EAX));
  /* 11d9608b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11d9608e push ecx */
  push32((uint32_t)(ECX));
  /* 11d9608f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d96094 mov edx, dword ptr [0x11db1990] */
  EDX = (r32((uint32_t)(0x11db1990)));
  /* 11d9609a push edx */
  push32((uint32_t)(EDX));
  /* 11d9609b call 0x11d8ebe0 */
  push32(0x11d960a0u); f_11d8ebe0();
  /* 11d960a0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d960a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d960a6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d960aa jne 0x11d960b1 */
  if (!C.zf) goto L_11d960b1;
  /* 11d960ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d960af jmp 0x11d960d7 */
  goto L_11d960d7;
L_11d960b1:;
  /* 11d960b1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d960b5 jne 0x11d960c1 */
  if (!C.zf) goto L_11d960c1;
  /* 11d960b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d960ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d960bf jmp 0x11d960d7 */
  goto L_11d960d7;
L_11d960c1:;
  /* 11d960c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d960c4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d960c9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11d960cc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d960d2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11d960d5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11d960d7:;
  /* 11d960d7 mov esp, ebp */
  ESP = (EBP);
  /* 11d960d9 pop ebp */
  EBP = (pop32());
  /* 11d960da ret  */
  ESPCHK(0x11d95fb0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11d9623e (6 bytes, 1 insns) */
void f_11d9623e(void) {
  FTRACE(0x11d9623eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d9623e jmp dword ptr [0x11db4304] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11db4304)))); return;
}

