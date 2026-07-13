#include "recomp.h"

/* ProcessAI @ 0x10051000 (16 bytes, 3 insns) */
void f_10051000(void) {
  FTRACE(0x10051000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10051000 call dword ptr [0x1005c518] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c518))), 0x10051006u);
  /* 10051006 mov dword ptr [0x1005c2cc], eax */
  w32((uint32_t)(0x1005c2cc), (EAX));
  /* 1005100b jmp 0x10056d40 */
  f_10056d40(); return;
}

/* InitAI @ 0x10051010 (5588 bytes, 1468 insns) */
void f_10051010(void) {
  FTRACE(0x10051010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10051010 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051015 sub esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10051018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005101a je 0x10051078 */
  if (C.zf) goto L_10051078;
  /* 1005101c push 0x10058ea4 */
  push32((uint32_t)(0x10058ea4u));
  /* 10051021 push 0x1005c0a0 */
  push32((uint32_t)(0x1005c0a0u));
  /* 10051026 call eax */
  call_ind((uint32_t)(EAX), 0x10051028u);
  /* 10051028 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 1005102d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051032 je 0x10051078 */
  if (C.zf) goto L_10051078;
  /* 10051034 push 0x10058e9c */
  push32((uint32_t)(0x10058e9cu));
  /* 10051039 push 0x1005c040 */
  push32((uint32_t)(0x1005c040u));
  /* 1005103e call eax */
  call_ind((uint32_t)(EAX), 0x10051040u);
  /* 10051040 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005104a je 0x10051078 */
  if (C.zf) goto L_10051078;
  /* 1005104c push 0x10058e94 */
  push32((uint32_t)(0x10058e94u));
  /* 10051051 push 0x1005c098 */
  push32((uint32_t)(0x1005c098u));
  /* 10051056 call eax */
  call_ind((uint32_t)(EAX), 0x10051058u);
  /* 10051058 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 1005105d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051062 je 0x10051078 */
  if (C.zf) goto L_10051078;
  /* 10051064 push 0x10058e8c */
  push32((uint32_t)(0x10058e8cu));
  /* 10051069 push 0x1005c0a8 */
  push32((uint32_t)(0x1005c0a8u));
  /* 1005106e call eax */
  call_ind((uint32_t)(EAX), 0x10051070u);
  /* 10051070 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10051078:;
  /* 10051078 mov ecx, dword ptr [0x1005c410] */
  ECX = (r32((uint32_t)(0x1005c410)));
  /* 1005107e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10051080 je 0x10051096 */
  if (C.zf) goto L_10051096;
  /* 10051082 push 0x10058e80 */
  push32((uint32_t)(0x10058e80u));
  /* 10051087 push 0x100596a8 */
  push32((uint32_t)(0x100596a8u));
  /* 1005108c call ecx */
  call_ind((uint32_t)(ECX), 0x1005108eu);
  /* 1005108e mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10051096:;
  /* 10051096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051098 je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 1005109e push 0x10058e6c */
  push32((uint32_t)(0x10058e6cu));
  /* 100510a3 push 0x10059918 */
  push32((uint32_t)(0x10059918u));
  /* 100510a8 call eax */
  call_ind((uint32_t)(EAX), 0x100510aau);
  /* 100510aa mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100510af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100510b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100510b4 je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 100510ba push 0x10058e58 */
  push32((uint32_t)(0x10058e58u));
  /* 100510bf push 0x10059910 */
  push32((uint32_t)(0x10059910u));
  /* 100510c4 call eax */
  call_ind((uint32_t)(EAX), 0x100510c6u);
  /* 100510c6 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100510cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100510ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100510d0 je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 100510d6 push 0x10058e44 */
  push32((uint32_t)(0x10058e44u));
  /* 100510db push 0x10059908 */
  push32((uint32_t)(0x10059908u));
  /* 100510e0 call eax */
  call_ind((uint32_t)(EAX), 0x100510e2u);
  /* 100510e2 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100510e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100510ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100510ec je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 100510f2 push 0x10058e30 */
  push32((uint32_t)(0x10058e30u));
  /* 100510f7 push 0x10059950 */
  push32((uint32_t)(0x10059950u));
  /* 100510fc call eax */
  call_ind((uint32_t)(EAX), 0x100510feu);
  /* 100510fe mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051108 je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 1005110e push 0x10058e1c */
  push32((uint32_t)(0x10058e1cu));
  /* 10051113 push 0x10059940 */
  push32((uint32_t)(0x10059940u));
  /* 10051118 call eax */
  call_ind((uint32_t)(EAX), 0x1005111au);
  /* 1005111a mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 1005111f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051122 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051124 je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 1005112a push 0x10058e08 */
  push32((uint32_t)(0x10058e08u));
  /* 1005112f push 0x10059938 */
  push32((uint32_t)(0x10059938u));
  /* 10051134 call eax */
  call_ind((uint32_t)(EAX), 0x10051136u);
  /* 10051136 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 1005113b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005113e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051140 je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 10051146 push 0x10058df4 */
  push32((uint32_t)(0x10058df4u));
  /* 1005114b push 0x100596f0 */
  push32((uint32_t)(0x100596f0u));
  /* 10051150 call eax */
  call_ind((uint32_t)(EAX), 0x10051152u);
  /* 10051152 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051157 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005115a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005115c je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 10051162 push 0x10058de0 */
  push32((uint32_t)(0x10058de0u));
  /* 10051167 push 0x100596e0 */
  push32((uint32_t)(0x100596e0u));
  /* 1005116c call eax */
  call_ind((uint32_t)(EAX), 0x1005116eu);
  /* 1005116e mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051178 je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 1005117e push 0x10058dcc */
  push32((uint32_t)(0x10058dccu));
  /* 10051183 push 0x100598d8 */
  push32((uint32_t)(0x100598d8u));
  /* 10051188 call eax */
  call_ind((uint32_t)(EAX), 0x1005118au);
  /* 1005118a mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 1005118f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051194 je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 1005119a push 0x10058db8 */
  push32((uint32_t)(0x10058db8u));
  /* 1005119f push 0x100598d0 */
  push32((uint32_t)(0x100598d0u));
  /* 100511a4 call eax */
  call_ind((uint32_t)(EAX), 0x100511a6u);
  /* 100511a6 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100511ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100511ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100511b0 je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 100511b6 push 0x10058da4 */
  push32((uint32_t)(0x10058da4u));
  /* 100511bb push 0x100598c8 */
  push32((uint32_t)(0x100598c8u));
  /* 100511c0 call eax */
  call_ind((uint32_t)(EAX), 0x100511c2u);
  /* 100511c2 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100511c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100511ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100511cc je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 100511d2 push 0x10058d90 */
  push32((uint32_t)(0x10058d90u));
  /* 100511d7 push 0x100598c0 */
  push32((uint32_t)(0x100598c0u));
  /* 100511dc call eax */
  call_ind((uint32_t)(EAX), 0x100511deu);
  /* 100511de mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100511e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100511e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100511e8 je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 100511ee push 0x10058e6c */
  push32((uint32_t)(0x10058e6cu));
  /* 100511f3 push 0x10059918 */
  push32((uint32_t)(0x10059918u));
  /* 100511f8 call eax */
  call_ind((uint32_t)(EAX), 0x100511fau);
  /* 100511fa mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100511ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051204 je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 1005120a push 0x10058e58 */
  push32((uint32_t)(0x10058e58u));
  /* 1005120f push 0x10059910 */
  push32((uint32_t)(0x10059910u));
  /* 10051214 call eax */
  call_ind((uint32_t)(EAX), 0x10051216u);
  /* 10051216 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 1005121b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005121e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051220 je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 10051226 push 0x10058e44 */
  push32((uint32_t)(0x10058e44u));
  /* 1005122b push 0x10059908 */
  push32((uint32_t)(0x10059908u));
  /* 10051230 call eax */
  call_ind((uint32_t)(EAX), 0x10051232u);
  /* 10051232 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005123a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005123c je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 10051242 push 0x10058e30 */
  push32((uint32_t)(0x10058e30u));
  /* 10051247 push 0x10059950 */
  push32((uint32_t)(0x10059950u));
  /* 1005124c call eax */
  call_ind((uint32_t)(EAX), 0x1005124eu);
  /* 1005124e mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051258 je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 1005125e push 0x10058e1c */
  push32((uint32_t)(0x10058e1cu));
  /* 10051263 push 0x10059940 */
  push32((uint32_t)(0x10059940u));
  /* 10051268 call eax */
  call_ind((uint32_t)(EAX), 0x1005126au);
  /* 1005126a mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 1005126f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051274 je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 1005127a push 0x10058e08 */
  push32((uint32_t)(0x10058e08u));
  /* 1005127f push 0x10059938 */
  push32((uint32_t)(0x10059938u));
  /* 10051284 call eax */
  call_ind((uint32_t)(EAX), 0x10051286u);
  /* 10051286 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 1005128b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005128e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051290 je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 10051296 push 0x10058df4 */
  push32((uint32_t)(0x10058df4u));
  /* 1005129b push 0x100596f0 */
  push32((uint32_t)(0x100596f0u));
  /* 100512a0 call eax */
  call_ind((uint32_t)(EAX), 0x100512a2u);
  /* 100512a2 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100512a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100512aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100512ac je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 100512ae push 0x10058de0 */
  push32((uint32_t)(0x10058de0u));
  /* 100512b3 push 0x100596e0 */
  push32((uint32_t)(0x100596e0u));
  /* 100512b8 call eax */
  call_ind((uint32_t)(EAX), 0x100512bau);
  /* 100512ba mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100512bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100512c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100512c4 je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 100512c6 push 0x10058dcc */
  push32((uint32_t)(0x10058dccu));
  /* 100512cb push 0x100598d8 */
  push32((uint32_t)(0x100598d8u));
  /* 100512d0 call eax */
  call_ind((uint32_t)(EAX), 0x100512d2u);
  /* 100512d2 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100512d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100512da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100512dc je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 100512de push 0x10058db8 */
  push32((uint32_t)(0x10058db8u));
  /* 100512e3 push 0x100598d0 */
  push32((uint32_t)(0x100598d0u));
  /* 100512e8 call eax */
  call_ind((uint32_t)(EAX), 0x100512eau);
  /* 100512ea mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100512ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100512f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100512f4 je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 100512f6 push 0x10058da4 */
  push32((uint32_t)(0x10058da4u));
  /* 100512fb push 0x100598c8 */
  push32((uint32_t)(0x100598c8u));
  /* 10051300 call eax */
  call_ind((uint32_t)(EAX), 0x10051302u);
  /* 10051302 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005130a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005130c je 0x10051322 */
  if (C.zf) goto L_10051322;
  /* 1005130e push 0x10058d90 */
  push32((uint32_t)(0x10058d90u));
  /* 10051313 push 0x100598c0 */
  push32((uint32_t)(0x100598c0u));
  /* 10051318 call eax */
  call_ind((uint32_t)(EAX), 0x1005131au);
  /* 1005131a mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 1005131f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10051322:;
  /* 10051322 mov ecx, dword ptr [0x1005c410] */
  ECX = (r32((uint32_t)(0x1005c410)));
  /* 10051328 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1005132a je 0x10051340 */
  if (C.zf) goto L_10051340;
  /* 1005132c push 0x10058d80 */
  push32((uint32_t)(0x10058d80u));
  /* 10051331 push 0x10059698 */
  push32((uint32_t)(0x10059698u));
  /* 10051336 call ecx */
  call_ind((uint32_t)(ECX), 0x10051338u);
  /* 10051338 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 1005133d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10051340:;
  /* 10051340 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051342 je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 10051348 push 0x10058d6c */
  push32((uint32_t)(0x10058d6cu));
  /* 1005134d push 0x10059670 */
  push32((uint32_t)(0x10059670u));
  /* 10051352 call eax */
  call_ind((uint32_t)(EAX), 0x10051354u);
  /* 10051354 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051359 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005135c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005135e je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 10051364 push 0x10058d54 */
  push32((uint32_t)(0x10058d54u));
  /* 10051369 push 0x10059668 */
  push32((uint32_t)(0x10059668u));
  /* 1005136e call eax */
  call_ind((uint32_t)(EAX), 0x10051370u);
  /* 10051370 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005137a je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 10051380 push 0x10058d3c */
  push32((uint32_t)(0x10058d3cu));
  /* 10051385 push 0x10059660 */
  push32((uint32_t)(0x10059660u));
  /* 1005138a call eax */
  call_ind((uint32_t)(EAX), 0x1005138cu);
  /* 1005138c mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051391 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051396 je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 1005139c push 0x10058d24 */
  push32((uint32_t)(0x10058d24u));
  /* 100513a1 push 0x1005c330 */
  push32((uint32_t)(0x1005c330u));
  /* 100513a6 call eax */
  call_ind((uint32_t)(EAX), 0x100513a8u);
  /* 100513a8 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100513ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100513b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100513b2 je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 100513b8 push 0x10058d0c */
  push32((uint32_t)(0x10058d0cu));
  /* 100513bd push 0x1005c328 */
  push32((uint32_t)(0x1005c328u));
  /* 100513c2 call eax */
  call_ind((uint32_t)(EAX), 0x100513c4u);
  /* 100513c4 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100513c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100513cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100513ce je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 100513d4 push 0x10058cf4 */
  push32((uint32_t)(0x10058cf4u));
  /* 100513d9 push 0x1005c320 */
  push32((uint32_t)(0x1005c320u));
  /* 100513de call eax */
  call_ind((uint32_t)(EAX), 0x100513e0u);
  /* 100513e0 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100513e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100513e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100513ea je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 100513f0 push 0x10058ce0 */
  push32((uint32_t)(0x10058ce0u));
  /* 100513f5 push 0x1005c3a8 */
  push32((uint32_t)(0x1005c3a8u));
  /* 100513fa call eax */
  call_ind((uint32_t)(EAX), 0x100513fcu);
  /* 100513fc mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051404 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051406 je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 1005140c push 0x10058cc8 */
  push32((uint32_t)(0x10058cc8u));
  /* 10051411 push 0x1005c3a0 */
  push32((uint32_t)(0x1005c3a0u));
  /* 10051416 call eax */
  call_ind((uint32_t)(EAX), 0x10051418u);
  /* 10051418 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 1005141d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051422 je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 10051428 push 0x10058cb0 */
  push32((uint32_t)(0x10058cb0u));
  /* 1005142d push 0x1005c3f0 */
  push32((uint32_t)(0x1005c3f0u));
  /* 10051432 call eax */
  call_ind((uint32_t)(EAX), 0x10051434u);
  /* 10051434 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005143c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005143e je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 10051444 push 0x10058c98 */
  push32((uint32_t)(0x10058c98u));
  /* 10051449 push 0x1005c3e8 */
  push32((uint32_t)(0x1005c3e8u));
  /* 1005144e call eax */
  call_ind((uint32_t)(EAX), 0x10051450u);
  /* 10051450 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005145a je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 10051460 push 0x10058c80 */
  push32((uint32_t)(0x10058c80u));
  /* 10051465 push 0x1005c3e0 */
  push32((uint32_t)(0x1005c3e0u));
  /* 1005146a call eax */
  call_ind((uint32_t)(EAX), 0x1005146cu);
  /* 1005146c mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051476 je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 1005147c push 0x10058c68 */
  push32((uint32_t)(0x10058c68u));
  /* 10051481 push 0x1005c3d8 */
  push32((uint32_t)(0x1005c3d8u));
  /* 10051486 call eax */
  call_ind((uint32_t)(EAX), 0x10051488u);
  /* 10051488 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 1005148d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051492 je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 10051498 push 0x10058d6c */
  push32((uint32_t)(0x10058d6cu));
  /* 1005149d push 0x10059670 */
  push32((uint32_t)(0x10059670u));
  /* 100514a2 call eax */
  call_ind((uint32_t)(EAX), 0x100514a4u);
  /* 100514a4 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100514a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100514ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100514ae je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 100514b4 push 0x10058d54 */
  push32((uint32_t)(0x10058d54u));
  /* 100514b9 push 0x10059668 */
  push32((uint32_t)(0x10059668u));
  /* 100514be call eax */
  call_ind((uint32_t)(EAX), 0x100514c0u);
  /* 100514c0 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100514c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100514c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100514ca je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 100514d0 push 0x10058d3c */
  push32((uint32_t)(0x10058d3cu));
  /* 100514d5 push 0x10059660 */
  push32((uint32_t)(0x10059660u));
  /* 100514da call eax */
  call_ind((uint32_t)(EAX), 0x100514dcu);
  /* 100514dc mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100514e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100514e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100514e6 je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 100514ec push 0x10058d24 */
  push32((uint32_t)(0x10058d24u));
  /* 100514f1 push 0x1005c330 */
  push32((uint32_t)(0x1005c330u));
  /* 100514f6 call eax */
  call_ind((uint32_t)(EAX), 0x100514f8u);
  /* 100514f8 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100514fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051502 je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 10051508 push 0x10058d0c */
  push32((uint32_t)(0x10058d0cu));
  /* 1005150d push 0x1005c328 */
  push32((uint32_t)(0x1005c328u));
  /* 10051512 call eax */
  call_ind((uint32_t)(EAX), 0x10051514u);
  /* 10051514 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005151c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005151e je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 10051524 push 0x10058cf4 */
  push32((uint32_t)(0x10058cf4u));
  /* 10051529 push 0x1005c320 */
  push32((uint32_t)(0x1005c320u));
  /* 1005152e call eax */
  call_ind((uint32_t)(EAX), 0x10051530u);
  /* 10051530 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051535 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005153a je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 10051540 push 0x10058ce0 */
  push32((uint32_t)(0x10058ce0u));
  /* 10051545 push 0x1005c3a8 */
  push32((uint32_t)(0x1005c3a8u));
  /* 1005154a call eax */
  call_ind((uint32_t)(EAX), 0x1005154cu);
  /* 1005154c mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051556 je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 10051558 push 0x10058cc8 */
  push32((uint32_t)(0x10058cc8u));
  /* 1005155d push 0x1005c3a0 */
  push32((uint32_t)(0x1005c3a0u));
  /* 10051562 call eax */
  call_ind((uint32_t)(EAX), 0x10051564u);
  /* 10051564 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051569 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005156c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005156e je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 10051570 push 0x10058cb0 */
  push32((uint32_t)(0x10058cb0u));
  /* 10051575 push 0x1005c3f0 */
  push32((uint32_t)(0x1005c3f0u));
  /* 1005157a call eax */
  call_ind((uint32_t)(EAX), 0x1005157cu);
  /* 1005157c mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051586 je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 10051588 push 0x10058c98 */
  push32((uint32_t)(0x10058c98u));
  /* 1005158d push 0x1005c3e8 */
  push32((uint32_t)(0x1005c3e8u));
  /* 10051592 call eax */
  call_ind((uint32_t)(EAX), 0x10051594u);
  /* 10051594 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005159c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005159e je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 100515a0 push 0x10058c80 */
  push32((uint32_t)(0x10058c80u));
  /* 100515a5 push 0x1005c3e0 */
  push32((uint32_t)(0x1005c3e0u));
  /* 100515aa call eax */
  call_ind((uint32_t)(EAX), 0x100515acu);
  /* 100515ac mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100515b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100515b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100515b6 je 0x100515c7 */
  if (C.zf) goto L_100515c7;
  /* 100515b8 push 0x10058c68 */
  push32((uint32_t)(0x10058c68u));
  /* 100515bd push 0x1005c3d8 */
  push32((uint32_t)(0x1005c3d8u));
  /* 100515c2 call eax */
  call_ind((uint32_t)(EAX), 0x100515c4u);
  /* 100515c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100515c7:;
  /* 100515c7 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 100515cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100515ce je 0x100515df */
  if (C.zf) goto L_100515df;
  /* 100515d0 push 0x10058c54 */
  push32((uint32_t)(0x10058c54u));
  /* 100515d5 push 0x1005bff8 */
  push32((uint32_t)(0x1005bff8u));
  /* 100515da call eax */
  call_ind((uint32_t)(EAX), 0x100515dcu);
  /* 100515dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100515df:;
  /* 100515df call dword ptr [0x1005c518] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c518))), 0x100515e5u);
  /* 100515e5 mov dword ptr [0x1005c2cc], eax */
  w32((uint32_t)(0x1005c2cc), (EAX));
  /* 100515ea call 0x100526c0 */
  push32(0x100515efu); f_100526c0();
  /* 100515ef mov ecx, eax */
  ECX = (EAX);
  /* 100515f1 mov eax, dword ptr [0x1005c2cc] */
  EAX = (r32((uint32_t)(0x1005c2cc)));
  /* 100515f6 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 100515fc mov dword ptr [eax*4 + 0x1005bfb0], ecx */
  w32((uint32_t)(EAX*4 + 0x1005bfb0), (ECX));
  /* 10051603 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 10051606 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 10051609 lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 1005160c lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 1005160f shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10051612 mov dword ptr [eax + 0x10059b08], 0 */
  w32((uint32_t)(EAX + 0x10059b08), (0x0u));
  /* 1005161c mov dword ptr [eax + 0x10059c9c], 0 */
  w32((uint32_t)(EAX + 0x10059c9c), (0x0u));
  /* 10051626 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 1005162b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005162d je 0x1005163e */
  if (C.zf) goto L_1005163e;
  /* 1005162f push 0x10058c38 */
  push32((uint32_t)(0x10058c38u));
  /* 10051634 push 0x1005c0e8 */
  push32((uint32_t)(0x1005c0e8u));
  /* 10051639 call eax */
  call_ind((uint32_t)(EAX), 0x1005163bu);
  /* 1005163b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005163e:;
  /* 1005163e mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 10051643 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051645 je 0x10051656 */
  if (C.zf) goto L_10051656;
  /* 10051647 push 0x10058c24 */
  push32((uint32_t)(0x10058c24u));
  /* 1005164c push 0x100598a0 */
  push32((uint32_t)(0x100598a0u));
  /* 10051651 call eax */
  call_ind((uint32_t)(EAX), 0x10051653u);
  /* 10051653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10051656:;
  /* 10051656 push ebp */
  push32((uint32_t)(EBP));
  /* 10051657 push esi */
  push32((uint32_t)(ESI));
  /* 10051658 push edi */
  push32((uint32_t)(EDI));
  /* 10051659 call 0x100526c0 */
  push32(0x1005165eu); f_100526c0();
  /* 1005165e mov edx, eax */
  EDX = (EAX);
  /* 10051660 and eax, 6 */
  { uint32_t _r=(EAX)&(0x6u); EAX = (_r); fl_logic(_r,32); }
  /* 10051663 cmp al, 2 */
  { uint32_t _a=(AL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10051665 lea ebp, [esp + 0xc] */
  EBP = ((uint32_t)(ESP + 0xc));
  /* 10051669 mov edi, 0x10058e80 */
  EDI = (0x10058e80u);
  /* 1005166e je 0x10051675 */
  if (C.zf) goto L_10051675;
  /* 10051670 mov edi, 0x10058c14 */
  EDI = (0x10058c14u);
L_10051675:;
  /* 10051675 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10051678 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1005167a repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1005167c not ecx */
  ECX = (~(ECX));
  /* 1005167e sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10051680 and edx, 0x18 */
  { uint32_t _r=(EDX)&(0x18u); EDX = (_r); fl_logic(_r,32); }
  /* 10051683 mov eax, ecx */
  EAX = (ECX);
  /* 10051685 mov esi, edi */
  ESI = (EDI);
  /* 10051687 mov edi, ebp */
  EDI = (EBP);
  /* 10051689 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1005168c rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1005168e mov ecx, eax */
  ECX = (EAX);
  /* 10051690 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10051692 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10051695 cmp dl, 8 */
  { uint32_t _a=(DL),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10051698 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 1005169a mov edi, 0x10058c04 */
  EDI = (0x10058c04u);
  /* 1005169f or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 100516a2 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 100516a4 not ecx */
  ECX = (~(ECX));
  /* 100516a6 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100516a8 lea edx, [esp + 0x3c] */
  EDX = ((uint32_t)(ESP + 0x3c));
  /* 100516ac mov eax, ecx */
  EAX = (ECX);
  /* 100516ae mov esi, edi */
  ESI = (EDI);
  /* 100516b0 mov edi, edx */
  EDI = (EDX);
  /* 100516b2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100516b5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100516b7 mov ecx, eax */
  ECX = (EAX);
  /* 100516b9 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 100516be and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 100516c1 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 100516c3 pop edi */
  EDI = (pop32());
  /* 100516c4 pop esi */
  ESI = (pop32());
  /* 100516c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100516c7 pop ebp */
  EBP = (pop32());
  /* 100516c8 je 0x1005170e */
  if (C.zf) goto L_1005170e;
  /* 100516ca push 0x10058bec */
  push32((uint32_t)(0x10058becu));
  /* 100516cf push 0x1005c290 */
  push32((uint32_t)(0x1005c290u));
  /* 100516d4 call eax */
  call_ind((uint32_t)(EAX), 0x100516d6u);
  /* 100516d6 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 100516db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100516de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100516e0 je 0x1005170e */
  if (C.zf) goto L_1005170e;
  /* 100516e2 push 0x10058bd4 */
  push32((uint32_t)(0x10058bd4u));
  /* 100516e7 push 0x1005c340 */
  push32((uint32_t)(0x1005c340u));
  /* 100516ec call eax */
  call_ind((uint32_t)(EAX), 0x100516eeu);
  /* 100516ee mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 100516f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100516f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100516f8 je 0x1005170e */
  if (C.zf) goto L_1005170e;
  /* 100516fa push 0x10058bc0 */
  push32((uint32_t)(0x10058bc0u));
  /* 100516ff push 0x10059718 */
  push32((uint32_t)(0x10059718u));
  /* 10051704 call eax */
  call_ind((uint32_t)(EAX), 0x10051706u);
  /* 10051706 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 1005170b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005170e:;
  /* 1005170e mov ecx, dword ptr [0x1005c414] */
  ECX = (r32((uint32_t)(0x1005c414)));
  /* 10051714 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10051716 je 0x10051744 */
  if (C.zf) goto L_10051744;
  /* 10051718 push 0x10058ba8 */
  push32((uint32_t)(0x10058ba8u));
  /* 1005171d push 0x1005c278 */
  push32((uint32_t)(0x1005c278u));
  /* 10051722 call ecx */
  call_ind((uint32_t)(ECX), 0x10051724u);
  /* 10051724 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051729 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005172c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005172e je 0x1005173f */
  if (C.zf) goto L_1005173f;
  /* 10051730 push 0x10058b90 */
  push32((uint32_t)(0x10058b90u));
  /* 10051735 push 0x1005bfe0 */
  push32((uint32_t)(0x1005bfe0u));
  /* 1005173a call eax */
  call_ind((uint32_t)(EAX), 0x1005173cu);
  /* 1005173c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005173f:;
  /* 1005173f mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
L_10051744:;
  /* 10051744 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051746 je 0x10051757 */
  if (C.zf) goto L_10051757;
  /* 10051748 push 0x10058b7c */
  push32((uint32_t)(0x10058b7cu));
  /* 1005174d push 0x10059658 */
  push32((uint32_t)(0x10059658u));
  /* 10051752 call eax */
  call_ind((uint32_t)(EAX), 0x10051754u);
  /* 10051754 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10051757:;
  /* 10051757 push 0x10058b68 */
  push32((uint32_t)(0x10058b68u));
  /* 1005175c call 0x10052690 */
  push32(0x10051761u); f_10052690();
  /* 10051761 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 10051766 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051769 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005176b je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 10051771 push 0x10058b68 */
  push32((uint32_t)(0x10058b68u));
  /* 10051776 push 0x100596a0 */
  push32((uint32_t)(0x100596a0u));
  /* 1005177b call eax */
  call_ind((uint32_t)(EAX), 0x1005177du);
  /* 1005177d mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 10051782 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051785 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051787 je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 1005178d push 0x10058b54 */
  push32((uint32_t)(0x10058b54u));
  /* 10051792 push 0x1005c1a8 */
  push32((uint32_t)(0x1005c1a8u));
  /* 10051797 call eax */
  call_ind((uint32_t)(EAX), 0x10051799u);
  /* 10051799 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 1005179e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100517a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100517a3 je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 100517a9 push 0x10058b40 */
  push32((uint32_t)(0x10058b40u));
  /* 100517ae push 0x1005c178 */
  push32((uint32_t)(0x1005c178u));
  /* 100517b3 call eax */
  call_ind((uint32_t)(EAX), 0x100517b5u);
  /* 100517b5 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 100517ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100517bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100517bf je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 100517c5 push 0x10058b2c */
  push32((uint32_t)(0x10058b2cu));
  /* 100517ca push 0x1005c0f8 */
  push32((uint32_t)(0x1005c0f8u));
  /* 100517cf call eax */
  call_ind((uint32_t)(EAX), 0x100517d1u);
  /* 100517d1 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 100517d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100517d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100517db je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 100517e1 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 100517e5 push ecx */
  push32((uint32_t)(ECX));
  /* 100517e6 push 0x1005c3c8 */
  push32((uint32_t)(0x1005c3c8u));
  /* 100517eb call eax */
  call_ind((uint32_t)(EAX), 0x100517edu);
  /* 100517ed mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 100517f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100517f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100517f7 je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 100517fd push 0x10058b20 */
  push32((uint32_t)(0x10058b20u));
  /* 10051802 push 0x1005c348 */
  push32((uint32_t)(0x1005c348u));
  /* 10051807 call eax */
  call_ind((uint32_t)(EAX), 0x10051809u);
  /* 10051809 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 1005180e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051811 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051813 je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 10051819 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 1005181d push edx */
  push32((uint32_t)(EDX));
  /* 1005181e push 0x1005bf98 */
  push32((uint32_t)(0x1005bf98u));
  /* 10051823 call eax */
  call_ind((uint32_t)(EAX), 0x10051825u);
  /* 10051825 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 1005182a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005182d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005182f je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 10051835 push 0x10058b14 */
  push32((uint32_t)(0x10058b14u));
  /* 1005183a push 0x1005c388 */
  push32((uint32_t)(0x1005c388u));
  /* 1005183f call eax */
  call_ind((uint32_t)(EAX), 0x10051841u);
  /* 10051841 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 10051846 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051849 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005184b je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 10051851 push 0x10058b08 */
  push32((uint32_t)(0x10058b08u));
  /* 10051856 push 0x10059680 */
  push32((uint32_t)(0x10059680u));
  /* 1005185b call eax */
  call_ind((uint32_t)(EAX), 0x1005185du);
  /* 1005185d mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 10051862 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051865 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051867 je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 1005186d push 0x10058af8 */
  push32((uint32_t)(0x10058af8u));
  /* 10051872 push 0x100598e0 */
  push32((uint32_t)(0x100598e0u));
  /* 10051877 call eax */
  call_ind((uint32_t)(EAX), 0x10051879u);
  /* 10051879 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 1005187e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051881 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051883 je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 10051889 push 0x10058aec */
  push32((uint32_t)(0x10058aecu));
  /* 1005188e push 0x1005c208 */
  push32((uint32_t)(0x1005c208u));
  /* 10051893 call eax */
  call_ind((uint32_t)(EAX), 0x10051895u);
  /* 10051895 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 1005189a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005189d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005189f je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 100518a5 push 0x10058ae0 */
  push32((uint32_t)(0x10058ae0u));
  /* 100518aa push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 100518af call eax */
  call_ind((uint32_t)(EAX), 0x100518b1u);
  /* 100518b1 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 100518b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100518b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100518bb je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 100518c1 push 0x10058ad4 */
  push32((uint32_t)(0x10058ad4u));
  /* 100518c6 push 0x1005bff0 */
  push32((uint32_t)(0x1005bff0u));
  /* 100518cb call eax */
  call_ind((uint32_t)(EAX), 0x100518cdu);
  /* 100518cd mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 100518d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100518d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100518d7 je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 100518dd push 0x10058ac0 */
  push32((uint32_t)(0x10058ac0u));
  /* 100518e2 push 0x1005c268 */
  push32((uint32_t)(0x1005c268u));
  /* 100518e7 call eax */
  call_ind((uint32_t)(EAX), 0x100518e9u);
  /* 100518e9 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 100518ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100518f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100518f3 je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 100518f9 push 0x10058ab4 */
  push32((uint32_t)(0x10058ab4u));
  /* 100518fe push 0x1005c270 */
  push32((uint32_t)(0x1005c270u));
  /* 10051903 call eax */
  call_ind((uint32_t)(EAX), 0x10051905u);
  /* 10051905 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 1005190a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005190d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005190f je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 10051915 push 0x10058aa8 */
  push32((uint32_t)(0x10058aa8u));
  /* 1005191a push 0x1005bfe8 */
  push32((uint32_t)(0x1005bfe8u));
  /* 1005191f call eax */
  call_ind((uint32_t)(EAX), 0x10051921u);
  /* 10051921 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 10051926 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005192b je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 10051931 push 0x10058a98 */
  push32((uint32_t)(0x10058a98u));
  /* 10051936 push 0x1005bf38 */
  push32((uint32_t)(0x1005bf38u));
  /* 1005193b call eax */
  call_ind((uint32_t)(EAX), 0x1005193du);
  /* 1005193d mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 10051942 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051945 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051947 je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 1005194d push 0x10058a80 */
  push32((uint32_t)(0x10058a80u));
  /* 10051952 push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10051957 call eax */
  call_ind((uint32_t)(EAX), 0x10051959u);
  /* 10051959 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 1005195e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051961 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051963 je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 10051969 push 0x10058a70 */
  push32((uint32_t)(0x10058a70u));
  /* 1005196e push 0x1005c000 */
  push32((uint32_t)(0x1005c000u));
  /* 10051973 call eax */
  call_ind((uint32_t)(EAX), 0x10051975u);
  /* 10051975 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 1005197a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005197d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005197f je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 10051985 push 0x10058a5c */
  push32((uint32_t)(0x10058a5cu));
  /* 1005198a push 0x10059630 */
  push32((uint32_t)(0x10059630u));
  /* 1005198f call eax */
  call_ind((uint32_t)(EAX), 0x10051991u);
  /* 10051991 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 10051996 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051999 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005199b je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 100519a1 push 0x10058a50 */
  push32((uint32_t)(0x10058a50u));
  /* 100519a6 push 0x10059890 */
  push32((uint32_t)(0x10059890u));
  /* 100519ab call eax */
  call_ind((uint32_t)(EAX), 0x100519adu);
  /* 100519ad mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 100519b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100519b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100519b7 je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 100519bd push 0x10058a44 */
  push32((uint32_t)(0x10058a44u));
  /* 100519c2 push 0x100598f0 */
  push32((uint32_t)(0x100598f0u));
  /* 100519c7 call eax */
  call_ind((uint32_t)(EAX), 0x100519c9u);
  /* 100519c9 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 100519ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100519d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100519d3 je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 100519d9 push 0x10058a38 */
  push32((uint32_t)(0x10058a38u));
  /* 100519de push 0x1005c200 */
  push32((uint32_t)(0x1005c200u));
  /* 100519e3 call eax */
  call_ind((uint32_t)(EAX), 0x100519e5u);
  /* 100519e5 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 100519ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100519ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100519ef je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 100519f5 push 0x10058a24 */
  push32((uint32_t)(0x10058a24u));
  /* 100519fa push 0x1005c110 */
  push32((uint32_t)(0x1005c110u));
  /* 100519ff call eax */
  call_ind((uint32_t)(EAX), 0x10051a01u);
  /* 10051a01 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 10051a06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051a09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051a0b je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 10051a11 push 0x10058a18 */
  push32((uint32_t)(0x10058a18u));
  /* 10051a16 push 0x1005c2f0 */
  push32((uint32_t)(0x1005c2f0u));
  /* 10051a1b call eax */
  call_ind((uint32_t)(EAX), 0x10051a1du);
  /* 10051a1d mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 10051a22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051a25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051a27 je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 10051a29 push 0x10058a0c */
  push32((uint32_t)(0x10058a0cu));
  /* 10051a2e push 0x10059900 */
  push32((uint32_t)(0x10059900u));
  /* 10051a33 call eax */
  call_ind((uint32_t)(EAX), 0x10051a35u);
  /* 10051a35 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 10051a3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051a3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051a3f je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 10051a41 push 0x10058a00 */
  push32((uint32_t)(0x10058a00u));
  /* 10051a46 push 0x1005bfa8 */
  push32((uint32_t)(0x1005bfa8u));
  /* 10051a4b call eax */
  call_ind((uint32_t)(EAX), 0x10051a4du);
  /* 10051a4d mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 10051a52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051a55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051a57 je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 10051a59 push 0x100589f4 */
  push32((uint32_t)(0x100589f4u));
  /* 10051a5e push 0x1005c3b0 */
  push32((uint32_t)(0x1005c3b0u));
  /* 10051a63 call eax */
  call_ind((uint32_t)(EAX), 0x10051a65u);
  /* 10051a65 mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 10051a6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051a6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051a6f je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 10051a71 push 0x100589e8 */
  push32((uint32_t)(0x100589e8u));
  /* 10051a76 push 0x1005bfa0 */
  push32((uint32_t)(0x1005bfa0u));
  /* 10051a7b call eax */
  call_ind((uint32_t)(EAX), 0x10051a7du);
  /* 10051a7d mov eax, dword ptr [0x1005c410] */
  EAX = (r32((uint32_t)(0x1005c410)));
  /* 10051a82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051a85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051a87 je 0x10051a98 */
  if (C.zf) goto L_10051a98;
  /* 10051a89 push 0x100589d8 */
  push32((uint32_t)(0x100589d8u));
  /* 10051a8e push 0x100598b8 */
  push32((uint32_t)(0x100598b8u));
  /* 10051a93 call eax */
  call_ind((uint32_t)(EAX), 0x10051a95u);
  /* 10051a95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10051a98:;
  /* 10051a98 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051a9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051a9f je 0x10051c98 */
  if (C.zf) goto L_10051c98;
  /* 10051aa5 push 0x100589c4 */
  push32((uint32_t)(0x100589c4u));
  /* 10051aaa push 0x1005c390 */
  push32((uint32_t)(0x1005c390u));
  /* 10051aaf call eax */
  call_ind((uint32_t)(EAX), 0x10051ab1u);
  /* 10051ab1 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051ab6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051ab9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051abb je 0x10051c98 */
  if (C.zf) goto L_10051c98;
  /* 10051ac1 push 0x100589b0 */
  push32((uint32_t)(0x100589b0u));
  /* 10051ac6 push 0x1005c118 */
  push32((uint32_t)(0x1005c118u));
  /* 10051acb call eax */
  call_ind((uint32_t)(EAX), 0x10051acdu);
  /* 10051acd mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051ad2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051ad5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051ad7 je 0x10051c98 */
  if (C.zf) goto L_10051c98;
  /* 10051add push 0x100589a8 */
  push32((uint32_t)(0x100589a8u));
  /* 10051ae2 push 0x10059678 */
  push32((uint32_t)(0x10059678u));
  /* 10051ae7 call eax */
  call_ind((uint32_t)(EAX), 0x10051ae9u);
  /* 10051ae9 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051aee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051af1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051af3 je 0x10051c98 */
  if (C.zf) goto L_10051c98;
  /* 10051af9 push 0x10058990 */
  push32((uint32_t)(0x10058990u));
  /* 10051afe push 0x1005c368 */
  push32((uint32_t)(0x1005c368u));
  /* 10051b03 call eax */
  call_ind((uint32_t)(EAX), 0x10051b05u);
  /* 10051b05 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051b0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051b0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051b0f je 0x10051c98 */
  if (C.zf) goto L_10051c98;
  /* 10051b15 push 0x10058978 */
  push32((uint32_t)(0x10058978u));
  /* 10051b1a push 0x1005c370 */
  push32((uint32_t)(0x1005c370u));
  /* 10051b1f call eax */
  call_ind((uint32_t)(EAX), 0x10051b21u);
  /* 10051b21 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051b26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051b29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051b2b je 0x10051c98 */
  if (C.zf) goto L_10051c98;
  /* 10051b31 push 0x10058960 */
  push32((uint32_t)(0x10058960u));
  /* 10051b36 push 0x1005c358 */
  push32((uint32_t)(0x1005c358u));
  /* 10051b3b call eax */
  call_ind((uint32_t)(EAX), 0x10051b3du);
  /* 10051b3d mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051b42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051b45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051b47 je 0x10051c98 */
  if (C.zf) goto L_10051c98;
  /* 10051b4d push 0x10058948 */
  push32((uint32_t)(0x10058948u));
  /* 10051b52 push 0x1005c360 */
  push32((uint32_t)(0x1005c360u));
  /* 10051b57 call eax */
  call_ind((uint32_t)(EAX), 0x10051b59u);
  /* 10051b59 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051b5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051b61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051b63 je 0x10051c98 */
  if (C.zf) goto L_10051c98;
  /* 10051b69 push 0x10058930 */
  push32((uint32_t)(0x10058930u));
  /* 10051b6e push 0x1005c378 */
  push32((uint32_t)(0x1005c378u));
  /* 10051b73 call eax */
  call_ind((uint32_t)(EAX), 0x10051b75u);
  /* 10051b75 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051b7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051b7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051b7f je 0x10051c98 */
  if (C.zf) goto L_10051c98;
  /* 10051b85 push 0x10058918 */
  push32((uint32_t)(0x10058918u));
  /* 10051b8a push 0x1005c2b0 */
  push32((uint32_t)(0x1005c2b0u));
  /* 10051b8f call eax */
  call_ind((uint32_t)(EAX), 0x10051b91u);
  /* 10051b91 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051b96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051b99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051b9b je 0x10051c98 */
  if (C.zf) goto L_10051c98;
  /* 10051ba1 push 0x10058900 */
  push32((uint32_t)(0x10058900u));
  /* 10051ba6 push 0x1005c298 */
  push32((uint32_t)(0x1005c298u));
  /* 10051bab call eax */
  call_ind((uint32_t)(EAX), 0x10051badu);
  /* 10051bad mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051bb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051bb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051bb7 je 0x10051c98 */
  if (C.zf) goto L_10051c98;
  /* 10051bbd push 0x100588e8 */
  push32((uint32_t)(0x100588e8u));
  /* 10051bc2 push 0x1005c2a0 */
  push32((uint32_t)(0x1005c2a0u));
  /* 10051bc7 call eax */
  call_ind((uint32_t)(EAX), 0x10051bc9u);
  /* 10051bc9 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051bce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051bd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051bd3 je 0x10051c98 */
  if (C.zf) goto L_10051c98;
  /* 10051bd9 push 0x100588d0 */
  push32((uint32_t)(0x100588d0u));
  /* 10051bde push 0x1005c2b8 */
  push32((uint32_t)(0x1005c2b8u));
  /* 10051be3 call eax */
  call_ind((uint32_t)(EAX), 0x10051be5u);
  /* 10051be5 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051bea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051bed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051bef je 0x10051c98 */
  if (C.zf) goto L_10051c98;
  /* 10051bf5 push 0x100588b8 */
  push32((uint32_t)(0x100588b8u));
  /* 10051bfa push 0x1005c2c0 */
  push32((uint32_t)(0x1005c2c0u));
  /* 10051bff call eax */
  call_ind((uint32_t)(EAX), 0x10051c01u);
  /* 10051c01 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051c06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051c09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051c0b je 0x10051c98 */
  if (C.zf) goto L_10051c98;
  /* 10051c11 push 0x100588a0 */
  push32((uint32_t)(0x100588a0u));
  /* 10051c16 push 0x10059928 */
  push32((uint32_t)(0x10059928u));
  /* 10051c1b call eax */
  call_ind((uint32_t)(EAX), 0x10051c1du);
  /* 10051c1d mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051c22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051c25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051c27 je 0x10051c98 */
  if (C.zf) goto L_10051c98;
  /* 10051c29 push 0x10058888 */
  push32((uint32_t)(0x10058888u));
  /* 10051c2e push 0x10059930 */
  push32((uint32_t)(0x10059930u));
  /* 10051c33 call eax */
  call_ind((uint32_t)(EAX), 0x10051c35u);
  /* 10051c35 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051c3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051c3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051c3f je 0x10051c98 */
  if (C.zf) goto L_10051c98;
  /* 10051c41 push 0x10058870 */
  push32((uint32_t)(0x10058870u));
  /* 10051c46 push 0x10059920 */
  push32((uint32_t)(0x10059920u));
  /* 10051c4b call eax */
  call_ind((uint32_t)(EAX), 0x10051c4du);
  /* 10051c4d mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051c52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051c55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051c57 je 0x10051c98 */
  if (C.zf) goto L_10051c98;
  /* 10051c59 push 0x10058858 */
  push32((uint32_t)(0x10058858u));
  /* 10051c5e push 0x1005bf90 */
  push32((uint32_t)(0x1005bf90u));
  /* 10051c63 call eax */
  call_ind((uint32_t)(EAX), 0x10051c65u);
  /* 10051c65 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051c6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051c6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051c6f je 0x10051c98 */
  if (C.zf) goto L_10051c98;
  /* 10051c71 push 0x10058840 */
  push32((uint32_t)(0x10058840u));
  /* 10051c76 push 0x1005bf80 */
  push32((uint32_t)(0x1005bf80u));
  /* 10051c7b call eax */
  call_ind((uint32_t)(EAX), 0x10051c7du);
  /* 10051c7d mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051c82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051c85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051c87 je 0x10051c98 */
  if (C.zf) goto L_10051c98;
  /* 10051c89 push 0x10058828 */
  push32((uint32_t)(0x10058828u));
  /* 10051c8e push 0x1005bf88 */
  push32((uint32_t)(0x1005bf88u));
  /* 10051c93 call eax */
  call_ind((uint32_t)(EAX), 0x10051c95u);
  /* 10051c95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10051c98:;
  /* 10051c98 lea eax, [esp] */
  EAX = ((uint32_t)(ESP));
  /* 10051c9c push 0x10058820 */
  push32((uint32_t)(0x10058820u));
  /* 10051ca1 push eax */
  push32((uint32_t)(EAX));
  /* 10051ca2 call 0x10052f30 */
  push32(0x10051ca7u); f_10052f30();
  /* 10051ca7 push eax */
  push32((uint32_t)(EAX));
  /* 10051ca8 push 0x1005c030 */
  push32((uint32_t)(0x1005c030u));
  /* 10051cad call 0x100526a0 */
  push32(0x10051cb2u); f_100526a0();
  /* 10051cb2 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 10051cb6 push 0x10058818 */
  push32((uint32_t)(0x10058818u));
  /* 10051cbb push ecx */
  push32((uint32_t)(ECX));
  /* 10051cbc call 0x10052f30 */
  push32(0x10051cc1u); f_10052f30();
  /* 10051cc1 push eax */
  push32((uint32_t)(EAX));
  /* 10051cc2 push 0x1005c028 */
  push32((uint32_t)(0x1005c028u));
  /* 10051cc7 call 0x100526a0 */
  push32(0x10051cccu); f_100526a0();
  /* 10051ccc lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 10051cd0 push 0x10058810 */
  push32((uint32_t)(0x10058810u));
  /* 10051cd5 push edx */
  push32((uint32_t)(EDX));
  /* 10051cd6 call 0x10052f30 */
  push32(0x10051cdbu); f_10052f30();
  /* 10051cdb push eax */
  push32((uint32_t)(EAX));
  /* 10051cdc push 0x1005c020 */
  push32((uint32_t)(0x1005c020u));
  /* 10051ce1 call 0x100526a0 */
  push32(0x10051ce6u); f_100526a0();
  /* 10051ce6 lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10051cea push 0x10058808 */
  push32((uint32_t)(0x10058808u));
  /* 10051cef push eax */
  push32((uint32_t)(EAX));
  /* 10051cf0 call 0x10052f30 */
  push32(0x10051cf5u); f_10052f30();
  /* 10051cf5 push eax */
  push32((uint32_t)(EAX));
  /* 10051cf6 push 0x1005c018 */
  push32((uint32_t)(0x1005c018u));
  /* 10051cfb call 0x100526a0 */
  push32(0x10051d00u); f_100526a0();
  /* 10051d00 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051d03 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 10051d07 push 0x10058800 */
  push32((uint32_t)(0x10058800u));
  /* 10051d0c push ecx */
  push32((uint32_t)(ECX));
  /* 10051d0d call 0x10052f30 */
  push32(0x10051d12u); f_10052f30();
  /* 10051d12 push eax */
  push32((uint32_t)(EAX));
  /* 10051d13 push 0x1005c010 */
  push32((uint32_t)(0x1005c010u));
  /* 10051d18 call 0x100526a0 */
  push32(0x10051d1du); f_100526a0();
  /* 10051d1d lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 10051d21 push 0x100587f8 */
  push32((uint32_t)(0x100587f8u));
  /* 10051d26 push edx */
  push32((uint32_t)(EDX));
  /* 10051d27 call 0x10052f30 */
  push32(0x10051d2cu); f_10052f30();
  /* 10051d2c push eax */
  push32((uint32_t)(EAX));
  /* 10051d2d push 0x1005c008 */
  push32((uint32_t)(0x1005c008u));
  /* 10051d32 call 0x100526a0 */
  push32(0x10051d37u); f_100526a0();
  /* 10051d37 lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 10051d3b push 0x100587f0 */
  push32((uint32_t)(0x100587f0u));
  /* 10051d40 push eax */
  push32((uint32_t)(EAX));
  /* 10051d41 call 0x10052f30 */
  push32(0x10051d46u); f_10052f30();
  /* 10051d46 push eax */
  push32((uint32_t)(EAX));
  /* 10051d47 push 0x1005c148 */
  push32((uint32_t)(0x1005c148u));
  /* 10051d4c call 0x100526a0 */
  push32(0x10051d51u); f_100526a0();
  /* 10051d51 lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10051d55 push 0x100587e8 */
  push32((uint32_t)(0x100587e8u));
  /* 10051d5a push ecx */
  push32((uint32_t)(ECX));
  /* 10051d5b call 0x10052f30 */
  push32(0x10051d60u); f_10052f30();
  /* 10051d60 push eax */
  push32((uint32_t)(EAX));
  /* 10051d61 push 0x1005c140 */
  push32((uint32_t)(0x1005c140u));
  /* 10051d66 call 0x100526a0 */
  push32(0x10051d6bu); f_100526a0();
  /* 10051d6b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051d6e lea edx, [esp] */
  EDX = ((uint32_t)(ESP));
  /* 10051d72 push 0x100587e0 */
  push32((uint32_t)(0x100587e0u));
  /* 10051d77 push edx */
  push32((uint32_t)(EDX));
  /* 10051d78 call 0x10052f30 */
  push32(0x10051d7du); f_10052f30();
  /* 10051d7d push eax */
  push32((uint32_t)(EAX));
  /* 10051d7e push 0x1005c138 */
  push32((uint32_t)(0x1005c138u));
  /* 10051d83 call 0x100526a0 */
  push32(0x10051d88u); f_100526a0();
  /* 10051d88 lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 10051d8c push 0x100587d8 */
  push32((uint32_t)(0x100587d8u));
  /* 10051d91 push eax */
  push32((uint32_t)(EAX));
  /* 10051d92 call 0x10052f30 */
  push32(0x10051d97u); f_10052f30();
  /* 10051d97 push eax */
  push32((uint32_t)(EAX));
  /* 10051d98 push 0x1005c130 */
  push32((uint32_t)(0x1005c130u));
  /* 10051d9d call 0x100526a0 */
  push32(0x10051da2u); f_100526a0();
  /* 10051da2 lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 10051da6 push 0x100587d0 */
  push32((uint32_t)(0x100587d0u));
  /* 10051dab push ecx */
  push32((uint32_t)(ECX));
  /* 10051dac call 0x10052f30 */
  push32(0x10051db1u); f_10052f30();
  /* 10051db1 push eax */
  push32((uint32_t)(EAX));
  /* 10051db2 push 0x1005c120 */
  push32((uint32_t)(0x1005c120u));
  /* 10051db7 call 0x100526a0 */
  push32(0x10051dbcu); f_100526a0();
  /* 10051dbc push 0x100587c8 */
  push32((uint32_t)(0x100587c8u));
  /* 10051dc1 lea edx, [esp + 0x34] */
  EDX = ((uint32_t)(ESP + 0x34));
  /* 10051dc5 push edx */
  push32((uint32_t)(EDX));
  /* 10051dc6 call 0x10052f30 */
  push32(0x10051dcbu); f_10052f30();
  /* 10051dcb push eax */
  push32((uint32_t)(EAX));
  /* 10051dcc push 0x1005c170 */
  push32((uint32_t)(0x1005c170u));
  /* 10051dd1 call 0x100526a0 */
  push32(0x10051dd6u); f_100526a0();
  /* 10051dd6 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051ddb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051dde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051de0 je 0x10051f15 */
  if (C.zf) goto L_10051f15;
  /* 10051de6 push 0x100587b4 */
  push32((uint32_t)(0x100587b4u));
  /* 10051deb push 0x100596d0 */
  push32((uint32_t)(0x100596d0u));
  /* 10051df0 call eax */
  call_ind((uint32_t)(EAX), 0x10051df2u);
  /* 10051df2 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051df7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051dfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051dfc je 0x10051f15 */
  if (C.zf) goto L_10051f15;
  /* 10051e02 push 0x100587a0 */
  push32((uint32_t)(0x100587a0u));
  /* 10051e07 push 0x100596c8 */
  push32((uint32_t)(0x100596c8u));
  /* 10051e0c call eax */
  call_ind((uint32_t)(EAX), 0x10051e0eu);
  /* 10051e0e mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051e13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051e16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051e18 je 0x10051f15 */
  if (C.zf) goto L_10051f15;
  /* 10051e1e push 0x1005878c */
  push32((uint32_t)(0x1005878cu));
  /* 10051e23 push 0x100596c0 */
  push32((uint32_t)(0x100596c0u));
  /* 10051e28 call eax */
  call_ind((uint32_t)(EAX), 0x10051e2au);
  /* 10051e2a mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051e2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051e32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051e34 je 0x10051f15 */
  if (C.zf) goto L_10051f15;
  /* 10051e3a push 0x10058778 */
  push32((uint32_t)(0x10058778u));
  /* 10051e3f push 0x100596b8 */
  push32((uint32_t)(0x100596b8u));
  /* 10051e44 call eax */
  call_ind((uint32_t)(EAX), 0x10051e46u);
  /* 10051e46 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051e4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051e4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051e50 je 0x10051f15 */
  if (C.zf) goto L_10051f15;
  /* 10051e56 push 0x10058764 */
  push32((uint32_t)(0x10058764u));
  /* 10051e5b push 0x10059690 */
  push32((uint32_t)(0x10059690u));
  /* 10051e60 call eax */
  call_ind((uint32_t)(EAX), 0x10051e62u);
  /* 10051e62 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051e67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051e6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051e6c je 0x10051f15 */
  if (C.zf) goto L_10051f15;
  /* 10051e72 push 0x10058750 */
  push32((uint32_t)(0x10058750u));
  /* 10051e77 push 0x10059688 */
  push32((uint32_t)(0x10059688u));
  /* 10051e7c call eax */
  call_ind((uint32_t)(EAX), 0x10051e7eu);
  /* 10051e7e mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051e83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051e86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051e88 je 0x10051f15 */
  if (C.zf) goto L_10051f15;
  /* 10051e8e push 0x1005873c */
  push32((uint32_t)(0x1005873cu));
  /* 10051e93 push 0x10059760 */
  push32((uint32_t)(0x10059760u));
  /* 10051e98 call eax */
  call_ind((uint32_t)(EAX), 0x10051e9au);
  /* 10051e9a mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051e9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051ea2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051ea4 je 0x10051f15 */
  if (C.zf) goto L_10051f15;
  /* 10051ea6 push 0x10058728 */
  push32((uint32_t)(0x10058728u));
  /* 10051eab push 0x10059758 */
  push32((uint32_t)(0x10059758u));
  /* 10051eb0 call eax */
  call_ind((uint32_t)(EAX), 0x10051eb2u);
  /* 10051eb2 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051eb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051eba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051ebc je 0x10051f15 */
  if (C.zf) goto L_10051f15;
  /* 10051ebe push 0x10058714 */
  push32((uint32_t)(0x10058714u));
  /* 10051ec3 push 0x10059750 */
  push32((uint32_t)(0x10059750u));
  /* 10051ec8 call eax */
  call_ind((uint32_t)(EAX), 0x10051ecau);
  /* 10051eca mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051ecf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051ed2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051ed4 je 0x10051f15 */
  if (C.zf) goto L_10051f15;
  /* 10051ed6 push 0x10058700 */
  push32((uint32_t)(0x10058700u));
  /* 10051edb push 0x10059738 */
  push32((uint32_t)(0x10059738u));
  /* 10051ee0 call eax */
  call_ind((uint32_t)(EAX), 0x10051ee2u);
  /* 10051ee2 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051ee7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051eea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051eec je 0x10051f15 */
  if (C.zf) goto L_10051f15;
  /* 10051eee push 0x100586ec */
  push32((uint32_t)(0x100586ecu));
  /* 10051ef3 push 0x10059730 */
  push32((uint32_t)(0x10059730u));
  /* 10051ef8 call eax */
  call_ind((uint32_t)(EAX), 0x10051efau);
  /* 10051efa mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10051eff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051f02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10051f04 je 0x10051f15 */
  if (C.zf) goto L_10051f15;
  /* 10051f06 push 0x100586d8 */
  push32((uint32_t)(0x100586d8u));
  /* 10051f0b push 0x10059728 */
  push32((uint32_t)(0x10059728u));
  /* 10051f10 call eax */
  call_ind((uint32_t)(EAX), 0x10051f12u);
  /* 10051f12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10051f15:;
  /* 10051f15 lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10051f19 push 0x10058820 */
  push32((uint32_t)(0x10058820u));
  /* 10051f1e push eax */
  push32((uint32_t)(EAX));
  /* 10051f1f call 0x10052f30 */
  push32(0x10051f24u); f_10052f30();
  /* 10051f24 push eax */
  push32((uint32_t)(EAX));
  /* 10051f25 push 0x100596f8 */
  push32((uint32_t)(0x100596f8u));
  /* 10051f2a call 0x100526a0 */
  push32(0x10051f2fu); f_100526a0();
  /* 10051f2f lea ecx, [esp + 0x40] */
  ECX = ((uint32_t)(ESP + 0x40));
  /* 10051f33 push 0x10058818 */
  push32((uint32_t)(0x10058818u));
  /* 10051f38 push ecx */
  push32((uint32_t)(ECX));
  /* 10051f39 call 0x10052f30 */
  push32(0x10051f3eu); f_10052f30();
  /* 10051f3e push eax */
  push32((uint32_t)(EAX));
  /* 10051f3f push 0x10059700 */
  push32((uint32_t)(0x10059700u));
  /* 10051f44 call 0x100526a0 */
  push32(0x10051f49u); f_100526a0();
  /* 10051f49 lea edx, [esp + 0x50] */
  EDX = ((uint32_t)(ESP + 0x50));
  /* 10051f4d push 0x10058810 */
  push32((uint32_t)(0x10058810u));
  /* 10051f52 push edx */
  push32((uint32_t)(EDX));
  /* 10051f53 call 0x10052f30 */
  push32(0x10051f58u); f_10052f30();
  /* 10051f58 push eax */
  push32((uint32_t)(EAX));
  /* 10051f59 push 0x10059708 */
  push32((uint32_t)(0x10059708u));
  /* 10051f5e call 0x100526a0 */
  push32(0x10051f63u); f_100526a0();
  /* 10051f63 lea eax, [esp + 0x60] */
  EAX = ((uint32_t)(ESP + 0x60));
  /* 10051f67 push 0x10058808 */
  push32((uint32_t)(0x10058808u));
  /* 10051f6c push eax */
  push32((uint32_t)(EAX));
  /* 10051f6d call 0x10052f30 */
  push32(0x10051f72u); f_10052f30();
  /* 10051f72 push eax */
  push32((uint32_t)(EAX));
  /* 10051f73 push 0x10059710 */
  push32((uint32_t)(0x10059710u));
  /* 10051f78 call 0x100526a0 */
  push32(0x10051f7du); f_100526a0();
  /* 10051f7d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051f80 lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10051f84 push 0x10058800 */
  push32((uint32_t)(0x10058800u));
  /* 10051f89 push ecx */
  push32((uint32_t)(ECX));
  /* 10051f8a call 0x10052f30 */
  push32(0x10051f8fu); f_10052f30();
  /* 10051f8f push eax */
  push32((uint32_t)(EAX));
  /* 10051f90 push 0x100596d8 */
  push32((uint32_t)(0x100596d8u));
  /* 10051f95 call 0x100526a0 */
  push32(0x10051f9au); f_100526a0();
  /* 10051f9a lea edx, [esp + 0x40] */
  EDX = ((uint32_t)(ESP + 0x40));
  /* 10051f9e push 0x100587f8 */
  push32((uint32_t)(0x100587f8u));
  /* 10051fa3 push edx */
  push32((uint32_t)(EDX));
  /* 10051fa4 call 0x10052f30 */
  push32(0x10051fa9u); f_10052f30();
  /* 10051fa9 push eax */
  push32((uint32_t)(EAX));
  /* 10051faa push 0x100596e8 */
  push32((uint32_t)(0x100596e8u));
  /* 10051faf call 0x100526a0 */
  push32(0x10051fb4u); f_100526a0();
  /* 10051fb4 lea eax, [esp + 0x50] */
  EAX = ((uint32_t)(ESP + 0x50));
  /* 10051fb8 push 0x100587f0 */
  push32((uint32_t)(0x100587f0u));
  /* 10051fbd push eax */
  push32((uint32_t)(EAX));
  /* 10051fbe call 0x10052f30 */
  push32(0x10051fc3u); f_10052f30();
  /* 10051fc3 push eax */
  push32((uint32_t)(EAX));
  /* 10051fc4 push 0x100597a0 */
  push32((uint32_t)(0x100597a0u));
  /* 10051fc9 call 0x100526a0 */
  push32(0x10051fceu); f_100526a0();
  /* 10051fce lea ecx, [esp + 0x60] */
  ECX = ((uint32_t)(ESP + 0x60));
  /* 10051fd2 push 0x100587e8 */
  push32((uint32_t)(0x100587e8u));
  /* 10051fd7 push ecx */
  push32((uint32_t)(ECX));
  /* 10051fd8 call 0x10052f30 */
  push32(0x10051fddu); f_10052f30();
  /* 10051fdd push eax */
  push32((uint32_t)(EAX));
  /* 10051fde push 0x100597a8 */
  push32((uint32_t)(0x100597a8u));
  /* 10051fe3 call 0x100526a0 */
  push32(0x10051fe8u); f_100526a0();
  /* 10051fe8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10051feb lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 10051fef push 0x100587e0 */
  push32((uint32_t)(0x100587e0u));
  /* 10051ff4 push edx */
  push32((uint32_t)(EDX));
  /* 10051ff5 call 0x10052f30 */
  push32(0x10051ffau); f_10052f30();
  /* 10051ffa push eax */
  push32((uint32_t)(EAX));
  /* 10051ffb push 0x100597b0 */
  push32((uint32_t)(0x100597b0u));
  /* 10052000 call 0x100526a0 */
  push32(0x10052005u); f_100526a0();
  /* 10052005 lea eax, [esp + 0x40] */
  EAX = ((uint32_t)(ESP + 0x40));
  /* 10052009 push 0x100587d8 */
  push32((uint32_t)(0x100587d8u));
  /* 1005200e push eax */
  push32((uint32_t)(EAX));
  /* 1005200f call 0x10052f30 */
  push32(0x10052014u); f_10052f30();
  /* 10052014 push eax */
  push32((uint32_t)(EAX));
  /* 10052015 push 0x10059788 */
  push32((uint32_t)(0x10059788u));
  /* 1005201a call 0x100526a0 */
  push32(0x1005201fu); f_100526a0();
  /* 1005201f lea ecx, [esp + 0x50] */
  ECX = ((uint32_t)(ESP + 0x50));
  /* 10052023 push 0x100587d0 */
  push32((uint32_t)(0x100587d0u));
  /* 10052028 push ecx */
  push32((uint32_t)(ECX));
  /* 10052029 call 0x10052f30 */
  push32(0x1005202eu); f_10052f30();
  /* 1005202e push eax */
  push32((uint32_t)(EAX));
  /* 1005202f push 0x10059790 */
  push32((uint32_t)(0x10059790u));
  /* 10052034 call 0x100526a0 */
  push32(0x10052039u); f_100526a0();
  /* 10052039 push 0x100587c8 */
  push32((uint32_t)(0x100587c8u));
  /* 1005203e lea edx, [esp + 0x64] */
  EDX = ((uint32_t)(ESP + 0x64));
  /* 10052042 push edx */
  push32((uint32_t)(EDX));
  /* 10052043 call 0x10052f30 */
  push32(0x10052048u); f_10052f30();
  /* 10052048 push eax */
  push32((uint32_t)(EAX));
  /* 10052049 push 0x10059798 */
  push32((uint32_t)(0x10059798u));
  /* 1005204e call 0x100526a0 */
  push32(0x10052053u); f_100526a0();
  /* 10052053 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10052058 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005205b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005205d je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 10052063 push 0x100586c8 */
  push32((uint32_t)(0x100586c8u));
  /* 10052068 push 0x1005c1f0 */
  push32((uint32_t)(0x1005c1f0u));
  /* 1005206d call eax */
  call_ind((uint32_t)(EAX), 0x1005206fu);
  /* 1005206f mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10052074 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052077 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052079 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 1005207f push 0x100586b4 */
  push32((uint32_t)(0x100586b4u));
  /* 10052084 push 0x1005c1e8 */
  push32((uint32_t)(0x1005c1e8u));
  /* 10052089 call eax */
  call_ind((uint32_t)(EAX), 0x1005208bu);
  /* 1005208b mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10052090 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052093 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052095 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 1005209b push 0x100586a0 */
  push32((uint32_t)(0x100586a0u));
  /* 100520a0 push 0x1005c1b8 */
  push32((uint32_t)(0x1005c1b8u));
  /* 100520a5 call eax */
  call_ind((uint32_t)(EAX), 0x100520a7u);
  /* 100520a7 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100520ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100520af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100520b1 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 100520b7 push 0x1005868c */
  push32((uint32_t)(0x1005868cu));
  /* 100520bc push 0x1005c1b0 */
  push32((uint32_t)(0x1005c1b0u));
  /* 100520c1 call eax */
  call_ind((uint32_t)(EAX), 0x100520c3u);
  /* 100520c3 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100520c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100520cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100520cd je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 100520d3 push 0x10058678 */
  push32((uint32_t)(0x10058678u));
  /* 100520d8 push 0x1005c1c0 */
  push32((uint32_t)(0x1005c1c0u));
  /* 100520dd call eax */
  call_ind((uint32_t)(EAX), 0x100520dfu);
  /* 100520df mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100520e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100520e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100520e9 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 100520ef push 0x10058664 */
  push32((uint32_t)(0x10058664u));
  /* 100520f4 push 0x1005c0b0 */
  push32((uint32_t)(0x1005c0b0u));
  /* 100520f9 call eax */
  call_ind((uint32_t)(EAX), 0x100520fbu);
  /* 100520fb mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10052100 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052103 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052105 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 1005210b push 0x10058650 */
  push32((uint32_t)(0x10058650u));
  /* 10052110 push 0x1005c0b8 */
  push32((uint32_t)(0x1005c0b8u));
  /* 10052115 call eax */
  call_ind((uint32_t)(EAX), 0x10052117u);
  /* 10052117 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 1005211c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005211f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052121 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 10052127 push 0x1005863c */
  push32((uint32_t)(0x1005863cu));
  /* 1005212c push 0x1005c0c0 */
  push32((uint32_t)(0x1005c0c0u));
  /* 10052131 call eax */
  call_ind((uint32_t)(EAX), 0x10052133u);
  /* 10052133 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10052138 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005213b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005213d je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 10052143 push 0x10058628 */
  push32((uint32_t)(0x10058628u));
  /* 10052148 push 0x1005c0c8 */
  push32((uint32_t)(0x1005c0c8u));
  /* 1005214d call eax */
  call_ind((uint32_t)(EAX), 0x1005214fu);
  /* 1005214f mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10052154 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052157 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052159 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 1005215f push 0x10058620 */
  push32((uint32_t)(0x10058620u));
  /* 10052164 push 0x1005c1d0 */
  push32((uint32_t)(0x1005c1d0u));
  /* 10052169 call eax */
  call_ind((uint32_t)(EAX), 0x1005216bu);
  /* 1005216b mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10052170 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052173 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052175 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 1005217b push 0x10058618 */
  push32((uint32_t)(0x10058618u));
  /* 10052180 push 0x1005c038 */
  push32((uint32_t)(0x1005c038u));
  /* 10052185 call eax */
  call_ind((uint32_t)(EAX), 0x10052187u);
  /* 10052187 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 1005218c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005218f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052191 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 10052197 push 0x10058610 */
  push32((uint32_t)(0x10058610u));
  /* 1005219c push 0x10059970 */
  push32((uint32_t)(0x10059970u));
  /* 100521a1 call eax */
  call_ind((uint32_t)(EAX), 0x100521a3u);
  /* 100521a3 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100521a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100521ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100521ad je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 100521b3 push 0x10058608 */
  push32((uint32_t)(0x10058608u));
  /* 100521b8 push 0x1005c090 */
  push32((uint32_t)(0x1005c090u));
  /* 100521bd call eax */
  call_ind((uint32_t)(EAX), 0x100521bfu);
  /* 100521bf mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100521c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100521c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100521c9 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 100521cf push 0x10058600 */
  push32((uint32_t)(0x10058600u));
  /* 100521d4 push 0x1005c048 */
  push32((uint32_t)(0x1005c048u));
  /* 100521d9 call eax */
  call_ind((uint32_t)(EAX), 0x100521dbu);
  /* 100521db mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100521e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100521e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100521e5 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 100521eb push 0x100585f8 */
  push32((uint32_t)(0x100585f8u));
  /* 100521f0 push 0x1005c050 */
  push32((uint32_t)(0x1005c050u));
  /* 100521f5 call eax */
  call_ind((uint32_t)(EAX), 0x100521f7u);
  /* 100521f7 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100521fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100521ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052201 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 10052207 push 0x100585f0 */
  push32((uint32_t)(0x100585f0u));
  /* 1005220c push 0x1005c058 */
  push32((uint32_t)(0x1005c058u));
  /* 10052211 call eax */
  call_ind((uint32_t)(EAX), 0x10052213u);
  /* 10052213 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10052218 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005221b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005221d je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 10052223 push 0x100585e8 */
  push32((uint32_t)(0x100585e8u));
  /* 10052228 push 0x1005c288 */
  push32((uint32_t)(0x1005c288u));
  /* 1005222d call eax */
  call_ind((uint32_t)(EAX), 0x1005222fu);
  /* 1005222f mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10052234 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052237 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052239 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 1005223f push 0x100585e0 */
  push32((uint32_t)(0x100585e0u));
  /* 10052244 push 0x1005c128 */
  push32((uint32_t)(0x1005c128u));
  /* 10052249 call eax */
  call_ind((uint32_t)(EAX), 0x1005224bu);
  /* 1005224b mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10052250 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052253 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052255 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 1005225b push 0x100585d8 */
  push32((uint32_t)(0x100585d8u));
  /* 10052260 push 0x1005c168 */
  push32((uint32_t)(0x1005c168u));
  /* 10052265 call eax */
  call_ind((uint32_t)(EAX), 0x10052267u);
  /* 10052267 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 1005226c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005226f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052271 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 10052277 push 0x100585d0 */
  push32((uint32_t)(0x100585d0u));
  /* 1005227c push 0x1005c220 */
  push32((uint32_t)(0x1005c220u));
  /* 10052281 call eax */
  call_ind((uint32_t)(EAX), 0x10052283u);
  /* 10052283 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10052288 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005228b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005228d je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 10052293 push 0x100585c8 */
  push32((uint32_t)(0x100585c8u));
  /* 10052298 push 0x1005c228 */
  push32((uint32_t)(0x1005c228u));
  /* 1005229d call eax */
  call_ind((uint32_t)(EAX), 0x1005229fu);
  /* 1005229f mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100522a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100522a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100522a9 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 100522af push 0x100585c0 */
  push32((uint32_t)(0x100585c0u));
  /* 100522b4 push 0x1005c180 */
  push32((uint32_t)(0x1005c180u));
  /* 100522b9 call eax */
  call_ind((uint32_t)(EAX), 0x100522bbu);
  /* 100522bb mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100522c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100522c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100522c5 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 100522cb push 0x100585b8 */
  push32((uint32_t)(0x100585b8u));
  /* 100522d0 push 0x1005c190 */
  push32((uint32_t)(0x1005c190u));
  /* 100522d5 call eax */
  call_ind((uint32_t)(EAX), 0x100522d7u);
  /* 100522d7 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100522dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100522df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100522e1 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 100522e7 push 0x100585b0 */
  push32((uint32_t)(0x100585b0u));
  /* 100522ec push 0x1005c198 */
  push32((uint32_t)(0x1005c198u));
  /* 100522f1 call eax */
  call_ind((uint32_t)(EAX), 0x100522f3u);
  /* 100522f3 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100522f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100522fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100522fd je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 10052303 push 0x100585a8 */
  push32((uint32_t)(0x100585a8u));
  /* 10052308 push 0x1005c188 */
  push32((uint32_t)(0x1005c188u));
  /* 1005230d call eax */
  call_ind((uint32_t)(EAX), 0x1005230fu);
  /* 1005230f mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10052314 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052317 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052319 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 1005231f push 0x100585a0 */
  push32((uint32_t)(0x100585a0u));
  /* 10052324 push 0x10059968 */
  push32((uint32_t)(0x10059968u));
  /* 10052329 call eax */
  call_ind((uint32_t)(EAX), 0x1005232bu);
  /* 1005232b mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10052330 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052333 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052335 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 1005233b push 0x10058598 */
  push32((uint32_t)(0x10058598u));
  /* 10052340 push 0x100598f8 */
  push32((uint32_t)(0x100598f8u));
  /* 10052345 call eax */
  call_ind((uint32_t)(EAX), 0x10052347u);
  /* 10052347 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 1005234c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005234f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052351 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 10052357 push 0x10058590 */
  push32((uint32_t)(0x10058590u));
  /* 1005235c push 0x100597b8 */
  push32((uint32_t)(0x100597b8u));
  /* 10052361 call eax */
  call_ind((uint32_t)(EAX), 0x10052363u);
  /* 10052363 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10052368 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005236b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005236d je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 10052373 push 0x10058588 */
  push32((uint32_t)(0x10058588u));
  /* 10052378 push 0x1005c108 */
  push32((uint32_t)(0x1005c108u));
  /* 1005237d call eax */
  call_ind((uint32_t)(EAX), 0x1005237fu);
  /* 1005237f mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10052384 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052387 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052389 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 1005238f push 0x10058580 */
  push32((uint32_t)(0x10058580u));
  /* 10052394 push 0x10059958 */
  push32((uint32_t)(0x10059958u));
  /* 10052399 call eax */
  call_ind((uint32_t)(EAX), 0x1005239bu);
  /* 1005239b mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100523a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100523a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100523a5 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 100523ab push 0x10058578 */
  push32((uint32_t)(0x10058578u));
  /* 100523b0 push 0x1005c210 */
  push32((uint32_t)(0x1005c210u));
  /* 100523b5 call eax */
  call_ind((uint32_t)(EAX), 0x100523b7u);
  /* 100523b7 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100523bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100523bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100523c1 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 100523c7 push 0x10058570 */
  push32((uint32_t)(0x10058570u));
  /* 100523cc push 0x1005c218 */
  push32((uint32_t)(0x1005c218u));
  /* 100523d1 call eax */
  call_ind((uint32_t)(EAX), 0x100523d3u);
  /* 100523d3 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100523d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100523db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100523dd je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 100523e3 push 0x10058568 */
  push32((uint32_t)(0x10058568u));
  /* 100523e8 push 0x10059888 */
  push32((uint32_t)(0x10059888u));
  /* 100523ed call eax */
  call_ind((uint32_t)(EAX), 0x100523efu);
  /* 100523ef mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100523f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100523f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100523f9 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 100523ff push 0x10058560 */
  push32((uint32_t)(0x10058560u));
  /* 10052404 push 0x10059898 */
  push32((uint32_t)(0x10059898u));
  /* 10052409 call eax */
  call_ind((uint32_t)(EAX), 0x1005240bu);
  /* 1005240b mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10052410 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052413 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052415 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 1005241b push 0x10058558 */
  push32((uint32_t)(0x10058558u));
  /* 10052420 push 0x10059780 */
  push32((uint32_t)(0x10059780u));
  /* 10052425 call eax */
  call_ind((uint32_t)(EAX), 0x10052427u);
  /* 10052427 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 1005242c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005242f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052431 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 10052437 push 0x10058550 */
  push32((uint32_t)(0x10058550u));
  /* 1005243c push 0x10059640 */
  push32((uint32_t)(0x10059640u));
  /* 10052441 call eax */
  call_ind((uint32_t)(EAX), 0x10052443u);
  /* 10052443 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10052448 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005244b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005244d je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 10052453 push 0x10058548 */
  push32((uint32_t)(0x10058548u));
  /* 10052458 push 0x10059720 */
  push32((uint32_t)(0x10059720u));
  /* 1005245d call eax */
  call_ind((uint32_t)(EAX), 0x1005245fu);
  /* 1005245f mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10052464 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052467 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052469 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 1005246f push 0x10058540 */
  push32((uint32_t)(0x10058540u));
  /* 10052474 push 0x10059648 */
  push32((uint32_t)(0x10059648u));
  /* 10052479 call eax */
  call_ind((uint32_t)(EAX), 0x1005247bu);
  /* 1005247b mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 10052480 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052483 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052485 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 1005248b push 0x1005852c */
  push32((uint32_t)(0x1005852cu));
  /* 10052490 push 0x1005c300 */
  push32((uint32_t)(0x1005c300u));
  /* 10052495 call eax */
  call_ind((uint32_t)(EAX), 0x10052497u);
  /* 10052497 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 1005249c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005249f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100524a1 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 100524a3 push 0x10058518 */
  push32((uint32_t)(0x10058518u));
  /* 100524a8 push 0x1005c2e8 */
  push32((uint32_t)(0x1005c2e8u));
  /* 100524ad call eax */
  call_ind((uint32_t)(EAX), 0x100524afu);
  /* 100524af mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100524b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100524b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100524b9 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 100524bb push 0x10058504 */
  push32((uint32_t)(0x10058504u));
  /* 100524c0 push 0x1005c2f8 */
  push32((uint32_t)(0x1005c2f8u));
  /* 100524c5 call eax */
  call_ind((uint32_t)(EAX), 0x100524c7u);
  /* 100524c7 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100524cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100524cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100524d1 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 100524d3 push 0x100584f0 */
  push32((uint32_t)(0x100584f0u));
  /* 100524d8 push 0x1005c2d8 */
  push32((uint32_t)(0x1005c2d8u));
  /* 100524dd call eax */
  call_ind((uint32_t)(EAX), 0x100524dfu);
  /* 100524df mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100524e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100524e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100524e9 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 100524eb push 0x100584dc */
  push32((uint32_t)(0x100584dcu));
  /* 100524f0 push 0x1005c2e0 */
  push32((uint32_t)(0x1005c2e0u));
  /* 100524f5 call eax */
  call_ind((uint32_t)(EAX), 0x100524f7u);
  /* 100524f7 mov eax, dword ptr [0x1005c414] */
  EAX = (r32((uint32_t)(0x1005c414)));
  /* 100524fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100524ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052501 je 0x10052512 */
  if (C.zf) goto L_10052512;
  /* 10052503 push 0x100584c8 */
  push32((uint32_t)(0x100584c8u));
  /* 10052508 push 0x1005c2d0 */
  push32((uint32_t)(0x1005c2d0u));
  /* 1005250d call eax */
  call_ind((uint32_t)(EAX), 0x1005250fu);
  /* 1005250f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10052512:;
  /* 10052512 push 4 */
  push32((uint32_t)(0x4u));
  /* 10052514 push 4 */
  push32((uint32_t)(0x4u));
  /* 10052516 push 9 */
  push32((uint32_t)(0x9u));
  /* 10052518 call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x1005251eu);
  /* 1005251e push 6 */
  push32((uint32_t)(0x6u));
  /* 10052520 call dword ptr [0x1005c538] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c538))), 0x10052526u);
  /* 10052526 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10052528 push 0x100584b4 */
  push32((uint32_t)(0x100584b4u));
  /* 1005252d push 0 */
  push32((uint32_t)(0x0u));
  /* 1005252f call dword ptr [0x1005c53c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c53c))), 0x10052535u);
  /* 10052535 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10052537 push 0x100584a0 */
  push32((uint32_t)(0x100584a0u));
  /* 1005253c push 1 */
  push32((uint32_t)(0x1u));
  /* 1005253e call dword ptr [0x1005c53c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c53c))), 0x10052544u);
  /* 10052544 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10052546 push 0x1005848c */
  push32((uint32_t)(0x1005848cu));
  /* 1005254b push 2 */
  push32((uint32_t)(0x2u));
  /* 1005254d call dword ptr [0x1005c53c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c53c))), 0x10052553u);
  /* 10052553 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10052555 push 0x10058478 */
  push32((uint32_t)(0x10058478u));
  /* 1005255a push 3 */
  push32((uint32_t)(0x3u));
  /* 1005255c call dword ptr [0x1005c53c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c53c))), 0x10052562u);
  /* 10052562 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052565 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10052567 push 0x10058464 */
  push32((uint32_t)(0x10058464u));
  /* 1005256c push 4 */
  push32((uint32_t)(0x4u));
  /* 1005256e call dword ptr [0x1005c53c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c53c))), 0x10052574u);
  /* 10052574 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10052576 push 0x10058450 */
  push32((uint32_t)(0x10058450u));
  /* 1005257b push 5 */
  push32((uint32_t)(0x5u));
  /* 1005257d call dword ptr [0x1005c53c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c53c))), 0x10052583u);
  /* 10052583 push 0x10058b54 */
  push32((uint32_t)(0x10058b54u));
  /* 10052588 call dword ptr [0x1005c578] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c578))), 0x1005258eu);
  /* 1005258e push 0x10058444 */
  push32((uint32_t)(0x10058444u));
  /* 10052593 call dword ptr [0x1005c574] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c574))), 0x10052599u);
  /* 10052599 push 0x10058434 */
  push32((uint32_t)(0x10058434u));
  /* 1005259e call dword ptr [0x1005c57c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c57c))), 0x100525a4u);
  /* 100525a4 push 0x10058428 */
  push32((uint32_t)(0x10058428u));
  /* 100525a9 call dword ptr [0x1005c584] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c584))), 0x100525afu);
  /* 100525af push 0x122 */
  push32((uint32_t)(0x122u));
  /* 100525b4 call dword ptr [0x1005c540] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c540))), 0x100525bau);
  /* 100525ba push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100525bc call dword ptr [0x1005c544] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c544))), 0x100525c2u);
  /* 100525c2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100525c4 call dword ptr [0x1005c548] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c548))), 0x100525cau);
  /* 100525ca push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 100525cf call dword ptr [0x1005c54c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c54c))), 0x100525d5u);
  /* 100525d5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100525d7 call dword ptr [0x1005c550] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c550))), 0x100525ddu);
  /* 100525dd add esp, 0x9c */
  { uint32_t _a=(ESP),_b=(0x9cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100525e3 ret  */
  ESPCHK(0x10051010u, _esp0);
  ESP += 4; return;
}

/* FUN_100025f0 @ 0x100525f0 (20 bytes, 7 insns) */
void f_100525f0(void) {
  FTRACE(0x100525f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100525f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100525f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100525f8 push eax */
  push32((uint32_t)(EAX));
  /* 100525f9 push ecx */
  push32((uint32_t)(ECX));
  /* 100525fa call dword ptr [0x1005c528] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c528))), 0x10052600u);
  /* 10052600 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052603 ret  */
  ESPCHK(0x100525f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002610 @ 0x10052610 (25 bytes, 9 insns) */
void f_10052610(void) {
  FTRACE(0x10052610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10052610 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10052614 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10052618 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1005261c push eax */
  push32((uint32_t)(EAX));
  /* 1005261d push ecx */
  push32((uint32_t)(ECX));
  /* 1005261e push edx */
  push32((uint32_t)(EDX));
  /* 1005261f call dword ptr [0x1005c534] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c534))), 0x10052625u);
  /* 10052625 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052628 ret  */
  ESPCHK(0x10052610u, _esp0);
  ESP += 4; return;
}

/* FUN_10002630 @ 0x10052630 (6 bytes, 1 insns) */
void f_10052630(void) {
  FTRACE(0x10052630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10052630 jmp dword ptr [0x1005c560] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1005c560)))); return;
}

/* FUN_10002640 @ 0x10052640 (20 bytes, 7 insns) */
void f_10052640(void) {
  FTRACE(0x10052640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10052640 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10052644 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10052648 push eax */
  push32((uint32_t)(EAX));
  /* 10052649 push ecx */
  push32((uint32_t)(ECX));
  /* 1005264a call dword ptr [0x1005c580] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c580))), 0x10052650u);
  /* 10052650 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052653 ret  */
  ESPCHK(0x10052640u, _esp0);
  ESP += 4; return;
}

/* FUN_10002660 @ 0x10052660 (6 bytes, 1 insns) */
void f_10052660(void) {
  FTRACE(0x10052660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10052660 jmp dword ptr [0x1005c58c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1005c58c)))); return;
}

/* FUN_10002670 @ 0x10052670 (6 bytes, 1 insns) */
void f_10052670(void) {
  FTRACE(0x10052670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10052670 jmp dword ptr [0x1005c590] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1005c590)))); return;
}

/* FUN_10002680 @ 0x10052680 (6 bytes, 1 insns) */
void f_10052680(void) {
  FTRACE(0x10052680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10052680 jmp dword ptr [0x1005c598] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1005c598)))); return;
}

/* FUN_10002690 @ 0x10052690 (13 bytes, 5 insns) */
void f_10052690(void) {
  FTRACE(0x10052690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10052690 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10052694 push eax */
  push32((uint32_t)(EAX));
  /* 10052695 call dword ptr [0x1005c59c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c59c))), 0x1005269bu);
  /* 1005269b pop ecx */
  ECX = (pop32());
  /* 1005269c ret  */
  ESPCHK(0x10052690u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a0 @ 0x100526a0 (20 bytes, 7 insns) */
void f_100526a0(void) {
  FTRACE(0x100526a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100526a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100526a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100526a8 push eax */
  push32((uint32_t)(EAX));
  /* 100526a9 push ecx */
  push32((uint32_t)(ECX));
  /* 100526aa call dword ptr [0x1005c5a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c5a0))), 0x100526b0u);
  /* 100526b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100526b3 ret  */
  ESPCHK(0x100526a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026c0 @ 0x100526c0 (6 bytes, 1 insns) */
void f_100526c0(void) {
  FTRACE(0x100526c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100526c0 jmp dword ptr [0x1005c5a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1005c5a4)))); return;
}

/* FUN_100026d0 @ 0x100526d0 (20 bytes, 7 insns) */
void f_100526d0(void) {
  FTRACE(0x100526d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100526d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100526d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100526d8 push eax */
  push32((uint32_t)(EAX));
  /* 100526d9 push ecx */
  push32((uint32_t)(ECX));
  /* 100526da call dword ptr [0x1005c280] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c280))), 0x100526e0u);
  /* 100526e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100526e3 ret  */
  ESPCHK(0x100526d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026f0 @ 0x100526f0 (15 bytes, 5 insns) */
void f_100526f0(void) {
  FTRACE(0x100526f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100526f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100526f4 push eax */
  push32((uint32_t)(EAX));
  /* 100526f5 call dword ptr [0x1005c2c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c2c8))), 0x100526fbu);
  /* 100526fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100526fe ret  */
  ESPCHK(0x100526f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x10052700 (20 bytes, 7 insns) */
void f_10052700(void) {
  FTRACE(0x10052700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10052700 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10052704 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10052708 push eax */
  push32((uint32_t)(EAX));
  /* 10052709 push ecx */
  push32((uint32_t)(ECX));
  /* 1005270a call dword ptr [0x10059748] */
  call_ind((uint32_t)(r32((uint32_t)(0x10059748))), 0x10052710u);
  /* 10052710 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052713 ret  */
  ESPCHK(0x10052700u, _esp0);
  ESP += 4; return;
}

/* FUN_10002720 @ 0x10052720 (13 bytes, 5 insns) */
void f_10052720(void) {
  FTRACE(0x10052720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10052720 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10052724 push eax */
  push32((uint32_t)(EAX));
  /* 10052725 call dword ptr [0x100598e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100598e8))), 0x1005272bu);
  /* 1005272b pop ecx */
  ECX = (pop32());
  /* 1005272c ret  */
  ESPCHK(0x10052720u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x10052730 (15 bytes, 5 insns) */
void f_10052730(void) {
  FTRACE(0x10052730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10052730 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10052734 push eax */
  push32((uint32_t)(EAX));
  /* 10052735 call dword ptr [0x1005c5a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c5a8))), 0x1005273bu);
  /* 1005273b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005273e ret  */
  ESPCHK(0x10052730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x10052740 (25 bytes, 9 insns) */
void f_10052740(void) {
  FTRACE(0x10052740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10052740 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10052744 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10052748 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1005274c push eax */
  push32((uint32_t)(EAX));
  /* 1005274d push ecx */
  push32((uint32_t)(ECX));
  /* 1005274e push edx */
  push32((uint32_t)(EDX));
  /* 1005274f call dword ptr [0x1005bfd8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005bfd8))), 0x10052755u);
  /* 10052755 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052758 ret  */
  ESPCHK(0x10052740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002760 @ 0x10052760 (13 bytes, 5 insns) */
void f_10052760(void) {
  FTRACE(0x10052760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10052760 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10052764 push eax */
  push32((uint32_t)(EAX));
  /* 10052765 call dword ptr [0x10059948] */
  call_ind((uint32_t)(r32((uint32_t)(0x10059948))), 0x1005276bu);
  /* 1005276b pop ecx */
  ECX = (pop32());
  /* 1005276c ret  */
  ESPCHK(0x10052760u, _esp0);
  ESP += 4; return;
}

/* FUN_10002770 @ 0x10052770 (6 bytes, 1 insns) */
void f_10052770(void) {
  FTRACE(0x10052770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10052770 jmp dword ptr [0x1005c260] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1005c260)))); return;
}

/* FUN_10002780 @ 0x10052780 (6 bytes, 1 insns) */
void f_10052780(void) {
  FTRACE(0x10052780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10052780 jmp dword ptr [0x10059960] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10059960)))); return;
}

/* FUN_10002790 @ 0x10052790 (83 bytes, 28 insns) */
void f_10052790(void) {
  FTRACE(0x10052790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10052790 mov eax, dword ptr [0x1005c3f8] */
  EAX = (r32((uint32_t)(0x1005c3f8)));
  /* 10052795 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1005279b push esi */
  push32((uint32_t)(ESI));
  /* 1005279c push edi */
  push32((uint32_t)(EDI));
  /* 1005279d mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 100527a4 push edi */
  push32((uint32_t)(EDI));
  /* 100527a5 push eax */
  push32((uint32_t)(EAX));
  /* 100527a6 call dword ptr [0x10057004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10057004))), 0x100527acu);
  /* 100527ac mov esi, eax */
  ESI = (EAX);
  /* 100527ae test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100527b0 jne 0x100527d8 */
  if (!C.zf) goto L_100527d8;
  /* 100527b2 push edi */
  push32((uint32_t)(EDI));
  /* 100527b3 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 100527b7 push 0x10058ebc */
  push32((uint32_t)(0x10058ebcu));
  /* 100527bc push ecx */
  push32((uint32_t)(ECX));
  /* 100527bd call dword ptr [0x10057014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10057014))), 0x100527c3u);
  /* 100527c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100527c6 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 100527ca push esi */
  push32((uint32_t)(ESI));
  /* 100527cb push 0x10058eac */
  push32((uint32_t)(0x10058eacu));
  /* 100527d0 push edx */
  push32((uint32_t)(EDX));
  /* 100527d1 push esi */
  push32((uint32_t)(ESI));
  /* 100527d2 call dword ptr [0x10057024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10057024))), 0x100527d8u);
L_100527d8:;
  /* 100527d8 mov eax, esi */
  EAX = (ESI);
  /* 100527da pop edi */
  EDI = (pop32());
  /* 100527db pop esi */
  ESI = (pop32());
  /* 100527dc add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100527e2 ret  */
  ESPCHK(0x10052790u, _esp0);
  ESP += 4; return;
}

/* FUN_100027f0 @ 0x100527f0 (1844 bytes, 376 insns) */
void f_100527f0(void) {
  FTRACE(0x100527f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100527f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100527f4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100527f5 jne 0x10052f1c */
  if (!C.zf) goto L_10052f1c;
  /* 100527fb push 0x10059610 */
  push32((uint32_t)(0x10059610u));
  /* 10052800 call dword ptr [0x10057000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10057000))), 0x10052806u);
  /* 10052806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10052808 mov dword ptr [0x1005c3f8], eax */
  w32((uint32_t)(0x1005c3f8), (EAX));
  /* 1005280d jne 0x10052829 */
  if (!C.zf) goto L_10052829;
  /* 1005280f push eax */
  push32((uint32_t)(EAX));
  /* 10052810 push 0x10059608 */
  push32((uint32_t)(0x10059608u));
  /* 10052815 push 0x100595f0 */
  push32((uint32_t)(0x100595f0u));
  /* 1005281a push eax */
  push32((uint32_t)(EAX));
  /* 1005281b call dword ptr [0x10057024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10057024))), 0x10052821u);
  /* 10052821 mov eax, 1 */
  EAX = (0x1u);
  /* 10052826 ret 0xc */
  ESPCHK(0x100527f0u, _esp0);
  ESP += 16; return;
L_10052829:;
  /* 10052829 push 0x100595e0 */
  push32((uint32_t)(0x100595e0u));
  /* 1005282e call 0x10052790 */
  push32(0x10052833u); f_10052790();
  /* 10052833 push 0x100595d0 */
  push32((uint32_t)(0x100595d0u));
  /* 10052838 mov dword ptr [0x1005c3fc], eax */
  w32((uint32_t)(0x1005c3fc), (EAX));
  /* 1005283d call 0x10052790 */
  push32(0x10052842u); f_10052790();
  /* 10052842 push 0x100595c0 */
  push32((uint32_t)(0x100595c0u));
  /* 10052847 mov dword ptr [0x1005c400], eax */
  w32((uint32_t)(0x1005c400), (EAX));
  /* 1005284c call 0x10052790 */
  push32(0x10052851u); f_10052790();
  /* 10052851 push 0x100595b4 */
  push32((uint32_t)(0x100595b4u));
  /* 10052856 mov dword ptr [0x1005c404], eax */
  w32((uint32_t)(0x1005c404), (EAX));
  /* 1005285b call 0x10052790 */
  push32(0x10052860u); f_10052790();
  /* 10052860 push 0x100595a4 */
  push32((uint32_t)(0x100595a4u));
  /* 10052865 mov dword ptr [0x1005c408], eax */
  w32((uint32_t)(0x1005c408), (EAX));
  /* 1005286a call 0x10052790 */
  push32(0x1005286fu); f_10052790();
  /* 1005286f push 0x10059590 */
  push32((uint32_t)(0x10059590u));
  /* 10052874 mov dword ptr [0x1005c40c], eax */
  w32((uint32_t)(0x1005c40c), (EAX));
  /* 10052879 call 0x10052790 */
  push32(0x1005287eu); f_10052790();
  /* 1005287e push 0x10059580 */
  push32((uint32_t)(0x10059580u));
  /* 10052883 mov dword ptr [0x1005c410], eax */
  w32((uint32_t)(0x1005c410), (EAX));
  /* 10052888 call 0x10052790 */
  push32(0x1005288du); f_10052790();
  /* 1005288d push 0x10059570 */
  push32((uint32_t)(0x10059570u));
  /* 10052892 mov dword ptr [0x1005c414], eax */
  w32((uint32_t)(0x1005c414), (EAX));
  /* 10052897 call 0x10052790 */
  push32(0x1005289cu); f_10052790();
  /* 1005289c push 0x1005955c */
  push32((uint32_t)(0x1005955cu));
  /* 100528a1 mov dword ptr [0x1005c418], eax */
  w32((uint32_t)(0x1005c418), (EAX));
  /* 100528a6 call 0x10052790 */
  push32(0x100528abu); f_10052790();
  /* 100528ab push 0x10059548 */
  push32((uint32_t)(0x10059548u));
  /* 100528b0 mov dword ptr [0x1005c41c], eax */
  w32((uint32_t)(0x1005c41c), (EAX));
  /* 100528b5 call 0x10052790 */
  push32(0x100528bau); f_10052790();
  /* 100528ba push 0x10059538 */
  push32((uint32_t)(0x10059538u));
  /* 100528bf mov dword ptr [0x1005c420], eax */
  w32((uint32_t)(0x1005c420), (EAX));
  /* 100528c4 call 0x10052790 */
  push32(0x100528c9u); f_10052790();
  /* 100528c9 push 0x10059528 */
  push32((uint32_t)(0x10059528u));
  /* 100528ce mov dword ptr [0x1005c424], eax */
  w32((uint32_t)(0x1005c424), (EAX));
  /* 100528d3 call 0x10052790 */
  push32(0x100528d8u); f_10052790();
  /* 100528d8 push 0x10059518 */
  push32((uint32_t)(0x10059518u));
  /* 100528dd mov dword ptr [0x1005c428], eax */
  w32((uint32_t)(0x1005c428), (EAX));
  /* 100528e2 call 0x10052790 */
  push32(0x100528e7u); f_10052790();
  /* 100528e7 push 0x10059508 */
  push32((uint32_t)(0x10059508u));
  /* 100528ec mov dword ptr [0x1005c42c], eax */
  w32((uint32_t)(0x1005c42c), (EAX));
  /* 100528f1 call 0x10052790 */
  push32(0x100528f6u); f_10052790();
  /* 100528f6 push 0x100594f8 */
  push32((uint32_t)(0x100594f8u));
  /* 100528fb mov dword ptr [0x1005c430], eax */
  w32((uint32_t)(0x1005c430), (EAX));
  /* 10052900 call 0x10052790 */
  push32(0x10052905u); f_10052790();
  /* 10052905 push 0x100594e8 */
  push32((uint32_t)(0x100594e8u));
  /* 1005290a mov dword ptr [0x1005c434], eax */
  w32((uint32_t)(0x1005c434), (EAX));
  /* 1005290f call 0x10052790 */
  push32(0x10052914u); f_10052790();
  /* 10052914 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052917 mov dword ptr [0x1005c438], eax */
  w32((uint32_t)(0x1005c438), (EAX));
  /* 1005291c push 0x100594d8 */
  push32((uint32_t)(0x100594d8u));
  /* 10052921 call 0x10052790 */
  push32(0x10052926u); f_10052790();
  /* 10052926 push 0x100594c8 */
  push32((uint32_t)(0x100594c8u));
  /* 1005292b mov dword ptr [0x1005c43c], eax */
  w32((uint32_t)(0x1005c43c), (EAX));
  /* 10052930 call 0x10052790 */
  push32(0x10052935u); f_10052790();
  /* 10052935 push 0x100594b4 */
  push32((uint32_t)(0x100594b4u));
  /* 1005293a mov dword ptr [0x1005c440], eax */
  w32((uint32_t)(0x1005c440), (EAX));
  /* 1005293f call 0x10052790 */
  push32(0x10052944u); f_10052790();
  /* 10052944 push 0x100594ac */
  push32((uint32_t)(0x100594acu));
  /* 10052949 mov dword ptr [0x1005c444], eax */
  w32((uint32_t)(0x1005c444), (EAX));
  /* 1005294e call 0x10052790 */
  push32(0x10052953u); f_10052790();
  /* 10052953 push 0x1005949c */
  push32((uint32_t)(0x1005949cu));
  /* 10052958 mov dword ptr [0x1005c448], eax */
  w32((uint32_t)(0x1005c448), (EAX));
  /* 1005295d call 0x10052790 */
  push32(0x10052962u); f_10052790();
  /* 10052962 push 0x1005948c */
  push32((uint32_t)(0x1005948cu));
  /* 10052967 mov dword ptr [0x1005c44c], eax */
  w32((uint32_t)(0x1005c44c), (EAX));
  /* 1005296c call 0x10052790 */
  push32(0x10052971u); f_10052790();
  /* 10052971 push 0x10059480 */
  push32((uint32_t)(0x10059480u));
  /* 10052976 mov dword ptr [0x1005c450], eax */
  w32((uint32_t)(0x1005c450), (EAX));
  /* 1005297b call 0x10052790 */
  push32(0x10052980u); f_10052790();
  /* 10052980 push 0x10059470 */
  push32((uint32_t)(0x10059470u));
  /* 10052985 mov dword ptr [0x1005c454], eax */
  w32((uint32_t)(0x1005c454), (EAX));
  /* 1005298a call 0x10052790 */
  push32(0x1005298fu); f_10052790();
  /* 1005298f push 0x10059468 */
  push32((uint32_t)(0x10059468u));
  /* 10052994 mov dword ptr [0x1005c458], eax */
  w32((uint32_t)(0x1005c458), (EAX));
  /* 10052999 call 0x10052790 */
  push32(0x1005299eu); f_10052790();
  /* 1005299e push 0x10059458 */
  push32((uint32_t)(0x10059458u));
  /* 100529a3 mov dword ptr [0x1005c470], eax */
  w32((uint32_t)(0x1005c470), (EAX));
  /* 100529a8 call 0x10052790 */
  push32(0x100529adu); f_10052790();
  /* 100529ad push 0x10059448 */
  push32((uint32_t)(0x10059448u));
  /* 100529b2 mov dword ptr [0x1005c474], eax */
  w32((uint32_t)(0x1005c474), (EAX));
  /* 100529b7 call 0x10052790 */
  push32(0x100529bcu); f_10052790();
  /* 100529bc push 0x1005943c */
  push32((uint32_t)(0x1005943cu));
  /* 100529c1 mov dword ptr [0x1005c478], eax */
  w32((uint32_t)(0x1005c478), (EAX));
  /* 100529c6 call 0x10052790 */
  push32(0x100529cbu); f_10052790();
  /* 100529cb push 0x1005942c */
  push32((uint32_t)(0x1005942cu));
  /* 100529d0 mov dword ptr [0x1005c47c], eax */
  w32((uint32_t)(0x1005c47c), (EAX));
  /* 100529d5 call 0x10052790 */
  push32(0x100529dau); f_10052790();
  /* 100529da push 0x10059420 */
  push32((uint32_t)(0x10059420u));
  /* 100529df mov dword ptr [0x1005c480], eax */
  w32((uint32_t)(0x1005c480), (EAX));
  /* 100529e4 call 0x10052790 */
  push32(0x100529e9u); f_10052790();
  /* 100529e9 push 0x10059410 */
  push32((uint32_t)(0x10059410u));
  /* 100529ee mov dword ptr [0x1005c49c], eax */
  w32((uint32_t)(0x1005c49c), (EAX));
  /* 100529f3 call 0x10052790 */
  push32(0x100529f8u); f_10052790();
  /* 100529f8 push 0x10059408 */
  push32((uint32_t)(0x10059408u));
  /* 100529fd mov dword ptr [0x1005c484], eax */
  w32((uint32_t)(0x1005c484), (EAX));
  /* 10052a02 call 0x10052790 */
  push32(0x10052a07u); f_10052790();
  /* 10052a07 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052a0a mov dword ptr [0x1005c488], eax */
  w32((uint32_t)(0x1005c488), (EAX));
  /* 10052a0f push 0x100593f8 */
  push32((uint32_t)(0x100593f8u));
  /* 10052a14 call 0x10052790 */
  push32(0x10052a19u); f_10052790();
  /* 10052a19 push 0x100593e8 */
  push32((uint32_t)(0x100593e8u));
  /* 10052a1e mov dword ptr [0x1005c48c], eax */
  w32((uint32_t)(0x1005c48c), (EAX));
  /* 10052a23 call 0x10052790 */
  push32(0x10052a28u); f_10052790();
  /* 10052a28 push 0x100593d8 */
  push32((uint32_t)(0x100593d8u));
  /* 10052a2d mov dword ptr [0x1005c490], eax */
  w32((uint32_t)(0x1005c490), (EAX));
  /* 10052a32 call 0x10052790 */
  push32(0x10052a37u); f_10052790();
  /* 10052a37 push 0x100593cc */
  push32((uint32_t)(0x100593ccu));
  /* 10052a3c mov dword ptr [0x1005c494], eax */
  w32((uint32_t)(0x1005c494), (EAX));
  /* 10052a41 call 0x10052790 */
  push32(0x10052a46u); f_10052790();
  /* 10052a46 push 0x100593c4 */
  push32((uint32_t)(0x100593c4u));
  /* 10052a4b mov dword ptr [0x1005c498], eax */
  w32((uint32_t)(0x1005c498), (EAX));
  /* 10052a50 call 0x10052790 */
  push32(0x10052a55u); f_10052790();
  /* 10052a55 push 0x100593b4 */
  push32((uint32_t)(0x100593b4u));
  /* 10052a5a mov dword ptr [0x1005c4a0], eax */
  w32((uint32_t)(0x1005c4a0), (EAX));
  /* 10052a5f call 0x10052790 */
  push32(0x10052a64u); f_10052790();
  /* 10052a64 push 0x100593a4 */
  push32((uint32_t)(0x100593a4u));
  /* 10052a69 mov dword ptr [0x1005c4a4], eax */
  w32((uint32_t)(0x1005c4a4), (EAX));
  /* 10052a6e call 0x10052790 */
  push32(0x10052a73u); f_10052790();
  /* 10052a73 push 0x10059394 */
  push32((uint32_t)(0x10059394u));
  /* 10052a78 mov dword ptr [0x1005c4a8], eax */
  w32((uint32_t)(0x1005c4a8), (EAX));
  /* 10052a7d call 0x10052790 */
  push32(0x10052a82u); f_10052790();
  /* 10052a82 push 0x10059384 */
  push32((uint32_t)(0x10059384u));
  /* 10052a87 mov dword ptr [0x1005c4ac], eax */
  w32((uint32_t)(0x1005c4ac), (EAX));
  /* 10052a8c call 0x10052790 */
  push32(0x10052a91u); f_10052790();
  /* 10052a91 push 0x10059378 */
  push32((uint32_t)(0x10059378u));
  /* 10052a96 mov dword ptr [0x1005c4b0], eax */
  w32((uint32_t)(0x1005c4b0), (EAX));
  /* 10052a9b call 0x10052790 */
  push32(0x10052aa0u); f_10052790();
  /* 10052aa0 push 0x1005936c */
  push32((uint32_t)(0x1005936cu));
  /* 10052aa5 mov dword ptr [0x1005c4b4], eax */
  w32((uint32_t)(0x1005c4b4), (EAX));
  /* 10052aaa call 0x10052790 */
  push32(0x10052aafu); f_10052790();
  /* 10052aaf push 0x1005935c */
  push32((uint32_t)(0x1005935cu));
  /* 10052ab4 mov dword ptr [0x1005c4b8], eax */
  w32((uint32_t)(0x1005c4b8), (EAX));
  /* 10052ab9 call 0x10052790 */
  push32(0x10052abeu); f_10052790();
  /* 10052abe push 0x10059350 */
  push32((uint32_t)(0x10059350u));
  /* 10052ac3 mov dword ptr [0x1005c4bc], eax */
  w32((uint32_t)(0x1005c4bc), (EAX));
  /* 10052ac8 call 0x10052790 */
  push32(0x10052acdu); f_10052790();
  /* 10052acd push 0x10059344 */
  push32((uint32_t)(0x10059344u));
  /* 10052ad2 mov dword ptr [0x1005c4c0], eax */
  w32((uint32_t)(0x1005c4c0), (EAX));
  /* 10052ad7 call 0x10052790 */
  push32(0x10052adcu); f_10052790();
  /* 10052adc push 0x10059338 */
  push32((uint32_t)(0x10059338u));
  /* 10052ae1 mov dword ptr [0x1005c4c4], eax */
  w32((uint32_t)(0x1005c4c4), (EAX));
  /* 10052ae6 call 0x10052790 */
  push32(0x10052aebu); f_10052790();
  /* 10052aeb push 0x1005932c */
  push32((uint32_t)(0x1005932cu));
  /* 10052af0 mov dword ptr [0x1005c1f8], eax */
  w32((uint32_t)(0x1005c1f8), (EAX));
  /* 10052af5 call 0x10052790 */
  push32(0x10052afau); f_10052790();
  /* 10052afa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052afd mov dword ptr [0x1005c4c8], eax */
  w32((uint32_t)(0x1005c4c8), (EAX));
  /* 10052b02 push 0x10059320 */
  push32((uint32_t)(0x10059320u));
  /* 10052b07 call 0x10052790 */
  push32(0x10052b0cu); f_10052790();
  /* 10052b0c push 0x10059314 */
  push32((uint32_t)(0x10059314u));
  /* 10052b11 mov dword ptr [0x1005c4cc], eax */
  w32((uint32_t)(0x1005c4cc), (EAX));
  /* 10052b16 call 0x10052790 */
  push32(0x10052b1bu); f_10052790();
  /* 10052b1b push 0x10059304 */
  push32((uint32_t)(0x10059304u));
  /* 10052b20 mov dword ptr [0x1005c4d0], eax */
  w32((uint32_t)(0x1005c4d0), (EAX));
  /* 10052b25 call 0x10052790 */
  push32(0x10052b2au); f_10052790();
  /* 10052b2a push 0x100592f8 */
  push32((uint32_t)(0x100592f8u));
  /* 10052b2f mov dword ptr [0x1005c4d4], eax */
  w32((uint32_t)(0x1005c4d4), (EAX));
  /* 10052b34 call 0x10052790 */
  push32(0x10052b39u); f_10052790();
  /* 10052b39 push 0x100592ec */
  push32((uint32_t)(0x100592ecu));
  /* 10052b3e mov dword ptr [0x1005c4d8], eax */
  w32((uint32_t)(0x1005c4d8), (EAX));
  /* 10052b43 call 0x10052790 */
  push32(0x10052b48u); f_10052790();
  /* 10052b48 mov dword ptr [0x1005c4dc], eax */
  w32((uint32_t)(0x1005c4dc), (EAX));
  /* 10052b4d push 0x100592dc */
  push32((uint32_t)(0x100592dcu));
  /* 10052b52 call 0x10052790 */
  push32(0x10052b57u); f_10052790();
  /* 10052b57 push 0x100592cc */
  push32((uint32_t)(0x100592ccu));
  /* 10052b5c mov dword ptr [0x1005c4e0], eax */
  w32((uint32_t)(0x1005c4e0), (EAX));
  /* 10052b61 call 0x10052790 */
  push32(0x10052b66u); f_10052790();
  /* 10052b66 push 0x100592c0 */
  push32((uint32_t)(0x100592c0u));
  /* 10052b6b mov dword ptr [0x1005c4e4], eax */
  w32((uint32_t)(0x1005c4e4), (EAX));
  /* 10052b70 call 0x10052790 */
  push32(0x10052b75u); f_10052790();
  /* 10052b75 push 0x100592b8 */
  push32((uint32_t)(0x100592b8u));
  /* 10052b7a mov dword ptr [0x1005c4e8], eax */
  w32((uint32_t)(0x1005c4e8), (EAX));
  /* 10052b7f call 0x10052790 */
  push32(0x10052b84u); f_10052790();
  /* 10052b84 push 0x100592a8 */
  push32((uint32_t)(0x100592a8u));
  /* 10052b89 mov dword ptr [0x1005c4ec], eax */
  w32((uint32_t)(0x1005c4ec), (EAX));
  /* 10052b8e call 0x10052790 */
  push32(0x10052b93u); f_10052790();
  /* 10052b93 push 0x100592a0 */
  push32((uint32_t)(0x100592a0u));
  /* 10052b98 mov dword ptr [0x1005c4f0], eax */
  w32((uint32_t)(0x1005c4f0), (EAX));
  /* 10052b9d call 0x10052790 */
  push32(0x10052ba2u); f_10052790();
  /* 10052ba2 push 0x10059294 */
  push32((uint32_t)(0x10059294u));
  /* 10052ba7 mov dword ptr [0x1005c4f4], eax */
  w32((uint32_t)(0x1005c4f4), (EAX));
  /* 10052bac call 0x10052790 */
  push32(0x10052bb1u); f_10052790();
  /* 10052bb1 push 0x1005928c */
  push32((uint32_t)(0x1005928cu));
  /* 10052bb6 mov dword ptr [0x1005c4f8], eax */
  w32((uint32_t)(0x1005c4f8), (EAX));
  /* 10052bbb call 0x10052790 */
  push32(0x10052bc0u); f_10052790();
  /* 10052bc0 push 0x10059278 */
  push32((uint32_t)(0x10059278u));
  /* 10052bc5 mov dword ptr [0x1005c4fc], eax */
  w32((uint32_t)(0x1005c4fc), (EAX));
  /* 10052bca call 0x10052790 */
  push32(0x10052bcfu); f_10052790();
  /* 10052bcf push 0x1005926c */
  push32((uint32_t)(0x1005926cu));
  /* 10052bd4 mov dword ptr [0x10059650], eax */
  w32((uint32_t)(0x10059650), (EAX));
  /* 10052bd9 call 0x10052790 */
  push32(0x10052bdeu); f_10052790();
  /* 10052bde push 0x10059260 */
  push32((uint32_t)(0x10059260u));
  /* 10052be3 mov dword ptr [0x1005c508], eax */
  w32((uint32_t)(0x1005c508), (EAX));
  /* 10052be8 call 0x10052790 */
  push32(0x10052bedu); f_10052790();
  /* 10052bed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052bf0 mov dword ptr [0x1005c504], eax */
  w32((uint32_t)(0x1005c504), (EAX));
  /* 10052bf5 push 0x1005924c */
  push32((uint32_t)(0x1005924cu));
  /* 10052bfa call 0x10052790 */
  push32(0x10052bffu); f_10052790();
  /* 10052bff push 0x1005923c */
  push32((uint32_t)(0x1005923cu));
  /* 10052c04 mov dword ptr [0x1005c50c], eax */
  w32((uint32_t)(0x1005c50c), (EAX));
  /* 10052c09 call 0x10052790 */
  push32(0x10052c0eu); f_10052790();
  /* 10052c0e push 0x1005922c */
  push32((uint32_t)(0x1005922cu));
  /* 10052c13 mov dword ptr [0x1005c510], eax */
  w32((uint32_t)(0x1005c510), (EAX));
  /* 10052c18 call 0x10052790 */
  push32(0x10052c1du); f_10052790();
  /* 10052c1d push 0x1005921c */
  push32((uint32_t)(0x1005921cu));
  /* 10052c22 mov dword ptr [0x1005c514], eax */
  w32((uint32_t)(0x1005c514), (EAX));
  /* 10052c27 call 0x10052790 */
  push32(0x10052c2cu); f_10052790();
  /* 10052c2c push 0x10059210 */
  push32((uint32_t)(0x10059210u));
  /* 10052c31 mov dword ptr [0x1005c460], eax */
  w32((uint32_t)(0x1005c460), (EAX));
  /* 10052c36 call 0x10052790 */
  push32(0x10052c3bu); f_10052790();
  /* 10052c3b push 0x10059200 */
  push32((uint32_t)(0x10059200u));
  /* 10052c40 mov dword ptr [0x1005c45c], eax */
  w32((uint32_t)(0x1005c45c), (EAX));
  /* 10052c45 call 0x10052790 */
  push32(0x10052c4au); f_10052790();
  /* 10052c4a push 0x100591ec */
  push32((uint32_t)(0x100591ecu));
  /* 10052c4f mov dword ptr [0x1005c464], eax */
  w32((uint32_t)(0x1005c464), (EAX));
  /* 10052c54 call 0x10052790 */
  push32(0x10052c59u); f_10052790();
  /* 10052c59 push 0x100591d4 */
  push32((uint32_t)(0x100591d4u));
  /* 10052c5e mov dword ptr [0x1005c468], eax */
  w32((uint32_t)(0x1005c468), (EAX));
  /* 10052c63 call 0x10052790 */
  push32(0x10052c68u); f_10052790();
  /* 10052c68 push 0x100591c4 */
  push32((uint32_t)(0x100591c4u));
  /* 10052c6d mov dword ptr [0x1005c46c], eax */
  w32((uint32_t)(0x1005c46c), (EAX));
  /* 10052c72 call 0x10052790 */
  push32(0x10052c77u); f_10052790();
  /* 10052c77 push 0x100591ac */
  push32((uint32_t)(0x100591acu));
  /* 10052c7c mov dword ptr [0x1005c530], eax */
  w32((uint32_t)(0x1005c530), (EAX));
  /* 10052c81 call 0x10052790 */
  push32(0x10052c86u); f_10052790();
  /* 10052c86 push 0x1005919c */
  push32((uint32_t)(0x1005919cu));
  /* 10052c8b mov dword ptr [0x1005c560], eax */
  w32((uint32_t)(0x1005c560), (EAX));
  /* 10052c90 call 0x10052790 */
  push32(0x10052c95u); f_10052790();
  /* 10052c95 push 0x10059194 */
  push32((uint32_t)(0x10059194u));
  /* 10052c9a mov dword ptr [0x1005c528], eax */
  w32((uint32_t)(0x1005c528), (EAX));
  /* 10052c9f call 0x10052790 */
  push32(0x10052ca4u); f_10052790();
  /* 10052ca4 push 0x10059184 */
  push32((uint32_t)(0x10059184u));
  /* 10052ca9 mov dword ptr [0x1005c534], eax */
  w32((uint32_t)(0x1005c534), (EAX));
  /* 10052cae call 0x10052790 */
  push32(0x10052cb3u); f_10052790();
  /* 10052cb3 push 0x10059178 */
  push32((uint32_t)(0x10059178u));
  /* 10052cb8 mov dword ptr [0x1005c580], eax */
  w32((uint32_t)(0x1005c580), (EAX));
  /* 10052cbd call 0x10052790 */
  push32(0x10052cc2u); f_10052790();
  /* 10052cc2 push 0x10059170 */
  push32((uint32_t)(0x10059170u));
  /* 10052cc7 mov dword ptr [0x1005c518], eax */
  w32((uint32_t)(0x1005c518), (EAX));
  /* 10052ccc call 0x10052790 */
  push32(0x10052cd1u); f_10052790();
  /* 10052cd1 push 0x10059164 */
  push32((uint32_t)(0x10059164u));
  /* 10052cd6 mov dword ptr [0x1005c51c], eax */
  w32((uint32_t)(0x1005c51c), (EAX));
  /* 10052cdb call 0x10052790 */
  push32(0x10052ce0u); f_10052790();
  /* 10052ce0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052ce3 mov dword ptr [0x1005c520], eax */
  w32((uint32_t)(0x1005c520), (EAX));
  /* 10052ce8 push 0x10059154 */
  push32((uint32_t)(0x10059154u));
  /* 10052ced call 0x10052790 */
  push32(0x10052cf2u); f_10052790();
  /* 10052cf2 push 0x10059140 */
  push32((uint32_t)(0x10059140u));
  /* 10052cf7 mov dword ptr [0x1005c524], eax */
  w32((uint32_t)(0x1005c524), (EAX));
  /* 10052cfc call 0x10052790 */
  push32(0x10052d01u); f_10052790();
  /* 10052d01 push 0x10059124 */
  push32((uint32_t)(0x10059124u));
  /* 10052d06 mov dword ptr [0x1005c52c], eax */
  w32((uint32_t)(0x1005c52c), (EAX));
  /* 10052d0b call 0x10052790 */
  push32(0x10052d10u); f_10052790();
  /* 10052d10 push 0x10059110 */
  push32((uint32_t)(0x10059110u));
  /* 10052d15 mov dword ptr [0x1005c538], eax */
  w32((uint32_t)(0x1005c538), (EAX));
  /* 10052d1a call 0x10052790 */
  push32(0x10052d1fu); f_10052790();
  /* 10052d1f push 0x10059104 */
  push32((uint32_t)(0x10059104u));
  /* 10052d24 mov dword ptr [0x1005c53c], eax */
  w32((uint32_t)(0x1005c53c), (EAX));
  /* 10052d29 call 0x10052790 */
  push32(0x10052d2eu); f_10052790();
  /* 10052d2e push 0x100590f4 */
  push32((uint32_t)(0x100590f4u));
  /* 10052d33 mov dword ptr [0x1005c574], eax */
  w32((uint32_t)(0x1005c574), (EAX));
  /* 10052d38 call 0x10052790 */
  push32(0x10052d3du); f_10052790();
  /* 10052d3d push 0x100590e8 */
  push32((uint32_t)(0x100590e8u));
  /* 10052d42 mov dword ptr [0x1005c578], eax */
  w32((uint32_t)(0x1005c578), (EAX));
  /* 10052d47 call 0x10052790 */
  push32(0x10052d4cu); f_10052790();
  /* 10052d4c push 0x100590dc */
  push32((uint32_t)(0x100590dcu));
  /* 10052d51 mov dword ptr [0x1005c57c], eax */
  w32((uint32_t)(0x1005c57c), (EAX));
  /* 10052d56 call 0x10052790 */
  push32(0x10052d5bu); f_10052790();
  /* 10052d5b push 0x100590c4 */
  push32((uint32_t)(0x100590c4u));
  /* 10052d60 mov dword ptr [0x1005c584], eax */
  w32((uint32_t)(0x1005c584), (EAX));
  /* 10052d65 call 0x10052790 */
  push32(0x10052d6au); f_10052790();
  /* 10052d6a push 0x100590a8 */
  push32((uint32_t)(0x100590a8u));
  /* 10052d6f mov dword ptr [0x1005c540], eax */
  w32((uint32_t)(0x1005c540), (EAX));
  /* 10052d74 call 0x10052790 */
  push32(0x10052d79u); f_10052790();
  /* 10052d79 push 0x1005908c */
  push32((uint32_t)(0x1005908cu));
  /* 10052d7e mov dword ptr [0x1005c544], eax */
  w32((uint32_t)(0x1005c544), (EAX));
  /* 10052d83 call 0x10052790 */
  push32(0x10052d88u); f_10052790();
  /* 10052d88 push 0x10059074 */
  push32((uint32_t)(0x10059074u));
  /* 10052d8d mov dword ptr [0x1005c548], eax */
  w32((uint32_t)(0x1005c548), (EAX));
  /* 10052d92 call 0x10052790 */
  push32(0x10052d97u); f_10052790();
  /* 10052d97 push 0x1005905c */
  push32((uint32_t)(0x1005905cu));
  /* 10052d9c mov dword ptr [0x1005c54c], eax */
  w32((uint32_t)(0x1005c54c), (EAX));
  /* 10052da1 call 0x10052790 */
  push32(0x10052da6u); f_10052790();
  /* 10052da6 push 0x10059050 */
  push32((uint32_t)(0x10059050u));
  /* 10052dab mov dword ptr [0x1005c550], eax */
  w32((uint32_t)(0x1005c550), (EAX));
  /* 10052db0 call 0x10052790 */
  push32(0x10052db5u); f_10052790();
  /* 10052db5 push 0x10059044 */
  push32((uint32_t)(0x10059044u));
  /* 10052dba mov dword ptr [0x1005c554], eax */
  w32((uint32_t)(0x1005c554), (EAX));
  /* 10052dbf call 0x10052790 */
  push32(0x10052dc4u); f_10052790();
  /* 10052dc4 push 0x10059034 */
  push32((uint32_t)(0x10059034u));
  /* 10052dc9 mov dword ptr [0x1005c558], eax */
  w32((uint32_t)(0x1005c558), (EAX));
  /* 10052dce call 0x10052790 */
  push32(0x10052dd3u); f_10052790();
  /* 10052dd3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052dd6 mov dword ptr [0x1005c55c], eax */
  w32((uint32_t)(0x1005c55c), (EAX));
  /* 10052ddb push 0x10059028 */
  push32((uint32_t)(0x10059028u));
  /* 10052de0 call 0x10052790 */
  push32(0x10052de5u); f_10052790();
  /* 10052de5 push 0x1005901c */
  push32((uint32_t)(0x1005901cu));
  /* 10052dea mov dword ptr [0x1005c564], eax */
  w32((uint32_t)(0x1005c564), (EAX));
  /* 10052def call 0x10052790 */
  push32(0x10052df4u); f_10052790();
  /* 10052df4 push 0x10059010 */
  push32((uint32_t)(0x10059010u));
  /* 10052df9 mov dword ptr [0x1005c568], eax */
  w32((uint32_t)(0x1005c568), (EAX));
  /* 10052dfe call 0x10052790 */
  push32(0x10052e03u); f_10052790();
  /* 10052e03 push 0x10059000 */
  push32((uint32_t)(0x10059000u));
  /* 10052e08 mov dword ptr [0x1005c588], eax */
  w32((uint32_t)(0x1005c588), (EAX));
  /* 10052e0d call 0x10052790 */
  push32(0x10052e12u); f_10052790();
  /* 10052e12 push 0x10058ff4 */
  push32((uint32_t)(0x10058ff4u));
  /* 10052e17 mov dword ptr [0x1005c58c], eax */
  w32((uint32_t)(0x1005c58c), (EAX));
  /* 10052e1c call 0x10052790 */
  push32(0x10052e21u); f_10052790();
  /* 10052e21 push 0x10058fe8 */
  push32((uint32_t)(0x10058fe8u));
  /* 10052e26 mov dword ptr [0x1005c590], eax */
  w32((uint32_t)(0x1005c590), (EAX));
  /* 10052e2b call 0x10052790 */
  push32(0x10052e30u); f_10052790();
  /* 10052e30 push 0x10058fdc */
  push32((uint32_t)(0x10058fdcu));
  /* 10052e35 mov dword ptr [0x1005c594], eax */
  w32((uint32_t)(0x1005c594), (EAX));
  /* 10052e3a call 0x10052790 */
  push32(0x10052e3fu); f_10052790();
  /* 10052e3f push 0x10058fcc */
  push32((uint32_t)(0x10058fccu));
  /* 10052e44 mov dword ptr [0x1005c598], eax */
  w32((uint32_t)(0x1005c598), (EAX));
  /* 10052e49 call 0x10052790 */
  push32(0x10052e4eu); f_10052790();
  /* 10052e4e push 0x10058fbc */
  push32((uint32_t)(0x10058fbcu));
  /* 10052e53 mov dword ptr [0x1005c59c], eax */
  w32((uint32_t)(0x1005c59c), (EAX));
  /* 10052e58 call 0x10052790 */
  push32(0x10052e5du); f_10052790();
  /* 10052e5d push 0x10058fa8 */
  push32((uint32_t)(0x10058fa8u));
  /* 10052e62 mov dword ptr [0x1005c5a4], eax */
  w32((uint32_t)(0x1005c5a4), (EAX));
  /* 10052e67 call 0x10052790 */
  push32(0x10052e6cu); f_10052790();
  /* 10052e6c mov dword ptr [0x1005c5a0], eax */
  w32((uint32_t)(0x1005c5a0), (EAX));
  /* 10052e71 push 0x10058f90 */
  push32((uint32_t)(0x10058f90u));
  /* 10052e76 call 0x10052790 */
  push32(0x10052e7bu); f_10052790();
  /* 10052e7b push 0x10058f78 */
  push32((uint32_t)(0x10058f78u));
  /* 10052e80 mov dword ptr [0x100598e8], eax */
  w32((uint32_t)(0x100598e8), (EAX));
  /* 10052e85 call 0x10052790 */
  push32(0x10052e8au); f_10052790();
  /* 10052e8a push 0x10058f68 */
  push32((uint32_t)(0x10058f68u));
  /* 10052e8f mov dword ptr [0x10059748], eax */
  w32((uint32_t)(0x10059748), (EAX));
  /* 10052e94 call 0x10052790 */
  push32(0x10052e99u); f_10052790();
  /* 10052e99 push 0x10058f58 */
  push32((uint32_t)(0x10058f58u));
  /* 10052e9e mov dword ptr [0x1005c5a8], eax */
  w32((uint32_t)(0x1005c5a8), (EAX));
  /* 10052ea3 call 0x10052790 */
  push32(0x10052ea8u); f_10052790();
  /* 10052ea8 push 0x10058f48 */
  push32((uint32_t)(0x10058f48u));
  /* 10052ead mov dword ptr [0x1005c56c], eax */
  w32((uint32_t)(0x1005c56c), (EAX));
  /* 10052eb2 call 0x10052790 */
  push32(0x10052eb7u); f_10052790();
  /* 10052eb7 push 0x10058f38 */
  push32((uint32_t)(0x10058f38u));
  /* 10052ebc mov dword ptr [0x1005c570], eax */
  w32((uint32_t)(0x1005c570), (EAX));
  /* 10052ec1 call 0x10052790 */
  push32(0x10052ec6u); f_10052790();
  /* 10052ec6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052ec9 mov dword ptr [0x1005c2c8], eax */
  w32((uint32_t)(0x1005c2c8), (EAX));
  /* 10052ece push 0x10058f28 */
  push32((uint32_t)(0x10058f28u));
  /* 10052ed3 call 0x10052790 */
  push32(0x10052ed8u); f_10052790();
  /* 10052ed8 push 0x10058f18 */
  push32((uint32_t)(0x10058f18u));
  /* 10052edd mov dword ptr [0x1005c280], eax */
  w32((uint32_t)(0x1005c280), (EAX));
  /* 10052ee2 call 0x10052790 */
  push32(0x10052ee7u); f_10052790();
  /* 10052ee7 push 0x10058f08 */
  push32((uint32_t)(0x10058f08u));
  /* 10052eec mov dword ptr [0x1005bfd8], eax */
  w32((uint32_t)(0x1005bfd8), (EAX));
  /* 10052ef1 call 0x10052790 */
  push32(0x10052ef6u); f_10052790();
  /* 10052ef6 push 0x10058ef8 */
  push32((uint32_t)(0x10058ef8u));
  /* 10052efb mov dword ptr [0x10059948], eax */
  w32((uint32_t)(0x10059948), (EAX));
  /* 10052f00 call 0x10052790 */
  push32(0x10052f05u); f_10052790();
  /* 10052f05 push 0x10058ee4 */
  push32((uint32_t)(0x10058ee4u));
  /* 10052f0a mov dword ptr [0x1005c260], eax */
  w32((uint32_t)(0x1005c260), (EAX));
  /* 10052f0f call 0x10052790 */
  push32(0x10052f14u); f_10052790();
  /* 10052f14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052f17 mov dword ptr [0x10059960], eax */
  w32((uint32_t)(0x10059960), (EAX));
L_10052f1c:;
  /* 10052f1c mov eax, 1 */
  EAX = (0x1u);
  /* 10052f21 ret 0xc */
  ESPCHK(0x100527f0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002f30 @ 0x10052f30 (35 bytes, 10 insns) */
void f_10052f30(void) {
  FTRACE(0x10052f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10052f30 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10052f34 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10052f38 push eax */
  push32((uint32_t)(EAX));
  /* 10052f39 push ecx */
  push32((uint32_t)(ECX));
  /* 10052f3a push 0x1005961c */
  push32((uint32_t)(0x1005961cu));
  /* 10052f3f push 0x100597c0 */
  push32((uint32_t)(0x100597c0u));
  /* 10052f44 call dword ptr [0x10057014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10057014))), 0x10052f4au);
  /* 10052f4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052f4d mov eax, 0x100597c0 */
  EAX = (0x100597c0u);
  /* 10052f52 ret  */
  ESPCHK(0x10052f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f60 @ 0x10052f60 (45 bytes, 16 insns) */
void f_10052f60(void) {
  FTRACE(0x10052f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10052f60 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10052f64 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10052f68 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10052f6d push eax */
  push32((uint32_t)(EAX));
  /* 10052f6e push ecx */
  push32((uint32_t)(ECX));
  /* 10052f6f call 0x10052740 */
  push32(0x10052f74u); f_10052740();
  /* 10052f74 mov ecx, eax */
  ECX = (EAX);
  /* 10052f76 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10052f7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052f7d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10052f80 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10052f83 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10052f86 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10052f89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10052f8a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10052f8c ret  */
  ESPCHK(0x10052f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f90 @ 0x10052f90 (171 bytes, 77 insns) */
void f_10052f90(void) {
  FTRACE(0x10052f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10052f90 push ebx */
  push32((uint32_t)(EBX));
  /* 10052f91 push ebp */
  push32((uint32_t)(EBP));
  /* 10052f92 push esi */
  push32((uint32_t)(ESI));
  /* 10052f93 push edi */
  push32((uint32_t)(EDI));
  /* 10052f94 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 10052f98 push edi */
  push32((uint32_t)(EDI));
  /* 10052f99 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10052f9fu);
  /* 10052f9f mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 10052fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052fa6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10052fa8 jl 0x10052fb1 */
  if ((C.sf!=C.of)) goto L_10052fb1;
  /* 10052faa pop edi */
  EDI = (pop32());
  /* 10052fab pop esi */
  ESI = (pop32());
  /* 10052fac pop ebp */
  EBP = (pop32());
  /* 10052fad mov al, 1 */
  AL = (0x1u);
  /* 10052faf pop ebx */
  EBX = (pop32());
  /* 10052fb0 ret  */
  ESPCHK(0x10052f90u, _esp0);
  ESP += 4; return;
L_10052fb1:;
  /* 10052fb1 push edi */
  push32((uint32_t)(EDI));
  /* 10052fb2 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10052fb8u);
  /* 10052fb8 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10052fbc sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10052fbe push esi */
  push32((uint32_t)(ESI));
  /* 10052fbf push edi */
  push32((uint32_t)(EDI));
  /* 10052fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10052fc1 mov dword ptr [esp + 0x24], esi */
  w32((uint32_t)(ESP + 0x24), (ESI));
  /* 10052fc5 call 0x10052f60 */
  push32(0x10052fcau); f_10052f60();
  /* 10052fca push ebp */
  push32((uint32_t)(EBP));
  /* 10052fcb mov ebx, eax */
  EBX = (EAX);
  /* 10052fcd call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10052fd3u);
  /* 10052fd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10052fd6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10052fd8 jle 0x10053034 */
  if ((C.zf||C.sf!=C.of)) goto L_10053034;
  /* 10052fda cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10052fe0 jle 0x10053034 */
  if ((C.zf||C.sf!=C.of)) goto L_10053034;
  /* 10052fe2 mov eax, 0x45e7b273 */
  EAX = (0x45e7b273u);
  /* 10052fe7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10052fe9 imul ebx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EBX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10052feb sar edx, 0xc */
  EDX = (sh_sar((uint32_t)(EDX), (0xcu)&0x1f, 32));
  /* 10052fee mov eax, edx */
  EAX = (EDX);
  /* 10052ff0 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10052ff3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10052ff5 mov ebx, edx */
  EBX = (EDX);
L_10052ff7:;
  /* 10052ff7 cmp ebx, 0xf */
  { uint32_t _a=(EBX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10052ffa mov eax, 0xf */
  EAX = (0xfu);
  /* 10052fff jg 0x10053003 */
  if ((!C.zf&&C.sf==C.of)) goto L_10053003;
  /* 10053001 mov eax, ebx */
  EAX = (EBX);
L_10053003:;
  /* 10053003 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053005 jge 0x10053016 */
  if ((C.sf==C.of)) goto L_10053016;
  /* 10053007 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10053009 push ebp */
  push32((uint32_t)(EBP));
  /* 1005300a push edi */
  push32((uint32_t)(EDI));
  /* 1005300b call 0x10052610 */
  push32(0x10053010u); f_10052610();
  /* 10053010 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053013 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10053014 jmp 0x10052ff7 */
  goto L_10052ff7;
L_10053016:;
  /* 10053016 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1005301a push ecx */
  push32((uint32_t)(ECX));
  /* 1005301b push edi */
  push32((uint32_t)(EDI));
  /* 1005301c push ebp */
  push32((uint32_t)(EBP));
  /* 1005301d call 0x10052f60 */
  push32(0x10053022u); f_10052f60();
  /* 10053022 push eax */
  push32((uint32_t)(EAX));
  /* 10053023 push edi */
  push32((uint32_t)(EDI));
  /* 10053024 push ebp */
  push32((uint32_t)(EBP));
  /* 10053025 call 0x10052610 */
  push32(0x1005302au); f_10052610();
  /* 1005302a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005302d mov al, 1 */
  AL = (0x1u);
  /* 1005302f pop edi */
  EDI = (pop32());
  /* 10053030 pop esi */
  ESI = (pop32());
  /* 10053031 pop ebp */
  EBP = (pop32());
  /* 10053032 pop ebx */
  EBX = (pop32());
  /* 10053033 ret  */
  ESPCHK(0x10052f90u, _esp0);
  ESP += 4; return;
L_10053034:;
  /* 10053034 pop edi */
  EDI = (pop32());
  /* 10053035 pop esi */
  ESI = (pop32());
  /* 10053036 pop ebp */
  EBP = (pop32());
  /* 10053037 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 10053039 pop ebx */
  EBX = (pop32());
  /* 1005303a ret  */
  ESPCHK(0x10052f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003040 @ 0x10053040 (369 bytes, 82 insns) */
void f_10053040(void) {
  FTRACE(0x10053040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10053040 push ebx */
  push32((uint32_t)(EBX));
  /* 10053041 push esi */
  push32((uint32_t)(ESI));
  /* 10053042 call dword ptr [0x1005c518] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c518))), 0x10053048u);
  /* 10053048 push 0x1005c1a8 */
  push32((uint32_t)(0x1005c1a8u));
  /* 1005304d mov dword ptr [0x1005c2cc], eax */
  w32((uint32_t)(0x1005c2cc), (EAX));
  /* 10053052 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10053058u);
  /* 10053058 mov ebx, 1 */
  EBX = (0x1u);
  /* 1005305d mov esi, eax */
  ESI = (EAX);
  /* 1005305f push ebx */
  push32((uint32_t)(EBX));
  /* 10053060 call 0x10052730 */
  push32(0x10053065u); f_10052730();
  /* 10053065 push 4 */
  push32((uint32_t)(0x4u));
  /* 10053067 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10053069 call 0x10052730 */
  push32(0x1005306eu); f_10052730();
  /* 1005306e push 5 */
  push32((uint32_t)(0x5u));
  /* 10053070 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10053072 call 0x10052730 */
  push32(0x10053077u); f_10052730();
  /* 10053077 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10053079 mov eax, dword ptr [0x1005c2cc] */
  EAX = (r32((uint32_t)(0x1005c2cc)));
  /* 1005307e push 3 */
  push32((uint32_t)(0x3u));
  /* 10053080 mov dword ptr [0x1005c1c8], esi */
  w32((uint32_t)(0x1005c1c8), (ESI));
  /* 10053086 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 10053089 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1005308c lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1005308f lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 10053092 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10053095 mov ecx, dword ptr [eax + 0x10059b08] */
  ECX = (r32((uint32_t)(EAX + 0x10059b08)));
  /* 1005309b lea edx, [eax + 0x10059978] */
  EDX = ((uint32_t)(EAX + 0x10059978));
  /* 100530a1 mov dword ptr [0x1005c1d8], edx */
  w32((uint32_t)(0x1005c1d8), (EDX));
  /* 100530a7 lea edx, [eax + 0x10059b0c] */
  EDX = ((uint32_t)(EAX + 0x10059b0c));
  /* 100530ad mov dword ptr [0x1005c61c], ecx */
  w32((uint32_t)(0x1005c61c), (ECX));
  /* 100530b3 mov ecx, dword ptr [eax + 0x10059c9c] */
  ECX = (r32((uint32_t)(EAX + 0x10059c9c)));
  /* 100530b9 mov dword ptr [0x1005c1dc], edx */
  w32((uint32_t)(0x1005c1dc), (EDX));
  /* 100530bf lea edx, [eax + 0x10059ca0] */
  EDX = ((uint32_t)(EAX + 0x10059ca0));
  /* 100530c5 mov dword ptr [0x1005c620], ecx */
  w32((uint32_t)(0x1005c620), (ECX));
  /* 100530cb mov dword ptr [0x1005c264], edx */
  w32((uint32_t)(0x1005c264), (EDX));
  /* 100530d1 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100530d7u);
  /* 100530d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100530d9 mov dword ptr [0x1005c2a8], eax */
  w32((uint32_t)(0x1005c2a8), (EAX));
  /* 100530de call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100530e4u);
  /* 100530e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100530e6 mov dword ptr [0x10059638], eax */
  w32((uint32_t)(0x10059638), (EAX));
  /* 100530eb call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100530f1u);
  /* 100530f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100530f3 mov dword ptr [0x1005c398], eax */
  w32((uint32_t)(0x1005c398), (EAX));
  /* 100530f8 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100530feu);
  /* 100530fe push 5 */
  push32((uint32_t)(0x5u));
  /* 10053100 mov dword ptr [0x10059740], eax */
  w32((uint32_t)(0x10059740), (EAX));
  /* 10053105 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x1005310bu);
  /* 1005310b push ebx */
  push32((uint32_t)(EBX));
  /* 1005310c mov dword ptr [0x1005c100], eax */
  w32((uint32_t)(0x1005c100), (EAX));
  /* 10053111 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053117u);
  /* 10053117 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005311a mov dword ptr [0x1005c350], eax */
  w32((uint32_t)(0x1005c350), (EAX));
  /* 1005311f call 0x10052670 */
  push32(0x10053124u); f_10052670();
  /* 10053124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10053126 jne 0x10053132 */
  if (!C.zf) goto L_10053132;
  /* 10053128 mov dword ptr [0x10058228], 4 */
  w32((uint32_t)(0x10058228), (0x4u));
L_10053132:;
  /* 10053132 push 0x100580f4 */
  push32((uint32_t)(0x100580f4u));
  /* 10053137 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10053139 call dword ptr [0x1005c524] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c524))), 0x1005313fu);
  /* 1005313f push 0x1005c5b0 */
  push32((uint32_t)(0x1005c5b0u));
  /* 10053144 call 0x10052720 */
  push32(0x10053149u); f_10052720();
  /* 10053149 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1005314b push 0x10058224 */
  push32((uint32_t)(0x10058224u));
  /* 10053150 call 0x10052700 */
  push32(0x10053155u); f_10052700();
  /* 10053155 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053158 mov byte ptr [0x1005c1a0], bl */
  w8((uint32_t)(0x1005c1a0), (BL));
  /* 1005315e mov byte ptr [0x1005c1a2], bl */
  w8((uint32_t)(0x1005c1a2), (BL));
  /* 10053164 mov byte ptr [0x1005c1a4], bl */
  w8((uint32_t)(0x1005c1a4), (BL));
  /* 1005316a mov byte ptr [0x1005c1a5], bl */
  w8((uint32_t)(0x1005c1a5), (BL));
  /* 10053170 mov byte ptr [0x1005c33b], bl */
  w8((uint32_t)(0x1005c33b), (BL));
  /* 10053176 mov byte ptr [0x1005c339], bl */
  w8((uint32_t)(0x1005c339), (BL));
  /* 1005317c mov byte ptr [0x1005c33c], bl */
  w8((uint32_t)(0x1005c33c), (BL));
  /* 10053182 mov byte ptr [0x1005c33d], bl */
  w8((uint32_t)(0x1005c33d), (BL));
  /* 10053188 pop esi */
  ESI = (pop32());
  /* 10053189 mov byte ptr [0x1005c1a3], 0 */
  w8((uint32_t)(0x1005c1a3), (0x0u));
  /* 10053190 mov byte ptr [0x1005c1a1], 0 */
  w8((uint32_t)(0x1005c1a1), (0x0u));
  /* 10053197 mov byte ptr [0x1005c338], 0 */
  w8((uint32_t)(0x1005c338), (0x0u));
  /* 1005319e mov byte ptr [0x1005c33a], 0 */
  w8((uint32_t)(0x1005c33a), (0x0u));
  /* 100531a5 mov dword ptr [0x1005c664], 0 */
  w32((uint32_t)(0x1005c664), (0x0u));
  /* 100531af pop ebx */
  EBX = (pop32());
  /* 100531b0 ret  */
  ESPCHK(0x10053040u, _esp0);
  ESP += 4; return;
}

/* FUN_100031c0 @ 0x100531c0 (85 bytes, 29 insns) */
void f_100531c0(void) {
  FTRACE(0x100531c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100531c0 mov eax, dword ptr [0x1005bf70] */
  EAX = (r32((uint32_t)(0x1005bf70)));
  /* 100531c5 push esi */
  push32((uint32_t)(ESI));
  /* 100531c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100531c9 jg 0x10053213 */
  if ((!C.zf&&C.sf==C.of)) goto L_10053213;
  /* 100531cb push 0x100596a0 */
  push32((uint32_t)(0x100596a0u));
  /* 100531d0 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100531d6u);
  /* 100531d6 mov ecx, eax */
  ECX = (EAX);
  /* 100531d8 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 100531dd imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100531df sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 100531e2 mov eax, edx */
  EAX = (EDX);
  /* 100531e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100531e7 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100531ea add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100531ec mov esi, edx */
  ESI = (EDX);
  /* 100531ee je 0x10053213 */
  if (C.zf) goto L_10053213;
  /* 100531f0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100531f2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100531f4 push esi */
  push32((uint32_t)(ESI));
  /* 100531f5 push 0x10059718 */
  push32((uint32_t)(0x10059718u));
  /* 100531fa call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053200u);
  /* 10053200 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10053202 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10053204 push esi */
  push32((uint32_t)(ESI));
  /* 10053205 push 0x10059658 */
  push32((uint32_t)(0x10059658u));
  /* 1005320a call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053210u);
  /* 10053210 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10053213:;
  /* 10053213 pop esi */
  ESI = (pop32());
  /* 10053214 ret  */
  ESPCHK(0x100531c0u, _esp0);
  ESP += 4; return;
}

/* ProcessLandAI @ 0x10053220 (1 bytes, 1 insns) */
void f_10053220(void) {
  FTRACE(0x10053220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10053220 ret  */
  ESPCHK(0x10053220u, _esp0);
  ESP += 4; return;
}

/* FUN_10003230 @ 0x10053230 (157 bytes, 43 insns) */
void f_10053230(void) {
  FTRACE(0x10053230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10053230 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10053232 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10053234 push 0x1005c368 */
  push32((uint32_t)(0x1005c368u));
  /* 10053239 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005323fu);
  /* 1005323f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10053241 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10053243 push 0x1005c370 */
  push32((uint32_t)(0x1005c370u));
  /* 10053248 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005324eu);
  /* 1005324e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10053250 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10053252 push 0x1005c358 */
  push32((uint32_t)(0x1005c358u));
  /* 10053257 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005325du);
  /* 1005325d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005325f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10053261 push 0x1005c360 */
  push32((uint32_t)(0x1005c360u));
  /* 10053266 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005326cu);
  /* 1005326c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005326e push 0xa */
  push32((uint32_t)(0xau));
  /* 10053270 push 0x1005c378 */
  push32((uint32_t)(0x1005c378u));
  /* 10053275 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005327bu);
  /* 1005327b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005327d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1005327f push 0x1005c2b0 */
  push32((uint32_t)(0x1005c2b0u));
  /* 10053284 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005328au);
  /* 1005328a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005328d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005328f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10053291 push 0x1005c298 */
  push32((uint32_t)(0x1005c298u));
  /* 10053296 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005329cu);
  /* 1005329c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005329e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100532a0 push 0x1005c2a0 */
  push32((uint32_t)(0x1005c2a0u));
  /* 100532a5 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100532abu);
  /* 100532ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100532ad push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100532af push 0x1005c2b8 */
  push32((uint32_t)(0x1005c2b8u));
  /* 100532b4 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100532bau);
  /* 100532ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100532bc push 0xa */
  push32((uint32_t)(0xau));
  /* 100532be push 0x1005c2c0 */
  push32((uint32_t)(0x1005c2c0u));
  /* 100532c3 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100532c9u);
  /* 100532c9 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100532cc ret  */
  ESPCHK(0x10053230u, _esp0);
  ESP += 4; return;
}

/* FUN_100032d0 @ 0x100532d0 (79 bytes, 22 insns) */
void f_100532d0(void) {
  FTRACE(0x100532d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100532d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100532d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100532d4 push 0x10059928 */
  push32((uint32_t)(0x10059928u));
  /* 100532d9 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100532dfu);
  /* 100532df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100532e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100532e3 push 0x10059930 */
  push32((uint32_t)(0x10059930u));
  /* 100532e8 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100532eeu);
  /* 100532ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100532f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100532f2 push 0x10059920 */
  push32((uint32_t)(0x10059920u));
  /* 100532f7 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100532fdu);
  /* 100532fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100532ff push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053301 push 0x1005bf90 */
  push32((uint32_t)(0x1005bf90u));
  /* 10053306 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005330cu);
  /* 1005330c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005330e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053310 push 0x1005bf80 */
  push32((uint32_t)(0x1005bf80u));
  /* 10053315 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005331bu);
  /* 1005331b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005331e ret  */
  ESPCHK(0x100532d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003320 @ 0x10053320 (64 bytes, 18 insns) */
void f_10053320(void) {
  FTRACE(0x10053320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10053320 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10053322 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10053324 push 0x1005c0b0 */
  push32((uint32_t)(0x1005c0b0u));
  /* 10053329 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005332fu);
  /* 1005332f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10053331 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10053333 push 0x1005c0b8 */
  push32((uint32_t)(0x1005c0b8u));
  /* 10053338 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005333eu);
  /* 1005333e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10053340 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10053342 push 0x1005c0c0 */
  push32((uint32_t)(0x1005c0c0u));
  /* 10053347 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005334du);
  /* 1005334d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1005334f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10053351 push 0x1005c0c8 */
  push32((uint32_t)(0x1005c0c8u));
  /* 10053356 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005335cu);
  /* 1005335c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005335f ret  */
  ESPCHK(0x10053320u, _esp0);
  ESP += 4; return;
}

/* FUN_10003360 @ 0x10053360 (3787 bytes, 1079 insns) */
void f_10053360(void) {
  FTRACE(0x10053360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10053360 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10053363 push ebx */
  push32((uint32_t)(EBX));
  /* 10053364 push ebp */
  push32((uint32_t)(EBP));
  /* 10053365 push esi */
  push32((uint32_t)(ESI));
  /* 10053366 push edi */
  push32((uint32_t)(EDI));
  /* 10053367 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 1005336c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10053371 call dword ptr [0x1005c530] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c530))), 0x10053377u);
  /* 10053377 push 0 */
  push32((uint32_t)(0x0u));
  /* 10053379 call 0x10052760 */
  push32(0x1005337eu); f_10052760();
  /* 1005337e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10053380 push 0 */
  push32((uint32_t)(0x0u));
  /* 10053382 call 0x10052640 */
  push32(0x10053387u); f_10052640();
  /* 10053387 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10053389 push 0 */
  push32((uint32_t)(0x0u));
  /* 1005338b mov dword ptr [esp + 0x40], eax */
  w32((uint32_t)(ESP + 0x40), (EAX));
  /* 1005338f call 0x10052640 */
  push32(0x10053394u); f_10052640();
  /* 10053394 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10053396 push 0 */
  push32((uint32_t)(0x0u));
  /* 10053398 mov edi, eax */
  EDI = (EAX);
  /* 1005339a call 0x10052640 */
  push32(0x1005339fu); f_10052640();
  /* 1005339f push 0xe */
  push32((uint32_t)(0xeu));
  /* 100533a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100533a3 mov esi, eax */
  ESI = (EAX);
  /* 100533a5 call 0x10052640 */
  push32(0x100533aau); f_10052640();
  /* 100533aa push 0x1005c038 */
  push32((uint32_t)(0x1005c038u));
  /* 100533af mov ebx, eax */
  EBX = (EAX);
  /* 100533b1 call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x100533b7u);
  /* 100533b7 sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100533ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 100533bf add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100533c1 mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 100533c5 push 0x1005c2f0 */
  push32((uint32_t)(0x1005c2f0u));
  /* 100533ca lea eax, [esi + ebx*4] */
  EAX = ((uint32_t)(ESI + EBX*4));
  /* 100533cd mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 100533d1 call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x100533d7u);
  /* 100533d7 push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 100533dc mov ebx, eax */
  EBX = (EAX);
  /* 100533de call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100533e4u);
  /* 100533e4 push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 100533e9 mov ebp, eax */
  EBP = (EAX);
  /* 100533eb call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x100533f1u);
  /* 100533f1 push 0x1005c000 */
  push32((uint32_t)(0x1005c000u));
  /* 100533f6 mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 100533fa call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10053400u);
  /* 10053400 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053403 mov edi, eax */
  EDI = (EAX);
  /* 10053405 push 0x1005c000 */
  push32((uint32_t)(0x1005c000u));
  /* 1005340a call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10053410u);
  /* 10053410 push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10053415 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 10053419 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x1005341fu);
  /* 1005341f push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10053424 mov esi, eax */
  ESI = (EAX);
  /* 10053426 call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x1005342cu);
  /* 1005342c push 0x1005c2f0 */
  push32((uint32_t)(0x1005c2f0u));
  /* 10053431 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 10053435 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x1005343bu);
  /* 1005343b mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 1005343f mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 10053443 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10053445 mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10053449 sub esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1005344b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1005344d sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1005344f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10053451 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10053453 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10053455 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10053457 push 0x1005c038 */
  push32((uint32_t)(0x1005c038u));
  /* 1005345c add esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1005345e mov dword ptr [esp + 0x38], esi */
  w32((uint32_t)(ESP + 0x38), (ESI));
  /* 10053462 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053468u);
  /* 10053468 push 3 */
  push32((uint32_t)(0x3u));
  /* 1005346a mov bl, 1 */
  BL = (0x1u);
  /* 1005346c call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053472u);
  /* 10053472 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053475 cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005347a jle 0x100534aa */
  if ((C.zf||C.sf!=C.of)) goto L_100534aa;
  /* 1005347c push 1 */
  push32((uint32_t)(0x1u));
  /* 1005347e call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053484u);
  /* 10053484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053487 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005348c jle 0x100534aa */
  if ((C.zf||C.sf!=C.of)) goto L_100534aa;
  /* 1005348e push 4 */
  push32((uint32_t)(0x4u));
  /* 10053490 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053496u);
  /* 10053496 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053499 cmp eax, 0x1b58 */
  { uint32_t _a=(EAX),_b=(0x1b58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005349e jle 0x100534aa */
  if ((C.zf||C.sf!=C.of)) goto L_100534aa;
  /* 100534a0 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 100534a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100534a6 jne 0x100534aa */
  if (!C.zf) goto L_100534aa;
  /* 100534a8 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_100534aa:;
  /* 100534aa push 0x1005c1a8 */
  push32((uint32_t)(0x1005c1a8u));
  /* 100534af call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100534b5u);
  /* 100534b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 100534b7 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 100534bb call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100534c1u);
  /* 100534c1 push 0x1005c1d0 */
  push32((uint32_t)(0x1005c1d0u));
  /* 100534c6 mov esi, eax */
  ESI = (EAX);
  /* 100534c8 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x100534ceu);
  /* 100534ce push 0x100596a0 */
  push32((uint32_t)(0x100596a0u));
  /* 100534d3 mov byte ptr [esp + 0x22], al */
  w8((uint32_t)(ESP + 0x22), (AL));
  /* 100534d7 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100534ddu);
  /* 100534dd push 0x1005c0f8 */
  push32((uint32_t)(0x1005c0f8u));
  /* 100534e2 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100534e8u);
  /* 100534e8 push 0x1005c3c8 */
  push32((uint32_t)(0x1005c3c8u));
  /* 100534ed mov dword ptr [esp + 0x2c], eax */
  w32((uint32_t)(ESP + 0x2c), (EAX));
  /* 100534f1 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100534f7u);
  /* 100534f7 push 0x1005c348 */
  push32((uint32_t)(0x1005c348u));
  /* 100534fc mov edi, eax */
  EDI = (EAX);
  /* 100534fe call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10053504u);
  /* 10053504 push 0x100596a0 */
  push32((uint32_t)(0x100596a0u));
  /* 10053509 mov ebp, eax */
  EBP = (EAX);
  /* 1005350b call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10053511u);
  /* 10053511 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10053513 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10053515 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10053517 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10053519 push 0x1005c128 */
  push32((uint32_t)(0x1005c128u));
  /* 1005351e mov dword ptr [esp + 0x44], eax */
  w32((uint32_t)(ESP + 0x44), (EAX));
  /* 10053522 mov byte ptr [esp + 0x3f], 1 */
  w8((uint32_t)(ESP + 0x3f), (0x1u));
  /* 10053527 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005352du);
  /* 1005352d push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1005352f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10053531 push 0x1005c168 */
  push32((uint32_t)(0x1005c168u));
  /* 10053536 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005353cu);
  /* 1005353c push 0x100598f0 */
  push32((uint32_t)(0x100598f0u));
  /* 10053541 call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10053547u);
  /* 10053547 push 0x100598f0 */
  push32((uint32_t)(0x100598f0u));
  /* 1005354c mov edi, eax */
  EDI = (EAX);
  /* 1005354e call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10053554u);
  /* 10053554 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053557 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10053559 je 0x10053560 */
  if (C.zf) goto L_10053560;
  /* 1005355b mov byte ptr [esp + 0x13], 0 */
  w8((uint32_t)(ESP + 0x13), (0x0u));
L_10053560:;
  /* 10053560 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10053564 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 10053566 je 0x10053f2d */
  if (C.zf) goto L_10053f2d;
  /* 1005356c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005356e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10053570 push 1 */
  push32((uint32_t)(0x1u));
  /* 10053572 push 0x1005bff0 */
  push32((uint32_t)(0x1005bff0u));
  /* 10053577 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x1005357du);
  /* 1005357d push 0x1005bff0 */
  push32((uint32_t)(0x1005bff0u));
  /* 10053582 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10053588u);
  /* 10053588 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005358b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005358d je 0x10054223 */
  if (C.zf) goto L_10054223;
  /* 10053593 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10053595 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10053597 push 0x1005c390 */
  push32((uint32_t)(0x1005c390u));
  /* 1005359c call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100535a2u);
  /* 100535a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100535a5 call dword ptr [0x1005c588] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c588))), 0x100535abu);
  /* 100535ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100535ad jne 0x100535f0 */
  if (!C.zf) goto L_100535f0;
  /* 100535af cmp esi, 0x2bc */
  { uint32_t _a=(ESI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100535b5 jle 0x100535dc */
  if ((C.zf||C.sf!=C.of)) goto L_100535dc;
  /* 100535b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100535b9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100535bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100535bd push 0x1005c1a8 */
  push32((uint32_t)(0x1005c1a8u));
  /* 100535c2 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100535c8u);
  /* 100535c8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100535ca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100535cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100535ce push 0x100596a0 */
  push32((uint32_t)(0x100596a0u));
  /* 100535d3 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100535d9u);
  /* 100535d9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100535dc:;
  /* 100535dc push 1 */
  push32((uint32_t)(0x1u));
  /* 100535de push 1 */
  push32((uint32_t)(0x1u));
  /* 100535e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 100535e2 call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x100535e8u);
  /* 100535e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100535eb jmp 0x100536fe */
  goto L_100536fe;
L_100535f0:;
  /* 100535f0 push 0x100597b8 */
  push32((uint32_t)(0x100597b8u));
  /* 100535f5 call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x100535fbu);
  /* 100535fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100535fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10053600 je 0x1005362a */
  if (C.zf) goto L_1005362a;
  /* 10053602 cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053608 jle 0x10053612 */
  if ((C.zf||C.sf!=C.of)) goto L_10053612;
  /* 1005360a push 6 */
  push32((uint32_t)(0x6u));
  /* 1005360c push 8 */
  push32((uint32_t)(0x8u));
  /* 1005360e push 9 */
  push32((uint32_t)(0x9u));
  /* 10053610 jmp 0x10053650 */
  goto L_10053650;
L_10053612:;
  /* 10053612 cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053618 jle 0x10053622 */
  if ((C.zf||C.sf!=C.of)) goto L_10053622;
  /* 1005361a push 3 */
  push32((uint32_t)(0x3u));
  /* 1005361c push 5 */
  push32((uint32_t)(0x5u));
  /* 1005361e push 9 */
  push32((uint32_t)(0x9u));
  /* 10053620 jmp 0x10053650 */
  goto L_10053650;
L_10053622:;
  /* 10053622 push 1 */
  push32((uint32_t)(0x1u));
  /* 10053624 push 4 */
  push32((uint32_t)(0x4u));
  /* 10053626 push 9 */
  push32((uint32_t)(0x9u));
  /* 10053628 jmp 0x10053650 */
  goto L_10053650;
L_1005362a:;
  /* 1005362a cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053630 jle 0x1005363a */
  if ((C.zf||C.sf!=C.of)) goto L_1005363a;
  /* 10053632 push 8 */
  push32((uint32_t)(0x8u));
  /* 10053634 push 8 */
  push32((uint32_t)(0x8u));
  /* 10053636 push 9 */
  push32((uint32_t)(0x9u));
  /* 10053638 jmp 0x10053650 */
  goto L_10053650;
L_1005363a:;
  /* 1005363a cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053640 jle 0x1005364a */
  if ((C.zf||C.sf!=C.of)) goto L_1005364a;
  /* 10053642 push 5 */
  push32((uint32_t)(0x5u));
  /* 10053644 push 5 */
  push32((uint32_t)(0x5u));
  /* 10053646 push 9 */
  push32((uint32_t)(0x9u));
  /* 10053648 jmp 0x10053650 */
  goto L_10053650;
L_1005364a:;
  /* 1005364a push 4 */
  push32((uint32_t)(0x4u));
  /* 1005364c push 4 */
  push32((uint32_t)(0x4u));
  /* 1005364e push 0xa */
  push32((uint32_t)(0xau));
L_10053650:;
  /* 10053650 call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x10053656u);
  /* 10053656 mov al, byte ptr [esp + 0x1e] */
  AL = (r8((uint32_t)(ESP + 0x1e)));
  /* 1005365a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005365d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1005365f mov edi, 0x15e */
  EDI = (0x15eu);
  /* 10053664 je 0x1005366b */
  if (C.zf) goto L_1005366b;
  /* 10053666 mov edi, 0x12c */
  EDI = (0x12cu);
L_1005366b:;
  /* 1005366b cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005366e jge 0x1005368c */
  if ((C.sf==C.of)) goto L_1005368c;
  /* 10053670 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053676 jle 0x1005368c */
  if ((C.zf||C.sf!=C.of)) goto L_1005368c;
  /* 10053678 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005367a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005367c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005367e push 0x1005c1a8 */
  push32((uint32_t)(0x1005c1a8u));
  /* 10053683 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053689u);
  /* 10053689 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005368c:;
  /* 1005368c cmp esi, 0xc8 */
  { uint32_t _a=(ESI),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053692 jle 0x100536cd */
  if ((C.zf||C.sf!=C.of)) goto L_100536cd;
  /* 10053694 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10053696 je 0x100536b2 */
  if (C.zf) goto L_100536b2;
  /* 10053698 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005369a push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 1005369f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100536a4 push 0x1005c1a8 */
  push32((uint32_t)(0x1005c1a8u));
  /* 100536a9 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100536afu);
  /* 100536af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100536b2:;
  /* 100536b2 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100536b8 jle 0x100536cd */
  if ((C.zf||C.sf!=C.of)) goto L_100536cd;
  /* 100536ba push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100536bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100536be push edi */
  push32((uint32_t)(EDI));
  /* 100536bf push 0x100596a0 */
  push32((uint32_t)(0x100596a0u));
  /* 100536c4 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100536cau);
  /* 100536ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100536cd:;
  /* 100536cd push 0x1005c288 */
  push32((uint32_t)(0x1005c288u));
  /* 100536d2 call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x100536d8u);
  /* 100536d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100536db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100536dd je 0x100536fe */
  if (C.zf) goto L_100536fe;
  /* 100536df cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100536e5 jle 0x100536fe */
  if ((C.zf||C.sf!=C.of)) goto L_100536fe;
  /* 100536e7 push 0x1005c2f0 */
  push32((uint32_t)(0x1005c2f0u));
  /* 100536ec call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100536f2u);
  /* 100536f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100536f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100536f7 jle 0x100536fe */
  if ((C.zf||C.sf!=C.of)) goto L_100536fe;
  /* 100536f9 call 0x10053230 */
  push32(0x100536feu); f_10053230();
L_100536fe:;
  /* 100536fe mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 10053702 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10053704 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053707 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10053709 jge 0x1005370f */
  if ((C.sf==C.of)) goto L_1005370f;
  /* 1005370b push 5 */
  push32((uint32_t)(0x5u));
  /* 1005370d jmp 0x10053713 */
  goto L_10053713;
L_1005370f:;
  /* 1005370f add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10053712 push eax */
  push32((uint32_t)(EAX));
L_10053713:;
  /* 10053713 push 0x1005bfa8 */
  push32((uint32_t)(0x1005bfa8u));
  /* 10053718 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x1005371eu);
  /* 1005371e mov edi, dword ptr [esp + 0x38] */
  EDI = (r32((uint32_t)(ESP + 0x38)));
  /* 10053722 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053725 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053728 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1005372a jge 0x10053740 */
  if ((C.sf==C.of)) goto L_10053740;
  /* 1005372c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1005372e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10053730 push 0x10059900 */
  push32((uint32_t)(0x10059900u));
  /* 10053735 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x1005373bu);
  /* 1005373b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005373e jmp 0x1005377a */
  goto L_1005377a;
L_10053740:;
  /* 10053740 lea ecx, [edi + 6] */
  ECX = ((uint32_t)(EDI + 0x6));
  /* 10053743 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10053745 push ecx */
  push32((uint32_t)(ECX));
  /* 10053746 push 0x10059900 */
  push32((uint32_t)(0x10059900u));
  /* 1005374b call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053751u);
  /* 10053751 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10053753 lea edx, [edi + 9] */
  EDX = ((uint32_t)(EDI + 0x9));
  /* 10053756 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10053758 push edx */
  push32((uint32_t)(EDX));
  /* 10053759 push 0x10059900 */
  push32((uint32_t)(0x10059900u));
  /* 1005375e call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053764u);
  /* 10053764 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10053766 add edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10053769 push 0xa */
  push32((uint32_t)(0xau));
  /* 1005376b push edi */
  push32((uint32_t)(EDI));
  /* 1005376c push 0x10059900 */
  push32((uint32_t)(0x10059900u));
  /* 10053771 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053777u);
  /* 10053777 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005377a:;
  /* 1005377a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1005377c push 0 */
  push32((uint32_t)(0x0u));
  /* 1005377e call 0x10052640 */
  push32(0x10053783u); f_10052640();
  /* 10053783 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10053788 je 0x100537e7 */
  if (C.zf) goto L_100537e7;
  /* 1005378a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1005378c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1005378e push 0x1005c300 */
  push32((uint32_t)(0x1005c300u));
  /* 10053793 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053799u);
  /* 10053799 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1005379b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1005379d push 0x1005c2e8 */
  push32((uint32_t)(0x1005c2e8u));
  /* 100537a2 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100537a8u);
  /* 100537a8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100537aa push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100537ac push 0x1005c2f8 */
  push32((uint32_t)(0x1005c2f8u));
  /* 100537b1 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100537b7u);
  /* 100537b7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100537b9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100537bb push 0x1005c2d8 */
  push32((uint32_t)(0x1005c2d8u));
  /* 100537c0 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100537c6u);
  /* 100537c6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100537c8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100537ca push 0x1005c2e0 */
  push32((uint32_t)(0x1005c2e0u));
  /* 100537cf call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100537d5u);
  /* 100537d5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100537d7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100537d9 push 0x1005c2d0 */
  push32((uint32_t)(0x1005c2d0u));
  /* 100537de call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100537e4u);
  /* 100537e4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100537e7:;
  /* 100537e7 push 0xa */
  push32((uint32_t)(0xau));
  /* 100537e9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100537eb push 3 */
  push32((uint32_t)(0x3u));
  /* 100537ed push 0x100598b8 */
  push32((uint32_t)(0x100598b8u));
  /* 100537f2 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100537f8u);
  /* 100537f8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100537fa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100537fc push 1 */
  push32((uint32_t)(0x1u));
  /* 100537fe push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 10053803 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053809u);
  /* 10053809 push 5 */
  push32((uint32_t)(0x5u));
  /* 1005380b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1005380d push 2 */
  push32((uint32_t)(0x2u));
  /* 1005380f push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 10053814 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x1005381au);
  /* 1005381a mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 1005381e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053821 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10053823 jne 0x10053839 */
  if (!C.zf) goto L_10053839;
  /* 10053825 push 5 */
  push32((uint32_t)(0x5u));
  /* 10053827 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10053829 push 3 */
  push32((uint32_t)(0x3u));
  /* 1005382b push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 10053830 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053836u);
  /* 10053836 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10053839:;
  /* 10053839 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005383b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005383d push 1 */
  push32((uint32_t)(0x1u));
  /* 1005383f push 0x1005c200 */
  push32((uint32_t)(0x1005c200u));
  /* 10053844 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x1005384au);
  /* 1005384a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005384c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005384e push 1 */
  push32((uint32_t)(0x1u));
  /* 10053850 push 0x1005c268 */
  push32((uint32_t)(0x1005c268u));
  /* 10053855 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x1005385bu);
  /* 1005385b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1005385d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1005385f push 1 */
  push32((uint32_t)(0x1u));
  /* 10053861 push 0x1005bfe8 */
  push32((uint32_t)(0x1005bfe8u));
  /* 10053866 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x1005386cu);
  /* 1005386c push 5 */
  push32((uint32_t)(0x5u));
  /* 1005386e push 0xa */
  push32((uint32_t)(0xau));
  /* 10053870 push 2 */
  push32((uint32_t)(0x2u));
  /* 10053872 push 0x1005c200 */
  push32((uint32_t)(0x1005c200u));
  /* 10053877 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x1005387du);
  /* 1005387d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053880 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053882 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10053884 push 1 */
  push32((uint32_t)(0x1u));
  /* 10053886 push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 1005388b call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053891u);
  /* 10053891 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10053893 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10053895 push 0x10059678 */
  push32((uint32_t)(0x10059678u));
  /* 1005389a call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100538a0u);
  /* 100538a0 push 0x1005bf38 */
  push32((uint32_t)(0x1005bf38u));
  /* 100538a5 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100538abu);
  /* 100538ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100538ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100538b0 jle 0x100538d7 */
  if ((C.zf||C.sf!=C.of)) goto L_100538d7;
  /* 100538b2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100538b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100538b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100538b8 push 0x10059890 */
  push32((uint32_t)(0x10059890u));
  /* 100538bd call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100538c3u);
  /* 100538c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100538c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100538c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100538c9 push 0x1005c110 */
  push32((uint32_t)(0x1005c110u));
  /* 100538ce call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100538d4u);
  /* 100538d4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100538d7:;
  /* 100538d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100538d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100538db push 1 */
  push32((uint32_t)(0x1u));
  /* 100538dd push 0x1005bf38 */
  push32((uint32_t)(0x1005bf38u));
  /* 100538e2 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100538e8u);
  /* 100538e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100538eb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100538ed jne 0x10053903 */
  if (!C.zf) goto L_10053903;
  /* 100538ef push 0xa */
  push32((uint32_t)(0xau));
  /* 100538f1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100538f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100538f5 push 0x1005c000 */
  push32((uint32_t)(0x1005c000u));
  /* 100538fa call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053900u);
  /* 10053900 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10053903:;
  /* 10053903 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053905 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053907 push 1 */
  push32((uint32_t)(0x1u));
  /* 10053909 push 0x10059630 */
  push32((uint32_t)(0x10059630u));
  /* 1005390e call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053914u);
  /* 10053914 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053917 cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005391a jle 0x10053930 */
  if ((C.zf||C.sf!=C.of)) goto L_10053930;
  /* 1005391c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1005391e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10053920 push 2 */
  push32((uint32_t)(0x2u));
  /* 10053922 push 0x1005bff0 */
  push32((uint32_t)(0x1005bff0u));
  /* 10053927 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x1005392du);
  /* 1005392d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10053930:;
  /* 10053930 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10053932 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053934 push 1 */
  push32((uint32_t)(0x1u));
  /* 10053936 push 0x1005c270 */
  push32((uint32_t)(0x1005c270u));
  /* 1005393b call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053941u);
  /* 10053941 push 5 */
  push32((uint32_t)(0x5u));
  /* 10053943 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10053945 push 2 */
  push32((uint32_t)(0x2u));
  /* 10053947 push 0x1005c270 */
  push32((uint32_t)(0x1005c270u));
  /* 1005394c call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053952u);
  /* 10053952 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10053954 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053956 push 0x1005c090 */
  push32((uint32_t)(0x1005c090u));
  /* 1005395b call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053961u);
  /* 10053961 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10053963 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053965 push 0x1005c048 */
  push32((uint32_t)(0x1005c048u));
  /* 1005396a call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053970u);
  /* 10053970 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10053972 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053974 push 0x1005c050 */
  push32((uint32_t)(0x1005c050u));
  /* 10053979 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005397fu);
  /* 1005397f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053982 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10053984 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053986 push 0x1005c058 */
  push32((uint32_t)(0x1005c058u));
  /* 1005398b call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053991u);
  /* 10053991 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10053993 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10053995 push 0x1005c288 */
  push32((uint32_t)(0x1005c288u));
  /* 1005399a call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100539a0u);
  /* 100539a0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100539a2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100539a4 push 0x1005c1d0 */
  push32((uint32_t)(0x1005c1d0u));
  /* 100539a9 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100539afu);
  /* 100539af push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100539b1 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100539b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100539b5 push 0x1005c2f0 */
  push32((uint32_t)(0x1005c2f0u));
  /* 100539ba call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100539c0u);
  /* 100539c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 100539c2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100539c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100539c6 push 0x1005c2f0 */
  push32((uint32_t)(0x1005c2f0u));
  /* 100539cb call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100539d1u);
  /* 100539d1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100539d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 100539d6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100539d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 100539da push 0x1005c2f0 */
  push32((uint32_t)(0x1005c2f0u));
  /* 100539df call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100539e5u);
  /* 100539e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100539e7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100539e9 push 5 */
  push32((uint32_t)(0x5u));
  /* 100539eb push 0x1005c2f0 */
  push32((uint32_t)(0x1005c2f0u));
  /* 100539f0 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100539f6u);
  /* 100539f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100539f8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100539fa push 0x10059970 */
  push32((uint32_t)(0x10059970u));
  /* 100539ff call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053a05u);
  /* 10053a05 call 0x10052630 */
  push32(0x10053a0au); f_10052630();
  /* 10053a0a push 0x1005c288 */
  push32((uint32_t)(0x1005c288u));
  /* 10053a0f mov edi, eax */
  EDI = (EAX);
  /* 10053a11 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10053a17u);
  /* 10053a17 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053a1a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10053a1c je 0x10053a3f */
  if (C.zf) goto L_10053a3f;
  /* 10053a1e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053a20 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053a22 push 0x10059970 */
  push32((uint32_t)(0x10059970u));
  /* 10053a27 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053a2du);
  /* 10053a2d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10053a2f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10053a31 push 0x10059888 */
  push32((uint32_t)(0x10059888u));
  /* 10053a36 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053a3cu);
  /* 10053a3c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10053a3f:;
  /* 10053a3f push 0x10059970 */
  push32((uint32_t)(0x10059970u));
  /* 10053a44 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10053a4au);
  /* 10053a4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053a4d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10053a4f je 0x10053a77 */
  if (C.zf) goto L_10053a77;
  /* 10053a51 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053a53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053a55 push 0x10059958 */
  push32((uint32_t)(0x10059958u));
  /* 10053a5a call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053a60u);
  /* 10053a60 push 0xa */
  push32((uint32_t)(0xau));
  /* 10053a62 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10053a64 push 0x10059898 */
  push32((uint32_t)(0x10059898u));
  /* 10053a69 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053a6fu);
  /* 10053a6f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053a72 call 0x10053320 */
  push32(0x10053a77u); f_10053320();
L_10053a77:;
  /* 10053a77 push 0x1005c0c8 */
  push32((uint32_t)(0x1005c0c8u));
  /* 10053a7c call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10053a82u);
  /* 10053a82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053a85 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10053a87 je 0x10053aae */
  if (C.zf) goto L_10053aae;
  /* 10053a89 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053a8b push 0xa */
  push32((uint32_t)(0xau));
  /* 10053a8d push 0xa */
  push32((uint32_t)(0xau));
  /* 10053a8f push 0x10059680 */
  push32((uint32_t)(0x10059680u));
  /* 10053a94 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053a9au);
  /* 10053a9a push 0xa */
  push32((uint32_t)(0xau));
  /* 10053a9c push 3 */
  push32((uint32_t)(0x3u));
  /* 10053a9e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10053aa0 push 0x10059680 */
  push32((uint32_t)(0x10059680u));
  /* 10053aa5 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053aabu);
  /* 10053aab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10053aae:;
  /* 10053aae push 0 */
  push32((uint32_t)(0x0u));
  /* 10053ab0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10053ab2 call 0x100525f0 */
  push32(0x10053ab7u); f_100525f0();
  /* 10053ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10053ab9 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053abfu);
  /* 10053abf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053ac2 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053ac7 jle 0x10053b0b */
  if ((C.zf||C.sf!=C.of)) goto L_10053b0b;
  /* 10053ac9 push 0x100597b8 */
  push32((uint32_t)(0x100597b8u));
  /* 10053ace call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10053ad4u);
  /* 10053ad4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053ad7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10053ad9 je 0x10053b0b */
  if (C.zf) goto L_10053b0b;
  /* 10053adb push 1 */
  push32((uint32_t)(0x1u));
  /* 10053add call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053ae3u);
  /* 10053ae3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053ae6 cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053aeb jge 0x10053b0b */
  if ((C.sf==C.of)) goto L_10053b0b;
  /* 10053aed push 0x10059970 */
  push32((uint32_t)(0x10059970u));
  /* 10053af2 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10053af8u);
  /* 10053af8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053afb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10053afd jne 0x10053b0b */
  if (!C.zf) goto L_10053b0b;
  /* 10053aff push 1 */
  push32((uint32_t)(0x1u));
  /* 10053b01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10053b03 call 0x100525f0 */
  push32(0x10053b08u); f_100525f0();
  /* 10053b08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10053b0b:;
  /* 10053b0b push 0x10059970 */
  push32((uint32_t)(0x10059970u));
  /* 10053b10 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10053b16u);
  /* 10053b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053b19 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10053b1b je 0x10053c9c */
  if (C.zf) goto L_10053c9c;
  /* 10053b21 push 0x1005c108 */
  push32((uint32_t)(0x1005c108u));
  /* 10053b26 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10053b2cu);
  /* 10053b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053b2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10053b31 je 0x10053c9c */
  if (C.zf) goto L_10053c9c;
  /* 10053b37 push 0x1005c1d0 */
  push32((uint32_t)(0x1005c1d0u));
  /* 10053b3c call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10053b42u);
  /* 10053b42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053b45 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10053b47 je 0x10053c9c */
  if (C.zf) goto L_10053c9c;
  /* 10053b4d cmp edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053b50 je 0x10053b57 */
  if (C.zf) goto L_10053b57;
  /* 10053b52 cmp edi, 0x12 */
  { uint32_t _a=(EDI),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053b55 jne 0x10053b87 */
  if (!C.zf) goto L_10053b87;
L_10053b57:;
  /* 10053b57 push 3 */
  push32((uint32_t)(0x3u));
  /* 10053b59 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053b5fu);
  /* 10053b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053b62 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053b67 jle 0x10053b87 */
  if ((C.zf||C.sf!=C.of)) goto L_10053b87;
  /* 10053b69 push 1 */
  push32((uint32_t)(0x1u));
  /* 10053b6b call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053b71u);
  /* 10053b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053b74 cmp eax, 0x2008 */
  { uint32_t _a=(EAX),_b=(0x2008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053b79 jge 0x10053b87 */
  if ((C.sf==C.of)) goto L_10053b87;
  /* 10053b7b push 1 */
  push32((uint32_t)(0x1u));
  /* 10053b7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10053b7f call 0x100525f0 */
  push32(0x10053b84u); f_100525f0();
  /* 10053b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10053b87:;
  /* 10053b87 push 0x1005c038 */
  push32((uint32_t)(0x1005c038u));
  /* 10053b8c call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10053b92u);
  /* 10053b92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053b95 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10053b97 jne 0x10053bc9 */
  if (!C.zf) goto L_10053bc9;
  /* 10053b99 push 3 */
  push32((uint32_t)(0x3u));
  /* 10053b9b call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053ba1u);
  /* 10053ba1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053ba4 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053ba9 jle 0x10053bc9 */
  if ((C.zf||C.sf!=C.of)) goto L_10053bc9;
  /* 10053bab push 1 */
  push32((uint32_t)(0x1u));
  /* 10053bad call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053bb3u);
  /* 10053bb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053bb6 cmp eax, 0x2af8 */
  { uint32_t _a=(EAX),_b=(0x2af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053bbb jge 0x10053bc9 */
  if ((C.sf==C.of)) goto L_10053bc9;
  /* 10053bbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10053bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 10053bc1 call 0x100525f0 */
  push32(0x10053bc6u); f_100525f0();
  /* 10053bc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10053bc9:;
  /* 10053bc9 push 0x1005c038 */
  push32((uint32_t)(0x1005c038u));
  /* 10053bce call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10053bd4u);
  /* 10053bd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053bd7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10053bd9 je 0x10053c9c */
  if (C.zf) goto L_10053c9c;
  /* 10053bdf cmp edi, 0x1c */
  { uint32_t _a=(EDI),_b=(0x1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053be2 jne 0x10053c22 */
  if (!C.zf) goto L_10053c22;
  /* 10053be4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10053be6 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053becu);
  /* 10053bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053bef cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053bf4 jle 0x10053cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10053cf7;
  /* 10053bfa push 4 */
  push32((uint32_t)(0x4u));
  /* 10053bfc call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053c02u);
  /* 10053c02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053c05 cmp eax, 0x1c84 */
  { uint32_t _a=(EAX),_b=(0x1c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053c0a jle 0x10053cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10053cf7;
  /* 10053c10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10053c12 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053c18u);
  /* 10053c18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053c1b cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053c20 jmp 0x10053c8c */
  goto L_10053c8c;
L_10053c22:;
  /* 10053c22 cmp edi, 0x28 */
  { uint32_t _a=(EDI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053c25 jne 0x10053c65 */
  if (!C.zf) goto L_10053c65;
  /* 10053c27 push 3 */
  push32((uint32_t)(0x3u));
  /* 10053c29 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053c2fu);
  /* 10053c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053c32 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053c37 jle 0x10053cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10053cf7;
  /* 10053c3d push 4 */
  push32((uint32_t)(0x4u));
  /* 10053c3f call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053c45u);
  /* 10053c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053c48 cmp eax, 0x2648 */
  { uint32_t _a=(EAX),_b=(0x2648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053c4d jle 0x10053cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10053cf7;
  /* 10053c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10053c55 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053c5bu);
  /* 10053c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053c5e cmp eax, 0x5dc0 */
  { uint32_t _a=(EAX),_b=(0x5dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053c63 jmp 0x10053c8c */
  goto L_10053c8c;
L_10053c65:;
  /* 10053c65 cmp edi, 0x37 */
  { uint32_t _a=(EDI),_b=(0x37u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053c68 jne 0x10053c9c */
  if (!C.zf) goto L_10053c9c;
  /* 10053c6a push 3 */
  push32((uint32_t)(0x3u));
  /* 10053c6c call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053c72u);
  /* 10053c72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053c75 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053c7a jle 0x10053cf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10053cf7;
  /* 10053c7c push 1 */
  push32((uint32_t)(0x1u));
  /* 10053c7e call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053c84u);
  /* 10053c84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053c87 cmp eax, 0x6590 */
  { uint32_t _a=(EAX),_b=(0x6590u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10053c8c:;
  /* 10053c8c jge 0x10053cf7 */
  if ((C.sf==C.of)) goto L_10053cf7;
  /* 10053c8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10053c90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10053c92 call 0x100525f0 */
  push32(0x10053c97u); f_100525f0();
  /* 10053c97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053c9a jmp 0x10053cf7 */
  goto L_10053cf7;
L_10053c9c:;
  /* 10053c9c cmp edi, 0x5f */
  { uint32_t _a=(EDI),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053c9f jne 0x10053cf7 */
  if (!C.zf) goto L_10053cf7;
  /* 10053ca1 push 0xa */
  push32((uint32_t)(0xau));
  /* 10053ca3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10053ca5 push 0x10059780 */
  push32((uint32_t)(0x10059780u));
  /* 10053caa call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053cb0u);
  /* 10053cb0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10053cb2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10053cb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10053cb6 push 0x1005c3b0 */
  push32((uint32_t)(0x1005c3b0u));
  /* 10053cbb call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053cc1u);
  /* 10053cc1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10053cc3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10053cc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10053cc7 push 0x1005c3b0 */
  push32((uint32_t)(0x1005c3b0u));
  /* 10053ccc call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053cd2u);
  /* 10053cd2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10053cd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10053cd6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10053cd8 push 0x1005c3b0 */
  push32((uint32_t)(0x1005c3b0u));
  /* 10053cdd call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053ce3u);
  /* 10053ce3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10053ce5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10053ce7 push 5 */
  push32((uint32_t)(0x5u));
  /* 10053ce9 push 0x1005c3b0 */
  push32((uint32_t)(0x1005c3b0u));
  /* 10053cee call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053cf4u);
  /* 10053cf4 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10053cf7:;
  /* 10053cf7 cmp ebp, 0x50 */
  { uint32_t _a=(EBP),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053cfa jle 0x10053d53 */
  if ((C.zf||C.sf!=C.of)) goto L_10053d53;
  /* 10053cfc mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 10053d00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10053d02 je 0x10053d53 */
  if (C.zf) goto L_10053d53;
  /* 10053d04 push 0xa */
  push32((uint32_t)(0xau));
  /* 10053d06 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10053d08 push 1 */
  push32((uint32_t)(0x1u));
  /* 10053d0a push 0x100598f0 */
  push32((uint32_t)(0x100598f0u));
  /* 10053d0f call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053d15u);
  /* 10053d15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053d18 cmp ebp, 0x5f */
  { uint32_t _a=(EBP),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053d1b jle 0x10053d53 */
  if ((C.zf||C.sf!=C.of)) goto L_10053d53;
  /* 10053d1d push 0xa */
  push32((uint32_t)(0xau));
  /* 10053d1f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10053d21 push 2 */
  push32((uint32_t)(0x2u));
  /* 10053d23 push 0x100598f0 */
  push32((uint32_t)(0x100598f0u));
  /* 10053d28 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053d2eu);
  /* 10053d2e push 0xa */
  push32((uint32_t)(0xau));
  /* 10053d30 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10053d32 push 3 */
  push32((uint32_t)(0x3u));
  /* 10053d34 push 0x100598f0 */
  push32((uint32_t)(0x100598f0u));
  /* 10053d39 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053d3fu);
  /* 10053d3f push 0xa */
  push32((uint32_t)(0xau));
  /* 10053d41 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10053d43 push 4 */
  push32((uint32_t)(0x4u));
  /* 10053d45 push 0x100598f0 */
  push32((uint32_t)(0x100598f0u));
  /* 10053d4a call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053d50u);
  /* 10053d50 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10053d53:;
  /* 10053d53 mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
  /* 10053d57 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10053d59 je 0x10053d97 */
  if (C.zf) goto L_10053d97;
  /* 10053d5b push 0x1005c288 */
  push32((uint32_t)(0x1005c288u));
  /* 10053d60 call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10053d66u);
  /* 10053d66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053d69 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10053d6b je 0x10053d97 */
  if (C.zf) goto L_10053d97;
  /* 10053d6d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10053d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10053d71 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10053d73 push 0x1005c178 */
  push32((uint32_t)(0x1005c178u));
  /* 10053d78 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053d7eu);
  /* 10053d7e push 0x1005c1b0 */
  push32((uint32_t)(0x1005c1b0u));
  /* 10053d83 call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10053d89u);
  /* 10053d89 push 0x1005c0c8 */
  push32((uint32_t)(0x1005c0c8u));
  /* 10053d8e call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10053d94u);
  /* 10053d94 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10053d97:;
  /* 10053d97 push 0x10059630 */
  push32((uint32_t)(0x10059630u));
  /* 10053d9c call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10053da2u);
  /* 10053da2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053da4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053da6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10053da8 push 0x1005c208 */
  push32((uint32_t)(0x1005c208u));
  /* 10053dad call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053db3u);
  /* 10053db3 push 0x1005c108 */
  push32((uint32_t)(0x1005c108u));
  /* 10053db8 call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10053dbeu);
  /* 10053dbe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053dc1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10053dc3 je 0x10053dd9 */
  if (C.zf) goto L_10053dd9;
  /* 10053dc5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053dc7 push 0xa */
  push32((uint32_t)(0xau));
  /* 10053dc9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10053dcb push 0x1005c208 */
  push32((uint32_t)(0x1005c208u));
  /* 10053dd0 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053dd6u);
  /* 10053dd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10053dd9:;
  /* 10053dd9 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10053ddb je 0x10053ec5 */
  if (C.zf) goto L_10053ec5;
  /* 10053de1 push 0x1005c288 */
  push32((uint32_t)(0x1005c288u));
  /* 10053de6 call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10053decu);
  /* 10053dec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053def test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10053df1 je 0x10053ec5 */
  if (C.zf) goto L_10053ec5;
  /* 10053df7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10053df9 jne 0x10053e31 */
  if (!C.zf) goto L_10053e31;
  /* 10053dfb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10053dfd push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053dff push 2 */
  push32((uint32_t)(0x2u));
  /* 10053e01 push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10053e06 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053e0cu);
  /* 10053e0c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10053e0e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053e10 push 3 */
  push32((uint32_t)(0x3u));
  /* 10053e12 push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10053e17 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053e1du);
  /* 10053e1d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10053e1f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053e21 push 4 */
  push32((uint32_t)(0x4u));
  /* 10053e23 push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10053e28 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053e2eu);
  /* 10053e2e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10053e31:;
  /* 10053e31 push 0x1005c0f8 */
  push32((uint32_t)(0x1005c0f8u));
  /* 10053e36 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10053e3cu);
  /* 10053e3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053e3f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053e42 jle 0x10053e65 */
  if ((C.zf||C.sf!=C.of)) goto L_10053e65;
  /* 10053e44 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10053e46 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053e48 push 0x1005c220 */
  push32((uint32_t)(0x1005c220u));
  /* 10053e4d call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053e53u);
  /* 10053e53 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10053e55 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10053e57 push 0x1005c228 */
  push32((uint32_t)(0x1005c228u));
  /* 10053e5c call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053e62u);
  /* 10053e62 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10053e65:;
  /* 10053e65 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053e67 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10053e69 push 0x1005c108 */
  push32((uint32_t)(0x1005c108u));
  /* 10053e6e call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053e74u);
  /* 10053e74 push 0x10059920 */
  push32((uint32_t)(0x10059920u));
  /* 10053e79 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10053e7fu);
  /* 10053e7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053e82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10053e84 je 0x10053ec5 */
  if (C.zf) goto L_10053ec5;
  /* 10053e86 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053e88 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053e8a push 0x1005c180 */
  push32((uint32_t)(0x1005c180u));
  /* 10053e8f call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053e95u);
  /* 10053e95 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053e97 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053e99 push 0x1005c190 */
  push32((uint32_t)(0x1005c190u));
  /* 10053e9e call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053ea4u);
  /* 10053ea4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053ea6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10053ea8 push 0x1005c198 */
  push32((uint32_t)(0x1005c198u));
  /* 10053ead call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053eb3u);
  /* 10053eb3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053eb5 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10053eb7 push 0x1005c188 */
  push32((uint32_t)(0x1005c188u));
  /* 10053ebc call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053ec2u);
  /* 10053ec2 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10053ec5:;
  /* 10053ec5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10053ec7 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10053ec9 push 0x100597b8 */
  push32((uint32_t)(0x100597b8u));
  /* 10053ece call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053ed4u);
  /* 10053ed4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053ed6 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10053ed8 push 0x100598f8 */
  push32((uint32_t)(0x100598f8u));
  /* 10053edd call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053ee3u);
  /* 10053ee3 push 0x1005c268 */
  push32((uint32_t)(0x1005c268u));
  /* 10053ee8 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10053eeeu);
  /* 10053eee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053ef1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053ef4 jle 0x10053f31 */
  if ((C.zf||C.sf!=C.of)) goto L_10053f31;
  /* 10053ef6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10053efa cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053eff jle 0x10053f31 */
  if ((C.zf||C.sf!=C.of)) goto L_10053f31;
  /* 10053f01 lea ecx, [eax - 0x32] */
  ECX = ((uint32_t)(EAX + -0x32));
  /* 10053f04 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10053f08 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10053f0b cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053f0d jge 0x10053f26 */
  if ((C.sf==C.of)) goto L_10053f26;
  /* 10053f0f push 0xa */
  push32((uint32_t)(0xau));
  /* 10053f11 push 0xa */
  push32((uint32_t)(0xau));
  /* 10053f13 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10053f18 push 0x1005c0f8 */
  push32((uint32_t)(0x1005c0f8u));
  /* 10053f1d call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053f23u);
  /* 10053f23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10053f26:;
  /* 10053f26 call 0x100532d0 */
  push32(0x10053f2bu); f_100532d0();
  /* 10053f2b jmp 0x10053f31 */
  goto L_10053f31;
L_10053f2d:;
  /* 10053f2d mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
L_10053f31:;
  /* 10053f31 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10053f33 je 0x10053f76 */
  if (C.zf) goto L_10053f76;
  /* 10053f35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053f37 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10053f39 push 0x10059648 */
  push32((uint32_t)(0x10059648u));
  /* 10053f3e call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053f44u);
  /* 10053f44 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053f46 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10053f48 push 0x10059720 */
  push32((uint32_t)(0x10059720u));
  /* 10053f4d call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053f53u);
  /* 10053f53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053f55 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10053f57 push 0x10059640 */
  push32((uint32_t)(0x10059640u));
  /* 10053f5c call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053f62u);
  /* 10053f62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053f64 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10053f66 push 2 */
  push32((uint32_t)(0x2u));
  /* 10053f68 push 0x1005c268 */
  push32((uint32_t)(0x1005c268u));
  /* 10053f6d call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10053f73u);
  /* 10053f73 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10053f76:;
  /* 10053f76 push 0x100597b8 */
  push32((uint32_t)(0x100597b8u));
  /* 10053f7b call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10053f81u);
  /* 10053f81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053f84 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10053f86 je 0x10053fa9 */
  if (C.zf) goto L_10053fa9;
  /* 10053f88 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053f8a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10053f8c push 0x1005c210 */
  push32((uint32_t)(0x1005c210u));
  /* 10053f91 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053f97u);
  /* 10053f97 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10053f99 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10053f9b push 0x1005c218 */
  push32((uint32_t)(0x1005c218u));
  /* 10053fa0 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10053fa6u);
  /* 10053fa6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10053fa9:;
  /* 10053fa9 push 0x10059890 */
  push32((uint32_t)(0x10059890u));
  /* 10053fae call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10053fb4u);
  /* 10053fb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053fb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10053fb9 je 0x10054223 */
  if (C.zf) goto L_10054223;
  /* 10053fbf push 0x1005bf38 */
  push32((uint32_t)(0x1005bf38u));
  /* 10053fc4 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10053fcau);
  /* 10053fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10053fcf je 0x1005402a */
  if (C.zf) goto L_1005402a;
  /* 10053fd1 push 0x1005c288 */
  push32((uint32_t)(0x1005c288u));
  /* 10053fd6 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10053fdcu);
  /* 10053fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053fdf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10053fe1 jne 0x1005402a */
  if (!C.zf) goto L_1005402a;
  /* 10053fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10053fe5 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053febu);
  /* 10053feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10053fee cmp eax, 0x320 */
  { uint32_t _a=(EAX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10053ff3 jle 0x1005402a */
  if ((C.zf||C.sf!=C.of)) goto L_1005402a;
  /* 10053ff5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10053ff7 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10053ffdu);
  /* 10053ffd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054000 cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054005 jge 0x1005402a */
  if ((C.sf==C.of)) goto L_1005402a;
  /* 10054007 push 4 */
  push32((uint32_t)(0x4u));
  /* 10054009 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x1005400fu);
  /* 1005400f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054012 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054017 jle 0x1005402a */
  if ((C.zf||C.sf!=C.of)) goto L_1005402a;
  /* 10054019 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1005401e push 3 */
  push32((uint32_t)(0x3u));
  /* 10054020 push 4 */
  push32((uint32_t)(0x4u));
  /* 10054022 call 0x10052610 */
  push32(0x10054027u); f_10052610();
  /* 10054027 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005402a:;
  /* 1005402a push 3 */
  push32((uint32_t)(0x3u));
  /* 1005402c call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10054032u);
  /* 10054032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054035 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005403a jge 0x1005405f */
  if ((C.sf==C.of)) goto L_1005405f;
  /* 1005403c push 2 */
  push32((uint32_t)(0x2u));
  /* 1005403e call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10054044u);
  /* 10054044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054047 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005404c jle 0x1005405f */
  if ((C.zf||C.sf!=C.of)) goto L_1005405f;
  /* 1005404e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10054053 push 3 */
  push32((uint32_t)(0x3u));
  /* 10054055 push 2 */
  push32((uint32_t)(0x2u));
  /* 10054057 call 0x10052610 */
  push32(0x1005405cu); f_10052610();
  /* 1005405c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005405f:;
  /* 1005405f push 0x1005c210 */
  push32((uint32_t)(0x1005c210u));
  /* 10054064 call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x1005406au);
  /* 1005406a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005406d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1005406f je 0x10054197 */
  if (C.zf) goto L_10054197;
  /* 10054075 push 0x1005c218 */
  push32((uint32_t)(0x1005c218u));
  /* 1005407a call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10054080u);
  /* 10054080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054083 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10054085 je 0x10054197 */
  if (C.zf) goto L_10054197;
  /* 1005408b push 2 */
  push32((uint32_t)(0x2u));
  /* 1005408d call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10054093u);
  /* 10054093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054096 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005409b jle 0x100540ae */
  if ((C.zf||C.sf!=C.of)) goto L_100540ae;
  /* 1005409d push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 100540a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100540a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100540a6 call 0x10052610 */
  push32(0x100540abu); f_10052610();
  /* 100540ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100540ae:;
  /* 100540ae push 0 */
  push32((uint32_t)(0x0u));
  /* 100540b0 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100540b6u);
  /* 100540b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100540b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100540bb je 0x100541ba */
  if (C.zf) goto L_100541ba;
  /* 100540c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100540c3 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100540c9u);
  /* 100540c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100540cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100540ce je 0x1005413b */
  if (C.zf) goto L_1005413b;
  /* 100540d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100540d2 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100540d8u);
  /* 100540d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100540db cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100540e0 jge 0x1005413b */
  if ((C.sf==C.of)) goto L_1005413b;
  /* 100540e2 push 4 */
  push32((uint32_t)(0x4u));
  /* 100540e4 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100540eau);
  /* 100540ea push 5 */
  push32((uint32_t)(0x5u));
  /* 100540ec mov esi, eax */
  ESI = (EAX);
  /* 100540ee call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100540f4u);
  /* 100540f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100540f7 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100540f9 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 100540fe jge 0x1005411f */
  if ((C.sf==C.of)) goto L_1005411f;
  /* 10054100 push 5 */
  push32((uint32_t)(0x5u));
  /* 10054102 push 2 */
  push32((uint32_t)(0x2u));
  /* 10054104 call 0x10052610 */
  push32(0x10054109u); f_10052610();
  /* 10054109 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1005410e push 4 */
  push32((uint32_t)(0x4u));
  /* 10054110 push 2 */
  push32((uint32_t)(0x2u));
  /* 10054112 call 0x10052610 */
  push32(0x10054117u); f_10052610();
  /* 10054117 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005411a jmp 0x100541ba */
  goto L_100541ba;
L_1005411f:;
  /* 1005411f push 4 */
  push32((uint32_t)(0x4u));
  /* 10054121 push 2 */
  push32((uint32_t)(0x2u));
  /* 10054123 call 0x10052610 */
  push32(0x10054128u); f_10052610();
  /* 10054128 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1005412d push 5 */
  push32((uint32_t)(0x5u));
  /* 1005412f push 2 */
  push32((uint32_t)(0x2u));
  /* 10054131 call 0x10052610 */
  push32(0x10054136u); f_10052610();
  /* 10054136 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054139 jmp 0x100541ba */
  goto L_100541ba;
L_1005413b:;
  /* 1005413b push 5 */
  push32((uint32_t)(0x5u));
  /* 1005413d call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10054143u);
  /* 10054143 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054146 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005414b jge 0x1005416d */
  if ((C.sf==C.of)) goto L_1005416d;
  /* 1005414d push 0 */
  push32((uint32_t)(0x0u));
  /* 1005414f call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10054155u);
  /* 10054155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054158 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005415a je 0x1005416d */
  if (C.zf) goto L_1005416d;
  /* 1005415c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10054161 push 5 */
  push32((uint32_t)(0x5u));
  /* 10054163 push 2 */
  push32((uint32_t)(0x2u));
  /* 10054165 call 0x10052610 */
  push32(0x1005416au); f_10052610();
  /* 1005416a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005416d:;
  /* 1005416d push 5 */
  push32((uint32_t)(0x5u));
  /* 1005416f call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10054175u);
  /* 10054175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054178 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005417d jge 0x100541ba */
  if ((C.sf==C.of)) goto L_100541ba;
  /* 1005417f push 0 */
  push32((uint32_t)(0x0u));
  /* 10054181 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10054187u);
  /* 10054187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005418a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005418c je 0x100541ba */
  if (C.zf) goto L_100541ba;
  /* 1005418e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10054193 push 5 */
  push32((uint32_t)(0x5u));
  /* 10054195 jmp 0x100541b0 */
  goto L_100541b0;
L_10054197:;
  /* 10054197 push 2 */
  push32((uint32_t)(0x2u));
  /* 10054199 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x1005419fu);
  /* 1005419f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100541a2 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100541a7 jle 0x100541ba */
  if ((C.zf||C.sf!=C.of)) goto L_100541ba;
  /* 100541a9 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 100541ae push 1 */
  push32((uint32_t)(0x1u));
L_100541b0:;
  /* 100541b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 100541b2 call 0x10052610 */
  push32(0x100541b7u); f_10052610();
  /* 100541b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100541ba:;
  /* 100541ba push 0 */
  push32((uint32_t)(0x0u));
  /* 100541bc call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100541c2u);
  /* 100541c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100541c5 cmp eax, 0x249f0 */
  { uint32_t _a=(EAX),_b=(0x249f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100541ca jle 0x100541dd */
  if ((C.zf||C.sf!=C.of)) goto L_100541dd;
  /* 100541cc push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 100541d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100541d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 100541d5 call 0x10052610 */
  push32(0x100541dau); f_10052610();
  /* 100541da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100541dd:;
  /* 100541dd push 4 */
  push32((uint32_t)(0x4u));
  /* 100541df call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100541e5u);
  /* 100541e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100541e8 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100541ed jle 0x10054200 */
  if ((C.zf||C.sf!=C.of)) goto L_10054200;
  /* 100541ef push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 100541f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100541f6 push 4 */
  push32((uint32_t)(0x4u));
  /* 100541f8 call 0x10052610 */
  push32(0x100541fdu); f_10052610();
  /* 100541fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054200:;
  /* 10054200 push 5 */
  push32((uint32_t)(0x5u));
  /* 10054202 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10054208u);
  /* 10054208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005420b cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054210 jle 0x10054223 */
  if ((C.zf||C.sf!=C.of)) goto L_10054223;
  /* 10054212 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10054217 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054219 push 5 */
  push32((uint32_t)(0x5u));
  /* 1005421b call 0x10052610 */
  push32(0x10054220u); f_10052610();
  /* 10054220 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054223:;
  /* 10054223 pop edi */
  EDI = (pop32());
  /* 10054224 pop esi */
  ESI = (pop32());
  /* 10054225 pop ebp */
  EBP = (pop32());
  /* 10054226 pop ebx */
  EBX = (pop32());
  /* 10054227 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005422a ret  */
  ESPCHK(0x10053360u, _esp0);
  ESP += 4; return;
}

/* FUN_10004230 @ 0x10054230 (209 bytes, 56 insns) */
void f_10054230(void) {
  FTRACE(0x10054230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10054230 push 3 */
  push32((uint32_t)(0x3u));
  /* 10054232 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10054238u);
  /* 10054238 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005423b cmp eax, 0x672 */
  { uint32_t _a=(EAX),_b=(0x672u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054240 jle 0x10054300 */
  if ((C.zf||C.sf!=C.of)) goto L_10054300;
  /* 10054246 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054248 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1005424a push 0x1005c368 */
  push32((uint32_t)(0x1005c368u));
  /* 1005424f call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054255u);
  /* 10054255 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054257 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054259 push 0x1005c370 */
  push32((uint32_t)(0x1005c370u));
  /* 1005425e call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054264u);
  /* 10054264 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054266 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054268 push 0x1005c358 */
  push32((uint32_t)(0x1005c358u));
  /* 1005426d call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054273u);
  /* 10054273 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054275 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054277 push 0x1005c360 */
  push32((uint32_t)(0x1005c360u));
  /* 1005427c call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054282u);
  /* 10054282 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054284 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054286 push 0x1005c378 */
  push32((uint32_t)(0x1005c378u));
  /* 1005428b call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054291u);
  /* 10054291 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054293 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054295 push 0x1005c2b0 */
  push32((uint32_t)(0x1005c2b0u));
  /* 1005429a call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100542a0u);
  /* 100542a0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100542a3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100542a5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100542a7 push 0x1005c298 */
  push32((uint32_t)(0x1005c298u));
  /* 100542ac call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100542b2u);
  /* 100542b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100542b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100542b6 push 0x1005c2a0 */
  push32((uint32_t)(0x1005c2a0u));
  /* 100542bb call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100542c1u);
  /* 100542c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100542c3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100542c5 push 0x1005c2b8 */
  push32((uint32_t)(0x1005c2b8u));
  /* 100542ca call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100542d0u);
  /* 100542d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100542d2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100542d4 push 0x1005c2c0 */
  push32((uint32_t)(0x1005c2c0u));
  /* 100542d9 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100542dfu);
  /* 100542df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100542e1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100542e3 push 0x1005c278 */
  push32((uint32_t)(0x1005c278u));
  /* 100542e8 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100542eeu);
  /* 100542ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100542f0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100542f2 push 0x1005bfe0 */
  push32((uint32_t)(0x1005bfe0u));
  /* 100542f7 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100542fdu);
  /* 100542fd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054300:;
  /* 10054300 ret  */
  ESPCHK(0x10054230u, _esp0);
  ESP += 4; return;
}

/* FUN_10004310 @ 0x10054310 (79 bytes, 22 insns) */
void f_10054310(void) {
  FTRACE(0x10054310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10054310 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054312 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054314 push 0x10059928 */
  push32((uint32_t)(0x10059928u));
  /* 10054319 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005431fu);
  /* 1005431f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054321 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054323 push 0x10059930 */
  push32((uint32_t)(0x10059930u));
  /* 10054328 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005432eu);
  /* 1005432e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054330 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054332 push 0x10059920 */
  push32((uint32_t)(0x10059920u));
  /* 10054337 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005433du);
  /* 1005433d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005433f push 0xa */
  push32((uint32_t)(0xau));
  /* 10054341 push 0x1005bf90 */
  push32((uint32_t)(0x1005bf90u));
  /* 10054346 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005434cu);
  /* 1005434c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005434e push 0xa */
  push32((uint32_t)(0xau));
  /* 10054350 push 0x1005bf80 */
  push32((uint32_t)(0x1005bf80u));
  /* 10054355 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005435bu);
  /* 1005435b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005435e ret  */
  ESPCHK(0x10054310u, _esp0);
  ESP += 4; return;
}

/* FUN_10004360 @ 0x10054360 (127 bytes, 35 insns) */
void f_10054360(void) {
  FTRACE(0x10054360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10054360 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054362 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10054364 push 0x1005c1f0 */
  push32((uint32_t)(0x1005c1f0u));
  /* 10054369 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005436fu);
  /* 1005436f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054371 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10054373 push 0x1005c1e8 */
  push32((uint32_t)(0x1005c1e8u));
  /* 10054378 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005437eu);
  /* 1005437e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054380 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10054382 push 0x1005c1b8 */
  push32((uint32_t)(0x1005c1b8u));
  /* 10054387 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005438du);
  /* 1005438d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1005438f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10054391 push 0x1005c1b0 */
  push32((uint32_t)(0x1005c1b0u));
  /* 10054396 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005439cu);
  /* 1005439c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1005439e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100543a0 push 0x1005c0b0 */
  push32((uint32_t)(0x1005c0b0u));
  /* 100543a5 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100543abu);
  /* 100543ab push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100543ad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100543af push 0x1005c0b8 */
  push32((uint32_t)(0x1005c0b8u));
  /* 100543b4 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100543bau);
  /* 100543ba add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100543bd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100543bf push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100543c1 push 0x1005c0c0 */
  push32((uint32_t)(0x1005c0c0u));
  /* 100543c6 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100543ccu);
  /* 100543cc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100543ce push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100543d0 push 0x1005c0c8 */
  push32((uint32_t)(0x1005c0c8u));
  /* 100543d5 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100543dbu);
  /* 100543db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100543de ret  */
  ESPCHK(0x10054360u, _esp0);
  ESP += 4; return;
}

/* ProcessMiddleSeaAI @ 0x100543e0 (3643 bytes, 1035 insns) */
void f_100543e0(void) {
  FTRACE(0x100543e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100543e0 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100543e3 push ebx */
  push32((uint32_t)(EBX));
  /* 100543e4 push ebp */
  push32((uint32_t)(EBP));
  /* 100543e5 push esi */
  push32((uint32_t)(ESI));
  /* 100543e6 push edi */
  push32((uint32_t)(EDI));
  /* 100543e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100543e9 call 0x10052760 */
  push32(0x100543eeu); f_10052760();
  /* 100543ee push 0x10058010 */
  push32((uint32_t)(0x10058010u));
  /* 100543f3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100543f5 call dword ptr [0x1005c524] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c524))), 0x100543fbu);
  /* 100543fb push 0x1005c1a8 */
  push32((uint32_t)(0x1005c1a8u));
  /* 10054400 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10054406u);
  /* 10054406 push 3 */
  push32((uint32_t)(0x3u));
  /* 10054408 mov ebx, eax */
  EBX = (EAX);
  /* 1005440a call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10054410u);
  /* 10054410 mov ebp, eax */
  EBP = (EAX);
  /* 10054412 push 0x1005c1d0 */
  push32((uint32_t)(0x1005c1d0u));
  /* 10054417 mov dword ptr [esp + 0x30], ebp */
  w32((uint32_t)(ESP + 0x30), (EBP));
  /* 1005441b call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10054421u);
  /* 10054421 push 0x100596a0 */
  push32((uint32_t)(0x100596a0u));
  /* 10054426 mov byte ptr [esp + 0x2f], al */
  w8((uint32_t)(ESP + 0x2f), (AL));
  /* 1005442a call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10054430u);
  /* 10054430 push 0x1005c038 */
  push32((uint32_t)(0x1005c038u));
  /* 10054435 call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x1005443bu);
  /* 1005443b push 0x1005c0f8 */
  push32((uint32_t)(0x1005c0f8u));
  /* 10054440 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10054446u);
  /* 10054446 push 0x1005c3c8 */
  push32((uint32_t)(0x1005c3c8u));
  /* 1005444b call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10054451u);
  /* 10054451 push 0x1005c348 */
  push32((uint32_t)(0x1005c348u));
  /* 10054456 mov esi, eax */
  ESI = (EAX);
  /* 10054458 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x1005445eu);
  /* 1005445e push 0x100596a0 */
  push32((uint32_t)(0x100596a0u));
  /* 10054463 mov edi, eax */
  EDI = (EAX);
  /* 10054465 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x1005446bu);
  /* 1005446b add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1005446d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054470 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10054472 mov byte ptr [esp + 0x12], 1 */
  w8((uint32_t)(ESP + 0x12), (0x1u));
  /* 10054477 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 1005447b call 0x10052660 */
  push32(0x10054480u); f_10052660();
  /* 10054480 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10054482 jle 0x10054498 */
  if ((C.zf||C.sf!=C.of)) goto L_10054498;
  /* 10054484 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10054486 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10054488 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1005448a push 0x1005c340 */
  push32((uint32_t)(0x1005c340u));
  /* 1005448f call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054495u);
  /* 10054495 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054498:;
  /* 10054498 push 0x100598f0 */
  push32((uint32_t)(0x100598f0u));
  /* 1005449d call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x100544a3u);
  /* 100544a3 push 0x100598f0 */
  push32((uint32_t)(0x100598f0u));
  /* 100544a8 mov esi, eax */
  ESI = (EAX);
  /* 100544aa call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100544b0u);
  /* 100544b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100544b3 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100544b5 je 0x100544bc */
  if (C.zf) goto L_100544bc;
  /* 100544b7 mov byte ptr [esp + 0x12], 0 */
  w8((uint32_t)(ESP + 0x12), (0x0u));
L_100544bc:;
  /* 100544bc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100544be je 0x10055213 */
  if (C.zf) goto L_10055213;
  /* 100544c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100544c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100544c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100544ca push 0x1005bff0 */
  push32((uint32_t)(0x1005bff0u));
  /* 100544cf call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100544d5u);
  /* 100544d5 push 0x1005bff0 */
  push32((uint32_t)(0x1005bff0u));
  /* 100544da call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100544e0u);
  /* 100544e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100544e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100544e5 je 0x10055213 */
  if (C.zf) goto L_10055213;
  /* 100544eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100544ed push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100544ef push 0x1005c390 */
  push32((uint32_t)(0x1005c390u));
  /* 100544f4 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100544fau);
  /* 100544fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100544fd call dword ptr [0x1005c588] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c588))), 0x10054503u);
  /* 10054503 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10054505 jne 0x1005455c */
  if (!C.zf) goto L_1005455c;
  /* 10054507 cmp ebp, 0x2bc */
  { uint32_t _a=(EBP),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005450d jle 0x10054534 */
  if ((C.zf||C.sf!=C.of)) goto L_10054534;
  /* 1005450f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054511 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054513 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054515 push 0x1005c1a8 */
  push32((uint32_t)(0x1005c1a8u));
  /* 1005451a call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054520u);
  /* 10054520 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054522 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054524 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054526 push 0x100596a0 */
  push32((uint32_t)(0x100596a0u));
  /* 1005452b call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054531u);
  /* 10054531 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054534:;
  /* 10054534 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005453a jle 0x10054548 */
  if ((C.zf||C.sf!=C.of)) goto L_10054548;
  /* 1005453c cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054541 jle 0x10054548 */
  if ((C.zf||C.sf!=C.of)) goto L_10054548;
  /* 10054543 call 0x10054230 */
  push32(0x10054548u); f_10054230();
L_10054548:;
  /* 10054548 push 1 */
  push32((uint32_t)(0x1u));
  /* 1005454a push 1 */
  push32((uint32_t)(0x1u));
  /* 1005454c push 0 */
  push32((uint32_t)(0x0u));
  /* 1005454e call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x10054554u);
  /* 10054554 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054557 jmp 0x1005461f */
  goto L_1005461f;
L_1005455c:;
  /* 1005455c mov eax, dword ptr [0x1005c5ac] */
  EAX = (r32((uint32_t)(0x1005c5ac)));
  /* 10054561 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10054564 je 0x10054578 */
  if (C.zf) goto L_10054578;
  /* 10054566 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10054567 je 0x10054572 */
  if (C.zf) goto L_10054572;
  /* 10054569 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1005456a jne 0x100545a4 */
  if (!C.zf) goto L_100545a4;
  /* 1005456c push 9 */
  push32((uint32_t)(0x9u));
  /* 1005456e push 4 */
  push32((uint32_t)(0x4u));
  /* 10054570 jmp 0x10054599 */
  goto L_10054599;
L_10054572:;
  /* 10054572 push 4 */
  push32((uint32_t)(0x4u));
  /* 10054574 push 9 */
  push32((uint32_t)(0x9u));
  /* 10054576 jmp 0x10054599 */
  goto L_10054599;
L_10054578:;
  /* 10054578 cmp ebp, 0x2ee0 */
  { uint32_t _a=(EBP),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005457e jle 0x1005458f */
  if ((C.zf||C.sf!=C.of)) goto L_1005458f;
  /* 10054580 push 6 */
  push32((uint32_t)(0x6u));
  /* 10054582 push 6 */
  push32((uint32_t)(0x6u));
  /* 10054584 push 9 */
  push32((uint32_t)(0x9u));
  /* 10054586 call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x1005458cu);
  /* 1005458c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005458f:;
  /* 1005458f push 5 */
  push32((uint32_t)(0x5u));
  /* 10054591 cmp ebp, 0x1f40 */
  { uint32_t _a=(EBP),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054597 push 5 */
  push32((uint32_t)(0x5u));
L_10054599:;
  /* 10054599 push 9 */
  push32((uint32_t)(0x9u));
  /* 1005459b call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x100545a1u);
  /* 100545a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100545a4:;
  /* 100545a4 mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 100545a8 mov esi, 0x1c2 */
  ESI = (0x1c2u);
  /* 100545ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100545af je 0x100545b6 */
  if (C.zf) goto L_100545b6;
  /* 100545b1 mov esi, 0x17c */
  ESI = (0x17cu);
L_100545b6:;
  /* 100545b6 cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100545b9 jge 0x100545d7 */
  if ((C.sf==C.of)) goto L_100545d7;
  /* 100545bb cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100545c1 jle 0x10054613 */
  if ((C.zf||C.sf!=C.of)) goto L_10054613;
  /* 100545c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100545c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100545c7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100545c9 push 0x1005c1a8 */
  push32((uint32_t)(0x1005c1a8u));
  /* 100545ce call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100545d4u);
  /* 100545d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100545d7:;
  /* 100545d7 cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100545dd jle 0x10054613 */
  if ((C.zf||C.sf!=C.of)) goto L_10054613;
  /* 100545df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100545e1 push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 100545e6 push esi */
  push32((uint32_t)(ESI));
  /* 100545e7 push 0x1005c1a8 */
  push32((uint32_t)(0x1005c1a8u));
  /* 100545ec call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100545f2u);
  /* 100545f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100545f5 cmp ebp, 0x190 */
  { uint32_t _a=(EBP),_b=(0x190u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100545fb jle 0x10054613 */
  if ((C.zf||C.sf!=C.of)) goto L_10054613;
  /* 100545fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100545ff push 0xf4 */
  push32((uint32_t)(0xf4u));
  /* 10054604 push esi */
  push32((uint32_t)(ESI));
  /* 10054605 push 0x100596a0 */
  push32((uint32_t)(0x100596a0u));
  /* 1005460a call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054610u);
  /* 10054610 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054613:;
  /* 10054613 cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054618 jle 0x1005461f */
  if ((C.zf||C.sf!=C.of)) goto L_1005461f;
  /* 1005461a call 0x10054230 */
  push32(0x1005461fu); f_10054230();
L_1005461f:;
  /* 1005461f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054621 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054623 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054625 push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 1005462a call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054630u);
  /* 10054630 push 5 */
  push32((uint32_t)(0x5u));
  /* 10054632 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054634 push 2 */
  push32((uint32_t)(0x2u));
  /* 10054636 push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 1005463b call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054641u);
  /* 10054641 push 5 */
  push32((uint32_t)(0x5u));
  /* 10054643 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054645 push 3 */
  push32((uint32_t)(0x3u));
  /* 10054647 push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 1005464c call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054652u);
  /* 10054652 push 0x1005c268 */
  push32((uint32_t)(0x1005c268u));
  /* 10054657 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x1005465du);
  /* 1005465d add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054660 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054663 jle 0x100546d6 */
  if ((C.zf||C.sf!=C.of)) goto L_100546d6;
  /* 10054665 push 5 */
  push32((uint32_t)(0x5u));
  /* 10054667 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10054669 push 2 */
  push32((uint32_t)(0x2u));
  /* 1005466b push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 10054670 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054676u);
  /* 10054676 push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 1005467b call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10054681u);
  /* 10054681 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054684 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054687 jle 0x1005469d */
  if ((C.zf||C.sf!=C.of)) goto L_1005469d;
  /* 10054689 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1005468b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1005468d push 1 */
  push32((uint32_t)(0x1u));
  /* 1005468f push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10054694 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x1005469au);
  /* 1005469a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005469d:;
  /* 1005469d push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 100546a2 call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x100546a8u);
  /* 100546a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100546ab cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100546ae jle 0x100546c4 */
  if ((C.zf||C.sf!=C.of)) goto L_100546c4;
  /* 100546b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100546b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100546b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100546b6 push 0x10059890 */
  push32((uint32_t)(0x10059890u));
  /* 100546bb call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100546c1u);
  /* 100546c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100546c4:;
  /* 100546c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100546c6 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100546c8 push 0x1005c128 */
  push32((uint32_t)(0x1005c128u));
  /* 100546cd call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100546d3u);
  /* 100546d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100546d6:;
  /* 100546d6 push 0x1005c1a8 */
  push32((uint32_t)(0x1005c1a8u));
  /* 100546db call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100546e1u);
  /* 100546e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100546e4 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100546e7 jle 0x100546fd */
  if ((C.zf||C.sf!=C.of)) goto L_100546fd;
  /* 100546e9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100546eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100546ed push 1 */
  push32((uint32_t)(0x1u));
  /* 100546ef push 0x10059890 */
  push32((uint32_t)(0x10059890u));
  /* 100546f4 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100546fau);
  /* 100546fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100546fd:;
  /* 100546fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100546ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054701 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054703 push 0x1005c200 */
  push32((uint32_t)(0x1005c200u));
  /* 10054708 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x1005470eu);
  /* 1005470e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054710 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054712 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054714 push 0x1005c268 */
  push32((uint32_t)(0x1005c268u));
  /* 10054719 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x1005471fu);
  /* 1005471f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054721 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054723 push 2 */
  push32((uint32_t)(0x2u));
  /* 10054725 push 0x1005c268 */
  push32((uint32_t)(0x1005c268u));
  /* 1005472a call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054730u);
  /* 10054730 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054732 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054734 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054736 push 0x1005bfe8 */
  push32((uint32_t)(0x1005bfe8u));
  /* 1005473b call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054741u);
  /* 10054741 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054744 push 5 */
  push32((uint32_t)(0x5u));
  /* 10054746 push 0xa */
  push32((uint32_t)(0xau));
  /* 10054748 push 2 */
  push32((uint32_t)(0x2u));
  /* 1005474a push 0x1005c200 */
  push32((uint32_t)(0x1005c200u));
  /* 1005474f call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054755u);
  /* 10054755 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054757 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10054759 push 0x10059678 */
  push32((uint32_t)(0x10059678u));
  /* 1005475e call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054764u);
  /* 10054764 push 0x1005bf38 */
  push32((uint32_t)(0x1005bf38u));
  /* 10054769 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x1005476fu);
  /* 1005476f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054772 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10054774 jle 0x1005478a */
  if ((C.zf||C.sf!=C.of)) goto L_1005478a;
  /* 10054776 push 3 */
  push32((uint32_t)(0x3u));
  /* 10054778 push 5 */
  push32((uint32_t)(0x5u));
  /* 1005477a push 1 */
  push32((uint32_t)(0x1u));
  /* 1005477c push 0x1005c110 */
  push32((uint32_t)(0x1005c110u));
  /* 10054781 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054787u);
  /* 10054787 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005478a:;
  /* 1005478a call dword ptr [0x1005c588] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c588))), 0x10054790u);
  /* 10054790 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10054792 je 0x100547a8 */
  if (C.zf) goto L_100547a8;
  /* 10054794 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054796 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054798 push 1 */
  push32((uint32_t)(0x1u));
  /* 1005479a push 0x1005bf38 */
  push32((uint32_t)(0x1005bf38u));
  /* 1005479f call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100547a5u);
  /* 100547a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100547a8:;
  /* 100547a8 push 0xa */
  push32((uint32_t)(0xau));
  /* 100547aa push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100547ac push 1 */
  push32((uint32_t)(0x1u));
  /* 100547ae push 0x1005c000 */
  push32((uint32_t)(0x1005c000u));
  /* 100547b3 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100547b9u);
  /* 100547b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100547bb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100547bd push 1 */
  push32((uint32_t)(0x1u));
  /* 100547bf push 0x10059630 */
  push32((uint32_t)(0x10059630u));
  /* 100547c4 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100547cau);
  /* 100547ca add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100547cd cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100547d0 jle 0x100547e6 */
  if ((C.zf||C.sf!=C.of)) goto L_100547e6;
  /* 100547d2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100547d4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100547d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 100547d8 push 0x1005bff0 */
  push32((uint32_t)(0x1005bff0u));
  /* 100547dd call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100547e3u);
  /* 100547e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100547e6:;
  /* 100547e6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100547e8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100547ea push 1 */
  push32((uint32_t)(0x1u));
  /* 100547ec push 0x1005c270 */
  push32((uint32_t)(0x1005c270u));
  /* 100547f1 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100547f7u);
  /* 100547f7 push 5 */
  push32((uint32_t)(0x5u));
  /* 100547f9 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100547fb push 2 */
  push32((uint32_t)(0x2u));
  /* 100547fd push 0x1005c270 */
  push32((uint32_t)(0x1005c270u));
  /* 10054802 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054808u);
  /* 10054808 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1005480a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1005480c push 0x1005c090 */
  push32((uint32_t)(0x1005c090u));
  /* 10054811 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054817u);
  /* 10054817 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054819 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1005481b push 0x1005c288 */
  push32((uint32_t)(0x1005c288u));
  /* 10054820 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054826u);
  /* 10054826 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054828 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005482a push 0x1005c1d0 */
  push32((uint32_t)(0x1005c1d0u));
  /* 1005482f call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054835u);
  /* 10054835 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054838 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1005483a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1005483c push 0x1005c058 */
  push32((uint32_t)(0x1005c058u));
  /* 10054841 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054847u);
  /* 10054847 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054849 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1005484b push 0x1005c048 */
  push32((uint32_t)(0x1005c048u));
  /* 10054850 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054856u);
  /* 10054856 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054858 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1005485a push 0x1005c050 */
  push32((uint32_t)(0x1005c050u));
  /* 1005485f call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054865u);
  /* 10054865 push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 1005486a call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10054870u);
  /* 10054870 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054873 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10054875 je 0x10054934 */
  if (C.zf) goto L_10054934;
  /* 1005487b push 0x1005c1d0 */
  push32((uint32_t)(0x1005c1d0u));
  /* 10054880 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10054886u);
  /* 10054886 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054889 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1005488b jne 0x10054934 */
  if (!C.zf) goto L_10054934;
  /* 10054891 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054893 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10054899u);
  /* 10054899 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005489c cmp eax, 0xe74 */
  { uint32_t _a=(EAX),_b=(0xe74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100548a1 jle 0x100548c7 */
  if ((C.zf||C.sf!=C.of)) goto L_100548c7;
  /* 100548a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 100548a5 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100548abu);
  /* 100548ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100548ae cmp eax, 0x157c */
  { uint32_t _a=(EAX),_b=(0x157cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100548b3 jle 0x100548c7 */
  if ((C.zf||C.sf!=C.of)) goto L_100548c7;
  /* 100548b5 push 5 */
  push32((uint32_t)(0x5u));
  /* 100548b7 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100548bdu);
  /* 100548bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100548c0 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100548c5 jg 0x10054934 */
  if ((!C.zf&&C.sf==C.of)) goto L_10054934;
L_100548c7:;
  /* 100548c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100548c9 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100548cfu);
  /* 100548cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100548d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100548d4 je 0x1005495b */
  if (C.zf) goto L_1005495b;
  /* 100548da push 5 */
  push32((uint32_t)(0x5u));
  /* 100548dc call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100548e2u);
  /* 100548e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100548e5 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100548ea jle 0x1005495b */
  if ((C.zf||C.sf!=C.of)) goto L_1005495b;
  /* 100548ec push 5 */
  push32((uint32_t)(0x5u));
  /* 100548ee call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100548f4u);
  /* 100548f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100548f7 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100548fc jle 0x1005490f */
  if ((C.zf||C.sf!=C.of)) goto L_1005490f;
  /* 100548fe push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10054903 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054905 push 5 */
  push32((uint32_t)(0x5u));
  /* 10054907 call 0x10052610 */
  push32(0x1005490cu); f_10052610();
  /* 1005490c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005490f:;
  /* 1005490f push 4 */
  push32((uint32_t)(0x4u));
  /* 10054911 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10054917u);
  /* 10054917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005491a cmp eax, 0x32c8 */
  { uint32_t _a=(EAX),_b=(0x32c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005491f jle 0x1005495b */
  if ((C.zf||C.sf!=C.of)) goto L_1005495b;
  /* 10054921 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10054926 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054928 push 4 */
  push32((uint32_t)(0x4u));
  /* 1005492a call 0x10052610 */
  push32(0x1005492fu); f_10052610();
  /* 1005492f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054932 jmp 0x1005495b */
  goto L_1005495b;
L_10054934:;
  /* 10054934 push 0 */
  push32((uint32_t)(0x0u));
  /* 10054936 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054938 call 0x100525f0 */
  push32(0x1005493du); f_100525f0();
  /* 1005493d push 0 */
  push32((uint32_t)(0x0u));
  /* 1005493f push 4 */
  push32((uint32_t)(0x4u));
  /* 10054941 call 0x100525f0 */
  push32(0x10054946u); f_100525f0();
  /* 10054946 push 0 */
  push32((uint32_t)(0x0u));
  /* 10054948 push 3 */
  push32((uint32_t)(0x3u));
  /* 1005494a call 0x100525f0 */
  push32(0x1005494fu); f_100525f0();
  /* 1005494f push 0 */
  push32((uint32_t)(0x0u));
  /* 10054951 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054953 call 0x100525f0 */
  push32(0x10054958u); f_100525f0();
  /* 10054958 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005495b:;
  /* 1005495b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005495d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005495f push 0x100597b8 */
  push32((uint32_t)(0x100597b8u));
  /* 10054964 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005496au);
  /* 1005496a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1005496c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1005496e push 1 */
  push32((uint32_t)(0x1u));
  /* 10054970 push 0x1005c2f0 */
  push32((uint32_t)(0x1005c2f0u));
  /* 10054975 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x1005497bu);
  /* 1005497b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1005497d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1005497f push 2 */
  push32((uint32_t)(0x2u));
  /* 10054981 push 0x1005c2f0 */
  push32((uint32_t)(0x1005c2f0u));
  /* 10054986 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x1005498cu);
  /* 1005498c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1005498e push 0xa */
  push32((uint32_t)(0xau));
  /* 10054990 push 3 */
  push32((uint32_t)(0x3u));
  /* 10054992 push 0x1005c2f0 */
  push32((uint32_t)(0x1005c2f0u));
  /* 10054997 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x1005499du);
  /* 1005499d push 0x10059970 */
  push32((uint32_t)(0x10059970u));
  /* 100549a2 call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x100549a8u);
  /* 100549a8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100549ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100549ad jne 0x100549f8 */
  if (!C.zf) goto L_100549f8;
  /* 100549af push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 100549b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 100549b3 call 0x10052640 */
  push32(0x100549b8u); f_10052640();
  /* 100549b8 mov esi, eax */
  ESI = (EAX);
  /* 100549ba push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100549bc push 0 */
  push32((uint32_t)(0x0u));
  /* 100549be sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100549c1 call 0x10052640 */
  push32(0x100549c6u); f_10052640();
  /* 100549c6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100549c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100549ca add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100549cc call 0x10052640 */
  push32(0x100549d1u); f_10052640();
  /* 100549d1 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100549d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100549d6 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100549d9 jle 0x100549e8 */
  if ((C.zf||C.sf!=C.of)) goto L_100549e8;
  /* 100549db push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100549dd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100549df push 6 */
  push32((uint32_t)(0x6u));
  /* 100549e1 push 0x1005bfa8 */
  push32((uint32_t)(0x1005bfa8u));
  /* 100549e6 jmp 0x10054a03 */
  goto L_10054a03;
L_100549e8:;
  /* 100549e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100549ea je 0x10054a0c */
  if (C.zf) goto L_10054a0c;
  /* 100549ec push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100549ee push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100549f0 push esi */
  push32((uint32_t)(ESI));
  /* 100549f1 push 0x1005bfa8 */
  push32((uint32_t)(0x1005bfa8u));
  /* 100549f6 jmp 0x10054a03 */
  goto L_10054a03;
L_100549f8:;
  /* 100549f8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100549fa push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100549fc push 0xa */
  push32((uint32_t)(0xau));
  /* 100549fe push 0x10059900 */
  push32((uint32_t)(0x10059900u));
L_10054a03:;
  /* 10054a03 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054a09u);
  /* 10054a09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054a0c:;
  /* 10054a0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054a0e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10054a10 push 0x10059970 */
  push32((uint32_t)(0x10059970u));
  /* 10054a15 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054a1bu);
  /* 10054a1b push 0x1005c288 */
  push32((uint32_t)(0x1005c288u));
  /* 10054a20 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10054a26u);
  /* 10054a26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054a29 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10054a2b je 0x10054a4e */
  if (C.zf) goto L_10054a4e;
  /* 10054a2d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054a2f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054a31 push 0x10059970 */
  push32((uint32_t)(0x10059970u));
  /* 10054a36 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054a3cu);
  /* 10054a3c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054a3e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10054a40 push 0x10059888 */
  push32((uint32_t)(0x10059888u));
  /* 10054a45 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054a4bu);
  /* 10054a4b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054a4e:;
  /* 10054a4e push 0x10059970 */
  push32((uint32_t)(0x10059970u));
  /* 10054a53 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10054a59u);
  /* 10054a59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054a5c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10054a5e je 0x10054a86 */
  if (C.zf) goto L_10054a86;
  /* 10054a60 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054a62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054a64 push 0x10059958 */
  push32((uint32_t)(0x10059958u));
  /* 10054a69 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054a6fu);
  /* 10054a6f push 0xa */
  push32((uint32_t)(0xau));
  /* 10054a71 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10054a73 push 0x10059898 */
  push32((uint32_t)(0x10059898u));
  /* 10054a78 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054a7eu);
  /* 10054a7e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054a81 call 0x10053320 */
  push32(0x10054a86u); f_10053320();
L_10054a86:;
  /* 10054a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10054a88 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054a8a call 0x100525f0 */
  push32(0x10054a8fu); f_100525f0();
  /* 10054a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10054a91 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10054a97u);
  /* 10054a97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054a9a cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054a9f jle 0x10054ae3 */
  if ((C.zf||C.sf!=C.of)) goto L_10054ae3;
  /* 10054aa1 push 0x100597b8 */
  push32((uint32_t)(0x100597b8u));
  /* 10054aa6 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10054aacu);
  /* 10054aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054aaf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10054ab1 je 0x10054ae3 */
  if (C.zf) goto L_10054ae3;
  /* 10054ab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054ab5 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10054abbu);
  /* 10054abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054abe cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054ac3 jge 0x10054ae3 */
  if ((C.sf==C.of)) goto L_10054ae3;
  /* 10054ac5 push 0x10059970 */
  push32((uint32_t)(0x10059970u));
  /* 10054aca call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10054ad0u);
  /* 10054ad0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054ad3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10054ad5 jne 0x10054ae3 */
  if (!C.zf) goto L_10054ae3;
  /* 10054ad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054ad9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054adb call 0x100525f0 */
  push32(0x10054ae0u); f_100525f0();
  /* 10054ae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054ae3:;
  /* 10054ae3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054ae5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054ae7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10054ae9 push 0x1005c208 */
  push32((uint32_t)(0x1005c208u));
  /* 10054aee call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054af4u);
  /* 10054af4 push 0x1005c108 */
  push32((uint32_t)(0x1005c108u));
  /* 10054af9 call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10054affu);
  /* 10054aff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054b02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10054b04 je 0x10054b1a */
  if (C.zf) goto L_10054b1a;
  /* 10054b06 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054b08 push 0xa */
  push32((uint32_t)(0xau));
  /* 10054b0a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10054b0c push 0x1005c208 */
  push32((uint32_t)(0x1005c208u));
  /* 10054b11 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054b17u);
  /* 10054b17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054b1a:;
  /* 10054b1a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054b1c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10054b1e push 0x1005c108 */
  push32((uint32_t)(0x1005c108u));
  /* 10054b23 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054b29u);
  /* 10054b29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054b2b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10054b2d push 0x1005c118 */
  push32((uint32_t)(0x1005c118u));
  /* 10054b32 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054b38u);
  /* 10054b38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054b3a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054b3c push 0x1005c300 */
  push32((uint32_t)(0x1005c300u));
  /* 10054b41 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054b47u);
  /* 10054b47 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054b49 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054b4b push 0x1005c2e8 */
  push32((uint32_t)(0x1005c2e8u));
  /* 10054b50 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054b56u);
  /* 10054b56 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054b58 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054b5a push 0x1005c2f8 */
  push32((uint32_t)(0x1005c2f8u));
  /* 10054b5f call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054b65u);
  /* 10054b65 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054b67 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054b69 push 0x1005c2d8 */
  push32((uint32_t)(0x1005c2d8u));
  /* 10054b6e call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054b74u);
  /* 10054b74 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054b77 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054b79 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054b7b push 0x1005c2e0 */
  push32((uint32_t)(0x1005c2e0u));
  /* 10054b80 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054b86u);
  /* 10054b86 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054b88 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054b8a push 0x1005c2d0 */
  push32((uint32_t)(0x1005c2d0u));
  /* 10054b8f call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054b95u);
  /* 10054b95 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054b98 cmp ebx, 0x23 */
  { uint32_t _a=(EBX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054b9b jle 0x10054bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_10054bf4;
  /* 10054b9d mov al, byte ptr [esp + 0x12] */
  AL = (r8((uint32_t)(ESP + 0x12)));
  /* 10054ba1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10054ba3 je 0x10054bf4 */
  if (C.zf) goto L_10054bf4;
  /* 10054ba5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10054ba7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10054ba9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054bab push 0x100598f0 */
  push32((uint32_t)(0x100598f0u));
  /* 10054bb0 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054bb6u);
  /* 10054bb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054bb9 cmp ebx, 0x3c */
  { uint32_t _a=(EBX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054bbc jle 0x10054bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_10054bf4;
  /* 10054bbe push 0xa */
  push32((uint32_t)(0xau));
  /* 10054bc0 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10054bc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10054bc4 push 0x100598f0 */
  push32((uint32_t)(0x100598f0u));
  /* 10054bc9 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054bcfu);
  /* 10054bcf push 0xa */
  push32((uint32_t)(0xau));
  /* 10054bd1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054bd3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10054bd5 push 0x100598f0 */
  push32((uint32_t)(0x100598f0u));
  /* 10054bda call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054be0u);
  /* 10054be0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10054be2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10054be4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10054be6 push 0x100598f0 */
  push32((uint32_t)(0x100598f0u));
  /* 10054beb call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054bf1u);
  /* 10054bf1 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054bf4:;
  /* 10054bf4 mov bl, byte ptr [esp + 0x13] */
  BL = (r8((uint32_t)(ESP + 0x13)));
  /* 10054bf8 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10054bfa je 0x10054cde */
  if (C.zf) goto L_10054cde;
  /* 10054c00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054c02 push 0xa */
  push32((uint32_t)(0xau));
  /* 10054c04 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054c06 push 0x100598e0 */
  push32((uint32_t)(0x100598e0u));
  /* 10054c0b call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054c11u);
  /* 10054c11 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10054c13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054c15 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10054c17 push 0x1005c178 */
  push32((uint32_t)(0x1005c178u));
  /* 10054c1c call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054c22u);
  /* 10054c22 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10054c24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054c26 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10054c28 push 0x1005c290 */
  push32((uint32_t)(0x1005c290u));
  /* 10054c2d call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054c33u);
  /* 10054c33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054c35 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10054c37 push 0x10059648 */
  push32((uint32_t)(0x10059648u));
  /* 10054c3c call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054c42u);
  /* 10054c42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054c44 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10054c46 push 0x10059720 */
  push32((uint32_t)(0x10059720u));
  /* 10054c4b call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054c51u);
  /* 10054c51 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054c54 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054c56 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10054c58 push 0x10059640 */
  push32((uint32_t)(0x10059640u));
  /* 10054c5d call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054c63u);
  /* 10054c63 push 0x1005c1b0 */
  push32((uint32_t)(0x1005c1b0u));
  /* 10054c68 call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10054c6eu);
  /* 10054c6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054c71 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10054c73 je 0x10054c89 */
  if (C.zf) goto L_10054c89;
  /* 10054c75 push 0xa */
  push32((uint32_t)(0xau));
  /* 10054c77 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10054c79 push 5 */
  push32((uint32_t)(0x5u));
  /* 10054c7b push 0x1005c388 */
  push32((uint32_t)(0x1005c388u));
  /* 10054c80 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054c86u);
  /* 10054c86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054c89:;
  /* 10054c89 push 0x1005c0c8 */
  push32((uint32_t)(0x1005c0c8u));
  /* 10054c8e call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10054c94u);
  /* 10054c94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054c97 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10054c99 je 0x10054caf */
  if (C.zf) goto L_10054caf;
  /* 10054c9b push 0xa */
  push32((uint32_t)(0xau));
  /* 10054c9d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10054c9f push 0xa */
  push32((uint32_t)(0xau));
  /* 10054ca1 push 0x10059680 */
  push32((uint32_t)(0x10059680u));
  /* 10054ca6 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054cacu);
  /* 10054cac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054caf:;
  /* 10054caf call 0x10054360 */
  push32(0x10054cb4u); f_10054360();
L_10054cb4:;
  /* 10054cb4 push 0x1005c038 */
  push32((uint32_t)(0x1005c038u));
  /* 10054cb9 call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10054cbfu);
  /* 10054cbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054cc2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10054cc4 je 0x10054d14 */
  if (C.zf) goto L_10054d14;
  /* 10054cc6 push 0x1005c118 */
  push32((uint32_t)(0x1005c118u));
  /* 10054ccb call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10054cd1u);
  /* 10054cd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054cd4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10054cd6 jne 0x10054d05 */
  if (!C.zf) goto L_10054d05;
  /* 10054cd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10054cda push 2 */
  push32((uint32_t)(0x2u));
  /* 10054cdc jmp 0x10054d09 */
  goto L_10054d09;
L_10054cde:;
  /* 10054cde push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10054ce0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054ce2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10054ce4 push 0x1005c178 */
  push32((uint32_t)(0x1005c178u));
  /* 10054ce9 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054cefu);
  /* 10054cef push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10054cf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054cf3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10054cf5 push 0x1005c290 */
  push32((uint32_t)(0x1005c290u));
  /* 10054cfa call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054d00u);
  /* 10054d00 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054d03 jmp 0x10054cb4 */
  goto L_10054cb4;
L_10054d05:;
  /* 10054d05 push 4 */
  push32((uint32_t)(0x4u));
  /* 10054d07 push 4 */
  push32((uint32_t)(0x4u));
L_10054d09:;
  /* 10054d09 push 8 */
  push32((uint32_t)(0x8u));
  /* 10054d0b call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x10054d11u);
  /* 10054d11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054d14:;
  /* 10054d14 push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10054d19 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10054d1fu);
  /* 10054d1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054d22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10054d24 je 0x10054d3a */
  if (C.zf) goto L_10054d3a;
  /* 10054d26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054d28 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054d2a push 6 */
  push32((uint32_t)(0x6u));
  /* 10054d2c push 0x1005c208 */
  push32((uint32_t)(0x1005c208u));
  /* 10054d31 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054d37u);
  /* 10054d37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054d3a:;
  /* 10054d3a push 0x1005c108 */
  push32((uint32_t)(0x1005c108u));
  /* 10054d3f call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10054d45u);
  /* 10054d45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054d48 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10054d4a je 0x10054d60 */
  if (C.zf) goto L_10054d60;
  /* 10054d4c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054d4e push 0xa */
  push32((uint32_t)(0xau));
  /* 10054d50 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10054d52 push 0x1005c208 */
  push32((uint32_t)(0x1005c208u));
  /* 10054d57 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054d5du);
  /* 10054d5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054d60:;
  /* 10054d60 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10054d62 je 0x10054e63 */
  if (C.zf) goto L_10054e63;
  /* 10054d68 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10054d6a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10054d6c push 2 */
  push32((uint32_t)(0x2u));
  /* 10054d6e push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10054d73 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054d79u);
  /* 10054d79 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10054d7b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10054d7d push 3 */
  push32((uint32_t)(0x3u));
  /* 10054d7f push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10054d84 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054d8au);
  /* 10054d8a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10054d8c push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10054d8e push 4 */
  push32((uint32_t)(0x4u));
  /* 10054d90 push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10054d95 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054d9bu);
  /* 10054d9b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10054d9d push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10054d9f push 5 */
  push32((uint32_t)(0x5u));
  /* 10054da1 push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10054da6 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054dacu);
  /* 10054dac add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054daf push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10054db1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10054db3 push 6 */
  push32((uint32_t)(0x6u));
  /* 10054db5 push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10054dba call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054dc0u);
  /* 10054dc0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054dc2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10054dc4 push 0x1005c038 */
  push32((uint32_t)(0x1005c038u));
  /* 10054dc9 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054dcfu);
  /* 10054dcf push 0x1005c0f8 */
  push32((uint32_t)(0x1005c0f8u));
  /* 10054dd4 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10054ddau);
  /* 10054dda add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054ddd cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054de0 jle 0x10054e03 */
  if ((C.zf||C.sf!=C.of)) goto L_10054e03;
  /* 10054de2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054de4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054de6 push 0x1005c220 */
  push32((uint32_t)(0x1005c220u));
  /* 10054deb call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054df1u);
  /* 10054df1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10054df3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10054df5 push 0x1005c228 */
  push32((uint32_t)(0x1005c228u));
  /* 10054dfa call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054e00u);
  /* 10054e00 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054e03:;
  /* 10054e03 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054e05 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10054e07 push 0x1005c108 */
  push32((uint32_t)(0x1005c108u));
  /* 10054e0c call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054e12u);
  /* 10054e12 push 0x10059920 */
  push32((uint32_t)(0x10059920u));
  /* 10054e17 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10054e1du);
  /* 10054e1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054e20 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10054e22 je 0x10054e63 */
  if (C.zf) goto L_10054e63;
  /* 10054e24 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054e26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054e28 push 0x1005c180 */
  push32((uint32_t)(0x1005c180u));
  /* 10054e2d call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054e33u);
  /* 10054e33 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054e35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054e37 push 0x1005c190 */
  push32((uint32_t)(0x1005c190u));
  /* 10054e3c call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054e42u);
  /* 10054e42 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054e44 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10054e46 push 0x1005c198 */
  push32((uint32_t)(0x1005c198u));
  /* 10054e4b call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054e51u);
  /* 10054e51 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054e53 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10054e55 push 0x1005c188 */
  push32((uint32_t)(0x1005c188u));
  /* 10054e5a call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054e60u);
  /* 10054e60 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054e63:;
  /* 10054e63 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054e65 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10054e67 push 0x100597b8 */
  push32((uint32_t)(0x100597b8u));
  /* 10054e6c call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054e72u);
  /* 10054e72 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10054e74 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10054e76 push 0x100598f8 */
  push32((uint32_t)(0x100598f8u));
  /* 10054e7b call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054e81u);
  /* 10054e81 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054e83 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054e85 push 0x1005c168 */
  push32((uint32_t)(0x1005c168u));
  /* 10054e8a call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10054e90u);
  /* 10054e90 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 10054e94 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054e97 cmp eax, 0x15e */
  { uint32_t _a=(EAX),_b=(0x15eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054e9c jle 0x10054eba */
  if ((C.zf||C.sf!=C.of)) goto L_10054eba;
  /* 10054e9e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10054ea0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10054ea2 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10054ea7 push 0x1005c0f8 */
  push32((uint32_t)(0x1005c0f8u));
  /* 10054eac call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10054eb2u);
  /* 10054eb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054eb5 call 0x10054310 */
  push32(0x10054ebau); f_10054310();
L_10054eba:;
  /* 10054eba push 0x10059890 */
  push32((uint32_t)(0x10059890u));
  /* 10054ebf call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10054ec5u);
  /* 10054ec5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054ec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10054eca je 0x10055213 */
  if (C.zf) goto L_10055213;
  /* 10054ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10054ed2 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10054ed8u);
  /* 10054ed8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10054eda mov edi, eax */
  EDI = (EAX);
  /* 10054edc call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10054ee2u);
  /* 10054ee2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10054ee4 mov esi, eax */
  ESI = (EAX);
  /* 10054ee6 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10054eecu);
  /* 10054eec push 5 */
  push32((uint32_t)(0x5u));
  /* 10054eee mov ebp, eax */
  EBP = (EAX);
  /* 10054ef0 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10054ef6u);
  /* 10054ef6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10054ef8 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 10054efc call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10054f02u);
  /* 10054f02 mov ebx, eax */
  EBX = (EAX);
  /* 10054f04 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10054f08 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054f0b cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054f10 jge 0x10054fa3 */
  if ((C.sf==C.of)) goto L_10054fa3;
  /* 10054f16 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054f1c jle 0x10054f29 */
  if ((C.zf||C.sf!=C.of)) goto L_10054f29;
  /* 10054f1e push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10054f23 push 3 */
  push32((uint32_t)(0x3u));
  /* 10054f25 push 2 */
  push32((uint32_t)(0x2u));
  /* 10054f27 jmp 0x10054f9b */
  goto L_10054f9b;
L_10054f29:;
  /* 10054f29 cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054f2f jle 0x10054f3c */
  if ((C.zf||C.sf!=C.of)) goto L_10054f3c;
  /* 10054f31 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10054f36 push 3 */
  push32((uint32_t)(0x3u));
  /* 10054f38 push 2 */
  push32((uint32_t)(0x2u));
  /* 10054f3a jmp 0x10054f9b */
  goto L_10054f9b;
L_10054f3c:;
  /* 10054f3c cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054f42 jle 0x10054f4f */
  if ((C.zf||C.sf!=C.of)) goto L_10054f4f;
  /* 10054f44 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10054f49 push 3 */
  push32((uint32_t)(0x3u));
  /* 10054f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10054f4d jmp 0x10054f9b */
  goto L_10054f9b;
L_10054f4f:;
  /* 10054f4f cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054f55 jle 0x10054f62 */
  if ((C.zf||C.sf!=C.of)) goto L_10054f62;
  /* 10054f57 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10054f5c push 3 */
  push32((uint32_t)(0x3u));
  /* 10054f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10054f60 jmp 0x10054f9b */
  goto L_10054f9b;
L_10054f62:;
  /* 10054f62 cmp dword ptr [esp + 0x14], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054f6a jle 0x10054f77 */
  if ((C.zf||C.sf!=C.of)) goto L_10054f77;
  /* 10054f6c push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10054f71 push 3 */
  push32((uint32_t)(0x3u));
  /* 10054f73 push 5 */
  push32((uint32_t)(0x5u));
  /* 10054f75 jmp 0x10054f9b */
  goto L_10054f9b;
L_10054f77:;
  /* 10054f77 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054f7d jle 0x10054f8a */
  if ((C.zf||C.sf!=C.of)) goto L_10054f8a;
  /* 10054f7f push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10054f84 push 3 */
  push32((uint32_t)(0x3u));
  /* 10054f86 push 4 */
  push32((uint32_t)(0x4u));
  /* 10054f88 jmp 0x10054f9b */
  goto L_10054f9b;
L_10054f8a:;
  /* 10054f8a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054f90 jle 0x10054fa3 */
  if ((C.zf||C.sf!=C.of)) goto L_10054fa3;
  /* 10054f92 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10054f97 push 3 */
  push32((uint32_t)(0x3u));
  /* 10054f99 push 1 */
  push32((uint32_t)(0x1u));
L_10054f9b:;
  /* 10054f9b call 0x10052610 */
  push32(0x10054fa0u); f_10052610();
  /* 10054fa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054fa3:;
  /* 10054fa3 push 0x1005bf38 */
  push32((uint32_t)(0x1005bf38u));
  /* 10054fa8 call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10054faeu);
  /* 10054fae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054fb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10054fb3 je 0x10055003 */
  if (C.zf) goto L_10055003;
  /* 10054fb5 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054fbb jle 0x10055003 */
  if ((C.zf||C.sf!=C.of)) goto L_10055003;
  /* 10054fbd push 0x1005c288 */
  push32((uint32_t)(0x1005c288u));
  /* 10054fc2 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10054fc8u);
  /* 10054fc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10054fcb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10054fcd jne 0x10055003 */
  if (!C.zf) goto L_10055003;
  /* 10054fcf cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054fd5 jle 0x10054fe8 */
  if ((C.zf||C.sf!=C.of)) goto L_10054fe8;
  /* 10054fd7 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10054fdc push 3 */
  push32((uint32_t)(0x3u));
  /* 10054fde push 4 */
  push32((uint32_t)(0x4u));
  /* 10054fe0 call 0x10052610 */
  push32(0x10054fe5u); f_10052610();
  /* 10054fe5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10054fe8:;
  /* 10054fe8 cmp dword ptr [esp + 0x14], 0xfa0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10054ff0 jle 0x10055003 */
  if ((C.zf||C.sf!=C.of)) goto L_10055003;
  /* 10054ff2 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10054ff7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10054ff9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10054ffb call 0x10052610 */
  push32(0x10055000u); f_10052610();
  /* 10055000 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055003:;
  /* 10055003 push 2 */
  push32((uint32_t)(0x2u));
  /* 10055005 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x1005500bu);
  /* 1005500b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005500e cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055013 jle 0x10055026 */
  if ((C.zf||C.sf!=C.of)) goto L_10055026;
  /* 10055015 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 1005501a push 1 */
  push32((uint32_t)(0x1u));
  /* 1005501c push 2 */
  push32((uint32_t)(0x2u));
  /* 1005501e call 0x10052610 */
  push32(0x10055023u); f_10052610();
  /* 10055023 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055026:;
  /* 10055026 push 0 */
  push32((uint32_t)(0x0u));
  /* 10055028 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x1005502eu);
  /* 1005502e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055031 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055036 jle 0x10055049 */
  if ((C.zf||C.sf!=C.of)) goto L_10055049;
  /* 10055038 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 1005503d push 1 */
  push32((uint32_t)(0x1u));
  /* 1005503f push 0 */
  push32((uint32_t)(0x0u));
  /* 10055041 call 0x10052610 */
  push32(0x10055046u); f_10052610();
  /* 10055046 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055049:;
  /* 10055049 push 0x1005c200 */
  push32((uint32_t)(0x1005c200u));
  /* 1005504e call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10055054u);
  /* 10055054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10055059 je 0x100551e0 */
  if (C.zf) goto L_100551e0;
  /* 1005505f push 0x1005c1d0 */
  push32((uint32_t)(0x1005c1d0u));
  /* 10055064 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x1005506au);
  /* 1005506a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005506d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1005506f jne 0x100551e0 */
  if (!C.zf) goto L_100551e0;
  /* 10055075 push 5 */
  push32((uint32_t)(0x5u));
  /* 10055077 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x1005507du);
  /* 1005507d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055080 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055085 jle 0x10055140 */
  if ((C.zf||C.sf!=C.of)) goto L_10055140;
  /* 1005508b push 0 */
  push32((uint32_t)(0x0u));
  /* 1005508d call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10055093u);
  /* 10055093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10055098 je 0x10055140 */
  if (C.zf) goto L_10055140;
  /* 1005509e push 1 */
  push32((uint32_t)(0x1u));
  /* 100550a0 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100550a6u);
  /* 100550a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100550a9 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100550ae jge 0x10055140 */
  if ((C.sf==C.of)) goto L_10055140;
  /* 100550b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 100550b6 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100550bcu);
  /* 100550bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100550bf cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100550c4 jle 0x100550d7 */
  if ((C.zf||C.sf!=C.of)) goto L_100550d7;
  /* 100550c6 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 100550cb push 1 */
  push32((uint32_t)(0x1u));
  /* 100550cd push 5 */
  push32((uint32_t)(0x5u));
  /* 100550cf call 0x10052610 */
  push32(0x100550d4u); f_10052610();
  /* 100550d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100550d7:;
  /* 100550d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 100550d9 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100550dfu);
  /* 100550df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100550e2 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100550e7 jle 0x100550fa */
  if ((C.zf||C.sf!=C.of)) goto L_100550fa;
  /* 100550e9 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 100550ee push 1 */
  push32((uint32_t)(0x1u));
  /* 100550f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100550f2 call 0x10052610 */
  push32(0x100550f7u); f_10052610();
  /* 100550f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100550fa:;
  /* 100550fa push 2 */
  push32((uint32_t)(0x2u));
  /* 100550fc call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10055102u);
  /* 10055102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055105 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005510a jle 0x1005511d */
  if ((C.zf||C.sf!=C.of)) goto L_1005511d;
  /* 1005510c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 10055111 push 1 */
  push32((uint32_t)(0x1u));
  /* 10055113 push 2 */
  push32((uint32_t)(0x2u));
  /* 10055115 call 0x10052610 */
  push32(0x1005511au); f_10052610();
  /* 1005511a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005511d:;
  /* 1005511d push 3 */
  push32((uint32_t)(0x3u));
  /* 1005511f call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10055125u);
  /* 10055125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055128 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005512d jle 0x10055140 */
  if ((C.zf||C.sf!=C.of)) goto L_10055140;
  /* 1005512f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10055134 push 1 */
  push32((uint32_t)(0x1u));
  /* 10055136 push 3 */
  push32((uint32_t)(0x3u));
  /* 10055138 call 0x10052610 */
  push32(0x1005513du); f_10052610();
  /* 1005513d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055140:;
  /* 10055140 push 5 */
  push32((uint32_t)(0x5u));
  /* 10055142 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10055148u);
  /* 10055148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005514b cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055150 jle 0x100551e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100551e0;
  /* 10055156 push 1 */
  push32((uint32_t)(0x1u));
  /* 10055158 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x1005515eu);
  /* 1005515e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10055163 je 0x100551e0 */
  if (C.zf) goto L_100551e0;
  /* 10055165 push 1 */
  push32((uint32_t)(0x1u));
  /* 10055167 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x1005516du);
  /* 1005516d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055170 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055175 jle 0x100551e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100551e0;
  /* 10055177 push 5 */
  push32((uint32_t)(0x5u));
  /* 10055179 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x1005517fu);
  /* 1005517f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055182 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055187 jle 0x1005519a */
  if ((C.zf||C.sf!=C.of)) goto L_1005519a;
  /* 10055189 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1005518e push 4 */
  push32((uint32_t)(0x4u));
  /* 10055190 push 5 */
  push32((uint32_t)(0x5u));
  /* 10055192 call 0x10052610 */
  push32(0x10055197u); f_10052610();
  /* 10055197 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005519a:;
  /* 1005519a push 2 */
  push32((uint32_t)(0x2u));
  /* 1005519c call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100551a2u);
  /* 100551a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100551a5 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100551aa jle 0x100551bd */
  if ((C.zf||C.sf!=C.of)) goto L_100551bd;
  /* 100551ac push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 100551b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100551b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 100551b5 call 0x10052610 */
  push32(0x100551bau); f_10052610();
  /* 100551ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100551bd:;
  /* 100551bd push 3 */
  push32((uint32_t)(0x3u));
  /* 100551bf call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100551c5u);
  /* 100551c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100551c8 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100551cd jle 0x100551e0 */
  if ((C.zf||C.sf!=C.of)) goto L_100551e0;
  /* 100551cf push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 100551d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 100551d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100551d8 call 0x10052610 */
  push32(0x100551ddu); f_10052610();
  /* 100551dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100551e0:;
  /* 100551e0 call dword ptr [0x1005c518] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c518))), 0x100551e6u);
  /* 100551e6 mov ecx, dword ptr [eax*4 + 0x1005c624] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1005c624)));
  /* 100551ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100551ef jne 0x10055213 */
  if (!C.zf) goto L_10055213;
  /* 100551f1 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 100551f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 100551f8 push 5 */
  push32((uint32_t)(0x5u));
  /* 100551fa call 0x10052610 */
  push32(0x100551ffu); f_10052610();
  /* 100551ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055202 call dword ptr [0x1005c518] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c518))), 0x10055208u);
  /* 10055208 mov dword ptr [eax*4 + 0x1005c624], 1 */
  w32((uint32_t)(EAX*4 + 0x1005c624), (0x1u));
L_10055213:;
  /* 10055213 pop edi */
  EDI = (pop32());
  /* 10055214 pop esi */
  ESI = (pop32());
  /* 10055215 pop ebp */
  EBP = (pop32());
  /* 10055216 pop ebx */
  EBX = (pop32());
  /* 10055217 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005521a ret  */
  ESPCHK(0x100543e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005220 @ 0x10055220 (72 bytes, 22 insns) */
void f_10055220(void) {
  FTRACE(0x10055220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10055220 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055222 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055224 push 1 */
  push32((uint32_t)(0x1u));
  /* 10055226 push 0x1005bff0 */
  push32((uint32_t)(0x1005bff0u));
  /* 1005522b call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055231u);
  /* 10055231 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055233 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055235 push 1 */
  push32((uint32_t)(0x1u));
  /* 10055237 push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 1005523c call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055242u);
  /* 10055242 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055244 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055246 push 1 */
  push32((uint32_t)(0x1u));
  /* 10055248 push 0x1005bfe8 */
  push32((uint32_t)(0x1005bfe8u));
  /* 1005524d call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055253u);
  /* 10055253 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055255 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055257 push 1 */
  push32((uint32_t)(0x1u));
  /* 10055259 push 0x10059890 */
  push32((uint32_t)(0x10059890u));
  /* 1005525e call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055264u);
  /* 10055264 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055267 ret  */
  ESPCHK(0x10055220u, _esp0);
  ESP += 4; return;
}

/* FUN_10005270 @ 0x10055270 (55 bytes, 16 insns) */
void f_10055270(void) {
  FTRACE(0x10055270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10055270 cmp dword ptr [esp + 4], 0x100596a0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0x100596a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055278 jne 0x100552a4 */
  if (!C.zf) goto L_100552a4;
  /* 1005527a push 0x1005c358 */
  push32((uint32_t)(0x1005c358u));
  /* 1005527f call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10055285u);
  /* 10055285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055288 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1005528a je 0x100552a4 */
  if (C.zf) goto L_100552a4;
  /* 1005528c push 0x1005c2a0 */
  push32((uint32_t)(0x1005c2a0u));
  /* 10055291 call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10055297u);
  /* 10055297 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005529a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1005529c je 0x100552a4 */
  if (C.zf) goto L_100552a4;
  /* 1005529e mov eax, 1 */
  EAX = (0x1u);
  /* 100552a3 ret  */
  ESPCHK(0x10055270u, _esp0);
  ESP += 4; return;
L_100552a4:;
  /* 100552a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100552a6 ret  */
  ESPCHK(0x10055270u, _esp0);
  ESP += 4; return;
}

/* FUN_100052b0 @ 0x100552b0 (2008 bytes, 535 insns) */
void f_100552b0(void) {
  FTRACE(0x100552b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100552b0 push 0x1005c290 */
  push32((uint32_t)(0x1005c290u));
  /* 100552b5 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100552bbu);
  /* 100552bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100552be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100552c0 jne 0x100552d4 */
  if (!C.zf) goto L_100552d4;
  /* 100552c2 push 0x100598e0 */
  push32((uint32_t)(0x100598e0u));
  /* 100552c7 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100552cdu);
  /* 100552cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100552d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100552d2 je 0x10055304 */
  if (C.zf) goto L_10055304;
L_100552d4:;
  /* 100552d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100552d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100552d8 push 0x10059968 */
  push32((uint32_t)(0x10059968u));
  /* 100552dd call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100552e3u);
  /* 100552e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100552e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100552e7 push 0x1005c210 */
  push32((uint32_t)(0x1005c210u));
  /* 100552ec call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100552f2u);
  /* 100552f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100552f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100552f6 push 0x1005c218 */
  push32((uint32_t)(0x1005c218u));
  /* 100552fb call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055301u);
  /* 10055301 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055304:;
  /* 10055304 push 0x1005c3c8 */
  push32((uint32_t)(0x1005c3c8u));
  /* 10055309 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x1005530fu);
  /* 1005530f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055312 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055315 jg 0x1005533f */
  if ((!C.zf&&C.sf==C.of)) goto L_1005533f;
  /* 10055317 push 0x1005c348 */
  push32((uint32_t)(0x1005c348u));
  /* 1005531c call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10055322u);
  /* 10055322 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055325 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055328 jg 0x1005533f */
  if ((!C.zf&&C.sf==C.of)) goto L_1005533f;
  /* 1005532a push 0x100596a0 */
  push32((uint32_t)(0x100596a0u));
  /* 1005532f call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10055335u);
  /* 10055335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055338 cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005533d jle 0x1005539d */
  if ((C.zf||C.sf!=C.of)) goto L_1005539d;
L_1005533f:;
  /* 1005533f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055341 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10055343 push 0x10059640 */
  push32((uint32_t)(0x10059640u));
  /* 10055348 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005534eu);
  /* 1005534e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055350 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10055352 push 0x10059648 */
  push32((uint32_t)(0x10059648u));
  /* 10055357 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005535du);
  /* 1005535d push 0x1005c3c8 */
  push32((uint32_t)(0x1005c3c8u));
  /* 10055362 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10055368u);
  /* 10055368 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005536b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055370 jg 0x1005538b */
  if ((!C.zf&&C.sf==C.of)) goto L_1005538b;
  /* 10055372 push 0x1005c348 */
  push32((uint32_t)(0x1005c348u));
  /* 10055377 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x1005537du);
  /* 1005537d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055380 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055383 jg 0x1005538b */
  if ((!C.zf&&C.sf==C.of)) goto L_1005538b;
  /* 10055385 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055387 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10055389 jmp 0x1005538f */
  goto L_1005538f;
L_1005538b:;
  /* 1005538b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005538d push 0x5f */
  push32((uint32_t)(0x5fu));
L_1005538f:;
  /* 1005538f push 0x10059720 */
  push32((uint32_t)(0x10059720u));
  /* 10055394 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005539au);
  /* 1005539a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005539d:;
  /* 1005539d push 0x100596a0 */
  push32((uint32_t)(0x100596a0u));
  /* 100553a2 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100553a8u);
  /* 100553a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100553ab cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100553ae jle 0x10055463 */
  if ((C.zf||C.sf!=C.of)) goto L_10055463;
  /* 100553b4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100553b6 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100553b8 push 0x1005c368 */
  push32((uint32_t)(0x1005c368u));
  /* 100553bd call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100553c3u);
  /* 100553c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100553c5 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100553c7 push 0x1005c370 */
  push32((uint32_t)(0x1005c370u));
  /* 100553cc call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100553d2u);
  /* 100553d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100553d4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100553d6 push 0x1005c358 */
  push32((uint32_t)(0x1005c358u));
  /* 100553db call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100553e1u);
  /* 100553e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100553e3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100553e5 push 0x1005c2b0 */
  push32((uint32_t)(0x1005c2b0u));
  /* 100553ea call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100553f0u);
  /* 100553f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100553f2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100553f4 push 0x1005c298 */
  push32((uint32_t)(0x1005c298u));
  /* 100553f9 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100553ffu);
  /* 100553ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055401 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055403 push 0x1005c2a0 */
  push32((uint32_t)(0x1005c2a0u));
  /* 10055408 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005540eu);
  /* 1005540e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055411 push 0x100596a0 */
  push32((uint32_t)(0x100596a0u));
  /* 10055416 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x1005541cu);
  /* 1005541c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005541f cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055422 jle 0x10055463 */
  if ((C.zf||C.sf!=C.of)) goto L_10055463;
  /* 10055424 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055426 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055428 push 0x1005c360 */
  push32((uint32_t)(0x1005c360u));
  /* 1005542d call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055433u);
  /* 10055433 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055435 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055437 push 0x1005c378 */
  push32((uint32_t)(0x1005c378u));
  /* 1005543c call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055442u);
  /* 10055442 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055444 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055446 push 0x1005c2b8 */
  push32((uint32_t)(0x1005c2b8u));
  /* 1005544b call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055451u);
  /* 10055451 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055453 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055455 push 0x1005c2c0 */
  push32((uint32_t)(0x1005c2c0u));
  /* 1005545a call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055460u);
  /* 10055460 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055463:;
  /* 10055463 push 0x1005c0f8 */
  push32((uint32_t)(0x1005c0f8u));
  /* 10055468 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x1005546eu);
  /* 1005546e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055471 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055474 jle 0x1005550b */
  if ((C.zf||C.sf!=C.of)) goto L_1005550b;
  /* 1005547a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005547c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1005547e push 0x10059928 */
  push32((uint32_t)(0x10059928u));
  /* 10055483 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055489u);
  /* 10055489 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005548b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1005548d push 0x10059930 */
  push32((uint32_t)(0x10059930u));
  /* 10055492 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055498u);
  /* 10055498 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005549a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1005549c push 0x10059920 */
  push32((uint32_t)(0x10059920u));
  /* 100554a1 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100554a7u);
  /* 100554a7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100554a9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100554ab push 0x1005bf90 */
  push32((uint32_t)(0x1005bf90u));
  /* 100554b0 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100554b6u);
  /* 100554b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100554b8 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100554ba push 0x1005bf80 */
  push32((uint32_t)(0x1005bf80u));
  /* 100554bf call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100554c5u);
  /* 100554c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100554c7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100554c9 push 0x1005bf88 */
  push32((uint32_t)(0x1005bf88u));
  /* 100554ce call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100554d4u);
  /* 100554d4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100554d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100554d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100554db push 0x1005c220 */
  push32((uint32_t)(0x1005c220u));
  /* 100554e0 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100554e6u);
  /* 100554e6 push 0x1005c0f8 */
  push32((uint32_t)(0x1005c0f8u));
  /* 100554eb call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100554f1u);
  /* 100554f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100554f4 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100554f7 jle 0x1005550b */
  if ((C.zf||C.sf!=C.of)) goto L_1005550b;
  /* 100554f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100554fb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100554fd push 0x1005c228 */
  push32((uint32_t)(0x1005c228u));
  /* 10055502 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055508u);
  /* 10055508 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005550b:;
  /* 1005550b push 0x10059718 */
  push32((uint32_t)(0x10059718u));
  /* 10055510 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10055516u);
  /* 10055516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055519 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005551c jle 0x1005553f */
  if ((C.zf||C.sf!=C.of)) goto L_1005553f;
  /* 1005551e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055520 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055522 push 0x1005c278 */
  push32((uint32_t)(0x1005c278u));
  /* 10055527 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005552du);
  /* 1005552d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005552f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055531 push 0x1005bfe0 */
  push32((uint32_t)(0x1005bfe0u));
  /* 10055536 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005553cu);
  /* 1005553c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005553f:;
  /* 1005553f push 0x1005c3c8 */
  push32((uint32_t)(0x1005c3c8u));
  /* 10055544 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x1005554au);
  /* 1005554a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005554d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055550 jle 0x10055623 */
  if ((C.zf||C.sf!=C.of)) goto L_10055623;
  /* 10055556 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055558 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1005555a push 0x1005c148 */
  push32((uint32_t)(0x1005c148u));
  /* 1005555f call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055565u);
  /* 10055565 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055567 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10055569 push 0x1005c140 */
  push32((uint32_t)(0x1005c140u));
  /* 1005556e call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055574u);
  /* 10055574 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055576 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055578 push 0x1005c138 */
  push32((uint32_t)(0x1005c138u));
  /* 1005557d call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055583u);
  /* 10055583 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055585 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10055587 push 0x1005c030 */
  push32((uint32_t)(0x1005c030u));
  /* 1005558c call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055592u);
  /* 10055592 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055594 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10055596 push 0x1005c028 */
  push32((uint32_t)(0x1005c028u));
  /* 1005559b call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100555a1u);
  /* 100555a1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100555a3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100555a5 push 0x1005c020 */
  push32((uint32_t)(0x1005c020u));
  /* 100555aa call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100555b0u);
  /* 100555b0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100555b3 push 0x1005c3c8 */
  push32((uint32_t)(0x1005c3c8u));
  /* 100555b8 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100555beu);
  /* 100555be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100555c1 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100555c4 jle 0x10055623 */
  if ((C.zf||C.sf!=C.of)) goto L_10055623;
  /* 100555c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100555c8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100555ca push 0x1005c130 */
  push32((uint32_t)(0x1005c130u));
  /* 100555cf call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100555d5u);
  /* 100555d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100555d7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100555d9 push 0x1005c120 */
  push32((uint32_t)(0x1005c120u));
  /* 100555de call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100555e4u);
  /* 100555e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100555e6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100555e8 push 0x1005c170 */
  push32((uint32_t)(0x1005c170u));
  /* 100555ed call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100555f3u);
  /* 100555f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100555f5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100555f7 push 0x1005c018 */
  push32((uint32_t)(0x1005c018u));
  /* 100555fc call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055602u);
  /* 10055602 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055604 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10055606 push 0x1005c010 */
  push32((uint32_t)(0x1005c010u));
  /* 1005560b call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055611u);
  /* 10055611 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055613 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10055615 push 0x1005c008 */
  push32((uint32_t)(0x1005c008u));
  /* 1005561a call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055620u);
  /* 10055620 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055623:;
  /* 10055623 push 0x1005c348 */
  push32((uint32_t)(0x1005c348u));
  /* 10055628 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x1005562eu);
  /* 1005562e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055631 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055634 jle 0x10055706 */
  if ((C.zf||C.sf!=C.of)) goto L_10055706;
  /* 1005563a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005563c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1005563e push 0x10059760 */
  push32((uint32_t)(0x10059760u));
  /* 10055643 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055649u);
  /* 10055649 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005564b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1005564d push 0x10059758 */
  push32((uint32_t)(0x10059758u));
  /* 10055652 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055658u);
  /* 10055658 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005565a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1005565c push 0x10059750 */
  push32((uint32_t)(0x10059750u));
  /* 10055661 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055667u);
  /* 10055667 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055669 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1005566b push 0x100596d0 */
  push32((uint32_t)(0x100596d0u));
  /* 10055670 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055676u);
  /* 10055676 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055678 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1005567a push 0x100596c8 */
  push32((uint32_t)(0x100596c8u));
  /* 1005567f call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055685u);
  /* 10055685 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055687 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10055689 push 0x100596c0 */
  push32((uint32_t)(0x100596c0u));
  /* 1005568e call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055694u);
  /* 10055694 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055697 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055699 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1005569b push 0x100596b8 */
  push32((uint32_t)(0x100596b8u));
  /* 100556a0 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100556a6u);
  /* 100556a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100556a8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100556aa push 0x10059690 */
  push32((uint32_t)(0x10059690u));
  /* 100556af call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100556b5u);
  /* 100556b5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100556b7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100556b9 push 0x10059688 */
  push32((uint32_t)(0x10059688u));
  /* 100556be call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100556c4u);
  /* 100556c4 push 0x10059688 */
  push32((uint32_t)(0x10059688u));
  /* 100556c9 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x100556cfu);
  /* 100556cf add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100556d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100556d4 je 0x10055706 */
  if (C.zf) goto L_10055706;
  /* 100556d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100556d8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100556da push 0x10059738 */
  push32((uint32_t)(0x10059738u));
  /* 100556df call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100556e5u);
  /* 100556e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100556e7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100556e9 push 0x10059730 */
  push32((uint32_t)(0x10059730u));
  /* 100556ee call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100556f4u);
  /* 100556f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100556f6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100556f8 push 0x10059728 */
  push32((uint32_t)(0x10059728u));
  /* 100556fd call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055703u);
  /* 10055703 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055706:;
  /* 10055706 push 0x100596a8 */
  push32((uint32_t)(0x100596a8u));
  /* 1005570b call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10055711u);
  /* 10055711 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055714 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055717 jle 0x1005579f */
  if ((C.zf||C.sf!=C.of)) goto L_1005579f;
  /* 1005571d push 0x10059698 */
  push32((uint32_t)(0x10059698u));
  /* 10055722 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10055728u);
  /* 10055728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005572b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005572e jge 0x1005579f */
  if ((C.sf==C.of)) goto L_1005579f;
  /* 10055730 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055732 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10055734 push 0x10059918 */
  push32((uint32_t)(0x10059918u));
  /* 10055739 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005573fu);
  /* 1005573f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055741 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10055743 push 0x10059910 */
  push32((uint32_t)(0x10059910u));
  /* 10055748 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005574eu);
  /* 1005574e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055750 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055752 push 0x10059908 */
  push32((uint32_t)(0x10059908u));
  /* 10055757 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005575du);
  /* 1005575d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005575f push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10055761 push 0x100598d0 */
  push32((uint32_t)(0x100598d0u));
  /* 10055766 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005576cu);
  /* 1005576c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005576e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10055770 push 0x100598c8 */
  push32((uint32_t)(0x100598c8u));
  /* 10055775 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005577bu);
  /* 1005577b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005577d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1005577f push 0x100598c0 */
  push32((uint32_t)(0x100598c0u));
  /* 10055784 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005578au);
  /* 1005578a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005578d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005578f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055791 push 0x1005c220 */
  push32((uint32_t)(0x1005c220u));
  /* 10055796 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005579cu);
  /* 1005579c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005579f:;
  /* 1005579f push 0x10059698 */
  push32((uint32_t)(0x10059698u));
  /* 100557a4 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100557aau);
  /* 100557aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100557ad cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100557b0 jle 0x10055891 */
  if ((C.zf||C.sf!=C.of)) goto L_10055891;
  /* 100557b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100557b8 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 100557ba push 0x10059670 */
  push32((uint32_t)(0x10059670u));
  /* 100557bf call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100557c5u);
  /* 100557c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100557c7 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 100557c9 push 0x10059668 */
  push32((uint32_t)(0x10059668u));
  /* 100557ce call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100557d4u);
  /* 100557d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100557d6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100557d8 push 0x10059660 */
  push32((uint32_t)(0x10059660u));
  /* 100557dd call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100557e3u);
  /* 100557e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100557e5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100557e7 push 0x1005c330 */
  push32((uint32_t)(0x1005c330u));
  /* 100557ec call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100557f2u);
  /* 100557f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100557f4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 100557f6 push 0x1005c328 */
  push32((uint32_t)(0x1005c328u));
  /* 100557fb call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055801u);
  /* 10055801 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055803 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10055805 push 0x1005c320 */
  push32((uint32_t)(0x1005c320u));
  /* 1005580a call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055810u);
  /* 10055810 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055813 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055815 push 0xa */
  push32((uint32_t)(0xau));
  /* 10055817 push 0x1005c3a8 */
  push32((uint32_t)(0x1005c3a8u));
  /* 1005581c call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055822u);
  /* 10055822 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055824 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10055826 push 0x1005c3a0 */
  push32((uint32_t)(0x1005c3a0u));
  /* 1005582b call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055831u);
  /* 10055831 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055833 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10055835 push 0x1005c3f0 */
  push32((uint32_t)(0x1005c3f0u));
  /* 1005583a call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055840u);
  /* 10055840 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055842 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10055844 push 0x1005c3e8 */
  push32((uint32_t)(0x1005c3e8u));
  /* 10055849 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005584fu);
  /* 1005584f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055851 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10055853 push 0x1005c3e0 */
  push32((uint32_t)(0x1005c3e0u));
  /* 10055858 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005585eu);
  /* 1005585e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055860 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10055862 push 0x1005c3d8 */
  push32((uint32_t)(0x1005c3d8u));
  /* 10055867 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005586du);
  /* 1005586d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055870 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055872 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055874 push 0x1005c220 */
  push32((uint32_t)(0x1005c220u));
  /* 10055879 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005587fu);
  /* 1005587f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055881 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055883 push 0x1005c228 */
  push32((uint32_t)(0x1005c228u));
  /* 10055888 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005588eu);
  /* 1005588e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055891:;
  /* 10055891 push 0x1005bf98 */
  push32((uint32_t)(0x1005bf98u));
  /* 10055896 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x1005589cu);
  /* 1005589c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005589f cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100558a2 jle 0x10055a00 */
  if ((C.zf||C.sf!=C.of)) goto L_10055a00;
  /* 100558a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100558aa push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100558ac push 0x100596f8 */
  push32((uint32_t)(0x100596f8u));
  /* 100558b1 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100558b7u);
  /* 100558b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100558b9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100558bb push 0x10059700 */
  push32((uint32_t)(0x10059700u));
  /* 100558c0 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100558c6u);
  /* 100558c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100558c8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100558ca push 0x10059708 */
  push32((uint32_t)(0x10059708u));
  /* 100558cf call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100558d5u);
  /* 100558d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100558d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100558d9 push 0x10059710 */
  push32((uint32_t)(0x10059710u));
  /* 100558de call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100558e4u);
  /* 100558e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100558e6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100558e8 push 0x100596d8 */
  push32((uint32_t)(0x100596d8u));
  /* 100558ed call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100558f3u);
  /* 100558f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100558f5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100558f7 push 0x100596e8 */
  push32((uint32_t)(0x100596e8u));
  /* 100558fc call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055902u);
  /* 10055902 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055905 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055907 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055909 push 0x100597a0 */
  push32((uint32_t)(0x100597a0u));
  /* 1005590e call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055914u);
  /* 10055914 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055916 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055918 push 0x100597a8 */
  push32((uint32_t)(0x100597a8u));
  /* 1005591d call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055923u);
  /* 10055923 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055925 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055927 push 0x100597b0 */
  push32((uint32_t)(0x100597b0u));
  /* 1005592c call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055932u);
  /* 10055932 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055934 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055936 push 0x10059788 */
  push32((uint32_t)(0x10059788u));
  /* 1005593b call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055941u);
  /* 10055941 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055943 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055945 push 0x10059790 */
  push32((uint32_t)(0x10059790u));
  /* 1005594a call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055950u);
  /* 10055950 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055952 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055954 push 0x10059798 */
  push32((uint32_t)(0x10059798u));
  /* 10055959 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005595fu);
  /* 1005595f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055962 push 0x1005bf98 */
  push32((uint32_t)(0x1005bf98u));
  /* 10055967 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x1005596du);
  /* 1005596d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055970 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055973 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055975 jle 0x1005598a */
  if ((C.zf||C.sf!=C.of)) goto L_1005598a;
  /* 10055977 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055979 push 0x1005c040 */
  push32((uint32_t)(0x1005c040u));
  /* 1005597e call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055984u);
  /* 10055984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055986 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055988 jmp 0x1005599b */
  goto L_1005599b;
L_1005598a:;
  /* 1005598a push 0xf */
  push32((uint32_t)(0xfu));
  /* 1005598c push 0x1005c040 */
  push32((uint32_t)(0x1005c040u));
  /* 10055991 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055997u);
  /* 10055997 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055999 push 0xf */
  push32((uint32_t)(0xfu));
L_1005599b:;
  /* 1005599b push 0x1005c0a0 */
  push32((uint32_t)(0x1005c0a0u));
  /* 100559a0 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100559a6u);
  /* 100559a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100559a9 push 0x1005c040 */
  push32((uint32_t)(0x1005c040u));
  /* 100559ae call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x100559b4u);
  /* 100559b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100559b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100559b9 je 0x100559df */
  if (C.zf) goto L_100559df;
  /* 100559bb push 0x1005c0a0 */
  push32((uint32_t)(0x1005c0a0u));
  /* 100559c0 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x100559c6u);
  /* 100559c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100559c9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100559cb je 0x100559df */
  if (C.zf) goto L_100559df;
  /* 100559cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100559cf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100559d1 push 0x1005c098 */
  push32((uint32_t)(0x1005c098u));
  /* 100559d6 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100559dcu);
  /* 100559dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100559df:;
  /* 100559df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100559e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100559e3 push 0x1005c220 */
  push32((uint32_t)(0x1005c220u));
  /* 100559e8 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100559eeu);
  /* 100559ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100559f0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100559f2 push 0x1005c228 */
  push32((uint32_t)(0x1005c228u));
  /* 100559f7 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100559fdu);
  /* 100559fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055a00:;
  /* 10055a00 push 0x1005c320 */
  push32((uint32_t)(0x1005c320u));
  /* 10055a05 call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10055a0bu);
  /* 10055a0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055a0e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10055a10 je 0x10055a87 */
  if (C.zf) goto L_10055a87;
  /* 10055a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055a14 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055a16 push 0x1005c188 */
  push32((uint32_t)(0x1005c188u));
  /* 10055a1b call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055a21u);
  /* 10055a21 push 0x1005c188 */
  push32((uint32_t)(0x1005c188u));
  /* 10055a26 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10055a2cu);
  /* 10055a2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055a2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10055a31 je 0x10055a87 */
  if (C.zf) goto L_10055a87;
  /* 10055a33 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055a35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055a37 push 0x1005c198 */
  push32((uint32_t)(0x1005c198u));
  /* 10055a3c call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055a42u);
  /* 10055a42 push 0x1005c198 */
  push32((uint32_t)(0x1005c198u));
  /* 10055a47 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10055a4du);
  /* 10055a4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055a50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10055a52 je 0x10055a87 */
  if (C.zf) goto L_10055a87;
  /* 10055a54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055a56 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055a58 push 0x1005c190 */
  push32((uint32_t)(0x1005c190u));
  /* 10055a5d call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055a63u);
  /* 10055a63 push 0x1005c190 */
  push32((uint32_t)(0x1005c190u));
  /* 10055a68 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10055a6eu);
  /* 10055a6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055a71 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10055a73 je 0x10055a87 */
  if (C.zf) goto L_10055a87;
  /* 10055a75 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055a77 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055a79 push 0x1005c180 */
  push32((uint32_t)(0x1005c180u));
  /* 10055a7e call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055a84u);
  /* 10055a84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055a87:;
  /* 10055a87 ret  */
  ESPCHK(0x100552b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a90 @ 0x10055a90 (305 bytes, 86 insns) */
void f_10055a90(void) {
  FTRACE(0x10055a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10055a90 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055a92 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10055a94 push 0x1005c390 */
  push32((uint32_t)(0x1005c390u));
  /* 10055a99 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055a9fu);
  /* 10055a9f push 0x1005bf38 */
  push32((uint32_t)(0x1005bf38u));
  /* 10055aa4 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10055aaau);
  /* 10055aaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055aad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10055aaf je 0x10055ac3 */
  if (C.zf) goto L_10055ac3;
  /* 10055ab1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055ab3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055ab5 push 0x10059678 */
  push32((uint32_t)(0x10059678u));
  /* 10055aba call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055ac0u);
  /* 10055ac0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055ac3:;
  /* 10055ac3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055ac5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055ac7 push 0x1005c090 */
  push32((uint32_t)(0x1005c090u));
  /* 10055acc call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055ad2u);
  /* 10055ad2 push 0x100596a0 */
  push32((uint32_t)(0x100596a0u));
  /* 10055ad7 call 0x10055270 */
  push32(0x10055adcu); f_10055270();
  /* 10055adc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055adf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10055ae1 jne 0x10055af1 */
  if (!C.zf) goto L_10055af1;
  /* 10055ae3 mov eax, dword ptr [0x1005bf70] */
  EAX = (r32((uint32_t)(0x1005bf70)));
  /* 10055ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10055aea je 0x10055b03 */
  if (C.zf) goto L_10055b03;
  /* 10055aec cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055aef je 0x10055b03 */
  if (C.zf) goto L_10055b03;
L_10055af1:;
  /* 10055af1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055af3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10055af5 push 0x1005c288 */
  push32((uint32_t)(0x1005c288u));
  /* 10055afa call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055b00u);
  /* 10055b00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055b03:;
  /* 10055b03 push 0x1005c000 */
  push32((uint32_t)(0x1005c000u));
  /* 10055b08 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10055b0eu);
  /* 10055b0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055b11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10055b13 je 0x10055b27 */
  if (C.zf) goto L_10055b27;
  /* 10055b15 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055b17 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055b19 push 0x1005c058 */
  push32((uint32_t)(0x1005c058u));
  /* 10055b1e call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055b24u);
  /* 10055b24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055b27:;
  /* 10055b27 push 0x1005c168 */
  push32((uint32_t)(0x1005c168u));
  /* 10055b2c call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10055b32u);
  /* 10055b32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055b35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10055b37 je 0x10055b4b */
  if (C.zf) goto L_10055b4b;
  /* 10055b39 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055b3b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055b3d push 0x1005c048 */
  push32((uint32_t)(0x1005c048u));
  /* 10055b42 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055b48u);
  /* 10055b48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055b4b:;
  /* 10055b4b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055b4d push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10055b4f push 0x1005c168 */
  push32((uint32_t)(0x1005c168u));
  /* 10055b54 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055b5au);
  /* 10055b5a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055b5c push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10055b5e push 0x1005c118 */
  push32((uint32_t)(0x1005c118u));
  /* 10055b63 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055b69u);
  /* 10055b69 push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10055b6e call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10055b74u);
  /* 10055b74 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055b77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10055b79 je 0x10055b8d */
  if (C.zf) goto L_10055b8d;
  /* 10055b7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055b7d push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10055b7f push 0x1005c1d0 */
  push32((uint32_t)(0x1005c1d0u));
  /* 10055b84 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055b8au);
  /* 10055b8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055b8d:;
  /* 10055b8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055b8f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10055b91 push 0x1005c038 */
  push32((uint32_t)(0x1005c038u));
  /* 10055b96 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055b9cu);
  /* 10055b9c push 0x1005c270 */
  push32((uint32_t)(0x1005c270u));
  /* 10055ba1 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10055ba7u);
  /* 10055ba7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10055bac je 0x10055bc0 */
  if (C.zf) goto L_10055bc0;
  /* 10055bae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055bb0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055bb2 push 0x100598f8 */
  push32((uint32_t)(0x100598f8u));
  /* 10055bb7 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10055bbdu);
  /* 10055bbd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055bc0:;
  /* 10055bc0 ret  */
  ESPCHK(0x10055a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bd0 @ 0x10055bd0 (536 bytes, 150 insns) */
void f_10055bd0(void) {
  FTRACE(0x10055bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10055bd0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055bd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055bd4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10055bd6 push 0x1005c270 */
  push32((uint32_t)(0x1005c270u));
  /* 10055bdb call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055be1u);
  /* 10055be1 push 0x1005c000 */
  push32((uint32_t)(0x1005c000u));
  /* 10055be6 call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10055becu);
  /* 10055bec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055bef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10055bf1 je 0x10055c18 */
  if (C.zf) goto L_10055c18;
  /* 10055bf3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055bf5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10055bf9 push 0x1005bff0 */
  push32((uint32_t)(0x1005bff0u));
  /* 10055bfe call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055c04u);
  /* 10055c04 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055c06 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055c08 push 4 */
  push32((uint32_t)(0x4u));
  /* 10055c0a push 0x1005bfe8 */
  push32((uint32_t)(0x1005bfe8u));
  /* 10055c0f call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055c15u);
  /* 10055c15 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055c18:;
  /* 10055c18 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055c1a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055c1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10055c1e push 0x1005bff0 */
  push32((uint32_t)(0x1005bff0u));
  /* 10055c23 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055c29u);
  /* 10055c29 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055c2b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055c2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10055c2f push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 10055c34 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055c3au);
  /* 10055c3a mov eax, dword ptr [0x1005c2cc] */
  EAX = (r32((uint32_t)(0x1005c2cc)));
  /* 10055c3f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055c42 mov ecx, dword ptr [eax*4 + 0x1005bfb0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1005bfb0)));
  /* 10055c49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10055c4b jne 0x10055c68 */
  if (!C.zf) goto L_10055c68;
  /* 10055c4d call 0x10055220 */
  push32(0x10055c52u); f_10055220();
  /* 10055c52 push 0x10059890 */
  push32((uint32_t)(0x10059890u));
  /* 10055c57 call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10055c5du);
  /* 10055c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055c60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10055c62 je 0x10055de7 */
  if (C.zf) goto L_10055de7;
L_10055c68:;
  /* 10055c68 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055c6a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055c6c push 1 */
  push32((uint32_t)(0x1u));
  /* 10055c6e push 0x1005c200 */
  push32((uint32_t)(0x1005c200u));
  /* 10055c73 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055c79u);
  /* 10055c79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055c7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055c7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10055c7f push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 10055c84 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055c8au);
  /* 10055c8a push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 10055c8f call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10055c95u);
  /* 10055c95 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055c98 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055c9b jge 0x10055caa */
  if ((C.sf==C.of)) goto L_10055caa;
  /* 10055c9d call 0x10052670 */
  push32(0x10055ca2u); f_10052670();
  /* 10055ca2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10055ca4 jne 0x10055de7 */
  if (!C.zf) goto L_10055de7;
L_10055caa:;
  /* 10055caa push esi */
  push32((uint32_t)(ESI));
  /* 10055cab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055cad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055caf push 2 */
  push32((uint32_t)(0x2u));
  /* 10055cb1 push 0x1005c268 */
  push32((uint32_t)(0x1005c268u));
  /* 10055cb6 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055cbcu);
  /* 10055cbc push 0x1005c268 */
  push32((uint32_t)(0x1005c268u));
  /* 10055cc1 call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10055cc7u);
  /* 10055cc7 push 0x1005c268 */
  push32((uint32_t)(0x1005c268u));
  /* 10055ccc mov esi, eax */
  ESI = (EAX);
  /* 10055cce call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10055cd4u);
  /* 10055cd4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055cd7 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10055cd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10055cdb pop esi */
  ESI = (pop32());
  /* 10055cdc jg 0x10055de7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10055de7;
  /* 10055ce2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055ce4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055ce6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10055ce8 push 0x1005bf38 */
  push32((uint32_t)(0x1005bf38u));
  /* 10055ced call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055cf3u);
  /* 10055cf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055cf6 call 0x10052780 */
  push32(0x10055cfbu); f_10052780();
  /* 10055cfb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055cfe jge 0x10055d27 */
  if ((C.sf==C.of)) goto L_10055d27;
  /* 10055d00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055d02 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10055d06 push 0x1005c000 */
  push32((uint32_t)(0x1005c000u));
  /* 10055d0b call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055d11u);
  /* 10055d11 push 0x1005c000 */
  push32((uint32_t)(0x1005c000u));
  /* 10055d16 call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10055d1cu);
  /* 10055d1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055d1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10055d21 je 0x10055de7 */
  if (C.zf) goto L_10055de7;
L_10055d27:;
  /* 10055d27 call 0x10055220 */
  push32(0x10055d2cu); f_10055220();
  /* 10055d2c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055d2e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055d30 push 4 */
  push32((uint32_t)(0x4u));
  /* 10055d32 push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 10055d37 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055d3du);
  /* 10055d3d push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 10055d42 call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10055d48u);
  /* 10055d48 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055d4b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055d4e jl 0x10055de7 */
  if ((C.sf!=C.of)) goto L_10055de7;
  /* 10055d54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055d56 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055d58 push 3 */
  push32((uint32_t)(0x3u));
  /* 10055d5a push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10055d5f call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055d65u);
  /* 10055d65 push 0x1005c270 */
  push32((uint32_t)(0x1005c270u));
  /* 10055d6a call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10055d70u);
  /* 10055d70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055d73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10055d75 je 0x10055d8b */
  if (C.zf) goto L_10055d8b;
  /* 10055d77 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055d79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055d7b push 4 */
  push32((uint32_t)(0x4u));
  /* 10055d7d push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10055d82 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055d88u);
  /* 10055d88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055d8b:;
  /* 10055d8b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055d8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10055d91 push 0x10059630 */
  push32((uint32_t)(0x10059630u));
  /* 10055d96 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055d9cu);
  /* 10055d9c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055d9e push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10055da0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10055da2 push 0x10059630 */
  push32((uint32_t)(0x10059630u));
  /* 10055da7 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055dadu);
  /* 10055dad push 0x100598f8 */
  push32((uint32_t)(0x100598f8u));
  /* 10055db2 call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10055db8u);
  /* 10055db8 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055dbb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10055dbd je 0x10055dd3 */
  if (C.zf) goto L_10055dd3;
  /* 10055dbf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055dc1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055dc3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10055dc5 push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10055dca call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055dd0u);
  /* 10055dd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055dd3:;
  /* 10055dd3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055dd5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055dd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10055dd9 push 0x1005c110 */
  push32((uint32_t)(0x1005c110u));
  /* 10055dde call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055de4u);
  /* 10055de4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055de7:;
  /* 10055de7 ret  */
  ESPCHK(0x10055bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005df0 @ 0x10055df0 (472 bytes, 137 insns) */
void f_10055df0(void) {
  FTRACE(0x10055df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10055df0 push ecx */
  push32((uint32_t)(ECX));
  /* 10055df1 push 0x1005c290 */
  push32((uint32_t)(0x1005c290u));
  /* 10055df6 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10055dfcu);
  /* 10055dfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055dff cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055e02 jge 0x10055e17 */
  if ((C.sf==C.of)) goto L_10055e17;
  /* 10055e04 mov eax, dword ptr [0x1005c2cc] */
  EAX = (r32((uint32_t)(0x1005c2cc)));
  /* 10055e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10055e0b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10055e0e push eax */
  push32((uint32_t)(EAX));
  /* 10055e0f call 0x100526d0 */
  push32(0x10055e14u); f_100526d0();
  /* 10055e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055e17:;
  /* 10055e17 push 0x1005c290 */
  push32((uint32_t)(0x1005c290u));
  /* 10055e1c call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10055e22u);
  /* 10055e22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055e25 cmp eax, 0x9c */
  { uint32_t _a=(EAX),_b=(0x9cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055e2a jg 0x10055e3e */
  if ((!C.zf&&C.sf==C.of)) goto L_10055e3e;
  /* 10055e2c push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10055e31 call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10055e37u);
  /* 10055e37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10055e3c je 0x10055e52 */
  if (C.zf) goto L_10055e52;
L_10055e3e:;
  /* 10055e3e mov ecx, dword ptr [0x1005c2cc] */
  ECX = (r32((uint32_t)(0x1005c2cc)));
  /* 10055e44 push 1 */
  push32((uint32_t)(0x1u));
  /* 10055e46 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10055e49 push ecx */
  push32((uint32_t)(ECX));
  /* 10055e4a call 0x100526d0 */
  push32(0x10055e4fu); f_100526d0();
  /* 10055e4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055e52:;
  /* 10055e52 push esi */
  push32((uint32_t)(ESI));
  /* 10055e53 push edi */
  push32((uint32_t)(EDI));
  /* 10055e54 mov edi, 2 */
  EDI = (0x2u);
L_10055e59:;
  /* 10055e59 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055e5b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10055e5d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10055e62 push 0x1005c1a8 */
  push32((uint32_t)(0x1005c1a8u));
  /* 10055e67 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055e6du);
  /* 10055e6d push 0x100596a0 */
  push32((uint32_t)(0x100596a0u));
  /* 10055e72 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10055e78u);
  /* 10055e78 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055e7b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055e80 jge 0x10055e9b */
  if ((C.sf==C.of)) goto L_10055e9b;
  /* 10055e82 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055e84 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10055e86 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10055e8b push 0x100596a0 */
  push32((uint32_t)(0x100596a0u));
  /* 10055e90 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055e96u);
  /* 10055e96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055e99 jmp 0x10055ec6 */
  goto L_10055ec6;
L_10055e9b:;
  /* 10055e9b push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10055e9d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10055e9f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10055ea4 push 0x100596a0 */
  push32((uint32_t)(0x100596a0u));
  /* 10055ea9 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055eafu);
  /* 10055eaf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055eb1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10055eb3 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10055eb8 push 0x1005c0f8 */
  push32((uint32_t)(0x1005c0f8u));
  /* 10055ebd call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055ec3u);
  /* 10055ec3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055ec6:;
  /* 10055ec6 mov edx, dword ptr [0x1005c2cc] */
  EDX = (r32((uint32_t)(0x1005c2cc)));
  /* 10055ecc add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10055ecf push edx */
  push32((uint32_t)(EDX));
  /* 10055ed0 call 0x100526f0 */
  push32(0x10055ed5u); f_100526f0();
  /* 10055ed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10055eda jne 0x10055efd */
  if (!C.zf) goto L_10055efd;
  /* 10055edc call 0x10052780 */
  push32(0x10055ee1u); f_10052780();
  /* 10055ee1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055ee4 jge 0x10055efd */
  if ((C.sf==C.of)) goto L_10055efd;
  /* 10055ee6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055ee8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10055eea push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10055eef push 0x1005c290 */
  push32((uint32_t)(0x1005c290u));
  /* 10055ef4 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055efau);
  /* 10055efa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10055efd:;
  /* 10055efd mov al, byte ptr [0x1005c2cc] */
  AL = (r8((uint32_t)(0x1005c2cc)));
  /* 10055f02 mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10055f06 mov eax, dword ptr [0x1005c4d0] */
  EAX = (r32((uint32_t)(0x1005c4d0)));
  /* 10055f0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10055f0d je 0x10055f25 */
  if (C.zf) goto L_10055f25;
  /* 10055f0f mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10055f13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10055f15 push 0x100598a0 */
  push32((uint32_t)(0x100598a0u));
  /* 10055f1a push ecx */
  push32((uint32_t)(ECX));
  /* 10055f1b call eax */
  call_ind((uint32_t)(EAX), 0x10055f1du);
  /* 10055f1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055f20 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055f23 jge 0x10055f65 */
  if ((C.sf==C.of)) goto L_10055f65;
L_10055f25:;
  /* 10055f25 push 5 */
  push32((uint32_t)(0x5u));
  /* 10055f27 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10055f2du);
  /* 10055f2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055f30 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055f35 jle 0x10055f65 */
  if ((C.zf||C.sf!=C.of)) goto L_10055f65;
  /* 10055f37 push 4 */
  push32((uint32_t)(0x4u));
  /* 10055f39 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10055f3fu);
  /* 10055f3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055f42 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055f47 jle 0x10055f65 */
  if ((C.zf||C.sf!=C.of)) goto L_10055f65;
  /* 10055f49 mov esi, 0x1e */
  ESI = (0x1eu);
L_10055f4e:;
  /* 10055f4e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055f50 push 0xa */
  push32((uint32_t)(0xau));
  /* 10055f52 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10055f54 push 0x100598a0 */
  push32((uint32_t)(0x100598a0u));
  /* 10055f59 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055f5fu);
  /* 10055f5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055f62 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10055f63 jne 0x10055f4e */
  if (!C.zf) goto L_10055f4e;
L_10055f65:;
  /* 10055f65 push 0x1005c038 */
  push32((uint32_t)(0x1005c038u));
  /* 10055f6a call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10055f70u);
  /* 10055f70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055f73 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10055f75 je 0x10055f7b */
  if (C.zf) goto L_10055f7b;
  /* 10055f77 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10055f79 jmp 0x10055f7d */
  goto L_10055f7d;
L_10055f7b:;
  /* 10055f7b push 0x64 */
  push32((uint32_t)(0x64u));
L_10055f7d:;
  /* 10055f7d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10055f7f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10055f84 push 0x1005c3c8 */
  push32((uint32_t)(0x1005c3c8u));
  /* 10055f89 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055f8fu);
  /* 10055f8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055f92 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055f94 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10055f96 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10055f9b push 0x10059698 */
  push32((uint32_t)(0x10059698u));
  /* 10055fa0 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055fa6u);
  /* 10055fa6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10055fa8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10055faa push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10055faf push 0x1005bf98 */
  push32((uint32_t)(0x1005bf98u));
  /* 10055fb4 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10055fbau);
  /* 10055fba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055fbd dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10055fbe jne 0x10055e59 */
  if (!C.zf) goto L_10055e59;
  /* 10055fc4 pop edi */
  EDI = (pop32());
  /* 10055fc5 pop esi */
  ESI = (pop32());
  /* 10055fc6 pop ecx */
  ECX = (pop32());
  /* 10055fc7 ret  */
  ESPCHK(0x10055df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fd0 @ 0x10055fd0 (789 bytes, 244 insns) */
void f_10055fd0(void) {
  FTRACE(0x10055fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10055fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10055fd1 push 0x10059890 */
  push32((uint32_t)(0x10059890u));
  /* 10055fd6 call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10055fdcu);
  /* 10055fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055fdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10055fe1 je 0x100562e3 */
  if (C.zf) goto L_100562e3;
  /* 10055fe7 call 0x10052670 */
  push32(0x10055fecu); f_10052670();
  /* 10055fec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10055fef jne 0x10056036 */
  if (!C.zf) goto L_10056036;
  /* 10055ff1 mov eax, dword ptr [0x1005c2cc] */
  EAX = (r32((uint32_t)(0x1005c2cc)));
  /* 10055ff6 push eax */
  push32((uint32_t)(EAX));
  /* 10055ff7 call 0x100526f0 */
  push32(0x10055ffcu); f_100526f0();
  /* 10055ffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10055fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056001 jne 0x100562e3 */
  if (!C.zf) goto L_100562e3;
  /* 10056007 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 1005600c push 3 */
  push32((uint32_t)(0x3u));
  /* 1005600e push 2 */
  push32((uint32_t)(0x2u));
  /* 10056010 call 0x10052610 */
  push32(0x10056015u); f_10052610();
  /* 10056015 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 1005601a push 3 */
  push32((uint32_t)(0x3u));
  /* 1005601c push 0 */
  push32((uint32_t)(0x0u));
  /* 1005601e call 0x10052610 */
  push32(0x10056023u); f_10052610();
  /* 10056023 mov ecx, dword ptr [0x1005c2cc] */
  ECX = (r32((uint32_t)(0x1005c2cc)));
  /* 10056029 push 1 */
  push32((uint32_t)(0x1u));
  /* 1005602b push ecx */
  push32((uint32_t)(ECX));
  /* 1005602c call 0x100526d0 */
  push32(0x10056031u); f_100526d0();
  /* 10056031 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056034 pop ecx */
  ECX = (pop32());
  /* 10056035 ret  */
  ESPCHK(0x10055fd0u, _esp0);
  ESP += 4; return;
L_10056036:;
  /* 10056036 push 0x10059890 */
  push32((uint32_t)(0x10059890u));
  /* 1005603b call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10056041u);
  /* 10056041 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056046 je 0x100562e3 */
  if (C.zf) goto L_100562e3;
  /* 1005604c mov edx, dword ptr [0x1005c2cc] */
  EDX = (r32((uint32_t)(0x1005c2cc)));
  /* 10056052 push edx */
  push32((uint32_t)(EDX));
  /* 10056053 call 0x100526f0 */
  push32(0x10056058u); f_100526f0();
  /* 10056058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005605b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005605d jne 0x100560d2 */
  if (!C.zf) goto L_100560d2;
  /* 1005605f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10056064 push 3 */
  push32((uint32_t)(0x3u));
  /* 10056066 push 5 */
  push32((uint32_t)(0x5u));
  /* 10056068 call 0x10052610 */
  push32(0x1005606du); f_10052610();
  /* 1005606d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056070 call 0x10052670 */
  push32(0x10056075u); f_10052670();
  /* 10056075 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056078 jne 0x10056099 */
  if (!C.zf) goto L_10056099;
  /* 1005607a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1005607f push 0 */
  push32((uint32_t)(0x0u));
  /* 10056081 push 4 */
  push32((uint32_t)(0x4u));
  /* 10056083 call 0x10052610 */
  push32(0x10056088u); f_10052610();
  /* 10056088 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1005608d push 2 */
  push32((uint32_t)(0x2u));
  /* 1005608f push 4 */
  push32((uint32_t)(0x4u));
  /* 10056091 call 0x10052610 */
  push32(0x10056096u); f_10052610();
  /* 10056096 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10056099:;
  /* 10056099 call 0x10052670 */
  push32(0x1005609eu); f_10052670();
  /* 1005609e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100560a1 jne 0x100560c2 */
  if (!C.zf) goto L_100560c2;
  /* 100560a3 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 100560a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100560aa push 4 */
  push32((uint32_t)(0x4u));
  /* 100560ac call 0x10052610 */
  push32(0x100560b1u); f_10052610();
  /* 100560b1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 100560b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 100560b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 100560ba call 0x10052610 */
  push32(0x100560bfu); f_10052610();
  /* 100560bf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100560c2:;
  /* 100560c2 mov eax, dword ptr [0x1005c2cc] */
  EAX = (r32((uint32_t)(0x1005c2cc)));
  /* 100560c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100560c9 push eax */
  push32((uint32_t)(EAX));
  /* 100560ca call 0x100526d0 */
  push32(0x100560cfu); f_100526d0();
  /* 100560cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100560d2:;
  /* 100560d2 push 0x1005c288 */
  push32((uint32_t)(0x1005c288u));
  /* 100560d7 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x100560ddu);
  /* 100560dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100560e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100560e2 je 0x10056154 */
  if (C.zf) goto L_10056154;
  /* 100560e4 push 0x1005c168 */
  push32((uint32_t)(0x1005c168u));
  /* 100560e9 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x100560efu);
  /* 100560ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100560f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100560f4 jne 0x10056154 */
  if (!C.zf) goto L_10056154;
  /* 100560f6 push 0x1005bf38 */
  push32((uint32_t)(0x1005bf38u));
  /* 100560fb call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10056101u);
  /* 10056101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056106 je 0x10056154 */
  if (C.zf) goto L_10056154;
  /* 10056108 mov eax, dword ptr [0x1005c4d4] */
  EAX = (r32((uint32_t)(0x1005c4d4)));
  /* 1005610d mov cl, byte ptr [0x1005c2cc] */
  CL = (r8((uint32_t)(0x1005c2cc)));
  /* 10056113 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056115 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10056119 je 0x1005612e */
  if (C.zf) goto L_1005612e;
  /* 1005611b mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 1005611f push 5 */
  push32((uint32_t)(0x5u));
  /* 10056121 push 0x1005c168 */
  push32((uint32_t)(0x1005c168u));
  /* 10056126 push edx */
  push32((uint32_t)(EDX));
  /* 10056127 call eax */
  call_ind((uint32_t)(EAX), 0x10056129u);
  /* 10056129 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005612c jmp 0x10056130 */
  goto L_10056130;
L_1005612e:;
  /* 1005612e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10056130:;
  /* 10056130 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10056133 push 0 */
  push32((uint32_t)(0x0u));
  /* 10056135 lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 10056138 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 1005613d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1005613f sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10056142 mov eax, edx */
  EAX = (EDX);
  /* 10056144 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10056147 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10056149 push edx */
  push32((uint32_t)(EDX));
  /* 1005614a push 5 */
  push32((uint32_t)(0x5u));
  /* 1005614c call 0x10052f90 */
  push32(0x10056151u); f_10052f90();
  /* 10056151 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10056154:;
  /* 10056154 push 0x1005c168 */
  push32((uint32_t)(0x1005c168u));
  /* 10056159 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x1005615fu);
  /* 1005615f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056162 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10056164 je 0x10056279 */
  if (C.zf) goto L_10056279;
  /* 1005616a push 0x1005c038 */
  push32((uint32_t)(0x1005c038u));
  /* 1005616f call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10056175u);
  /* 10056175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056178 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1005617a jne 0x10056279 */
  if (!C.zf) goto L_10056279;
  /* 10056180 mov eax, dword ptr [0x1005c4d4] */
  EAX = (r32((uint32_t)(0x1005c4d4)));
  /* 10056185 mov cl, byte ptr [0x1005c2cc] */
  CL = (r8((uint32_t)(0x1005c2cc)));
  /* 1005618b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005618d mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10056191 je 0x100561a6 */
  if (C.zf) goto L_100561a6;
  /* 10056193 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10056197 push 3 */
  push32((uint32_t)(0x3u));
  /* 10056199 push 0x1005c038 */
  push32((uint32_t)(0x1005c038u));
  /* 1005619e push edx */
  push32((uint32_t)(EDX));
  /* 1005619f call eax */
  call_ind((uint32_t)(EAX), 0x100561a1u);
  /* 100561a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100561a4 jmp 0x100561a8 */
  goto L_100561a8;
L_100561a6:;
  /* 100561a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100561a8:;
  /* 100561a8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100561ab push 2 */
  push32((uint32_t)(0x2u));
  /* 100561ad lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 100561b0 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 100561b5 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 100561b7 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 100561ba mov eax, edx */
  EAX = (EDX);
  /* 100561bc shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100561bf add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100561c1 push edx */
  push32((uint32_t)(EDX));
  /* 100561c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 100561c4 call 0x10052f90 */
  push32(0x100561c9u); f_10052f90();
  /* 100561c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100561cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100561ce je 0x10056279 */
  if (C.zf) goto L_10056279;
  /* 100561d4 mov eax, dword ptr [0x1005c4d4] */
  EAX = (r32((uint32_t)(0x1005c4d4)));
  /* 100561d9 mov cl, byte ptr [0x1005c2cc] */
  CL = (r8((uint32_t)(0x1005c2cc)));
  /* 100561df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100561e1 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 100561e5 je 0x100561fa */
  if (C.zf) goto L_100561fa;
  /* 100561e7 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 100561eb push 1 */
  push32((uint32_t)(0x1u));
  /* 100561ed push 0x1005c038 */
  push32((uint32_t)(0x1005c038u));
  /* 100561f2 push edx */
  push32((uint32_t)(EDX));
  /* 100561f3 call eax */
  call_ind((uint32_t)(EAX), 0x100561f5u);
  /* 100561f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100561f8 jmp 0x100561fc */
  goto L_100561fc;
L_100561fa:;
  /* 100561fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100561fc:;
  /* 100561fc lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 10056203 push 2 */
  push32((uint32_t)(0x2u));
  /* 10056205 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10056207 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 1005620a lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1005620d mov eax, 0x51eb851f */
  EAX = (0x51eb851fu);
  /* 10056212 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10056214 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10056217 mov eax, edx */
  EAX = (EDX);
  /* 10056219 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1005621c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1005621e push edx */
  push32((uint32_t)(EDX));
  /* 1005621f push 1 */
  push32((uint32_t)(0x1u));
  /* 10056221 call 0x10052f90 */
  push32(0x10056226u); f_10052f90();
  /* 10056226 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056229 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1005622b je 0x10056279 */
  if (C.zf) goto L_10056279;
  /* 1005622d mov eax, dword ptr [0x1005c4d4] */
  EAX = (r32((uint32_t)(0x1005c4d4)));
  /* 10056232 mov cl, byte ptr [0x1005c2cc] */
  CL = (r8((uint32_t)(0x1005c2cc)));
  /* 10056238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005623a mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 1005623e je 0x10056253 */
  if (C.zf) goto L_10056253;
  /* 10056240 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10056244 push 4 */
  push32((uint32_t)(0x4u));
  /* 10056246 push 0x1005c038 */
  push32((uint32_t)(0x1005c038u));
  /* 1005624b push edx */
  push32((uint32_t)(EDX));
  /* 1005624c call eax */
  call_ind((uint32_t)(EAX), 0x1005624eu);
  /* 1005624e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056251 jmp 0x10056255 */
  goto L_10056255;
L_10056253:;
  /* 10056253 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10056255:;
  /* 10056255 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10056258 push 2 */
  push32((uint32_t)(0x2u));
  /* 1005625a lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 1005625d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10056262 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10056264 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10056267 mov eax, edx */
  EAX = (EDX);
  /* 10056269 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1005626c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1005626e push edx */
  push32((uint32_t)(EDX));
  /* 1005626f push 4 */
  push32((uint32_t)(0x4u));
  /* 10056271 call 0x10052f90 */
  push32(0x10056276u); f_10052f90();
  /* 10056276 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10056279:;
  /* 10056279 push 2 */
  push32((uint32_t)(0x2u));
  /* 1005627b call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10056281u);
  /* 10056281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056284 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056289 jle 0x100562ae */
  if ((C.zf||C.sf!=C.of)) goto L_100562ae;
  /* 1005628b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10056290 push 2 */
  push32((uint32_t)(0x2u));
  /* 10056292 push 0 */
  push32((uint32_t)(0x0u));
  /* 10056294 call 0x10052610 */
  push32(0x10056299u); f_10052610();
  /* 10056299 push 2 */
  push32((uint32_t)(0x2u));
  /* 1005629b call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100562a1u);
  /* 100562a1 push eax */
  push32((uint32_t)(EAX));
  /* 100562a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100562a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100562a6 call 0x10052610 */
  push32(0x100562abu); f_10052610();
  /* 100562ab add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100562ae:;
  /* 100562ae push 0 */
  push32((uint32_t)(0x0u));
  /* 100562b0 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100562b6u);
  /* 100562b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100562b9 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100562be jle 0x100562e3 */
  if ((C.zf||C.sf!=C.of)) goto L_100562e3;
  /* 100562c0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 100562c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100562c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 100562c9 call 0x10052610 */
  push32(0x100562ceu); f_10052610();
  /* 100562ce push 0 */
  push32((uint32_t)(0x0u));
  /* 100562d0 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100562d6u);
  /* 100562d6 push eax */
  push32((uint32_t)(EAX));
  /* 100562d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100562d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 100562db call 0x10052610 */
  push32(0x100562e0u); f_10052610();
  /* 100562e0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100562e3:;
  /* 100562e3 pop ecx */
  ECX = (pop32());
  /* 100562e4 ret  */
  ESPCHK(0x10055fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f0 @ 0x100562f0 (818 bytes, 268 insns) */
void f_100562f0(void) {
  FTRACE(0x100562f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100562f0 push ecx */
  push32((uint32_t)(ECX));
  /* 100562f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100562f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 100562f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100562f7 call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x100562fdu);
  /* 100562fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056300 call dword ptr [0x1005c588] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c588))), 0x10056306u);
  /* 10056306 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10056308 je 0x10056620 */
  if (C.zf) goto L_10056620;
  /* 1005630e push 4 */
  push32((uint32_t)(0x4u));
  /* 10056310 push 4 */
  push32((uint32_t)(0x4u));
  /* 10056312 push 9 */
  push32((uint32_t)(0x9u));
  /* 10056314 call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x1005631au);
  /* 1005631a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005631d call 0x10052670 */
  push32(0x10056322u); f_10052670();
  /* 10056322 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056325 je 0x10056620 */
  if (C.zf) goto L_10056620;
  /* 1005632b call dword ptr [0x1005c588] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c588))), 0x10056331u);
  /* 10056331 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10056333 je 0x10056611 */
  if (C.zf) goto L_10056611;
  /* 10056339 push esi */
  push32((uint32_t)(ESI));
  /* 1005633a push edi */
  push32((uint32_t)(EDI));
  /* 1005633b push 4 */
  push32((uint32_t)(0x4u));
  /* 1005633d push 4 */
  push32((uint32_t)(0x4u));
  /* 1005633f push 9 */
  push32((uint32_t)(0x9u));
  /* 10056341 call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x10056347u);
  /* 10056347 push 0x1005c118 */
  push32((uint32_t)(0x1005c118u));
  /* 1005634c call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10056352u);
  /* 10056352 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056355 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10056357 jne 0x100563bf */
  if (!C.zf) goto L_100563bf;
  /* 10056359 mov al, byte ptr [0x1005c2cc] */
  AL = (r8((uint32_t)(0x1005c2cc)));
  /* 1005635e mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10056362 mov eax, dword ptr [0x1005c4d4] */
  EAX = (r32((uint32_t)(0x1005c4d4)));
  /* 10056367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056369 je 0x10056380 */
  if (C.zf) goto L_10056380;
  /* 1005636b mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1005636f push 3 */
  push32((uint32_t)(0x3u));
  /* 10056371 push 0x1005c118 */
  push32((uint32_t)(0x1005c118u));
  /* 10056376 push ecx */
  push32((uint32_t)(ECX));
  /* 10056377 call eax */
  call_ind((uint32_t)(EAX), 0x10056379u);
  /* 10056379 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005637c mov esi, eax */
  ESI = (EAX);
  /* 1005637e jmp 0x10056382 */
  goto L_10056382;
L_10056380:;
  /* 10056380 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10056382:;
  /* 10056382 push 3 */
  push32((uint32_t)(0x3u));
  /* 10056384 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x1005638au);
  /* 1005638a lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 1005638d mov edi, eax */
  EDI = (EAX);
  /* 1005638f mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10056394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056397 lea ecx, [esi + edx*2] */
  ECX = ((uint32_t)(ESI + EDX*2));
  /* 1005639a imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1005639c sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 1005639f mov eax, edx */
  EAX = (EDX);
  /* 100563a1 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 100563a4 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100563a6 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100563a8 jge 0x100563b0 */
  if ((C.sf==C.of)) goto L_100563b0;
  /* 100563aa push 4 */
  push32((uint32_t)(0x4u));
  /* 100563ac push 4 */
  push32((uint32_t)(0x4u));
  /* 100563ae jmp 0x100563b4 */
  goto L_100563b4;
L_100563b0:;
  /* 100563b0 push 6 */
  push32((uint32_t)(0x6u));
  /* 100563b2 push 6 */
  push32((uint32_t)(0x6u));
L_100563b4:;
  /* 100563b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 100563b6 call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x100563bcu);
  /* 100563bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100563bf:;
  /* 100563bf push 0x1005c038 */
  push32((uint32_t)(0x1005c038u));
  /* 100563c4 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x100563cau);
  /* 100563ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100563cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100563cf jne 0x10056438 */
  if (!C.zf) goto L_10056438;
  /* 100563d1 mov eax, dword ptr [0x1005c4d4] */
  EAX = (r32((uint32_t)(0x1005c4d4)));
  /* 100563d6 mov cl, byte ptr [0x1005c2cc] */
  CL = (r8((uint32_t)(0x1005c2cc)));
  /* 100563dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100563de mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 100563e2 je 0x100563f9 */
  if (C.zf) goto L_100563f9;
  /* 100563e4 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 100563e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 100563ea push 0x1005c038 */
  push32((uint32_t)(0x1005c038u));
  /* 100563ef push edx */
  push32((uint32_t)(EDX));
  /* 100563f0 call eax */
  call_ind((uint32_t)(EAX), 0x100563f2u);
  /* 100563f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100563f5 mov esi, eax */
  ESI = (EAX);
  /* 100563f7 jmp 0x100563fb */
  goto L_100563fb;
L_100563f9:;
  /* 100563f9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100563fb:;
  /* 100563fb push 3 */
  push32((uint32_t)(0x3u));
  /* 100563fd call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10056403u);
  /* 10056403 mov edi, eax */
  EDI = (EAX);
  /* 10056405 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10056408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005640b lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1005640e mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10056413 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10056415 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10056418 mov ecx, edx */
  ECX = (EDX);
  /* 1005641a shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1005641d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1005641f cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056421 jge 0x10056429 */
  if ((C.sf==C.of)) goto L_10056429;
  /* 10056423 push 9 */
  push32((uint32_t)(0x9u));
  /* 10056425 push 2 */
  push32((uint32_t)(0x2u));
  /* 10056427 jmp 0x1005642d */
  goto L_1005642d;
L_10056429:;
  /* 10056429 push 6 */
  push32((uint32_t)(0x6u));
  /* 1005642b push 6 */
  push32((uint32_t)(0x6u));
L_1005642d:;
  /* 1005642d push 9 */
  push32((uint32_t)(0x9u));
  /* 1005642f call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x10056435u);
  /* 10056435 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10056438:;
  /* 10056438 push 0x1005c168 */
  push32((uint32_t)(0x1005c168u));
  /* 1005643d call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10056443u);
  /* 10056443 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056446 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10056448 jne 0x100564af */
  if (!C.zf) goto L_100564af;
  /* 1005644a mov eax, dword ptr [0x1005c4d4] */
  EAX = (r32((uint32_t)(0x1005c4d4)));
  /* 1005644f mov dl, byte ptr [0x1005c2cc] */
  DL = (r8((uint32_t)(0x1005c2cc)));
  /* 10056455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056457 mov byte ptr [esp + 8], dl */
  w8((uint32_t)(ESP + 0x8), (DL));
  /* 1005645b je 0x10056472 */
  if (C.zf) goto L_10056472;
  /* 1005645d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10056461 push 3 */
  push32((uint32_t)(0x3u));
  /* 10056463 push 0x1005c168 */
  push32((uint32_t)(0x1005c168u));
  /* 10056468 push ecx */
  push32((uint32_t)(ECX));
  /* 10056469 call eax */
  call_ind((uint32_t)(EAX), 0x1005646bu);
  /* 1005646b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005646e mov esi, eax */
  ESI = (EAX);
  /* 10056470 jmp 0x10056474 */
  goto L_10056474;
L_10056472:;
  /* 10056472 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10056474:;
  /* 10056474 push 3 */
  push32((uint32_t)(0x3u));
  /* 10056476 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x1005647cu);
  /* 1005647c lea edx, [esi + esi*2] */
  EDX = ((uint32_t)(ESI + ESI*2));
  /* 1005647f mov edi, eax */
  EDI = (EAX);
  /* 10056481 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10056486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056489 lea ecx, [esi + edx*4] */
  ECX = ((uint32_t)(ESI + EDX*4));
  /* 1005648c imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1005648e sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10056491 mov eax, edx */
  EAX = (EDX);
  /* 10056493 push 1 */
  push32((uint32_t)(0x1u));
  /* 10056495 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10056498 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1005649a push 9 */
  push32((uint32_t)(0x9u));
  /* 1005649c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005649e jge 0x100564a4 */
  if ((C.sf==C.of)) goto L_100564a4;
  /* 100564a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 100564a2 jmp 0x100564a6 */
  goto L_100564a6;
L_100564a4:;
  /* 100564a4 push 6 */
  push32((uint32_t)(0x6u));
L_100564a6:;
  /* 100564a6 call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x100564acu);
  /* 100564ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100564af:;
  /* 100564af push 0x1005c358 */
  push32((uint32_t)(0x1005c358u));
  /* 100564b4 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x100564bau);
  /* 100564ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100564bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100564bf je 0x100564d3 */
  if (C.zf) goto L_100564d3;
  /* 100564c1 push 0x1005c2a0 */
  push32((uint32_t)(0x1005c2a0u));
  /* 100564c6 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x100564ccu);
  /* 100564cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100564cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100564d1 jne 0x100564f4 */
  if (!C.zf) goto L_100564f4;
L_100564d3:;
  /* 100564d3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100564d5 call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x100564dbu);
  /* 100564db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100564de cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100564e3 jge 0x100564f4 */
  if ((C.sf==C.of)) goto L_100564f4;
  /* 100564e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100564e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 100564e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 100564eb call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x100564f1u);
  /* 100564f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100564f4:;
  /* 100564f4 push 0x1005c000 */
  push32((uint32_t)(0x1005c000u));
  /* 100564f9 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100564ffu);
  /* 100564ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056502 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056504 jne 0x10056577 */
  if (!C.zf) goto L_10056577;
  /* 10056506 call 0x10052780 */
  push32(0x1005650bu); f_10052780();
  /* 1005650b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005650e jge 0x10056577 */
  if ((C.sf==C.of)) goto L_10056577;
  /* 10056510 mov eax, dword ptr [0x1005c4d0] */
  EAX = (r32((uint32_t)(0x1005c4d0)));
  /* 10056515 mov cl, byte ptr [0x1005c2cc] */
  CL = (r8((uint32_t)(0x1005c2cc)));
  /* 1005651b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005651d mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 10056521 je 0x10056538 */
  if (C.zf) goto L_10056538;
  /* 10056523 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10056527 push 2 */
  push32((uint32_t)(0x2u));
  /* 10056529 push 0x1005c000 */
  push32((uint32_t)(0x1005c000u));
  /* 1005652e push edx */
  push32((uint32_t)(EDX));
  /* 1005652f call eax */
  call_ind((uint32_t)(EAX), 0x10056531u);
  /* 10056531 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056534 mov esi, eax */
  ESI = (EAX);
  /* 10056536 jmp 0x1005653a */
  goto L_1005653a;
L_10056538:;
  /* 10056538 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1005653a:;
  /* 1005653a push 2 */
  push32((uint32_t)(0x2u));
  /* 1005653c call dword ptr [0x1005c554] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c554))), 0x10056542u);
  /* 10056542 mov edi, eax */
  EDI = (EAX);
  /* 10056544 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10056547 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005654a lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1005654d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10056552 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10056554 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10056557 mov ecx, edx */
  ECX = (EDX);
  /* 10056559 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1005655c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1005655e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056560 jge 0x10056568 */
  if ((C.sf==C.of)) goto L_10056568;
  /* 10056562 push 3 */
  push32((uint32_t)(0x3u));
  /* 10056564 push 5 */
  push32((uint32_t)(0x5u));
  /* 10056566 jmp 0x1005656c */
  goto L_1005656c;
L_10056568:;
  /* 10056568 push 1 */
  push32((uint32_t)(0x1u));
  /* 1005656a push 7 */
  push32((uint32_t)(0x7u));
L_1005656c:;
  /* 1005656c push 9 */
  push32((uint32_t)(0x9u));
  /* 1005656e call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x10056574u);
  /* 10056574 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10056577:;
  /* 10056577 push 0x1005c288 */
  push32((uint32_t)(0x1005c288u));
  /* 1005657c call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10056582u);
  /* 10056582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056585 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10056587 pop edi */
  EDI = (pop32());
  /* 10056588 pop esi */
  ESI = (pop32());
  /* 10056589 jne 0x1005659a */
  if (!C.zf) goto L_1005659a;
  /* 1005658b push 1 */
  push32((uint32_t)(0x1u));
  /* 1005658d push 1 */
  push32((uint32_t)(0x1u));
  /* 1005658f push 9 */
  push32((uint32_t)(0x9u));
  /* 10056591 call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x10056597u);
  /* 10056597 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005659a:;
  /* 1005659a push 0x1005c090 */
  push32((uint32_t)(0x1005c090u));
  /* 1005659f call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x100565a5u);
  /* 100565a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100565a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100565aa je 0x100565be */
  if (C.zf) goto L_100565be;
  /* 100565ac push 0x10059678 */
  push32((uint32_t)(0x10059678u));
  /* 100565b1 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x100565b7u);
  /* 100565b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100565ba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100565bc jne 0x100565cd */
  if (!C.zf) goto L_100565cd;
L_100565be:;
  /* 100565be push 1 */
  push32((uint32_t)(0x1u));
  /* 100565c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 100565c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 100565c4 call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x100565cau);
  /* 100565ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100565cd:;
  /* 100565cd push 0x1005bf38 */
  push32((uint32_t)(0x1005bf38u));
  /* 100565d2 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100565d8u);
  /* 100565d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100565db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100565dd jne 0x100565ee */
  if (!C.zf) goto L_100565ee;
  /* 100565df push 4 */
  push32((uint32_t)(0x4u));
  /* 100565e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100565e3 push 6 */
  push32((uint32_t)(0x6u));
  /* 100565e5 call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x100565ebu);
  /* 100565eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100565ee:;
  /* 100565ee push 0x1005c390 */
  push32((uint32_t)(0x1005c390u));
  /* 100565f3 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x100565f9u);
  /* 100565f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100565fc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100565fe jne 0x10056620 */
  if (!C.zf) goto L_10056620;
  /* 10056600 push 1 */
  push32((uint32_t)(0x1u));
  /* 10056602 push 1 */
  push32((uint32_t)(0x1u));
  /* 10056604 push 9 */
  push32((uint32_t)(0x9u));
  /* 10056606 call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x1005660cu);
  /* 1005660c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005660f pop ecx */
  ECX = (pop32());
  /* 10056610 ret  */
  ESPCHK(0x100562f0u, _esp0);
  ESP += 4; return;
L_10056611:;
  /* 10056611 push 3 */
  push32((uint32_t)(0x3u));
  /* 10056613 push 6 */
  push32((uint32_t)(0x6u));
  /* 10056615 push 0 */
  push32((uint32_t)(0x0u));
  /* 10056617 call dword ptr [0x1005c52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c52c))), 0x1005661du);
  /* 1005661d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10056620:;
  /* 10056620 pop ecx */
  ECX = (pop32());
  /* 10056621 ret  */
  ESPCHK(0x100562f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006630 @ 0x10056630 (174 bytes, 50 insns) */
void f_10056630(void) {
  FTRACE(0x10056630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10056630 push 0x1005c5b0 */
  push32((uint32_t)(0x1005c5b0u));
  /* 10056635 call 0x10052720 */
  push32(0x1005663au); f_10052720();
  /* 1005663a push 0x1005c358 */
  push32((uint32_t)(0x1005c358u));
  /* 1005663f call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10056645u);
  /* 10056645 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056648 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1005664a je 0x1005666c */
  if (C.zf) goto L_1005666c;
  /* 1005664c push 0x1005c2a0 */
  push32((uint32_t)(0x1005c2a0u));
  /* 10056651 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10056657u);
  /* 10056657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005665a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1005665c je 0x1005666c */
  if (C.zf) goto L_1005666c;
  /* 1005665e push 0x1005814c */
  push32((uint32_t)(0x1005814cu));
  /* 10056663 call 0x10052720 */
  push32(0x10056668u); f_10052720();
  /* 10056668 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005666b ret  */
  ESPCHK(0x10056630u, _esp0);
  ESP += 4; return;
L_1005666c:;
  /* 1005666c mov eax, dword ptr [0x1005bf70] */
  EAX = (r32((uint32_t)(0x1005bf70)));
  /* 10056671 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056674 je 0x100566d2 */
  if (C.zf) goto L_100566d2;
  /* 10056676 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056679 je 0x100566d2 */
  if (C.zf) goto L_100566d2;
  /* 1005667b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1005667e je 0x100566d2 */
  if (C.zf) goto L_100566d2;
  /* 10056680 push 0x1005c288 */
  push32((uint32_t)(0x1005c288u));
  /* 10056685 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x1005668bu);
  /* 1005668b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005668e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10056690 je 0x100566b2 */
  if (C.zf) goto L_100566b2;
  /* 10056692 push 0x1005c168 */
  push32((uint32_t)(0x1005c168u));
  /* 10056697 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x1005669du);
  /* 1005669d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100566a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100566a2 jne 0x100566b2 */
  if (!C.zf) goto L_100566b2;
  /* 100566a4 push 0x1005c5b0 */
  push32((uint32_t)(0x1005c5b0u));
  /* 100566a9 call 0x10052720 */
  push32(0x100566aeu); f_10052720();
  /* 100566ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100566b1 ret  */
  ESPCHK(0x10056630u, _esp0);
  ESP += 4; return;
L_100566b2:;
  /* 100566b2 push 0x1005c168 */
  push32((uint32_t)(0x1005c168u));
  /* 100566b7 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x100566bdu);
  /* 100566bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100566c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100566c2 je 0x100566dd */
  if (C.zf) goto L_100566dd;
  /* 100566c4 push 0x100581b8 */
  push32((uint32_t)(0x100581b8u));
  /* 100566c9 call 0x10052720 */
  push32(0x100566ceu); f_10052720();
  /* 100566ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100566d1 ret  */
  ESPCHK(0x10056630u, _esp0);
  ESP += 4; return;
L_100566d2:;
  /* 100566d2 push 0x100581b8 */
  push32((uint32_t)(0x100581b8u));
  /* 100566d7 call 0x10052720 */
  push32(0x100566dcu); f_10052720();
  /* 100566dc pop ecx */
  ECX = (pop32());
L_100566dd:;
  /* 100566dd ret  */
  ESPCHK(0x10056630u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x100566e0 (70 bytes, 22 insns) */
void f_100566e0(void) {
  FTRACE(0x100566e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100566e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100566e2 call 0x10052760 */
  push32(0x100566e7u); f_10052760();
  /* 100566e7 push 0x100596a0 */
  push32((uint32_t)(0x100596a0u));
  /* 100566ec call 0x10055270 */
  push32(0x100566f1u); f_10055270();
  /* 100566f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100566f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100566f6 je 0x10056702 */
  if (C.zf) goto L_10056702;
  /* 100566f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 100566fa call 0x10052760 */
  push32(0x100566ffu); f_10052760();
  /* 100566ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10056702:;
  /* 10056702 call 0x10052770 */
  push32(0x10056707u); f_10052770();
  /* 10056707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056709 jg 0x1005671d */
  if ((!C.zf&&C.sf==C.of)) goto L_1005671d;
  /* 1005670b push 0x100598f0 */
  push32((uint32_t)(0x100598f0u));
  /* 10056710 call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10056716u);
  /* 10056716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1005671b jle 0x10056725 */
  if ((C.zf||C.sf!=C.of)) goto L_10056725;
L_1005671d:;
  /* 1005671d push 0 */
  push32((uint32_t)(0x0u));
  /* 1005671f call 0x10052760 */
  push32(0x10056724u); f_10052760();
  /* 10056724 pop ecx */
  ECX = (pop32());
L_10056725:;
  /* 10056725 ret  */
  ESPCHK(0x100566e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006730 @ 0x10056730 (235 bytes, 66 insns) */
void f_10056730(void) {
  FTRACE(0x10056730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10056730 push 0x1005c1b0 */
  push32((uint32_t)(0x1005c1b0u));
  /* 10056735 call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x1005673bu);
  /* 1005673b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005673e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10056740 je 0x10056756 */
  if (C.zf) goto L_10056756;
  /* 10056742 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10056744 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10056746 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10056748 push 0x1005c388 */
  push32((uint32_t)(0x1005c388u));
  /* 1005674d call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056753u);
  /* 10056753 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10056756:;
  /* 10056756 push 0x1005c0c8 */
  push32((uint32_t)(0x1005c0c8u));
  /* 1005675b call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10056761u);
  /* 10056761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056764 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10056766 je 0x1005677c */
  if (C.zf) goto L_1005677c;
  /* 10056768 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1005676a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1005676c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1005676e push 0x10059680 */
  push32((uint32_t)(0x10059680u));
  /* 10056773 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056779u);
  /* 10056779 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1005677c:;
  /* 1005677c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005677e push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10056780 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10056782 push 0x100598e0 */
  push32((uint32_t)(0x100598e0u));
  /* 10056787 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x1005678du);
  /* 1005678d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005678f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10056791 push 0x1005c1f0 */
  push32((uint32_t)(0x1005c1f0u));
  /* 10056796 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005679cu);
  /* 1005679c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005679e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100567a0 push 0x1005c1e8 */
  push32((uint32_t)(0x1005c1e8u));
  /* 100567a5 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100567abu);
  /* 100567ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100567ad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100567af push 0x1005c1b8 */
  push32((uint32_t)(0x1005c1b8u));
  /* 100567b4 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100567bau);
  /* 100567ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100567bc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100567be push 0x1005c1b0 */
  push32((uint32_t)(0x1005c1b0u));
  /* 100567c3 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100567c9u);
  /* 100567c9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100567cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100567ce push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100567d0 push 0x1005c1c0 */
  push32((uint32_t)(0x1005c1c0u));
  /* 100567d5 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100567dbu);
  /* 100567db push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100567dd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100567df push 0x1005c0b0 */
  push32((uint32_t)(0x1005c0b0u));
  /* 100567e4 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100567eau);
  /* 100567ea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100567ec push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100567ee push 0x1005c0b8 */
  push32((uint32_t)(0x1005c0b8u));
  /* 100567f3 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100567f9u);
  /* 100567f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100567fb push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100567fd push 0x1005c0c0 */
  push32((uint32_t)(0x1005c0c0u));
  /* 10056802 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10056808u);
  /* 10056808 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005680a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1005680c push 0x1005c0c8 */
  push32((uint32_t)(0x1005c0c8u));
  /* 10056811 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x10056817u);
  /* 10056817 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005681a ret  */
  ESPCHK(0x10056730u, _esp0);
  ESP += 4; return;
}

/* FUN_10006820 @ 0x10056820 (303 bytes, 90 insns) */
void f_10056820(void) {
  FTRACE(0x10056820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10056820 push ecx */
  push32((uint32_t)(ECX));
  /* 10056821 push ebx */
  push32((uint32_t)(EBX));
  /* 10056822 push ebp */
  push32((uint32_t)(EBP));
  /* 10056823 push esi */
  push32((uint32_t)(ESI));
  /* 10056824 push edi */
  push32((uint32_t)(EDI));
  /* 10056825 push 0x100598f0 */
  push32((uint32_t)(0x100598f0u));
  /* 1005682a call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10056830u);
  /* 10056830 push 0x1005c268 */
  push32((uint32_t)(0x1005c268u));
  /* 10056835 mov ebx, eax */
  EBX = (EAX);
  /* 10056837 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x1005683du);
  /* 1005683d push 0x1005c268 */
  push32((uint32_t)(0x1005c268u));
  /* 10056842 mov edi, eax */
  EDI = (EAX);
  /* 10056844 call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x1005684au);
  /* 1005684a push 0x1005bf38 */
  push32((uint32_t)(0x1005bf38u));
  /* 1005684f mov ebp, eax */
  EBP = (EAX);
  /* 10056851 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10056857u);
  /* 10056857 push 0x1005bf38 */
  push32((uint32_t)(0x1005bf38u));
  /* 1005685c mov esi, eax */
  ESI = (EAX);
  /* 1005685e call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10056864u);
  /* 10056864 push 0x100598f0 */
  push32((uint32_t)(0x100598f0u));
  /* 10056869 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 1005686d call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10056873u);
  /* 10056873 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 10056877 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005687a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1005687c add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1005687e sub esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10056880 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10056882 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10056884 pop edi */
  EDI = (pop32());
  /* 10056885 pop esi */
  ESI = (pop32());
  /* 10056886 pop ebp */
  EBP = (pop32());
  /* 10056887 pop ebx */
  EBX = (pop32());
  /* 10056888 jne 0x100568f0 */
  if (!C.zf) goto L_100568f0;
  /* 1005688a cmp dword ptr [0x1005c1c8], 0x28 */
  { uint32_t _a=(r32((uint32_t)(0x1005c1c8))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056891 jle 0x100568f0 */
  if ((C.zf||C.sf!=C.of)) goto L_100568f0;
  /* 10056893 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056895 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10056897 push 4 */
  push32((uint32_t)(0x4u));
  /* 10056899 push 0x100598f0 */
  push32((uint32_t)(0x100598f0u));
  /* 1005689e call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100568a4u);
  /* 100568a4 push 0x1005c1d0 */
  push32((uint32_t)(0x1005c1d0u));
  /* 100568a9 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x100568afu);
  /* 100568af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100568b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100568b4 je 0x100568ca */
  if (C.zf) goto L_100568ca;
  /* 100568b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100568b8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100568ba push 6 */
  push32((uint32_t)(0x6u));
  /* 100568bc push 0x100598f0 */
  push32((uint32_t)(0x100598f0u));
  /* 100568c1 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100568c7u);
  /* 100568c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100568ca:;
  /* 100568ca push 0x1005c038 */
  push32((uint32_t)(0x1005c038u));
  /* 100568cf call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x100568d5u);
  /* 100568d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100568d8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100568da je 0x100568f0 */
  if (C.zf) goto L_100568f0;
  /* 100568dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100568de push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100568e0 push 8 */
  push32((uint32_t)(0x8u));
  /* 100568e2 push 0x100598f0 */
  push32((uint32_t)(0x100598f0u));
  /* 100568e7 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100568edu);
  /* 100568ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100568f0:;
  /* 100568f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100568f2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100568f4 push 0x1005c300 */
  push32((uint32_t)(0x1005c300u));
  /* 100568f9 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x100568ffu);
  /* 100568ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056901 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10056903 push 0x1005c2e8 */
  push32((uint32_t)(0x1005c2e8u));
  /* 10056908 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005690eu);
  /* 1005690e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056910 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10056912 push 0x1005c2f8 */
  push32((uint32_t)(0x1005c2f8u));
  /* 10056917 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005691du);
  /* 1005691d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005691f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10056921 push 0x1005c2d8 */
  push32((uint32_t)(0x1005c2d8u));
  /* 10056926 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005692cu);
  /* 1005692c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005692e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10056930 push 0x1005c2e0 */
  push32((uint32_t)(0x1005c2e0u));
  /* 10056935 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005693bu);
  /* 1005693b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1005693d push 0xa */
  push32((uint32_t)(0xau));
  /* 1005693f push 0x1005c2d0 */
  push32((uint32_t)(0x1005c2d0u));
  /* 10056944 call dword ptr [0x1005c520] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c520))), 0x1005694au);
  /* 1005694a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005694d pop ecx */
  ECX = (pop32());
  /* 1005694e ret  */
  ESPCHK(0x10056820u, _esp0);
  ESP += 4; return;
}

/* FUN_10006950 @ 0x10056950 (517 bytes, 145 insns) */
void f_10056950(void) {
  FTRACE(0x10056950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10056950 push esi */
  push32((uint32_t)(ESI));
  /* 10056951 push 0x1005c270 */
  push32((uint32_t)(0x1005c270u));
  /* 10056956 call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x1005695cu);
  /* 1005695c push 0x1005c270 */
  push32((uint32_t)(0x1005c270u));
  /* 10056961 mov esi, eax */
  ESI = (EAX);
  /* 10056963 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10056969u);
  /* 10056969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1005696c sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1005696e jne 0x10056984 */
  if (!C.zf) goto L_10056984;
  /* 10056970 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056972 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056974 push 5 */
  push32((uint32_t)(0x5u));
  /* 10056976 push 0x1005c270 */
  push32((uint32_t)(0x1005c270u));
  /* 1005697b call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056981u);
  /* 10056981 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10056984:;
  /* 10056984 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056986 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056988 push 1 */
  push32((uint32_t)(0x1u));
  /* 1005698a push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 1005698f call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056995u);
  /* 10056995 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056997 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056999 push 1 */
  push32((uint32_t)(0x1u));
  /* 1005699b push 0x1005c200 */
  push32((uint32_t)(0x1005c200u));
  /* 100569a0 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100569a6u);
  /* 100569a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100569a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100569aa push 2 */
  push32((uint32_t)(0x2u));
  /* 100569ac push 0x1005c268 */
  push32((uint32_t)(0x1005c268u));
  /* 100569b1 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100569b7u);
  /* 100569b7 push 0x1005c268 */
  push32((uint32_t)(0x1005c268u));
  /* 100569bc call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x100569c2u);
  /* 100569c2 push 0x1005c268 */
  push32((uint32_t)(0x1005c268u));
  /* 100569c7 mov esi, eax */
  ESI = (EAX);
  /* 100569c9 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x100569cfu);
  /* 100569cf add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100569d2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100569d4 jne 0x10056b53 */
  if (!C.zf) goto L_10056b53;
  /* 100569da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100569dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100569de push 1 */
  push32((uint32_t)(0x1u));
  /* 100569e0 push 0x1005bf38 */
  push32((uint32_t)(0x1005bf38u));
  /* 100569e5 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x100569ebu);
  /* 100569eb push 0x1005bf38 */
  push32((uint32_t)(0x1005bf38u));
  /* 100569f0 call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x100569f6u);
  /* 100569f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100569f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100569fb je 0x10056b53 */
  if (C.zf) goto L_10056b53;
  /* 10056a01 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056a03 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056a05 push 1 */
  push32((uint32_t)(0x1u));
  /* 10056a07 push 0x1005bfe8 */
  push32((uint32_t)(0x1005bfe8u));
  /* 10056a0c call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056a12u);
  /* 10056a12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056a14 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056a16 push 1 */
  push32((uint32_t)(0x1u));
  /* 10056a18 push 0x1005bff0 */
  push32((uint32_t)(0x1005bff0u));
  /* 10056a1d call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056a23u);
  /* 10056a23 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056a25 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10056a29 push 0x10059890 */
  push32((uint32_t)(0x10059890u));
  /* 10056a2e call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056a34u);
  /* 10056a34 push 0x10059890 */
  push32((uint32_t)(0x10059890u));
  /* 10056a39 call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10056a3fu);
  /* 10056a3f add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056a44 je 0x10056b53 */
  if (C.zf) goto L_10056b53;
  /* 10056a4a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056a4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056a4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10056a50 push 0x1005c000 */
  push32((uint32_t)(0x1005c000u));
  /* 10056a55 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056a5bu);
  /* 10056a5b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056a5d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056a5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10056a61 push 0x1005c110 */
  push32((uint32_t)(0x1005c110u));
  /* 10056a66 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056a6cu);
  /* 10056a6c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056a6e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056a70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10056a72 push 0x10059630 */
  push32((uint32_t)(0x10059630u));
  /* 10056a77 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056a7du);
  /* 10056a7d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056a7f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056a81 push 1 */
  push32((uint32_t)(0x1u));
  /* 10056a83 push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10056a88 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056a8eu);
  /* 10056a8e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056a91 push 0x1005c038 */
  push32((uint32_t)(0x1005c038u));
  /* 10056a96 call dword ptr [0x1005c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c568))), 0x10056a9cu);
  /* 10056a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056a9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10056aa1 je 0x10056b53 */
  if (C.zf) goto L_10056b53;
  /* 10056aa7 push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 10056aac call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10056ab2u);
  /* 10056ab2 push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 10056ab7 mov esi, eax */
  ESI = (EAX);
  /* 10056ab9 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10056abfu);
  /* 10056abf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056ac2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10056ac4 jne 0x10056aed */
  if (!C.zf) goto L_10056aed;
  /* 10056ac6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10056ac8 call 0x10052730 */
  push32(0x10056acdu); f_10052730();
  /* 10056acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056ad0 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056ad3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056ad5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056ad7 jge 0x10056add */
  if ((C.sf==C.of)) goto L_10056add;
  /* 10056ad9 push 6 */
  push32((uint32_t)(0x6u));
  /* 10056adb jmp 0x10056adf */
  goto L_10056adf;
L_10056add:;
  /* 10056add push 4 */
  push32((uint32_t)(0x4u));
L_10056adf:;
  /* 10056adf push 0x1005bfd0 */
  push32((uint32_t)(0x1005bfd0u));
  /* 10056ae4 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056aeau);
  /* 10056aea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10056aed:;
  /* 10056aed push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10056af2 call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10056af8u);
  /* 10056af8 push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10056afd mov esi, eax */
  ESI = (EAX);
  /* 10056aff call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10056b05u);
  /* 10056b05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056b08 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10056b0a jne 0x10056b20 */
  if (!C.zf) goto L_10056b20;
  /* 10056b0c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056b0e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056b10 push 7 */
  push32((uint32_t)(0x7u));
  /* 10056b12 push 0x1005c0f0 */
  push32((uint32_t)(0x1005c0f0u));
  /* 10056b17 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056b1du);
  /* 10056b1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10056b20:;
  /* 10056b20 push 0x10059630 */
  push32((uint32_t)(0x10059630u));
  /* 10056b25 call dword ptr [0x1005c55c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c55c))), 0x10056b2bu);
  /* 10056b2b push 0x10059630 */
  push32((uint32_t)(0x10059630u));
  /* 10056b30 mov esi, eax */
  ESI = (EAX);
  /* 10056b32 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10056b38u);
  /* 10056b38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056b3b sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10056b3d jne 0x10056b53 */
  if (!C.zf) goto L_10056b53;
  /* 10056b3f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056b41 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056b43 push 3 */
  push32((uint32_t)(0x3u));
  /* 10056b45 push 0x10059630 */
  push32((uint32_t)(0x10059630u));
  /* 10056b4a call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056b50u);
  /* 10056b50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10056b53:;
  /* 10056b53 pop esi */
  ESI = (pop32());
  /* 10056b54 ret  */
  ESPCHK(0x10056950u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b60 @ 0x10056b60 (121 bytes, 36 insns) */
void f_10056b60(void) {
  FTRACE(0x10056b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10056b60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10056b62 call 0x10052760 */
  push32(0x10056b67u); f_10052760();
  /* 10056b67 push 0x100598a0 */
  push32((uint32_t)(0x100598a0u));
  /* 10056b6c call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10056b72u);
  /* 10056b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056b75 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056b78 jge 0x10056b8d */
  if ((C.sf==C.of)) goto L_10056b8d;
  /* 10056b7a mov eax, dword ptr [0x1005c2cc] */
  EAX = (r32((uint32_t)(0x1005c2cc)));
  /* 10056b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10056b81 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10056b84 push eax */
  push32((uint32_t)(EAX));
  /* 10056b85 call 0x100526d0 */
  push32(0x10056b8au); f_100526d0();
  /* 10056b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10056b8d:;
  /* 10056b8d push 0x100598a0 */
  push32((uint32_t)(0x100598a0u));
  /* 10056b92 call dword ptr [0x1005c558] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c558))), 0x10056b98u);
  /* 10056b98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056b9b cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056b9e jle 0x10056bb4 */
  if ((C.zf||C.sf!=C.of)) goto L_10056bb4;
  /* 10056ba0 mov ecx, dword ptr [0x1005c2cc] */
  ECX = (r32((uint32_t)(0x1005c2cc)));
  /* 10056ba6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10056ba8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10056bab push ecx */
  push32((uint32_t)(ECX));
  /* 10056bac call 0x100526d0 */
  push32(0x10056bb1u); f_100526d0();
  /* 10056bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10056bb4:;
  /* 10056bb4 mov edx, dword ptr [0x1005c2cc] */
  EDX = (r32((uint32_t)(0x1005c2cc)));
  /* 10056bba add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10056bbd push edx */
  push32((uint32_t)(EDX));
  /* 10056bbe call 0x100526f0 */
  push32(0x10056bc3u); f_100526f0();
  /* 10056bc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056bc5 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10056bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10056bc9 call 0x10052760 */
  push32(0x10056bceu); f_10052760();
  /* 10056bce push 0 */
  push32((uint32_t)(0x0u));
  /* 10056bd0 call 0x10052760 */
  push32(0x10056bd5u); f_10052760();
  /* 10056bd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056bd8 ret  */
  ESPCHK(0x10056b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006be0 @ 0x10056be0 (86 bytes, 20 insns) */
void f_10056be0(void) {
  FTRACE(0x10056be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10056be0 mov eax, dword ptr [0x1005c2cc] */
  EAX = (r32((uint32_t)(0x1005c2cc)));
  /* 10056be5 mov ecx, dword ptr [eax*4 + 0x1005bfb0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1005bfb0)));
  /* 10056bec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10056bee je 0x10056bf5 */
  if (C.zf) goto L_10056bf5;
  /* 10056bf0 call 0x100566e0 */
  push32(0x10056bf5u); f_100566e0();
L_10056bf5:;
  /* 10056bf5 call 0x10055df0 */
  push32(0x10056bfau); f_10055df0();
  /* 10056bfa call 0x10056730 */
  push32(0x10056bffu); f_10056730();
  /* 10056bff call 0x10052780 */
  push32(0x10056c04u); f_10052780();
  /* 10056c04 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056c07 jge 0x10056c0e */
  if ((C.sf==C.of)) goto L_10056c0e;
  /* 10056c09 call 0x10056820 */
  push32(0x10056c0eu); f_10056820();
L_10056c0e:;
  /* 10056c0e call 0x10055bd0 */
  push32(0x10056c13u); f_10055bd0();
  /* 10056c13 call 0x10055a90 */
  push32(0x10056c18u); f_10055a90();
  /* 10056c18 call 0x10052780 */
  push32(0x10056c1du); f_10052780();
  /* 10056c1d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056c20 jge 0x10056c27 */
  if ((C.sf==C.of)) goto L_10056c27;
  /* 10056c22 call 0x100552b0 */
  push32(0x10056c27u); f_100552b0();
L_10056c27:;
  /* 10056c27 call 0x10055fd0 */
  push32(0x10056c2cu); f_10055fd0();
  /* 10056c2c call 0x100562f0 */
  push32(0x10056c31u); f_100562f0();
  /* 10056c31 jmp 0x10056630 */
  f_10056630(); return;
}

/* FUN_10006c40 @ 0x10056c40 (247 bytes, 70 insns) */
void f_10056c40(void) {
  FTRACE(0x10056c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10056c40 push esi */
  push32((uint32_t)(ESI));
  /* 10056c41 push edi */
  push32((uint32_t)(EDI));
  /* 10056c42 call 0x10056b60 */
  push32(0x10056c47u); f_10056b60();
  /* 10056c47 call 0x10056950 */
  push32(0x10056c4cu); f_10056950();
  /* 10056c4c mov edi, 2 */
  EDI = (0x2u);
L_10056c51:;
  /* 10056c51 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056c53 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10056c55 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10056c5a push 0x1005c1a8 */
  push32((uint32_t)(0x1005c1a8u));
  /* 10056c5f call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056c65u);
  /* 10056c65 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056c67 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10056c69 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10056c6e push 0x100596a0 */
  push32((uint32_t)(0x100596a0u));
  /* 10056c73 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056c79u);
  /* 10056c79 mov eax, dword ptr [0x1005c2cc] */
  EAX = (r32((uint32_t)(0x1005c2cc)));
  /* 10056c7e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10056c81 push eax */
  push32((uint32_t)(EAX));
  /* 10056c82 call 0x100526f0 */
  push32(0x10056c87u); f_100526f0();
  /* 10056c87 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056c8c jne 0x10056cac */
  if (!C.zf) goto L_10056cac;
  /* 10056c8e mov esi, 0x64 */
  ESI = (0x64u);
L_10056c93:;
  /* 10056c93 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056c95 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10056c97 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10056c99 push 0x100598a0 */
  push32((uint32_t)(0x100598a0u));
  /* 10056c9e call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056ca4u);
  /* 10056ca4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056ca7 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10056ca8 jne 0x10056c93 */
  if (!C.zf) goto L_10056c93;
  /* 10056caa jmp 0x10056cc0 */
  goto L_10056cc0;
L_10056cac:;
  /* 10056cac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056cae push 0xa */
  push32((uint32_t)(0xau));
  /* 10056cb0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10056cb2 push 0x1005c178 */
  push32((uint32_t)(0x1005c178u));
  /* 10056cb7 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056cbdu);
  /* 10056cbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10056cc0:;
  /* 10056cc0 push 0x1005c038 */
  push32((uint32_t)(0x1005c038u));
  /* 10056cc5 call dword ptr [0x1005c564] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c564))), 0x10056ccbu);
  /* 10056ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056cce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10056cd0 jne 0x10056ce9 */
  if (!C.zf) goto L_10056ce9;
  /* 10056cd2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056cd4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10056cd6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10056cdb push 0x100596a8 */
  push32((uint32_t)(0x100596a8u));
  /* 10056ce0 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056ce6u);
  /* 10056ce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10056ce9:;
  /* 10056ce9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056ceb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10056ced push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10056cf2 push 0x10059698 */
  push32((uint32_t)(0x10059698u));
  /* 10056cf7 call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056cfdu);
  /* 10056cfd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10056cff push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10056d01 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10056d06 push 0x1005bf98 */
  push32((uint32_t)(0x1005bf98u));
  /* 10056d0b call dword ptr [0x1005c51c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c51c))), 0x10056d11u);
  /* 10056d11 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056d14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10056d15 jne 0x10056c51 */
  if (!C.zf) goto L_10056c51;
  /* 10056d1b call 0x10056730 */
  push32(0x10056d20u); f_10056730();
  /* 10056d20 call 0x10055fd0 */
  push32(0x10056d25u); f_10055fd0();
  /* 10056d25 call 0x100562f0 */
  push32(0x10056d2au); f_100562f0();
  /* 10056d2a call 0x100552b0 */
  push32(0x10056d2fu); f_100552b0();
  /* 10056d2f call 0x10055a90 */
  push32(0x10056d34u); f_10055a90();
  /* 10056d34 pop edi */
  EDI = (pop32());
  /* 10056d35 pop esi */
  ESI = (pop32());
  /* 10056d36 ret  */
  ESPCHK(0x10056c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d40 @ 0x10056d40 (279 bytes, 62 insns) [1 switch table(s)] */
void f_10056d40(void) {
  FTRACE(0x10056d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10056d40 call 0x10052680 */
  push32(0x10056d45u); f_10052680();
  /* 10056d45 mov dword ptr [0x1005bf70], eax */
  w32((uint32_t)(0x1005bf70), (EAX));
  /* 10056d4a call 0x10052660 */
  push32(0x10056d4fu); f_10052660();
  /* 10056d4f mov dword ptr [0x1005c380], eax */
  w32((uint32_t)(0x1005c380), (EAX));
  /* 10056d54 call 0x10052670 */
  push32(0x10056d59u); f_10052670();
  /* 10056d59 mov dword ptr [0x100598b0], eax */
  w32((uint32_t)(0x100598b0), (EAX));
  /* 10056d5e call 0x10053040 */
  push32(0x10056d63u); f_10053040();
  /* 10056d63 push 0x100580f4 */
  push32((uint32_t)(0x100580f4u));
  /* 10056d68 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10056d6a call dword ptr [0x1005c524] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c524))), 0x10056d70u);
  /* 10056d70 call 0x10056630 */
  push32(0x10056d75u); f_10056630();
  /* 10056d75 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10056d77 push 0x10058224 */
  push32((uint32_t)(0x10058224u));
  /* 10056d7c call 0x10052700 */
  push32(0x10056d81u); f_10052700();
  /* 10056d81 mov eax, dword ptr [0x1005bf70] */
  EAX = (r32((uint32_t)(0x1005bf70)));
  /* 10056d86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056d89 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056d8c ja 0x10056e52 */
  if ((!C.cf&&!C.zf)) goto L_10056e52;
  /* 10056d92 jmp dword ptr [eax*4 + 0x10056e58] */
  switch (EAX) {
    case 0: goto L_10056d99;
    case 1: goto L_10056e15;
    case 2: goto L_10056e1c;
    case 3: goto L_10056e1c;
    case 4: goto L_10056e1c;
    case 5: goto L_10056d99;
    default: x86_unimpl("switch@0x10056d92 out of table"); return;
  }
L_10056d99:;
  /* 10056d99 cmp dword ptr [0x100598b0], 3 */
  { uint32_t _a=(r32((uint32_t)(0x100598b0))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056da0 jne 0x10056dd2 */
  if (!C.zf) goto L_10056dd2;
  /* 10056da2 push 0x10058140 */
  push32((uint32_t)(0x10058140u));
  /* 10056da7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10056da9 call dword ptr [0x1005c524] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c524))), 0x10056dafu);
  /* 10056daf push 0x1005814c */
  push32((uint32_t)(0x1005814cu));
  /* 10056db4 call 0x10052720 */
  push32(0x10056db9u); f_10052720();
  /* 10056db9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10056dbb push 0x100583fc */
  push32((uint32_t)(0x100583fcu));
  /* 10056dc0 call 0x10052700 */
  push32(0x10056dc5u); f_10052700();
  /* 10056dc5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056dc8 call 0x10056c40 */
  push32(0x10056dcdu); f_10056c40();
  /* 10056dcd jmp 0x10056e52 */
  goto L_10056e52;
L_10056dd2:;
  /* 10056dd2 push 0x100580f4 */
  push32((uint32_t)(0x100580f4u));
  /* 10056dd7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10056dd9 call dword ptr [0x1005c524] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c524))), 0x10056ddfu);
  /* 10056ddf push 0x1005c5b0 */
  push32((uint32_t)(0x1005c5b0u));
  /* 10056de4 call 0x10052720 */
  push32(0x10056de9u); f_10052720();
  /* 10056de9 mov eax, dword ptr [0x100598b0] */
  EAX = (r32((uint32_t)(0x100598b0)));
  /* 10056dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056df1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056df3 jne 0x10056dff */
  if (!C.zf) goto L_10056dff;
  /* 10056df5 mov dword ptr [0x10058228], 4 */
  w32((uint32_t)(0x10058228), (0x4u));
L_10056dff:;
  /* 10056dff push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10056e01 push 0x10058224 */
  push32((uint32_t)(0x10058224u));
  /* 10056e06 call 0x10052700 */
  push32(0x10056e0bu); f_10052700();
  /* 10056e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056e0e call 0x10056be0 */
  push32(0x10056e13u); f_10056be0();
  /* 10056e13 jmp 0x10056e52 */
  goto L_10056e52;
L_10056e15:;
  /* 10056e15 call 0x100543e0 */
  push32(0x10056e1au); f_100543e0();
  /* 10056e1a jmp 0x10056e52 */
  goto L_10056e52;
L_10056e1c:;
  /* 10056e1c push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10056e21 call dword ptr [0x1005c540] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c540))), 0x10056e27u);
  /* 10056e27 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10056e2c call dword ptr [0x1005c544] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c544))), 0x10056e32u);
  /* 10056e32 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10056e37 call dword ptr [0x1005c548] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c548))), 0x10056e3du);
  /* 10056e3d push 0x1005805c */
  push32((uint32_t)(0x1005805cu));
  /* 10056e42 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10056e44 call dword ptr [0x1005c524] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005c524))), 0x10056e4au);
  /* 10056e4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10056e4d call 0x10053360 */
  push32(0x10056e52u); f_10053360();
L_10056e52:;
  /* 10056e52 jmp 0x100531c0 */
  f_100531c0(); return;
}

/* FUN_10006e70 @ 0x10056e70 (171 bytes, 54 insns) */
void f_10056e70(void) {
  FTRACE(0x10056e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10056e70 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10056e74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056e76 jne 0x10056e86 */
  if (!C.zf) goto L_10056e86;
  /* 10056e78 cmp dword ptr [0x1005c674], eax */
  { uint32_t _a=(r32((uint32_t)(0x1005c674))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056e7e jle 0x10056eae */
  if ((C.zf||C.sf!=C.of)) goto L_10056eae;
  /* 10056e80 dec dword ptr [0x1005c674] */
  { uint32_t _r=(r32((uint32_t)(0x1005c674)))-1; w32((uint32_t)(0x1005c674), (_r)); fl_dec(_r,32); }
L_10056e86:;
  /* 10056e86 mov ecx, dword ptr [0x1005701c] */
  ECX = (r32((uint32_t)(0x1005701c)));
  /* 10056e8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056e8f mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 10056e91 mov dword ptr [0x1005c678], ecx */
  w32((uint32_t)(0x1005c678), (ECX));
  /* 10056e97 jne 0x10056ed8 */
  if (!C.zf) goto L_10056ed8;
  /* 10056e99 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10056e9e call dword ptr [0x10057010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10057010))), 0x10056ea4u);
  /* 10056ea4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056ea6 pop ecx */
  ECX = (pop32());
  /* 10056ea7 mov dword ptr [0x1005c680], eax */
  w32((uint32_t)(0x1005c680), (EAX));
  /* 10056eac jne 0x10056eb2 */
  if (!C.zf) goto L_10056eb2;
L_10056eae:;
  /* 10056eae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10056eb0 jmp 0x10056f18 */
  goto L_10056f18;
L_10056eb2:;
  /* 10056eb2 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10056eb5 mov eax, dword ptr [0x1005c680] */
  EAX = (r32((uint32_t)(0x1005c680)));
  /* 10056eba push 0x10058004 */
  push32((uint32_t)(0x10058004u));
  /* 10056ebf push 0x10058000 */
  push32((uint32_t)(0x10058000u));
  /* 10056ec4 mov dword ptr [0x1005c67c], eax */
  w32((uint32_t)(0x1005c67c), (EAX));
  /* 10056ec9 call 0x10056fb8 */
  push32(0x10056eceu); f_10056fb8();
  /* 10056ece inc dword ptr [0x1005c674] */
  { uint32_t _r=(r32((uint32_t)(0x1005c674)))+1; w32((uint32_t)(0x1005c674), (_r)); fl_inc(_r,32); }
  /* 10056ed4 pop ecx */
  ECX = (pop32());
  /* 10056ed5 pop ecx */
  ECX = (pop32());
  /* 10056ed6 jmp 0x10056f15 */
  goto L_10056f15;
L_10056ed8:;
  /* 10056ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056eda jne 0x10056f15 */
  if (!C.zf) goto L_10056f15;
  /* 10056edc mov eax, dword ptr [0x1005c680] */
  EAX = (r32((uint32_t)(0x1005c680)));
  /* 10056ee1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056ee3 je 0x10056f15 */
  if (C.zf) goto L_10056f15;
  /* 10056ee5 mov ecx, dword ptr [0x1005c67c] */
  ECX = (r32((uint32_t)(0x1005c67c)));
  /* 10056eeb push esi */
  push32((uint32_t)(ESI));
  /* 10056eec lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
L_10056eef:;
  /* 10056eef cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056ef1 jb 0x10056f05 */
  if (C.cf) goto L_10056f05;
  /* 10056ef3 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10056ef5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10056ef7 je 0x10056f00 */
  if (C.zf) goto L_10056f00;
  /* 10056ef9 call ecx */
  call_ind((uint32_t)(ECX), 0x10056efbu);
  /* 10056efb mov eax, dword ptr [0x1005c680] */
  EAX = (r32((uint32_t)(0x1005c680)));
L_10056f00:;
  /* 10056f00 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10056f03 jmp 0x10056eef */
  goto L_10056eef;
L_10056f05:;
  /* 10056f05 push eax */
  push32((uint32_t)(EAX));
  /* 10056f06 call dword ptr [0x1005700c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1005700c))), 0x10056f0cu);
  /* 10056f0c and dword ptr [0x1005c680], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1005c680)))&(0x0u); w32((uint32_t)(0x1005c680), (_r)); fl_logic(_r,32); }
  /* 10056f13 pop ecx */
  ECX = (pop32());
  /* 10056f14 pop esi */
  ESI = (pop32());
L_10056f15:;
  /* 10056f15 push 1 */
  push32((uint32_t)(0x1u));
  /* 10056f17 pop eax */
  EAX = (pop32());
L_10056f18:;
  /* 10056f18 ret 0xc */
  ESPCHK(0x10056e70u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10056f1b (157 bytes, 73 insns) */
void f_10056f1b(void) {
  FTRACE(0x10056f1bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10056f1b push ebp */
  push32((uint32_t)(EBP));
  /* 10056f1c mov ebp, esp */
  EBP = (ESP);
  /* 10056f1e push ebx */
  push32((uint32_t)(EBX));
  /* 10056f1f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10056f22 push esi */
  push32((uint32_t)(ESI));
  /* 10056f23 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10056f26 push edi */
  push32((uint32_t)(EDI));
  /* 10056f27 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10056f2a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10056f2c jne 0x10056f37 */
  if (!C.zf) goto L_10056f37;
  /* 10056f2e cmp dword ptr [0x1005c674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1005c674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056f35 jmp 0x10056f5d */
  goto L_10056f5d;
L_10056f37:;
  /* 10056f37 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056f3a je 0x10056f41 */
  if (C.zf) goto L_10056f41;
  /* 10056f3c cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056f3f jne 0x10056f63 */
  if (!C.zf) goto L_10056f63;
L_10056f41:;
  /* 10056f41 mov eax, dword ptr [0x1005c684] */
  EAX = (r32((uint32_t)(0x1005c684)));
  /* 10056f46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056f48 je 0x10056f53 */
  if (C.zf) goto L_10056f53;
  /* 10056f4a push edi */
  push32((uint32_t)(EDI));
  /* 10056f4b push esi */
  push32((uint32_t)(ESI));
  /* 10056f4c push ebx */
  push32((uint32_t)(EBX));
  /* 10056f4d call eax */
  call_ind((uint32_t)(EAX), 0x10056f4fu);
  /* 10056f4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056f51 je 0x10056f5f */
  if (C.zf) goto L_10056f5f;
L_10056f53:;
  /* 10056f53 push edi */
  push32((uint32_t)(EDI));
  /* 10056f54 push esi */
  push32((uint32_t)(ESI));
  /* 10056f55 push ebx */
  push32((uint32_t)(EBX));
  /* 10056f56 call 0x10056e70 */
  push32(0x10056f5bu); f_10056e70();
  /* 10056f5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10056f5d:;
  /* 10056f5d jne 0x10056f63 */
  if (!C.zf) goto L_10056f63;
L_10056f5f:;
  /* 10056f5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10056f61 jmp 0x10056fb1 */
  goto L_10056fb1;
L_10056f63:;
  /* 10056f63 push edi */
  push32((uint32_t)(EDI));
  /* 10056f64 push esi */
  push32((uint32_t)(ESI));
  /* 10056f65 push ebx */
  push32((uint32_t)(EBX));
  /* 10056f66 call 0x100527f0 */
  push32(0x10056f6bu); f_100527f0();
  /* 10056f6b cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056f6e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10056f71 jne 0x10056f7f */
  if (!C.zf) goto L_10056f7f;
  /* 10056f73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056f75 jne 0x10056fae */
  if (!C.zf) goto L_10056fae;
  /* 10056f77 push edi */
  push32((uint32_t)(EDI));
  /* 10056f78 push eax */
  push32((uint32_t)(EAX));
  /* 10056f79 push ebx */
  push32((uint32_t)(EBX));
  /* 10056f7a call 0x10056e70 */
  push32(0x10056f7fu); f_10056e70();
L_10056f7f:;
  /* 10056f7f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10056f81 je 0x10056f88 */
  if (C.zf) goto L_10056f88;
  /* 10056f83 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056f86 jne 0x10056fae */
  if (!C.zf) goto L_10056fae;
L_10056f88:;
  /* 10056f88 push edi */
  push32((uint32_t)(EDI));
  /* 10056f89 push esi */
  push32((uint32_t)(ESI));
  /* 10056f8a push ebx */
  push32((uint32_t)(EBX));
  /* 10056f8b call 0x10056e70 */
  push32(0x10056f90u); f_10056e70();
  /* 10056f90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056f92 jne 0x10056f97 */
  if (!C.zf) goto L_10056f97;
  /* 10056f94 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10056f97:;
  /* 10056f97 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10056f9b je 0x10056fae */
  if (C.zf) goto L_10056fae;
  /* 10056f9d mov eax, dword ptr [0x1005c684] */
  EAX = (r32((uint32_t)(0x1005c684)));
  /* 10056fa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10056fa4 je 0x10056fae */
  if (C.zf) goto L_10056fae;
  /* 10056fa6 push edi */
  push32((uint32_t)(EDI));
  /* 10056fa7 push esi */
  push32((uint32_t)(ESI));
  /* 10056fa8 push ebx */
  push32((uint32_t)(EBX));
  /* 10056fa9 call eax */
  call_ind((uint32_t)(EAX), 0x10056fabu);
  /* 10056fab mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10056fae:;
  /* 10056fae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10056fb1:;
  /* 10056fb1 pop edi */
  EDI = (pop32());
  /* 10056fb2 pop esi */
  ESI = (pop32());
  /* 10056fb3 pop ebx */
  EBX = (pop32());
  /* 10056fb4 pop ebp */
  EBP = (pop32());
  /* 10056fb5 ret 0xc */
  ESPCHK(0x10056f1bu, _esp0);
  ESP += 16; return;
}

/* initterm @ 0x10056fb8 (6 bytes, 1 insns) */
void f_10056fb8(void) {
  FTRACE(0x10056fb8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10056fb8 jmp dword ptr [0x10057018] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10057018)))); return;
}

