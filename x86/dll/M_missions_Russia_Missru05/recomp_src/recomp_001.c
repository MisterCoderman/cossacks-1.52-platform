#include "recomp.h"

/* FUN_10008310 @ 0x10a88310 (490 bytes, 165 insns) */
void f_10a88310(void) {
  FTRACE(0x10a88310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a88310 push ebp */
  push32((uint32_t)(EBP));
  /* 10a88311 mov ebp, esp */
  EBP = (ESP);
  /* 10a88313 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88316 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8831a jne 0x10a8832d */
  if (!C.zf) goto L_10a8832d;
  /* 10a8831c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8831f push eax */
  push32((uint32_t)(EAX));
  /* 10a88320 call 0x10a88160 */
  push32(0x10a88325u); f_10a88160();
  /* 10a88325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88328 jmp 0x10a884f6 */
  goto L_10a884f6;
L_10a8832d:;
  /* 10a8832d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88331 jne 0x10a88346 */
  if (!C.zf) goto L_10a88346;
  /* 10a88333 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88336 push ecx */
  push32((uint32_t)(ECX));
  /* 10a88337 call 0x10a88500 */
  push32(0x10a8833cu); f_10a88500();
  /* 10a8833c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8833f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a88341 jmp 0x10a884f6 */
  goto L_10a884f6;
L_10a88346:;
  /* 10a88346 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a8834d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88351 ja 0x10a884c9 */
  if ((!C.cf&&!C.zf)) goto L_10a884c9;
  /* 10a88357 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a88359 call 0x10a87d90 */
  push32(0x10a8835eu); f_10a87d90();
  /* 10a8835e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88361 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88364 push edx */
  push32((uint32_t)(EDX));
  /* 10a88365 call 0x10a88690 */
  push32(0x10a8836au); f_10a88690();
  /* 10a8836a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8836d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a88370 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88374 je 0x10a8848c */
  if (C.zf) goto L_10a8848c;
  /* 10a8837a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8837d cmp eax, dword ptr [0x10aaec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10aaec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88383 ja 0x10a88400 */
  if ((!C.cf&&!C.zf)) goto L_10a88400;
  /* 10a88385 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a88388 push ecx */
  push32((uint32_t)(ECX));
  /* 10a88389 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8838c push edx */
  push32((uint32_t)(EDX));
  /* 10a8838d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a88390 push eax */
  push32((uint32_t)(EAX));
  /* 10a88391 call 0x10a89560 */
  push32(0x10a88396u); f_10a89560();
  /* 10a88396 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88399 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8839b je 0x10a883a5 */
  if (C.zf) goto L_10a883a5;
  /* 10a8839d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a883a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a883a3 jmp 0x10a88400 */
  goto L_10a88400;
L_10a883a5:;
  /* 10a883a5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a883a8 push edx */
  push32((uint32_t)(EDX));
  /* 10a883a9 call 0x10a88d20 */
  push32(0x10a883aeu); f_10a88d20();
  /* 10a883ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a883b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a883b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a883b8 je 0x10a88400 */
  if (C.zf) goto L_10a88400;
  /* 10a883ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a883bd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10a883c0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a883c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a883c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a883c9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a883cc jae 0x10a883d6 */
  if (!C.cf) goto L_10a883d6;
  /* 10a883ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a883d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a883d4 jmp 0x10a883dc */
  goto L_10a883dc;
L_10a883d6:;
  /* 10a883d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a883d9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a883dc:;
  /* 10a883dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a883df push edx */
  push32((uint32_t)(EDX));
  /* 10a883e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a883e3 push eax */
  push32((uint32_t)(EAX));
  /* 10a883e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a883e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a883e8 call 0x10a8ac70 */
  push32(0x10a883edu); f_10a8ac70();
  /* 10a883ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a883f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a883f3 push edx */
  push32((uint32_t)(EDX));
  /* 10a883f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a883f7 push eax */
  push32((uint32_t)(EAX));
  /* 10a883f8 call 0x10a88750 */
  push32(0x10a883fdu); f_10a88750();
  /* 10a883fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a88400:;
  /* 10a88400 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88404 jne 0x10a88480 */
  if (!C.zf) goto L_10a88480;
  /* 10a88406 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8840a jne 0x10a88413 */
  if (!C.zf) goto L_10a88413;
  /* 10a8840c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10a88413:;
  /* 10a88413 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a88416 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88419 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8841c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10a8841f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a88422 push edx */
  push32((uint32_t)(EDX));
  /* 10a88423 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a88425 mov eax, dword ptr [0x10ab204c] */
  EAX = (r32((uint32_t)(0x10ab204c)));
  /* 10a8842a push eax */
  push32((uint32_t)(EAX));
  /* 10a8842b call dword ptr [0x10ab3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3304))), 0x10a88431u);
  /* 10a88431 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a88434 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88438 je 0x10a88480 */
  if (C.zf) goto L_10a88480;
  /* 10a8843a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8843d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10a88440 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88443 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a88446 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a88449 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8844c jae 0x10a88456 */
  if (!C.cf) goto L_10a88456;
  /* 10a8844e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a88451 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a88454 jmp 0x10a8845c */
  goto L_10a8845c;
L_10a88456:;
  /* 10a88456 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a88459 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10a8845c:;
  /* 10a8845c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a8845f push eax */
  push32((uint32_t)(EAX));
  /* 10a88460 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88463 push ecx */
  push32((uint32_t)(ECX));
  /* 10a88464 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a88467 push edx */
  push32((uint32_t)(EDX));
  /* 10a88468 call 0x10a8ac70 */
  push32(0x10a8846du); f_10a8ac70();
  /* 10a8846d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88470 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88473 push eax */
  push32((uint32_t)(EAX));
  /* 10a88474 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a88477 push ecx */
  push32((uint32_t)(ECX));
  /* 10a88478 call 0x10a88750 */
  push32(0x10a8847du); f_10a88750();
  /* 10a8847d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a88480:;
  /* 10a88480 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a88482 call 0x10a87e30 */
  push32(0x10a88487u); f_10a87e30();
  /* 10a88487 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8848a jmp 0x10a884c9 */
  goto L_10a884c9;
L_10a8848c:;
  /* 10a8848c push 9 */
  push32((uint32_t)(0x9u));
  /* 10a8848e call 0x10a87e30 */
  push32(0x10a88493u); f_10a87e30();
  /* 10a88493 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88496 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8849a jne 0x10a884a3 */
  if (!C.zf) goto L_10a884a3;
  /* 10a8849c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10a884a3:;
  /* 10a884a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a884a6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a884a9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10a884ac mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10a884af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a884b2 push eax */
  push32((uint32_t)(EAX));
  /* 10a884b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a884b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a884b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a884b9 mov edx, dword ptr [0x10ab204c] */
  EDX = (r32((uint32_t)(0x10ab204c)));
  /* 10a884bf push edx */
  push32((uint32_t)(EDX));
  /* 10a884c0 call dword ptr [0x10ab330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab330c))), 0x10a884c6u);
  /* 10a884c6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a884c9:;
  /* 10a884c9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a884cd jne 0x10a884d8 */
  if (!C.zf) goto L_10a884d8;
  /* 10a884cf cmp dword ptr [0x10ab0898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a884d6 jne 0x10a884dd */
  if (!C.zf) goto L_10a884dd;
L_10a884d8:;
  /* 10a884d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a884db jmp 0x10a884f6 */
  goto L_10a884f6;
L_10a884dd:;
  /* 10a884dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a884e0 push eax */
  push32((uint32_t)(EAX));
  /* 10a884e1 call 0x10a880d0 */
  push32(0x10a884e6u); f_10a880d0();
  /* 10a884e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a884e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a884eb jne 0x10a884f1 */
  if (!C.zf) goto L_10a884f1;
  /* 10a884ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a884ef jmp 0x10a884f6 */
  goto L_10a884f6;
L_10a884f1:;
  /* 10a884f1 jmp 0x10a88346 */
  goto L_10a88346;
L_10a884f6:;
  /* 10a884f6 mov esp, ebp */
  ESP = (EBP);
  /* 10a884f8 pop ebp */
  EBP = (pop32());
  /* 10a884f9 ret  */
  ESPCHK(0x10a88310u, _esp0);
  ESP += 4; return;
}

/* FUN_10008500 @ 0x10a88500 (104 bytes, 38 insns) */
void f_10a88500(void) {
  FTRACE(0x10a88500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a88500 push ebp */
  push32((uint32_t)(EBP));
  /* 10a88501 mov ebp, esp */
  EBP = (ESP);
  /* 10a88503 push ecx */
  push32((uint32_t)(ECX));
  /* 10a88504 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88508 jne 0x10a8850c */
  if (!C.zf) goto L_10a8850c;
  /* 10a8850a jmp 0x10a88564 */
  goto L_10a88564;
L_10a8850c:;
  /* 10a8850c push 9 */
  push32((uint32_t)(0x9u));
  /* 10a8850e call 0x10a87d90 */
  push32(0x10a88513u); f_10a87d90();
  /* 10a88513 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88519 push eax */
  push32((uint32_t)(EAX));
  /* 10a8851a call 0x10a88690 */
  push32(0x10a8851fu); f_10a88690();
  /* 10a8851f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88522 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a88525 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88529 je 0x10a88547 */
  if (C.zf) goto L_10a88547;
  /* 10a8852b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8852e push ecx */
  push32((uint32_t)(ECX));
  /* 10a8852f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a88532 push edx */
  push32((uint32_t)(EDX));
  /* 10a88533 call 0x10a88750 */
  push32(0x10a88538u); f_10a88750();
  /* 10a88538 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8853b push 9 */
  push32((uint32_t)(0x9u));
  /* 10a8853d call 0x10a87e30 */
  push32(0x10a88542u); f_10a87e30();
  /* 10a88542 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88545 jmp 0x10a88564 */
  goto L_10a88564;
L_10a88547:;
  /* 10a88547 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a88549 call 0x10a87e30 */
  push32(0x10a8854eu); f_10a87e30();
  /* 10a8854e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88551 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88554 push eax */
  push32((uint32_t)(EAX));
  /* 10a88555 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a88557 mov ecx, dword ptr [0x10ab204c] */
  ECX = (r32((uint32_t)(0x10ab204c)));
  /* 10a8855d push ecx */
  push32((uint32_t)(ECX));
  /* 10a8855e call dword ptr [0x10ab33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab33b0))), 0x10a88564u);
L_10a88564:;
  /* 10a88564 mov esp, ebp */
  ESP = (EBP);
  /* 10a88566 pop ebp */
  EBP = (pop32());
  /* 10a88567 ret  */
  ESPCHK(0x10a88500u, _esp0);
  ESP += 4; return;
}

/* FUN_10008570 @ 0x10a88570 (116 bytes, 34 insns) */
void f_10a88570(void) {
  FTRACE(0x10a88570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a88570 push ebp */
  push32((uint32_t)(EBP));
  /* 10a88571 mov ebp, esp */
  EBP = (ESP);
  /* 10a88573 push ecx */
  push32((uint32_t)(ECX));
  /* 10a88574 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10a8857b push 9 */
  push32((uint32_t)(0x9u));
  /* 10a8857d call 0x10a87d90 */
  push32(0x10a88582u); f_10a87d90();
  /* 10a88582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88585 call 0x10a89c80 */
  push32(0x10a8858au); f_10a89c80();
  /* 10a8858a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8858c jge 0x10a88595 */
  if ((C.sf==C.of)) goto L_10a88595;
  /* 10a8858e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10a88595:;
  /* 10a88595 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a88597 call 0x10a87e30 */
  push32(0x10a8859cu); f_10a87e30();
  /* 10a8859c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8859f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a885a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a885a3 mov eax, dword ptr [0x10ab204c] */
  EAX = (r32((uint32_t)(0x10ab204c)));
  /* 10a885a8 push eax */
  push32((uint32_t)(EAX));
  /* 10a885a9 call dword ptr [0x10ab3390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3390))), 0x10a885afu);
  /* 10a885af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a885b1 jne 0x10a885dd */
  if (!C.zf) goto L_10a885dd;
  /* 10a885b3 call dword ptr [0x10ab3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3370))), 0x10a885b9u);
  /* 10a885b9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a885bc jne 0x10a885d6 */
  if (!C.zf) goto L_10a885d6;
  /* 10a885be call 0x10a8c270 */
  push32(0x10a885c3u); f_10a8c270();
  /* 10a885c3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10a885c9 call 0x10a8c260 */
  push32(0x10a885ceu); f_10a8c260();
  /* 10a885ce mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10a885d4 jmp 0x10a885dd */
  goto L_10a885dd;
L_10a885d6:;
  /* 10a885d6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10a885dd:;
  /* 10a885dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a885e0 mov esp, ebp */
  ESP = (EBP);
  /* 10a885e2 pop ebp */
  EBP = (pop32());
  /* 10a885e3 ret  */
  ESPCHK(0x10a88570u, _esp0);
  ESP += 4; return;
}

/* FUN_100085f0 @ 0x10a885f0 (10 bytes, 5 insns) */
void f_10a885f0(void) {
  FTRACE(0x10a885f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a885f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a885f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a885f3 call 0x10a88570 */
  push32(0x10a885f8u); f_10a88570();
  /* 10a885f8 pop ebp */
  EBP = (pop32());
  /* 10a885f9 ret  */
  ESPCHK(0x10a885f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008600 @ 0x10a88600 (10 bytes, 5 insns) */
void f_10a88600(void) {
  FTRACE(0x10a88600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a88600 push ebp */
  push32((uint32_t)(EBP));
  /* 10a88601 mov ebp, esp */
  EBP = (ESP);
  /* 10a88603 mov eax, dword ptr [0x10aaec94] */
  EAX = (r32((uint32_t)(0x10aaec94)));
  /* 10a88608 pop ebp */
  EBP = (pop32());
  /* 10a88609 ret  */
  ESPCHK(0x10a88600u, _esp0);
  ESP += 4; return;
}

/* FUN_10008610 @ 0x10a88610 (31 bytes, 11 insns) */
void f_10a88610(void) {
  FTRACE(0x10a88610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a88610 push ebp */
  push32((uint32_t)(EBP));
  /* 10a88611 mov ebp, esp */
  EBP = (ESP);
  /* 10a88613 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8861a jbe 0x10a88620 */
  if ((C.cf||C.zf)) goto L_10a88620;
  /* 10a8861c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8861e jmp 0x10a8862d */
  goto L_10a8862d;
L_10a88620:;
  /* 10a88620 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88623 mov dword ptr [0x10aaec94], eax */
  w32((uint32_t)(0x10aaec94), (EAX));
  /* 10a88628 mov eax, 1 */
  EAX = (0x1u);
L_10a8862d:;
  /* 10a8862d pop ebp */
  EBP = (pop32());
  /* 10a8862e ret  */
  ESPCHK(0x10a88610u, _esp0);
  ESP += 4; return;
}

/* FUN_10008630 @ 0x10a88630 (89 bytes, 20 insns) */
void f_10a88630(void) {
  FTRACE(0x10a88630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a88630 push ebp */
  push32((uint32_t)(EBP));
  /* 10a88631 mov ebp, esp */
  EBP = (ESP);
  /* 10a88633 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10a88638 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8863a mov eax, dword ptr [0x10ab204c] */
  EAX = (r32((uint32_t)(0x10ab204c)));
  /* 10a8863f push eax */
  push32((uint32_t)(EAX));
  /* 10a88640 call dword ptr [0x10ab3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3304))), 0x10a88646u);
  /* 10a88646 mov dword ptr [0x10ab2048], eax */
  w32((uint32_t)(0x10ab2048), (EAX));
  /* 10a8864b cmp dword ptr [0x10ab2048], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab2048))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88652 jne 0x10a88658 */
  if (!C.zf) goto L_10a88658;
  /* 10a88654 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a88656 jmp 0x10a88687 */
  goto L_10a88687;
L_10a88658:;
  /* 10a88658 mov ecx, dword ptr [0x10ab2048] */
  ECX = (r32((uint32_t)(0x10ab2048)));
  /* 10a8865e mov dword ptr [0x10ab203c], ecx */
  w32((uint32_t)(0x10ab203c), (ECX));
  /* 10a88664 mov dword ptr [0x10ab2040], 0 */
  w32((uint32_t)(0x10ab2040), (0x0u));
  /* 10a8866e mov dword ptr [0x10ab2044], 0 */
  w32((uint32_t)(0x10ab2044), (0x0u));
  /* 10a88678 mov dword ptr [0x10ab2028], 0x10 */
  w32((uint32_t)(0x10ab2028), (0x10u));
  /* 10a88682 mov eax, 1 */
  EAX = (0x1u);
L_10a88687:;
  /* 10a88687 pop ebp */
  EBP = (pop32());
  /* 10a88688 ret  */
  ESPCHK(0x10a88630u, _esp0);
  ESP += 4; return;
}

/* FUN_10008690 @ 0x10a88690 (85 bytes, 29 insns) */
void f_10a88690(void) {
  FTRACE(0x10a88690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a88690 push ebp */
  push32((uint32_t)(EBP));
  /* 10a88691 mov ebp, esp */
  EBP = (ESP);
  /* 10a88693 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88696 mov eax, dword ptr [0x10ab2044] */
  EAX = (r32((uint32_t)(0x10ab2044)));
  /* 10a8869b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8869e mov ecx, dword ptr [0x10ab2048] */
  ECX = (r32((uint32_t)(0x10ab2048)));
  /* 10a886a4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a886a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a886a9 mov edx, dword ptr [0x10ab2048] */
  EDX = (r32((uint32_t)(0x10ab2048)));
  /* 10a886af mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a886b2:;
  /* 10a886b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a886b5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a886b8 jae 0x10a886df */
  if (!C.cf) goto L_10a886df;
  /* 10a886ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a886bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a886c0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a886c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a886c6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a886cd jae 0x10a886d4 */
  if (!C.cf) goto L_10a886d4;
  /* 10a886cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a886d2 jmp 0x10a886e1 */
  goto L_10a886e1;
L_10a886d4:;
  /* 10a886d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a886d7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a886da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a886dd jmp 0x10a886b2 */
  goto L_10a886b2;
L_10a886df:;
  /* 10a886df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a886e1:;
  /* 10a886e1 mov esp, ebp */
  ESP = (EBP);
  /* 10a886e3 pop ebp */
  EBP = (pop32());
  /* 10a886e4 ret  */
  ESPCHK(0x10a88690u, _esp0);
  ESP += 4; return;
}

/* FUN_100086f0 @ 0x10a886f0 (95 bytes, 33 insns) */
void f_10a886f0(void) {
  FTRACE(0x10a886f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a886f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a886f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a886f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a886f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a886f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a886fc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a886ff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a88702 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a88705 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10a88708 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a8870b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a88710 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a88713 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a88715 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88718 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a8871b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8871d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8871f jne 0x10a88741 */
  if (!C.zf) goto L_10a88741;
  /* 10a88721 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a88724 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10a88727 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a88729 jne 0x10a88741 */
  if (!C.zf) goto L_10a88741;
  /* 10a8872b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8872e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a88734 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a88736 je 0x10a88741 */
  if (C.zf) goto L_10a88741;
  /* 10a88738 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10a8873f jmp 0x10a88748 */
  goto L_10a88748;
L_10a88741:;
  /* 10a88741 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10a88748:;
  /* 10a88748 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8874b mov esp, ebp */
  ESP = (EBP);
  /* 10a8874d pop ebp */
  EBP = (pop32());
  /* 10a8874e ret  */
  ESPCHK(0x10a886f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008750 @ 0x10a88750 (1485 bytes, 453 insns) */
void f_10a88750(void) {
  FTRACE(0x10a88750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a88750 push ebp */
  push32((uint32_t)(EBP));
  /* 10a88751 mov ebp, esp */
  EBP = (ESP);
  /* 10a88753 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88759 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a8875c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10a8875f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88762 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a88765 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88768 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a8876b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8876e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10a88771 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a88774 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a88777 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8877d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88780 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10a88787 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8878a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8878d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88790 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a88793 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a88796 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a88798 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8879b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10a8879e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a887a1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a887a4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10a887a7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a887aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a887ac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a887af mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a887b2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10a887b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a887b8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a887bb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a887be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a887c0 jne 0x10a888e8 */
  if (!C.zf) goto L_10a888e8;
  /* 10a887c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a887c9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10a887cc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a887cf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10a887d2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a887d6 jbe 0x10a887df */
  if ((C.cf||C.zf)) goto L_10a887df;
  /* 10a887d8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10a887df:;
  /* 10a887df mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a887e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a887e5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a887e8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a887eb jne 0x10a888c1 */
  if (!C.zf) goto L_10a888c1;
  /* 10a887f1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a887f5 jae 0x10a88856 */
  if (!C.cf) goto L_10a88856;
  /* 10a887f7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a887fc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a887ff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a88801 not eax */
  EAX = (~(EAX));
  /* 10a88803 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a88806 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88809 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10a8880d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8880f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a88812 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88815 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10a88819 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a8881c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8881f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10a88822 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a88825 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88828 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8882b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10a8882e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88831 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88834 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a88838 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8883a jne 0x10a88854 */
  if (!C.zf) goto L_10a88854;
  /* 10a8883c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a88841 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a88844 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a88846 not eax */
  EAX = (~(EAX));
  /* 10a88848 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8884b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a8884d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8884f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88852 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a88854:;
  /* 10a88854 jmp 0x10a888c1 */
  goto L_10a888c1;
L_10a88856:;
  /* 10a88856 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a88859 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8885c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a88861 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a88863 not edx */
  EDX = (~(EDX));
  /* 10a88865 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a88868 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a8886b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10a88872 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a88874 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a88877 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a8887a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10a88881 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88884 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88887 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a8888a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a8888d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88890 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88893 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10a88896 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88899 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8889c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a888a0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a888a2 jne 0x10a888c1 */
  if (!C.zf) goto L_10a888c1;
  /* 10a888a4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a888a7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a888aa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a888af shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a888b1 not edx */
  EDX = (~(EDX));
  /* 10a888b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a888b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a888b9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a888bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a888be mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10a888c1:;
  /* 10a888c1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a888c4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a888c7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a888ca mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a888cd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10a888d0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a888d3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a888d6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a888d9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a888dc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a888df mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a888e2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a888e5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10a888e8:;
  /* 10a888e8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a888eb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10a888ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a888f1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a888f4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a888f8 jbe 0x10a88901 */
  if ((C.cf||C.zf)) goto L_10a88901;
  /* 10a888fa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10a88901:;
  /* 10a88901 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a88904 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a88907 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a88909 jne 0x10a88a65 */
  if (!C.zf) goto L_10a88a65;
  /* 10a8890f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a88912 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88915 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10a88918 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8891b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10a8891e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88921 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10a88924 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88928 jbe 0x10a88931 */
  if ((C.cf||C.zf)) goto L_10a88931;
  /* 10a8892a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10a88931:;
  /* 10a88931 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a88934 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88937 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10a8893a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a8893d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10a88940 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88943 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10a88946 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8894a jbe 0x10a88953 */
  if ((C.cf||C.zf)) goto L_10a88953;
  /* 10a8894c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10a88953:;
  /* 10a88953 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a88956 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88959 je 0x10a88a5f */
  if (C.zf) goto L_10a88a5f;
  /* 10a8895f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a88962 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a88965 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a88968 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8896b jne 0x10a88a41 */
  if (!C.zf) goto L_10a88a41;
  /* 10a88971 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88975 jae 0x10a889d6 */
  if (!C.cf) goto L_10a889d6;
  /* 10a88977 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a8897c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a8897f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a88981 not edx */
  EDX = (~(EDX));
  /* 10a88983 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a88986 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88989 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10a8898d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8898f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a88992 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88995 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10a88999 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a8899c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8899f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a889a2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a889a5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a889a8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a889ab mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10a889ae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a889b1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a889b4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a889b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a889ba jne 0x10a889d4 */
  if (!C.zf) goto L_10a889d4;
  /* 10a889bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a889c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a889c4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a889c6 not edx */
  EDX = (~(EDX));
  /* 10a889c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a889cb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a889cd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a889cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a889d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a889d4:;
  /* 10a889d4 jmp 0x10a88a41 */
  goto L_10a88a41;
L_10a889d6:;
  /* 10a889d6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a889d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a889dc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a889e1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a889e3 not eax */
  EAX = (~(EAX));
  /* 10a889e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a889e8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a889eb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10a889f2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a889f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a889f7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a889fa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10a88a01 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88a04 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88a07 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10a88a0a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a88a0d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88a10 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88a13 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10a88a16 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88a19 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88a1c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a88a20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a88a22 jne 0x10a88a41 */
  if (!C.zf) goto L_10a88a41;
  /* 10a88a24 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a88a27 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88a2a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a88a2f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a88a31 not eax */
  EAX = (~(EAX));
  /* 10a88a33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88a36 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a88a39 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a88a3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88a3e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10a88a41:;
  /* 10a88a41 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a88a44 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a88a47 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a88a4a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a88a4d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10a88a50 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a88a53 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a88a56 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a88a59 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a88a5c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10a88a5f:;
  /* 10a88a5f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a88a62 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10a88a65:;
  /* 10a88a65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a88a68 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a88a6b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a88a6d jne 0x10a88a7b */
  if (!C.zf) goto L_10a88a7b;
  /* 10a88a6f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a88a72 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88a75 je 0x10a88b8b */
  if (C.zf) goto L_10a88b8b;
L_10a88a7b:;
  /* 10a88a7b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a88a7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a88a81 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10a88a84 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a88a87 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a88a8a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a88a8d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a88a90 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a88a93 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a88a96 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a88a99 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10a88a9c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a88a9f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a88aa2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10a88aa5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a88aa8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a88aab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a88aae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a88ab1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a88ab4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a88ab7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a88aba cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88abd jne 0x10a88b8b */
  if (!C.zf) goto L_10a88b8b;
  /* 10a88ac3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88ac7 jae 0x10a88b24 */
  if (!C.cf) goto L_10a88b24;
  /* 10a88ac9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88acc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88acf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a88ad3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88ad6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88ad9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a88adc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a88adf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88ae2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88ae5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10a88ae8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a88aea jne 0x10a88b02 */
  if (!C.zf) goto L_10a88b02;
  /* 10a88aec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a88af1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a88af4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a88af6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88af9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a88afb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a88afd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88b00 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a88b02:;
  /* 10a88b02 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a88b07 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a88b0a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a88b0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a88b0f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88b12 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10a88b16 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a88b18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a88b1b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88b1e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10a88b22 jmp 0x10a88b8b */
  goto L_10a88b8b;
L_10a88b24:;
  /* 10a88b24 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88b27 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88b2a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a88b2e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88b31 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88b34 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a88b37 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a88b3a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88b3d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88b40 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10a88b43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a88b45 jne 0x10a88b62 */
  if (!C.zf) goto L_10a88b62;
  /* 10a88b47 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a88b4a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88b4d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a88b52 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a88b54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88b57 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a88b5a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a88b5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88b5f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10a88b62:;
  /* 10a88b62 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a88b65 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88b68 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a88b6d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a88b6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a88b72 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88b75 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10a88b7c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a88b7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a88b81 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10a88b84 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10a88b8b:;
  /* 10a88b8b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a88b8e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a88b91 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a88b93 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a88b96 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88b99 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a88b9c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10a88b9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a88ba2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a88ba4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88ba7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a88baa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a88bac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a88baf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88bb2 jne 0x10a88d19 */
  if (!C.zf) goto L_10a88d19;
  /* 10a88bb8 cmp dword ptr [0x10ab2040], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab2040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88bbf je 0x10a88d08 */
  if (C.zf) goto L_10a88d08;
  /* 10a88bc5 mov eax, dword ptr [0x10ab2038] */
  EAX = (r32((uint32_t)(0x10ab2038)));
  /* 10a88bca shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10a88bcd mov ecx, dword ptr [0x10ab2040] */
  ECX = (r32((uint32_t)(0x10ab2040)));
  /* 10a88bd3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a88bd6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88bd8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a88bdb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10a88be0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10a88be5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88be8 push eax */
  push32((uint32_t)(EAX));
  /* 10a88be9 call dword ptr [0x10ab3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3368))), 0x10a88befu);
  /* 10a88bef mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a88bf4 mov ecx, dword ptr [0x10ab2038] */
  ECX = (r32((uint32_t)(0x10ab2038)));
  /* 10a88bfa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a88bfc mov eax, dword ptr [0x10ab2040] */
  EAX = (r32((uint32_t)(0x10ab2040)));
  /* 10a88c01 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a88c04 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a88c06 mov edx, dword ptr [0x10ab2040] */
  EDX = (r32((uint32_t)(0x10ab2040)));
  /* 10a88c0c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a88c0f mov eax, dword ptr [0x10ab2040] */
  EAX = (r32((uint32_t)(0x10ab2040)));
  /* 10a88c14 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a88c17 mov edx, dword ptr [0x10ab2038] */
  EDX = (r32((uint32_t)(0x10ab2038)));
  /* 10a88c1d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10a88c28 mov eax, dword ptr [0x10ab2040] */
  EAX = (r32((uint32_t)(0x10ab2040)));
  /* 10a88c2d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a88c30 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10a88c33 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a88c36 mov eax, dword ptr [0x10ab2040] */
  EAX = (r32((uint32_t)(0x10ab2040)));
  /* 10a88c3b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a88c3e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10a88c41 mov edx, dword ptr [0x10ab2040] */
  EDX = (r32((uint32_t)(0x10ab2040)));
  /* 10a88c47 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a88c4a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10a88c4e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a88c50 jne 0x10a88c66 */
  if (!C.zf) goto L_10a88c66;
  /* 10a88c52 mov edx, dword ptr [0x10ab2040] */
  EDX = (r32((uint32_t)(0x10ab2040)));
  /* 10a88c58 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a88c5b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10a88c5d mov ecx, dword ptr [0x10ab2040] */
  ECX = (r32((uint32_t)(0x10ab2040)));
  /* 10a88c63 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10a88c66:;
  /* 10a88c66 mov edx, dword ptr [0x10ab2040] */
  EDX = (r32((uint32_t)(0x10ab2040)));
  /* 10a88c6c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88c70 jne 0x10a88d08 */
  if (!C.zf) goto L_10a88d08;
  /* 10a88c76 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10a88c7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a88c7d mov eax, dword ptr [0x10ab2040] */
  EAX = (r32((uint32_t)(0x10ab2040)));
  /* 10a88c82 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a88c85 push ecx */
  push32((uint32_t)(ECX));
  /* 10a88c86 call dword ptr [0x10ab3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3368))), 0x10a88c8cu);
  /* 10a88c8c mov edx, dword ptr [0x10ab2040] */
  EDX = (r32((uint32_t)(0x10ab2040)));
  /* 10a88c92 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a88c95 push eax */
  push32((uint32_t)(EAX));
  /* 10a88c96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a88c98 mov ecx, dword ptr [0x10ab204c] */
  ECX = (r32((uint32_t)(0x10ab204c)));
  /* 10a88c9e push ecx */
  push32((uint32_t)(ECX));
  /* 10a88c9f call dword ptr [0x10ab33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab33b0))), 0x10a88ca5u);
  /* 10a88ca5 mov edx, dword ptr [0x10ab2044] */
  EDX = (r32((uint32_t)(0x10ab2044)));
  /* 10a88cab imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a88cae mov eax, dword ptr [0x10ab2048] */
  EAX = (r32((uint32_t)(0x10ab2048)));
  /* 10a88cb3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88cb5 mov ecx, dword ptr [0x10ab2040] */
  ECX = (r32((uint32_t)(0x10ab2040)));
  /* 10a88cbb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88cbe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88cc0 push eax */
  push32((uint32_t)(EAX));
  /* 10a88cc1 mov edx, dword ptr [0x10ab2040] */
  EDX = (r32((uint32_t)(0x10ab2040)));
  /* 10a88cc7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88cca push edx */
  push32((uint32_t)(EDX));
  /* 10a88ccb mov eax, dword ptr [0x10ab2040] */
  EAX = (r32((uint32_t)(0x10ab2040)));
  /* 10a88cd0 push eax */
  push32((uint32_t)(EAX));
  /* 10a88cd1 call 0x10a8c280 */
  push32(0x10a88cd6u); f_10a8c280();
  /* 10a88cd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88cd9 mov ecx, dword ptr [0x10ab2044] */
  ECX = (r32((uint32_t)(0x10ab2044)));
  /* 10a88cdf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88ce2 mov dword ptr [0x10ab2044], ecx */
  w32((uint32_t)(0x10ab2044), (ECX));
  /* 10a88ce8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88ceb cmp edx, dword ptr [0x10ab2040] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10ab2040))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88cf1 jbe 0x10a88cfc */
  if ((C.cf||C.zf)) goto L_10a88cfc;
  /* 10a88cf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88cf6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88cf9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a88cfc:;
  /* 10a88cfc mov ecx, dword ptr [0x10ab2048] */
  ECX = (r32((uint32_t)(0x10ab2048)));
  /* 10a88d02 mov dword ptr [0x10ab203c], ecx */
  w32((uint32_t)(0x10ab203c), (ECX));
L_10a88d08:;
  /* 10a88d08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88d0b mov dword ptr [0x10ab2040], edx */
  w32((uint32_t)(0x10ab2040), (EDX));
  /* 10a88d11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a88d14 mov dword ptr [0x10ab2038], eax */
  w32((uint32_t)(0x10ab2038), (EAX));
L_10a88d19:;
  /* 10a88d19 mov esp, ebp */
  ESP = (EBP);
  /* 10a88d1b pop ebp */
  EBP = (pop32());
  /* 10a88d1c ret  */
  ESPCHK(0x10a88750u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d20 @ 0x10a88d20 (1334 bytes, 427 insns) */
void f_10a88d20(void) {
  FTRACE(0x10a88d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a88d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a88d21 mov ebp, esp */
  EBP = (ESP);
  /* 10a88d23 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88d26 push esi */
  push32((uint32_t)(ESI));
  /* 10a88d27 mov eax, dword ptr [0x10ab2044] */
  EAX = (r32((uint32_t)(0x10ab2044)));
  /* 10a88d2c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a88d2f mov ecx, dword ptr [0x10ab2048] */
  ECX = (r32((uint32_t)(0x10ab2048)));
  /* 10a88d35 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88d37 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10a88d3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a88d3d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88d40 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10a88d43 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10a88d46 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a88d49 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10a88d4c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88d4f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a88d52 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88d56 jge 0x10a88d6c */
  if ((C.sf==C.of)) goto L_10a88d6c;
  /* 10a88d58 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a88d5b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a88d5e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a88d60 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10a88d63 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10a88d6a jmp 0x10a88d81 */
  goto L_10a88d81;
L_10a88d6c:;
  /* 10a88d6c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a88d73 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a88d76 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88d79 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a88d7c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a88d7e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10a88d81:;
  /* 10a88d81 mov ecx, dword ptr [0x10ab203c] */
  ECX = (r32((uint32_t)(0x10ab203c)));
  /* 10a88d87 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10a88d8a:;
  /* 10a88d8a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88d8d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88d90 jae 0x10a88db6 */
  if (!C.cf) goto L_10a88db6;
  /* 10a88d92 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88d95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a88d98 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10a88d9a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88d9d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a88da0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10a88da3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a88da5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a88da7 je 0x10a88dab */
  if (C.zf) goto L_10a88dab;
  /* 10a88da9 jmp 0x10a88db6 */
  goto L_10a88db6;
L_10a88dab:;
  /* 10a88dab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88dae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88db1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a88db4 jmp 0x10a88d8a */
  goto L_10a88d8a;
L_10a88db6:;
  /* 10a88db6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88db9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88dbc jne 0x10a88e9d */
  if (!C.zf) goto L_10a88e9d;
  /* 10a88dc2 mov eax, dword ptr [0x10ab2048] */
  EAX = (r32((uint32_t)(0x10ab2048)));
  /* 10a88dc7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10a88dca:;
  /* 10a88dca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88dcd cmp ecx, dword ptr [0x10ab203c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ab203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88dd3 jae 0x10a88df9 */
  if (!C.cf) goto L_10a88df9;
  /* 10a88dd5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88dd8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a88ddb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10a88ddd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88de0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a88de3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10a88de6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a88de8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a88dea je 0x10a88dee */
  if (C.zf) goto L_10a88dee;
  /* 10a88dec jmp 0x10a88df9 */
  goto L_10a88df9;
L_10a88dee:;
  /* 10a88dee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88df1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88df4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a88df7 jmp 0x10a88dca */
  goto L_10a88dca;
L_10a88df9:;
  /* 10a88df9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88dfc cmp ecx, dword ptr [0x10ab203c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ab203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88e02 jne 0x10a88e9d */
  if (!C.zf) goto L_10a88e9d;
L_10a88e08:;
  /* 10a88e08 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88e0b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88e0e jae 0x10a88e26 */
  if (!C.cf) goto L_10a88e26;
  /* 10a88e10 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88e13 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88e17 je 0x10a88e1b */
  if (C.zf) goto L_10a88e1b;
  /* 10a88e19 jmp 0x10a88e26 */
  goto L_10a88e26;
L_10a88e1b:;
  /* 10a88e1b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88e1e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88e21 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a88e24 jmp 0x10a88e08 */
  goto L_10a88e08;
L_10a88e26:;
  /* 10a88e26 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88e29 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88e2c jne 0x10a88e77 */
  if (!C.zf) goto L_10a88e77;
  /* 10a88e2e mov eax, dword ptr [0x10ab2048] */
  EAX = (r32((uint32_t)(0x10ab2048)));
  /* 10a88e33 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10a88e36:;
  /* 10a88e36 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88e39 cmp ecx, dword ptr [0x10ab203c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ab203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88e3f jae 0x10a88e57 */
  if (!C.cf) goto L_10a88e57;
  /* 10a88e41 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88e44 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88e48 je 0x10a88e4c */
  if (C.zf) goto L_10a88e4c;
  /* 10a88e4a jmp 0x10a88e57 */
  goto L_10a88e57;
L_10a88e4c:;
  /* 10a88e4c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88e4f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88e52 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a88e55 jmp 0x10a88e36 */
  goto L_10a88e36;
L_10a88e57:;
  /* 10a88e57 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88e5a cmp ecx, dword ptr [0x10ab203c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ab203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88e60 jne 0x10a88e77 */
  if (!C.zf) goto L_10a88e77;
  /* 10a88e62 call 0x10a89260 */
  push32(0x10a88e67u); f_10a89260();
  /* 10a88e67 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a88e6a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88e6e jne 0x10a88e77 */
  if (!C.zf) goto L_10a88e77;
  /* 10a88e70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a88e72 jmp 0x10a89251 */
  goto L_10a89251;
L_10a88e77:;
  /* 10a88e77 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88e7a push edx */
  push32((uint32_t)(EDX));
  /* 10a88e7b call 0x10a89370 */
  push32(0x10a88e80u); f_10a89370();
  /* 10a88e80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88e83 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88e86 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a88e89 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a88e8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88e8e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a88e91 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88e94 jne 0x10a88e9d */
  if (!C.zf) goto L_10a88e9d;
  /* 10a88e96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a88e98 jmp 0x10a89251 */
  goto L_10a89251;
L_10a88e9d:;
  /* 10a88e9d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88ea0 mov dword ptr [0x10ab203c], edx */
  w32((uint32_t)(0x10ab203c), (EDX));
  /* 10a88ea6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a88ea9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a88eac mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10a88eaf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a88eb2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a88eb4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10a88eb7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88ebb je 0x10a88ee0 */
  if (C.zf) goto L_10a88ee0;
  /* 10a88ebd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a88ec0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a88ec3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a88ec6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10a88eca mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a88ecd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a88ed0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10a88ed3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10a88eda or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10a88edc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a88ede jne 0x10a88f15 */
  if (!C.zf) goto L_10a88f15;
L_10a88ee0:;
  /* 10a88ee0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10a88ee7:;
  /* 10a88ee7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a88eea mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a88eed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a88ef0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10a88ef4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a88ef7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a88efa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10a88efd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10a88f04 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10a88f06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a88f08 jne 0x10a88f15 */
  if (!C.zf) goto L_10a88f15;
  /* 10a88f0a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a88f0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88f10 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10a88f13 jmp 0x10a88ee7 */
  goto L_10a88ee7;
L_10a88f15:;
  /* 10a88f15 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a88f18 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a88f1e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a88f21 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10a88f28 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a88f2b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a88f32 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a88f35 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a88f38 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a88f3b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10a88f3f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a88f42 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88f46 jne 0x10a88f62 */
  if (!C.zf) goto L_10a88f62;
  /* 10a88f48 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10a88f4f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a88f52 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a88f55 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a88f58 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10a88f5f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10a88f62:;
  /* 10a88f62 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88f66 jl 0x10a88f7b */
  if ((C.sf!=C.of)) goto L_10a88f7b;
  /* 10a88f68 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a88f6b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a88f6d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a88f70 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a88f73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88f76 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a88f79 jmp 0x10a88f62 */
  goto L_10a88f62;
L_10a88f7b:;
  /* 10a88f7b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a88f7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a88f81 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10a88f85 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a88f88 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a88f8b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a88f8d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88f90 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a88f93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a88f96 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10a88f99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a88f9c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a88f9f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88fa3 jle 0x10a88fac */
  if ((C.zf||C.sf!=C.of)) goto L_10a88fac;
  /* 10a88fa5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10a88fac:;
  /* 10a88fac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a88faf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88fb2 je 0x10a891d0 */
  if (C.zf) goto L_10a891d0;
  /* 10a88fb8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a88fbb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a88fbe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a88fc1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88fc4 jne 0x10a8909a */
  if (!C.zf) goto L_10a8909a;
  /* 10a88fca cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a88fce jge 0x10a8902f */
  if ((C.sf==C.of)) goto L_10a8902f;
  /* 10a88fd0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a88fd5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a88fd8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a88fda not eax */
  EAX = (~(EAX));
  /* 10a88fdc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a88fdf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a88fe2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10a88fe6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a88fe8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a88feb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a88fee mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10a88ff2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a88ff5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a88ff8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10a88ffb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a88ffe mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a89001 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89004 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10a89007 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a8900a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8900d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a89011 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a89013 jne 0x10a8902d */
  if (!C.zf) goto L_10a8902d;
  /* 10a89015 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a8901a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8901d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a8901f not eax */
  EAX = (~(EAX));
  /* 10a89021 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a89024 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a89026 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a89028 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8902b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a8902d:;
  /* 10a8902d jmp 0x10a8909a */
  goto L_10a8909a;
L_10a8902f:;
  /* 10a8902f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a89032 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89035 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a8903a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a8903c not edx */
  EDX = (~(EDX));
  /* 10a8903e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89041 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a89044 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10a8904b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8904d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89050 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a89053 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10a8905a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a8905d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89060 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a89063 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a89066 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a89069 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8906c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10a8906f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a89072 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89075 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a89079 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8907b jne 0x10a8909a */
  if (!C.zf) goto L_10a8909a;
  /* 10a8907d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a89080 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89083 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a89088 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a8908a not edx */
  EDX = (~(EDX));
  /* 10a8908c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8908f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a89092 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a89094 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a89097 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10a8909a:;
  /* 10a8909a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8909d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a890a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a890a3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a890a6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10a890a9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a890ac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a890af mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a890b2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a890b5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a890b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a890bc je 0x10a891d0 */
  if (C.zf) goto L_10a891d0;
  /* 10a890c2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a890c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a890c8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10a890cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a890ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a890d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a890d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a890d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10a890da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a890dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a890e0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a890e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a890e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a890e9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10a890ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a890ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a890f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a890f5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10a890f8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a890fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a890fe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a89101 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89104 jne 0x10a891d0 */
  if (!C.zf) goto L_10a891d0;
  /* 10a8910a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8910e jge 0x10a8916a */
  if ((C.sf==C.of)) goto L_10a8916a;
  /* 10a89110 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a89113 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89116 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a8911a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a8911d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89120 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10a89123 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a89125 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a89128 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8912b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10a8912e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a89130 jne 0x10a89148 */
  if (!C.zf) goto L_10a89148;
  /* 10a89132 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a89137 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a8913a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a8913c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8913f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a89141 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a89143 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a89146 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a89148:;
  /* 10a89148 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a8914d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a89150 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a89152 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89155 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a89158 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10a8915c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8915e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89161 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a89164 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10a89168 jmp 0x10a891d0 */
  goto L_10a891d0;
L_10a8916a:;
  /* 10a8916a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a8916d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89170 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a89174 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a89177 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8917a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10a8917d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a8917f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a89182 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89185 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10a89188 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8918a jne 0x10a891a7 */
  if (!C.zf) goto L_10a891a7;
  /* 10a8918c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a8918f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89192 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a89197 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a89199 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8919c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a8919f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a891a1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a891a4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10a891a7:;
  /* 10a891a7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a891aa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a891ad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a891b2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a891b4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a891b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a891ba mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10a891c1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a891c3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a891c6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a891c9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10a891d0:;
  /* 10a891d0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a891d4 je 0x10a891ea */
  if (C.zf) goto L_10a891ea;
  /* 10a891d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a891d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a891dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a891de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a891e1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a891e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a891e7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10a891ea:;
  /* 10a891ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a891ed add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a891f0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a891f3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a891f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a891f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a891fc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a891fe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a89201 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89204 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a89207 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8920a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10a8920d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a89210 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a89212 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a89215 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a89217 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8921a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8921d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a8921f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a89221 jne 0x10a89243 */
  if (!C.zf) goto L_10a89243;
  /* 10a89223 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a89226 cmp eax, dword ptr [0x10ab2040] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ab2040))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8922c jne 0x10a89243 */
  if (!C.zf) goto L_10a89243;
  /* 10a8922e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89231 cmp ecx, dword ptr [0x10ab2038] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ab2038))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89237 jne 0x10a89243 */
  if (!C.zf) goto L_10a89243;
  /* 10a89239 mov dword ptr [0x10ab2040], 0 */
  w32((uint32_t)(0x10ab2040), (0x0u));
L_10a89243:;
  /* 10a89243 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10a89246 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89249 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a8924b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8924e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10a89251:;
  /* 10a89251 pop esi */
  ESI = (pop32());
  /* 10a89252 mov esp, ebp */
  ESP = (EBP);
  /* 10a89254 pop ebp */
  EBP = (pop32());
  /* 10a89255 ret  */
  ESPCHK(0x10a88d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009260 @ 0x10a89260 (271 bytes, 78 insns) */
void f_10a89260(void) {
  FTRACE(0x10a89260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a89260 push ebp */
  push32((uint32_t)(EBP));
  /* 10a89261 mov ebp, esp */
  EBP = (ESP);
  /* 10a89263 push ecx */
  push32((uint32_t)(ECX));
  /* 10a89264 mov eax, dword ptr [0x10ab2044] */
  EAX = (r32((uint32_t)(0x10ab2044)));
  /* 10a89269 cmp eax, dword ptr [0x10ab2028] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ab2028))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8926f jne 0x10a892bb */
  if (!C.zf) goto L_10a892bb;
  /* 10a89271 mov ecx, dword ptr [0x10ab2028] */
  ECX = (r32((uint32_t)(0x10ab2028)));
  /* 10a89277 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8927a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8927d push ecx */
  push32((uint32_t)(ECX));
  /* 10a8927e mov edx, dword ptr [0x10ab2048] */
  EDX = (r32((uint32_t)(0x10ab2048)));
  /* 10a89284 push edx */
  push32((uint32_t)(EDX));
  /* 10a89285 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a89287 mov eax, dword ptr [0x10ab204c] */
  EAX = (r32((uint32_t)(0x10ab204c)));
  /* 10a8928c push eax */
  push32((uint32_t)(EAX));
  /* 10a8928d call dword ptr [0x10ab330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab330c))), 0x10a89293u);
  /* 10a89293 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a89296 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8929a jne 0x10a892a3 */
  if (!C.zf) goto L_10a892a3;
  /* 10a8929c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8929e jmp 0x10a8936b */
  goto L_10a8936b;
L_10a892a3:;
  /* 10a892a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a892a6 mov dword ptr [0x10ab2048], ecx */
  w32((uint32_t)(0x10ab2048), (ECX));
  /* 10a892ac mov edx, dword ptr [0x10ab2028] */
  EDX = (r32((uint32_t)(0x10ab2028)));
  /* 10a892b2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a892b5 mov dword ptr [0x10ab2028], edx */
  w32((uint32_t)(0x10ab2028), (EDX));
L_10a892bb:;
  /* 10a892bb mov eax, dword ptr [0x10ab2044] */
  EAX = (r32((uint32_t)(0x10ab2044)));
  /* 10a892c0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a892c3 mov ecx, dword ptr [0x10ab2048] */
  ECX = (r32((uint32_t)(0x10ab2048)));
  /* 10a892c9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a892cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a892ce push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10a892d3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a892d5 mov edx, dword ptr [0x10ab204c] */
  EDX = (r32((uint32_t)(0x10ab204c)));
  /* 10a892db push edx */
  push32((uint32_t)(EDX));
  /* 10a892dc call dword ptr [0x10ab3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3304))), 0x10a892e2u);
  /* 10a892e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a892e5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10a892e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a892eb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a892ef jne 0x10a892f5 */
  if (!C.zf) goto L_10a892f5;
  /* 10a892f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a892f3 jmp 0x10a8936b */
  goto L_10a8936b;
L_10a892f5:;
  /* 10a892f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a892f7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10a892fc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10a89301 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a89303 call dword ptr [0x10ab32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32fc))), 0x10a89309u);
  /* 10a89309 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8930c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10a8930f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a89312 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89316 jne 0x10a89332 */
  if (!C.zf) goto L_10a89332;
  /* 10a89318 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8931b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a8931e push ecx */
  push32((uint32_t)(ECX));
  /* 10a8931f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a89321 mov edx, dword ptr [0x10ab204c] */
  EDX = (r32((uint32_t)(0x10ab204c)));
  /* 10a89327 push edx */
  push32((uint32_t)(EDX));
  /* 10a89328 call dword ptr [0x10ab33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab33b0))), 0x10a8932eu);
  /* 10a8932e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a89330 jmp 0x10a8936b */
  goto L_10a8936b;
L_10a89332:;
  /* 10a89332 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a89335 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a8933b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8933e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10a89345 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a89348 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10a8934f mov eax, dword ptr [0x10ab2044] */
  EAX = (r32((uint32_t)(0x10ab2044)));
  /* 10a89354 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89357 mov dword ptr [0x10ab2044], eax */
  w32((uint32_t)(0x10ab2044), (EAX));
  /* 10a8935c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8935f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a89362 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10a89368 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a8936b:;
  /* 10a8936b mov esp, ebp */
  ESP = (EBP);
  /* 10a8936d pop ebp */
  EBP = (pop32());
  /* 10a8936e ret  */
  ESPCHK(0x10a89260u, _esp0);
  ESP += 4; return;
}

/* FUN_10009370 @ 0x10a89370 (494 bytes, 149 insns) */
void f_10a89370(void) {
  FTRACE(0x10a89370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a89370 push ebp */
  push32((uint32_t)(EBP));
  /* 10a89371 mov ebp, esp */
  EBP = (ESP);
  /* 10a89373 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a89379 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a8937c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10a8937f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a89382 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a89385 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a89388 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10a8938f:;
  /* 10a8938f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89393 jl 0x10a893a8 */
  if ((C.sf!=C.of)) goto L_10a893a8;
  /* 10a89395 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a89398 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10a8939a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8939d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a893a0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a893a3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10a893a6 jmp 0x10a8938f */
  goto L_10a8938f;
L_10a893a8:;
  /* 10a893a8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a893ab imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a893b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a893b4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10a893bb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a893be mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a893c5 jmp 0x10a893d0 */
  goto L_10a893d0;
L_10a893c7:;
  /* 10a893c7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a893ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a893cd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10a893d0:;
  /* 10a893d0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a893d4 jge 0x10a893f6 */
  if ((C.sf==C.of)) goto L_10a893f6;
  /* 10a893d6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a893d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a893dc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10a893df mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a893e2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a893e5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a893e8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10a893eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a893ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a893f1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10a893f4 jmp 0x10a893c7 */
  goto L_10a893c7;
L_10a893f6:;
  /* 10a893f6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a893f9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10a893fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a893ff mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a89402 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89404 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a89407 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a89409 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10a8940e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10a89413 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a89416 push edx */
  push32((uint32_t)(EDX));
  /* 10a89417 call dword ptr [0x10ab32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32fc))), 0x10a8941du);
  /* 10a8941d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8941f jne 0x10a89429 */
  if (!C.zf) goto L_10a89429;
  /* 10a89421 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a89424 jmp 0x10a8955a */
  goto L_10a8955a;
L_10a89429:;
  /* 10a89429 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8942c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89431 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a89434 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a89437 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a8943a jmp 0x10a89448 */
  goto L_10a89448;
L_10a8943c:;
  /* 10a8943c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8943f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89445 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a89448:;
  /* 10a89448 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8944b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8944e ja 0x10a894ad */
  if ((!C.cf&&!C.zf)) goto L_10a894ad;
  /* 10a89450 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a89453 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10a8945a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8945d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10a89467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8946a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8946d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a89470 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a89473 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10a89479 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8947c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89482 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a89485 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a89488 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8948b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89491 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a89494 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a89497 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8949a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8949f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a894a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a894a5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10a894ab jmp 0x10a8943c */
  goto L_10a8943c;
L_10a894ad:;
  /* 10a894ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a894b0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a894b6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a894b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a894bc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a894bf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a894c2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10a894c5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a894c8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a894cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a894ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a894d1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a894d4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10a894d7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a894da add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a894dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a894e0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10a894e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a894e6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a894e9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a894ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a894ef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a894f2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10a894f5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a894f8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a894fb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10a89503 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a89506 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a89509 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10a89514 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a89517 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10a8951b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a8951e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10a89521 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a89524 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a89527 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10a8952a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8952c jne 0x10a8953d */
  if (!C.zf) goto L_10a8953d;
  /* 10a8952e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a89531 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a89534 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a89537 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8953a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10a8953d:;
  /* 10a8953d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a89542 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a89545 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a89547 not edx */
  EDX = (~(EDX));
  /* 10a89549 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8954c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a8954f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a89551 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a89554 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a89557 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10a8955a:;
  /* 10a8955a mov esp, ebp */
  ESP = (EBP);
  /* 10a8955c pop ebp */
  EBP = (pop32());
  /* 10a8955d ret  */
  ESPCHK(0x10a89370u, _esp0);
  ESP += 4; return;
}

/* FUN_10009560 @ 0x10a89560 (1515 bytes, 489 insns) */
void f_10a89560(void) {
  FTRACE(0x10a89560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a89560 push ebp */
  push32((uint32_t)(EBP));
  /* 10a89561 mov ebp, esp */
  EBP = (ESP);
  /* 10a89563 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89566 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a89569 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8956c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10a8956e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a89571 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a89574 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a89577 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10a8957a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8957d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a89580 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89583 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a89586 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a89589 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10a8958c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a8958f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a89592 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a89598 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a8959b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10a895a2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a895a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a895a8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a895ab mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a895ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a895b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a895b3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a895b6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10a895b9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a895bc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a895bf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10a895c2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a895c5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a895c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a895ca mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a895cd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a895d0 jle 0x10a89886 */
  if ((C.zf||C.sf!=C.of)) goto L_10a89886;
  /* 10a895d6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a895d9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a895dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a895de jne 0x10a895eb */
  if (!C.zf) goto L_10a895eb;
  /* 10a895e0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a895e3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a895e6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a895e9 jle 0x10a895f2 */
  if ((C.zf||C.sf!=C.of)) goto L_10a895f2;
L_10a895eb:;
  /* 10a895eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a895ed jmp 0x10a89b47 */
  goto L_10a89b47;
L_10a895f2:;
  /* 10a895f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a895f5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10a895f8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a895fb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a895fe cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89602 jbe 0x10a8960b */
  if ((C.cf||C.zf)) goto L_10a8960b;
  /* 10a89604 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10a8960b:;
  /* 10a8960b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a8960e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a89611 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a89614 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89617 jne 0x10a896ed */
  if (!C.zf) goto L_10a896ed;
  /* 10a8961d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89621 jae 0x10a89682 */
  if (!C.cf) goto L_10a89682;
  /* 10a89623 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a89628 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8962b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a8962d not edx */
  EDX = (~(EDX));
  /* 10a8962f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a89632 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89635 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10a89639 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8963b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8963e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89641 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10a89645 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89648 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8964b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a8964e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a89651 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89654 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89657 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10a8965a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a8965d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89660 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a89664 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a89666 jne 0x10a89680 */
  if (!C.zf) goto L_10a89680;
  /* 10a89668 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a8966d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a89670 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a89672 not edx */
  EDX = (~(EDX));
  /* 10a89674 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a89677 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a89679 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8967b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8967e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a89680:;
  /* 10a89680 jmp 0x10a896ed */
  goto L_10a896ed;
L_10a89682:;
  /* 10a89682 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a89685 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89688 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a8968d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a8968f not eax */
  EAX = (~(EAX));
  /* 10a89691 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a89694 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89697 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10a8969e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a896a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a896a3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a896a6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10a896ad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a896b0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a896b3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10a896b6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a896b9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a896bc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a896bf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10a896c2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a896c5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a896c8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a896cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a896ce jne 0x10a896ed */
  if (!C.zf) goto L_10a896ed;
  /* 10a896d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a896d3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a896d6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a896db shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a896dd not eax */
  EAX = (~(EAX));
  /* 10a896df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a896e2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a896e5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a896e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a896ea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10a896ed:;
  /* 10a896ed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a896f0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a896f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a896f6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a896f9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10a896fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a896ff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a89702 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a89705 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a89708 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10a8970b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a8970e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89711 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89714 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a89717 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8971b jle 0x10a89867 */
  if ((C.zf||C.sf!=C.of)) goto L_10a89867;
  /* 10a89721 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a89724 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89727 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10a8972a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8972d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10a89730 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89733 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a89736 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8973a jbe 0x10a89743 */
  if ((C.cf||C.zf)) goto L_10a89743;
  /* 10a8973c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10a89743:;
  /* 10a89743 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a89746 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a89749 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10a8974c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a8974f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a89752 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a89755 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a89758 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a8975b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a8975e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a89761 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10a89764 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a89767 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a8976a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10a8976d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a89770 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a89773 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a89776 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a89779 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a8977c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a8977f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a89782 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89785 jne 0x10a89853 */
  if (!C.zf) goto L_10a89853;
  /* 10a8978b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8978f jae 0x10a897ec */
  if (!C.cf) goto L_10a897ec;
  /* 10a89791 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89794 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89797 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a8979b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a8979e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a897a1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a897a4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a897a7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a897aa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a897ad mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10a897b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a897b2 jne 0x10a897ca */
  if (!C.zf) goto L_10a897ca;
  /* 10a897b4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a897b9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a897bc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a897be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a897c1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a897c3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a897c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a897c8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a897ca:;
  /* 10a897ca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a897cf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a897d2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a897d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a897d7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a897da mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10a897de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a897e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a897e3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a897e6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10a897ea jmp 0x10a89853 */
  goto L_10a89853;
L_10a897ec:;
  /* 10a897ec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a897ef add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a897f2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a897f6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a897f9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a897fc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a897ff add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a89802 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89805 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89808 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10a8980b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8980d jne 0x10a8982a */
  if (!C.zf) goto L_10a8982a;
  /* 10a8980f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a89812 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89815 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a8981a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a8981c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8981f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a89822 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a89824 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a89827 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10a8982a:;
  /* 10a8982a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8982d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89830 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a89835 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a89837 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8983a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a8983d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10a89844 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a89846 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a89849 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a8984c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10a89853:;
  /* 10a89853 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a89856 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a89859 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a8985b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a8985e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89861 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a89864 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10a89867:;
  /* 10a89867 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a8986a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8986d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a89870 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a89872 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a89875 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89878 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a8987b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8987e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10a89881 jmp 0x10a89b42 */
  goto L_10a89b42;
L_10a89886:;
  /* 10a89886 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a89889 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8988c jge 0x10a89b42 */
  if ((C.sf==C.of)) goto L_10a89b42;
  /* 10a89892 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a89895 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89898 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a8989b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a8989d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a898a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a898a3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a898a6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a898a9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10a898ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a898af add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a898b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a898b5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a898b8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a898bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a898be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a898c1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10a898c4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a898c7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a898ca cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a898ce jbe 0x10a898d7 */
  if ((C.cf||C.zf)) goto L_10a898d7;
  /* 10a898d0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10a898d7:;
  /* 10a898d7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a898da and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a898dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a898df jne 0x10a89a20 */
  if (!C.zf) goto L_10a89a20;
  /* 10a898e5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a898e8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10a898eb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a898ee mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a898f1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a898f5 jbe 0x10a898fe */
  if ((C.cf||C.zf)) goto L_10a898fe;
  /* 10a898f7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10a898fe:;
  /* 10a898fe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a89901 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a89904 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a89907 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8990a jne 0x10a899e0 */
  if (!C.zf) goto L_10a899e0;
  /* 10a89910 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89914 jae 0x10a89975 */
  if (!C.cf) goto L_10a89975;
  /* 10a89916 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a8991b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8991e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a89920 not edx */
  EDX = (~(EDX));
  /* 10a89922 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a89925 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89928 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10a8992c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8992e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a89931 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89934 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10a89938 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a8993b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8993e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10a89941 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a89944 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89947 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8994a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10a8994d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89950 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89953 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a89957 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a89959 jne 0x10a89973 */
  if (!C.zf) goto L_10a89973;
  /* 10a8995b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a89960 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a89963 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a89965 not edx */
  EDX = (~(EDX));
  /* 10a89967 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8996a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a8996c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8996e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a89971 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a89973:;
  /* 10a89973 jmp 0x10a899e0 */
  goto L_10a899e0;
L_10a89975:;
  /* 10a89975 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a89978 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8997b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a89980 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a89982 not eax */
  EAX = (~(EAX));
  /* 10a89984 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a89987 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a8998a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10a89991 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a89993 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a89996 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89999 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10a899a0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a899a3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a899a6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10a899a9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a899ac mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a899af add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a899b2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10a899b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a899b8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a899bb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a899bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a899c1 jne 0x10a899e0 */
  if (!C.zf) goto L_10a899e0;
  /* 10a899c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a899c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a899c9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a899ce shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a899d0 not eax */
  EAX = (~(EAX));
  /* 10a899d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a899d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a899d8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a899da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a899dd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10a899e0:;
  /* 10a899e0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a899e3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a899e6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a899e9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a899ec mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10a899ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a899f2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a899f5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a899f8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a899fb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10a899fe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a89a01 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89a04 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a89a07 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a89a0a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10a89a0d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89a10 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a89a13 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89a17 jbe 0x10a89a20 */
  if ((C.cf||C.zf)) goto L_10a89a20;
  /* 10a89a19 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10a89a20:;
  /* 10a89a20 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a89a23 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a89a26 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10a89a29 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a89a2c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a89a2f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a89a32 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a89a35 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10a89a38 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a89a3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a89a3e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a89a41 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a89a44 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a89a47 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10a89a4a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a89a4d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a89a50 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a89a53 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10a89a56 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a89a59 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a89a5c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a89a5f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89a62 jne 0x10a89b2e */
  if (!C.zf) goto L_10a89b2e;
  /* 10a89a68 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89a6c jae 0x10a89ac8 */
  if (!C.cf) goto L_10a89ac8;
  /* 10a89a6e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89a71 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89a74 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a89a78 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89a7b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89a7e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10a89a81 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a89a83 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89a86 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89a89 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10a89a8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a89a8e jne 0x10a89aa6 */
  if (!C.zf) goto L_10a89aa6;
  /* 10a89a90 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a89a95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a89a98 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a89a9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a89a9d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a89a9f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a89aa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a89aa4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a89aa6:;
  /* 10a89aa6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a89aab mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a89aae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a89ab0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a89ab3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89ab6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10a89aba or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a89abc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a89abf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89ac2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10a89ac6 jmp 0x10a89b2e */
  goto L_10a89b2e;
L_10a89ac8:;
  /* 10a89ac8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89acb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89ace movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10a89ad2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89ad5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89ad8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10a89adb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a89add mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89ae0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89ae3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10a89ae6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a89ae8 jne 0x10a89b05 */
  if (!C.zf) goto L_10a89b05;
  /* 10a89aea mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a89aed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89af0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10a89af5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10a89af7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a89afa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a89afd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a89aff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a89b02 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10a89b05:;
  /* 10a89b05 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a89b08 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89b0b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a89b10 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a89b12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a89b15 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89b18 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10a89b1f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a89b21 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a89b24 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a89b27 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10a89b2e:;
  /* 10a89b2e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a89b31 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a89b34 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a89b36 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a89b39 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89b3c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a89b3f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10a89b42:;
  /* 10a89b42 mov eax, 1 */
  EAX = (0x1u);
L_10a89b47:;
  /* 10a89b47 mov esp, ebp */
  ESP = (EBP);
  /* 10a89b49 pop ebp */
  EBP = (pop32());
  /* 10a89b4a ret  */
  ESPCHK(0x10a89560u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b50 @ 0x10a89b50 (304 bytes, 79 insns) */
void f_10a89b50(void) {
  FTRACE(0x10a89b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a89b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10a89b51 mov ebp, esp */
  EBP = (ESP);
  /* 10a89b53 push ecx */
  push32((uint32_t)(ECX));
  /* 10a89b54 cmp dword ptr [0x10ab2040], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab2040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89b5b je 0x10a89c7c */
  if (C.zf) goto L_10a89c7c;
  /* 10a89b61 mov eax, dword ptr [0x10ab2038] */
  EAX = (r32((uint32_t)(0x10ab2038)));
  /* 10a89b66 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10a89b69 mov ecx, dword ptr [0x10ab2040] */
  ECX = (r32((uint32_t)(0x10ab2040)));
  /* 10a89b6f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a89b72 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89b74 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a89b77 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10a89b7c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10a89b81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a89b84 push eax */
  push32((uint32_t)(EAX));
  /* 10a89b85 call dword ptr [0x10ab3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3368))), 0x10a89b8bu);
  /* 10a89b8b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a89b90 mov ecx, dword ptr [0x10ab2038] */
  ECX = (r32((uint32_t)(0x10ab2038)));
  /* 10a89b96 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a89b98 mov eax, dword ptr [0x10ab2040] */
  EAX = (r32((uint32_t)(0x10ab2040)));
  /* 10a89b9d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a89ba0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10a89ba2 mov edx, dword ptr [0x10ab2040] */
  EDX = (r32((uint32_t)(0x10ab2040)));
  /* 10a89ba8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a89bab mov eax, dword ptr [0x10ab2040] */
  EAX = (r32((uint32_t)(0x10ab2040)));
  /* 10a89bb0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a89bb3 mov edx, dword ptr [0x10ab2038] */
  EDX = (r32((uint32_t)(0x10ab2038)));
  /* 10a89bb9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10a89bc4 mov eax, dword ptr [0x10ab2040] */
  EAX = (r32((uint32_t)(0x10ab2040)));
  /* 10a89bc9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a89bcc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10a89bcf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a89bd2 mov eax, dword ptr [0x10ab2040] */
  EAX = (r32((uint32_t)(0x10ab2040)));
  /* 10a89bd7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a89bda mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10a89bdd mov edx, dword ptr [0x10ab2040] */
  EDX = (r32((uint32_t)(0x10ab2040)));
  /* 10a89be3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a89be6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10a89bea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a89bec jne 0x10a89c02 */
  if (!C.zf) goto L_10a89c02;
  /* 10a89bee mov edx, dword ptr [0x10ab2040] */
  EDX = (r32((uint32_t)(0x10ab2040)));
  /* 10a89bf4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a89bf7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10a89bf9 mov ecx, dword ptr [0x10ab2040] */
  ECX = (r32((uint32_t)(0x10ab2040)));
  /* 10a89bff mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10a89c02:;
  /* 10a89c02 mov edx, dword ptr [0x10ab2040] */
  EDX = (r32((uint32_t)(0x10ab2040)));
  /* 10a89c08 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89c0c jne 0x10a89c72 */
  if (!C.zf) goto L_10a89c72;
  /* 10a89c0e cmp dword ptr [0x10ab2044], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ab2044))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89c15 jle 0x10a89c72 */
  if ((C.zf||C.sf!=C.of)) goto L_10a89c72;
  /* 10a89c17 mov eax, dword ptr [0x10ab2040] */
  EAX = (r32((uint32_t)(0x10ab2040)));
  /* 10a89c1c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a89c1f push ecx */
  push32((uint32_t)(ECX));
  /* 10a89c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a89c22 mov edx, dword ptr [0x10ab204c] */
  EDX = (r32((uint32_t)(0x10ab204c)));
  /* 10a89c28 push edx */
  push32((uint32_t)(EDX));
  /* 10a89c29 call dword ptr [0x10ab33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab33b0))), 0x10a89c2fu);
  /* 10a89c2f mov eax, dword ptr [0x10ab2044] */
  EAX = (r32((uint32_t)(0x10ab2044)));
  /* 10a89c34 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a89c37 mov ecx, dword ptr [0x10ab2048] */
  ECX = (r32((uint32_t)(0x10ab2048)));
  /* 10a89c3d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89c3f mov edx, dword ptr [0x10ab2040] */
  EDX = (r32((uint32_t)(0x10ab2040)));
  /* 10a89c45 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89c48 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89c4a push ecx */
  push32((uint32_t)(ECX));
  /* 10a89c4b mov eax, dword ptr [0x10ab2040] */
  EAX = (r32((uint32_t)(0x10ab2040)));
  /* 10a89c50 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89c53 push eax */
  push32((uint32_t)(EAX));
  /* 10a89c54 mov ecx, dword ptr [0x10ab2040] */
  ECX = (r32((uint32_t)(0x10ab2040)));
  /* 10a89c5a push ecx */
  push32((uint32_t)(ECX));
  /* 10a89c5b call 0x10a8c280 */
  push32(0x10a89c60u); f_10a8c280();
  /* 10a89c60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89c63 mov edx, dword ptr [0x10ab2044] */
  EDX = (r32((uint32_t)(0x10ab2044)));
  /* 10a89c69 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89c6c mov dword ptr [0x10ab2044], edx */
  w32((uint32_t)(0x10ab2044), (EDX));
L_10a89c72:;
  /* 10a89c72 mov dword ptr [0x10ab2040], 0 */
  w32((uint32_t)(0x10ab2040), (0x0u));
L_10a89c7c:;
  /* 10a89c7c mov esp, ebp */
  ESP = (EBP);
  /* 10a89c7e pop ebp */
  EBP = (pop32());
  /* 10a89c7f ret  */
  ESPCHK(0x10a89b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c80 @ 0x10a89c80 (1565 bytes, 343 insns) */
void f_10a89c80(void) {
  FTRACE(0x10a89c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a89c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10a89c81 mov ebp, esp */
  EBP = (ESP);
  /* 10a89c83 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89c89 mov eax, dword ptr [0x10ab2044] */
  EAX = (r32((uint32_t)(0x10ab2044)));
  /* 10a89c8e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a89c91 push eax */
  push32((uint32_t)(EAX));
  /* 10a89c92 mov ecx, dword ptr [0x10ab2048] */
  ECX = (r32((uint32_t)(0x10ab2048)));
  /* 10a89c98 push ecx */
  push32((uint32_t)(ECX));
  /* 10a89c99 call dword ptr [0x10ab3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3388))), 0x10a89c9fu);
  /* 10a89c9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a89ca1 je 0x10a89cab */
  if (C.zf) goto L_10a89cab;
  /* 10a89ca3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a89ca6 jmp 0x10a8a299 */
  goto L_10a8a299;
L_10a89cab:;
  /* 10a89cab mov edx, dword ptr [0x10ab2048] */
  EDX = (r32((uint32_t)(0x10ab2048)));
  /* 10a89cb1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10a89cb7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10a89cc1 jmp 0x10a89cd2 */
  goto L_10a89cd2;
L_10a89cc3:;
  /* 10a89cc3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10a89cc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89ccc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10a89cd2:;
  /* 10a89cd2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10a89cd8 cmp ecx, dword ptr [0x10ab2044] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ab2044))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89cde jge 0x10a8a297 */
  if ((C.sf==C.of)) goto L_10a8a297;
  /* 10a89ce4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10a89cea mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a89ced mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10a89cf3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10a89cf8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10a89cfe push ecx */
  push32((uint32_t)(ECX));
  /* 10a89cff call dword ptr [0x10ab3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3388))), 0x10a89d05u);
  /* 10a89d05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a89d07 je 0x10a89d13 */
  if (C.zf) goto L_10a89d13;
  /* 10a89d09 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10a89d0e jmp 0x10a8a299 */
  goto L_10a8a299;
L_10a89d13:;
  /* 10a89d13 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10a89d19 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a89d1c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10a89d22 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10a89d28 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89d2e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a89d31 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10a89d37 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a89d3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a89d3d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10a89d47 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10a89d51 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a89d58 jmp 0x10a89d63 */
  goto L_10a89d63;
L_10a89d5a:;
  /* 10a89d5a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a89d5d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89d60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10a89d63:;
  /* 10a89d63 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89d67 jge 0x10a8a25b */
  if ((C.sf==C.of)) goto L_10a8a25b;
  /* 10a89d6d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10a89d77 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10a89d81 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10a89d8b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10a89d95 jmp 0x10a89da6 */
  goto L_10a89da6;
L_10a89d97:;
  /* 10a89d97 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10a89d9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89da0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10a89da6:;
  /* 10a89da6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89dad jge 0x10a89dc2 */
  if ((C.sf==C.of)) goto L_10a89dc2;
  /* 10a89daf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10a89db5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10a89dc0 jmp 0x10a89d97 */
  goto L_10a89d97;
L_10a89dc2:;
  /* 10a89dc2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89dc6 jl 0x10a8a1fd */
  if ((C.sf!=C.of)) goto L_10a8a1fd;
  /* 10a89dcc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10a89dd1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10a89dd7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a89dd8 call dword ptr [0x10ab3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3388))), 0x10a89ddeu);
  /* 10a89dde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a89de0 je 0x10a89dec */
  if (C.zf) goto L_10a89dec;
  /* 10a89de2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10a89de7 jmp 0x10a8a299 */
  goto L_10a8a299;
L_10a89dec:;
  /* 10a89dec mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10a89df2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a89df5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10a89dff jmp 0x10a89e10 */
  goto L_10a89e10;
L_10a89e01:;
  /* 10a89e01 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10a89e07 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89e0a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10a89e10:;
  /* 10a89e10 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89e17 jge 0x10a89f94 */
  if ((C.sf==C.of)) goto L_10a89f94;
  /* 10a89e1d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a89e20 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89e23 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10a89e29 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a89e2f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89e35 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10a89e3b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a89e41 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89e45 jne 0x10a89e52 */
  if (!C.zf) goto L_10a89e52;
  /* 10a89e47 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10a89e4d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89e50 je 0x10a89e5c */
  if (C.zf) goto L_10a89e5c;
L_10a89e52:;
  /* 10a89e52 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10a89e57 jmp 0x10a8a299 */
  goto L_10a8a299;
L_10a89e5c:;
  /* 10a89e5c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a89e62 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a89e64 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10a89e6a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10a89e70 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10a89e76 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10a89e7c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a89e7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a89e81 je 0x10a89eb9 */
  if (C.zf) goto L_10a89eb9;
  /* 10a89e83 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10a89e89 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89e8c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10a89e92 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89e9c jle 0x10a89ea8 */
  if ((C.zf||C.sf!=C.of)) goto L_10a89ea8;
  /* 10a89e9e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10a89ea3 jmp 0x10a8a299 */
  goto L_10a8a299;
L_10a89ea8:;
  /* 10a89ea8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10a89eae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89eb1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10a89eb7 jmp 0x10a89efb */
  goto L_10a89efb;
L_10a89eb9:;
  /* 10a89eb9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10a89ebf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10a89ec2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a89ec5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10a89ecb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89ed2 jle 0x10a89ede */
  if ((C.zf||C.sf!=C.of)) goto L_10a89ede;
  /* 10a89ed4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10a89ede:;
  /* 10a89ede mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10a89ee4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10a89eeb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89eee mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10a89ef4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10a89efb:;
  /* 10a89efb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89f02 jl 0x10a89f1d */
  if ((C.sf!=C.of)) goto L_10a89f1d;
  /* 10a89f04 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10a89f0a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10a89f0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a89f0f jne 0x10a89f1d */
  if (!C.zf) goto L_10a89f1d;
  /* 10a89f11 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89f1b jle 0x10a89f27 */
  if ((C.zf||C.sf!=C.of)) goto L_10a89f27;
L_10a89f1d:;
  /* 10a89f1d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10a89f22 jmp 0x10a8a299 */
  goto L_10a8a299;
L_10a89f27:;
  /* 10a89f27 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a89f2d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89f33 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10a89f36 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89f3c je 0x10a89f48 */
  if (C.zf) goto L_10a89f48;
  /* 10a89f3e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10a89f43 jmp 0x10a8a299 */
  goto L_10a8a299;
L_10a89f48:;
  /* 10a89f48 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a89f4e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89f54 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10a89f5a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a89f60 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89f66 jb 0x10a89e5c */
  if (C.cf) goto L_10a89e5c;
  /* 10a89f6c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a89f72 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89f78 je 0x10a89f84 */
  if (C.zf) goto L_10a89f84;
  /* 10a89f7a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10a89f7f jmp 0x10a8a299 */
  goto L_10a8a299;
L_10a89f84:;
  /* 10a89f84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a89f87 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89f8c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a89f8f jmp 0x10a89e01 */
  goto L_10a89e01;
L_10a89f94:;
  /* 10a89f94 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a89f97 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a89f99 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89f9f je 0x10a89fab */
  if (C.zf) goto L_10a89fab;
  /* 10a89fa1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10a89fa6 jmp 0x10a8a299 */
  goto L_10a8a299;
L_10a89fab:;
  /* 10a89fab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a89fae mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10a89fb4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10a89fbb jmp 0x10a89fc6 */
  goto L_10a89fc6;
L_10a89fbd:;
  /* 10a89fbd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a89fc0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a89fc3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10a89fc6:;
  /* 10a89fc6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a89fca jge 0x10a8a1fd */
  if ((C.sf==C.of)) goto L_10a8a1fd;
  /* 10a89fd0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10a89fda mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10a89fe0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10a89fe6:;
  /* 10a89fe6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a89fec mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a89fef mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10a89ff5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10a89ffb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a001 je 0x10a8a12a */
  if (C.zf) goto L_10a8a12a;
  /* 10a8a007 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a8a00a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10a8a010 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a017 je 0x10a8a12a */
  if (C.zf) goto L_10a8a12a;
  /* 10a8a01d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10a8a023 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a029 jb 0x10a8a03e */
  if (C.cf) goto L_10a8a03e;
  /* 10a8a02b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10a8a031 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a036 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a03c jb 0x10a8a048 */
  if (C.cf) goto L_10a8a048;
L_10a8a03e:;
  /* 10a8a03e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10a8a043 jmp 0x10a8a299 */
  goto L_10a8a299;
L_10a8a048:;
  /* 10a8a048 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10a8a04e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8a054 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10a8a05a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10a8a060 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a063 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a8a066 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8a069 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a06e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10a8a074:;
  /* 10a8a074 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8a077 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a07d je 0x10a8a09e */
  if (C.zf) goto L_10a8a09e;
  /* 10a8a07f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8a082 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a088 jne 0x10a8a08c */
  if (!C.zf) goto L_10a8a08c;
  /* 10a8a08a jmp 0x10a8a09e */
  goto L_10a8a09e;
L_10a8a08c:;
  /* 10a8a08c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8a08f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a8a091 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8a094 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8a097 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a099 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a8a09c jmp 0x10a8a074 */
  goto L_10a8a074;
L_10a8a09e:;
  /* 10a8a09e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8a0a1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a0a7 jne 0x10a8a0b3 */
  if (!C.zf) goto L_10a8a0b3;
  /* 10a8a0a9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10a8a0ae jmp 0x10a8a299 */
  goto L_10a8a299;
L_10a8a0b3:;
  /* 10a8a0b3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10a8a0b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a8a0bb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10a8a0be sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8a0c1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10a8a0c7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a0ce jle 0x10a8a0da */
  if ((C.zf||C.sf!=C.of)) goto L_10a8a0da;
  /* 10a8a0d0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10a8a0da:;
  /* 10a8a0da mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10a8a0e0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a0e3 je 0x10a8a0ef */
  if (C.zf) goto L_10a8a0ef;
  /* 10a8a0e5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10a8a0ea jmp 0x10a8a299 */
  goto L_10a8a299;
L_10a8a0ef:;
  /* 10a8a0ef mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10a8a0f5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a8a0f8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a0fe je 0x10a8a10a */
  if (C.zf) goto L_10a8a10a;
  /* 10a8a100 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10a8a105 jmp 0x10a8a299 */
  goto L_10a8a299;
L_10a8a10a:;
  /* 10a8a10a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10a8a110 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10a8a116 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10a8a11c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a11f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10a8a125 jmp 0x10a89fe6 */
  goto L_10a89fe6;
L_10a8a12a:;
  /* 10a8a12a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a131 je 0x10a8a1a1 */
  if (C.zf) goto L_10a8a1a1;
  /* 10a8a133 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a137 jge 0x10a8a16b */
  if ((C.sf==C.of)) goto L_10a8a16b;
  /* 10a8a139 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a8a13e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a8a141 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a8a143 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10a8a149 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8a14b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10a8a151 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a8a156 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a8a159 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a8a15b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10a8a161 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8a163 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10a8a169 jmp 0x10a8a1a1 */
  goto L_10a8a1a1;
L_10a8a16b:;
  /* 10a8a16b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a8a16e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8a171 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a8a176 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a8a178 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10a8a17e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8a180 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10a8a186 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a8a189 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8a18c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10a8a191 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10a8a193 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10a8a199 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8a19b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10a8a1a1:;
  /* 10a8a1a1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10a8a1a7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a8a1aa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a1b0 jne 0x10a8a1c4 */
  if (!C.zf) goto L_10a8a1c4;
  /* 10a8a1b2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a8a1b5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10a8a1bb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a1c2 je 0x10a8a1ce */
  if (C.zf) goto L_10a8a1ce;
L_10a8a1c4:;
  /* 10a8a1c4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10a8a1c9 jmp 0x10a8a299 */
  goto L_10a8a299;
L_10a8a1ce:;
  /* 10a8a1ce mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10a8a1d4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a8a1d7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a1dd je 0x10a8a1e9 */
  if (C.zf) goto L_10a8a1e9;
  /* 10a8a1df mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10a8a1e4 jmp 0x10a8a299 */
  goto L_10a8a299;
L_10a8a1e9:;
  /* 10a8a1e9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10a8a1ef add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a1f2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10a8a1f8 jmp 0x10a89fbd */
  goto L_10a89fbd;
L_10a8a1fd:;
  /* 10a8a1fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8a200 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10a8a206 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10a8a20c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a210 jne 0x10a8a22a */
  if (!C.zf) goto L_10a8a22a;
  /* 10a8a212 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8a215 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10a8a21b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10a8a221 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a228 je 0x10a8a231 */
  if (C.zf) goto L_10a8a231;
L_10a8a22a:;
  /* 10a8a22a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10a8a22f jmp 0x10a8a299 */
  goto L_10a8a299;
L_10a8a231:;
  /* 10a8a231 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10a8a237 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a23d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10a8a243 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8a246 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a24b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a8a24e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8a251 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10a8a253 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a8a256 jmp 0x10a89d5a */
  goto L_10a89d5a;
L_10a8a25b:;
  /* 10a8a25b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10a8a261 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10a8a267 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a269 jne 0x10a8a27c */
  if (!C.zf) goto L_10a8a27c;
  /* 10a8a26b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10a8a271 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10a8a277 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a27a je 0x10a8a283 */
  if (C.zf) goto L_10a8a283;
L_10a8a27c:;
  /* 10a8a27c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10a8a281 jmp 0x10a8a299 */
  goto L_10a8a299;
L_10a8a283:;
  /* 10a8a283 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10a8a289 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a28c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10a8a292 jmp 0x10a89cc3 */
  goto L_10a89cc3;
L_10a8a297:;
  /* 10a8a297 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a8a299:;
  /* 10a8a299 mov esp, ebp */
  ESP = (EBP);
  /* 10a8a29b pop ebp */
  EBP = (pop32());
  /* 10a8a29c ret  */
  ESPCHK(0x10a89c80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2a0 @ 0x10a8a2a0 (250 bytes, 92 insns) */
void f_10a8a2a0(void) {
  FTRACE(0x10a8a2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8a2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8a2a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8a2a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8a2a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a8a2a7 push esi */
  push32((uint32_t)(ESI));
  /* 10a8a2a8 push edi */
  push32((uint32_t)(EDI));
  /* 10a8a2a9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10a8a2ac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a8a2af lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10a8a2b2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10a8a2b5:;
  /* 10a8a2b5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a2b9 jne 0x10a8a2d9 */
  if (!C.zf) goto L_10a8a2d9;
  /* 10a8a2bb push 0x10aac1cc */
  push32((uint32_t)(0x10aac1ccu));
  /* 10a8a2c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8a2c2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10a8a2c4 push 0x10aac1c0 */
  push32((uint32_t)(0x10aac1c0u));
  /* 10a8a2c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8a2cb call 0x10a83450 */
  push32(0x10a8a2d0u); f_10a83450();
  /* 10a8a2d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a2d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a2d6 jne 0x10a8a2d9 */
  if (!C.zf) goto L_10a8a2d9;
  /* 10a8a2d8 int3  */
  x86_unimpl("int3 @ 0x10a8a2d8");
L_10a8a2d9:;
  /* 10a8a2d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8a2db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8a2dd jne 0x10a8a2b5 */
  if (!C.zf) goto L_10a8a2b5;
L_10a8a2df:;
  /* 10a8a2df cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a2e3 jne 0x10a8a303 */
  if (!C.zf) goto L_10a8a303;
  /* 10a8a2e5 push 0x10aac1b0 */
  push32((uint32_t)(0x10aac1b0u));
  /* 10a8a2ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8a2ec push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10a8a2ee push 0x10aac1c0 */
  push32((uint32_t)(0x10aac1c0u));
  /* 10a8a2f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8a2f5 call 0x10a83450 */
  push32(0x10a8a2fau); f_10a83450();
  /* 10a8a2fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a2fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a300 jne 0x10a8a303 */
  if (!C.zf) goto L_10a8a303;
  /* 10a8a302 int3  */
  x86_unimpl("int3 @ 0x10a8a302");
L_10a8a303:;
  /* 10a8a303 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8a305 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8a307 jne 0x10a8a2df */
  if (!C.zf) goto L_10a8a2df;
  /* 10a8a309 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a30c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10a8a313 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8a319 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a8a31c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a31f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8a322 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a8a324 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a327 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10a8a32e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a8a331 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8a332 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8a335 push edx */
  push32((uint32_t)(EDX));
  /* 10a8a336 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a339 push eax */
  push32((uint32_t)(EAX));
  /* 10a8a33a call 0x10a8b320 */
  push32(0x10a8a33fu); f_10a8b320();
  /* 10a8a33f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a342 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a8a345 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a348 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a8a34b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8a34e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a351 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a8a354 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a357 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a35b jl 0x10a8a37f */
  if ((C.sf!=C.of)) goto L_10a8a37f;
  /* 10a8a35d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a360 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a8a362 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a8a365 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8a367 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8a36d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10a8a370 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a373 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a8a375 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a378 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a37b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a8a37d jmp 0x10a8a390 */
  goto L_10a8a390;
L_10a8a37f:;
  /* 10a8a37f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a382 push edx */
  push32((uint32_t)(EDX));
  /* 10a8a383 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8a385 call 0x10a8b0a0 */
  push32(0x10a8a38au); f_10a8b0a0();
  /* 10a8a38a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a38d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10a8a390:;
  /* 10a8a390 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a8a393 pop edi */
  EDI = (pop32());
  /* 10a8a394 pop esi */
  ESI = (pop32());
  /* 10a8a395 pop ebx */
  EBX = (pop32());
  /* 10a8a396 mov esp, ebp */
  ESP = (EBP);
  /* 10a8a398 pop ebp */
  EBP = (pop32());
  /* 10a8a399 ret  */
  ESPCHK(0x10a8a2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3a0 @ 0x10a8a3a0 (183 bytes, 58 insns) */
void f_10a8a3a0(void) {
  FTRACE(0x10a8a3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8a3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8a3a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8a3a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8a3a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8a3a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a3ac cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a3b1 ja 0x10a8a3ca */
  if ((!C.cf&&!C.zf)) goto L_10a8a3ca;
  /* 10a8a3b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8a3b6 mov edx, dword ptr [0x10aaec98] */
  EDX = (r32((uint32_t)(0x10aaec98)));
  /* 10a8a3bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8a3be mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10a8a3c2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10a8a3c5 jmp 0x10a8a453 */
  goto L_10a8a453;
L_10a8a3ca:;
  /* 10a8a3ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8a3cd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10a8a3d0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8a3d6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8a3dc mov edx, dword ptr [0x10aaec98] */
  EDX = (r32((uint32_t)(0x10aaec98)));
  /* 10a8a3e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8a3e4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10a8a3e8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8a3ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8a3ef je 0x10a8a413 */
  if (C.zf) goto L_10a8a413;
  /* 10a8a3f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8a3f4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10a8a3f7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8a3fd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10a8a400 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10a8a403 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10a8a406 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10a8a40a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10a8a411 jmp 0x10a8a424 */
  goto L_10a8a424;
L_10a8a413:;
  /* 10a8a413 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10a8a416 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10a8a419 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10a8a41d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10a8a424:;
  /* 10a8a424 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8a426 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8a428 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8a42a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10a8a42d push ecx */
  push32((uint32_t)(ECX));
  /* 10a8a42e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8a431 push edx */
  push32((uint32_t)(EDX));
  /* 10a8a432 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10a8a435 push eax */
  push32((uint32_t)(EAX));
  /* 10a8a436 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8a438 call 0x10a8c5c0 */
  push32(0x10a8a43du); f_10a8c5c0();
  /* 10a8a43d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a440 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8a442 jne 0x10a8a448 */
  if (!C.zf) goto L_10a8a448;
  /* 10a8a444 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8a446 jmp 0x10a8a453 */
  goto L_10a8a453;
L_10a8a448:;
  /* 10a8a448 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8a44b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8a450 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10a8a453:;
  /* 10a8a453 mov esp, ebp */
  ESP = (EBP);
  /* 10a8a455 pop ebp */
  EBP = (pop32());
  /* 10a8a456 ret  */
  ESPCHK(0x10a8a3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a460 @ 0x10a8a460 (836 bytes, 238 insns) */
void f_10a8a460(void) {
  FTRACE(0x10a8a460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8a460 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8a461 mov ebp, esp */
  EBP = (ESP);
  /* 10a8a463 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8a466 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a8a468 call 0x10a87d90 */
  push32(0x10a8a46du); f_10a87d90();
  /* 10a8a46d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a470 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8a473 push eax */
  push32((uint32_t)(EAX));
  /* 10a8a474 call 0x10a8a7b0 */
  push32(0x10a8a479u); f_10a8a7b0();
  /* 10a8a479 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a47c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a8a47f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8a482 cmp ecx, dword ptr [0x10ab1d84] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ab1d84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a488 jne 0x10a8a49b */
  if (!C.zf) goto L_10a8a49b;
  /* 10a8a48a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a8a48c call 0x10a87e30 */
  push32(0x10a8a491u); f_10a87e30();
  /* 10a8a491 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a494 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8a496 jmp 0x10a8a7a0 */
  goto L_10a8a7a0;
L_10a8a49b:;
  /* 10a8a49b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a49f jne 0x10a8a4bc */
  if (!C.zf) goto L_10a8a4bc;
  /* 10a8a4a1 call 0x10a8a890 */
  push32(0x10a8a4a6u); f_10a8a890();
  /* 10a8a4a6 call 0x10a8a910 */
  push32(0x10a8a4abu); f_10a8a910();
  /* 10a8a4ab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a8a4ad call 0x10a87e30 */
  push32(0x10a8a4b2u); f_10a87e30();
  /* 10a8a4b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a4b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8a4b7 jmp 0x10a8a7a0 */
  goto L_10a8a7a0;
L_10a8a4bc:;
  /* 10a8a4bc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a8a4c3 jmp 0x10a8a4ce */
  goto L_10a8a4ce;
L_10a8a4c5:;
  /* 10a8a4c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8a4c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a4cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a8a4ce:;
  /* 10a8a4ce cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a4d2 jae 0x10a8a61f */
  if (!C.cf) goto L_10a8a61f;
  /* 10a8a4d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8a4db imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8a4de mov ecx, dword ptr [eax + 0x10aaeeb8] */
  ECX = (r32((uint32_t)(EAX + 0x10aaeeb8)));
  /* 10a8a4e4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a4e7 jne 0x10a8a61a */
  if (!C.zf) goto L_10a8a61a;
  /* 10a8a4ed mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a8a4f4 jmp 0x10a8a4ff */
  goto L_10a8a4ff;
L_10a8a4f6:;
  /* 10a8a4f6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a4f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a4fc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10a8a4ff:;
  /* 10a8a4ff cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a506 jae 0x10a8a514 */
  if (!C.cf) goto L_10a8a514;
  /* 10a8a508 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a50b mov byte ptr [eax + 0x10ab1f20], 0 */
  w8((uint32_t)(EAX + 0x10ab1f20), (0x0u));
  /* 10a8a512 jmp 0x10a8a4f6 */
  goto L_10a8a4f6;
L_10a8a514:;
  /* 10a8a514 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a8a51b jmp 0x10a8a526 */
  goto L_10a8a526;
L_10a8a51d:;
  /* 10a8a51d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8a520 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a523 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10a8a526:;
  /* 10a8a526 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a52a jae 0x10a8a5a7 */
  if (!C.cf) goto L_10a8a5a7;
  /* 10a8a52c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8a52f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8a532 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8a535 lea ecx, [edx + eax*8 + 0x10aaeec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10aaeec8));
  /* 10a8a53c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8a53f jmp 0x10a8a54a */
  goto L_10a8a54a;
L_10a8a541:;
  /* 10a8a541 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8a544 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a547 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a8a54a:;
  /* 10a8a54a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8a54d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8a54f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a8a551 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8a553 je 0x10a8a5a2 */
  if (C.zf) goto L_10a8a5a2;
  /* 10a8a555 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8a558 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8a55a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10a8a55d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8a55f je 0x10a8a5a2 */
  if (C.zf) goto L_10a8a5a2;
  /* 10a8a561 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8a564 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8a566 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a8a568 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10a8a56b jmp 0x10a8a576 */
  goto L_10a8a576;
L_10a8a56d:;
  /* 10a8a56d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a570 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a573 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a8a576:;
  /* 10a8a576 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8a579 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8a57b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10a8a57e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a581 ja 0x10a8a5a0 */
  if ((!C.cf&&!C.zf)) goto L_10a8a5a0;
  /* 10a8a583 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a586 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8a589 mov dl, byte ptr [eax + 0x10ab1f21] */
  DL = (r8((uint32_t)(EAX + 0x10ab1f21)));
  /* 10a8a58f or dl, byte ptr [ecx + 0x10aaeeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10aaeeb0))); DL = (_r); fl_logic(_r,8); }
  /* 10a8a595 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a598 mov byte ptr [eax + 0x10ab1f21], dl */
  w8((uint32_t)(EAX + 0x10ab1f21), (DL));
  /* 10a8a59e jmp 0x10a8a56d */
  goto L_10a8a56d;
L_10a8a5a0:;
  /* 10a8a5a0 jmp 0x10a8a541 */
  goto L_10a8a541;
L_10a8a5a2:;
  /* 10a8a5a2 jmp 0x10a8a51d */
  goto L_10a8a51d;
L_10a8a5a7:;
  /* 10a8a5a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8a5aa mov dword ptr [0x10ab1d84], ecx */
  w32((uint32_t)(0x10ab1d84), (ECX));
  /* 10a8a5b0 mov dword ptr [0x10ab1e0c], 1 */
  w32((uint32_t)(0x10ab1e0c), (0x1u));
  /* 10a8a5ba mov edx, dword ptr [0x10ab1d84] */
  EDX = (r32((uint32_t)(0x10ab1d84)));
  /* 10a8a5c0 push edx */
  push32((uint32_t)(EDX));
  /* 10a8a5c1 call 0x10a8a810 */
  push32(0x10a8a5c6u); f_10a8a810();
  /* 10a8a5c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a5c9 mov dword ptr [0x10ab2024], eax */
  w32((uint32_t)(0x10ab2024), (EAX));
  /* 10a8a5ce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a8a5d5 jmp 0x10a8a5e0 */
  goto L_10a8a5e0;
L_10a8a5d7:;
  /* 10a8a5d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8a5da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a5dd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a8a5e0:;
  /* 10a8a5e0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a5e4 jae 0x10a8a604 */
  if (!C.cf) goto L_10a8a604;
  /* 10a8a5e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8a5e9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8a5ec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8a5ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8a5f2 mov cx, word ptr [ecx + eax*2 + 0x10aaeebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10aaeebc)));
  /* 10a8a5fa mov word ptr [edx*2 + 0x10ab1e00], cx */
  w16((uint32_t)(EDX*2 + 0x10ab1e00), (CX));
  /* 10a8a602 jmp 0x10a8a5d7 */
  goto L_10a8a5d7;
L_10a8a604:;
  /* 10a8a604 call 0x10a8a910 */
  push32(0x10a8a609u); f_10a8a910();
  /* 10a8a609 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a8a60b call 0x10a87e30 */
  push32(0x10a8a610u); f_10a87e30();
  /* 10a8a610 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a613 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8a615 jmp 0x10a8a7a0 */
  goto L_10a8a7a0;
L_10a8a61a:;
  /* 10a8a61a jmp 0x10a8a4c5 */
  goto L_10a8a4c5;
L_10a8a61f:;
  /* 10a8a61f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10a8a622 push edx */
  push32((uint32_t)(EDX));
  /* 10a8a623 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8a626 push eax */
  push32((uint32_t)(EAX));
  /* 10a8a627 call dword ptr [0x10ab32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32f8))), 0x10a8a62du);
  /* 10a8a62d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a630 jne 0x10a8a772 */
  if (!C.zf) goto L_10a8a772;
  /* 10a8a636 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a8a63d jmp 0x10a8a648 */
  goto L_10a8a648;
L_10a8a63f:;
  /* 10a8a63f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a642 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a645 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10a8a648:;
  /* 10a8a648 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a64f jae 0x10a8a65d */
  if (!C.cf) goto L_10a8a65d;
  /* 10a8a651 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a654 mov byte ptr [edx + 0x10ab1f20], 0 */
  w8((uint32_t)(EDX + 0x10ab1f20), (0x0u));
  /* 10a8a65b jmp 0x10a8a63f */
  goto L_10a8a63f;
L_10a8a65d:;
  /* 10a8a65d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8a660 mov dword ptr [0x10ab1d84], eax */
  w32((uint32_t)(0x10ab1d84), (EAX));
  /* 10a8a665 mov dword ptr [0x10ab2024], 0 */
  w32((uint32_t)(0x10ab2024), (0x0u));
  /* 10a8a66f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a673 jbe 0x10a8a72e */
  if ((C.cf||C.zf)) goto L_10a8a72e;
  /* 10a8a679 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10a8a67c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10a8a67f jmp 0x10a8a68a */
  goto L_10a8a68a;
L_10a8a681:;
  /* 10a8a681 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a8a684 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a687 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10a8a68a:;
  /* 10a8a68a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a8a68d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8a68f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a8a691 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8a693 je 0x10a8a6dc */
  if (C.zf) goto L_10a8a6dc;
  /* 10a8a695 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a8a698 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8a69a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10a8a69d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8a69f je 0x10a8a6dc */
  if (C.zf) goto L_10a8a6dc;
  /* 10a8a6a1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a8a6a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8a6a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a8a6a8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10a8a6ab jmp 0x10a8a6b6 */
  goto L_10a8a6b6;
L_10a8a6ad:;
  /* 10a8a6ad mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a6b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a6b3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a8a6b6:;
  /* 10a8a6b6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a8a6b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8a6bb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10a8a6be cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a6c1 ja 0x10a8a6da */
  if ((!C.cf&&!C.zf)) goto L_10a8a6da;
  /* 10a8a6c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a6c6 mov cl, byte ptr [eax + 0x10ab1f21] */
  CL = (r8((uint32_t)(EAX + 0x10ab1f21)));
  /* 10a8a6cc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10a8a6cf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a6d2 mov byte ptr [edx + 0x10ab1f21], cl */
  w8((uint32_t)(EDX + 0x10ab1f21), (CL));
  /* 10a8a6d8 jmp 0x10a8a6ad */
  goto L_10a8a6ad;
L_10a8a6da:;
  /* 10a8a6da jmp 0x10a8a681 */
  goto L_10a8a681;
L_10a8a6dc:;
  /* 10a8a6dc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10a8a6e3 jmp 0x10a8a6ee */
  goto L_10a8a6ee;
L_10a8a6e5:;
  /* 10a8a6e5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a6e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a6eb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a8a6ee:;
  /* 10a8a6ee cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a6f5 jae 0x10a8a70e */
  if (!C.cf) goto L_10a8a70e;
  /* 10a8a6f7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a6fa mov dl, byte ptr [ecx + 0x10ab1f21] */
  DL = (r8((uint32_t)(ECX + 0x10ab1f21)));
  /* 10a8a700 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10a8a703 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8a706 mov byte ptr [eax + 0x10ab1f21], dl */
  w8((uint32_t)(EAX + 0x10ab1f21), (DL));
  /* 10a8a70c jmp 0x10a8a6e5 */
  goto L_10a8a6e5;
L_10a8a70e:;
  /* 10a8a70e mov ecx, dword ptr [0x10ab1d84] */
  ECX = (r32((uint32_t)(0x10ab1d84)));
  /* 10a8a714 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8a715 call 0x10a8a810 */
  push32(0x10a8a71au); f_10a8a810();
  /* 10a8a71a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a71d mov dword ptr [0x10ab2024], eax */
  w32((uint32_t)(0x10ab2024), (EAX));
  /* 10a8a722 mov dword ptr [0x10ab1e0c], 1 */
  w32((uint32_t)(0x10ab1e0c), (0x1u));
  /* 10a8a72c jmp 0x10a8a738 */
  goto L_10a8a738;
L_10a8a72e:;
  /* 10a8a72e mov dword ptr [0x10ab1e0c], 0 */
  w32((uint32_t)(0x10ab1e0c), (0x0u));
L_10a8a738:;
  /* 10a8a738 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a8a73f jmp 0x10a8a74a */
  goto L_10a8a74a;
L_10a8a741:;
  /* 10a8a741 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8a744 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a747 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a8a74a:;
  /* 10a8a74a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a74e jae 0x10a8a75f */
  if (!C.cf) goto L_10a8a75f;
  /* 10a8a750 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8a753 mov word ptr [eax*2 + 0x10ab1e00], 0 */
  w16((uint32_t)(EAX*2 + 0x10ab1e00), (0x0u));
  /* 10a8a75d jmp 0x10a8a741 */
  goto L_10a8a741;
L_10a8a75f:;
  /* 10a8a75f call 0x10a8a910 */
  push32(0x10a8a764u); f_10a8a910();
  /* 10a8a764 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a8a766 call 0x10a87e30 */
  push32(0x10a8a76bu); f_10a87e30();
  /* 10a8a76b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a76e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8a770 jmp 0x10a8a7a0 */
  goto L_10a8a7a0;
L_10a8a772:;
  /* 10a8a772 cmp dword ptr [0x10ab08a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab08a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a779 je 0x10a8a793 */
  if (C.zf) goto L_10a8a793;
  /* 10a8a77b call 0x10a8a890 */
  push32(0x10a8a780u); f_10a8a890();
  /* 10a8a780 call 0x10a8a910 */
  push32(0x10a8a785u); f_10a8a910();
  /* 10a8a785 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a8a787 call 0x10a87e30 */
  push32(0x10a8a78cu); f_10a87e30();
  /* 10a8a78c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a78f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8a791 jmp 0x10a8a7a0 */
  goto L_10a8a7a0;
L_10a8a793:;
  /* 10a8a793 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a8a795 call 0x10a87e30 */
  push32(0x10a8a79au); f_10a87e30();
  /* 10a8a79a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a79d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a8a7a0:;
  /* 10a8a7a0 mov esp, ebp */
  ESP = (EBP);
  /* 10a8a7a2 pop ebp */
  EBP = (pop32());
  /* 10a8a7a3 ret  */
  ESPCHK(0x10a8a460u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10a8a7b0 (89 bytes, 21 insns) */
void f_10a8a7b0(void) {
  FTRACE(0x10a8a7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8a7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8a7b1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8a7b3 mov dword ptr [0x10ab08a0], 0 */
  w32((uint32_t)(0x10ab08a0), (0x0u));
  /* 10a8a7bd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a7c1 jne 0x10a8a7d5 */
  if (!C.zf) goto L_10a8a7d5;
  /* 10a8a7c3 mov dword ptr [0x10ab08a0], 1 */
  w32((uint32_t)(0x10ab08a0), (0x1u));
  /* 10a8a7cd call dword ptr [0x10ab32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32f0))), 0x10a8a7d3u);
  /* 10a8a7d3 jmp 0x10a8a807 */
  goto L_10a8a807;
L_10a8a7d5:;
  /* 10a8a7d5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a7d9 jne 0x10a8a7ed */
  if (!C.zf) goto L_10a8a7ed;
  /* 10a8a7db mov dword ptr [0x10ab08a0], 1 */
  w32((uint32_t)(0x10ab08a0), (0x1u));
  /* 10a8a7e5 call dword ptr [0x10ab3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3300))), 0x10a8a7ebu);
  /* 10a8a7eb jmp 0x10a8a807 */
  goto L_10a8a807;
L_10a8a7ed:;
  /* 10a8a7ed cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a7f1 jne 0x10a8a804 */
  if (!C.zf) goto L_10a8a804;
  /* 10a8a7f3 mov dword ptr [0x10ab08a0], 1 */
  w32((uint32_t)(0x10ab08a0), (0x1u));
  /* 10a8a7fd mov eax, dword ptr [0x10ab08c0] */
  EAX = (r32((uint32_t)(0x10ab08c0)));
  /* 10a8a802 jmp 0x10a8a807 */
  goto L_10a8a807;
L_10a8a804:;
  /* 10a8a804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10a8a807:;
  /* 10a8a807 pop ebp */
  EBP = (pop32());
  /* 10a8a808 ret  */
  ESPCHK(0x10a8a7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a810 @ 0x10a8a810 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10a8a810(void) {
  FTRACE(0x10a8a810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8a810 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8a811 mov ebp, esp */
  EBP = (ESP);
  /* 10a8a813 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8a814 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8a817 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8a81a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8a81d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8a823 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a8a826 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a82a ja 0x10a8a85a */
  if ((!C.cf&&!C.zf)) goto L_10a8a85a;
  /* 10a8a82c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8a82f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8a831 mov dl, byte ptr [eax + 0x10a8a874] */
  DL = (r8((uint32_t)(EAX + 0x10a8a874)));
  /* 10a8a837 jmp dword ptr [edx*4 + 0x10a8a860] */
  switch (EDX) {
    case 0: goto L_10a8a83e;
    case 1: goto L_10a8a845;
    case 2: goto L_10a8a84c;
    case 3: goto L_10a8a853;
    case 4: goto L_10a8a85a;
    default: x86_unimpl("switch@0x10a8a837 out of table"); return;
  }
L_10a8a83e:;
  /* 10a8a83e mov eax, 0x411 */
  EAX = (0x411u);
  /* 10a8a843 jmp 0x10a8a85c */
  goto L_10a8a85c;
L_10a8a845:;
  /* 10a8a845 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10a8a84a jmp 0x10a8a85c */
  goto L_10a8a85c;
L_10a8a84c:;
  /* 10a8a84c mov eax, 0x412 */
  EAX = (0x412u);
  /* 10a8a851 jmp 0x10a8a85c */
  goto L_10a8a85c;
L_10a8a853:;
  /* 10a8a853 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10a8a858 jmp 0x10a8a85c */
  goto L_10a8a85c;
L_10a8a85a:;
  /* 10a8a85a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a8a85c:;
  /* 10a8a85c mov esp, ebp */
  ESP = (EBP);
  /* 10a8a85e pop ebp */
  EBP = (pop32());
  /* 10a8a85f ret  */
  ESPCHK(0x10a8a810u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10a8a890 (116 bytes, 29 insns) */
void f_10a8a890(void) {
  FTRACE(0x10a8a890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8a890 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8a891 mov ebp, esp */
  EBP = (ESP);
  /* 10a8a893 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8a894 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a8a89b jmp 0x10a8a8a6 */
  goto L_10a8a8a6;
L_10a8a89d:;
  /* 10a8a89d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8a8a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a8a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a8a8a6:;
  /* 10a8a8a6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a8ad jge 0x10a8a8bb */
  if ((C.sf==C.of)) goto L_10a8a8bb;
  /* 10a8a8af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8a8b2 mov byte ptr [ecx + 0x10ab1f20], 0 */
  w8((uint32_t)(ECX + 0x10ab1f20), (0x0u));
  /* 10a8a8b9 jmp 0x10a8a89d */
  goto L_10a8a89d;
L_10a8a8bb:;
  /* 10a8a8bb mov dword ptr [0x10ab1d84], 0 */
  w32((uint32_t)(0x10ab1d84), (0x0u));
  /* 10a8a8c5 mov dword ptr [0x10ab1e0c], 0 */
  w32((uint32_t)(0x10ab1e0c), (0x0u));
  /* 10a8a8cf mov dword ptr [0x10ab2024], 0 */
  w32((uint32_t)(0x10ab2024), (0x0u));
  /* 10a8a8d9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a8a8e0 jmp 0x10a8a8eb */
  goto L_10a8a8eb;
L_10a8a8e2:;
  /* 10a8a8e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8a8e5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a8e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a8a8eb:;
  /* 10a8a8eb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a8ef jge 0x10a8a900 */
  if ((C.sf==C.of)) goto L_10a8a900;
  /* 10a8a8f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8a8f4 mov word ptr [eax*2 + 0x10ab1e00], 0 */
  w16((uint32_t)(EAX*2 + 0x10ab1e00), (0x0u));
  /* 10a8a8fe jmp 0x10a8a8e2 */
  goto L_10a8a8e2;
L_10a8a900:;
  /* 10a8a900 mov esp, ebp */
  ESP = (EBP);
  /* 10a8a902 pop ebp */
  EBP = (pop32());
  /* 10a8a903 ret  */
  ESPCHK(0x10a8a890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a910 @ 0x10a8a910 (770 bytes, 175 insns) */
void f_10a8a910(void) {
  FTRACE(0x10a8a910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8a910 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8a911 mov ebp, esp */
  EBP = (ESP);
  /* 10a8a913 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8a919 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10a8a91f push eax */
  push32((uint32_t)(EAX));
  /* 10a8a920 mov ecx, dword ptr [0x10ab1d84] */
  ECX = (r32((uint32_t)(0x10ab1d84)));
  /* 10a8a926 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8a927 call dword ptr [0x10ab32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32f8))), 0x10a8a92du);
  /* 10a8a92d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a930 jne 0x10a8ab49 */
  if (!C.zf) goto L_10a8ab49;
  /* 10a8a936 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10a8a940 jmp 0x10a8a951 */
  goto L_10a8a951;
L_10a8a942:;
  /* 10a8a942 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8a948 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a94b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10a8a951:;
  /* 10a8a951 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a95b jae 0x10a8a972 */
  if (!C.cf) goto L_10a8a972;
  /* 10a8a95d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8a963 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10a8a969 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10a8a970 jmp 0x10a8a942 */
  goto L_10a8a942;
L_10a8a972:;
  /* 10a8a972 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10a8a979 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10a8a97f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a8a982 jmp 0x10a8a98d */
  goto L_10a8a98d;
L_10a8a984:;
  /* 10a8a984 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8a987 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a98a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a8a98d:;
  /* 10a8a98d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8a990 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8a992 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a8a994 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8a996 je 0x10a8a9d8 */
  if (C.zf) goto L_10a8a9d8;
  /* 10a8a998 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8a99b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8a99d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a8a99f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10a8a9a5 jmp 0x10a8a9b6 */
  goto L_10a8a9b6;
L_10a8a9a7:;
  /* 10a8a9a7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8a9ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8a9b0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10a8a9b6:;
  /* 10a8a9b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8a9b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8a9bb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10a8a9be cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8a9c4 ja 0x10a8a9d6 */
  if ((!C.cf&&!C.zf)) goto L_10a8a9d6;
  /* 10a8a9c6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8a9cc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10a8a9d4 jmp 0x10a8a9a7 */
  goto L_10a8a9a7;
L_10a8a9d6:;
  /* 10a8a9d6 jmp 0x10a8a984 */
  goto L_10a8a984;
L_10a8a9d8:;
  /* 10a8a9d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8a9da mov eax, dword ptr [0x10ab2024] */
  EAX = (r32((uint32_t)(0x10ab2024)));
  /* 10a8a9df push eax */
  push32((uint32_t)(EAX));
  /* 10a8a9e0 mov ecx, dword ptr [0x10ab1d84] */
  ECX = (r32((uint32_t)(0x10ab1d84)));
  /* 10a8a9e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8a9e7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10a8a9ed push edx */
  push32((uint32_t)(EDX));
  /* 10a8a9ee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a8a9f3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10a8a9f9 push eax */
  push32((uint32_t)(EAX));
  /* 10a8a9fa push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8a9fc call 0x10a8c5c0 */
  push32(0x10a8aa01u); f_10a8c5c0();
  /* 10a8aa01 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8aa04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8aa06 mov ecx, dword ptr [0x10ab1d84] */
  ECX = (r32((uint32_t)(0x10ab1d84)));
  /* 10a8aa0c push ecx */
  push32((uint32_t)(ECX));
  /* 10a8aa0d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a8aa12 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10a8aa18 push edx */
  push32((uint32_t)(EDX));
  /* 10a8aa19 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a8aa1e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10a8aa24 push eax */
  push32((uint32_t)(EAX));
  /* 10a8aa25 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a8aa2a mov ecx, dword ptr [0x10ab2024] */
  ECX = (r32((uint32_t)(0x10ab2024)));
  /* 10a8aa30 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8aa31 call 0x10a8c780 */
  push32(0x10a8aa36u); f_10a8c780();
  /* 10a8aa36 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8aa39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8aa3b mov edx, dword ptr [0x10ab1d84] */
  EDX = (r32((uint32_t)(0x10ab1d84)));
  /* 10a8aa41 push edx */
  push32((uint32_t)(EDX));
  /* 10a8aa42 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a8aa47 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10a8aa4d push eax */
  push32((uint32_t)(EAX));
  /* 10a8aa4e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a8aa53 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10a8aa59 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8aa5a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10a8aa5f mov edx, dword ptr [0x10ab2024] */
  EDX = (r32((uint32_t)(0x10ab2024)));
  /* 10a8aa65 push edx */
  push32((uint32_t)(EDX));
  /* 10a8aa66 call 0x10a8c780 */
  push32(0x10a8aa6bu); f_10a8c780();
  /* 10a8aa6b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8aa6e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10a8aa78 jmp 0x10a8aa89 */
  goto L_10a8aa89;
L_10a8aa7a:;
  /* 10a8aa7a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8aa80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8aa83 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10a8aa89:;
  /* 10a8aa89 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8aa93 jae 0x10a8ab44 */
  if (!C.cf) goto L_10a8ab44;
  /* 10a8aa99 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8aa9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8aaa1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10a8aaa9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8aaac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8aaae je 0x10a8aae6 */
  if (C.zf) goto L_10a8aae6;
  /* 10a8aab0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8aab6 mov cl, byte ptr [eax + 0x10ab1f21] */
  CL = (r8((uint32_t)(EAX + 0x10ab1f21)));
  /* 10a8aabc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10a8aabf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8aac5 mov byte ptr [edx + 0x10ab1f21], cl */
  w8((uint32_t)(EDX + 0x10ab1f21), (CL));
  /* 10a8aacb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8aad1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8aad7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10a8aade mov byte ptr [eax + 0x10ab1e20], dl */
  w8((uint32_t)(EAX + 0x10ab1e20), (DL));
  /* 10a8aae4 jmp 0x10a8ab3f */
  goto L_10a8ab3f;
L_10a8aae6:;
  /* 10a8aae6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8aaec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8aaee mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10a8aaf6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8aaf9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8aafb je 0x10a8ab32 */
  if (C.zf) goto L_10a8ab32;
  /* 10a8aafd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8ab03 mov al, byte ptr [edx + 0x10ab1f21] */
  AL = (r8((uint32_t)(EDX + 0x10ab1f21)));
  /* 10a8ab09 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10a8ab0b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8ab11 mov byte ptr [ecx + 0x10ab1f21], al */
  w8((uint32_t)(ECX + 0x10ab1f21), (AL));
  /* 10a8ab17 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8ab1d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8ab23 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10a8ab2a mov byte ptr [edx + 0x10ab1e20], cl */
  w8((uint32_t)(EDX + 0x10ab1e20), (CL));
  /* 10a8ab30 jmp 0x10a8ab3f */
  goto L_10a8ab3f;
L_10a8ab32:;
  /* 10a8ab32 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8ab38 mov byte ptr [edx + 0x10ab1e20], 0 */
  w8((uint32_t)(EDX + 0x10ab1e20), (0x0u));
L_10a8ab3f:;
  /* 10a8ab3f jmp 0x10a8aa7a */
  goto L_10a8aa7a;
L_10a8ab44:;
  /* 10a8ab44 jmp 0x10a8ac0e */
  goto L_10a8ac0e;
L_10a8ab49:;
  /* 10a8ab49 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10a8ab53 jmp 0x10a8ab64 */
  goto L_10a8ab64;
L_10a8ab55:;
  /* 10a8ab55 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8ab5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ab5e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10a8ab64:;
  /* 10a8ab64 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ab6e jae 0x10a8ac0e */
  if (!C.cf) goto L_10a8ac0e;
  /* 10a8ab74 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ab7b jb 0x10a8abb8 */
  if (C.cf) goto L_10a8abb8;
  /* 10a8ab7d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ab84 ja 0x10a8abb8 */
  if ((!C.cf&&!C.zf)) goto L_10a8abb8;
  /* 10a8ab86 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8ab8c mov dl, byte ptr [ecx + 0x10ab1f21] */
  DL = (r8((uint32_t)(ECX + 0x10ab1f21)));
  /* 10a8ab92 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10a8ab95 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8ab9b mov byte ptr [eax + 0x10ab1f21], dl */
  w8((uint32_t)(EAX + 0x10ab1f21), (DL));
  /* 10a8aba1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8aba7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8abaa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8abb0 mov byte ptr [edx + 0x10ab1e20], cl */
  w8((uint32_t)(EDX + 0x10ab1e20), (CL));
  /* 10a8abb6 jmp 0x10a8ac09 */
  goto L_10a8ac09;
L_10a8abb8:;
  /* 10a8abb8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8abbf jb 0x10a8abfc */
  if (C.cf) goto L_10a8abfc;
  /* 10a8abc1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8abc8 ja 0x10a8abfc */
  if ((!C.cf&&!C.zf)) goto L_10a8abfc;
  /* 10a8abca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8abd0 mov cl, byte ptr [eax + 0x10ab1f21] */
  CL = (r8((uint32_t)(EAX + 0x10ab1f21)));
  /* 10a8abd6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10a8abd9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8abdf mov byte ptr [edx + 0x10ab1f21], cl */
  w8((uint32_t)(EDX + 0x10ab1f21), (CL));
  /* 10a8abe5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8abeb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8abee mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8abf4 mov byte ptr [ecx + 0x10ab1e20], al */
  w8((uint32_t)(ECX + 0x10ab1e20), (AL));
  /* 10a8abfa jmp 0x10a8ac09 */
  goto L_10a8ac09;
L_10a8abfc:;
  /* 10a8abfc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10a8ac02 mov byte ptr [edx + 0x10ab1e20], 0 */
  w8((uint32_t)(EDX + 0x10ab1e20), (0x0u));
L_10a8ac09:;
  /* 10a8ac09 jmp 0x10a8ab55 */
  goto L_10a8ab55;
L_10a8ac0e:;
  /* 10a8ac0e mov esp, ebp */
  ESP = (EBP);
  /* 10a8ac10 pop ebp */
  EBP = (pop32());
  /* 10a8ac11 ret  */
  ESPCHK(0x10a8a910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac20 @ 0x10a8ac20 (23 bytes, 9 insns) */
void f_10a8ac20(void) {
  FTRACE(0x10a8ac20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8ac20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8ac21 mov ebp, esp */
  EBP = (ESP);
  /* 10a8ac23 cmp dword ptr [0x10ab1e0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab1e0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ac2a je 0x10a8ac33 */
  if (C.zf) goto L_10a8ac33;
  /* 10a8ac2c mov eax, dword ptr [0x10ab1d84] */
  EAX = (r32((uint32_t)(0x10ab1d84)));
  /* 10a8ac31 jmp 0x10a8ac35 */
  goto L_10a8ac35;
L_10a8ac33:;
  /* 10a8ac33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a8ac35:;
  /* 10a8ac35 pop ebp */
  EBP = (pop32());
  /* 10a8ac36 ret  */
  ESPCHK(0x10a8ac20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac40 @ 0x10a8ac40 (34 bytes, 10 insns) */
void f_10a8ac40(void) {
  FTRACE(0x10a8ac40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8ac40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8ac41 mov ebp, esp */
  EBP = (ESP);
  /* 10a8ac43 cmp dword ptr [0x10ab21d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab21d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ac4a jne 0x10a8ac60 */
  if (!C.zf) goto L_10a8ac60;
  /* 10a8ac4c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10a8ac4e call 0x10a8a460 */
  push32(0x10a8ac53u); f_10a8a460();
  /* 10a8ac53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ac56 mov dword ptr [0x10ab21d0], 1 */
  w32((uint32_t)(0x10ab21d0), (0x1u));
L_10a8ac60:;
  /* 10a8ac60 pop ebp */
  EBP = (pop32());
  /* 10a8ac61 ret  */
  ESPCHK(0x10a8ac40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac70 @ 0x10a8ac70 (664 bytes, 265 insns) [15 switch table(s)] */
void f_10a8ac70(void) {
  FTRACE(0x10a8ac70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8ac70 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8ac71 mov ebp, esp */
  EBP = (ESP);
  /* 10a8ac73 push edi */
  push32((uint32_t)(EDI));
  /* 10a8ac74 push esi */
  push32((uint32_t)(ESI));
  /* 10a8ac75 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8ac78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8ac7b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ac7e mov eax, ecx */
  EAX = (ECX);
  /* 10a8ac80 mov edx, ecx */
  EDX = (ECX);
  /* 10a8ac82 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ac84 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ac86 jbe 0x10a8ac90 */
  if ((C.cf||C.zf)) goto L_10a8ac90;
  /* 10a8ac88 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ac8a jb 0x10a8ae08 */
  if (C.cf) goto L_10a8ae08;
L_10a8ac90:;
  /* 10a8ac90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10a8ac96 jne 0x10a8acac */
  if (!C.zf) goto L_10a8acac;
  /* 10a8ac98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a8ac9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8ac9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8aca1 jb 0x10a8accc */
  if (C.cf) goto L_10a8accc;
  /* 10a8aca3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a8aca5 jmp dword ptr [edx*4 + 0x10a8adb8] */
  switch (EDX) {
    case 0: goto L_10a8adc8;
    case 1: goto L_10a8add0;
    case 2: goto L_10a8addc;
    case 3: goto L_10a8adf0;
    default: x86_unimpl("switch@0x10a8aca5 out of table"); return;
  }
L_10a8acac:;
  /* 10a8acac mov eax, edi */
  EAX = (EDI);
  /* 10a8acae mov edx, 3 */
  EDX = (0x3u);
  /* 10a8acb3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8acb6 jb 0x10a8acc4 */
  if (C.cf) goto L_10a8acc4;
  /* 10a8acb8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8acbb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8acbd jmp dword ptr [eax*4 + 0x10a8acd0] */
  switch (EAX) {
    case 1: goto L_10a8ace0;
    case 2: goto L_10a8ad0c;
    case 3: goto L_10a8ad30;
    default: x86_unimpl("switch@0x10a8acbd out of table"); return;
  }
L_10a8acc4:;
  /* 10a8acc4 jmp dword ptr [ecx*4 + 0x10a8adc8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10a8adc8)))); return;
  /* 10a8accb nop  */
  /* nop */
L_10a8accc:;
  /* 10a8accc jmp dword ptr [ecx*4 + 0x10a8ad4c] */
  switch (ECX) {
    case 0: goto L_10a8adaf;
    case 1: goto L_10a8ad9c;
    case 2: goto L_10a8ad94;
    case 3: goto L_10a8ad8c;
    case 4: goto L_10a8ad84;
    case 5: goto L_10a8ad7c;
    case 6: goto L_10a8ad74;
    case 7: goto L_10a8ad6c;
    default: x86_unimpl("switch@0x10a8accc out of table"); return;
  }
  /* 10a8acd3 nop  */
  /* nop */
L_10a8ace0:;
  /* 10a8ace0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8ace2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a8ace4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a8ace6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a8ace9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a8acec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a8acef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a8acf2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a8acf5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8acf8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8acfb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8acfe jb 0x10a8accc */
  if (C.cf) goto L_10a8accc;
  /* 10a8ad00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a8ad02 jmp dword ptr [edx*4 + 0x10a8adb8] */
  switch (EDX) {
    case 0: goto L_10a8adc8;
    case 1: goto L_10a8add0;
    case 2: goto L_10a8addc;
    case 3: goto L_10a8adf0;
    default: x86_unimpl("switch@0x10a8ad02 out of table"); return;
  }
  /* 10a8ad09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a8ad0c:;
  /* 10a8ad0c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8ad0e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a8ad10 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a8ad12 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a8ad15 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a8ad18 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a8ad1b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ad1e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ad21 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ad24 jb 0x10a8accc */
  if (C.cf) goto L_10a8accc;
  /* 10a8ad26 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a8ad28 jmp dword ptr [edx*4 + 0x10a8adb8] */
  switch (EDX) {
    case 0: goto L_10a8adc8;
    case 1: goto L_10a8add0;
    case 2: goto L_10a8addc;
    case 3: goto L_10a8adf0;
    default: x86_unimpl("switch@0x10a8ad28 out of table"); return;
  }
  /* 10a8ad2f nop  */
  /* nop */
L_10a8ad30:;
  /* 10a8ad30 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8ad32 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a8ad34 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a8ad36 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a8ad37 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a8ad3a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a8ad3b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ad3e jb 0x10a8accc */
  if (C.cf) goto L_10a8accc;
  /* 10a8ad40 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a8ad42 jmp dword ptr [edx*4 + 0x10a8adb8] */
  switch (EDX) {
    case 0: goto L_10a8adc8;
    case 1: goto L_10a8add0;
    case 2: goto L_10a8addc;
    case 3: goto L_10a8adf0;
    default: x86_unimpl("switch@0x10a8ad42 out of table"); return;
  }
  /* 10a8ad49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a8ad6c:;
  /* 10a8ad6c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10a8ad70 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10a8ad74:;
  /* 10a8ad74 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10a8ad78 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10a8ad7c:;
  /* 10a8ad7c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10a8ad80 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10a8ad84:;
  /* 10a8ad84 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10a8ad88 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10a8ad8c:;
  /* 10a8ad8c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10a8ad90 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10a8ad94:;
  /* 10a8ad94 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10a8ad98 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10a8ad9c:;
  /* 10a8ad9c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10a8ada0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10a8ada4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10a8adab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8adad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10a8adaf:;
  /* 10a8adaf jmp dword ptr [edx*4 + 0x10a8adb8] */
  switch (EDX) {
    case 0: goto L_10a8adc8;
    case 1: goto L_10a8add0;
    case 2: goto L_10a8addc;
    case 3: goto L_10a8adf0;
    default: x86_unimpl("switch@0x10a8adaf out of table"); return;
  }
  /* 10a8adb6 mov edi, edi */
  EDI = (EDI);
L_10a8adc8:;
  /* 10a8adc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8adcb pop esi */
  ESI = (pop32());
  /* 10a8adcc pop edi */
  EDI = (pop32());
  /* 10a8adcd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a8adce ret  */
  ESPCHK(0x10a8ac70u, _esp0);
  ESP += 4; return;
  /* 10a8adcf nop  */
  /* nop */
L_10a8add0:;
  /* 10a8add0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a8add2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a8add4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8add7 pop esi */
  ESI = (pop32());
  /* 10a8add8 pop edi */
  EDI = (pop32());
  /* 10a8add9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a8adda ret  */
  ESPCHK(0x10a8ac70u, _esp0);
  ESP += 4; return;
  /* 10a8addb nop  */
  /* nop */
L_10a8addc:;
  /* 10a8addc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a8adde mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a8ade0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a8ade3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a8ade6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ade9 pop esi */
  ESI = (pop32());
  /* 10a8adea pop edi */
  EDI = (pop32());
  /* 10a8adeb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a8adec ret  */
  ESPCHK(0x10a8ac70u, _esp0);
  ESP += 4; return;
  /* 10a8aded lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a8adf0:;
  /* 10a8adf0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a8adf2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a8adf4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a8adf7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a8adfa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a8adfd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a8ae00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ae03 pop esi */
  ESI = (pop32());
  /* 10a8ae04 pop edi */
  EDI = (pop32());
  /* 10a8ae05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a8ae06 ret  */
  ESPCHK(0x10a8ac70u, _esp0);
  ESP += 4; return;
  /* 10a8ae07 nop  */
  /* nop */
L_10a8ae08:;
  /* 10a8ae08 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10a8ae0c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10a8ae10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10a8ae16 jne 0x10a8ae3c */
  if (!C.zf) goto L_10a8ae3c;
  /* 10a8ae18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a8ae1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8ae1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ae21 jb 0x10a8ae30 */
  if (C.cf) goto L_10a8ae30;
  /* 10a8ae23 std  */
  C.df=1;
  /* 10a8ae24 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a8ae26 cld  */
  C.df=0;
  /* 10a8ae27 jmp dword ptr [edx*4 + 0x10a8af50] */
  switch (EDX) {
    case 0: goto L_10a8af60;
    case 1: goto L_10a8af68;
    case 2: goto L_10a8af78;
    case 3: goto L_10a8af8c;
    default: x86_unimpl("switch@0x10a8ae27 out of table"); return;
  }
  /* 10a8ae2e mov edi, edi */
  EDI = (EDI);
L_10a8ae30:;
  /* 10a8ae30 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a8ae32 jmp dword ptr [ecx*4 + 0x10a8af00] */
  switch (ECX) {
    case 0: goto L_10a8af47;
    default: x86_unimpl("switch@0x10a8ae32 out of table"); return;
  }
  /* 10a8ae39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a8ae3c:;
  /* 10a8ae3c mov eax, edi */
  EAX = (EDI);
  /* 10a8ae3e mov edx, 3 */
  EDX = (0x3u);
  /* 10a8ae43 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ae46 jb 0x10a8ae54 */
  if (C.cf) goto L_10a8ae54;
  /* 10a8ae48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8ae4b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8ae4d jmp dword ptr [eax*4 + 0x10a8ae58] */
  switch (EAX) {
    case 1: goto L_10a8ae68;
    case 2: goto L_10a8ae88;
    case 3: goto L_10a8aeb0;
    default: x86_unimpl("switch@0x10a8ae4d out of table"); return;
  }
L_10a8ae54:;
  /* 10a8ae54 jmp dword ptr [ecx*4 + 0x10a8af50] */
  switch (ECX) {
    case 0: goto L_10a8af60;
    case 1: goto L_10a8af68;
    case 2: goto L_10a8af78;
    case 3: goto L_10a8af8c;
    default: x86_unimpl("switch@0x10a8ae54 out of table"); return;
  }
  /* 10a8ae5b nop  */
  /* nop */
L_10a8ae68:;
  /* 10a8ae68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a8ae6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8ae6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a8ae70 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10a8ae71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a8ae74 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10a8ae75 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ae78 jb 0x10a8ae30 */
  if (C.cf) goto L_10a8ae30;
  /* 10a8ae7a std  */
  C.df=1;
  /* 10a8ae7b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a8ae7d cld  */
  C.df=0;
  /* 10a8ae7e jmp dword ptr [edx*4 + 0x10a8af50] */
  switch (EDX) {
    case 0: goto L_10a8af60;
    case 1: goto L_10a8af68;
    case 2: goto L_10a8af78;
    case 3: goto L_10a8af8c;
    default: x86_unimpl("switch@0x10a8ae7e out of table"); return;
  }
  /* 10a8ae85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a8ae88:;
  /* 10a8ae88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a8ae8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8ae8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a8ae90 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a8ae93 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a8ae96 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a8ae99 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8ae9c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8ae9f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8aea2 jb 0x10a8ae30 */
  if (C.cf) goto L_10a8ae30;
  /* 10a8aea4 std  */
  C.df=1;
  /* 10a8aea5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a8aea7 cld  */
  C.df=0;
  /* 10a8aea8 jmp dword ptr [edx*4 + 0x10a8af50] */
  switch (EDX) {
    case 0: goto L_10a8af60;
    case 1: goto L_10a8af68;
    case 2: goto L_10a8af78;
    case 3: goto L_10a8af8c;
    default: x86_unimpl("switch@0x10a8aea8 out of table"); return;
  }
  /* 10a8aeaf nop  */
  /* nop */
L_10a8aeb0:;
  /* 10a8aeb0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a8aeb3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8aeb5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a8aeb8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a8aebb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a8aebe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a8aec1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a8aec4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a8aec7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8aeca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8aecd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8aed0 jb 0x10a8ae30 */
  if (C.cf) goto L_10a8ae30;
  /* 10a8aed6 std  */
  C.df=1;
  /* 10a8aed7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a8aed9 cld  */
  C.df=0;
  /* 10a8aeda jmp dword ptr [edx*4 + 0x10a8af50] */
  switch (EDX) {
    case 0: goto L_10a8af60;
    case 1: goto L_10a8af68;
    case 2: goto L_10a8af78;
    case 3: goto L_10a8af8c;
    default: x86_unimpl("switch@0x10a8aeda out of table"); return;
  }
  /* 10a8aee1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10a8aee4 add al, 0xaf */
  { uint32_t _a=(AL),_b=(0xafu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a8aee6 test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 10a8aee8 or al, 0xaf */
  { uint32_t _r=(AL)|(0xafu); AL = (_r); fl_logic(_r,8); }
  /* 10a8aeea test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 10a8aeec adc al, 0xaf */
  { uint32_t _a=(AL),_b=(0xafu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a8aeee test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 10a8aef0 sbb al, 0xaf */
  { uint32_t _a=(AL),_b=(0xafu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a8aef2 test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 10a8aef4 and al, 0xaf */
  { uint32_t _r=(AL)&(0xafu); AL = (_r); fl_logic(_r,8); }
  /* 10a8aef6 test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 10a8aef8 sub al, 0xaf */
  { uint32_t _a=(AL),_b=(0xafu),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a8aefa test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 10a8aefc xor al, 0xaf */
  { uint32_t _r=(AL)^(0xafu); AL = (_r); fl_logic(_r,8); }
  /* 10a8aefe test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 10a8af04 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10a8af08 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10a8af0c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10a8af10 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10a8af14 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10a8af18 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10a8af1c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10a8af20 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10a8af24 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10a8af28 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10a8af2c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10a8af30 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10a8af34 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10a8af38 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10a8af3c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10a8af43 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8af45 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10a8af47:;
  /* 10a8af47 jmp dword ptr [edx*4 + 0x10a8af50] */
  switch (EDX) {
    case 0: goto L_10a8af60;
    case 1: goto L_10a8af68;
    case 2: goto L_10a8af78;
    case 3: goto L_10a8af8c;
    default: x86_unimpl("switch@0x10a8af47 out of table"); return;
  }
  /* 10a8af4e mov edi, edi */
  EDI = (EDI);
L_10a8af60:;
  /* 10a8af60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8af63 pop esi */
  ESI = (pop32());
  /* 10a8af64 pop edi */
  EDI = (pop32());
  /* 10a8af65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a8af66 ret  */
  ESPCHK(0x10a8ac70u, _esp0);
  ESP += 4; return;
  /* 10a8af67 nop  */
  /* nop */
L_10a8af68:;
  /* 10a8af68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a8af6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a8af6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8af71 pop esi */
  ESI = (pop32());
  /* 10a8af72 pop edi */
  EDI = (pop32());
  /* 10a8af73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a8af74 ret  */
  ESPCHK(0x10a8ac70u, _esp0);
  ESP += 4; return;
  /* 10a8af75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a8af78:;
  /* 10a8af78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a8af7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a8af7e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a8af81 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a8af84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8af87 pop esi */
  ESI = (pop32());
  /* 10a8af88 pop edi */
  EDI = (pop32());
  /* 10a8af89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a8af8a ret  */
  ESPCHK(0x10a8ac70u, _esp0);
  ESP += 4; return;
  /* 10a8af8b nop  */
  /* nop */
L_10a8af8c:;
  /* 10a8af8c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a8af8f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a8af92 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a8af95 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a8af98 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a8af9b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a8af9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8afa1 pop esi */
  ESI = (pop32());
  /* 10a8afa2 pop edi */
  EDI = (pop32());
  /* 10a8afa3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a8afa4 ret  */
  ESPCHK(0x10a8ac70u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10a8afb0 (104 bytes, 43 insns) */
void f_10a8afb0(void) {
  FTRACE(0x10a8afb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8afb0 push ebx */
  push32((uint32_t)(EBX));
  /* 10a8afb1 push esi */
  push32((uint32_t)(ESI));
  /* 10a8afb2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10a8afb6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8afb8 jne 0x10a8afd2 */
  if (!C.zf) goto L_10a8afd2;
  /* 10a8afba mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10a8afbe mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a8afc2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8afc4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a8afc6 mov ebx, eax */
  EBX = (EAX);
  /* 10a8afc8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a8afcc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a8afce mov edx, ebx */
  EDX = (EBX);
  /* 10a8afd0 jmp 0x10a8b013 */
  goto L_10a8b013;
L_10a8afd2:;
  /* 10a8afd2 mov ecx, eax */
  ECX = (EAX);
  /* 10a8afd4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10a8afd8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a8afdc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10a8afe0:;
  /* 10a8afe0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10a8afe2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10a8afe4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10a8afe6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10a8afe8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8afea jne 0x10a8afe0 */
  if (!C.zf) goto L_10a8afe0;
  /* 10a8afec div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a8afee mov esi, eax */
  ESI = (EAX);
  /* 10a8aff0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a8aff4 mov ecx, eax */
  ECX = (EAX);
  /* 10a8aff6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10a8affa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a8affc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8affe jb 0x10a8b00e */
  if (C.cf) goto L_10a8b00e;
  /* 10a8b000 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b004 ja 0x10a8b00e */
  if ((!C.cf&&!C.zf)) goto L_10a8b00e;
  /* 10a8b006 jb 0x10a8b00f */
  if (C.cf) goto L_10a8b00f;
  /* 10a8b008 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b00c jbe 0x10a8b00f */
  if ((C.cf||C.zf)) goto L_10a8b00f;
L_10a8b00e:;
  /* 10a8b00e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10a8b00f:;
  /* 10a8b00f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8b011 mov eax, esi */
  EAX = (ESI);
L_10a8b013:;
  /* 10a8b013 pop esi */
  ESI = (pop32());
  /* 10a8b014 pop ebx */
  EBX = (pop32());
  /* 10a8b015 ret 0x10 */
  ESPCHK(0x10a8afb0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10a8b020 (117 bytes, 44 insns) */
void f_10a8b020(void) {
  FTRACE(0x10a8b020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8b020 push ebx */
  push32((uint32_t)(EBX));
  /* 10a8b021 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10a8b025 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8b027 jne 0x10a8b041 */
  if (!C.zf) goto L_10a8b041;
  /* 10a8b029 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a8b02d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a8b031 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8b033 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a8b035 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a8b039 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a8b03b mov eax, edx */
  EAX = (EDX);
  /* 10a8b03d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8b03f jmp 0x10a8b091 */
  goto L_10a8b091;
L_10a8b041:;
  /* 10a8b041 mov ecx, eax */
  ECX = (EAX);
  /* 10a8b043 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a8b047 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a8b04b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10a8b04f:;
  /* 10a8b04f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10a8b051 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10a8b053 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10a8b055 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10a8b057 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8b059 jne 0x10a8b04f */
  if (!C.zf) goto L_10a8b04f;
  /* 10a8b05b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a8b05d mov ecx, eax */
  ECX = (EAX);
  /* 10a8b05f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a8b063 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10a8b064 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a8b068 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b06a jb 0x10a8b07a */
  if (C.cf) goto L_10a8b07a;
  /* 10a8b06c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b070 ja 0x10a8b07a */
  if ((!C.cf&&!C.zf)) goto L_10a8b07a;
  /* 10a8b072 jb 0x10a8b082 */
  if (C.cf) goto L_10a8b082;
  /* 10a8b074 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b078 jbe 0x10a8b082 */
  if ((C.cf||C.zf)) goto L_10a8b082;
L_10a8b07a:;
  /* 10a8b07a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8b07e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10a8b082:;
  /* 10a8b082 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8b086 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8b08a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a8b08c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a8b08e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10a8b091:;
  /* 10a8b091 pop ebx */
  EBX = (pop32());
  /* 10a8b092 ret 0x10 */
  ESPCHK(0x10a8b020u, _esp0);
  ESP += 20; return;
}

/* FUN_1000b0a0 @ 0x10a8b0a0 (628 bytes, 214 insns) */
void f_10a8b0a0(void) {
  FTRACE(0x10a8b0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8b0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8b0a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8b0a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8b0a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a8b0a7 push esi */
  push32((uint32_t)(ESI));
  /* 10a8b0a8 push edi */
  push32((uint32_t)(EDI));
L_10a8b0a9:;
  /* 10a8b0a9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b0ad jne 0x10a8b0cd */
  if (!C.zf) goto L_10a8b0cd;
  /* 10a8b0af push 0x10aac278 */
  push32((uint32_t)(0x10aac278u));
  /* 10a8b0b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8b0b6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10a8b0b8 push 0x10aac26c */
  push32((uint32_t)(0x10aac26cu));
  /* 10a8b0bd push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8b0bf call 0x10a83450 */
  push32(0x10a8b0c4u); f_10a83450();
  /* 10a8b0c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b0c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b0ca jne 0x10a8b0cd */
  if (!C.zf) goto L_10a8b0cd;
  /* 10a8b0cc int3  */
  x86_unimpl("int3 @ 0x10a8b0cc");
L_10a8b0cd:;
  /* 10a8b0cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8b0cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8b0d1 jne 0x10a8b0a9 */
  if (!C.zf) goto L_10a8b0a9;
  /* 10a8b0d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8b0d6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8b0d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b0dc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a8b0df mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a8b0e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b0e5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a8b0e8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8b0ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8b0f0 je 0x10a8b0ff */
  if (C.zf) goto L_10a8b0ff;
  /* 10a8b0f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b0f5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a8b0f8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8b0fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8b0fd je 0x10a8b115 */
  if (C.zf) goto L_10a8b115;
L_10a8b0ff:;
  /* 10a8b0ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b102 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a8b105 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10a8b107 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b10a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10a8b10d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8b110 jmp 0x10a8b30d */
  goto L_10a8b30d;
L_10a8b115:;
  /* 10a8b115 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b118 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a8b11b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8b11e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8b120 je 0x10a8b16c */
  if (C.zf) goto L_10a8b16c;
  /* 10a8b122 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b125 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10a8b12c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b12f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a8b132 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8b135 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8b137 je 0x10a8b155 */
  if (C.zf) goto L_10a8b155;
  /* 10a8b139 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b13c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b13f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a8b142 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a8b144 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b147 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a8b14a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8b14d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b150 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10a8b153 jmp 0x10a8b16c */
  goto L_10a8b16c;
L_10a8b155:;
  /* 10a8b155 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b158 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a8b15b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8b15e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b161 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10a8b164 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8b167 jmp 0x10a8b30d */
  goto L_10a8b30d;
L_10a8b16c:;
  /* 10a8b16c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b16f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a8b172 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8b175 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b178 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10a8b17b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b17e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a8b181 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8b184 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b187 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10a8b18a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b18d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10a8b194 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a8b19b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b19e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a8b1a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b1a4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a8b1a7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8b1ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8b1af jne 0x10a8b1df */
  if (!C.zf) goto L_10a8b1df;
  /* 10a8b1b1 cmp dword ptr [ebp - 8], 0x10aaf140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10aaf140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b1b8 je 0x10a8b1c3 */
  if (C.zf) goto L_10a8b1c3;
  /* 10a8b1ba cmp dword ptr [ebp - 8], 0x10aaf160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10aaf160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b1c1 jne 0x10a8b1d3 */
  if (!C.zf) goto L_10a8b1d3;
L_10a8b1c3:;
  /* 10a8b1c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8b1c6 push edx */
  push32((uint32_t)(EDX));
  /* 10a8b1c7 call 0x10a8d010 */
  push32(0x10a8b1ccu); f_10a8d010();
  /* 10a8b1cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b1cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8b1d1 jne 0x10a8b1df */
  if (!C.zf) goto L_10a8b1df;
L_10a8b1d3:;
  /* 10a8b1d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b1d6 push eax */
  push32((uint32_t)(EAX));
  /* 10a8b1d7 call 0x10a8cf40 */
  push32(0x10a8b1dcu); f_10a8cf40();
  /* 10a8b1dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8b1df:;
  /* 10a8b1df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b1e2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a8b1e5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8b1eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8b1ed je 0x10a8b2cb */
  if (C.zf) goto L_10a8b2cb;
L_10a8b1f3:;
  /* 10a8b1f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b1f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b1f9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10a8b1fb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8b1fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8b200 jge 0x10a8b223 */
  if ((C.sf==C.of)) goto L_10a8b223;
  /* 10a8b202 push 0x10aac22c */
  push32((uint32_t)(0x10aac22cu));
  /* 10a8b207 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8b209 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10a8b20e push 0x10aac26c */
  push32((uint32_t)(0x10aac26cu));
  /* 10a8b213 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8b215 call 0x10a83450 */
  push32(0x10a8b21au); f_10a83450();
  /* 10a8b21a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b21d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b220 jne 0x10a8b223 */
  if (!C.zf) goto L_10a8b223;
  /* 10a8b222 int3  */
  x86_unimpl("int3 @ 0x10a8b222");
L_10a8b223:;
  /* 10a8b223 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8b225 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8b227 jne 0x10a8b1f3 */
  if (!C.zf) goto L_10a8b1f3;
  /* 10a8b229 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b22c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b22f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10a8b231 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8b234 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8b237 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b23a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a8b23d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b240 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b243 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a8b245 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b248 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a8b24b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8b24e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b251 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a8b254 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b258 jle 0x10a8b276 */
  if ((C.zf||C.sf!=C.of)) goto L_10a8b276;
  /* 10a8b25a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b25d push ecx */
  push32((uint32_t)(ECX));
  /* 10a8b25e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b261 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a8b264 push eax */
  push32((uint32_t)(EAX));
  /* 10a8b265 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8b268 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8b269 call 0x10a8cc30 */
  push32(0x10a8b26eu); f_10a8cc30();
  /* 10a8b26e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b271 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a8b274 jmp 0x10a8b2be */
  goto L_10a8b2be;
L_10a8b276:;
  /* 10a8b276 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b27a je 0x10a8b299 */
  if (C.zf) goto L_10a8b299;
  /* 10a8b27c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8b27f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10a8b282 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8b285 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8b288 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8b28b mov ecx, dword ptr [edx*4 + 0x10ab2080] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10ab2080)));
  /* 10a8b292 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b294 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a8b297 jmp 0x10a8b2a0 */
  goto L_10a8b2a0;
L_10a8b299:;
  /* 10a8b299 mov dword ptr [ebp - 0x14], 0x10aaea60 */
  w32((uint32_t)(EBP + -0x14), (0x10aaea60u));
L_10a8b2a0:;
  /* 10a8b2a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a8b2a3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10a8b2a7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8b2aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8b2ac je 0x10a8b2be */
  if (C.zf) goto L_10a8b2be;
  /* 10a8b2ae push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8b2b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8b2b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8b2b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8b2b6 call 0x10a8cae0 */
  push32(0x10a8b2bbu); f_10a8cae0();
  /* 10a8b2bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8b2be:;
  /* 10a8b2be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b2c1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a8b2c4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10a8b2c7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10a8b2c9 jmp 0x10a8b2e9 */
  goto L_10a8b2e9;
L_10a8b2cb:;
  /* 10a8b2cb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a8b2d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b2d5 push edx */
  push32((uint32_t)(EDX));
  /* 10a8b2d6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10a8b2d9 push eax */
  push32((uint32_t)(EAX));
  /* 10a8b2da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8b2dd push ecx */
  push32((uint32_t)(ECX));
  /* 10a8b2de call 0x10a8cc30 */
  push32(0x10a8b2e3u); f_10a8cc30();
  /* 10a8b2e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b2e6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a8b2e9:;
  /* 10a8b2e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8b2ec cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b2ef je 0x10a8b305 */
  if (C.zf) goto L_10a8b305;
  /* 10a8b2f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b2f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a8b2f7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8b2fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b2fd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10a8b300 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8b303 jmp 0x10a8b30d */
  goto L_10a8b30d;
L_10a8b305:;
  /* 10a8b305 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8b308 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10a8b30d:;
  /* 10a8b30d pop edi */
  EDI = (pop32());
  /* 10a8b30e pop esi */
  ESI = (pop32());
  /* 10a8b30f pop ebx */
  EBX = (pop32());
  /* 10a8b310 mov esp, ebp */
  ESP = (EBP);
  /* 10a8b312 pop ebp */
  EBP = (pop32());
  /* 10a8b313 ret  */
  ESPCHK(0x10a8b0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b320 @ 0x10a8b320 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10a8b320(void) {
  FTRACE(0x10a8b320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8b320 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8b321 mov ebp, esp */
  EBP = (ESP);
  /* 10a8b323 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8b329 push ebx */
  push32((uint32_t)(EBX));
  /* 10a8b32a push esi */
  push32((uint32_t)(ESI));
  /* 10a8b32b push edi */
  push32((uint32_t)(EDI));
  /* 10a8b32c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a8b333 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10a8b33d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10a8b344:;
  /* 10a8b344 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8b347 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a8b349 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10a8b34c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a8b350 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8b353 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b356 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10a8b359 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8b35b je 0x10a8bf37 */
  if (C.zf) goto L_10a8bf37;
  /* 10a8b361 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b368 jl 0x10a8bf37 */
  if ((C.sf!=C.of)) goto L_10a8bf37;
  /* 10a8b36e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a8b372 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b375 jl 0x10a8b396 */
  if ((C.sf!=C.of)) goto L_10a8b396;
  /* 10a8b377 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a8b37b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b37e jg 0x10a8b396 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a8b396;
  /* 10a8b380 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a8b384 movsx ecx, byte ptr [eax + 0x10aac264] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10aac264))));
  /* 10a8b38b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8b38e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10a8b394 jmp 0x10a8b3a0 */
  goto L_10a8b3a0;
L_10a8b396:;
  /* 10a8b396 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10a8b3a0:;
  /* 10a8b3a0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10a8b3a6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a8b3a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8b3ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8b3af movsx edx, byte ptr [ecx + eax*8 + 0x10aac284] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10aac284))));
  /* 10a8b3b7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10a8b3ba mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a8b3bd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8b3c0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10a8b3c6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b3cd ja 0x10a8bf32 */
  if ((!C.cf&&!C.zf)) goto L_10a8bf32;
  /* 10a8b3d3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10a8b3d9 jmp dword ptr [ecx*4 + 0x10a8bf44] */
  switch (ECX) {
    case 0: goto L_10a8b3e0;
    case 1: goto L_10a8b47a;
    case 2: goto L_10a8b4bc;
    case 3: goto L_10a8b52b;
    case 4: goto L_10a8b583;
    case 5: goto L_10a8b592;
    case 6: goto L_10a8b5de;
    case 7: goto L_10a8b671;
    case 8: goto L_10a8b508;
    case 9: goto L_10a8b513;
    case 10: goto L_10a8b4fe;
    case 11: goto L_10a8b4f3;
    case 12: goto L_10a8b51e;
    case 13: goto L_10a8b526;
    default: x86_unimpl("switch@0x10a8b3d9 out of table"); return;
  }
L_10a8b3e0:;
  /* 10a8b3e0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10a8b3e7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a8b3ea and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8b3f0 mov eax, dword ptr [0x10aaec98] */
  EAX = (r32((uint32_t)(0x10aaec98)));
  /* 10a8b3f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8b3f7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10a8b3fb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8b401 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8b403 je 0x10a8b45d */
  if (C.zf) goto L_10a8b45d;
  /* 10a8b405 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10a8b40b push edx */
  push32((uint32_t)(EDX));
  /* 10a8b40c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8b40f push eax */
  push32((uint32_t)(EAX));
  /* 10a8b410 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a8b414 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8b415 call 0x10a8c050 */
  push32(0x10a8b41au); f_10a8c050();
  /* 10a8b41a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b41d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8b420 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a8b422 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10a8b425 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8b428 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b42b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10a8b42e:;
  /* 10a8b42e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a8b432 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8b434 jne 0x10a8b457 */
  if (!C.zf) goto L_10a8b457;
  /* 10a8b436 push 0x10aac304 */
  push32((uint32_t)(0x10aac304u));
  /* 10a8b43b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8b43d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10a8b442 push 0x10aac2f8 */
  push32((uint32_t)(0x10aac2f8u));
  /* 10a8b447 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8b449 call 0x10a83450 */
  push32(0x10a8b44eu); f_10a83450();
  /* 10a8b44e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b451 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b454 jne 0x10a8b457 */
  if (!C.zf) goto L_10a8b457;
  /* 10a8b456 int3  */
  x86_unimpl("int3 @ 0x10a8b456");
L_10a8b457:;
  /* 10a8b457 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8b459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8b45b jne 0x10a8b42e */
  if (!C.zf) goto L_10a8b42e;
L_10a8b45d:;
  /* 10a8b45d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10a8b463 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8b464 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8b467 push edx */
  push32((uint32_t)(EDX));
  /* 10a8b468 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a8b46c push eax */
  push32((uint32_t)(EAX));
  /* 10a8b46d call 0x10a8c050 */
  push32(0x10a8b472u); f_10a8c050();
  /* 10a8b472 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b475 jmp 0x10a8bf32 */
  goto L_10a8bf32;
L_10a8b47a:;
  /* 10a8b47a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a8b481 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b484 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10a8b48a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10a8b490 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10a8b496 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10a8b49c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a8b49f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a8b4a6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10a8b4b0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10a8b4b7 jmp 0x10a8bf32 */
  goto L_10a8bf32;
L_10a8b4bc:;
  /* 10a8b4bc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a8b4c0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10a8b4c6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10a8b4cc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8b4cf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10a8b4d5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b4dc ja 0x10a8b526 */
  if ((!C.cf&&!C.zf)) goto L_10a8b526;
  /* 10a8b4de mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10a8b4e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8b4e6 mov al, byte ptr [ecx + 0x10a8bf7c] */
  AL = (r8((uint32_t)(ECX + 0x10a8bf7c)));
  /* 10a8b4ec jmp dword ptr [eax*4 + 0x10a8bf64] */
  switch (EAX) {
    case 0: goto L_10a8b508;
    case 1: goto L_10a8b513;
    case 2: goto L_10a8b4fe;
    case 3: goto L_10a8b4f3;
    case 4: goto L_10a8b51e;
    case 5: goto L_10a8b526;
    default: x86_unimpl("switch@0x10a8b4ec out of table"); return;
  }
L_10a8b4f3:;
  /* 10a8b4f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b4f6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8b4f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a8b4fc jmp 0x10a8b526 */
  goto L_10a8b526;
L_10a8b4fe:;
  /* 10a8b4fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b501 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10a8b503 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8b506 jmp 0x10a8b526 */
  goto L_10a8b526;
L_10a8b508:;
  /* 10a8b508 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b50b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8b50e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a8b511 jmp 0x10a8b526 */
  goto L_10a8b526;
L_10a8b513:;
  /* 10a8b513 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b516 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10a8b519 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a8b51c jmp 0x10a8b526 */
  goto L_10a8b526;
L_10a8b51e:;
  /* 10a8b51e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b521 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10a8b523 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a8b526:;
  /* 10a8b526 jmp 0x10a8bf32 */
  goto L_10a8bf32;
L_10a8b52b:;
  /* 10a8b52b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a8b52f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b532 jne 0x10a8b567 */
  if (!C.zf) goto L_10a8b567;
  /* 10a8b534 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10a8b537 push edx */
  push32((uint32_t)(EDX));
  /* 10a8b538 call 0x10a8c160 */
  push32(0x10a8b53du); f_10a8c160();
  /* 10a8b53d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b540 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10a8b546 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b54d jge 0x10a8b565 */
  if ((C.sf==C.of)) goto L_10a8b565;
  /* 10a8b54f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b552 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10a8b554 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8b557 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10a8b55d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a8b55f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10a8b565:;
  /* 10a8b565 jmp 0x10a8b57e */
  goto L_10a8b57e;
L_10a8b567:;
  /* 10a8b567 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10a8b56d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8b570 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a8b574 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10a8b578 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10a8b57e:;
  /* 10a8b57e jmp 0x10a8bf32 */
  goto L_10a8bf32;
L_10a8b583:;
  /* 10a8b583 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10a8b58d jmp 0x10a8bf32 */
  goto L_10a8bf32;
L_10a8b592:;
  /* 10a8b592 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a8b596 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b599 jne 0x10a8b5c2 */
  if (!C.zf) goto L_10a8b5c2;
  /* 10a8b59b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10a8b59e push eax */
  push32((uint32_t)(EAX));
  /* 10a8b59f call 0x10a8c160 */
  push32(0x10a8b5a4u); f_10a8c160();
  /* 10a8b5a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b5a7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10a8b5ad cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b5b4 jge 0x10a8b5c0 */
  if ((C.sf==C.of)) goto L_10a8b5c0;
  /* 10a8b5b6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10a8b5c0:;
  /* 10a8b5c0 jmp 0x10a8b5d9 */
  goto L_10a8b5d9;
L_10a8b5c2:;
  /* 10a8b5c2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10a8b5c8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8b5cb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a8b5cf lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10a8b5d3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10a8b5d9:;
  /* 10a8b5d9 jmp 0x10a8bf32 */
  goto L_10a8bf32;
L_10a8b5de:;
  /* 10a8b5de movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a8b5e2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10a8b5e8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10a8b5ee sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8b5f1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10a8b5f7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b5fe ja 0x10a8b66c */
  if ((!C.cf&&!C.zf)) goto L_10a8b66c;
  /* 10a8b600 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10a8b606 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8b608 mov al, byte ptr [ecx + 0x10a8bfa1] */
  AL = (r8((uint32_t)(ECX + 0x10a8bfa1)));
  /* 10a8b60e jmp dword ptr [eax*4 + 0x10a8bf8d] */
  switch (EAX) {
    case 0: goto L_10a8b620;
    case 1: goto L_10a8b659;
    case 2: goto L_10a8b615;
    case 3: goto L_10a8b663;
    case 4: goto L_10a8b66c;
    default: x86_unimpl("switch@0x10a8b60e out of table"); return;
  }
L_10a8b615:;
  /* 10a8b615 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b618 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8b61b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a8b61e jmp 0x10a8b66c */
  goto L_10a8b66c;
L_10a8b620:;
  /* 10a8b620 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8b623 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a8b626 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b629 jne 0x10a8b64b */
  if (!C.zf) goto L_10a8b64b;
  /* 10a8b62b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8b62e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10a8b632 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b635 jne 0x10a8b64b */
  if (!C.zf) goto L_10a8b64b;
  /* 10a8b637 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8b63a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b63d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10a8b640 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b643 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10a8b646 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a8b649 jmp 0x10a8b657 */
  goto L_10a8b657;
L_10a8b64b:;
  /* 10a8b64b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10a8b652 jmp 0x10a8b3e0 */
  goto L_10a8b3e0;
L_10a8b657:;
  /* 10a8b657 jmp 0x10a8b66c */
  goto L_10a8b66c;
L_10a8b659:;
  /* 10a8b659 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b65c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10a8b65e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8b661 jmp 0x10a8b66c */
  goto L_10a8b66c;
L_10a8b663:;
  /* 10a8b663 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b666 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10a8b669 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a8b66c:;
  /* 10a8b66c jmp 0x10a8bf32 */
  goto L_10a8bf32;
L_10a8b671:;
  /* 10a8b671 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a8b675 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10a8b67b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10a8b681 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8b684 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10a8b68a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b691 ja 0x10a8bd57 */
  if ((!C.cf&&!C.zf)) goto L_10a8bd57;
  /* 10a8b697 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10a8b69d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8b69f mov cl, byte ptr [edx + 0x10a8c00c] */
  CL = (r8((uint32_t)(EDX + 0x10a8c00c)));
  /* 10a8b6a5 jmp dword ptr [ecx*4 + 0x10a8bfd0] */
  switch (ECX) {
    case 0: goto L_10a8b6ac;
    case 1: goto L_10a8b940;
    case 2: goto L_10a8b7d0;
    case 3: goto L_10a8ba79;
    case 4: goto L_10a8b73b;
    case 5: goto L_10a8b6c1;
    case 6: goto L_10a8ba4b;
    case 7: goto L_10a8b950;
    case 8: goto L_10a8b8f5;
    case 9: goto L_10a8bac5;
    case 10: goto L_10a8ba6f;
    case 11: goto L_10a8b7e6;
    case 12: goto L_10a8ba63;
    case 13: goto L_10a8ba85;
    case 14: goto L_10a8bd57;
    default: x86_unimpl("switch@0x10a8b6a5 out of table"); return;
  }
L_10a8b6ac:;
  /* 10a8b6ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b6af and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8b6b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8b6b6 jne 0x10a8b6c1 */
  if (!C.zf) goto L_10a8b6c1;
  /* 10a8b6b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b6bb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10a8b6be mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a8b6c1:;
  /* 10a8b6c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b6c4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8b6ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8b6cc je 0x10a8b707 */
  if (C.zf) goto L_10a8b707;
  /* 10a8b6ce lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10a8b6d1 push eax */
  push32((uint32_t)(EAX));
  /* 10a8b6d2 call 0x10a8c1a0 */
  push32(0x10a8b6d7u); f_10a8c1a0();
  /* 10a8b6d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b6da mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10a8b6de mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10a8b6e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8b6e3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10a8b6e9 push edx */
  push32((uint32_t)(EDX));
  /* 10a8b6ea call 0x10a8d280 */
  push32(0x10a8b6efu); f_10a8d280();
  /* 10a8b6ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b6f2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a8b6f5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b6f9 jge 0x10a8b705 */
  if ((C.sf==C.of)) goto L_10a8b705;
  /* 10a8b6fb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10a8b705:;
  /* 10a8b705 jmp 0x10a8b72d */
  goto L_10a8b72d;
L_10a8b707:;
  /* 10a8b707 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10a8b70a push eax */
  push32((uint32_t)(EAX));
  /* 10a8b70b call 0x10a8c160 */
  push32(0x10a8b710u); f_10a8c160();
  /* 10a8b710 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b713 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10a8b71a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10a8b720 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10a8b726 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10a8b72d:;
  /* 10a8b72d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10a8b733 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a8b736 jmp 0x10a8bd57 */
  goto L_10a8bd57;
L_10a8b73b:;
  /* 10a8b73b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10a8b73e push eax */
  push32((uint32_t)(EAX));
  /* 10a8b73f call 0x10a8c160 */
  push32(0x10a8b744u); f_10a8c160();
  /* 10a8b744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b747 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10a8b74d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b754 je 0x10a8b762 */
  if (C.zf) goto L_10a8b762;
  /* 10a8b756 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10a8b75c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b760 jne 0x10a8b77c */
  if (!C.zf) goto L_10a8b77c;
L_10a8b762:;
  /* 10a8b762 mov edx, dword ptr [0x10aaefb0] */
  EDX = (r32((uint32_t)(0x10aaefb0)));
  /* 10a8b768 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a8b76b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8b76e push eax */
  push32((uint32_t)(EAX));
  /* 10a8b76f call 0x10a871c0 */
  push32(0x10a8b774u); f_10a871c0();
  /* 10a8b774 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b777 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a8b77a jmp 0x10a8b7cb */
  goto L_10a8b7cb;
L_10a8b77c:;
  /* 10a8b77c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b77f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8b785 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8b787 je 0x10a8b7ac */
  if (C.zf) goto L_10a8b7ac;
  /* 10a8b789 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10a8b78f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10a8b792 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a8b795 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10a8b79b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10a8b79e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10a8b7a0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10a8b7a3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10a8b7aa jmp 0x10a8b7cb */
  goto L_10a8b7cb;
L_10a8b7ac:;
  /* 10a8b7ac mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10a8b7b3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10a8b7b9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a8b7bc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a8b7bf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10a8b7c5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10a8b7c8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a8b7cb:;
  /* 10a8b7cb jmp 0x10a8bd57 */
  goto L_10a8bd57;
L_10a8b7d0:;
  /* 10a8b7d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b7d3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8b7d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8b7db jne 0x10a8b7e6 */
  if (!C.zf) goto L_10a8b7e6;
  /* 10a8b7dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b7e0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10a8b7e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a8b7e6:;
  /* 10a8b7e6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b7ed jne 0x10a8b7fb */
  if (!C.zf) goto L_10a8b7fb;
  /* 10a8b7ef mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10a8b7f9 jmp 0x10a8b807 */
  goto L_10a8b807;
L_10a8b7fb:;
  /* 10a8b7fb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10a8b801 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10a8b807:;
  /* 10a8b807 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10a8b80d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10a8b813 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10a8b816 push edx */
  push32((uint32_t)(EDX));
  /* 10a8b817 call 0x10a8c160 */
  push32(0x10a8b81cu); f_10a8c160();
  /* 10a8b81c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b81f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a8b822 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b825 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8b82a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8b82c je 0x10a8b896 */
  if (C.zf) goto L_10a8b896;
  /* 10a8b82e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b832 jne 0x10a8b83d */
  if (!C.zf) goto L_10a8b83d;
  /* 10a8b834 mov ecx, dword ptr [0x10aaefb4] */
  ECX = (r32((uint32_t)(0x10aaefb4)));
  /* 10a8b83a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10a8b83d:;
  /* 10a8b83d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10a8b844 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8b847 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10a8b84d:;
  /* 10a8b84d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10a8b853 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10a8b859 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8b85c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10a8b862 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8b864 je 0x10a8b886 */
  if (C.zf) goto L_10a8b886;
  /* 10a8b866 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10a8b86c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8b86e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10a8b871 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8b873 je 0x10a8b886 */
  if (C.zf) goto L_10a8b886;
  /* 10a8b875 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10a8b87b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b87e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10a8b884 jmp 0x10a8b84d */
  goto L_10a8b84d;
L_10a8b886:;
  /* 10a8b886 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10a8b88c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8b88f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10a8b891 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10a8b894 jmp 0x10a8b8f0 */
  goto L_10a8b8f0;
L_10a8b896:;
  /* 10a8b896 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b89a jne 0x10a8b8a4 */
  if (!C.zf) goto L_10a8b8a4;
  /* 10a8b89c mov eax, dword ptr [0x10aaefb0] */
  EAX = (r32((uint32_t)(0x10aaefb0)));
  /* 10a8b8a1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10a8b8a4:;
  /* 10a8b8a4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8b8a7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10a8b8ad:;
  /* 10a8b8ad mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10a8b8b3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10a8b8b9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8b8bc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10a8b8c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8b8c4 je 0x10a8b8e4 */
  if (C.zf) goto L_10a8b8e4;
  /* 10a8b8c6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10a8b8cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a8b8cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8b8d1 je 0x10a8b8e4 */
  if (C.zf) goto L_10a8b8e4;
  /* 10a8b8d3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10a8b8d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b8dc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10a8b8e2 jmp 0x10a8b8ad */
  goto L_10a8b8ad;
L_10a8b8e4:;
  /* 10a8b8e4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10a8b8ea sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8b8ed mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10a8b8f0:;
  /* 10a8b8f0 jmp 0x10a8bd57 */
  goto L_10a8bd57;
L_10a8b8f5:;
  /* 10a8b8f5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10a8b8f8 push edx */
  push32((uint32_t)(EDX));
  /* 10a8b8f9 call 0x10a8c160 */
  push32(0x10a8b8feu); f_10a8c160();
  /* 10a8b8fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b901 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10a8b907 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b90a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8b90d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8b90f je 0x10a8b923 */
  if (C.zf) goto L_10a8b923;
  /* 10a8b911 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10a8b917 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10a8b91e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10a8b921 jmp 0x10a8b931 */
  goto L_10a8b931;
L_10a8b923:;
  /* 10a8b923 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10a8b929 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10a8b92f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10a8b931:;
  /* 10a8b931 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10a8b93b jmp 0x10a8bd57 */
  goto L_10a8bd57;
L_10a8b940:;
  /* 10a8b940 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10a8b947 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10a8b94a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a8b94d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10a8b950:;
  /* 10a8b950 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b953 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10a8b955 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8b958 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10a8b95e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a8b961 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b968 jge 0x10a8b976 */
  if ((C.sf==C.of)) goto L_10a8b976;
  /* 10a8b96a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10a8b974 jmp 0x10a8b992 */
  goto L_10a8b992;
L_10a8b976:;
  /* 10a8b976 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b97d jne 0x10a8b992 */
  if (!C.zf) goto L_10a8b992;
  /* 10a8b97f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a8b983 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b986 jne 0x10a8b992 */
  if (!C.zf) goto L_10a8b992;
  /* 10a8b988 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10a8b992:;
  /* 10a8b992 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8b995 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b998 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10a8b99b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8b99e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8b9a1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a8b9a3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a8b9a6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10a8b9ac mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10a8b9b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8b9b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8b9b6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10a8b9bc push edx */
  push32((uint32_t)(EDX));
  /* 10a8b9bd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a8b9c1 push eax */
  push32((uint32_t)(EAX));
  /* 10a8b9c2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8b9c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8b9c6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10a8b9cc push edx */
  push32((uint32_t)(EDX));
  /* 10a8b9cd call dword ptr [0x10aaf3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aaf3a0))), 0x10a8b9d3u);
  /* 10a8b9d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8b9d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8b9d9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8b9de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8b9e0 je 0x10a8b9f8 */
  if (C.zf) goto L_10a8b9f8;
  /* 10a8b9e2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b9e9 jne 0x10a8b9f8 */
  if (!C.zf) goto L_10a8b9f8;
  /* 10a8b9eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8b9ee push ecx */
  push32((uint32_t)(ECX));
  /* 10a8b9ef call dword ptr [0x10aaf3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aaf3ac))), 0x10a8b9f5u);
  /* 10a8b9f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8b9f8:;
  /* 10a8b9f8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10a8b9fc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8b9ff jne 0x10a8ba1a */
  if (!C.zf) goto L_10a8ba1a;
  /* 10a8ba01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ba04 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8ba09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8ba0b jne 0x10a8ba1a */
  if (!C.zf) goto L_10a8ba1a;
  /* 10a8ba0d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8ba10 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8ba11 call dword ptr [0x10aaf3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10aaf3a4))), 0x10a8ba17u);
  /* 10a8ba17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8ba1a:;
  /* 10a8ba1a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8ba1d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a8ba20 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ba23 jne 0x10a8ba37 */
  if (!C.zf) goto L_10a8ba37;
  /* 10a8ba25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ba28 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10a8ba2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a8ba2e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8ba31 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ba34 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10a8ba37:;
  /* 10a8ba37 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8ba3a push eax */
  push32((uint32_t)(EAX));
  /* 10a8ba3b call 0x10a871c0 */
  push32(0x10a8ba40u); f_10a871c0();
  /* 10a8ba40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ba43 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a8ba46 jmp 0x10a8bd57 */
  goto L_10a8bd57;
L_10a8ba4b:;
  /* 10a8ba4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ba4e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ba51 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a8ba54 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10a8ba5e jmp 0x10a8bae5 */
  goto L_10a8bae5;
L_10a8ba63:;
  /* 10a8ba63 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10a8ba6d jmp 0x10a8bae5 */
  goto L_10a8bae5;
L_10a8ba6f:;
  /* 10a8ba6f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10a8ba79:;
  /* 10a8ba79 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10a8ba83 jmp 0x10a8ba8f */
  goto L_10a8ba8f;
L_10a8ba85:;
  /* 10a8ba85 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10a8ba8f:;
  /* 10a8ba8f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10a8ba99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ba9c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8baa2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8baa4 je 0x10a8bac3 */
  if (C.zf) goto L_10a8bac3;
  /* 10a8baa6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10a8baad mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10a8bab3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8bab6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10a8babc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10a8bac3:;
  /* 10a8bac3 jmp 0x10a8bae5 */
  goto L_10a8bae5;
L_10a8bac5:;
  /* 10a8bac5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10a8bacf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8bad2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8bad8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8bada je 0x10a8bae5 */
  if (C.zf) goto L_10a8bae5;
  /* 10a8badc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8badf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10a8bae2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a8bae5:;
  /* 10a8bae5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8bae8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8baed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8baef je 0x10a8bb0e */
  if (C.zf) goto L_10a8bb0e;
  /* 10a8baf1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10a8baf4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8baf5 call 0x10a8c180 */
  push32(0x10a8bafau); f_10a8c180();
  /* 10a8bafa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8bafd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10a8bb03 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10a8bb09 jmp 0x10a8bb9f */
  goto L_10a8bb9f;
L_10a8bb0e:;
  /* 10a8bb0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8bb11 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8bb14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8bb16 je 0x10a8bb60 */
  if (C.zf) goto L_10a8bb60;
  /* 10a8bb18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8bb1b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8bb1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8bb20 je 0x10a8bb40 */
  if (C.zf) goto L_10a8bb40;
  /* 10a8bb22 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10a8bb25 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8bb26 call 0x10a8c160 */
  push32(0x10a8bb2bu); f_10a8c160();
  /* 10a8bb2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8bb2e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10a8bb31 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a8bb32 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10a8bb38 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10a8bb3e jmp 0x10a8bb5e */
  goto L_10a8bb5e;
L_10a8bb40:;
  /* 10a8bb40 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10a8bb43 push edx */
  push32((uint32_t)(EDX));
  /* 10a8bb44 call 0x10a8c160 */
  push32(0x10a8bb49u); f_10a8c160();
  /* 10a8bb49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8bb4c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8bb51 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a8bb52 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10a8bb58 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10a8bb5e:;
  /* 10a8bb5e jmp 0x10a8bb9f */
  goto L_10a8bb9f;
L_10a8bb60:;
  /* 10a8bb60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8bb63 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8bb66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8bb68 je 0x10a8bb85 */
  if (C.zf) goto L_10a8bb85;
  /* 10a8bb6a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10a8bb6d push ecx */
  push32((uint32_t)(ECX));
  /* 10a8bb6e call 0x10a8c160 */
  push32(0x10a8bb73u); f_10a8c160();
  /* 10a8bb73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8bb76 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a8bb77 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10a8bb7d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10a8bb83 jmp 0x10a8bb9f */
  goto L_10a8bb9f;
L_10a8bb85:;
  /* 10a8bb85 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10a8bb88 push edx */
  push32((uint32_t)(EDX));
  /* 10a8bb89 call 0x10a8c160 */
  push32(0x10a8bb8eu); f_10a8c160();
  /* 10a8bb8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8bb91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8bb93 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10a8bb99 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10a8bb9f:;
  /* 10a8bb9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8bba2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8bba5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8bba7 je 0x10a8bbe7 */
  if (C.zf) goto L_10a8bbe7;
  /* 10a8bba9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8bbb0 jg 0x10a8bbe7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a8bbe7;
  /* 10a8bbb2 jl 0x10a8bbbd */
  if ((C.sf!=C.of)) goto L_10a8bbbd;
  /* 10a8bbb4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8bbbb jae 0x10a8bbe7 */
  if (!C.cf) goto L_10a8bbe7;
L_10a8bbbd:;
  /* 10a8bbbd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10a8bbc3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a8bbc5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10a8bbcb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8bbce neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a8bbd0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10a8bbd6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10a8bbdc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8bbdf or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10a8bbe2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a8bbe5 jmp 0x10a8bbff */
  goto L_10a8bbff;
L_10a8bbe7:;
  /* 10a8bbe7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10a8bbed mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10a8bbf3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10a8bbf9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10a8bbff:;
  /* 10a8bbff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8bc02 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8bc08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8bc0a jne 0x10a8bc27 */
  if (!C.zf) goto L_10a8bc27;
  /* 10a8bc0c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10a8bc12 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10a8bc18 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8bc1b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10a8bc21 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10a8bc27:;
  /* 10a8bc27 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8bc2e jge 0x10a8bc3c */
  if ((C.sf==C.of)) goto L_10a8bc3c;
  /* 10a8bc30 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10a8bc3a jmp 0x10a8bc45 */
  goto L_10a8bc45;
L_10a8bc3c:;
  /* 10a8bc3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8bc3f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8bc42 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a8bc45:;
  /* 10a8bc45 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10a8bc4b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10a8bc51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8bc53 jne 0x10a8bc5c */
  if (!C.zf) goto L_10a8bc5c;
  /* 10a8bc55 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10a8bc5c:;
  /* 10a8bc5c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10a8bc5f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10a8bc62:;
  /* 10a8bc62 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10a8bc68 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10a8bc6e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8bc71 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10a8bc77 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8bc79 jg 0x10a8bc8f */
  if ((!C.zf&&C.sf==C.of)) goto L_10a8bc8f;
  /* 10a8bc7b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10a8bc81 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10a8bc87 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8bc89 je 0x10a8bd10 */
  if (C.zf) goto L_10a8bd10;
L_10a8bc8f:;
  /* 10a8bc8f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10a8bc95 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a8bc96 push edx */
  push32((uint32_t)(EDX));
  /* 10a8bc97 push eax */
  push32((uint32_t)(EAX));
  /* 10a8bc98 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10a8bc9e push edx */
  push32((uint32_t)(EDX));
  /* 10a8bc9f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10a8bca5 push eax */
  push32((uint32_t)(EAX));
  /* 10a8bca6 call 0x10a8b020 */
  push32(0x10a8bcabu); f_10a8b020();
  /* 10a8bcab add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8bcae mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10a8bcb4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10a8bcba cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a8bcbb push edx */
  push32((uint32_t)(EDX));
  /* 10a8bcbc push eax */
  push32((uint32_t)(EAX));
  /* 10a8bcbd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10a8bcc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8bcc4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10a8bcca push edx */
  push32((uint32_t)(EDX));
  /* 10a8bccb call 0x10a8afb0 */
  push32(0x10a8bcd0u); f_10a8afb0();
  /* 10a8bcd0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10a8bcd6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10a8bcdc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8bce3 jle 0x10a8bcf7 */
  if ((C.zf||C.sf!=C.of)) goto L_10a8bcf7;
  /* 10a8bce5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10a8bceb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8bcf1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10a8bcf7:;
  /* 10a8bcf7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8bcfa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10a8bd00 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10a8bd02 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8bd05 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8bd08 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a8bd0b jmp 0x10a8bc62 */
  goto L_10a8bc62;
L_10a8bd10:;
  /* 10a8bd10 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10a8bd13 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8bd16 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a8bd19 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8bd1c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8bd1f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a8bd22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8bd25 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8bd2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8bd2c je 0x10a8bd57 */
  if (C.zf) goto L_10a8bd57;
  /* 10a8bd2e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8bd31 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a8bd34 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8bd37 jne 0x10a8bd3f */
  if (!C.zf) goto L_10a8bd3f;
  /* 10a8bd39 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8bd3d jne 0x10a8bd57 */
  if (!C.zf) goto L_10a8bd57;
L_10a8bd3f:;
  /* 10a8bd3f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8bd42 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8bd45 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a8bd48 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8bd4b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10a8bd4e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8bd51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8bd54 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10a8bd57:;
  /* 10a8bd57 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8bd5e jne 0x10a8bf32 */
  if (!C.zf) goto L_10a8bf32;
  /* 10a8bd64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8bd67 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8bd6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8bd6c je 0x10a8bdbd */
  if (C.zf) goto L_10a8bdbd;
  /* 10a8bd6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8bd71 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8bd77 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8bd79 je 0x10a8bd8b */
  if (C.zf) goto L_10a8bd8b;
  /* 10a8bd7b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10a8bd82 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10a8bd89 jmp 0x10a8bdbd */
  goto L_10a8bdbd;
L_10a8bd8b:;
  /* 10a8bd8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8bd8e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8bd91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8bd93 je 0x10a8bda5 */
  if (C.zf) goto L_10a8bda5;
  /* 10a8bd95 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10a8bd9c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10a8bda3 jmp 0x10a8bdbd */
  goto L_10a8bdbd;
L_10a8bda5:;
  /* 10a8bda5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8bda8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8bdab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8bdad je 0x10a8bdbd */
  if (C.zf) goto L_10a8bdbd;
  /* 10a8bdaf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10a8bdb6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10a8bdbd:;
  /* 10a8bdbd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10a8bdc3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8bdc6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8bdc9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10a8bdcf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8bdd2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8bdd5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8bdd7 jne 0x10a8bdf5 */
  if (!C.zf) goto L_10a8bdf5;
  /* 10a8bdd9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10a8bddf push eax */
  push32((uint32_t)(EAX));
  /* 10a8bde0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8bde3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8bde4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10a8bdea push edx */
  push32((uint32_t)(EDX));
  /* 10a8bdeb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10a8bded call 0x10a8c0d0 */
  push32(0x10a8bdf2u); f_10a8c0d0();
  /* 10a8bdf2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8bdf5:;
  /* 10a8bdf5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10a8bdfb push eax */
  push32((uint32_t)(EAX));
  /* 10a8bdfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8bdff push ecx */
  push32((uint32_t)(ECX));
  /* 10a8be00 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8be03 push edx */
  push32((uint32_t)(EDX));
  /* 10a8be04 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10a8be0a push eax */
  push32((uint32_t)(EAX));
  /* 10a8be0b call 0x10a8c110 */
  push32(0x10a8be10u); f_10a8c110();
  /* 10a8be10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8be13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8be16 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8be19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8be1b je 0x10a8be43 */
  if (C.zf) goto L_10a8be43;
  /* 10a8be1d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8be20 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8be23 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8be25 jne 0x10a8be43 */
  if (!C.zf) goto L_10a8be43;
  /* 10a8be27 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10a8be2d push eax */
  push32((uint32_t)(EAX));
  /* 10a8be2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8be31 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8be32 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10a8be38 push edx */
  push32((uint32_t)(EDX));
  /* 10a8be39 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10a8be3b call 0x10a8c0d0 */
  push32(0x10a8be40u); f_10a8c0d0();
  /* 10a8be40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8be43:;
  /* 10a8be43 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8be47 je 0x10a8bef1 */
  if (C.zf) goto L_10a8bef1;
  /* 10a8be4d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8be51 jle 0x10a8bef1 */
  if ((C.zf||C.sf!=C.of)) goto L_10a8bef1;
  /* 10a8be57 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8be5a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10a8be60 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8be63 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10a8be69:;
  /* 10a8be69 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10a8be6f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10a8be75 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8be78 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10a8be7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8be80 je 0x10a8beef */
  if (C.zf) goto L_10a8beef;
  /* 10a8be82 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10a8be88 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10a8be8b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10a8be92 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10a8be99 push eax */
  push32((uint32_t)(EAX));
  /* 10a8be9a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10a8bea0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8bea1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10a8bea7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8beaa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10a8beb0 call 0x10a8d280 */
  push32(0x10a8beb5u); f_10a8d280();
  /* 10a8beb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8beb8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10a8bebe cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8bec5 jg 0x10a8bec9 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a8bec9;
  /* 10a8bec7 jmp 0x10a8beef */
  goto L_10a8beef;
L_10a8bec9:;
  /* 10a8bec9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10a8becf push eax */
  push32((uint32_t)(EAX));
  /* 10a8bed0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8bed3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8bed4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10a8beda push edx */
  push32((uint32_t)(EDX));
  /* 10a8bedb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10a8bee1 push eax */
  push32((uint32_t)(EAX));
  /* 10a8bee2 call 0x10a8c110 */
  push32(0x10a8bee7u); f_10a8c110();
  /* 10a8bee7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8beea jmp 0x10a8be69 */
  goto L_10a8be69;
L_10a8beef:;
  /* 10a8beef jmp 0x10a8bf0c */
  goto L_10a8bf0c;
L_10a8bef1:;
  /* 10a8bef1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10a8bef7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8bef8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8befb push edx */
  push32((uint32_t)(EDX));
  /* 10a8befc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8beff push eax */
  push32((uint32_t)(EAX));
  /* 10a8bf00 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8bf03 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8bf04 call 0x10a8c110 */
  push32(0x10a8bf09u); f_10a8c110();
  /* 10a8bf09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8bf0c:;
  /* 10a8bf0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8bf0f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8bf12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8bf14 je 0x10a8bf32 */
  if (C.zf) goto L_10a8bf32;
  /* 10a8bf16 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10a8bf1c push eax */
  push32((uint32_t)(EAX));
  /* 10a8bf1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8bf20 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8bf21 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10a8bf27 push edx */
  push32((uint32_t)(EDX));
  /* 10a8bf28 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10a8bf2a call 0x10a8c0d0 */
  push32(0x10a8bf2fu); f_10a8c0d0();
  /* 10a8bf2f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8bf32:;
  /* 10a8bf32 jmp 0x10a8b344 */
  goto L_10a8b344;
L_10a8bf37:;
  /* 10a8bf37 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10a8bf3d pop edi */
  EDI = (pop32());
  /* 10a8bf3e pop esi */
  ESI = (pop32());
  /* 10a8bf3f pop ebx */
  EBX = (pop32());
  /* 10a8bf40 mov esp, ebp */
  ESP = (EBP);
  /* 10a8bf42 pop ebp */
  EBP = (pop32());
  /* 10a8bf43 ret  */
  ESPCHK(0x10a8b320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c050 @ 0x10a8c050 (119 bytes, 44 insns) */
void f_10a8c050(void) {
  FTRACE(0x10a8c050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8c050 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8c051 mov ebp, esp */
  EBP = (ESP);
  /* 10a8c053 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c054 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c057 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a8c05a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8c05d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c060 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10a8c063 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c066 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c06a jl 0x10a8c092 */
  if ((C.sf!=C.of)) goto L_10a8c092;
  /* 10a8c06c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c06f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a8c071 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10a8c074 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10a8c076 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10a8c07a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8c080 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a8c083 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c086 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a8c088 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c08b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c08e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a8c090 jmp 0x10a8c0a5 */
  goto L_10a8c0a5;
L_10a8c092:;
  /* 10a8c092 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c095 push edx */
  push32((uint32_t)(EDX));
  /* 10a8c096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c099 push eax */
  push32((uint32_t)(EAX));
  /* 10a8c09a call 0x10a8b0a0 */
  push32(0x10a8c09fu); f_10a8b0a0();
  /* 10a8c09f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c0a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a8c0a5:;
  /* 10a8c0a5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c0a9 jne 0x10a8c0b6 */
  if (!C.zf) goto L_10a8c0b6;
  /* 10a8c0ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8c0ae mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10a8c0b4 jmp 0x10a8c0c3 */
  goto L_10a8c0c3;
L_10a8c0b6:;
  /* 10a8c0b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8c0b9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a8c0bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c0be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8c0c1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10a8c0c3:;
  /* 10a8c0c3 mov esp, ebp */
  ESP = (EBP);
  /* 10a8c0c5 pop ebp */
  EBP = (pop32());
  /* 10a8c0c6 ret  */
  ESPCHK(0x10a8c050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0d0 @ 0x10a8c0d0 (53 bytes, 23 insns) */
void f_10a8c0d0(void) {
  FTRACE(0x10a8c0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8c0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8c0d1 mov ebp, esp */
  EBP = (ESP);
L_10a8c0d3:;
  /* 10a8c0d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c0d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c0d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8c0dc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10a8c0df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8c0e1 jle 0x10a8c103 */
  if ((C.zf||C.sf!=C.of)) goto L_10a8c103;
  /* 10a8c0e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a8c0e6 push edx */
  push32((uint32_t)(EDX));
  /* 10a8c0e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8c0ea push eax */
  push32((uint32_t)(EAX));
  /* 10a8c0eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c0ee push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c0ef call 0x10a8c050 */
  push32(0x10a8c0f4u); f_10a8c050();
  /* 10a8c0f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c0f7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a8c0fa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c0fd jne 0x10a8c101 */
  if (!C.zf) goto L_10a8c101;
  /* 10a8c0ff jmp 0x10a8c103 */
  goto L_10a8c103;
L_10a8c101:;
  /* 10a8c101 jmp 0x10a8c0d3 */
  goto L_10a8c0d3;
L_10a8c103:;
  /* 10a8c103 pop ebp */
  EBP = (pop32());
  /* 10a8c104 ret  */
  ESPCHK(0x10a8c0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c110 @ 0x10a8c110 (74 bytes, 31 insns) */
void f_10a8c110(void) {
  FTRACE(0x10a8c110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8c110 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8c111 mov ebp, esp */
  EBP = (ESP);
  /* 10a8c113 push ecx */
  push32((uint32_t)(ECX));
L_10a8c114:;
  /* 10a8c114 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c117 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c11a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8c11d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10a8c120 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8c122 jle 0x10a8c156 */
  if ((C.zf||C.sf!=C.of)) goto L_10a8c156;
  /* 10a8c124 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a8c127 push edx */
  push32((uint32_t)(EDX));
  /* 10a8c128 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8c12b push eax */
  push32((uint32_t)(EAX));
  /* 10a8c12c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c12f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a8c132 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a8c135 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8c138 push eax */
  push32((uint32_t)(EAX));
  /* 10a8c139 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c13c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c13f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10a8c142 call 0x10a8c050 */
  push32(0x10a8c147u); f_10a8c050();
  /* 10a8c147 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c14a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a8c14d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c150 jne 0x10a8c154 */
  if (!C.zf) goto L_10a8c154;
  /* 10a8c152 jmp 0x10a8c156 */
  goto L_10a8c156;
L_10a8c154:;
  /* 10a8c154 jmp 0x10a8c114 */
  goto L_10a8c114;
L_10a8c156:;
  /* 10a8c156 mov esp, ebp */
  ESP = (EBP);
  /* 10a8c158 pop ebp */
  EBP = (pop32());
  /* 10a8c159 ret  */
  ESPCHK(0x10a8c110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c160 @ 0x10a8c160 (26 bytes, 12 insns) */
void f_10a8c160(void) {
  FTRACE(0x10a8c160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8c160 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8c161 mov ebp, esp */
  EBP = (ESP);
  /* 10a8c163 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c166 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a8c168 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c16b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c16e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a8c170 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c173 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a8c175 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10a8c178 pop ebp */
  EBP = (pop32());
  /* 10a8c179 ret  */
  ESPCHK(0x10a8c160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c180 @ 0x10a8c180 (31 bytes, 14 insns) */
void f_10a8c180(void) {
  FTRACE(0x10a8c180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8c180 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8c181 mov ebp, esp */
  EBP = (ESP);
  /* 10a8c183 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c186 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a8c188 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c18b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c18e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a8c190 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c193 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a8c195 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8c198 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10a8c19a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a8c19d pop ebp */
  EBP = (pop32());
  /* 10a8c19e ret  */
  ESPCHK(0x10a8c180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1a0 @ 0x10a8c1a0 (27 bytes, 12 insns) */
void f_10a8c1a0(void) {
  FTRACE(0x10a8c1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8c1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8c1a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8c1a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c1a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a8c1a8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c1ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c1ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a8c1b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c1b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a8c1b5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10a8c1b9 pop ebp */
  EBP = (pop32());
  /* 10a8c1ba ret  */
  ESPCHK(0x10a8c1a0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10a8c1c0 (145 bytes, 42 insns) */
void f_10a8c1c0(void) {
  FTRACE(0x10a8c1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8c1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8c1c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8c1c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c1c4 call 0x10a8c270 */
  push32(0x10a8c1c9u); f_10a8c270();
  /* 10a8c1c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c1cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a8c1ce mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a8c1d5 jmp 0x10a8c1e0 */
  goto L_10a8c1e0;
L_10a8c1d7:;
  /* 10a8c1d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8c1da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c1dd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a8c1e0:;
  /* 10a8c1e0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c1e4 jae 0x10a8c20a */
  if (!C.cf) goto L_10a8c20a;
  /* 10a8c1e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8c1e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c1ec cmp ecx, dword ptr [eax*8 + 0x10aaefb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10aaefb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c1f3 jne 0x10a8c208 */
  if (!C.zf) goto L_10a8c208;
  /* 10a8c1f5 call 0x10a8c260 */
  push32(0x10a8c1fau); f_10a8c260();
  /* 10a8c1fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8c1fd mov ecx, dword ptr [edx*8 + 0x10aaefbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10aaefbc)));
  /* 10a8c204 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a8c206 jmp 0x10a8c24d */
  goto L_10a8c24d;
L_10a8c208:;
  /* 10a8c208 jmp 0x10a8c1d7 */
  goto L_10a8c1d7;
L_10a8c20a:;
  /* 10a8c20a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c20e jb 0x10a8c223 */
  if (C.cf) goto L_10a8c223;
  /* 10a8c210 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c214 ja 0x10a8c223 */
  if ((!C.cf&&!C.zf)) goto L_10a8c223;
  /* 10a8c216 call 0x10a8c260 */
  push32(0x10a8c21bu); f_10a8c260();
  /* 10a8c21b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10a8c221 jmp 0x10a8c24d */
  goto L_10a8c24d;
L_10a8c223:;
  /* 10a8c223 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c22a jb 0x10a8c242 */
  if (C.cf) goto L_10a8c242;
  /* 10a8c22c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c233 ja 0x10a8c242 */
  if ((!C.cf&&!C.zf)) goto L_10a8c242;
  /* 10a8c235 call 0x10a8c260 */
  push32(0x10a8c23au); f_10a8c260();
  /* 10a8c23a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10a8c240 jmp 0x10a8c24d */
  goto L_10a8c24d;
L_10a8c242:;
  /* 10a8c242 call 0x10a8c260 */
  push32(0x10a8c247u); f_10a8c260();
  /* 10a8c247 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10a8c24d:;
  /* 10a8c24d mov esp, ebp */
  ESP = (EBP);
  /* 10a8c24f pop ebp */
  EBP = (pop32());
  /* 10a8c250 ret  */
  ESPCHK(0x10a8c1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c260 @ 0x10a8c260 (13 bytes, 6 insns) */
void f_10a8c260(void) {
  FTRACE(0x10a8c260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8c260 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8c261 mov ebp, esp */
  EBP = (ESP);
  /* 10a8c263 call 0x10a83dd0 */
  push32(0x10a8c268u); f_10a83dd0();
  /* 10a8c268 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c26b pop ebp */
  EBP = (pop32());
  /* 10a8c26c ret  */
  ESPCHK(0x10a8c260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c270 @ 0x10a8c270 (13 bytes, 6 insns) */
void f_10a8c270(void) {
  FTRACE(0x10a8c270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8c270 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8c271 mov ebp, esp */
  EBP = (ESP);
  /* 10a8c273 call 0x10a83dd0 */
  push32(0x10a8c278u); f_10a83dd0();
  /* 10a8c278 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c27b pop ebp */
  EBP = (pop32());
  /* 10a8c27c ret  */
  ESPCHK(0x10a8c270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c280 @ 0x10a8c280 (664 bytes, 265 insns) [15 switch table(s)] */
void f_10a8c280(void) {
  FTRACE(0x10a8c280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8c280 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8c281 mov ebp, esp */
  EBP = (ESP);
  /* 10a8c283 push edi */
  push32((uint32_t)(EDI));
  /* 10a8c284 push esi */
  push32((uint32_t)(ESI));
  /* 10a8c285 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c288 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8c28b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c28e mov eax, ecx */
  EAX = (ECX);
  /* 10a8c290 mov edx, ecx */
  EDX = (ECX);
  /* 10a8c292 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c294 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c296 jbe 0x10a8c2a0 */
  if ((C.cf||C.zf)) goto L_10a8c2a0;
  /* 10a8c298 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c29a jb 0x10a8c418 */
  if (C.cf) goto L_10a8c418;
L_10a8c2a0:;
  /* 10a8c2a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10a8c2a6 jne 0x10a8c2bc */
  if (!C.zf) goto L_10a8c2bc;
  /* 10a8c2a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a8c2ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8c2ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c2b1 jb 0x10a8c2dc */
  if (C.cf) goto L_10a8c2dc;
  /* 10a8c2b3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a8c2b5 jmp dword ptr [edx*4 + 0x10a8c3c8] */
  switch (EDX) {
    case 0: goto L_10a8c3d8;
    case 1: goto L_10a8c3e0;
    case 2: goto L_10a8c3ec;
    case 3: goto L_10a8c400;
    default: x86_unimpl("switch@0x10a8c2b5 out of table"); return;
  }
L_10a8c2bc:;
  /* 10a8c2bc mov eax, edi */
  EAX = (EDI);
  /* 10a8c2be mov edx, 3 */
  EDX = (0x3u);
  /* 10a8c2c3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8c2c6 jb 0x10a8c2d4 */
  if (C.cf) goto L_10a8c2d4;
  /* 10a8c2c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8c2cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c2cd jmp dword ptr [eax*4 + 0x10a8c2e0] */
  switch (EAX) {
    case 1: goto L_10a8c2f0;
    case 2: goto L_10a8c31c;
    case 3: goto L_10a8c340;
    default: x86_unimpl("switch@0x10a8c2cd out of table"); return;
  }
L_10a8c2d4:;
  /* 10a8c2d4 jmp dword ptr [ecx*4 + 0x10a8c3d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10a8c3d8)))); return;
  /* 10a8c2db nop  */
  /* nop */
L_10a8c2dc:;
  /* 10a8c2dc jmp dword ptr [ecx*4 + 0x10a8c35c] */
  switch (ECX) {
    case 0: goto L_10a8c3bf;
    case 1: goto L_10a8c3ac;
    case 2: goto L_10a8c3a4;
    case 3: goto L_10a8c39c;
    case 4: goto L_10a8c394;
    case 5: goto L_10a8c38c;
    case 6: goto L_10a8c384;
    case 7: goto L_10a8c37c;
    default: x86_unimpl("switch@0x10a8c2dc out of table"); return;
  }
  /* 10a8c2e3 nop  */
  /* nop */
L_10a8c2f0:;
  /* 10a8c2f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8c2f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a8c2f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a8c2f6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a8c2f9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a8c2fc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a8c2ff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a8c302 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a8c305 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c308 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c30b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c30e jb 0x10a8c2dc */
  if (C.cf) goto L_10a8c2dc;
  /* 10a8c310 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a8c312 jmp dword ptr [edx*4 + 0x10a8c3c8] */
  switch (EDX) {
    case 0: goto L_10a8c3d8;
    case 1: goto L_10a8c3e0;
    case 2: goto L_10a8c3ec;
    case 3: goto L_10a8c400;
    default: x86_unimpl("switch@0x10a8c312 out of table"); return;
  }
  /* 10a8c319 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a8c31c:;
  /* 10a8c31c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8c31e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a8c320 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a8c322 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a8c325 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a8c328 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a8c32b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c32e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c331 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c334 jb 0x10a8c2dc */
  if (C.cf) goto L_10a8c2dc;
  /* 10a8c336 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a8c338 jmp dword ptr [edx*4 + 0x10a8c3c8] */
  switch (EDX) {
    case 0: goto L_10a8c3d8;
    case 1: goto L_10a8c3e0;
    case 2: goto L_10a8c3ec;
    case 3: goto L_10a8c400;
    default: x86_unimpl("switch@0x10a8c338 out of table"); return;
  }
  /* 10a8c33f nop  */
  /* nop */
L_10a8c340:;
  /* 10a8c340 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8c342 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a8c344 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a8c346 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a8c347 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a8c34a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a8c34b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c34e jb 0x10a8c2dc */
  if (C.cf) goto L_10a8c2dc;
  /* 10a8c350 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a8c352 jmp dword ptr [edx*4 + 0x10a8c3c8] */
  switch (EDX) {
    case 0: goto L_10a8c3d8;
    case 1: goto L_10a8c3e0;
    case 2: goto L_10a8c3ec;
    case 3: goto L_10a8c400;
    default: x86_unimpl("switch@0x10a8c352 out of table"); return;
  }
  /* 10a8c359 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a8c37c:;
  /* 10a8c37c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10a8c380 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10a8c384:;
  /* 10a8c384 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10a8c388 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10a8c38c:;
  /* 10a8c38c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10a8c390 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10a8c394:;
  /* 10a8c394 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10a8c398 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10a8c39c:;
  /* 10a8c39c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10a8c3a0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10a8c3a4:;
  /* 10a8c3a4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10a8c3a8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10a8c3ac:;
  /* 10a8c3ac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10a8c3b0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10a8c3b4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10a8c3bb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c3bd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10a8c3bf:;
  /* 10a8c3bf jmp dword ptr [edx*4 + 0x10a8c3c8] */
  switch (EDX) {
    case 0: goto L_10a8c3d8;
    case 1: goto L_10a8c3e0;
    case 2: goto L_10a8c3ec;
    case 3: goto L_10a8c400;
    default: x86_unimpl("switch@0x10a8c3bf out of table"); return;
  }
  /* 10a8c3c6 mov edi, edi */
  EDI = (EDI);
L_10a8c3d8:;
  /* 10a8c3d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c3db pop esi */
  ESI = (pop32());
  /* 10a8c3dc pop edi */
  EDI = (pop32());
  /* 10a8c3dd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a8c3de ret  */
  ESPCHK(0x10a8c280u, _esp0);
  ESP += 4; return;
  /* 10a8c3df nop  */
  /* nop */
L_10a8c3e0:;
  /* 10a8c3e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a8c3e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a8c3e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c3e7 pop esi */
  ESI = (pop32());
  /* 10a8c3e8 pop edi */
  EDI = (pop32());
  /* 10a8c3e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a8c3ea ret  */
  ESPCHK(0x10a8c280u, _esp0);
  ESP += 4; return;
  /* 10a8c3eb nop  */
  /* nop */
L_10a8c3ec:;
  /* 10a8c3ec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a8c3ee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a8c3f0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a8c3f3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a8c3f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c3f9 pop esi */
  ESI = (pop32());
  /* 10a8c3fa pop edi */
  EDI = (pop32());
  /* 10a8c3fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a8c3fc ret  */
  ESPCHK(0x10a8c280u, _esp0);
  ESP += 4; return;
  /* 10a8c3fd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a8c400:;
  /* 10a8c400 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a8c402 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10a8c404 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a8c407 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a8c40a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a8c40d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a8c410 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c413 pop esi */
  ESI = (pop32());
  /* 10a8c414 pop edi */
  EDI = (pop32());
  /* 10a8c415 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a8c416 ret  */
  ESPCHK(0x10a8c280u, _esp0);
  ESP += 4; return;
  /* 10a8c417 nop  */
  /* nop */
L_10a8c418:;
  /* 10a8c418 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10a8c41c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10a8c420 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10a8c426 jne 0x10a8c44c */
  if (!C.zf) goto L_10a8c44c;
  /* 10a8c428 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a8c42b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8c42e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c431 jb 0x10a8c440 */
  if (C.cf) goto L_10a8c440;
  /* 10a8c433 std  */
  C.df=1;
  /* 10a8c434 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a8c436 cld  */
  C.df=0;
  /* 10a8c437 jmp dword ptr [edx*4 + 0x10a8c560] */
  switch (EDX) {
    case 0: goto L_10a8c570;
    case 1: goto L_10a8c578;
    case 2: goto L_10a8c588;
    case 3: goto L_10a8c59c;
    default: x86_unimpl("switch@0x10a8c437 out of table"); return;
  }
  /* 10a8c43e mov edi, edi */
  EDI = (EDI);
L_10a8c440:;
  /* 10a8c440 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a8c442 jmp dword ptr [ecx*4 + 0x10a8c510] */
  switch (ECX) {
    case 0: goto L_10a8c557;
    default: x86_unimpl("switch@0x10a8c442 out of table"); return;
  }
  /* 10a8c449 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a8c44c:;
  /* 10a8c44c mov eax, edi */
  EAX = (EDI);
  /* 10a8c44e mov edx, 3 */
  EDX = (0x3u);
  /* 10a8c453 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c456 jb 0x10a8c464 */
  if (C.cf) goto L_10a8c464;
  /* 10a8c458 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8c45b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8c45d jmp dword ptr [eax*4 + 0x10a8c468] */
  switch (EAX) {
    case 1: goto L_10a8c478;
    case 2: goto L_10a8c498;
    case 3: goto L_10a8c4c0;
    default: x86_unimpl("switch@0x10a8c45d out of table"); return;
  }
L_10a8c464:;
  /* 10a8c464 jmp dword ptr [ecx*4 + 0x10a8c560] */
  switch (ECX) {
    case 0: goto L_10a8c570;
    case 1: goto L_10a8c578;
    case 2: goto L_10a8c588;
    case 3: goto L_10a8c59c;
    default: x86_unimpl("switch@0x10a8c464 out of table"); return;
  }
  /* 10a8c46b nop  */
  /* nop */
L_10a8c478:;
  /* 10a8c478 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a8c47b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8c47d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a8c480 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10a8c481 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a8c484 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10a8c485 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c488 jb 0x10a8c440 */
  if (C.cf) goto L_10a8c440;
  /* 10a8c48a std  */
  C.df=1;
  /* 10a8c48b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a8c48d cld  */
  C.df=0;
  /* 10a8c48e jmp dword ptr [edx*4 + 0x10a8c560] */
  switch (EDX) {
    case 0: goto L_10a8c570;
    case 1: goto L_10a8c578;
    case 2: goto L_10a8c588;
    case 3: goto L_10a8c59c;
    default: x86_unimpl("switch@0x10a8c48e out of table"); return;
  }
  /* 10a8c495 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a8c498:;
  /* 10a8c498 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a8c49b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8c49d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a8c4a0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a8c4a3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a8c4a6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a8c4a9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8c4ac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8c4af cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c4b2 jb 0x10a8c440 */
  if (C.cf) goto L_10a8c440;
  /* 10a8c4b4 std  */
  C.df=1;
  /* 10a8c4b5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a8c4b7 cld  */
  C.df=0;
  /* 10a8c4b8 jmp dword ptr [edx*4 + 0x10a8c560] */
  switch (EDX) {
    case 0: goto L_10a8c570;
    case 1: goto L_10a8c578;
    case 2: goto L_10a8c588;
    case 3: goto L_10a8c59c;
    default: x86_unimpl("switch@0x10a8c4b8 out of table"); return;
  }
  /* 10a8c4bf nop  */
  /* nop */
L_10a8c4c0:;
  /* 10a8c4c0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a8c4c3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8c4c5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a8c4c8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a8c4cb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a8c4ce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a8c4d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10a8c4d4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a8c4d7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8c4da sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8c4dd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c4e0 jb 0x10a8c440 */
  if (C.cf) goto L_10a8c440;
  /* 10a8c4e6 std  */
  C.df=1;
  /* 10a8c4e7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10a8c4e9 cld  */
  C.df=0;
  /* 10a8c4ea jmp dword ptr [edx*4 + 0x10a8c560] */
  switch (EDX) {
    case 0: goto L_10a8c570;
    case 1: goto L_10a8c578;
    case 2: goto L_10a8c588;
    case 3: goto L_10a8c59c;
    default: x86_unimpl("switch@0x10a8c4ea out of table"); return;
  }
  /* 10a8c4f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10a8c4f4 adc al, 0xc5 */
  { uint32_t _a=(AL),_b=(0xc5u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a8c4f6 test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 10a8c4f8 sbb al, 0xc5 */
  { uint32_t _a=(AL),_b=(0xc5u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a8c4fa test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 10a8c4fc and al, 0xc5 */
  { uint32_t _r=(AL)&(0xc5u); AL = (_r); fl_logic(_r,8); }
  /* 10a8c4fe test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 10a8c500 sub al, 0xc5 */
  { uint32_t _a=(AL),_b=(0xc5u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a8c502 test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 10a8c504 xor al, 0xc5 */
  { uint32_t _r=(AL)^(0xc5u); AL = (_r); fl_logic(_r,8); }
  /* 10a8c506 test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 10a8c508 cmp al, 0xc5 */
  { uint32_t _a=(AL),_b=(0xc5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a8c50a test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 10a8c50c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 10a8c50e test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 10a8c514 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10a8c518 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10a8c51c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10a8c520 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10a8c524 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10a8c528 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10a8c52c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10a8c530 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10a8c534 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10a8c538 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10a8c53c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10a8c540 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10a8c544 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10a8c548 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10a8c54c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10a8c553 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c555 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10a8c557:;
  /* 10a8c557 jmp dword ptr [edx*4 + 0x10a8c560] */
  switch (EDX) {
    case 0: goto L_10a8c570;
    case 1: goto L_10a8c578;
    case 2: goto L_10a8c588;
    case 3: goto L_10a8c59c;
    default: x86_unimpl("switch@0x10a8c557 out of table"); return;
  }
  /* 10a8c55e mov edi, edi */
  EDI = (EDI);
L_10a8c570:;
  /* 10a8c570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c573 pop esi */
  ESI = (pop32());
  /* 10a8c574 pop edi */
  EDI = (pop32());
  /* 10a8c575 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a8c576 ret  */
  ESPCHK(0x10a8c280u, _esp0);
  ESP += 4; return;
  /* 10a8c577 nop  */
  /* nop */
L_10a8c578:;
  /* 10a8c578 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a8c57b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a8c57e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c581 pop esi */
  ESI = (pop32());
  /* 10a8c582 pop edi */
  EDI = (pop32());
  /* 10a8c583 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a8c584 ret  */
  ESPCHK(0x10a8c280u, _esp0);
  ESP += 4; return;
  /* 10a8c585 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a8c588:;
  /* 10a8c588 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a8c58b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a8c58e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a8c591 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a8c594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c597 pop esi */
  ESI = (pop32());
  /* 10a8c598 pop edi */
  EDI = (pop32());
  /* 10a8c599 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a8c59a ret  */
  ESPCHK(0x10a8c280u, _esp0);
  ESP += 4; return;
  /* 10a8c59b nop  */
  /* nop */
L_10a8c59c:;
  /* 10a8c59c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10a8c59f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10a8c5a2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10a8c5a5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10a8c5a8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10a8c5ab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10a8c5ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c5b1 pop esi */
  ESI = (pop32());
  /* 10a8c5b2 pop edi */
  EDI = (pop32());
  /* 10a8c5b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a8c5b4 ret  */
  ESPCHK(0x10a8c280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5c0 @ 0x10a8c5c0 (421 bytes, 148 insns) */
void f_10a8c5c0(void) {
  FTRACE(0x10a8c5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8c5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8c5c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8c5c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a8c5c5 push 0x10aac320 */
  push32((uint32_t)(0x10aac320u));
  /* 10a8c5ca push 0x10a8d498 */
  push32((uint32_t)(0x10a8d498u));
  /* 10a8c5cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10a8c5d5 push eax */
  push32((uint32_t)(EAX));
  /* 10a8c5d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10a8c5dd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c5e0 push ebx */
  push32((uint32_t)(EBX));
  /* 10a8c5e1 push esi */
  push32((uint32_t)(ESI));
  /* 10a8c5e2 push edi */
  push32((uint32_t)(EDI));
  /* 10a8c5e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a8c5e6 cmp dword ptr [0x10ab08a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab08a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c5ed jne 0x10a8c63e */
  if (!C.zf) goto L_10a8c63e;
  /* 10a8c5ef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10a8c5f2 push eax */
  push32((uint32_t)(EAX));
  /* 10a8c5f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8c5f5 push 0x10aac318 */
  push32((uint32_t)(0x10aac318u));
  /* 10a8c5fa push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8c5fc call dword ptr [0x10ab32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32e4))), 0x10a8c602u);
  /* 10a8c602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8c604 je 0x10a8c612 */
  if (C.zf) goto L_10a8c612;
  /* 10a8c606 mov dword ptr [0x10ab08a4], 1 */
  w32((uint32_t)(0x10ab08a4), (0x1u));
  /* 10a8c610 jmp 0x10a8c63e */
  goto L_10a8c63e;
L_10a8c612:;
  /* 10a8c612 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10a8c615 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c616 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8c618 push 0x10aac314 */
  push32((uint32_t)(0x10aac314u));
  /* 10a8c61d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8c61f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8c621 call dword ptr [0x10ab32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32f4))), 0x10a8c627u);
  /* 10a8c627 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8c629 je 0x10a8c637 */
  if (C.zf) goto L_10a8c637;
  /* 10a8c62b mov dword ptr [0x10ab08a4], 2 */
  w32((uint32_t)(0x10ab08a4), (0x2u));
  /* 10a8c635 jmp 0x10a8c63e */
  goto L_10a8c63e;
L_10a8c637:;
  /* 10a8c637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8c639 jmp 0x10a8c768 */
  goto L_10a8c768;
L_10a8c63e:;
  /* 10a8c63e cmp dword ptr [0x10ab08a4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10ab08a4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c645 jne 0x10a8c675 */
  if (!C.zf) goto L_10a8c675;
  /* 10a8c647 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c64b jne 0x10a8c656 */
  if (!C.zf) goto L_10a8c656;
  /* 10a8c64d mov edx, dword ptr [0x10ab08b0] */
  EDX = (r32((uint32_t)(0x10ab08b0)));
  /* 10a8c653 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10a8c656:;
  /* 10a8c656 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a8c659 push eax */
  push32((uint32_t)(EAX));
  /* 10a8c65a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8c65d push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c65e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c661 push edx */
  push32((uint32_t)(EDX));
  /* 10a8c662 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c665 push eax */
  push32((uint32_t)(EAX));
  /* 10a8c666 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a8c669 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c66a call dword ptr [0x10ab32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32f4))), 0x10a8c670u);
  /* 10a8c670 jmp 0x10a8c768 */
  goto L_10a8c768;
L_10a8c675:;
  /* 10a8c675 cmp dword ptr [0x10ab08a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ab08a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c67c jne 0x10a8c766 */
  if (!C.zf) goto L_10a8c766;
  /* 10a8c682 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c686 jne 0x10a8c691 */
  if (!C.zf) goto L_10a8c691;
  /* 10a8c688 mov edx, dword ptr [0x10ab08c0] */
  EDX = (r32((uint32_t)(0x10ab08c0)));
  /* 10a8c68e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10a8c691:;
  /* 10a8c691 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8c693 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8c695 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8c698 push eax */
  push32((uint32_t)(EAX));
  /* 10a8c699 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c69c push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c69d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a8c6a0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a8c6a2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8c6a4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8c6a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c6aa push edx */
  push32((uint32_t)(EDX));
  /* 10a8c6ab mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a8c6ae push eax */
  push32((uint32_t)(EAX));
  /* 10a8c6af call dword ptr [0x10ab32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32ec))), 0x10a8c6b5u);
  /* 10a8c6b5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a8c6b8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c6bc jne 0x10a8c6c5 */
  if (!C.zf) goto L_10a8c6c5;
  /* 10a8c6be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8c6c0 jmp 0x10a8c768 */
  goto L_10a8c768;
L_10a8c6c5:;
  /* 10a8c6c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a8c6cc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8c6cf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a8c6d1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c6d4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a8c6d6 call 0x10a87530 */
  push32(0x10a8c6dbu); f_10a87530();
  /* 10a8c6db mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10a8c6de mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a8c6e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a8c6e4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a8c6e7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8c6ea shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10a8c6ec push edx */
  push32((uint32_t)(EDX));
  /* 10a8c6ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8c6ef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8c6f2 push eax */
  push32((uint32_t)(EAX));
  /* 10a8c6f3 call 0x10a88100 */
  push32(0x10a8c6f8u); f_10a88100();
  /* 10a8c6f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c6fb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a8c702 jmp 0x10a8c71b */
  goto L_10a8c71b;
  /* 10a8c704 mov eax, 1 */
  EAX = (0x1u);
  /* 10a8c709 ret  */
  ESPCHK(0x10a8c5c0u, _esp0);
  ESP += 4; return;
  /* 10a8c70a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8c70d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a8c714 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a8c71b:;
  /* 10a8c71b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c71f jne 0x10a8c725 */
  if (!C.zf) goto L_10a8c725;
  /* 10a8c721 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8c723 jmp 0x10a8c768 */
  goto L_10a8c768;
L_10a8c725:;
  /* 10a8c725 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8c728 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c729 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8c72c push edx */
  push32((uint32_t)(EDX));
  /* 10a8c72d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8c730 push eax */
  push32((uint32_t)(EAX));
  /* 10a8c731 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c734 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c735 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8c737 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a8c73a push edx */
  push32((uint32_t)(EDX));
  /* 10a8c73b call dword ptr [0x10ab32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32ec))), 0x10a8c741u);
  /* 10a8c741 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a8c744 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c748 jne 0x10a8c74e */
  if (!C.zf) goto L_10a8c74e;
  /* 10a8c74a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8c74c jmp 0x10a8c768 */
  goto L_10a8c768;
L_10a8c74e:;
  /* 10a8c74e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a8c751 push eax */
  push32((uint32_t)(EAX));
  /* 10a8c752 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a8c755 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c756 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8c759 push edx */
  push32((uint32_t)(EDX));
  /* 10a8c75a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c75d push eax */
  push32((uint32_t)(EAX));
  /* 10a8c75e call dword ptr [0x10ab32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32e4))), 0x10a8c764u);
  /* 10a8c764 jmp 0x10a8c768 */
  goto L_10a8c768;
L_10a8c766:;
  /* 10a8c766 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a8c768:;
  /* 10a8c768 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10a8c76b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8c76e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10a8c775 pop edi */
  EDI = (pop32());
  /* 10a8c776 pop esi */
  ESI = (pop32());
  /* 10a8c777 pop ebx */
  EBX = (pop32());
  /* 10a8c778 mov esp, ebp */
  ESP = (EBP);
  /* 10a8c77a pop ebp */
  EBP = (pop32());
  /* 10a8c77b ret  */
  ESPCHK(0x10a8c5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c780 @ 0x10a8c780 (727 bytes, 263 insns) */
void f_10a8c780(void) {
  FTRACE(0x10a8c780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8c780 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8c781 mov ebp, esp */
  EBP = (ESP);
  /* 10a8c783 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a8c785 push 0x10aac330 */
  push32((uint32_t)(0x10aac330u));
  /* 10a8c78a push 0x10a8d498 */
  push32((uint32_t)(0x10a8d498u));
  /* 10a8c78f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10a8c795 push eax */
  push32((uint32_t)(EAX));
  /* 10a8c796 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10a8c79d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c7a0 push ebx */
  push32((uint32_t)(EBX));
  /* 10a8c7a1 push esi */
  push32((uint32_t)(ESI));
  /* 10a8c7a2 push edi */
  push32((uint32_t)(EDI));
  /* 10a8c7a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a8c7a6 cmp dword ptr [0x10ab08c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab08c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c7ad jne 0x10a8c806 */
  if (!C.zf) goto L_10a8c806;
  /* 10a8c7af push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8c7b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8c7b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8c7b5 push 0x10aac318 */
  push32((uint32_t)(0x10aac318u));
  /* 10a8c7ba push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a8c7bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8c7c1 call dword ptr [0x10ab32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32e8))), 0x10a8c7c7u);
  /* 10a8c7c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8c7c9 je 0x10a8c7d7 */
  if (C.zf) goto L_10a8c7d7;
  /* 10a8c7cb mov dword ptr [0x10ab08c8], 1 */
  w32((uint32_t)(0x10ab08c8), (0x1u));
  /* 10a8c7d5 jmp 0x10a8c806 */
  goto L_10a8c806;
L_10a8c7d7:;
  /* 10a8c7d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8c7d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8c7db push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8c7dd push 0x10aac314 */
  push32((uint32_t)(0x10aac314u));
  /* 10a8c7e2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a8c7e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8c7e9 call dword ptr [0x10ab32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32e0))), 0x10a8c7efu);
  /* 10a8c7ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8c7f1 je 0x10a8c7ff */
  if (C.zf) goto L_10a8c7ff;
  /* 10a8c7f3 mov dword ptr [0x10ab08c8], 2 */
  w32((uint32_t)(0x10ab08c8), (0x2u));
  /* 10a8c7fd jmp 0x10a8c806 */
  goto L_10a8c806;
L_10a8c7ff:;
  /* 10a8c7ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8c801 jmp 0x10a8ca71 */
  goto L_10a8ca71;
L_10a8c806:;
  /* 10a8c806 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c80a jle 0x10a8c81f */
  if ((C.zf||C.sf!=C.of)) goto L_10a8c81f;
  /* 10a8c80c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a8c80f push eax */
  push32((uint32_t)(EAX));
  /* 10a8c810 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8c813 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c814 call 0x10a8ca90 */
  push32(0x10a8c819u); f_10a8ca90();
  /* 10a8c819 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c81c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10a8c81f:;
  /* 10a8c81f cmp dword ptr [0x10ab08c8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10ab08c8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c826 jne 0x10a8c84b */
  if (!C.zf) goto L_10a8c84b;
  /* 10a8c828 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a8c82b push edx */
  push32((uint32_t)(EDX));
  /* 10a8c82c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a8c82f push eax */
  push32((uint32_t)(EAX));
  /* 10a8c830 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a8c833 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c834 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8c837 push edx */
  push32((uint32_t)(EDX));
  /* 10a8c838 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c83b push eax */
  push32((uint32_t)(EAX));
  /* 10a8c83c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c83f push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c840 call dword ptr [0x10ab32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32e0))), 0x10a8c846u);
  /* 10a8c846 jmp 0x10a8ca71 */
  goto L_10a8ca71;
L_10a8c84b:;
  /* 10a8c84b cmp dword ptr [0x10ab08c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ab08c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c852 jne 0x10a8ca6f */
  if (!C.zf) goto L_10a8ca6f;
  /* 10a8c858 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c85c jne 0x10a8c867 */
  if (!C.zf) goto L_10a8c867;
  /* 10a8c85e mov edx, dword ptr [0x10ab08c0] */
  EDX = (r32((uint32_t)(0x10ab08c0)));
  /* 10a8c864 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10a8c867:;
  /* 10a8c867 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8c869 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8c86b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a8c86e push eax */
  push32((uint32_t)(EAX));
  /* 10a8c86f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8c872 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c873 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10a8c876 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a8c878 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8c87a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8c87d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c880 push edx */
  push32((uint32_t)(EDX));
  /* 10a8c881 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a8c884 push eax */
  push32((uint32_t)(EAX));
  /* 10a8c885 call dword ptr [0x10ab32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32ec))), 0x10a8c88bu);
  /* 10a8c88b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a8c88e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c892 jne 0x10a8c89b */
  if (!C.zf) goto L_10a8c89b;
  /* 10a8c894 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8c896 jmp 0x10a8ca71 */
  goto L_10a8ca71;
L_10a8c89b:;
  /* 10a8c89b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a8c8a2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a8c8a5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a8c8a7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c8aa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a8c8ac call 0x10a87530 */
  push32(0x10a8c8b1u); f_10a87530();
  /* 10a8c8b1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10a8c8b4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a8c8b7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a8c8ba mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a8c8bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a8c8c4 jmp 0x10a8c8dd */
  goto L_10a8c8dd;
  /* 10a8c8c6 mov eax, 1 */
  EAX = (0x1u);
  /* 10a8c8cb ret  */
  ESPCHK(0x10a8c780u, _esp0);
  ESP += 4; return;
  /* 10a8c8cc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8c8cf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a8c8d6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a8c8dd:;
  /* 10a8c8dd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c8e1 jne 0x10a8c8ea */
  if (!C.zf) goto L_10a8c8ea;
  /* 10a8c8e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8c8e5 jmp 0x10a8ca71 */
  goto L_10a8ca71;
L_10a8c8ea:;
  /* 10a8c8ea mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a8c8ed push edx */
  push32((uint32_t)(EDX));
  /* 10a8c8ee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8c8f1 push eax */
  push32((uint32_t)(EAX));
  /* 10a8c8f2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a8c8f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c8f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8c8f9 push edx */
  push32((uint32_t)(EDX));
  /* 10a8c8fa push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8c8fc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a8c8ff push eax */
  push32((uint32_t)(EAX));
  /* 10a8c900 call dword ptr [0x10ab32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32ec))), 0x10a8c906u);
  /* 10a8c906 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8c908 jne 0x10a8c911 */
  if (!C.zf) goto L_10a8c911;
  /* 10a8c90a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8c90c jmp 0x10a8ca71 */
  goto L_10a8ca71;
L_10a8c911:;
  /* 10a8c911 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8c913 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8c915 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a8c918 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c919 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8c91c push edx */
  push32((uint32_t)(EDX));
  /* 10a8c91d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c920 push eax */
  push32((uint32_t)(EAX));
  /* 10a8c921 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c924 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c925 call dword ptr [0x10ab32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32e8))), 0x10a8c92bu);
  /* 10a8c92b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a8c92e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c932 jne 0x10a8c93b */
  if (!C.zf) goto L_10a8c93b;
  /* 10a8c934 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8c936 jmp 0x10a8ca71 */
  goto L_10a8ca71;
L_10a8c93b:;
  /* 10a8c93b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c93e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8c944 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8c946 je 0x10a8c98b */
  if (C.zf) goto L_10a8c98b;
  /* 10a8c948 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c94c je 0x10a8c986 */
  if (C.zf) goto L_10a8c986;
  /* 10a8c94e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a8c951 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c954 jle 0x10a8c95d */
  if ((C.zf||C.sf!=C.of)) goto L_10a8c95d;
  /* 10a8c956 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8c958 jmp 0x10a8ca71 */
  goto L_10a8ca71;
L_10a8c95d:;
  /* 10a8c95d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a8c960 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c961 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a8c964 push edx */
  push32((uint32_t)(EDX));
  /* 10a8c965 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a8c968 push eax */
  push32((uint32_t)(EAX));
  /* 10a8c969 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8c96c push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c96d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c970 push edx */
  push32((uint32_t)(EDX));
  /* 10a8c971 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c974 push eax */
  push32((uint32_t)(EAX));
  /* 10a8c975 call dword ptr [0x10ab32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32e8))), 0x10a8c97bu);
  /* 10a8c97b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8c97d jne 0x10a8c986 */
  if (!C.zf) goto L_10a8c986;
  /* 10a8c97f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8c981 jmp 0x10a8ca71 */
  goto L_10a8ca71;
L_10a8c986:;
  /* 10a8c986 jmp 0x10a8ca6a */
  goto L_10a8ca6a;
L_10a8c98b:;
  /* 10a8c98b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a8c98e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10a8c991 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a8c998 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a8c99b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a8c99d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8c9a0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a8c9a2 call 0x10a87530 */
  push32(0x10a8c9a7u); f_10a87530();
  /* 10a8c9a7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10a8c9aa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a8c9ad mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a8c9b0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a8c9b3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a8c9ba jmp 0x10a8c9d3 */
  goto L_10a8c9d3;
  /* 10a8c9bc mov eax, 1 */
  EAX = (0x1u);
  /* 10a8c9c1 ret  */
  ESPCHK(0x10a8c780u, _esp0);
  ESP += 4; return;
  /* 10a8c9c2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8c9c5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a8c9cc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a8c9d3:;
  /* 10a8c9d3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8c9d7 jne 0x10a8c9e0 */
  if (!C.zf) goto L_10a8c9e0;
  /* 10a8c9d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8c9db jmp 0x10a8ca71 */
  goto L_10a8ca71;
L_10a8c9e0:;
  /* 10a8c9e0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a8c9e3 push eax */
  push32((uint32_t)(EAX));
  /* 10a8c9e4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8c9e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c9e8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a8c9eb push edx */
  push32((uint32_t)(EDX));
  /* 10a8c9ec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8c9ef push eax */
  push32((uint32_t)(EAX));
  /* 10a8c9f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8c9f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8c9f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8c9f7 push edx */
  push32((uint32_t)(EDX));
  /* 10a8c9f8 call dword ptr [0x10ab32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32e8))), 0x10a8c9feu);
  /* 10a8c9fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8ca00 jne 0x10a8ca06 */
  if (!C.zf) goto L_10a8ca06;
  /* 10a8ca02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8ca04 jmp 0x10a8ca71 */
  goto L_10a8ca71;
L_10a8ca06:;
  /* 10a8ca06 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ca0a jne 0x10a8ca3a */
  if (!C.zf) goto L_10a8ca3a;
  /* 10a8ca0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8ca0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8ca10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8ca12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8ca14 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a8ca17 push eax */
  push32((uint32_t)(EAX));
  /* 10a8ca18 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8ca1b push ecx */
  push32((uint32_t)(ECX));
  /* 10a8ca1c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a8ca21 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a8ca24 push edx */
  push32((uint32_t)(EDX));
  /* 10a8ca25 call dword ptr [0x10ab339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab339c))), 0x10a8ca2bu);
  /* 10a8ca2b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a8ca2e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ca32 jne 0x10a8ca38 */
  if (!C.zf) goto L_10a8ca38;
  /* 10a8ca34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8ca36 jmp 0x10a8ca71 */
  goto L_10a8ca71;
L_10a8ca38:;
  /* 10a8ca38 jmp 0x10a8ca6a */
  goto L_10a8ca6a;
L_10a8ca3a:;
  /* 10a8ca3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8ca3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8ca3e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a8ca41 push eax */
  push32((uint32_t)(EAX));
  /* 10a8ca42 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a8ca45 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8ca46 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a8ca49 push edx */
  push32((uint32_t)(EDX));
  /* 10a8ca4a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8ca4d push eax */
  push32((uint32_t)(EAX));
  /* 10a8ca4e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a8ca53 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a8ca56 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8ca57 call dword ptr [0x10ab339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab339c))), 0x10a8ca5du);
  /* 10a8ca5d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a8ca60 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ca64 jne 0x10a8ca6a */
  if (!C.zf) goto L_10a8ca6a;
  /* 10a8ca66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8ca68 jmp 0x10a8ca71 */
  goto L_10a8ca71;
L_10a8ca6a:;
  /* 10a8ca6a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a8ca6d jmp 0x10a8ca71 */
  goto L_10a8ca71;
L_10a8ca6f:;
  /* 10a8ca6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a8ca71:;
  /* 10a8ca71 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10a8ca74 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8ca77 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10a8ca7e pop edi */
  EDI = (pop32());
  /* 10a8ca7f pop esi */
  ESI = (pop32());
  /* 10a8ca80 pop ebx */
  EBX = (pop32());
  /* 10a8ca81 mov esp, ebp */
  ESP = (EBP);
  /* 10a8ca83 pop ebp */
  EBP = (pop32());
  /* 10a8ca84 ret  */
  ESPCHK(0x10a8c780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca90 @ 0x10a8ca90 (80 bytes, 32 insns) */
void f_10a8ca90(void) {
  FTRACE(0x10a8ca90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8ca90 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8ca91 mov ebp, esp */
  EBP = (ESP);
  /* 10a8ca93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8ca96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8ca99 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a8ca9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ca9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a8caa2:;
  /* 10a8caa2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8caa5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8caa8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8caab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a8caae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8cab0 je 0x10a8cac7 */
  if (C.zf) goto L_10a8cac7;
  /* 10a8cab2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cab5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a8cab8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8caba je 0x10a8cac7 */
  if (C.zf) goto L_10a8cac7;
  /* 10a8cabc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cabf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8cac2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8cac5 jmp 0x10a8caa2 */
  goto L_10a8caa2;
L_10a8cac7:;
  /* 10a8cac7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8caca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a8cacd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8cacf jne 0x10a8cad9 */
  if (!C.zf) goto L_10a8cad9;
  /* 10a8cad1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cad4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8cad7 jmp 0x10a8cadc */
  goto L_10a8cadc;
L_10a8cad9:;
  /* 10a8cad9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10a8cadc:;
  /* 10a8cadc mov esp, ebp */
  ESP = (EBP);
  /* 10a8cade pop ebp */
  EBP = (pop32());
  /* 10a8cadf ret  */
  ESPCHK(0x10a8ca90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cae0 @ 0x10a8cae0 (130 bytes, 43 insns) */
void f_10a8cae0(void) {
  FTRACE(0x10a8cae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8cae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8cae1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8cae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8cae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cae7 cmp eax, dword ptr [0x10ab21bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ab21bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8caed jae 0x10a8cb11 */
  if (!C.cf) goto L_10a8cb11;
  /* 10a8caef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8caf2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a8caf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8caf8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8cafb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8cafe mov eax, dword ptr [ecx*4 + 0x10ab2080] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ab2080)));
  /* 10a8cb05 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a8cb0a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8cb0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8cb0f jne 0x10a8cb2c */
  if (!C.zf) goto L_10a8cb2c;
L_10a8cb11:;
  /* 10a8cb11 call 0x10a8c260 */
  push32(0x10a8cb16u); f_10a8c260();
  /* 10a8cb16 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a8cb1c call 0x10a8c270 */
  push32(0x10a8cb21u); f_10a8c270();
  /* 10a8cb21 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a8cb27 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8cb2a jmp 0x10a8cb5e */
  goto L_10a8cb5e;
L_10a8cb2c:;
  /* 10a8cb2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cb2f push edx */
  push32((uint32_t)(EDX));
  /* 10a8cb30 call 0x10a8da80 */
  push32(0x10a8cb35u); f_10a8da80();
  /* 10a8cb35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8cb38 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8cb3b push eax */
  push32((uint32_t)(EAX));
  /* 10a8cb3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8cb3f push ecx */
  push32((uint32_t)(ECX));
  /* 10a8cb40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cb43 push edx */
  push32((uint32_t)(EDX));
  /* 10a8cb44 call 0x10a8cb70 */
  push32(0x10a8cb49u); f_10a8cb70();
  /* 10a8cb49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8cb4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8cb4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cb52 push eax */
  push32((uint32_t)(EAX));
  /* 10a8cb53 call 0x10a8db10 */
  push32(0x10a8cb58u); f_10a8db10();
  /* 10a8cb58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8cb5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a8cb5e:;
  /* 10a8cb5e mov esp, ebp */
  ESP = (EBP);
  /* 10a8cb60 pop ebp */
  EBP = (pop32());
  /* 10a8cb61 ret  */
  ESPCHK(0x10a8cae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb70 @ 0x10a8cb70 (178 bytes, 56 insns) */
void f_10a8cb70(void) {
  FTRACE(0x10a8cb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8cb70 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8cb71 mov ebp, esp */
  EBP = (ESP);
  /* 10a8cb73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8cb76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cb79 push eax */
  push32((uint32_t)(EAX));
  /* 10a8cb7a call 0x10a8d900 */
  push32(0x10a8cb7fu); f_10a8d900();
  /* 10a8cb7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8cb82 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a8cb85 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8cb89 jne 0x10a8cb9e */
  if (!C.zf) goto L_10a8cb9e;
  /* 10a8cb8b call 0x10a8c260 */
  push32(0x10a8cb90u); f_10a8c260();
  /* 10a8cb90 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a8cb96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8cb99 jmp 0x10a8cc1e */
  goto L_10a8cc1e;
L_10a8cb9e:;
  /* 10a8cb9e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8cba1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8cba2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8cba4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8cba7 push edx */
  push32((uint32_t)(EDX));
  /* 10a8cba8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8cbab push eax */
  push32((uint32_t)(EAX));
  /* 10a8cbac call dword ptr [0x10ab32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32d8))), 0x10a8cbb2u);
  /* 10a8cbb2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a8cbb5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8cbb9 jne 0x10a8cbc6 */
  if (!C.zf) goto L_10a8cbc6;
  /* 10a8cbbb call dword ptr [0x10ab3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3370))), 0x10a8cbc1u);
  /* 10a8cbc1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8cbc4 jmp 0x10a8cbcd */
  goto L_10a8cbcd;
L_10a8cbc6:;
  /* 10a8cbc6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a8cbcd:;
  /* 10a8cbcd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8cbd1 je 0x10a8cbe4 */
  if (C.zf) goto L_10a8cbe4;
  /* 10a8cbd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cbd6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8cbd7 call 0x10a8c1c0 */
  push32(0x10a8cbdcu); f_10a8c1c0();
  /* 10a8cbdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8cbdf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8cbe2 jmp 0x10a8cc1e */
  goto L_10a8cc1e;
L_10a8cbe4:;
  /* 10a8cbe4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cbe7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10a8cbea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cbed and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8cbf0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8cbf3 mov ecx, dword ptr [edx*4 + 0x10ab2080] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10ab2080)));
  /* 10a8cbfa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10a8cbfe and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10a8cc01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cc04 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a8cc07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cc0a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8cc0d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8cc10 mov eax, dword ptr [eax*4 + 0x10ab2080] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10ab2080)));
  /* 10a8cc17 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10a8cc1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a8cc1e:;
  /* 10a8cc1e mov esp, ebp */
  ESP = (EBP);
  /* 10a8cc20 pop ebp */
  EBP = (pop32());
  /* 10a8cc21 ret  */
  ESPCHK(0x10a8cb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc30 @ 0x10a8cc30 (130 bytes, 43 insns) */
void f_10a8cc30(void) {
  FTRACE(0x10a8cc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8cc30 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8cc31 mov ebp, esp */
  EBP = (ESP);
  /* 10a8cc33 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8cc34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cc37 cmp eax, dword ptr [0x10ab21bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ab21bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8cc3d jae 0x10a8cc61 */
  if (!C.cf) goto L_10a8cc61;
  /* 10a8cc3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cc42 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a8cc45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cc48 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8cc4b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8cc4e mov eax, dword ptr [ecx*4 + 0x10ab2080] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ab2080)));
  /* 10a8cc55 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a8cc5a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8cc5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8cc5f jne 0x10a8cc7c */
  if (!C.zf) goto L_10a8cc7c;
L_10a8cc61:;
  /* 10a8cc61 call 0x10a8c260 */
  push32(0x10a8cc66u); f_10a8c260();
  /* 10a8cc66 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a8cc6c call 0x10a8c270 */
  push32(0x10a8cc71u); f_10a8c270();
  /* 10a8cc71 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a8cc77 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8cc7a jmp 0x10a8ccae */
  goto L_10a8ccae;
L_10a8cc7c:;
  /* 10a8cc7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cc7f push edx */
  push32((uint32_t)(EDX));
  /* 10a8cc80 call 0x10a8da80 */
  push32(0x10a8cc85u); f_10a8da80();
  /* 10a8cc85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8cc88 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8cc8b push eax */
  push32((uint32_t)(EAX));
  /* 10a8cc8c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8cc8f push ecx */
  push32((uint32_t)(ECX));
  /* 10a8cc90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cc93 push edx */
  push32((uint32_t)(EDX));
  /* 10a8cc94 call 0x10a8ccc0 */
  push32(0x10a8cc99u); f_10a8ccc0();
  /* 10a8cc99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8cc9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8cc9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cca2 push eax */
  push32((uint32_t)(EAX));
  /* 10a8cca3 call 0x10a8db10 */
  push32(0x10a8cca8u); f_10a8db10();
  /* 10a8cca8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ccab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a8ccae:;
  /* 10a8ccae mov esp, ebp */
  ESP = (EBP);
  /* 10a8ccb0 pop ebp */
  EBP = (pop32());
  /* 10a8ccb1 ret  */
  ESPCHK(0x10a8cc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccc0 @ 0x10a8ccc0 (627 bytes, 182 insns) */
void f_10a8ccc0(void) {
  FTRACE(0x10a8ccc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8ccc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8ccc1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8ccc3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8ccc9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a8ccd0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8ccd3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10a8ccd9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ccdd jne 0x10a8cce6 */
  if (!C.zf) goto L_10a8cce6;
  /* 10a8ccdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8cce1 jmp 0x10a8cf2f */
  goto L_10a8cf2f;
L_10a8cce6:;
  /* 10a8cce6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cce9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a8ccec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ccef and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8ccf2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8ccf5 mov eax, dword ptr [ecx*4 + 0x10ab2080] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ab2080)));
  /* 10a8ccfc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a8cd01 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8cd04 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8cd06 je 0x10a8cd18 */
  if (C.zf) goto L_10a8cd18;
  /* 10a8cd08 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8cd0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8cd0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cd0f push edx */
  push32((uint32_t)(EDX));
  /* 10a8cd10 call 0x10a8cb70 */
  push32(0x10a8cd15u); f_10a8cb70();
  /* 10a8cd15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8cd18:;
  /* 10a8cd18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cd1b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a8cd1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cd21 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8cd24 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8cd27 mov edx, dword ptr [eax*4 + 0x10ab2080] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ab2080)));
  /* 10a8cd2e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10a8cd33 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8cd38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8cd3a je 0x10a8ce4c */
  if (C.zf) goto L_10a8ce4c;
  /* 10a8cd40 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8cd43 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a8cd46 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10a8cd4d:;
  /* 10a8cd4d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cd50 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8cd53 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8cd56 jae 0x10a8ce4a */
  if (!C.cf) goto L_10a8ce4a;
  /* 10a8cd5c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10a8cd62 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a8cd65:;
  /* 10a8cd65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8cd68 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10a8cd6e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8cd70 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8cd76 jge 0x10a8cdd7 */
  if ((C.sf==C.of)) goto L_10a8cdd7;
  /* 10a8cd78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cd7b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8cd7e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8cd81 jae 0x10a8cdd7 */
  if (!C.cf) goto L_10a8cdd7;
  /* 10a8cd83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cd86 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a8cd88 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10a8cd8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cd91 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8cd94 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8cd97 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10a8cd9e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8cda1 jne 0x10a8cdc1 */
  if (!C.zf) goto L_10a8cdc1;
  /* 10a8cda3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10a8cda9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8cdac mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10a8cdb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8cdb5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10a8cdb8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8cdbb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8cdbe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a8cdc1:;
  /* 10a8cdc1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8cdc4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10a8cdca mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10a8cdcc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8cdcf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8cdd2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8cdd5 jmp 0x10a8cd65 */
  goto L_10a8cd65;
L_10a8cdd7:;
  /* 10a8cdd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8cdd9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10a8cddf push edx */
  push32((uint32_t)(EDX));
  /* 10a8cde0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8cde3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10a8cde9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8cdeb push eax */
  push32((uint32_t)(EAX));
  /* 10a8cdec lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10a8cdf2 push edx */
  push32((uint32_t)(EDX));
  /* 10a8cdf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cdf6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a8cdf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cdfc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8cdff imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8ce02 mov edx, dword ptr [eax*4 + 0x10ab2080] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ab2080)));
  /* 10a8ce09 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10a8ce0c push eax */
  push32((uint32_t)(EAX));
  /* 10a8ce0d call dword ptr [0x10ab3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3330))), 0x10a8ce13u);
  /* 10a8ce13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8ce15 je 0x10a8ce3a */
  if (C.zf) goto L_10a8ce3a;
  /* 10a8ce17 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8ce1a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ce20 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a8ce23 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8ce26 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10a8ce2c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8ce2e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ce34 jge 0x10a8ce38 */
  if ((C.sf==C.of)) goto L_10a8ce38;
  /* 10a8ce36 jmp 0x10a8ce4a */
  goto L_10a8ce4a;
L_10a8ce38:;
  /* 10a8ce38 jmp 0x10a8ce45 */
  goto L_10a8ce45;
L_10a8ce3a:;
  /* 10a8ce3a call dword ptr [0x10ab3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3370))), 0x10a8ce40u);
  /* 10a8ce40 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a8ce43 jmp 0x10a8ce4a */
  goto L_10a8ce4a;
L_10a8ce45:;
  /* 10a8ce45 jmp 0x10a8cd4d */
  goto L_10a8cd4d;
L_10a8ce4a:;
  /* 10a8ce4a jmp 0x10a8ce9c */
  goto L_10a8ce9c;
L_10a8ce4c:;
  /* 10a8ce4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8ce4e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10a8ce54 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8ce55 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8ce58 push edx */
  push32((uint32_t)(EDX));
  /* 10a8ce59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8ce5c push eax */
  push32((uint32_t)(EAX));
  /* 10a8ce5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ce60 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a8ce63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ce66 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8ce69 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8ce6c mov eax, dword ptr [ecx*4 + 0x10ab2080] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ab2080)));
  /* 10a8ce73 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10a8ce76 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8ce77 call dword ptr [0x10ab3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3330))), 0x10a8ce7du);
  /* 10a8ce7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8ce7f je 0x10a8ce93 */
  if (C.zf) goto L_10a8ce93;
  /* 10a8ce81 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a8ce88 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10a8ce8e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a8ce91 jmp 0x10a8ce9c */
  goto L_10a8ce9c;
L_10a8ce93:;
  /* 10a8ce93 call dword ptr [0x10ab3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3370))), 0x10a8ce99u);
  /* 10a8ce99 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a8ce9c:;
  /* 10a8ce9c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8cea0 jne 0x10a8cf26 */
  if (!C.zf) goto L_10a8cf26;
  /* 10a8cea6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ceaa je 0x10a8ceda */
  if (C.zf) goto L_10a8ceda;
  /* 10a8ceac cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ceb0 jne 0x10a8cec9 */
  if (!C.zf) goto L_10a8cec9;
  /* 10a8ceb2 call 0x10a8c260 */
  push32(0x10a8ceb7u); f_10a8c260();
  /* 10a8ceb7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a8cebd call 0x10a8c270 */
  push32(0x10a8cec2u); f_10a8c270();
  /* 10a8cec2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8cec5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10a8cec7 jmp 0x10a8ced5 */
  goto L_10a8ced5;
L_10a8cec9:;
  /* 10a8cec9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8cecc push edx */
  push32((uint32_t)(EDX));
  /* 10a8cecd call 0x10a8c1c0 */
  push32(0x10a8ced2u); f_10a8c1c0();
  /* 10a8ced2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8ced5:;
  /* 10a8ced5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8ced8 jmp 0x10a8cf2f */
  goto L_10a8cf2f;
L_10a8ceda:;
  /* 10a8ceda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cedd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a8cee0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cee3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8cee6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8cee9 mov edx, dword ptr [eax*4 + 0x10ab2080] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ab2080)));
  /* 10a8cef0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10a8cef5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8cef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8cefa je 0x10a8cf0b */
  if (C.zf) goto L_10a8cf0b;
  /* 10a8cefc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8ceff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a8cf02 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8cf05 jne 0x10a8cf0b */
  if (!C.zf) goto L_10a8cf0b;
  /* 10a8cf07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8cf09 jmp 0x10a8cf2f */
  goto L_10a8cf2f;
L_10a8cf0b:;
  /* 10a8cf0b call 0x10a8c260 */
  push32(0x10a8cf10u); f_10a8c260();
  /* 10a8cf10 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10a8cf16 call 0x10a8c270 */
  push32(0x10a8cf1bu); f_10a8c270();
  /* 10a8cf1b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a8cf21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8cf24 jmp 0x10a8cf2f */
  goto L_10a8cf2f;
L_10a8cf26:;
  /* 10a8cf26 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8cf29 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10a8cf2f:;
  /* 10a8cf2f mov esp, ebp */
  ESP = (EBP);
  /* 10a8cf31 pop ebp */
  EBP = (pop32());
  /* 10a8cf32 ret  */
  ESPCHK(0x10a8ccc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf40 @ 0x10a8cf40 (199 bytes, 68 insns) */
void f_10a8cf40(void) {
  FTRACE(0x10a8cf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8cf40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8cf41 mov ebp, esp */
  EBP = (ESP);
  /* 10a8cf43 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8cf44 push ebx */
  push32((uint32_t)(EBX));
  /* 10a8cf45 push esi */
  push32((uint32_t)(ESI));
  /* 10a8cf46 push edi */
  push32((uint32_t)(EDI));
L_10a8cf47:;
  /* 10a8cf47 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8cf4b jne 0x10a8cf6b */
  if (!C.zf) goto L_10a8cf6b;
  /* 10a8cf4d push 0x10aac278 */
  push32((uint32_t)(0x10aac278u));
  /* 10a8cf52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8cf54 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10a8cf56 push 0x10aac348 */
  push32((uint32_t)(0x10aac348u));
  /* 10a8cf5b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8cf5d call 0x10a83450 */
  push32(0x10a8cf62u); f_10a83450();
  /* 10a8cf62 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8cf65 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8cf68 jne 0x10a8cf6b */
  if (!C.zf) goto L_10a8cf6b;
  /* 10a8cf6a int3  */
  x86_unimpl("int3 @ 0x10a8cf6a");
L_10a8cf6b:;
  /* 10a8cf6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8cf6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8cf6f jne 0x10a8cf47 */
  if (!C.zf) goto L_10a8cf47;
  /* 10a8cf71 mov ecx, dword ptr [0x10ab08cc] */
  ECX = (r32((uint32_t)(0x10ab08cc)));
  /* 10a8cf77 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8cf7a mov dword ptr [0x10ab08cc], ecx */
  w32((uint32_t)(0x10ab08cc), (ECX));
  /* 10a8cf80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8cf83 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a8cf86 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10a8cf88 push 0x10aac348 */
  push32((uint32_t)(0x10aac348u));
  /* 10a8cf8d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8cf8f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10a8cf94 call 0x10a84390 */
  push32(0x10a8cf99u); f_10a84390();
  /* 10a8cf99 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8cf9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cf9f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10a8cfa2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cfa5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8cfa9 je 0x10a8cfc6 */
  if (C.zf) goto L_10a8cfc6;
  /* 10a8cfab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cfae mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a8cfb1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8cfb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cfb7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10a8cfba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cfbd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10a8cfc4 jmp 0x10a8cfeb */
  goto L_10a8cfeb;
L_10a8cfc6:;
  /* 10a8cfc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cfc9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a8cfcc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8cfcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cfd2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10a8cfd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cfd8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8cfdb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cfde mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10a8cfe1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cfe4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10a8cfeb:;
  /* 10a8cfeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cfee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cff1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a8cff4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a8cff6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8cff9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10a8d000 pop edi */
  EDI = (pop32());
  /* 10a8d001 pop esi */
  ESI = (pop32());
  /* 10a8d002 pop ebx */
  EBX = (pop32());
  /* 10a8d003 mov esp, ebp */
  ESP = (EBP);
  /* 10a8d005 pop ebp */
  EBP = (pop32());
  /* 10a8d006 ret  */
  ESPCHK(0x10a8cf40u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10a8d010 (50 bytes, 17 insns) */
void f_10a8d010(void) {
  FTRACE(0x10a8d010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8d010 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8d011 mov ebp, esp */
  EBP = (ESP);
  /* 10a8d013 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d016 cmp eax, dword ptr [0x10ab21bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ab21bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d01c jb 0x10a8d022 */
  if (C.cf) goto L_10a8d022;
  /* 10a8d01e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8d020 jmp 0x10a8d040 */
  goto L_10a8d040;
L_10a8d022:;
  /* 10a8d022 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d025 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a8d028 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d02b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8d02e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8d031 mov eax, dword ptr [ecx*4 + 0x10ab2080] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ab2080)));
  /* 10a8d038 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a8d03d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10a8d040:;
  /* 10a8d040 pop ebp */
  EBP = (pop32());
  /* 10a8d041 ret  */
  ESPCHK(0x10a8d010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d050 @ 0x10a8d050 (300 bytes, 80 insns) */
void f_10a8d050(void) {
  FTRACE(0x10a8d050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8d050 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8d051 mov ebp, esp */
  EBP = (ESP);
  /* 10a8d053 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8d054 cmp dword ptr [0x10ab1d80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab1d80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d05b jne 0x10a8d069 */
  if (!C.zf) goto L_10a8d069;
  /* 10a8d05d mov dword ptr [0x10ab1d80], 0x200 */
  w32((uint32_t)(0x10ab1d80), (0x200u));
  /* 10a8d067 jmp 0x10a8d07c */
  goto L_10a8d07c;
L_10a8d069:;
  /* 10a8d069 cmp dword ptr [0x10ab1d80], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10ab1d80))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d070 jge 0x10a8d07c */
  if ((C.sf==C.of)) goto L_10a8d07c;
  /* 10a8d072 mov dword ptr [0x10ab1d80], 0x14 */
  w32((uint32_t)(0x10ab1d80), (0x14u));
L_10a8d07c:;
  /* 10a8d07c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10a8d081 push 0x10aac354 */
  push32((uint32_t)(0x10aac354u));
  /* 10a8d086 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8d088 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a8d08a mov eax, dword ptr [0x10ab1d80] */
  EAX = (r32((uint32_t)(0x10ab1d80)));
  /* 10a8d08f push eax */
  push32((uint32_t)(EAX));
  /* 10a8d090 call 0x10a847a0 */
  push32(0x10a8d095u); f_10a847a0();
  /* 10a8d095 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d098 mov dword ptr [0x10ab0a40], eax */
  w32((uint32_t)(0x10ab0a40), (EAX));
  /* 10a8d09d cmp dword ptr [0x10ab0a40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d0a4 jne 0x10a8d0e5 */
  if (!C.zf) goto L_10a8d0e5;
  /* 10a8d0a6 mov dword ptr [0x10ab1d80], 0x14 */
  w32((uint32_t)(0x10ab1d80), (0x14u));
  /* 10a8d0b0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10a8d0b5 push 0x10aac354 */
  push32((uint32_t)(0x10aac354u));
  /* 10a8d0ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8d0bc push 4 */
  push32((uint32_t)(0x4u));
  /* 10a8d0be mov ecx, dword ptr [0x10ab1d80] */
  ECX = (r32((uint32_t)(0x10ab1d80)));
  /* 10a8d0c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8d0c5 call 0x10a847a0 */
  push32(0x10a8d0cau); f_10a847a0();
  /* 10a8d0ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d0cd mov dword ptr [0x10ab0a40], eax */
  w32((uint32_t)(0x10ab0a40), (EAX));
  /* 10a8d0d2 cmp dword ptr [0x10ab0a40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d0d9 jne 0x10a8d0e5 */
  if (!C.zf) goto L_10a8d0e5;
  /* 10a8d0db push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10a8d0dd call 0x10a83300 */
  push32(0x10a8d0e2u); f_10a83300();
  /* 10a8d0e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8d0e5:;
  /* 10a8d0e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a8d0ec jmp 0x10a8d0f7 */
  goto L_10a8d0f7;
L_10a8d0ee:;
  /* 10a8d0ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d0f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d0f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a8d0f7:;
  /* 10a8d0f7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d0fb jge 0x10a8d116 */
  if ((C.sf==C.of)) goto L_10a8d116;
  /* 10a8d0fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d100 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a8d103 add eax, 0x10aaf120 */
  { uint32_t _a=(EAX),_b=(0x10aaf120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d108 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d10b mov edx, dword ptr [0x10ab0a40] */
  EDX = (r32((uint32_t)(0x10ab0a40)));
  /* 10a8d111 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10a8d114 jmp 0x10a8d0ee */
  goto L_10a8d0ee;
L_10a8d116:;
  /* 10a8d116 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a8d11d jmp 0x10a8d128 */
  goto L_10a8d128;
L_10a8d11f:;
  /* 10a8d11f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d122 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d125 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a8d128:;
  /* 10a8d128 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d12c jge 0x10a8d178 */
  if ((C.sf==C.of)) goto L_10a8d178;
  /* 10a8d12e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d131 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a8d134 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d137 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8d13a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8d13d mov eax, dword ptr [ecx*4 + 0x10ab2080] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ab2080)));
  /* 10a8d144 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d148 je 0x10a8d166 */
  if (C.zf) goto L_10a8d166;
  /* 10a8d14a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d14d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a8d150 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d153 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8d156 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8d159 mov eax, dword ptr [ecx*4 + 0x10ab2080] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ab2080)));
  /* 10a8d160 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d164 jne 0x10a8d176 */
  if (!C.zf) goto L_10a8d176;
L_10a8d166:;
  /* 10a8d166 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d169 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a8d16c mov dword ptr [ecx + 0x10aaf130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10aaf130), (0xffffffffu));
L_10a8d176:;
  /* 10a8d176 jmp 0x10a8d11f */
  goto L_10a8d11f;
L_10a8d178:;
  /* 10a8d178 mov esp, ebp */
  ESP = (EBP);
  /* 10a8d17a pop ebp */
  EBP = (pop32());
  /* 10a8d17b ret  */
  ESPCHK(0x10a8d050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d180 @ 0x10a8d180 (26 bytes, 9 insns) */
void f_10a8d180(void) {
  FTRACE(0x10a8d180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8d180 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8d181 mov ebp, esp */
  EBP = (ESP);
  /* 10a8d183 call 0x10a8dd80 */
  push32(0x10a8d188u); f_10a8dd80();
  /* 10a8d188 movsx eax, byte ptr [0x10ab06e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10ab06e8))));
  /* 10a8d18f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8d191 je 0x10a8d198 */
  if (C.zf) goto L_10a8d198;
  /* 10a8d193 call 0x10a8db40 */
  push32(0x10a8d198u); f_10a8db40();
L_10a8d198:;
  /* 10a8d198 pop ebp */
  EBP = (pop32());
  /* 10a8d199 ret  */
  ESPCHK(0x10a8d180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1a0 @ 0x10a8d1a0 (61 bytes, 20 insns) */
void f_10a8d1a0(void) {
  FTRACE(0x10a8d1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8d1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8d1a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8d1a3 cmp dword ptr [ebp + 8], 0x10aaf120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10aaf120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d1aa jb 0x10a8d1ce */
  if (C.cf) goto L_10a8d1ce;
  /* 10a8d1ac cmp dword ptr [ebp + 8], 0x10aaf380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10aaf380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d1b3 ja 0x10a8d1ce */
  if ((!C.cf&&!C.zf)) goto L_10a8d1ce;
  /* 10a8d1b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d1b8 sub eax, 0x10aaf120 */
  { uint32_t _a=(EAX),_b=(0x10aaf120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8d1bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a8d1c0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d1c3 push eax */
  push32((uint32_t)(EAX));
  /* 10a8d1c4 call 0x10a87d90 */
  push32(0x10a8d1c9u); f_10a87d90();
  /* 10a8d1c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d1cc jmp 0x10a8d1db */
  goto L_10a8d1db;
L_10a8d1ce:;
  /* 10a8d1ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d1d1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d1d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8d1d5 call dword ptr [0x10ab3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3314))), 0x10a8d1dbu);
L_10a8d1db:;
  /* 10a8d1db pop ebp */
  EBP = (pop32());
  /* 10a8d1dc ret  */
  ESPCHK(0x10a8d1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1e0 @ 0x10a8d1e0 (41 bytes, 16 insns) */
void f_10a8d1e0(void) {
  FTRACE(0x10a8d1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8d1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8d1e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8d1e3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d1e7 jge 0x10a8d1fa */
  if ((C.sf==C.of)) goto L_10a8d1fa;
  /* 10a8d1e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d1ec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d1ef push eax */
  push32((uint32_t)(EAX));
  /* 10a8d1f0 call 0x10a87d90 */
  push32(0x10a8d1f5u); f_10a87d90();
  /* 10a8d1f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d1f8 jmp 0x10a8d207 */
  goto L_10a8d207;
L_10a8d1fa:;
  /* 10a8d1fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8d1fd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d200 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8d201 call dword ptr [0x10ab3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3314))), 0x10a8d207u);
L_10a8d207:;
  /* 10a8d207 pop ebp */
  EBP = (pop32());
  /* 10a8d208 ret  */
  ESPCHK(0x10a8d1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d210 @ 0x10a8d210 (61 bytes, 20 insns) */
void f_10a8d210(void) {
  FTRACE(0x10a8d210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8d210 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8d211 mov ebp, esp */
  EBP = (ESP);
  /* 10a8d213 cmp dword ptr [ebp + 8], 0x10aaf120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10aaf120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d21a jb 0x10a8d23e */
  if (C.cf) goto L_10a8d23e;
  /* 10a8d21c cmp dword ptr [ebp + 8], 0x10aaf380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10aaf380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d223 ja 0x10a8d23e */
  if ((!C.cf&&!C.zf)) goto L_10a8d23e;
  /* 10a8d225 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d228 sub eax, 0x10aaf120 */
  { uint32_t _a=(EAX),_b=(0x10aaf120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8d22d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a8d230 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d233 push eax */
  push32((uint32_t)(EAX));
  /* 10a8d234 call 0x10a87e30 */
  push32(0x10a8d239u); f_10a87e30();
  /* 10a8d239 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d23c jmp 0x10a8d24b */
  goto L_10a8d24b;
L_10a8d23e:;
  /* 10a8d23e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d241 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d244 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8d245 call dword ptr [0x10ab3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3310))), 0x10a8d24bu);
L_10a8d24b:;
  /* 10a8d24b pop ebp */
  EBP = (pop32());
  /* 10a8d24c ret  */
  ESPCHK(0x10a8d210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d250 @ 0x10a8d250 (41 bytes, 16 insns) */
void f_10a8d250(void) {
  FTRACE(0x10a8d250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8d250 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8d251 mov ebp, esp */
  EBP = (ESP);
  /* 10a8d253 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d257 jge 0x10a8d26a */
  if ((C.sf==C.of)) goto L_10a8d26a;
  /* 10a8d259 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d25c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d25f push eax */
  push32((uint32_t)(EAX));
  /* 10a8d260 call 0x10a87e30 */
  push32(0x10a8d265u); f_10a87e30();
  /* 10a8d265 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d268 jmp 0x10a8d277 */
  goto L_10a8d277;
L_10a8d26a:;
  /* 10a8d26a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8d26d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d270 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8d271 call dword ptr [0x10ab3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3310))), 0x10a8d277u);
L_10a8d277:;
  /* 10a8d277 pop ebp */
  EBP = (pop32());
  /* 10a8d278 ret  */
  ESPCHK(0x10a8d250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d280 @ 0x10a8d280 (119 bytes, 34 insns) */
void f_10a8d280(void) {
  FTRACE(0x10a8d280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8d280 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8d281 mov ebp, esp */
  EBP = (ESP);
  /* 10a8d283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8d286 push 0x10ab0a3c */
  push32((uint32_t)(0x10ab0a3cu));
  /* 10a8d28b call dword ptr [0x10ab3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3344))), 0x10a8d291u);
  /* 10a8d291 cmp dword ptr [0x10ab0a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d298 je 0x10a8d2b8 */
  if (C.zf) goto L_10a8d2b8;
  /* 10a8d29a push 0x10ab0a3c */
  push32((uint32_t)(0x10ab0a3cu));
  /* 10a8d29f call dword ptr [0x10ab3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3334))), 0x10a8d2a5u);
  /* 10a8d2a5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a8d2a7 call 0x10a87d90 */
  push32(0x10a8d2acu); f_10a87d90();
  /* 10a8d2ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d2af mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a8d2b6 jmp 0x10a8d2bf */
  goto L_10a8d2bf;
L_10a8d2b8:;
  /* 10a8d2b8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a8d2bf:;
  /* 10a8d2bf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10a8d2c3 push eax */
  push32((uint32_t)(EAX));
  /* 10a8d2c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d2c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8d2c8 call 0x10a8d300 */
  push32(0x10a8d2cdu); f_10a8d300();
  /* 10a8d2cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d2d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a8d2d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d2d7 je 0x10a8d2e5 */
  if (C.zf) goto L_10a8d2e5;
  /* 10a8d2d9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a8d2db call 0x10a87e30 */
  push32(0x10a8d2e0u); f_10a87e30();
  /* 10a8d2e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d2e3 jmp 0x10a8d2f0 */
  goto L_10a8d2f0;
L_10a8d2e5:;
  /* 10a8d2e5 push 0x10ab0a3c */
  push32((uint32_t)(0x10ab0a3cu));
  /* 10a8d2ea call dword ptr [0x10ab3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3334))), 0x10a8d2f0u);
L_10a8d2f0:;
  /* 10a8d2f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8d2f3 mov esp, ebp */
  ESP = (EBP);
  /* 10a8d2f5 pop ebp */
  EBP = (pop32());
  /* 10a8d2f6 ret  */
  ESPCHK(0x10a8d280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d300 @ 0x10a8d300 (160 bytes, 50 insns) */
void f_10a8d300(void) {
  FTRACE(0x10a8d300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8d300 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8d301 mov ebp, esp */
  EBP = (ESP);
  /* 10a8d303 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8d306 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d30a jne 0x10a8d313 */
  if (!C.zf) goto L_10a8d313;
  /* 10a8d30c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8d30e jmp 0x10a8d39c */
  goto L_10a8d39c;
L_10a8d313:;
  /* 10a8d313 cmp dword ptr [0x10ab08b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab08b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d31a jne 0x10a8d34a */
  if (!C.zf) goto L_10a8d34a;
  /* 10a8d31c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8d31f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8d324 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d329 jle 0x10a8d33b */
  if ((C.zf||C.sf!=C.of)) goto L_10a8d33b;
  /* 10a8d32b call 0x10a8c260 */
  push32(0x10a8d330u); f_10a8c260();
  /* 10a8d330 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10a8d336 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8d339 jmp 0x10a8d39c */
  goto L_10a8d39c;
L_10a8d33b:;
  /* 10a8d33b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d33e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10a8d341 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10a8d343 mov eax, 1 */
  EAX = (0x1u);
  /* 10a8d348 jmp 0x10a8d39c */
  goto L_10a8d39c;
L_10a8d34a:;
  /* 10a8d34a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a8d351 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10a8d354 push eax */
  push32((uint32_t)(EAX));
  /* 10a8d355 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8d357 mov ecx, dword ptr [0x10aaeea4] */
  ECX = (r32((uint32_t)(0x10aaeea4)));
  /* 10a8d35d push ecx */
  push32((uint32_t)(ECX));
  /* 10a8d35e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d361 push edx */
  push32((uint32_t)(EDX));
  /* 10a8d362 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8d364 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10a8d367 push eax */
  push32((uint32_t)(EAX));
  /* 10a8d368 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a8d36d mov ecx, dword ptr [0x10ab08c0] */
  ECX = (r32((uint32_t)(0x10ab08c0)));
  /* 10a8d373 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8d374 call dword ptr [0x10ab339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab339c))), 0x10a8d37au);
  /* 10a8d37a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8d37d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d381 je 0x10a8d389 */
  if (C.zf) goto L_10a8d389;
  /* 10a8d383 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d387 je 0x10a8d399 */
  if (C.zf) goto L_10a8d399;
L_10a8d389:;
  /* 10a8d389 call 0x10a8c260 */
  push32(0x10a8d38eu); f_10a8c260();
  /* 10a8d38e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10a8d394 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8d397 jmp 0x10a8d39c */
  goto L_10a8d39c;
L_10a8d399:;
  /* 10a8d399 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a8d39c:;
  /* 10a8d39c mov esp, ebp */
  ESP = (EBP);
  /* 10a8d39e pop ebp */
  EBP = (pop32());
  /* 10a8d39f ret  */
  ESPCHK(0x10a8d300u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10a8d3a0 (32 bytes, 18 insns) */
void f_10a8d3a0(void) {
  FTRACE(0x10a8d3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8d3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8d3a1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8d3a3 push ebx */
  push32((uint32_t)(EBX));
  /* 10a8d3a4 push esi */
  push32((uint32_t)(ESI));
  /* 10a8d3a5 push edi */
  push32((uint32_t)(EDI));
  /* 10a8d3a6 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8d3a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8d3a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8d3ab push 0x10a8d3b8 */
  push32((uint32_t)(0x10a8d3b8u));
  /* 10a8d3b0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10a8d3b3 call 0x10a94aec */
  push32(0x10a8d3b8u); f_10a94aec();
  /* 10a8d3b8 pop ebp */
  EBP = (pop32());
  /* 10a8d3b9 pop edi */
  EDI = (pop32());
  /* 10a8d3ba pop esi */
  ESI = (pop32());
  /* 10a8d3bb pop ebx */
  EBX = (pop32());
  /* 10a8d3bc mov esp, ebp */
  ESP = (EBP);
  /* 10a8d3be pop ebp */
  EBP = (pop32());
  /* 10a8d3bf ret  */
  ESPCHK(0x10a8d3a0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10a8d3e2 (104 bytes, 33 insns) */
void f_10a8d3e2(void) {
  FTRACE(0x10a8d3e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8d3e2 push ebx */
  push32((uint32_t)(EBX));
  /* 10a8d3e3 push esi */
  push32((uint32_t)(ESI));
  /* 10a8d3e4 push edi */
  push32((uint32_t)(EDI));
  /* 10a8d3e5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a8d3e9 push eax */
  push32((uint32_t)(EAX));
  /* 10a8d3ea push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10a8d3ec push 0x10a8d3c0 */
  push32((uint32_t)(0x10a8d3c0u));
  /* 10a8d3f1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10a8d3f8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10a8d3ff:;
  /* 10a8d3ff mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10a8d403 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a8d406 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10a8d409 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d40c je 0x10a8d43c */
  if (C.zf) goto L_10a8d43c;
  /* 10a8d40e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d412 je 0x10a8d43c */
  if (C.zf) goto L_10a8d43c;
  /* 10a8d414 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10a8d417 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10a8d41a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10a8d41e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10a8d421 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d426 jne 0x10a8d43a */
  if (!C.zf) goto L_10a8d43a;
  /* 10a8d428 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10a8d42d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10a8d431 call 0x10a8d476 */
  push32(0x10a8d436u); f_10a8d476();
  /* 10a8d436 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10a8d43au);
L_10a8d43a:;
  /* 10a8d43a jmp 0x10a8d3ff */
  goto L_10a8d3ff;
L_10a8d43c:;
  /* 10a8d43c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10a8d443 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d446 pop edi */
  EDI = (pop32());
  /* 10a8d447 pop esi */
  ESI = (pop32());
  /* 10a8d448 pop ebx */
  EBX = (pop32());
  /* 10a8d449 ret  */
  ESPCHK(0x10a8d3e2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d476 @ 0x10a8d476 (24 bytes, 10 insns) */
void f_10a8d476(void) {
  FTRACE(0x10a8d476u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8d476 push ebx */
  push32((uint32_t)(EBX));
  /* 10a8d477 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8d478 mov ebx, 0x10aaf3b8 */
  EBX = (0x10aaf3b8u);
  /* 10a8d47d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d480 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10a8d483 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10a8d486 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10a8d489 pop ecx */
  ECX = (pop32());
  /* 10a8d48a pop ebx */
  EBX = (pop32());
  /* 10a8d48b ret 4 */
  ESPCHK(0x10a8d476u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d555 @ 0x10a8d555 (27 bytes, 11 insns) */
void f_10a8d555(void) {
  FTRACE(0x10a8d555u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8d555 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8d556 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a8d55a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10a8d55c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10a8d55f push eax */
  push32((uint32_t)(EAX));
  /* 10a8d560 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a8d563 push eax */
  push32((uint32_t)(EAX));
  /* 10a8d564 call 0x10a8d3e2 */
  push32(0x10a8d569u); f_10a8d3e2();
  /* 10a8d569 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d56c pop ebp */
  EBP = (pop32());
  /* 10a8d56d ret 4 */
  ESPCHK(0x10a8d555u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d570 @ 0x10a8d570 (482 bytes, 138 insns) */
void f_10a8d570(void) {
  FTRACE(0x10a8d570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8d570 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8d571 mov ebp, esp */
  EBP = (ESP);
  /* 10a8d573 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8d576 push esi */
  push32((uint32_t)(ESI));
  /* 10a8d577 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10a8d57e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10a8d580 call 0x10a87d90 */
  push32(0x10a8d585u); f_10a87d90();
  /* 10a8d585 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d588 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a8d58f jmp 0x10a8d59a */
  goto L_10a8d59a;
L_10a8d591:;
  /* 10a8d591 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8d594 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d597 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a8d59a:;
  /* 10a8d59a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d59e jge 0x10a8d740 */
  if ((C.sf==C.of)) goto L_10a8d740;
  /* 10a8d5a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8d5a7 cmp dword ptr [ecx*4 + 0x10ab2080], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10ab2080))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d5af je 0x10a8d6a6 */
  if (C.zf) goto L_10a8d6a6;
  /* 10a8d5b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8d5b8 mov eax, dword ptr [edx*4 + 0x10ab2080] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10ab2080)));
  /* 10a8d5bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8d5c2 jmp 0x10a8d5cd */
  goto L_10a8d5cd;
L_10a8d5c4:;
  /* 10a8d5c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d5c7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d5ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a8d5cd:;
  /* 10a8d5cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8d5d0 mov eax, dword ptr [edx*4 + 0x10ab2080] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10ab2080)));
  /* 10a8d5d7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d5dc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d5df jae 0x10a8d696 */
  if (!C.cf) goto L_10a8d696;
  /* 10a8d5e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d5e8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a8d5ec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8d5ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8d5f1 jne 0x10a8d691 */
  if (!C.zf) goto L_10a8d691;
  /* 10a8d5f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d5fa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d5fe jne 0x10a8d639 */
  if (!C.zf) goto L_10a8d639;
  /* 10a8d600 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a8d602 call 0x10a87d90 */
  push32(0x10a8d607u); f_10a87d90();
  /* 10a8d607 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d60a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d60d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d611 jne 0x10a8d62f */
  if (!C.zf) goto L_10a8d62f;
  /* 10a8d613 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d616 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d619 push edx */
  push32((uint32_t)(EDX));
  /* 10a8d61a call dword ptr [0x10ab336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab336c))), 0x10a8d620u);
  /* 10a8d620 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d623 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a8d626 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d629 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d62c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10a8d62f:;
  /* 10a8d62f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a8d631 call 0x10a87e30 */
  push32(0x10a8d636u); f_10a87e30();
  /* 10a8d636 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8d639:;
  /* 10a8d639 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d63c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d63f push eax */
  push32((uint32_t)(EAX));
  /* 10a8d640 call dword ptr [0x10ab3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3314))), 0x10a8d646u);
  /* 10a8d646 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d649 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10a8d64d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8d650 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8d652 je 0x10a8d666 */
  if (C.zf) goto L_10a8d666;
  /* 10a8d654 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d657 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d65a push eax */
  push32((uint32_t)(EAX));
  /* 10a8d65b call dword ptr [0x10ab3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3310))), 0x10a8d661u);
  /* 10a8d661 jmp 0x10a8d5c4 */
  goto L_10a8d5c4;
L_10a8d666:;
  /* 10a8d666 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d669 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10a8d66f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8d672 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a8d675 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8d678 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d67b sub eax, dword ptr [edx*4 + 0x10ab2080] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10ab2080))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8d682 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a8d683 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10a8d688 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a8d68a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d68c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8d68f jmp 0x10a8d696 */
  goto L_10a8d696;
L_10a8d691:;
  /* 10a8d691 jmp 0x10a8d5c4 */
  goto L_10a8d5c4;
L_10a8d696:;
  /* 10a8d696 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d69a je 0x10a8d6a1 */
  if (C.zf) goto L_10a8d6a1;
  /* 10a8d69c jmp 0x10a8d740 */
  goto L_10a8d740;
L_10a8d6a1:;
  /* 10a8d6a1 jmp 0x10a8d73b */
  goto L_10a8d73b;
L_10a8d6a6:;
  /* 10a8d6a6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10a8d6a8 push 0x10aac35c */
  push32((uint32_t)(0x10aac35cu));
  /* 10a8d6ad push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8d6af push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10a8d6b4 call 0x10a84390 */
  push32(0x10a8d6b9u); f_10a84390();
  /* 10a8d6b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d6bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8d6bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d6c3 je 0x10a8d739 */
  if (C.zf) goto L_10a8d739;
  /* 10a8d6c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8d6c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d6cb mov dword ptr [eax*4 + 0x10ab2080], ecx */
  w32((uint32_t)(EAX*4 + 0x10ab2080), (ECX));
  /* 10a8d6d2 mov edx, dword ptr [0x10ab21bc] */
  EDX = (r32((uint32_t)(0x10ab21bc)));
  /* 10a8d6d8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d6db mov dword ptr [0x10ab21bc], edx */
  w32((uint32_t)(0x10ab21bc), (EDX));
  /* 10a8d6e1 jmp 0x10a8d6ec */
  goto L_10a8d6ec;
L_10a8d6e3:;
  /* 10a8d6e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d6e6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d6e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a8d6ec:;
  /* 10a8d6ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8d6ef mov edx, dword ptr [ecx*4 + 0x10ab2080] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10ab2080)));
  /* 10a8d6f6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d6fc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d6ff jae 0x10a8d724 */
  if (!C.cf) goto L_10a8d724;
  /* 10a8d701 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d704 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10a8d708 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d70b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10a8d711 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d714 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10a8d718 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8d71b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10a8d722 jmp 0x10a8d6e3 */
  goto L_10a8d6e3;
L_10a8d724:;
  /* 10a8d724 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8d727 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a8d72a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8d72d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8d730 push edx */
  push32((uint32_t)(EDX));
  /* 10a8d731 call 0x10a8da80 */
  push32(0x10a8d736u); f_10a8da80();
  /* 10a8d736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8d739:;
  /* 10a8d739 jmp 0x10a8d740 */
  goto L_10a8d740;
L_10a8d73b:;
  /* 10a8d73b jmp 0x10a8d591 */
  goto L_10a8d591;
L_10a8d740:;
  /* 10a8d740 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10a8d742 call 0x10a87e30 */
  push32(0x10a8d747u); f_10a87e30();
  /* 10a8d747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d74a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8d74d pop esi */
  ESI = (pop32());
  /* 10a8d74e mov esp, ebp */
  ESP = (EBP);
  /* 10a8d750 pop ebp */
  EBP = (pop32());
  /* 10a8d751 ret  */
  ESPCHK(0x10a8d570u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10a8d760 (183 bytes, 57 insns) */
void f_10a8d760(void) {
  FTRACE(0x10a8d760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8d760 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8d761 mov ebp, esp */
  EBP = (ESP);
  /* 10a8d763 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8d764 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d767 cmp eax, dword ptr [0x10ab21bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ab21bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d76d jae 0x10a8d7fa */
  if (!C.cf) goto L_10a8d7fa;
  /* 10a8d773 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d776 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a8d779 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d77c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8d77f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8d782 mov eax, dword ptr [ecx*4 + 0x10ab2080] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ab2080)));
  /* 10a8d789 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d78d jne 0x10a8d7fa */
  if (!C.zf) goto L_10a8d7fa;
  /* 10a8d78f cmp dword ptr [0x10ab06a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d796 jne 0x10a8d7da */
  if (!C.zf) goto L_10a8d7da;
  /* 10a8d798 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d79b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a8d79e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d7a2 je 0x10a8d7b2 */
  if (C.zf) goto L_10a8d7b2;
  /* 10a8d7a4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d7a8 je 0x10a8d7c0 */
  if (C.zf) goto L_10a8d7c0;
  /* 10a8d7aa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d7ae je 0x10a8d7ce */
  if (C.zf) goto L_10a8d7ce;
  /* 10a8d7b0 jmp 0x10a8d7da */
  goto L_10a8d7da;
L_10a8d7b2:;
  /* 10a8d7b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8d7b5 push edx */
  push32((uint32_t)(EDX));
  /* 10a8d7b6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10a8d7b8 call dword ptr [0x10ab32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32dc))), 0x10a8d7beu);
  /* 10a8d7be jmp 0x10a8d7da */
  goto L_10a8d7da;
L_10a8d7c0:;
  /* 10a8d7c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8d7c3 push eax */
  push32((uint32_t)(EAX));
  /* 10a8d7c4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10a8d7c6 call dword ptr [0x10ab32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32dc))), 0x10a8d7ccu);
  /* 10a8d7cc jmp 0x10a8d7da */
  goto L_10a8d7da;
L_10a8d7ce:;
  /* 10a8d7ce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8d7d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8d7d2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10a8d7d4 call dword ptr [0x10ab32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32dc))), 0x10a8d7dau);
L_10a8d7da:;
  /* 10a8d7da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d7dd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10a8d7e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d7e3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8d7e6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8d7e9 mov ecx, dword ptr [edx*4 + 0x10ab2080] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10ab2080)));
  /* 10a8d7f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8d7f3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10a8d7f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8d7f8 jmp 0x10a8d813 */
  goto L_10a8d813;
L_10a8d7fa:;
  /* 10a8d7fa call 0x10a8c260 */
  push32(0x10a8d7ffu); f_10a8c260();
  /* 10a8d7ff mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a8d805 call 0x10a8c270 */
  push32(0x10a8d80au); f_10a8c270();
  /* 10a8d80a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a8d810 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a8d813:;
  /* 10a8d813 mov esp, ebp */
  ESP = (EBP);
  /* 10a8d815 pop ebp */
  EBP = (pop32());
  /* 10a8d816 ret  */
  ESPCHK(0x10a8d760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d820 @ 0x10a8d820 (216 bytes, 63 insns) */
void f_10a8d820(void) {
  FTRACE(0x10a8d820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8d820 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8d821 mov ebp, esp */
  EBP = (ESP);
  /* 10a8d823 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8d824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d827 cmp eax, dword ptr [0x10ab21bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ab21bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d82d jae 0x10a8d8db */
  if (!C.cf) goto L_10a8d8db;
  /* 10a8d833 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d836 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a8d839 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d83c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8d83f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8d842 mov eax, dword ptr [ecx*4 + 0x10ab2080] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ab2080)));
  /* 10a8d849 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a8d84e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8d851 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8d853 je 0x10a8d8db */
  if (C.zf) goto L_10a8d8db;
  /* 10a8d859 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d85c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10a8d85f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d862 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8d865 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8d868 mov ecx, dword ptr [edx*4 + 0x10ab2080] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10ab2080)));
  /* 10a8d86f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d873 je 0x10a8d8db */
  if (C.zf) goto L_10a8d8db;
  /* 10a8d875 cmp dword ptr [0x10ab06a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ab06a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d87c jne 0x10a8d8ba */
  if (!C.zf) goto L_10a8d8ba;
  /* 10a8d87e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d881 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a8d884 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d888 je 0x10a8d898 */
  if (C.zf) goto L_10a8d898;
  /* 10a8d88a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d88e je 0x10a8d8a4 */
  if (C.zf) goto L_10a8d8a4;
  /* 10a8d890 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d894 je 0x10a8d8b0 */
  if (C.zf) goto L_10a8d8b0;
  /* 10a8d896 jmp 0x10a8d8ba */
  goto L_10a8d8ba;
L_10a8d898:;
  /* 10a8d898 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8d89a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10a8d89c call dword ptr [0x10ab32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32dc))), 0x10a8d8a2u);
  /* 10a8d8a2 jmp 0x10a8d8ba */
  goto L_10a8d8ba;
L_10a8d8a4:;
  /* 10a8d8a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8d8a6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10a8d8a8 call dword ptr [0x10ab32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32dc))), 0x10a8d8aeu);
  /* 10a8d8ae jmp 0x10a8d8ba */
  goto L_10a8d8ba;
L_10a8d8b0:;
  /* 10a8d8b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8d8b2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10a8d8b4 call dword ptr [0x10ab32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32dc))), 0x10a8d8bau);
L_10a8d8ba:;
  /* 10a8d8ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d8bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a8d8c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d8c3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8d8c6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8d8c9 mov edx, dword ptr [eax*4 + 0x10ab2080] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ab2080)));
  /* 10a8d8d0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10a8d8d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8d8d9 jmp 0x10a8d8f4 */
  goto L_10a8d8f4;
L_10a8d8db:;
  /* 10a8d8db call 0x10a8c260 */
  push32(0x10a8d8e0u); f_10a8c260();
  /* 10a8d8e0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a8d8e6 call 0x10a8c270 */
  push32(0x10a8d8ebu); f_10a8c270();
  /* 10a8d8eb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a8d8f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a8d8f4:;
  /* 10a8d8f4 mov esp, ebp */
  ESP = (EBP);
  /* 10a8d8f6 pop ebp */
  EBP = (pop32());
  /* 10a8d8f7 ret  */
  ESPCHK(0x10a8d820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d900 @ 0x10a8d900 (102 bytes, 30 insns) */
void f_10a8d900(void) {
  FTRACE(0x10a8d900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8d900 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8d901 mov ebp, esp */
  EBP = (ESP);
  /* 10a8d903 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d906 cmp eax, dword ptr [0x10ab21bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ab21bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d90c jae 0x10a8d94b */
  if (!C.cf) goto L_10a8d94b;
  /* 10a8d90e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d911 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a8d914 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d917 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8d91a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8d91d mov eax, dword ptr [ecx*4 + 0x10ab2080] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ab2080)));
  /* 10a8d924 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a8d929 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8d92c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8d92e je 0x10a8d94b */
  if (C.zf) goto L_10a8d94b;
  /* 10a8d930 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d933 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10a8d936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d939 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8d93c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8d93f mov ecx, dword ptr [edx*4 + 0x10ab2080] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10ab2080)));
  /* 10a8d946 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10a8d949 jmp 0x10a8d964 */
  goto L_10a8d964;
L_10a8d94b:;
  /* 10a8d94b call 0x10a8c260 */
  push32(0x10a8d950u); f_10a8c260();
  /* 10a8d950 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a8d956 call 0x10a8c270 */
  push32(0x10a8d95bu); f_10a8c270();
  /* 10a8d95b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a8d961 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a8d964:;
  /* 10a8d964 pop ebp */
  EBP = (pop32());
  /* 10a8d965 ret  */
  ESPCHK(0x10a8d900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d970 @ 0x10a8d970 (260 bytes, 83 insns) */
void f_10a8d970(void) {
  FTRACE(0x10a8d970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8d970 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8d971 mov ebp, esp */
  EBP = (ESP);
  /* 10a8d973 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8d976 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a8d97a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8d97d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8d980 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8d982 je 0x10a8d98d */
  if (C.zf) goto L_10a8d98d;
  /* 10a8d984 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a8d987 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10a8d98a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10a8d98d:;
  /* 10a8d98d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8d990 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8d996 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8d998 je 0x10a8d9a2 */
  if (C.zf) goto L_10a8d9a2;
  /* 10a8d99a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a8d99d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10a8d99f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10a8d9a2:;
  /* 10a8d9a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8d9a5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8d9ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8d9ad je 0x10a8d9b8 */
  if (C.zf) goto L_10a8d9b8;
  /* 10a8d9af mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a8d9b2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10a8d9b5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10a8d9b8:;
  /* 10a8d9b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8d9bb push eax */
  push32((uint32_t)(EAX));
  /* 10a8d9bc call dword ptr [0x10ab337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab337c))), 0x10a8d9c2u);
  /* 10a8d9c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8d9c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d9c9 jne 0x10a8d9e2 */
  if (!C.zf) goto L_10a8d9e2;
  /* 10a8d9cb call dword ptr [0x10ab3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3370))), 0x10a8d9d1u);
  /* 10a8d9d1 push eax */
  push32((uint32_t)(EAX));
  /* 10a8d9d2 call 0x10a8c1c0 */
  push32(0x10a8d9d7u); f_10a8c1c0();
  /* 10a8d9d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8d9da or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8d9dd jmp 0x10a8da70 */
  goto L_10a8da70;
L_10a8d9e2:;
  /* 10a8d9e2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d9e6 jne 0x10a8d9f3 */
  if (!C.zf) goto L_10a8d9f3;
  /* 10a8d9e8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a8d9eb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10a8d9ee mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10a8d9f1 jmp 0x10a8da02 */
  goto L_10a8da02;
L_10a8d9f3:;
  /* 10a8d9f3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8d9f7 jne 0x10a8da02 */
  if (!C.zf) goto L_10a8da02;
  /* 10a8d9f9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a8d9fc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10a8d9ff mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10a8da02:;
  /* 10a8da02 call 0x10a8d570 */
  push32(0x10a8da07u); f_10a8d570();
  /* 10a8da07 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a8da0a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8da0e jne 0x10a8da2b */
  if (!C.zf) goto L_10a8da2b;
  /* 10a8da10 call 0x10a8c260 */
  push32(0x10a8da15u); f_10a8c260();
  /* 10a8da15 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10a8da1b call 0x10a8c270 */
  push32(0x10a8da20u); f_10a8c270();
  /* 10a8da20 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a8da26 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8da29 jmp 0x10a8da70 */
  goto L_10a8da70;
L_10a8da2b:;
  /* 10a8da2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8da2e push eax */
  push32((uint32_t)(EAX));
  /* 10a8da2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8da32 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8da33 call 0x10a8d760 */
  push32(0x10a8da38u); f_10a8d760();
  /* 10a8da38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8da3b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a8da3e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10a8da41 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10a8da44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8da47 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a8da4a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8da4d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8da50 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8da53 mov edx, dword ptr [eax*4 + 0x10ab2080] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ab2080)));
  /* 10a8da5a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a8da5d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10a8da61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8da64 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8da65 call 0x10a8db10 */
  push32(0x10a8da6au); f_10a8db10();
  /* 10a8da6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8da6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a8da70:;
  /* 10a8da70 mov esp, ebp */
  ESP = (EBP);
  /* 10a8da72 pop ebp */
  EBP = (pop32());
  /* 10a8da73 ret  */
  ESPCHK(0x10a8d970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da80 @ 0x10a8da80 (134 bytes, 44 insns) */
void f_10a8da80(void) {
  FTRACE(0x10a8da80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8da80 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8da81 mov ebp, esp */
  EBP = (ESP);
  /* 10a8da83 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8da84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8da87 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a8da8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8da8d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8da90 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8da93 mov edx, dword ptr [eax*4 + 0x10ab2080] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ab2080)));
  /* 10a8da9a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8da9c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a8da9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8daa2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8daa6 jne 0x10a8dae1 */
  if (!C.zf) goto L_10a8dae1;
  /* 10a8daa8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a8daaa call 0x10a87d90 */
  push32(0x10a8daafu); f_10a87d90();
  /* 10a8daaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8dab2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8dab5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8dab9 jne 0x10a8dad7 */
  if (!C.zf) goto L_10a8dad7;
  /* 10a8dabb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8dabe add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8dac1 push edx */
  push32((uint32_t)(EDX));
  /* 10a8dac2 call dword ptr [0x10ab336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab336c))), 0x10a8dac8u);
  /* 10a8dac8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8dacb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a8dace add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8dad1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8dad4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10a8dad7:;
  /* 10a8dad7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10a8dad9 call 0x10a87e30 */
  push32(0x10a8dadeu); f_10a87e30();
  /* 10a8dade add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8dae1:;
  /* 10a8dae1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8dae4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a8dae7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8daea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8daed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8daf0 mov edx, dword ptr [eax*4 + 0x10ab2080] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ab2080)));
  /* 10a8daf7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10a8dafb push eax */
  push32((uint32_t)(EAX));
  /* 10a8dafc call dword ptr [0x10ab3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3314))), 0x10a8db02u);
  /* 10a8db02 mov esp, ebp */
  ESP = (EBP);
  /* 10a8db04 pop ebp */
  EBP = (pop32());
  /* 10a8db05 ret  */
  ESPCHK(0x10a8da80u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10a8db10 (38 bytes, 13 insns) */
void f_10a8db10(void) {
  FTRACE(0x10a8db10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8db10 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8db11 mov ebp, esp */
  EBP = (ESP);
  /* 10a8db13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8db16 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a8db19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8db1c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8db1f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8db22 mov edx, dword ptr [eax*4 + 0x10ab2080] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ab2080)));
  /* 10a8db29 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10a8db2d push eax */
  push32((uint32_t)(EAX));
  /* 10a8db2e call dword ptr [0x10ab3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3310))), 0x10a8db34u);
  /* 10a8db34 pop ebp */
  EBP = (pop32());
  /* 10a8db35 ret  */
  ESPCHK(0x10a8db10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db40 @ 0x10a8db40 (218 bytes, 63 insns) */
void f_10a8db40(void) {
  FTRACE(0x10a8db40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8db40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8db41 mov ebp, esp */
  EBP = (ESP);
  /* 10a8db43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8db46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a8db4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8db4f call 0x10a87d90 */
  push32(0x10a8db54u); f_10a87d90();
  /* 10a8db54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8db57 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10a8db5e jmp 0x10a8db69 */
  goto L_10a8db69;
L_10a8db60:;
  /* 10a8db60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8db63 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8db66 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a8db69:;
  /* 10a8db69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8db6c cmp ecx, dword ptr [0x10ab1d80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ab1d80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8db72 jge 0x10a8dc09 */
  if ((C.sf==C.of)) goto L_10a8dc09;
  /* 10a8db78 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8db7b mov eax, dword ptr [0x10ab0a40] */
  EAX = (r32((uint32_t)(0x10ab0a40)));
  /* 10a8db80 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8db84 je 0x10a8dc04 */
  if (C.zf) goto L_10a8dc04;
  /* 10a8db86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8db89 mov edx, dword ptr [0x10ab0a40] */
  EDX = (r32((uint32_t)(0x10ab0a40)));
  /* 10a8db8f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10a8db92 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a8db95 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8db9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8db9d je 0x10a8dbc1 */
  if (C.zf) goto L_10a8dbc1;
  /* 10a8db9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8dba2 mov eax, dword ptr [0x10ab0a40] */
  EAX = (r32((uint32_t)(0x10ab0a40)));
  /* 10a8dba7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10a8dbaa push ecx */
  push32((uint32_t)(ECX));
  /* 10a8dbab call 0x10a8e930 */
  push32(0x10a8dbb0u); f_10a8e930();
  /* 10a8dbb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8dbb3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8dbb6 je 0x10a8dbc1 */
  if (C.zf) goto L_10a8dbc1;
  /* 10a8dbb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8dbbb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8dbbe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a8dbc1:;
  /* 10a8dbc1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8dbc5 jl 0x10a8dc04 */
  if ((C.sf!=C.of)) goto L_10a8dc04;
  /* 10a8dbc7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8dbca mov ecx, dword ptr [0x10ab0a40] */
  ECX = (r32((uint32_t)(0x10ab0a40)));
  /* 10a8dbd0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a8dbd3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8dbd6 push edx */
  push32((uint32_t)(EDX));
  /* 10a8dbd7 call dword ptr [0x10ab3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3384))), 0x10a8dbddu);
  /* 10a8dbdd push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8dbdf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8dbe2 mov ecx, dword ptr [0x10ab0a40] */
  ECX = (r32((uint32_t)(0x10ab0a40)));
  /* 10a8dbe8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a8dbeb push edx */
  push32((uint32_t)(EDX));
  /* 10a8dbec call 0x10a84e20 */
  push32(0x10a8dbf1u); f_10a84e20();
  /* 10a8dbf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8dbf4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8dbf7 mov ecx, dword ptr [0x10ab0a40] */
  ECX = (r32((uint32_t)(0x10ab0a40)));
  /* 10a8dbfd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10a8dc04:;
  /* 10a8dc04 jmp 0x10a8db60 */
  goto L_10a8db60;
L_10a8dc09:;
  /* 10a8dc09 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8dc0b call 0x10a87e30 */
  push32(0x10a8dc10u); f_10a87e30();
  /* 10a8dc10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8dc13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8dc16 mov esp, ebp */
  ESP = (EBP);
  /* 10a8dc18 pop ebp */
  EBP = (pop32());
  /* 10a8dc19 ret  */
  ESPCHK(0x10a8db40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc20 @ 0x10a8dc20 (68 bytes, 26 insns) */
void f_10a8dc20(void) {
  FTRACE(0x10a8dc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8dc20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8dc21 mov ebp, esp */
  EBP = (ESP);
  /* 10a8dc23 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8dc24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8dc28 jne 0x10a8dc36 */
  if (!C.zf) goto L_10a8dc36;
  /* 10a8dc2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8dc2c call 0x10a8dd90 */
  push32(0x10a8dc31u); f_10a8dd90();
  /* 10a8dc31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8dc34 jmp 0x10a8dc60 */
  goto L_10a8dc60;
L_10a8dc36:;
  /* 10a8dc36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8dc39 push eax */
  push32((uint32_t)(EAX));
  /* 10a8dc3a call 0x10a8d1a0 */
  push32(0x10a8dc3fu); f_10a8d1a0();
  /* 10a8dc3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8dc42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8dc45 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8dc46 call 0x10a8dc70 */
  push32(0x10a8dc4bu); f_10a8dc70();
  /* 10a8dc4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8dc4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8dc51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8dc54 push edx */
  push32((uint32_t)(EDX));
  /* 10a8dc55 call 0x10a8d210 */
  push32(0x10a8dc5au); f_10a8d210();
  /* 10a8dc5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8dc5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a8dc60:;
  /* 10a8dc60 mov esp, ebp */
  ESP = (EBP);
  /* 10a8dc62 pop ebp */
  EBP = (pop32());
  /* 10a8dc63 ret  */
  ESPCHK(0x10a8dc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc70 @ 0x10a8dc70 (65 bytes, 26 insns) */
void f_10a8dc70(void) {
  FTRACE(0x10a8dc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8dc70 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8dc71 mov ebp, esp */
  EBP = (ESP);
  /* 10a8dc73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8dc76 push eax */
  push32((uint32_t)(EAX));
  /* 10a8dc77 call 0x10a8dcc0 */
  push32(0x10a8dc7cu); f_10a8dcc0();
  /* 10a8dc7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8dc7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8dc81 je 0x10a8dc88 */
  if (C.zf) goto L_10a8dc88;
  /* 10a8dc83 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8dc86 jmp 0x10a8dcaf */
  goto L_10a8dcaf;
L_10a8dc88:;
  /* 10a8dc88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8dc8b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a8dc8e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8dc94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8dc96 je 0x10a8dcad */
  if (C.zf) goto L_10a8dcad;
  /* 10a8dc98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8dc9b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a8dc9e push ecx */
  push32((uint32_t)(ECX));
  /* 10a8dc9f call 0x10a8ea80 */
  push32(0x10a8dca4u); f_10a8ea80();
  /* 10a8dca4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8dca7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a8dca9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8dcab jmp 0x10a8dcaf */
  goto L_10a8dcaf;
L_10a8dcad:;
  /* 10a8dcad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a8dcaf:;
  /* 10a8dcaf pop ebp */
  EBP = (pop32());
  /* 10a8dcb0 ret  */
  ESPCHK(0x10a8dc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcc0 @ 0x10a8dcc0 (183 bytes, 62 insns) */
void f_10a8dcc0(void) {
  FTRACE(0x10a8dcc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8dcc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8dcc1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8dcc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8dcc6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a8dccd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8dcd0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a8dcd3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8dcd6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a8dcd9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8dcdc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8dcdf jne 0x10a8dd5b */
  if (!C.zf) goto L_10a8dd5b;
  /* 10a8dce1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8dce4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a8dce7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8dced test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8dcef je 0x10a8dd5b */
  if (C.zf) goto L_10a8dd5b;
  /* 10a8dcf1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8dcf4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8dcf7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10a8dcf9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8dcfc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8dcff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8dd03 jle 0x10a8dd5b */
  if ((C.zf||C.sf!=C.of)) goto L_10a8dd5b;
  /* 10a8dd05 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8dd08 push edx */
  push32((uint32_t)(EDX));
  /* 10a8dd09 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8dd0c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a8dd0f push ecx */
  push32((uint32_t)(ECX));
  /* 10a8dd10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8dd13 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10a8dd16 push eax */
  push32((uint32_t)(EAX));
  /* 10a8dd17 call 0x10a8cc30 */
  push32(0x10a8dd1cu); f_10a8cc30();
  /* 10a8dd1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8dd1f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8dd22 jne 0x10a8dd45 */
  if (!C.zf) goto L_10a8dd45;
  /* 10a8dd24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8dd27 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a8dd2a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8dd30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8dd32 je 0x10a8dd43 */
  if (C.zf) goto L_10a8dd43;
  /* 10a8dd34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8dd37 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a8dd3a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8dd3d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8dd40 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10a8dd43:;
  /* 10a8dd43 jmp 0x10a8dd5b */
  goto L_10a8dd5b;
L_10a8dd45:;
  /* 10a8dd45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8dd48 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a8dd4b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8dd4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8dd51 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10a8dd54 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a8dd5b:;
  /* 10a8dd5b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8dd5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8dd61 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a8dd64 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a8dd66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8dd69 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10a8dd70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8dd73 mov esp, ebp */
  ESP = (EBP);
  /* 10a8dd75 pop ebp */
  EBP = (pop32());
  /* 10a8dd76 ret  */
  ESPCHK(0x10a8dcc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd80 @ 0x10a8dd80 (15 bytes, 7 insns) */
void f_10a8dd80(void) {
  FTRACE(0x10a8dd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8dd80 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8dd81 mov ebp, esp */
  EBP = (ESP);
  /* 10a8dd83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8dd85 call 0x10a8dd90 */
  push32(0x10a8dd8au); f_10a8dd90();
  /* 10a8dd8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8dd8d pop ebp */
  EBP = (pop32());
  /* 10a8dd8e ret  */
  ESPCHK(0x10a8dd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd90 @ 0x10a8dd90 (319 bytes, 94 insns) */
void f_10a8dd90(void) {
  FTRACE(0x10a8dd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8dd90 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8dd91 mov ebp, esp */
  EBP = (ESP);
  /* 10a8dd93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8dd96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a8dd9d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a8dda4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8dda6 call 0x10a87d90 */
  push32(0x10a8ddabu); f_10a87d90();
  /* 10a8ddab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ddae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a8ddb5 jmp 0x10a8ddc0 */
  goto L_10a8ddc0;
L_10a8ddb7:;
  /* 10a8ddb7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ddba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ddbd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a8ddc0:;
  /* 10a8ddc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ddc3 cmp ecx, dword ptr [0x10ab1d80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ab1d80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ddc9 jge 0x10a8deb3 */
  if ((C.sf==C.of)) goto L_10a8deb3;
  /* 10a8ddcf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ddd2 mov eax, dword ptr [0x10ab0a40] */
  EAX = (r32((uint32_t)(0x10ab0a40)));
  /* 10a8ddd7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8dddb je 0x10a8deae */
  if (C.zf) goto L_10a8deae;
  /* 10a8dde1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8dde4 mov edx, dword ptr [0x10ab0a40] */
  EDX = (r32((uint32_t)(0x10ab0a40)));
  /* 10a8ddea mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10a8dded mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a8ddf0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ddf6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8ddf8 je 0x10a8deae */
  if (C.zf) goto L_10a8deae;
  /* 10a8ddfe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8de01 mov eax, dword ptr [0x10ab0a40] */
  EAX = (r32((uint32_t)(0x10ab0a40)));
  /* 10a8de06 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10a8de09 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8de0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8de0d push edx */
  push32((uint32_t)(EDX));
  /* 10a8de0e call 0x10a8d1e0 */
  push32(0x10a8de13u); f_10a8d1e0();
  /* 10a8de13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8de16 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8de19 mov ecx, dword ptr [0x10ab0a40] */
  ECX = (r32((uint32_t)(0x10ab0a40)));
  /* 10a8de1f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a8de22 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a8de25 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8de2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8de2c je 0x10a8de95 */
  if (C.zf) goto L_10a8de95;
  /* 10a8de2e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8de32 jne 0x10a8de59 */
  if (!C.zf) goto L_10a8de59;
  /* 10a8de34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8de37 mov edx, dword ptr [0x10ab0a40] */
  EDX = (r32((uint32_t)(0x10ab0a40)));
  /* 10a8de3d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10a8de40 push eax */
  push32((uint32_t)(EAX));
  /* 10a8de41 call 0x10a8dc70 */
  push32(0x10a8de46u); f_10a8dc70();
  /* 10a8de46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8de49 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8de4c je 0x10a8de57 */
  if (C.zf) goto L_10a8de57;
  /* 10a8de4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8de51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8de54 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a8de57:;
  /* 10a8de57 jmp 0x10a8de95 */
  goto L_10a8de95;
L_10a8de59:;
  /* 10a8de59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8de5d jne 0x10a8de95 */
  if (!C.zf) goto L_10a8de95;
  /* 10a8de5f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8de62 mov eax, dword ptr [0x10ab0a40] */
  EAX = (r32((uint32_t)(0x10ab0a40)));
  /* 10a8de67 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10a8de6a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a8de6d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8de70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8de72 je 0x10a8de95 */
  if (C.zf) goto L_10a8de95;
  /* 10a8de74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8de77 mov ecx, dword ptr [0x10ab0a40] */
  ECX = (r32((uint32_t)(0x10ab0a40)));
  /* 10a8de7d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a8de80 push edx */
  push32((uint32_t)(EDX));
  /* 10a8de81 call 0x10a8dc70 */
  push32(0x10a8de86u); f_10a8dc70();
  /* 10a8de86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8de89 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8de8c jne 0x10a8de95 */
  if (!C.zf) goto L_10a8de95;
  /* 10a8de8e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10a8de95:;
  /* 10a8de95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8de98 mov ecx, dword ptr [0x10ab0a40] */
  ECX = (r32((uint32_t)(0x10ab0a40)));
  /* 10a8de9e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a8dea1 push edx */
  push32((uint32_t)(EDX));
  /* 10a8dea2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8dea5 push eax */
  push32((uint32_t)(EAX));
  /* 10a8dea6 call 0x10a8d250 */
  push32(0x10a8deabu); f_10a8d250();
  /* 10a8deab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8deae:;
  /* 10a8deae jmp 0x10a8ddb7 */
  goto L_10a8ddb7;
L_10a8deb3:;
  /* 10a8deb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8deb5 call 0x10a87e30 */
  push32(0x10a8debau); f_10a87e30();
  /* 10a8deba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8debd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8dec1 jne 0x10a8dec8 */
  if (!C.zf) goto L_10a8dec8;
  /* 10a8dec3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8dec6 jmp 0x10a8decb */
  goto L_10a8decb;
L_10a8dec8:;
  /* 10a8dec8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a8decb:;
  /* 10a8decb mov esp, ebp */
  ESP = (EBP);
  /* 10a8decd pop ebp */
  EBP = (pop32());
  /* 10a8dece ret  */
  ESPCHK(0x10a8dd90u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10a8ded0 (15 bytes, 7 insns) */
void f_10a8ded0(void) {
  FTRACE(0x10a8ded0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8ded0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8ded1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8ded3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8ded5 call 0x10a83300 */
  push32(0x10a8dedau); f_10a83300();
  /* 10a8deda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8dedd pop ebp */
  EBP = (pop32());
  /* 10a8dede ret  */
  ESPCHK(0x10a8ded0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dee0 @ 0x10a8dee0 (1007 bytes, 269 insns) */
void f_10a8dee0(void) {
  FTRACE(0x10a8dee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8dee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8dee1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8dee3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8dee9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8deed jl 0x10a8def5 */
  if ((C.sf!=C.of)) goto L_10a8def5;
  /* 10a8deef cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8def3 jle 0x10a8defc */
  if ((C.zf||C.sf!=C.of)) goto L_10a8defc;
L_10a8def5:;
  /* 10a8def5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8def7 jmp 0x10a8e2cb */
  goto L_10a8e2cb;
L_10a8defc:;
  /* 10a8defc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a8defe call 0x10a87d90 */
  push32(0x10a8df03u); f_10a87d90();
  /* 10a8df03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8df06 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a8df0d mov eax, dword ptr [0x10ab0a2c] */
  EAX = (r32((uint32_t)(0x10ab0a2c)));
  /* 10a8df12 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8df15 mov dword ptr [0x10ab0a2c], eax */
  w32((uint32_t)(0x10ab0a2c), (EAX));
L_10a8df1a:;
  /* 10a8df1a cmp dword ptr [0x10ab0a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8df21 je 0x10a8df2d */
  if (C.zf) goto L_10a8df2d;
  /* 10a8df23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8df25 call dword ptr [0x10ab32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32cc))), 0x10a8df2bu);
  /* 10a8df2b jmp 0x10a8df1a */
  goto L_10a8df1a;
L_10a8df2d:;
  /* 10a8df2d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8df31 je 0x10a8df71 */
  if (C.zf) goto L_10a8df71;
  /* 10a8df33 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8df37 je 0x10a8df51 */
  if (C.zf) goto L_10a8df51;
  /* 10a8df39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8df3c push ecx */
  push32((uint32_t)(ECX));
  /* 10a8df3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8df40 push edx */
  push32((uint32_t)(EDX));
  /* 10a8df41 call 0x10a8e2d0 */
  push32(0x10a8df46u); f_10a8e2d0();
  /* 10a8df46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8df49 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10a8df4f jmp 0x10a8df63 */
  goto L_10a8df63;
L_10a8df51:;
  /* 10a8df51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8df54 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8df57 mov ecx, dword ptr [eax + 0x10aaf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10aaf4dc)));
  /* 10a8df5d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10a8df63:;
  /* 10a8df63 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10a8df69 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a8df6c jmp 0x10a8e2ab */
  goto L_10a8e2ab;
L_10a8df71:;
  /* 10a8df71 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10a8df78 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a8df7f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8df83 je 0x10a8e2a3 */
  if (C.zf) goto L_10a8e2a3;
  /* 10a8df89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8df8c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a8df8f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8df92 jne 0x10a8e1b4 */
  if (!C.zf) goto L_10a8e1b4;
  /* 10a8df98 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8df9b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10a8df9f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8dfa2 jne 0x10a8e1b4 */
  if (!C.zf) goto L_10a8e1b4;
  /* 10a8dfa8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8dfab movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10a8dfaf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8dfb2 jne 0x10a8e1b4 */
  if (!C.zf) goto L_10a8e1b4;
  /* 10a8dfb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8dfbb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10a8dfc1:;
  /* 10a8dfc1 push 0x10aac3ac */
  push32((uint32_t)(0x10aac3acu));
  /* 10a8dfc6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a8dfcc push ecx */
  push32((uint32_t)(ECX));
  /* 10a8dfcd call 0x10a90130 */
  push32(0x10a8dfd2u); f_10a90130();
  /* 10a8dfd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8dfd5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10a8dfdb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8dfe2 je 0x10a8e00d */
  if (C.zf) goto L_10a8e00d;
  /* 10a8dfe4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a8dfea sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8dff0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10a8dff6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8dffd je 0x10a8e00d */
  if (C.zf) goto L_10a8e00d;
  /* 10a8dfff mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a8e005 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a8e008 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e00b jne 0x10a8e033 */
  if (!C.zf) goto L_10a8e033;
L_10a8e00d:;
  /* 10a8e00d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e011 je 0x10a8e02c */
  if (C.zf) goto L_10a8e02c;
  /* 10a8e013 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a8e015 call 0x10a87e30 */
  push32(0x10a8e01au); f_10a87e30();
  /* 10a8e01a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e01d mov edx, dword ptr [0x10ab0a2c] */
  EDX = (r32((uint32_t)(0x10ab0a2c)));
  /* 10a8e023 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8e026 mov dword ptr [0x10ab0a2c], edx */
  w32((uint32_t)(0x10ab0a2c), (EDX));
L_10a8e02c:;
  /* 10a8e02c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8e02e jmp 0x10a8e2cb */
  goto L_10a8e2cb;
L_10a8e033:;
  /* 10a8e033 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10a8e03a jmp 0x10a8e045 */
  goto L_10a8e045;
L_10a8e03c:;
  /* 10a8e03c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8e03f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e042 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10a8e045:;
  /* 10a8e045 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e049 jg 0x10a8e093 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a8e093;
  /* 10a8e04b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10a8e051 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e052 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a8e058 push edx */
  push32((uint32_t)(EDX));
  /* 10a8e059 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8e05c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8e05f mov ecx, dword ptr [eax + 0x10aaf4d8] */
  ECX = (r32((uint32_t)(EAX + 0x10aaf4d8)));
  /* 10a8e065 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e066 call 0x10a900f0 */
  push32(0x10a8e06bu); f_10a900f0();
  /* 10a8e06b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e06e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8e070 jne 0x10a8e091 */
  if (!C.zf) goto L_10a8e091;
  /* 10a8e072 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8e075 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8e078 mov eax, dword ptr [edx + 0x10aaf4d8] */
  EAX = (r32((uint32_t)(EDX + 0x10aaf4d8)));
  /* 10a8e07e push eax */
  push32((uint32_t)(EAX));
  /* 10a8e07f call 0x10a871c0 */
  push32(0x10a8e084u); f_10a871c0();
  /* 10a8e084 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e087 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e08d jne 0x10a8e091 */
  if (!C.zf) goto L_10a8e091;
  /* 10a8e08f jmp 0x10a8e093 */
  goto L_10a8e093;
L_10a8e091:;
  /* 10a8e091 jmp 0x10a8e03c */
  goto L_10a8e03c;
L_10a8e093:;
  /* 10a8e093 push 0x10aac3a8 */
  push32((uint32_t)(0x10aac3a8u));
  /* 10a8e098 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a8e09e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e0a1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10a8e0a7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a8e0ad push edx */
  push32((uint32_t)(EDX));
  /* 10a8e0ae call 0x10a900b0 */
  push32(0x10a8e0b3u); f_10a900b0();
  /* 10a8e0b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e0b6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10a8e0bc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e0c3 jne 0x10a8e0f9 */
  if (!C.zf) goto L_10a8e0f9;
  /* 10a8e0c5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a8e0cb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a8e0ce cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e0d1 je 0x10a8e0f9 */
  if (C.zf) goto L_10a8e0f9;
  /* 10a8e0d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e0d7 je 0x10a8e0f2 */
  if (C.zf) goto L_10a8e0f2;
  /* 10a8e0d9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a8e0db call 0x10a87e30 */
  push32(0x10a8e0e0u); f_10a87e30();
  /* 10a8e0e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e0e3 mov edx, dword ptr [0x10ab0a2c] */
  EDX = (r32((uint32_t)(0x10ab0a2c)));
  /* 10a8e0e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8e0ec mov dword ptr [0x10ab0a2c], edx */
  w32((uint32_t)(0x10ab0a2c), (EDX));
L_10a8e0f2:;
  /* 10a8e0f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8e0f4 jmp 0x10a8e2cb */
  goto L_10a8e2cb;
L_10a8e0f9:;
  /* 10a8e0f9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e0fd jg 0x10a8e14a */
  if ((!C.zf&&C.sf==C.of)) goto L_10a8e14a;
  /* 10a8e0ff mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10a8e105 push eax */
  push32((uint32_t)(EAX));
  /* 10a8e106 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a8e10c push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e10d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10a8e113 push edx */
  push32((uint32_t)(EDX));
  /* 10a8e114 call 0x10a87bb0 */
  push32(0x10a8e119u); f_10a87bb0();
  /* 10a8e119 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e11c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10a8e122 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10a8e12a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10a8e130 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e131 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8e134 push edx */
  push32((uint32_t)(EDX));
  /* 10a8e135 call 0x10a8e2d0 */
  push32(0x10a8e13au); f_10a8e2d0();
  /* 10a8e13a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e13d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8e13f je 0x10a8e14a */
  if (C.zf) goto L_10a8e14a;
  /* 10a8e141 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8e144 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e147 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a8e14a:;
  /* 10a8e14a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a8e150 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e156 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10a8e15c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a8e162 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a8e165 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8e167 je 0x10a8e178 */
  if (C.zf) goto L_10a8e178;
  /* 10a8e169 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a8e16f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e172 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10a8e178:;
  /* 10a8e178 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a8e17e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a8e181 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8e183 jne 0x10a8dfc1 */
  if (!C.zf) goto L_10a8dfc1;
  /* 10a8e189 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e18d je 0x10a8e19c */
  if (C.zf) goto L_10a8e19c;
  /* 10a8e18f call 0x10a8e470 */
  push32(0x10a8e194u); f_10a8e470();
  /* 10a8e194 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10a8e19a jmp 0x10a8e1a6 */
  goto L_10a8e1a6;
L_10a8e19c:;
  /* 10a8e19c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10a8e1a6:;
  /* 10a8e1a6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10a8e1ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8e1af jmp 0x10a8e2a1 */
  goto L_10a8e2a1;
L_10a8e1b4:;
  /* 10a8e1b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e1b7 push edx */
  push32((uint32_t)(EDX));
  /* 10a8e1b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8e1ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8e1bc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10a8e1c2 push eax */
  push32((uint32_t)(EAX));
  /* 10a8e1c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e1c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e1c7 call 0x10a8e570 */
  push32(0x10a8e1ccu); f_10a8e570();
  /* 10a8e1cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e1cf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a8e1d2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e1d6 je 0x10a8e2a1 */
  if (C.zf) goto L_10a8e2a1;
  /* 10a8e1dc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a8e1e3 jmp 0x10a8e1ee */
  goto L_10a8e1ee;
L_10a8e1e5:;
  /* 10a8e1e5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8e1e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e1eb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a8e1ee:;
  /* 10a8e1ee cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e1f2 jg 0x10a8e250 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a8e250;
  /* 10a8e1f4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e1f8 je 0x10a8e24e */
  if (C.zf) goto L_10a8e24e;
  /* 10a8e1fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8e1fd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8e200 mov ecx, dword ptr [eax + 0x10aaf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10aaf4dc)));
  /* 10a8e206 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e207 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10a8e20d push edx */
  push32((uint32_t)(EDX));
  /* 10a8e20e call 0x10a90020 */
  push32(0x10a8e213u); f_10a90020();
  /* 10a8e213 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e216 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8e218 je 0x10a8e245 */
  if (C.zf) goto L_10a8e245;
  /* 10a8e21a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10a8e220 push eax */
  push32((uint32_t)(EAX));
  /* 10a8e221 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a8e224 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e225 call 0x10a8e2d0 */
  push32(0x10a8e22au); f_10a8e2d0();
  /* 10a8e22a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e22d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8e22f je 0x10a8e23c */
  if (C.zf) goto L_10a8e23c;
  /* 10a8e231 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8e234 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e237 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a8e23a jmp 0x10a8e243 */
  goto L_10a8e243;
L_10a8e23c:;
  /* 10a8e23c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10a8e243:;
  /* 10a8e243 jmp 0x10a8e24e */
  goto L_10a8e24e;
L_10a8e245:;
  /* 10a8e245 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8e248 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e24b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10a8e24e:;
  /* 10a8e24e jmp 0x10a8e1e5 */
  goto L_10a8e1e5;
L_10a8e250:;
  /* 10a8e250 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e254 je 0x10a8e27b */
  if (C.zf) goto L_10a8e27b;
  /* 10a8e256 call 0x10a8e470 */
  push32(0x10a8e25bu); f_10a8e470();
  /* 10a8e25b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a8e25e push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8e260 mov ecx, dword ptr [0x10aaf4dc] */
  ECX = (r32((uint32_t)(0x10aaf4dc)));
  /* 10a8e266 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e267 call 0x10a84e20 */
  push32(0x10a8e26cu); f_10a84e20();
  /* 10a8e26c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e26f mov dword ptr [0x10aaf4dc], 0 */
  w32((uint32_t)(0x10aaf4dc), (0x0u));
  /* 10a8e279 jmp 0x10a8e2a1 */
  goto L_10a8e2a1;
L_10a8e27b:;
  /* 10a8e27b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e27f je 0x10a8e28e */
  if (C.zf) goto L_10a8e28e;
  /* 10a8e281 call 0x10a8e470 */
  push32(0x10a8e286u); f_10a8e470();
  /* 10a8e286 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10a8e28c jmp 0x10a8e298 */
  goto L_10a8e298;
L_10a8e28e:;
  /* 10a8e28e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10a8e298:;
  /* 10a8e298 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10a8e29e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a8e2a1:;
  /* 10a8e2a1 jmp 0x10a8e2ab */
  goto L_10a8e2ab;
L_10a8e2a3:;
  /* 10a8e2a3 call 0x10a8e470 */
  push32(0x10a8e2a8u); f_10a8e470();
  /* 10a8e2a8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a8e2ab:;
  /* 10a8e2ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e2af je 0x10a8e2c8 */
  if (C.zf) goto L_10a8e2c8;
  /* 10a8e2b1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a8e2b3 call 0x10a87e30 */
  push32(0x10a8e2b8u); f_10a87e30();
  /* 10a8e2b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e2bb mov eax, dword ptr [0x10ab0a2c] */
  EAX = (r32((uint32_t)(0x10ab0a2c)));
  /* 10a8e2c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8e2c3 mov dword ptr [0x10ab0a2c], eax */
  w32((uint32_t)(0x10ab0a2c), (EAX));
L_10a8e2c8:;
  /* 10a8e2c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a8e2cb:;
  /* 10a8e2cb mov esp, ebp */
  ESP = (EBP);
  /* 10a8e2cd pop ebp */
  EBP = (pop32());
  /* 10a8e2ce ret  */
  ESPCHK(0x10a8dee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2d0 @ 0x10a8e2d0 (403 bytes, 117 insns) */
void f_10a8e2d0(void) {
  FTRACE(0x10a8e2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8e2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8e2d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8e2d3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8e2d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e2dc push eax */
  push32((uint32_t)(EAX));
  /* 10a8e2dd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10a8e2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e2e4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10a8e2ea push edx */
  push32((uint32_t)(EDX));
  /* 10a8e2eb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10a8e2f1 push eax */
  push32((uint32_t)(EAX));
  /* 10a8e2f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e2f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e2f6 call 0x10a8e570 */
  push32(0x10a8e2fbu); f_10a8e570();
  /* 10a8e2fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e2fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8e300 jne 0x10a8e309 */
  if (!C.zf) goto L_10a8e309;
  /* 10a8e302 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8e304 jmp 0x10a8e45f */
  goto L_10a8e45f;
L_10a8e309:;
  /* 10a8e309 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10a8e30e push 0x10aac3b0 */
  push32((uint32_t)(0x10aac3b0u));
  /* 10a8e313 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8e315 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10a8e31b push edx */
  push32((uint32_t)(EDX));
  /* 10a8e31c call 0x10a871c0 */
  push32(0x10a8e321u); f_10a871c0();
  /* 10a8e321 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e324 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e327 push eax */
  push32((uint32_t)(EAX));
  /* 10a8e328 call 0x10a84390 */
  push32(0x10a8e32du); f_10a84390();
  /* 10a8e32d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e330 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a8e333 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e337 jne 0x10a8e340 */
  if (!C.zf) goto L_10a8e340;
  /* 10a8e339 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8e33b jmp 0x10a8e45f */
  goto L_10a8e45f;
L_10a8e340:;
  /* 10a8e340 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e343 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8e346 mov ecx, dword ptr [eax + 0x10aaf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10aaf4dc)));
  /* 10a8e34c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8e34f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e352 mov eax, dword ptr [edx*4 + 0x10ab08a8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10ab08a8)));
  /* 10a8e359 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8e35c push 6 */
  push32((uint32_t)(0x6u));
  /* 10a8e35e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e361 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8e364 add ecx, 0x10ab08f8 */
  { uint32_t _a=(ECX),_b=(0x10ab08f8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e36a push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e36b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10a8e36e push edx */
  push32((uint32_t)(EDX));
  /* 10a8e36f call 0x10a8ac70 */
  push32(0x10a8e374u); f_10a8ac70();
  /* 10a8e374 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e377 mov eax, dword ptr [0x10ab08c0] */
  EAX = (r32((uint32_t)(0x10ab08c0)));
  /* 10a8e37c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a8e37f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10a8e385 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e386 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8e389 push edx */
  push32((uint32_t)(EDX));
  /* 10a8e38a call 0x10a87340 */
  push32(0x10a8e38fu); f_10a87340();
  /* 10a8e38f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e392 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e395 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8e398 mov dword ptr [ecx + 0x10aaf4dc], eax */
  w32((uint32_t)(ECX + 0x10aaf4dc), (EAX));
  /* 10a8e39e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10a8e3a4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8e3aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e3ad mov dword ptr [eax*4 + 0x10ab08a8], edx */
  w32((uint32_t)(EAX*4 + 0x10ab08a8), (EDX));
  /* 10a8e3b4 push 6 */
  push32((uint32_t)(0x6u));
  /* 10a8e3b6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10a8e3bc push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e3bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e3c0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8e3c3 add edx, 0x10ab08f8 */
  { uint32_t _a=(EDX),_b=(0x10ab08f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e3c9 push edx */
  push32((uint32_t)(EDX));
  /* 10a8e3ca call 0x10a8ac70 */
  push32(0x10a8e3cfu); f_10a8ac70();
  /* 10a8e3cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e3d2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e3d6 jne 0x10a8e3e3 */
  if (!C.zf) goto L_10a8e3e3;
  /* 10a8e3d8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a8e3de mov dword ptr [0x10ab08c0], eax */
  w32((uint32_t)(0x10ab08c0), (EAX));
L_10a8e3e3:;
  /* 10a8e3e3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e3e7 jne 0x10a8e3f5 */
  if (!C.zf) goto L_10a8e3f5;
  /* 10a8e3e9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a8e3ef mov dword ptr [0x10ab08c4], ecx */
  w32((uint32_t)(0x10ab08c4), (ECX));
L_10a8e3f5:;
  /* 10a8e3f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e3f8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8e3fb call dword ptr [edx + 0x10aaf4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10aaf4e0))), 0x10a8e401u);
  /* 10a8e401 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8e403 je 0x10a8e43c */
  if (C.zf) goto L_10a8e43c;
  /* 10a8e405 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e408 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8e40b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8e40e mov dword ptr [eax + 0x10aaf4dc], ecx */
  w32((uint32_t)(EAX + 0x10aaf4dc), (ECX));
  /* 10a8e414 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8e416 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8e419 push edx */
  push32((uint32_t)(EDX));
  /* 10a8e41a call 0x10a84e20 */
  push32(0x10a8e41fu); f_10a84e20();
  /* 10a8e41f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e422 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e425 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8e428 mov dword ptr [eax*4 + 0x10ab08a8], ecx */
  w32((uint32_t)(EAX*4 + 0x10ab08a8), (ECX));
  /* 10a8e42f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8e432 mov dword ptr [0x10ab08c0], edx */
  w32((uint32_t)(0x10ab08c0), (EDX));
  /* 10a8e438 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8e43a jmp 0x10a8e45f */
  goto L_10a8e45f;
L_10a8e43c:;
  /* 10a8e43c cmp dword ptr [ebp - 0xc], 0x10aaf3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10aaf3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e443 je 0x10a8e453 */
  if (C.zf) goto L_10a8e453;
  /* 10a8e445 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8e447 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8e44a push eax */
  push32((uint32_t)(EAX));
  /* 10a8e44b call 0x10a84e20 */
  push32(0x10a8e450u); f_10a84e20();
  /* 10a8e450 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8e453:;
  /* 10a8e453 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e456 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8e459 mov eax, dword ptr [ecx + 0x10aaf4dc] */
  EAX = (r32((uint32_t)(ECX + 0x10aaf4dc)));
L_10a8e45f:;
  /* 10a8e45f mov esp, ebp */
  ESP = (EBP);
  /* 10a8e461 pop ebp */
  EBP = (pop32());
  /* 10a8e462 ret  */
  ESPCHK(0x10a8e2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e470 @ 0x10a8e470 (256 bytes, 72 insns) */
void f_10a8e470(void) {
  FTRACE(0x10a8e470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8e470 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8e471 mov ebp, esp */
  EBP = (ESP);
  /* 10a8e473 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8e476 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10a8e47d cmp dword ptr [0x10aaf4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10aaf4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e484 jne 0x10a8e4a4 */
  if (!C.zf) goto L_10a8e4a4;
  /* 10a8e486 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10a8e48b push 0x10aac3b0 */
  push32((uint32_t)(0x10aac3b0u));
  /* 10a8e490 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8e492 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10a8e497 call 0x10a84390 */
  push32(0x10a8e49cu); f_10a84390();
  /* 10a8e49c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e49f mov dword ptr [0x10aaf4dc], eax */
  w32((uint32_t)(0x10aaf4dc), (EAX));
L_10a8e4a4:;
  /* 10a8e4a4 mov eax, dword ptr [0x10aaf4dc] */
  EAX = (r32((uint32_t)(0x10aaf4dc)));
  /* 10a8e4a9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a8e4ac mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a8e4b3 jmp 0x10a8e4be */
  goto L_10a8e4be;
L_10a8e4b5:;
  /* 10a8e4b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8e4b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e4bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a8e4be:;
  /* 10a8e4be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8e4c1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8e4c4 mov eax, dword ptr [edx + 0x10aaf4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10aaf4dc)));
  /* 10a8e4ca push eax */
  push32((uint32_t)(EAX));
  /* 10a8e4cb push 0x10aac3bc */
  push32((uint32_t)(0x10aac3bcu));
  /* 10a8e4d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8e4d3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8e4d6 mov edx, dword ptr [ecx + 0x10aaf4d8] */
  EDX = (r32((uint32_t)(ECX + 0x10aaf4d8)));
  /* 10a8e4dc push edx */
  push32((uint32_t)(EDX));
  /* 10a8e4dd push 3 */
  push32((uint32_t)(0x3u));
  /* 10a8e4df mov eax, dword ptr [0x10aaf4dc] */
  EAX = (r32((uint32_t)(0x10aaf4dc)));
  /* 10a8e4e4 push eax */
  push32((uint32_t)(EAX));
  /* 10a8e4e5 call 0x10a8e710 */
  push32(0x10a8e4eau); f_10a8e710();
  /* 10a8e4ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e4ed cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e4f1 jge 0x10a8e539 */
  if ((C.sf==C.of)) goto L_10a8e539;
  /* 10a8e4f3 push 0x10aac3a8 */
  push32((uint32_t)(0x10aac3a8u));
  /* 10a8e4f8 mov ecx, dword ptr [0x10aaf4dc] */
  ECX = (r32((uint32_t)(0x10aaf4dc)));
  /* 10a8e4fe push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e4ff call 0x10a87350 */
  push32(0x10a8e504u); f_10a87350();
  /* 10a8e504 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e507 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8e50a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e50d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8e510 mov eax, dword ptr [edx + 0x10aaf4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10aaf4dc)));
  /* 10a8e516 push eax */
  push32((uint32_t)(EAX));
  /* 10a8e517 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8e51a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8e51d mov edx, dword ptr [ecx + 0x10aaf4dc] */
  EDX = (r32((uint32_t)(ECX + 0x10aaf4dc)));
  /* 10a8e523 push edx */
  push32((uint32_t)(EDX));
  /* 10a8e524 call 0x10a90020 */
  push32(0x10a8e529u); f_10a90020();
  /* 10a8e529 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e52c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8e52e je 0x10a8e537 */
  if (C.zf) goto L_10a8e537;
  /* 10a8e530 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a8e537:;
  /* 10a8e537 jmp 0x10a8e567 */
  goto L_10a8e567;
L_10a8e539:;
  /* 10a8e539 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e53d jne 0x10a8e546 */
  if (!C.zf) goto L_10a8e546;
  /* 10a8e53f mov eax, dword ptr [0x10aaf4dc] */
  EAX = (r32((uint32_t)(0x10aaf4dc)));
  /* 10a8e544 jmp 0x10a8e56c */
  goto L_10a8e56c;
L_10a8e546:;
  /* 10a8e546 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8e548 mov eax, dword ptr [0x10aaf4dc] */
  EAX = (r32((uint32_t)(0x10aaf4dc)));
  /* 10a8e54d push eax */
  push32((uint32_t)(EAX));
  /* 10a8e54e call 0x10a84e20 */
  push32(0x10a8e553u); f_10a84e20();
  /* 10a8e553 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e556 mov dword ptr [0x10aaf4dc], 0 */
  w32((uint32_t)(0x10aaf4dc), (0x0u));
  /* 10a8e560 mov eax, dword ptr [0x10aaf4f4] */
  EAX = (r32((uint32_t)(0x10aaf4f4)));
  /* 10a8e565 jmp 0x10a8e56c */
  goto L_10a8e56c;
L_10a8e567:;
  /* 10a8e567 jmp 0x10a8e4b5 */
  goto L_10a8e4b5;
L_10a8e56c:;
  /* 10a8e56c mov esp, ebp */
  ESP = (EBP);
  /* 10a8e56e pop ebp */
  EBP = (pop32());
  /* 10a8e56f ret  */
  ESPCHK(0x10a8e470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e570 @ 0x10a8e570 (388 bytes, 115 insns) */
void f_10a8e570(void) {
  FTRACE(0x10a8e570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8e570 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8e571 mov ebp, esp */
  EBP = (ESP);
  /* 10a8e573 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8e579 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e57d jne 0x10a8e586 */
  if (!C.zf) goto L_10a8e586;
  /* 10a8e57f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8e581 jmp 0x10a8e6f0 */
  goto L_10a8e6f0;
L_10a8e586:;
  /* 10a8e586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e589 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a8e58c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e58f jne 0x10a8e5e0 */
  if (!C.zf) goto L_10a8e5e0;
  /* 10a8e591 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e594 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10a8e598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8e59a jne 0x10a8e5e0 */
  if (!C.zf) goto L_10a8e5e0;
  /* 10a8e59c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e59f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10a8e5a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e5a5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10a8e5a9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e5ad je 0x10a8e5c9 */
  if (C.zf) goto L_10a8e5c9;
  /* 10a8e5af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8e5b2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10a8e5b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8e5ba mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10a8e5c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8e5c3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10a8e5c9:;
  /* 10a8e5c9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e5cd je 0x10a8e5d8 */
  if (C.zf) goto L_10a8e5d8;
  /* 10a8e5cf mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a8e5d2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10a8e5d8:;
  /* 10a8e5d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e5db jmp 0x10a8e6f0 */
  goto L_10a8e6f0;
L_10a8e5e0:;
  /* 10a8e5e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e5e4 push 0x10aaf450 */
  push32((uint32_t)(0x10aaf450u));
  /* 10a8e5e9 call 0x10a90020 */
  push32(0x10a8e5eeu); f_10a90020();
  /* 10a8e5ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e5f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8e5f3 je 0x10a8e6a8 */
  if (C.zf) goto L_10a8e6a8;
  /* 10a8e5f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e5fc push edx */
  push32((uint32_t)(EDX));
  /* 10a8e5fd push 0x10aaf3cc */
  push32((uint32_t)(0x10aaf3ccu));
  /* 10a8e602 call 0x10a90020 */
  push32(0x10a8e607u); f_10a90020();
  /* 10a8e607 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e60a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8e60c je 0x10a8e6a8 */
  if (C.zf) goto L_10a8e6a8;
  /* 10a8e612 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e615 push eax */
  push32((uint32_t)(EAX));
  /* 10a8e616 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10a8e61c push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e61d call 0x10a8e760 */
  push32(0x10a8e622u); f_10a8e760();
  /* 10a8e622 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e625 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8e627 je 0x10a8e630 */
  if (C.zf) goto L_10a8e630;
  /* 10a8e629 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8e62b jmp 0x10a8e6f0 */
  goto L_10a8e6f0;
L_10a8e630:;
  /* 10a8e630 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10a8e636 push edx */
  push32((uint32_t)(EDX));
  /* 10a8e637 push 0x10ab08d0 */
  push32((uint32_t)(0x10ab08d0u));
  /* 10a8e63c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10a8e642 push eax */
  push32((uint32_t)(EAX));
  /* 10a8e643 call 0x10a90170 */
  push32(0x10a8e648u); f_10a90170();
  /* 10a8e648 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e64b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8e64d jne 0x10a8e656 */
  if (!C.zf) goto L_10a8e656;
  /* 10a8e64f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8e651 jmp 0x10a8e6f0 */
  goto L_10a8e6f0;
L_10a8e656:;
  /* 10a8e656 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8e658 mov cx, word ptr [0x10ab08d4] */
  CX = (r16((uint32_t)(0x10ab08d4)));
  /* 10a8e65f mov dword ptr [0x10ab08d8], ecx */
  w32((uint32_t)(0x10ab08d8), (ECX));
  /* 10a8e665 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10a8e66b push edx */
  push32((uint32_t)(EDX));
  /* 10a8e66c push 0x10aaf450 */
  push32((uint32_t)(0x10aaf450u));
  /* 10a8e671 call 0x10a8e8c0 */
  push32(0x10a8e676u); f_10a8e8c0();
  /* 10a8e676 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e679 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e67c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a8e67f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8e681 je 0x10a8e696 */
  if (C.zf) goto L_10a8e696;
  /* 10a8e683 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e686 push edx */
  push32((uint32_t)(EDX));
  /* 10a8e687 push 0x10aaf3cc */
  push32((uint32_t)(0x10aaf3ccu));
  /* 10a8e68c call 0x10a87340 */
  push32(0x10a8e691u); f_10a87340();
  /* 10a8e691 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e694 jmp 0x10a8e6a8 */
  goto L_10a8e6a8;
L_10a8e696:;
  /* 10a8e696 push 0x10aaf450 */
  push32((uint32_t)(0x10aaf450u));
  /* 10a8e69b push 0x10aaf3cc */
  push32((uint32_t)(0x10aaf3ccu));
  /* 10a8e6a0 call 0x10a87340 */
  push32(0x10a8e6a5u); f_10a87340();
  /* 10a8e6a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8e6a8:;
  /* 10a8e6a8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e6ac je 0x10a8e6c1 */
  if (C.zf) goto L_10a8e6c1;
  /* 10a8e6ae push 6 */
  push32((uint32_t)(0x6u));
  /* 10a8e6b0 push 0x10ab08d0 */
  push32((uint32_t)(0x10ab08d0u));
  /* 10a8e6b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a8e6b8 push eax */
  push32((uint32_t)(EAX));
  /* 10a8e6b9 call 0x10a8ac70 */
  push32(0x10a8e6beu); f_10a8ac70();
  /* 10a8e6be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8e6c1:;
  /* 10a8e6c1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e6c5 je 0x10a8e6da */
  if (C.zf) goto L_10a8e6da;
  /* 10a8e6c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a8e6c9 push 0x10ab08d8 */
  push32((uint32_t)(0x10ab08d8u));
  /* 10a8e6ce mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a8e6d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e6d2 call 0x10a8ac70 */
  push32(0x10a8e6d7u); f_10a8ac70();
  /* 10a8e6d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8e6da:;
  /* 10a8e6da push 0x10aaf450 */
  push32((uint32_t)(0x10aaf450u));
  /* 10a8e6df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e6e2 push edx */
  push32((uint32_t)(EDX));
  /* 10a8e6e3 call 0x10a87340 */
  push32(0x10a8e6e8u); f_10a87340();
  /* 10a8e6e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e6eb mov eax, 0x10aaf450 */
  EAX = (0x10aaf450u);
L_10a8e6f0:;
  /* 10a8e6f0 mov esp, ebp */
  ESP = (EBP);
  /* 10a8e6f2 pop ebp */
  EBP = (pop32());
  /* 10a8e6f3 ret  */
  ESPCHK(0x10a8e570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e700 @ 0x10a8e700 (7 bytes, 5 insns) */
void f_10a8e700(void) {
  FTRACE(0x10a8e700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8e700 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8e701 mov ebp, esp */
  EBP = (ESP);
  /* 10a8e703 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8e705 pop ebp */
  EBP = (pop32());
  /* 10a8e706 ret  */
  ESPCHK(0x10a8e700u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10a8e710 (79 bytes, 28 insns) */
void f_10a8e710(void) {
  FTRACE(0x10a8e710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8e710 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8e711 mov ebp, esp */
  EBP = (ESP);
  /* 10a8e713 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8e716 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10a8e719 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8e71c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a8e723 jmp 0x10a8e72e */
  goto L_10a8e72e;
L_10a8e725:;
  /* 10a8e725 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8e728 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e72b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a8e72e:;
  /* 10a8e72e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8e731 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e734 jge 0x10a8e754 */
  if ((C.sf==C.of)) goto L_10a8e754;
  /* 10a8e736 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8e739 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e73c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8e73f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8e742 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10a8e745 push edx */
  push32((uint32_t)(EDX));
  /* 10a8e746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e749 push eax */
  push32((uint32_t)(EAX));
  /* 10a8e74a call 0x10a87350 */
  push32(0x10a8e74fu); f_10a87350();
  /* 10a8e74f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e752 jmp 0x10a8e725 */
  goto L_10a8e725;
L_10a8e754:;
  /* 10a8e754 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a8e75b mov esp, ebp */
  ESP = (EBP);
  /* 10a8e75d pop ebp */
  EBP = (pop32());
  /* 10a8e75e ret  */
  ESPCHK(0x10a8e710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e760 @ 0x10a8e760 (349 bytes, 122 insns) */
void f_10a8e760(void) {
  FTRACE(0x10a8e760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8e760 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8e761 mov ebp, esp */
  EBP = (ESP);
  /* 10a8e763 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8e766 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10a8e76b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8e76d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e770 push eax */
  push32((uint32_t)(EAX));
  /* 10a8e771 call 0x10a88100 */
  push32(0x10a8e776u); f_10a88100();
  /* 10a8e776 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e779 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e77c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a8e77f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8e781 jne 0x10a8e78a */
  if (!C.zf) goto L_10a8e78a;
  /* 10a8e783 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8e785 jmp 0x10a8e8b9 */
  goto L_10a8e8b9;
L_10a8e78a:;
  /* 10a8e78a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e78d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a8e790 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e793 jne 0x10a8e7c0 */
  if (!C.zf) goto L_10a8e7c0;
  /* 10a8e795 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e798 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10a8e79c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8e79e je 0x10a8e7c0 */
  if (C.zf) goto L_10a8e7c0;
  /* 10a8e7a0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e7a3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e7a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e7a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e7aa add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e7b0 push edx */
  push32((uint32_t)(EDX));
  /* 10a8e7b1 call 0x10a87340 */
  push32(0x10a8e7b6u); f_10a87340();
  /* 10a8e7b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e7b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8e7bb jmp 0x10a8e8b9 */
  goto L_10a8e8b9;
L_10a8e7c0:;
  /* 10a8e7c0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a8e7c7 jmp 0x10a8e7d2 */
  goto L_10a8e7d2;
L_10a8e7c9:;
  /* 10a8e7c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8e7cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e7cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a8e7d2:;
  /* 10a8e7d2 push 0x10aac3c0 */
  push32((uint32_t)(0x10aac3c0u));
  /* 10a8e7d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e7da push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e7db call 0x10a900b0 */
  push32(0x10a8e7e0u); f_10a900b0();
  /* 10a8e7e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e7e3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a8e7e6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e7ea jne 0x10a8e7f4 */
  if (!C.zf) goto L_10a8e7f4;
  /* 10a8e7ec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8e7ef jmp 0x10a8e8b9 */
  goto L_10a8e8b9;
L_10a8e7f4:;
  /* 10a8e7f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e7f7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e7fa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a8e7fc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10a8e7ff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e803 jne 0x10a8e82a */
  if (!C.zf) goto L_10a8e82a;
  /* 10a8e805 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e809 jge 0x10a8e82a */
  if ((C.sf==C.of)) goto L_10a8e82a;
  /* 10a8e80b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a8e80f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e812 je 0x10a8e82a */
  if (C.zf) goto L_10a8e82a;
  /* 10a8e814 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8e817 push edx */
  push32((uint32_t)(EDX));
  /* 10a8e818 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e81b push eax */
  push32((uint32_t)(EAX));
  /* 10a8e81c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e81f push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e820 call 0x10a87bb0 */
  push32(0x10a8e825u); f_10a87bb0();
  /* 10a8e825 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e828 jmp 0x10a8e890 */
  goto L_10a8e890;
L_10a8e82a:;
  /* 10a8e82a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e82e jne 0x10a8e858 */
  if (!C.zf) goto L_10a8e858;
  /* 10a8e830 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e834 jge 0x10a8e858 */
  if ((C.sf==C.of)) goto L_10a8e858;
  /* 10a8e836 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a8e83a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e83d je 0x10a8e858 */
  if (C.zf) goto L_10a8e858;
  /* 10a8e83f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8e842 push eax */
  push32((uint32_t)(EAX));
  /* 10a8e843 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e846 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e847 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e84a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e84d push edx */
  push32((uint32_t)(EDX));
  /* 10a8e84e call 0x10a87bb0 */
  push32(0x10a8e853u); f_10a87bb0();
  /* 10a8e853 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e856 jmp 0x10a8e890 */
  goto L_10a8e890;
L_10a8e858:;
  /* 10a8e858 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e85c jne 0x10a8e88b */
  if (!C.zf) goto L_10a8e88b;
  /* 10a8e85e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a8e862 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8e864 je 0x10a8e86f */
  if (C.zf) goto L_10a8e86f;
  /* 10a8e866 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a8e86a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e86d jne 0x10a8e88b */
  if (!C.zf) goto L_10a8e88b;
L_10a8e86f:;
  /* 10a8e86f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8e872 push edx */
  push32((uint32_t)(EDX));
  /* 10a8e873 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e876 push eax */
  push32((uint32_t)(EAX));
  /* 10a8e877 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e87a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e880 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e881 call 0x10a87bb0 */
  push32(0x10a8e886u); f_10a87bb0();
  /* 10a8e886 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e889 jmp 0x10a8e890 */
  goto L_10a8e890;
L_10a8e88b:;
  /* 10a8e88b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8e88e jmp 0x10a8e8b9 */
  goto L_10a8e8b9;
L_10a8e890:;
  /* 10a8e890 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a8e894 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e897 jne 0x10a8e89b */
  if (!C.zf) goto L_10a8e89b;
  /* 10a8e899 jmp 0x10a8e8b7 */
  goto L_10a8e8b7;
L_10a8e89b:;
  /* 10a8e89b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a8e89f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8e8a1 jne 0x10a8e8a5 */
  if (!C.zf) goto L_10a8e8a5;
  /* 10a8e8a3 jmp 0x10a8e8b7 */
  goto L_10a8e8b7;
L_10a8e8a5:;
  /* 10a8e8a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8e8a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e8ab lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10a8e8af mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10a8e8b2 jmp 0x10a8e7c9 */
  goto L_10a8e7c9;
L_10a8e8b7:;
  /* 10a8e8b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a8e8b9:;
  /* 10a8e8b9 mov esp, ebp */
  ESP = (EBP);
  /* 10a8e8bb pop ebp */
  EBP = (pop32());
  /* 10a8e8bc ret  */
  ESPCHK(0x10a8e760u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10a8e8c0 (101 bytes, 36 insns) */
void f_10a8e8c0(void) {
  FTRACE(0x10a8e8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8e8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8e8c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8e8c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e8c6 push eax */
  push32((uint32_t)(EAX));
  /* 10a8e8c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e8ca push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e8cb call 0x10a87340 */
  push32(0x10a8e8d0u); f_10a87340();
  /* 10a8e8d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e8d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e8d6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10a8e8da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8e8dc je 0x10a8e8f8 */
  if (C.zf) goto L_10a8e8f8;
  /* 10a8e8de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e8e1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e8e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e8e5 push 0x10aac3c8 */
  push32((uint32_t)(0x10aac3c8u));
  /* 10a8e8ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8e8ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e8ef push edx */
  push32((uint32_t)(EDX));
  /* 10a8e8f0 call 0x10a8e710 */
  push32(0x10a8e8f5u); f_10a8e710();
  /* 10a8e8f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8e8f8:;
  /* 10a8e8f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e8fb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10a8e902 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8e904 je 0x10a8e923 */
  if (C.zf) goto L_10a8e923;
  /* 10a8e906 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a8e909 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e90f push edx */
  push32((uint32_t)(EDX));
  /* 10a8e910 push 0x10aac3c4 */
  push32((uint32_t)(0x10aac3c4u));
  /* 10a8e915 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8e917 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e91a push eax */
  push32((uint32_t)(EAX));
  /* 10a8e91b call 0x10a8e710 */
  push32(0x10a8e920u); f_10a8e710();
  /* 10a8e920 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8e923:;
  /* 10a8e923 pop ebp */
  EBP = (pop32());
  /* 10a8e924 ret  */
  ESPCHK(0x10a8e8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e930 @ 0x10a8e930 (130 bytes, 50 insns) */
void f_10a8e930(void) {
  FTRACE(0x10a8e930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8e930 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8e931 mov ebp, esp */
  EBP = (ESP);
  /* 10a8e933 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e934 push ebx */
  push32((uint32_t)(EBX));
  /* 10a8e935 push esi */
  push32((uint32_t)(ESI));
  /* 10a8e936 push edi */
  push32((uint32_t)(EDI));
  /* 10a8e937 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a8e93e:;
  /* 10a8e93e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e942 jne 0x10a8e962 */
  if (!C.zf) goto L_10a8e962;
  /* 10a8e944 push 0x10aac3d8 */
  push32((uint32_t)(0x10aac3d8u));
  /* 10a8e949 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8e94b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10a8e94d push 0x10aac3cc */
  push32((uint32_t)(0x10aac3ccu));
  /* 10a8e952 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8e954 call 0x10a83450 */
  push32(0x10a8e959u); f_10a83450();
  /* 10a8e959 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e95c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e95f jne 0x10a8e962 */
  if (!C.zf) goto L_10a8e962;
  /* 10a8e961 int3  */
  x86_unimpl("int3 @ 0x10a8e961");
L_10a8e962:;
  /* 10a8e962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8e964 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8e966 jne 0x10a8e93e */
  if (!C.zf) goto L_10a8e93e;
  /* 10a8e968 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e96b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a8e96e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10a8e971 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8e973 je 0x10a8e981 */
  if (C.zf) goto L_10a8e981;
  /* 10a8e975 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e978 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10a8e97f jmp 0x10a8e9a8 */
  goto L_10a8e9a8;
L_10a8e981:;
  /* 10a8e981 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e984 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8e985 call 0x10a8d1a0 */
  push32(0x10a8e98au); f_10a8d1a0();
  /* 10a8e98a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e98d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e990 push edx */
  push32((uint32_t)(EDX));
  /* 10a8e991 call 0x10a8e9c0 */
  push32(0x10a8e996u); f_10a8e9c0();
  /* 10a8e996 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e999 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8e99c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e99f push eax */
  push32((uint32_t)(EAX));
  /* 10a8e9a0 call 0x10a8d210 */
  push32(0x10a8e9a5u); f_10a8d210();
  /* 10a8e9a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8e9a8:;
  /* 10a8e9a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8e9ab pop edi */
  EDI = (pop32());
  /* 10a8e9ac pop esi */
  ESI = (pop32());
  /* 10a8e9ad pop ebx */
  EBX = (pop32());
  /* 10a8e9ae mov esp, ebp */
  ESP = (EBP);
  /* 10a8e9b0 pop ebp */
  EBP = (pop32());
  /* 10a8e9b1 ret  */
  ESPCHK(0x10a8e930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9c0 @ 0x10a8e9c0 (190 bytes, 67 insns) */
void f_10a8e9c0(void) {
  FTRACE(0x10a8e9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8e9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8e9c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8e9c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8e9c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10a8e9c7 push esi */
  push32((uint32_t)(ESI));
  /* 10a8e9c8 push edi */
  push32((uint32_t)(EDI));
  /* 10a8e9c9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a8e9d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8e9d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a8e9d6:;
  /* 10a8e9d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e9da jne 0x10a8e9fa */
  if (!C.zf) goto L_10a8e9fa;
  /* 10a8e9dc push 0x10aac278 */
  push32((uint32_t)(0x10aac278u));
  /* 10a8e9e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8e9e3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10a8e9e5 push 0x10aac3cc */
  push32((uint32_t)(0x10aac3ccu));
  /* 10a8e9ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8e9ec call 0x10a83450 */
  push32(0x10a8e9f1u); f_10a83450();
  /* 10a8e9f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8e9f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8e9f7 jne 0x10a8e9fa */
  if (!C.zf) goto L_10a8e9fa;
  /* 10a8e9f9 int3  */
  x86_unimpl("int3 @ 0x10a8e9f9");
L_10a8e9fa:;
  /* 10a8e9fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8e9fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8e9fe jne 0x10a8e9d6 */
  if (!C.zf) goto L_10a8e9d6;
  /* 10a8ea00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8ea03 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10a8ea06 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8ea0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8ea0d je 0x10a8ea6a */
  if (C.zf) goto L_10a8ea6a;
  /* 10a8ea0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8ea12 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8ea13 call 0x10a8dcc0 */
  push32(0x10a8ea18u); f_10a8dcc0();
  /* 10a8ea18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ea1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8ea1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8ea21 push edx */
  push32((uint32_t)(EDX));
  /* 10a8ea22 call 0x10a91040 */
  push32(0x10a8ea27u); f_10a91040();
  /* 10a8ea27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ea2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8ea2d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a8ea30 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8ea31 call 0x10a90f10 */
  push32(0x10a8ea36u); f_10a90f10();
  /* 10a8ea36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ea39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8ea3b jge 0x10a8ea46 */
  if ((C.sf==C.of)) goto L_10a8ea46;
  /* 10a8ea3d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a8ea44 jmp 0x10a8ea6a */
  goto L_10a8ea6a;
L_10a8ea46:;
  /* 10a8ea46 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8ea49 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ea4d je 0x10a8ea6a */
  if (C.zf) goto L_10a8ea6a;
  /* 10a8ea4f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8ea51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8ea54 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10a8ea57 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8ea58 call 0x10a84e20 */
  push32(0x10a8ea5du); f_10a84e20();
  /* 10a8ea5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ea60 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8ea63 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10a8ea6a:;
  /* 10a8ea6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8ea6d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10a8ea74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ea77 pop edi */
  EDI = (pop32());
  /* 10a8ea78 pop esi */
  ESI = (pop32());
  /* 10a8ea79 pop ebx */
  EBX = (pop32());
  /* 10a8ea7a mov esp, ebp */
  ESP = (EBP);
  /* 10a8ea7c pop ebp */
  EBP = (pop32());
  /* 10a8ea7d ret  */
  ESPCHK(0x10a8e9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea80 @ 0x10a8ea80 (210 bytes, 63 insns) */
void f_10a8ea80(void) {
  FTRACE(0x10a8ea80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8ea80 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8ea81 mov ebp, esp */
  EBP = (ESP);
  /* 10a8ea83 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8ea84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ea87 cmp eax, dword ptr [0x10ab21bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ab21bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ea8d jae 0x10a8eab1 */
  if (!C.cf) goto L_10a8eab1;
  /* 10a8ea8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ea92 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a8ea95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ea98 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8ea9b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8ea9e mov eax, dword ptr [ecx*4 + 0x10ab2080] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ab2080)));
  /* 10a8eaa5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a8eaaa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a8eaad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8eaaf jne 0x10a8eac4 */
  if (!C.zf) goto L_10a8eac4;
L_10a8eab1:;
  /* 10a8eab1 call 0x10a8c260 */
  push32(0x10a8eab6u); f_10a8c260();
  /* 10a8eab6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a8eabc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8eabf jmp 0x10a8eb4e */
  goto L_10a8eb4e;
L_10a8eac4:;
  /* 10a8eac4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8eac7 push edx */
  push32((uint32_t)(EDX));
  /* 10a8eac8 call 0x10a8da80 */
  push32(0x10a8eacdu); f_10a8da80();
  /* 10a8eacd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ead0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ead3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a8ead6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ead9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a8eadc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a8eadf mov edx, dword ptr [eax*4 + 0x10ab2080] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ab2080)));
  /* 10a8eae6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10a8eaeb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10a8eaee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8eaf0 je 0x10a8eb2d */
  if (C.zf) goto L_10a8eb2d;
  /* 10a8eaf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8eaf5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8eaf6 call 0x10a8d900 */
  push32(0x10a8eafbu); f_10a8d900();
  /* 10a8eafb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8eafe push eax */
  push32((uint32_t)(EAX));
  /* 10a8eaff call dword ptr [0x10ab32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32c8))), 0x10a8eb05u);
  /* 10a8eb05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8eb07 jne 0x10a8eb14 */
  if (!C.zf) goto L_10a8eb14;
  /* 10a8eb09 call dword ptr [0x10ab3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3370))), 0x10a8eb0fu);
  /* 10a8eb0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8eb12 jmp 0x10a8eb1b */
  goto L_10a8eb1b;
L_10a8eb14:;
  /* 10a8eb14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a8eb1b:;
  /* 10a8eb1b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8eb1f jne 0x10a8eb23 */
  if (!C.zf) goto L_10a8eb23;
  /* 10a8eb21 jmp 0x10a8eb3f */
  goto L_10a8eb3f;
L_10a8eb23:;
  /* 10a8eb23 call 0x10a8c270 */
  push32(0x10a8eb28u); f_10a8c270();
  /* 10a8eb28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8eb2b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a8eb2d:;
  /* 10a8eb2d call 0x10a8c260 */
  push32(0x10a8eb32u); f_10a8c260();
  /* 10a8eb32 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a8eb38 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a8eb3f:;
  /* 10a8eb3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8eb42 push eax */
  push32((uint32_t)(EAX));
  /* 10a8eb43 call 0x10a8db10 */
  push32(0x10a8eb48u); f_10a8db10();
  /* 10a8eb48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8eb4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a8eb4e:;
  /* 10a8eb4e mov esp, ebp */
  ESP = (EBP);
  /* 10a8eb50 pop ebp */
  EBP = (pop32());
  /* 10a8eb51 ret  */
  ESPCHK(0x10a8ea80u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10a8eb60 (219 bytes, 64 insns) */
void f_10a8eb60(void) {
  FTRACE(0x10a8eb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8eb60 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8eb61 mov ebp, esp */
  EBP = (ESP);
  /* 10a8eb63 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8eb64 cmp dword ptr [0x10ab08bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab08bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8eb6b je 0x10a8ec01 */
  if (C.zf) goto L_10a8ec01;
  /* 10a8eb71 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10a8eb73 push 0x10aac3e8 */
  push32((uint32_t)(0x10aac3e8u));
  /* 10a8eb78 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8eb7a push 0xac */
  push32((uint32_t)(0xacu));
  /* 10a8eb7f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8eb81 call 0x10a847a0 */
  push32(0x10a8eb86u); f_10a847a0();
  /* 10a8eb86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8eb89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8eb8c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8eb90 jne 0x10a8eb9c */
  if (!C.zf) goto L_10a8eb9c;
  /* 10a8eb92 mov eax, 1 */
  EAX = (0x1u);
  /* 10a8eb97 jmp 0x10a8ec37 */
  goto L_10a8ec37;
L_10a8eb9c:;
  /* 10a8eb9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8eb9f push eax */
  push32((uint32_t)(EAX));
  /* 10a8eba0 call 0x10a8ec40 */
  push32(0x10a8eba5u); f_10a8ec40();
  /* 10a8eba5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8eba8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8ebaa je 0x10a8ebcd */
  if (C.zf) goto L_10a8ebcd;
  /* 10a8ebac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ebaf push ecx */
  push32((uint32_t)(ECX));
  /* 10a8ebb0 call 0x10a8f1d0 */
  push32(0x10a8ebb5u); f_10a8f1d0();
  /* 10a8ebb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ebb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8ebba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ebbd push edx */
  push32((uint32_t)(EDX));
  /* 10a8ebbe call 0x10a84e20 */
  push32(0x10a8ebc3u); f_10a84e20();
  /* 10a8ebc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ebc6 mov eax, 1 */
  EAX = (0x1u);
  /* 10a8ebcb jmp 0x10a8ec37 */
  goto L_10a8ec37;
L_10a8ebcd:;
  /* 10a8ebcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ebd0 mov dword ptr [0x10aafc98], eax */
  w32((uint32_t)(0x10aafc98), (EAX));
  /* 10a8ebd5 mov ecx, dword ptr [0x10ab08dc] */
  ECX = (r32((uint32_t)(0x10ab08dc)));
  /* 10a8ebdb push ecx */
  push32((uint32_t)(ECX));
  /* 10a8ebdc call 0x10a8f1d0 */
  push32(0x10a8ebe1u); f_10a8f1d0();
  /* 10a8ebe1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ebe4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8ebe6 mov edx, dword ptr [0x10ab08dc] */
  EDX = (r32((uint32_t)(0x10ab08dc)));
  /* 10a8ebec push edx */
  push32((uint32_t)(EDX));
  /* 10a8ebed call 0x10a84e20 */
  push32(0x10a8ebf2u); f_10a84e20();
  /* 10a8ebf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ebf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ebf8 mov dword ptr [0x10ab08dc], eax */
  w32((uint32_t)(0x10ab08dc), (EAX));
  /* 10a8ebfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8ebff jmp 0x10a8ec37 */
  goto L_10a8ec37;
L_10a8ec01:;
  /* 10a8ec01 mov dword ptr [0x10aafc98], 0x10aafca0 */
  w32((uint32_t)(0x10aafc98), (0x10aafca0u));
  /* 10a8ec0b mov ecx, dword ptr [0x10ab08dc] */
  ECX = (r32((uint32_t)(0x10ab08dc)));
  /* 10a8ec11 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8ec12 call 0x10a8f1d0 */
  push32(0x10a8ec17u); f_10a8f1d0();
  /* 10a8ec17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ec1a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8ec1c mov edx, dword ptr [0x10ab08dc] */
  EDX = (r32((uint32_t)(0x10ab08dc)));
  /* 10a8ec22 push edx */
  push32((uint32_t)(EDX));
  /* 10a8ec23 call 0x10a84e20 */
  push32(0x10a8ec28u); f_10a84e20();
  /* 10a8ec28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ec2b mov dword ptr [0x10ab08dc], 0 */
  w32((uint32_t)(0x10ab08dc), (0x0u));
  /* 10a8ec35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a8ec37:;
  /* 10a8ec37 mov esp, ebp */
  ESP = (EBP);
  /* 10a8ec39 pop ebp */
  EBP = (pop32());
  /* 10a8ec3a ret  */
  ESPCHK(0x10a8eb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec40 @ 0x10a8ec40 (1423 bytes, 533 insns) */
void f_10a8ec40(void) {
  FTRACE(0x10a8ec40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8ec40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8ec41 mov ebp, esp */
  EBP = (ESP);
  /* 10a8ec43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8ec46 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a8ec4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8ec4f mov ax, word ptr [0x10ab0916] */
  AX = (r16((uint32_t)(0x10ab0916)));
  /* 10a8ec55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8ec58 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ec5a mov cx, word ptr [0x10ab0918] */
  CX = (r16((uint32_t)(0x10ab0918)));
  /* 10a8ec61 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8ec64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ec68 jne 0x10a8ec72 */
  if (!C.zf) goto L_10a8ec72;
  /* 10a8ec6a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8ec6d jmp 0x10a8f1cb */
  goto L_10a8f1cb;
L_10a8ec72:;
  /* 10a8ec72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ec75 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ec78 push edx */
  push32((uint32_t)(EDX));
  /* 10a8ec79 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10a8ec7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ec7e push eax */
  push32((uint32_t)(EAX));
  /* 10a8ec7f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8ec81 call 0x10a92550 */
  push32(0x10a8ec86u); f_10a92550();
  /* 10a8ec86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ec89 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ec8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ec8e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ec91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ec94 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ec97 push edx */
  push32((uint32_t)(EDX));
  /* 10a8ec98 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10a8ec9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ec9d push eax */
  push32((uint32_t)(EAX));
  /* 10a8ec9e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8eca0 call 0x10a92550 */
  push32(0x10a8eca5u); f_10a92550();
  /* 10a8eca5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8eca8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ecab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ecad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ecb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ecb3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ecb6 push edx */
  push32((uint32_t)(EDX));
  /* 10a8ecb7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10a8ecb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ecbc push eax */
  push32((uint32_t)(EAX));
  /* 10a8ecbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8ecbf call 0x10a92550 */
  push32(0x10a8ecc4u); f_10a92550();
  /* 10a8ecc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ecc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ecca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8eccc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8eccf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ecd2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ecd5 push edx */
  push32((uint32_t)(EDX));
  /* 10a8ecd6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10a8ecd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ecdb push eax */
  push32((uint32_t)(EAX));
  /* 10a8ecdc push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8ecde call 0x10a92550 */
  push32(0x10a8ece3u); f_10a92550();
  /* 10a8ece3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ece6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ece9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8eceb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ecee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ecf1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ecf4 push edx */
  push32((uint32_t)(EDX));
  /* 10a8ecf5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10a8ecf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ecfa push eax */
  push32((uint32_t)(EAX));
  /* 10a8ecfb push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8ecfd call 0x10a92550 */
  push32(0x10a8ed02u); f_10a92550();
  /* 10a8ed02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ed05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ed08 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ed0a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ed0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ed10 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ed13 push edx */
  push32((uint32_t)(EDX));
  /* 10a8ed14 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10a8ed16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ed19 push eax */
  push32((uint32_t)(EAX));
  /* 10a8ed1a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8ed1c call 0x10a92550 */
  push32(0x10a8ed21u); f_10a92550();
  /* 10a8ed21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ed24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ed27 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ed29 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ed2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ed2f push edx */
  push32((uint32_t)(EDX));
  /* 10a8ed30 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10a8ed32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ed35 push eax */
  push32((uint32_t)(EAX));
  /* 10a8ed36 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8ed38 call 0x10a92550 */
  push32(0x10a8ed3du); f_10a92550();
  /* 10a8ed3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ed40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ed43 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ed45 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ed48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ed4b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ed4e push edx */
  push32((uint32_t)(EDX));
  /* 10a8ed4f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10a8ed51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ed54 push eax */
  push32((uint32_t)(EAX));
  /* 10a8ed55 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8ed57 call 0x10a92550 */
  push32(0x10a8ed5cu); f_10a92550();
  /* 10a8ed5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ed5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ed62 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ed64 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ed67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ed6a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ed6d push edx */
  push32((uint32_t)(EDX));
  /* 10a8ed6e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10a8ed70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ed73 push eax */
  push32((uint32_t)(EAX));
  /* 10a8ed74 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8ed76 call 0x10a92550 */
  push32(0x10a8ed7bu); f_10a92550();
  /* 10a8ed7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ed7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ed81 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ed83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ed86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ed89 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ed8c push edx */
  push32((uint32_t)(EDX));
  /* 10a8ed8d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10a8ed8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ed92 push eax */
  push32((uint32_t)(EAX));
  /* 10a8ed93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8ed95 call 0x10a92550 */
  push32(0x10a8ed9au); f_10a92550();
  /* 10a8ed9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ed9d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8eda0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8eda2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8eda5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8eda8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8edab push edx */
  push32((uint32_t)(EDX));
  /* 10a8edac push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10a8edae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8edb1 push eax */
  push32((uint32_t)(EAX));
  /* 10a8edb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8edb4 call 0x10a92550 */
  push32(0x10a8edb9u); f_10a92550();
  /* 10a8edb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8edbc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8edbf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8edc1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8edc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8edc7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8edca push edx */
  push32((uint32_t)(EDX));
  /* 10a8edcb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10a8edcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8edd0 push eax */
  push32((uint32_t)(EAX));
  /* 10a8edd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8edd3 call 0x10a92550 */
  push32(0x10a8edd8u); f_10a92550();
  /* 10a8edd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8eddb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8edde or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ede0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ede3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ede6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ede9 push edx */
  push32((uint32_t)(EDX));
  /* 10a8edea push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10a8edec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8edef push eax */
  push32((uint32_t)(EAX));
  /* 10a8edf0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8edf2 call 0x10a92550 */
  push32(0x10a8edf7u); f_10a92550();
  /* 10a8edf7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8edfa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8edfd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8edff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ee02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ee05 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ee08 push edx */
  push32((uint32_t)(EDX));
  /* 10a8ee09 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10a8ee0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ee0e push eax */
  push32((uint32_t)(EAX));
  /* 10a8ee0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8ee11 call 0x10a92550 */
  push32(0x10a8ee16u); f_10a92550();
  /* 10a8ee16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ee19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ee1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ee1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ee21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ee24 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ee27 push edx */
  push32((uint32_t)(EDX));
  /* 10a8ee28 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10a8ee2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ee2d push eax */
  push32((uint32_t)(EAX));
  /* 10a8ee2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8ee30 call 0x10a92550 */
  push32(0x10a8ee35u); f_10a92550();
  /* 10a8ee35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ee38 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ee3b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ee3d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ee40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ee43 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ee46 push edx */
  push32((uint32_t)(EDX));
  /* 10a8ee47 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10a8ee49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ee4c push eax */
  push32((uint32_t)(EAX));
  /* 10a8ee4d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8ee4f call 0x10a92550 */
  push32(0x10a8ee54u); f_10a92550();
  /* 10a8ee54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ee57 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ee5a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ee5c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ee5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ee62 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ee65 push edx */
  push32((uint32_t)(EDX));
  /* 10a8ee66 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10a8ee68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ee6b push eax */
  push32((uint32_t)(EAX));
  /* 10a8ee6c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8ee6e call 0x10a92550 */
  push32(0x10a8ee73u); f_10a92550();
  /* 10a8ee73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ee76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ee79 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ee7b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ee7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ee81 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ee84 push edx */
  push32((uint32_t)(EDX));
  /* 10a8ee85 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10a8ee87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ee8a push eax */
  push32((uint32_t)(EAX));
  /* 10a8ee8b push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8ee8d call 0x10a92550 */
  push32(0x10a8ee92u); f_10a92550();
  /* 10a8ee92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ee95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ee98 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ee9a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ee9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8eea0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8eea3 push edx */
  push32((uint32_t)(EDX));
  /* 10a8eea4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10a8eea6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8eea9 push eax */
  push32((uint32_t)(EAX));
  /* 10a8eeaa push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8eeac call 0x10a92550 */
  push32(0x10a8eeb1u); f_10a92550();
  /* 10a8eeb1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8eeb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8eeb7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8eeb9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8eebc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8eebf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8eec2 push edx */
  push32((uint32_t)(EDX));
  /* 10a8eec3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10a8eec5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8eec8 push eax */
  push32((uint32_t)(EAX));
  /* 10a8eec9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8eecb call 0x10a92550 */
  push32(0x10a8eed0u); f_10a92550();
  /* 10a8eed0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8eed3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8eed6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8eed8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8eedb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8eede add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8eee1 push edx */
  push32((uint32_t)(EDX));
  /* 10a8eee2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10a8eee4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8eee7 push eax */
  push32((uint32_t)(EAX));
  /* 10a8eee8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8eeea call 0x10a92550 */
  push32(0x10a8eeefu); f_10a92550();
  /* 10a8eeef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8eef2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8eef5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8eef7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8eefa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8eefd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ef00 push edx */
  push32((uint32_t)(EDX));
  /* 10a8ef01 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10a8ef03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ef06 push eax */
  push32((uint32_t)(EAX));
  /* 10a8ef07 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8ef09 call 0x10a92550 */
  push32(0x10a8ef0eu); f_10a92550();
  /* 10a8ef0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ef11 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ef14 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ef16 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ef19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ef1c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ef1f push edx */
  push32((uint32_t)(EDX));
  /* 10a8ef20 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10a8ef22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ef25 push eax */
  push32((uint32_t)(EAX));
  /* 10a8ef26 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8ef28 call 0x10a92550 */
  push32(0x10a8ef2du); f_10a92550();
  /* 10a8ef2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ef30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ef33 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ef35 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ef38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ef3b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ef3e push edx */
  push32((uint32_t)(EDX));
  /* 10a8ef3f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10a8ef41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ef44 push eax */
  push32((uint32_t)(EAX));
  /* 10a8ef45 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8ef47 call 0x10a92550 */
  push32(0x10a8ef4cu); f_10a92550();
  /* 10a8ef4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ef4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ef52 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ef54 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ef57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ef5a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ef5d push edx */
  push32((uint32_t)(EDX));
  /* 10a8ef5e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10a8ef60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ef63 push eax */
  push32((uint32_t)(EAX));
  /* 10a8ef64 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8ef66 call 0x10a92550 */
  push32(0x10a8ef6bu); f_10a92550();
  /* 10a8ef6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ef6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ef71 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ef73 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ef76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ef79 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ef7c push edx */
  push32((uint32_t)(EDX));
  /* 10a8ef7d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10a8ef7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8ef82 push eax */
  push32((uint32_t)(EAX));
  /* 10a8ef83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8ef85 call 0x10a92550 */
  push32(0x10a8ef8au); f_10a92550();
  /* 10a8ef8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ef8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8ef90 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8ef92 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8ef95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8ef98 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ef9b push edx */
  push32((uint32_t)(EDX));
  /* 10a8ef9c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10a8ef9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8efa1 push eax */
  push32((uint32_t)(EAX));
  /* 10a8efa2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8efa4 call 0x10a92550 */
  push32(0x10a8efa9u); f_10a92550();
  /* 10a8efa9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8efac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8efaf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8efb1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8efb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8efb7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8efba push edx */
  push32((uint32_t)(EDX));
  /* 10a8efbb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10a8efbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8efc0 push eax */
  push32((uint32_t)(EAX));
  /* 10a8efc1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8efc3 call 0x10a92550 */
  push32(0x10a8efc8u); f_10a92550();
  /* 10a8efc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8efcb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8efce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8efd0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8efd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8efd6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8efd9 push edx */
  push32((uint32_t)(EDX));
  /* 10a8efda push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10a8efdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8efdf push eax */
  push32((uint32_t)(EAX));
  /* 10a8efe0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8efe2 call 0x10a92550 */
  push32(0x10a8efe7u); f_10a92550();
  /* 10a8efe7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8efea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8efed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8efef mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8eff2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8eff5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8eff8 push edx */
  push32((uint32_t)(EDX));
  /* 10a8eff9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10a8effb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8effe push eax */
  push32((uint32_t)(EAX));
  /* 10a8efff push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f001 call 0x10a92550 */
  push32(0x10a8f006u); f_10a92550();
  /* 10a8f006 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f009 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8f00c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f00e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8f011 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f014 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f017 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f018 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10a8f01a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f01d push eax */
  push32((uint32_t)(EAX));
  /* 10a8f01e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f020 call 0x10a92550 */
  push32(0x10a8f025u); f_10a92550();
  /* 10a8f025 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f028 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8f02b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f02d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8f030 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f033 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f036 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f037 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10a8f039 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f03c push eax */
  push32((uint32_t)(EAX));
  /* 10a8f03d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f03f call 0x10a92550 */
  push32(0x10a8f044u); f_10a92550();
  /* 10a8f044 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f047 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8f04a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f04c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8f04f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f052 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f058 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f059 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10a8f05b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f05e push eax */
  push32((uint32_t)(EAX));
  /* 10a8f05f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f061 call 0x10a92550 */
  push32(0x10a8f066u); f_10a92550();
  /* 10a8f066 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f069 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8f06c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f06e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8f071 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f074 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f07a push edx */
  push32((uint32_t)(EDX));
  /* 10a8f07b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10a8f07d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f080 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f081 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f083 call 0x10a92550 */
  push32(0x10a8f088u); f_10a92550();
  /* 10a8f088 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f08b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8f08e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f090 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8f093 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f096 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f09c push edx */
  push32((uint32_t)(EDX));
  /* 10a8f09d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10a8f09f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f0a2 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f0a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f0a5 call 0x10a92550 */
  push32(0x10a8f0aau); f_10a92550();
  /* 10a8f0aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f0ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8f0b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f0b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8f0b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f0b8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f0be push edx */
  push32((uint32_t)(EDX));
  /* 10a8f0bf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10a8f0c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f0c4 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f0c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f0c7 call 0x10a92550 */
  push32(0x10a8f0ccu); f_10a92550();
  /* 10a8f0cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f0cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8f0d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f0d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8f0d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f0da add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f0e0 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f0e1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10a8f0e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f0e6 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f0e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f0e9 call 0x10a92550 */
  push32(0x10a8f0eeu); f_10a92550();
  /* 10a8f0ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f0f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8f0f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f0f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8f0f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f0fc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f102 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f103 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10a8f105 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f108 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f109 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f10b call 0x10a92550 */
  push32(0x10a8f110u); f_10a92550();
  /* 10a8f110 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f113 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8f116 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f118 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8f11b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f11e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f124 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f125 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10a8f127 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f12a push eax */
  push32((uint32_t)(EAX));
  /* 10a8f12b push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f12d call 0x10a92550 */
  push32(0x10a8f132u); f_10a92550();
  /* 10a8f132 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f135 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8f138 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f13a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8f13d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f140 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f146 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f147 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10a8f149 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f14c push eax */
  push32((uint32_t)(EAX));
  /* 10a8f14d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f14f call 0x10a92550 */
  push32(0x10a8f154u); f_10a92550();
  /* 10a8f154 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f157 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8f15a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f15c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8f15f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f162 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f168 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f169 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10a8f16b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8f16e push eax */
  push32((uint32_t)(EAX));
  /* 10a8f16f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f171 call 0x10a92550 */
  push32(0x10a8f176u); f_10a92550();
  /* 10a8f176 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f179 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8f17c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f17e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8f181 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f184 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f18a push edx */
  push32((uint32_t)(EDX));
  /* 10a8f18b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10a8f18d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8f190 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f191 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f193 call 0x10a92550 */
  push32(0x10a8f198u); f_10a92550();
  /* 10a8f198 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f19b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8f19e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f1a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8f1a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f1a6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f1ac push edx */
  push32((uint32_t)(EDX));
  /* 10a8f1ad push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10a8f1b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8f1b5 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f1b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f1b8 call 0x10a92550 */
  push32(0x10a8f1bdu); f_10a92550();
  /* 10a8f1bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f1c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a8f1c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f1c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a8f1c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10a8f1cb:;
  /* 10a8f1cb mov esp, ebp */
  ESP = (EBP);
  /* 10a8f1cd pop ebp */
  EBP = (pop32());
  /* 10a8f1ce ret  */
  ESPCHK(0x10a8ec40u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10a8f1d0 (779 bytes, 265 insns) */
void f_10a8f1d0(void) {
  FTRACE(0x10a8f1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8f1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8f1d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8f1d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8f1d7 jne 0x10a8f1de */
  if (!C.zf) goto L_10a8f1de;
  /* 10a8f1d9 jmp 0x10a8f4d9 */
  goto L_10a8f4d9;
L_10a8f1de:;
  /* 10a8f1de push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f1e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f1e3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a8f1e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f1e7 call 0x10a84e20 */
  push32(0x10a8f1ecu); f_10a84e20();
  /* 10a8f1ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f1ef push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f1f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f1f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a8f1f7 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f1f8 call 0x10a84e20 */
  push32(0x10a8f1fdu); f_10a84e20();
  /* 10a8f1fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f200 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f202 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f205 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a8f208 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f209 call 0x10a84e20 */
  push32(0x10a8f20eu); f_10a84e20();
  /* 10a8f20e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f211 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f213 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f216 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a8f219 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f21a call 0x10a84e20 */
  push32(0x10a8f21fu); f_10a84e20();
  /* 10a8f21f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f222 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f224 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f227 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a8f22a push eax */
  push32((uint32_t)(EAX));
  /* 10a8f22b call 0x10a84e20 */
  push32(0x10a8f230u); f_10a84e20();
  /* 10a8f230 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f233 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f235 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f238 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a8f23b push edx */
  push32((uint32_t)(EDX));
  /* 10a8f23c call 0x10a84e20 */
  push32(0x10a8f241u); f_10a84e20();
  /* 10a8f241 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f244 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f249 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a8f24b push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f24c call 0x10a84e20 */
  push32(0x10a8f251u); f_10a84e20();
  /* 10a8f251 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f254 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f256 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f259 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10a8f25c push eax */
  push32((uint32_t)(EAX));
  /* 10a8f25d call 0x10a84e20 */
  push32(0x10a8f262u); f_10a84e20();
  /* 10a8f262 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f265 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f267 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f26a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10a8f26d push edx */
  push32((uint32_t)(EDX));
  /* 10a8f26e call 0x10a84e20 */
  push32(0x10a8f273u); f_10a84e20();
  /* 10a8f273 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f276 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f278 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f27b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10a8f27e push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f27f call 0x10a84e20 */
  push32(0x10a8f284u); f_10a84e20();
  /* 10a8f284 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f287 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f289 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f28c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10a8f28f push eax */
  push32((uint32_t)(EAX));
  /* 10a8f290 call 0x10a84e20 */
  push32(0x10a8f295u); f_10a84e20();
  /* 10a8f295 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f298 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f29a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f29d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10a8f2a0 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f2a1 call 0x10a84e20 */
  push32(0x10a8f2a6u); f_10a84e20();
  /* 10a8f2a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f2a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f2ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f2ae mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10a8f2b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f2b2 call 0x10a84e20 */
  push32(0x10a8f2b7u); f_10a84e20();
  /* 10a8f2b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f2ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f2bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f2bf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a8f2c2 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f2c3 call 0x10a84e20 */
  push32(0x10a8f2c8u); f_10a84e20();
  /* 10a8f2c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f2cb push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f2cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f2d0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10a8f2d3 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f2d4 call 0x10a84e20 */
  push32(0x10a8f2d9u); f_10a84e20();
  /* 10a8f2d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f2dc push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f2de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f2e1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10a8f2e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f2e5 call 0x10a84e20 */
  push32(0x10a8f2eau); f_10a84e20();
  /* 10a8f2ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f2ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f2ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f2f2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10a8f2f5 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f2f6 call 0x10a84e20 */
  push32(0x10a8f2fbu); f_10a84e20();
  /* 10a8f2fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f2fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f300 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f303 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10a8f306 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f307 call 0x10a84e20 */
  push32(0x10a8f30cu); f_10a84e20();
  /* 10a8f30c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f30f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f311 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f314 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10a8f317 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f318 call 0x10a84e20 */
  push32(0x10a8f31du); f_10a84e20();
  /* 10a8f31d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f320 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f322 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f325 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10a8f328 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f329 call 0x10a84e20 */
  push32(0x10a8f32eu); f_10a84e20();
  /* 10a8f32e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f331 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f333 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f336 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10a8f339 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f33a call 0x10a84e20 */
  push32(0x10a8f33fu); f_10a84e20();
  /* 10a8f33f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f342 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f344 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f347 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10a8f34a push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f34b call 0x10a84e20 */
  push32(0x10a8f350u); f_10a84e20();
  /* 10a8f350 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f353 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f355 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f358 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10a8f35b push eax */
  push32((uint32_t)(EAX));
  /* 10a8f35c call 0x10a84e20 */
  push32(0x10a8f361u); f_10a84e20();
  /* 10a8f361 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f364 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f366 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f369 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10a8f36c push edx */
  push32((uint32_t)(EDX));
  /* 10a8f36d call 0x10a84e20 */
  push32(0x10a8f372u); f_10a84e20();
  /* 10a8f372 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f375 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f377 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f37a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10a8f37d push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f37e call 0x10a84e20 */
  push32(0x10a8f383u); f_10a84e20();
  /* 10a8f383 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f386 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f388 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f38b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10a8f38e push eax */
  push32((uint32_t)(EAX));
  /* 10a8f38f call 0x10a84e20 */
  push32(0x10a8f394u); f_10a84e20();
  /* 10a8f394 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f397 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f399 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f39c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10a8f39f push edx */
  push32((uint32_t)(EDX));
  /* 10a8f3a0 call 0x10a84e20 */
  push32(0x10a8f3a5u); f_10a84e20();
  /* 10a8f3a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f3a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f3aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f3ad mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10a8f3b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f3b1 call 0x10a84e20 */
  push32(0x10a8f3b6u); f_10a84e20();
  /* 10a8f3b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f3b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f3bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f3be mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10a8f3c1 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f3c2 call 0x10a84e20 */
  push32(0x10a8f3c7u); f_10a84e20();
  /* 10a8f3c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f3ca push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f3cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f3cf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10a8f3d2 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f3d3 call 0x10a84e20 */
  push32(0x10a8f3d8u); f_10a84e20();
  /* 10a8f3d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f3db push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f3dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f3e0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10a8f3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f3e4 call 0x10a84e20 */
  push32(0x10a8f3e9u); f_10a84e20();
  /* 10a8f3e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f3ec push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f3ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f3f1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10a8f3f4 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f3f5 call 0x10a84e20 */
  push32(0x10a8f3fau); f_10a84e20();
  /* 10a8f3fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f3fd push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f3ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f402 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10a8f408 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f409 call 0x10a84e20 */
  push32(0x10a8f40eu); f_10a84e20();
  /* 10a8f40e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f411 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f413 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f416 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10a8f41c push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f41d call 0x10a84e20 */
  push32(0x10a8f422u); f_10a84e20();
  /* 10a8f422 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f425 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f427 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f42a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10a8f430 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f431 call 0x10a84e20 */
  push32(0x10a8f436u); f_10a84e20();
  /* 10a8f436 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f439 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f43b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f43e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10a8f444 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f445 call 0x10a84e20 */
  push32(0x10a8f44au); f_10a84e20();
  /* 10a8f44a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f44d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f44f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f452 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10a8f458 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f459 call 0x10a84e20 */
  push32(0x10a8f45eu); f_10a84e20();
  /* 10a8f45e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f461 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f463 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f466 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10a8f46c push eax */
  push32((uint32_t)(EAX));
  /* 10a8f46d call 0x10a84e20 */
  push32(0x10a8f472u); f_10a84e20();
  /* 10a8f472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f475 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f477 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f47a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10a8f480 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f481 call 0x10a84e20 */
  push32(0x10a8f486u); f_10a84e20();
  /* 10a8f486 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f489 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f48b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f48e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10a8f494 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f495 call 0x10a84e20 */
  push32(0x10a8f49au); f_10a84e20();
  /* 10a8f49a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f49d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f49f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f4a2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10a8f4a8 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f4a9 call 0x10a84e20 */
  push32(0x10a8f4aeu); f_10a84e20();
  /* 10a8f4ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f4b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f4b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f4b6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10a8f4bc push edx */
  push32((uint32_t)(EDX));
  /* 10a8f4bd call 0x10a84e20 */
  push32(0x10a8f4c2u); f_10a84e20();
  /* 10a8f4c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f4c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f4c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f4ca mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10a8f4d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f4d1 call 0x10a84e20 */
  push32(0x10a8f4d6u); f_10a84e20();
  /* 10a8f4d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8f4d9:;
  /* 10a8f4d9 pop ebp */
  EBP = (pop32());
  /* 10a8f4da ret  */
  ESPCHK(0x10a8f1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4e0 @ 0x10a8f4e0 (678 bytes, 180 insns) */
void f_10a8f4e0(void) {
  FTRACE(0x10a8f4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8f4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8f4e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8f4e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8f4e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a8f4ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8f4ef mov ax, word ptr [0x10ab0912] */
  AX = (r16((uint32_t)(0x10ab0912)));
  /* 10a8f4f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8f4f8 cmp dword ptr [0x10ab08b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab08b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8f4ff je 0x10a8f65a */
  if (C.zf) goto L_10a8f65a;
  /* 10a8f505 push 0x10ab08e0 */
  push32((uint32_t)(0x10ab08e0u));
  /* 10a8f50a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10a8f50c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f50f push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f510 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f512 call 0x10a92550 */
  push32(0x10a8f517u); f_10a92550();
  /* 10a8f517 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f51a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8f51d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8f51f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a8f522 push 0x10ab08e4 */
  push32((uint32_t)(0x10ab08e4u));
  /* 10a8f527 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10a8f529 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f52c push eax */
  push32((uint32_t)(EAX));
  /* 10a8f52d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f52f call 0x10a92550 */
  push32(0x10a8f534u); f_10a92550();
  /* 10a8f534 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f537 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8f53a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f53c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8f53f push 0x10ab08e8 */
  push32((uint32_t)(0x10ab08e8u));
  /* 10a8f544 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10a8f546 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f549 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f54a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f54c call 0x10a92550 */
  push32(0x10a8f551u); f_10a92550();
  /* 10a8f551 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f554 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8f557 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f559 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8f55c mov edx, dword ptr [0x10ab08e8] */
  EDX = (r32((uint32_t)(0x10ab08e8)));
  /* 10a8f562 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f563 call 0x10a8f790 */
  push32(0x10a8f568u); f_10a8f790();
  /* 10a8f568 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f56b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8f56f je 0x10a8f5c9 */
  if (C.zf) goto L_10a8f5c9;
  /* 10a8f571 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f573 mov eax, dword ptr [0x10ab08e0] */
  EAX = (r32((uint32_t)(0x10ab08e0)));
  /* 10a8f578 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f579 call 0x10a84e20 */
  push32(0x10a8f57eu); f_10a84e20();
  /* 10a8f57e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f581 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f583 mov ecx, dword ptr [0x10ab08e4] */
  ECX = (r32((uint32_t)(0x10ab08e4)));
  /* 10a8f589 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f58a call 0x10a84e20 */
  push32(0x10a8f58fu); f_10a84e20();
  /* 10a8f58f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f592 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f594 mov edx, dword ptr [0x10ab08e8] */
  EDX = (r32((uint32_t)(0x10ab08e8)));
  /* 10a8f59a push edx */
  push32((uint32_t)(EDX));
  /* 10a8f59b call 0x10a84e20 */
  push32(0x10a8f5a0u); f_10a84e20();
  /* 10a8f5a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f5a3 mov dword ptr [0x10ab08e0], 0 */
  w32((uint32_t)(0x10ab08e0), (0x0u));
  /* 10a8f5ad mov dword ptr [0x10ab08e4], 0 */
  w32((uint32_t)(0x10ab08e4), (0x0u));
  /* 10a8f5b7 mov dword ptr [0x10ab08e8], 0 */
  w32((uint32_t)(0x10ab08e8), (0x0u));
  /* 10a8f5c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8f5c4 jmp 0x10a8f782 */
  goto L_10a8f782;
L_10a8f5c9:;
  /* 10a8f5c9 mov eax, dword ptr [0x10aafd88] */
  EAX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f5ce cmp dword ptr [eax], 0x10aafd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10aafd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8f5d4 je 0x10a8f610 */
  if (C.zf) goto L_10a8f610;
  /* 10a8f5d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f5d8 mov ecx, dword ptr [0x10aafd88] */
  ECX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f5de mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a8f5e0 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f5e1 call 0x10a84e20 */
  push32(0x10a8f5e6u); f_10a84e20();
  /* 10a8f5e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f5e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f5eb mov eax, dword ptr [0x10aafd88] */
  EAX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f5f0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a8f5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f5f4 call 0x10a84e20 */
  push32(0x10a8f5f9u); f_10a84e20();
  /* 10a8f5f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f5fc push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f5fe mov edx, dword ptr [0x10aafd88] */
  EDX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f604 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a8f607 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f608 call 0x10a84e20 */
  push32(0x10a8f60du); f_10a84e20();
  /* 10a8f60d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8f610:;
  /* 10a8f610 mov ecx, dword ptr [0x10aafd88] */
  ECX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f616 mov edx, dword ptr [0x10ab08e0] */
  EDX = (r32((uint32_t)(0x10ab08e0)));
  /* 10a8f61c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10a8f61e mov eax, dword ptr [0x10aafd88] */
  EAX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f623 mov ecx, dword ptr [0x10ab08e4] */
  ECX = (r32((uint32_t)(0x10ab08e4)));
  /* 10a8f629 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10a8f62c mov edx, dword ptr [0x10aafd88] */
  EDX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f632 mov eax, dword ptr [0x10ab08e8] */
  EAX = (r32((uint32_t)(0x10ab08e8)));
  /* 10a8f637 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10a8f63a mov ecx, dword ptr [0x10aafd88] */
  ECX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f640 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a8f642 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a8f644 mov byte ptr [0x10aaeea8], al */
  w8((uint32_t)(0x10aaeea8), (AL));
  /* 10a8f649 mov dword ptr [0x10aaeeac], 1 */
  w32((uint32_t)(0x10aaeeac), (0x1u));
  /* 10a8f653 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8f655 jmp 0x10a8f782 */
  goto L_10a8f782;
L_10a8f65a:;
  /* 10a8f65a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f65c mov ecx, dword ptr [0x10ab08e0] */
  ECX = (r32((uint32_t)(0x10ab08e0)));
  /* 10a8f662 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f663 call 0x10a84e20 */
  push32(0x10a8f668u); f_10a84e20();
  /* 10a8f668 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f66b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f66d mov edx, dword ptr [0x10ab08e4] */
  EDX = (r32((uint32_t)(0x10ab08e4)));
  /* 10a8f673 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f674 call 0x10a84e20 */
  push32(0x10a8f679u); f_10a84e20();
  /* 10a8f679 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f67c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f67e mov eax, dword ptr [0x10ab08e8] */
  EAX = (r32((uint32_t)(0x10ab08e8)));
  /* 10a8f683 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f684 call 0x10a84e20 */
  push32(0x10a8f689u); f_10a84e20();
  /* 10a8f689 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f68c mov dword ptr [0x10ab08e0], 0 */
  w32((uint32_t)(0x10ab08e0), (0x0u));
  /* 10a8f696 mov dword ptr [0x10ab08e4], 0 */
  w32((uint32_t)(0x10ab08e4), (0x0u));
  /* 10a8f6a0 mov dword ptr [0x10ab08e8], 0 */
  w32((uint32_t)(0x10ab08e8), (0x0u));
  /* 10a8f6aa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10a8f6af push 0x10aac3f4 */
  push32((uint32_t)(0x10aac3f4u));
  /* 10a8f6b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f6b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f6b8 call 0x10a84390 */
  push32(0x10a8f6bdu); f_10a84390();
  /* 10a8f6bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f6c0 mov ecx, dword ptr [0x10aafd88] */
  ECX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f6c6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a8f6c8 mov edx, dword ptr [0x10aafd88] */
  EDX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f6ce cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8f6d1 jne 0x10a8f6db */
  if (!C.zf) goto L_10a8f6db;
  /* 10a8f6d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8f6d6 jmp 0x10a8f782 */
  goto L_10a8f782;
L_10a8f6db:;
  /* 10a8f6db push 0x10aac3c4 */
  push32((uint32_t)(0x10aac3c4u));
  /* 10a8f6e0 mov eax, dword ptr [0x10aafd88] */
  EAX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f6e5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a8f6e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f6e8 call 0x10a87340 */
  push32(0x10a8f6edu); f_10a87340();
  /* 10a8f6ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f6f0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10a8f6f5 push 0x10aac3f4 */
  push32((uint32_t)(0x10aac3f4u));
  /* 10a8f6fa push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f6fc push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f6fe call 0x10a84390 */
  push32(0x10a8f703u); f_10a84390();
  /* 10a8f703 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f706 mov edx, dword ptr [0x10aafd88] */
  EDX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f70c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10a8f70f mov eax, dword ptr [0x10aafd88] */
  EAX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f714 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8f718 jne 0x10a8f71f */
  if (!C.zf) goto L_10a8f71f;
  /* 10a8f71a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8f71d jmp 0x10a8f782 */
  goto L_10a8f782;
L_10a8f71f:;
  /* 10a8f71f mov ecx, dword ptr [0x10aafd88] */
  ECX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f725 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a8f728 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10a8f72b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10a8f730 push 0x10aac3f4 */
  push32((uint32_t)(0x10aac3f4u));
  /* 10a8f735 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f737 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f739 call 0x10a84390 */
  push32(0x10a8f73eu); f_10a84390();
  /* 10a8f73e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f741 mov ecx, dword ptr [0x10aafd88] */
  ECX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f747 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10a8f74a mov edx, dword ptr [0x10aafd88] */
  EDX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f750 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8f754 jne 0x10a8f75b */
  if (!C.zf) goto L_10a8f75b;
  /* 10a8f756 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8f759 jmp 0x10a8f782 */
  goto L_10a8f782;
L_10a8f75b:;
  /* 10a8f75b mov eax, dword ptr [0x10aafd88] */
  EAX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f760 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a8f763 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10a8f766 mov edx, dword ptr [0x10aafd88] */
  EDX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f76c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a8f76e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a8f770 mov byte ptr [0x10aaeea8], cl */
  w8((uint32_t)(0x10aaeea8), (CL));
  /* 10a8f776 mov dword ptr [0x10aaeeac], 1 */
  w32((uint32_t)(0x10aaeeac), (0x1u));
  /* 10a8f780 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a8f782:;
  /* 10a8f782 mov esp, ebp */
  ESP = (EBP);
  /* 10a8f784 pop ebp */
  EBP = (pop32());
  /* 10a8f785 ret  */
  ESPCHK(0x10a8f4e0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10a8f790 (125 bytes, 49 insns) */
void f_10a8f790(void) {
  FTRACE(0x10a8f790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8f790 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8f791 mov ebp, esp */
  EBP = (ESP);
  /* 10a8f793 push ecx */
  push32((uint32_t)(ECX));
L_10a8f794:;
  /* 10a8f794 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f797 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a8f79a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8f79c je 0x10a8f809 */
  if (C.zf) goto L_10a8f809;
  /* 10a8f79e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f7a1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a8f7a4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8f7a7 jl 0x10a8f7cd */
  if ((C.sf!=C.of)) goto L_10a8f7cd;
  /* 10a8f7a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f7ac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a8f7af cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8f7b2 jg 0x10a8f7cd */
  if ((!C.zf&&C.sf==C.of)) goto L_10a8f7cd;
  /* 10a8f7b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f7b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a8f7ba sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8f7bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f7c0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10a8f7c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f7c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f7c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a8f7cb jmp 0x10a8f807 */
  goto L_10a8f807;
L_10a8f7cd:;
  /* 10a8f7cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f7d0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a8f7d3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8f7d6 jne 0x10a8f7fe */
  if (!C.zf) goto L_10a8f7fe;
  /* 10a8f7d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f7db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a8f7de:;
  /* 10a8f7de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f7e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f7e4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10a8f7e7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a8f7e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f7ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f7ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a8f7f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f7f5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a8f7f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8f7fa jne 0x10a8f7de */
  if (!C.zf) goto L_10a8f7de;
  /* 10a8f7fc jmp 0x10a8f807 */
  goto L_10a8f807;
L_10a8f7fe:;
  /* 10a8f7fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f801 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f804 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10a8f807:;
  /* 10a8f807 jmp 0x10a8f794 */
  goto L_10a8f794;
L_10a8f809:;
  /* 10a8f809 mov esp, ebp */
  ESP = (EBP);
  /* 10a8f80b pop ebp */
  EBP = (pop32());
  /* 10a8f80c ret  */
  ESPCHK(0x10a8f790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f810 @ 0x10a8f810 (304 bytes, 85 insns) */
void f_10a8f810(void) {
  FTRACE(0x10a8f810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8f810 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8f811 mov ebp, esp */
  EBP = (ESP);
  /* 10a8f813 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f814 cmp dword ptr [0x10ab08b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab08b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8f81b je 0x10a8f8dc */
  if (C.zf) goto L_10a8f8dc;
  /* 10a8f821 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10a8f823 push 0x10aac400 */
  push32((uint32_t)(0x10aac400u));
  /* 10a8f828 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f82a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10a8f82c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f82e call 0x10a847a0 */
  push32(0x10a8f833u); f_10a847a0();
  /* 10a8f833 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f836 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8f839 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8f83d jne 0x10a8f849 */
  if (!C.zf) goto L_10a8f849;
  /* 10a8f83f mov eax, 1 */
  EAX = (0x1u);
  /* 10a8f844 jmp 0x10a8f93c */
  goto L_10a8f93c;
L_10a8f849:;
  /* 10a8f849 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f84c push eax */
  push32((uint32_t)(EAX));
  /* 10a8f84d call 0x10a8f940 */
  push32(0x10a8f852u); f_10a8f940();
  /* 10a8f852 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f855 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8f857 je 0x10a8f87d */
  if (C.zf) goto L_10a8f87d;
  /* 10a8f859 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f85c push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f85d call 0x10a8fbd0 */
  push32(0x10a8f862u); f_10a8fbd0();
  /* 10a8f862 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f865 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f867 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f86a push edx */
  push32((uint32_t)(EDX));
  /* 10a8f86b call 0x10a84e20 */
  push32(0x10a8f870u); f_10a84e20();
  /* 10a8f870 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f873 mov eax, 1 */
  EAX = (0x1u);
  /* 10a8f878 jmp 0x10a8f93c */
  goto L_10a8f93c;
L_10a8f87d:;
  /* 10a8f87d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f880 mov ecx, dword ptr [0x10aafd88] */
  ECX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f886 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a8f888 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a8f88a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f88d mov ecx, dword ptr [0x10aafd88] */
  ECX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f893 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a8f896 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10a8f899 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f89c mov ecx, dword ptr [0x10aafd88] */
  ECX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f8a2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10a8f8a5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10a8f8a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f8ab mov dword ptr [0x10aafd88], eax */
  w32((uint32_t)(0x10aafd88), (EAX));
  /* 10a8f8b0 mov ecx, dword ptr [0x10ab08ec] */
  ECX = (r32((uint32_t)(0x10ab08ec)));
  /* 10a8f8b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f8b7 call 0x10a8fbd0 */
  push32(0x10a8f8bcu); f_10a8fbd0();
  /* 10a8f8bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f8bf push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f8c1 mov edx, dword ptr [0x10ab08ec] */
  EDX = (r32((uint32_t)(0x10ab08ec)));
  /* 10a8f8c7 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f8c8 call 0x10a84e20 */
  push32(0x10a8f8cdu); f_10a84e20();
  /* 10a8f8cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f8d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f8d3 mov dword ptr [0x10ab08ec], eax */
  w32((uint32_t)(0x10ab08ec), (EAX));
  /* 10a8f8d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8f8da jmp 0x10a8f93c */
  goto L_10a8f93c;
L_10a8f8dc:;
  /* 10a8f8dc mov ecx, dword ptr [0x10aafd88] */
  ECX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f8e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a8f8e4 mov dword ptr [0x10aafd58], edx */
  w32((uint32_t)(0x10aafd58), (EDX));
  /* 10a8f8ea mov eax, dword ptr [0x10aafd88] */
  EAX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f8ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a8f8f2 mov dword ptr [0x10aafd5c], ecx */
  w32((uint32_t)(0x10aafd5c), (ECX));
  /* 10a8f8f8 mov edx, dword ptr [0x10aafd88] */
  EDX = (r32((uint32_t)(0x10aafd88)));
  /* 10a8f8fe mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a8f901 mov dword ptr [0x10aafd60], eax */
  w32((uint32_t)(0x10aafd60), (EAX));
  /* 10a8f906 mov dword ptr [0x10aafd88], 0x10aafd58 */
  w32((uint32_t)(0x10aafd88), (0x10aafd58u));
  /* 10a8f910 mov ecx, dword ptr [0x10ab08ec] */
  ECX = (r32((uint32_t)(0x10ab08ec)));
  /* 10a8f916 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f917 call 0x10a8fbd0 */
  push32(0x10a8f91cu); f_10a8fbd0();
  /* 10a8f91c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f91f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8f921 mov edx, dword ptr [0x10ab08ec] */
  EDX = (r32((uint32_t)(0x10ab08ec)));
  /* 10a8f927 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f928 call 0x10a84e20 */
  push32(0x10a8f92du); f_10a84e20();
  /* 10a8f92d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f930 mov dword ptr [0x10ab08ec], 0 */
  w32((uint32_t)(0x10ab08ec), (0x0u));
  /* 10a8f93a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a8f93c:;
  /* 10a8f93c mov esp, ebp */
  ESP = (EBP);
  /* 10a8f93e pop ebp */
  EBP = (pop32());
  /* 10a8f93f ret  */
  ESPCHK(0x10a8f810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f940 @ 0x10a8f940 (525 bytes, 200 insns) */
void f_10a8f940(void) {
  FTRACE(0x10a8f940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8f940 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8f941 mov ebp, esp */
  EBP = (ESP);
  /* 10a8f943 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8f946 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a8f94d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8f94f mov ax, word ptr [0x10ab090c] */
  AX = (r16((uint32_t)(0x10ab090c)));
  /* 10a8f955 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a8f958 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8f95c jne 0x10a8f966 */
  if (!C.zf) goto L_10a8f966;
  /* 10a8f95e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a8f961 jmp 0x10a8fb49 */
  goto L_10a8fb49;
L_10a8f966:;
  /* 10a8f966 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f969 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f96c push ecx */
  push32((uint32_t)(ECX));
  /* 10a8f96d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10a8f96f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f972 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f973 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f975 call 0x10a92550 */
  push32(0x10a8f97au); f_10a92550();
  /* 10a8f97a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f97d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8f980 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f982 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8f985 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f988 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f98b push edx */
  push32((uint32_t)(EDX));
  /* 10a8f98c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10a8f98e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f991 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f992 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f994 call 0x10a92550 */
  push32(0x10a8f999u); f_10a92550();
  /* 10a8f999 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f99c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8f99f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f9a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8f9a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f9a7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f9aa push edx */
  push32((uint32_t)(EDX));
  /* 10a8f9ab push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10a8f9ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f9b0 push eax */
  push32((uint32_t)(EAX));
  /* 10a8f9b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f9b3 call 0x10a92550 */
  push32(0x10a8f9b8u); f_10a92550();
  /* 10a8f9b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f9bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8f9be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f9c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8f9c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f9c6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f9c9 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f9ca push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10a8f9cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f9cf push eax */
  push32((uint32_t)(EAX));
  /* 10a8f9d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f9d2 call 0x10a92550 */
  push32(0x10a8f9d7u); f_10a92550();
  /* 10a8f9d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f9da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8f9dd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f9df mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8f9e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8f9e5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f9e8 push edx */
  push32((uint32_t)(EDX));
  /* 10a8f9e9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10a8f9eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8f9ee push eax */
  push32((uint32_t)(EAX));
  /* 10a8f9ef push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8f9f1 call 0x10a92550 */
  push32(0x10a8f9f6u); f_10a92550();
  /* 10a8f9f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8f9f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8f9fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8f9fe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8fa01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fa04 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a8fa07 push eax */
  push32((uint32_t)(EAX));
  /* 10a8fa08 call 0x10a8fb50 */
  push32(0x10a8fa0du); f_10a8fb50();
  /* 10a8fa0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fa10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fa13 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fa16 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8fa17 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10a8fa19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8fa1c push edx */
  push32((uint32_t)(EDX));
  /* 10a8fa1d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8fa1f call 0x10a92550 */
  push32(0x10a8fa24u); f_10a92550();
  /* 10a8fa24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fa27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8fa2a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8fa2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8fa2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fa32 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fa35 push edx */
  push32((uint32_t)(EDX));
  /* 10a8fa36 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10a8fa38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8fa3b push eax */
  push32((uint32_t)(EAX));
  /* 10a8fa3c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8fa3e call 0x10a92550 */
  push32(0x10a8fa43u); f_10a92550();
  /* 10a8fa43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fa46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8fa49 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8fa4b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8fa4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fa51 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fa54 push edx */
  push32((uint32_t)(EDX));
  /* 10a8fa55 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10a8fa57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8fa5a push eax */
  push32((uint32_t)(EAX));
  /* 10a8fa5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8fa5d call 0x10a92550 */
  push32(0x10a8fa62u); f_10a92550();
  /* 10a8fa62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fa65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8fa68 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8fa6a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8fa6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fa70 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fa73 push edx */
  push32((uint32_t)(EDX));
  /* 10a8fa74 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a8fa76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8fa79 push eax */
  push32((uint32_t)(EAX));
  /* 10a8fa7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8fa7c call 0x10a92550 */
  push32(0x10a8fa81u); f_10a92550();
  /* 10a8fa81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fa84 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8fa87 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8fa89 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8fa8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fa8f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fa92 push edx */
  push32((uint32_t)(EDX));
  /* 10a8fa93 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10a8fa95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8fa98 push eax */
  push32((uint32_t)(EAX));
  /* 10a8fa99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8fa9b call 0x10a92550 */
  push32(0x10a8faa0u); f_10a92550();
  /* 10a8faa0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8faa3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8faa6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8faa8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8faab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8faae add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fab1 push edx */
  push32((uint32_t)(EDX));
  /* 10a8fab2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10a8fab4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8fab7 push eax */
  push32((uint32_t)(EAX));
  /* 10a8fab8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8faba call 0x10a92550 */
  push32(0x10a8fabfu); f_10a92550();
  /* 10a8fabf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fac2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8fac5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8fac7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8faca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8facd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fad0 push edx */
  push32((uint32_t)(EDX));
  /* 10a8fad1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10a8fad3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8fad6 push eax */
  push32((uint32_t)(EAX));
  /* 10a8fad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8fad9 call 0x10a92550 */
  push32(0x10a8fadeu); f_10a92550();
  /* 10a8fade add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fae1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8fae4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8fae6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8fae9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8faec add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8faef push edx */
  push32((uint32_t)(EDX));
  /* 10a8faf0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10a8faf2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8faf5 push eax */
  push32((uint32_t)(EAX));
  /* 10a8faf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8faf8 call 0x10a92550 */
  push32(0x10a8fafdu); f_10a92550();
  /* 10a8fafd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fb00 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8fb03 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8fb05 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8fb08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fb0b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fb0e push edx */
  push32((uint32_t)(EDX));
  /* 10a8fb0f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10a8fb11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8fb14 push eax */
  push32((uint32_t)(EAX));
  /* 10a8fb15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8fb17 call 0x10a92550 */
  push32(0x10a8fb1cu); f_10a92550();
  /* 10a8fb1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fb1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8fb22 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8fb24 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8fb27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fb2a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fb2d push edx */
  push32((uint32_t)(EDX));
  /* 10a8fb2e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10a8fb30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8fb33 push eax */
  push32((uint32_t)(EAX));
  /* 10a8fb34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8fb36 call 0x10a92550 */
  push32(0x10a8fb3bu); f_10a92550();
  /* 10a8fb3b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fb3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a8fb41 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8fb43 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a8fb46 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a8fb49:;
  /* 10a8fb49 mov esp, ebp */
  ESP = (EBP);
  /* 10a8fb4b pop ebp */
  EBP = (pop32());
  /* 10a8fb4c ret  */
  ESPCHK(0x10a8f940u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10a8fb50 (125 bytes, 49 insns) */
void f_10a8fb50(void) {
  FTRACE(0x10a8fb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8fb50 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8fb51 mov ebp, esp */
  EBP = (ESP);
  /* 10a8fb53 push ecx */
  push32((uint32_t)(ECX));
L_10a8fb54:;
  /* 10a8fb54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fb57 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a8fb5a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8fb5c je 0x10a8fbc9 */
  if (C.zf) goto L_10a8fbc9;
  /* 10a8fb5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fb61 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a8fb64 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8fb67 jl 0x10a8fb8d */
  if ((C.sf!=C.of)) goto L_10a8fb8d;
  /* 10a8fb69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fb6c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a8fb6f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8fb72 jg 0x10a8fb8d */
  if ((!C.zf&&C.sf==C.of)) goto L_10a8fb8d;
  /* 10a8fb74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fb77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a8fb7a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8fb7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fb80 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10a8fb82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fb85 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fb88 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a8fb8b jmp 0x10a8fbc7 */
  goto L_10a8fbc7;
L_10a8fb8d:;
  /* 10a8fb8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fb90 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a8fb93 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8fb96 jne 0x10a8fbbe */
  if (!C.zf) goto L_10a8fbbe;
  /* 10a8fb98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fb9b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a8fb9e:;
  /* 10a8fb9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8fba1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8fba4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10a8fba7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a8fba9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8fbac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fbaf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a8fbb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a8fbb5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a8fbb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8fbba jne 0x10a8fb9e */
  if (!C.zf) goto L_10a8fb9e;
  /* 10a8fbbc jmp 0x10a8fbc7 */
  goto L_10a8fbc7;
L_10a8fbbe:;
  /* 10a8fbbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fbc1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fbc4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10a8fbc7:;
  /* 10a8fbc7 jmp 0x10a8fb54 */
  goto L_10a8fb54;
L_10a8fbc9:;
  /* 10a8fbc9 mov esp, ebp */
  ESP = (EBP);
  /* 10a8fbcb pop ebp */
  EBP = (pop32());
  /* 10a8fbcc ret  */
  ESPCHK(0x10a8fb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbd0 @ 0x10a8fbd0 (147 bytes, 52 insns) */
void f_10a8fbd0(void) {
  FTRACE(0x10a8fbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8fbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8fbd1 mov ebp, esp */
  EBP = (ESP);
  /* 10a8fbd3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8fbd7 jne 0x10a8fbde */
  if (!C.zf) goto L_10a8fbde;
  /* 10a8fbd9 jmp 0x10a8fc61 */
  goto L_10a8fc61;
L_10a8fbde:;
  /* 10a8fbde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fbe1 cmp dword ptr [eax + 0xc], 0x10ab0948 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10ab0948u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8fbe8 je 0x10a8fc61 */
  if (C.zf) goto L_10a8fc61;
  /* 10a8fbea push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8fbec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fbef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a8fbf2 push edx */
  push32((uint32_t)(EDX));
  /* 10a8fbf3 call 0x10a84e20 */
  push32(0x10a8fbf8u); f_10a84e20();
  /* 10a8fbf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fbfb push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8fbfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fc00 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a8fc03 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8fc04 call 0x10a84e20 */
  push32(0x10a8fc09u); f_10a84e20();
  /* 10a8fc09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fc0c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8fc0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fc11 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a8fc14 push eax */
  push32((uint32_t)(EAX));
  /* 10a8fc15 call 0x10a84e20 */
  push32(0x10a8fc1au); f_10a84e20();
  /* 10a8fc1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fc1d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8fc1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fc22 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a8fc25 push edx */
  push32((uint32_t)(EDX));
  /* 10a8fc26 call 0x10a84e20 */
  push32(0x10a8fc2bu); f_10a84e20();
  /* 10a8fc2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fc2e push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8fc30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fc33 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10a8fc36 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8fc37 call 0x10a84e20 */
  push32(0x10a8fc3cu); f_10a84e20();
  /* 10a8fc3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fc3f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8fc41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fc44 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10a8fc47 push eax */
  push32((uint32_t)(EAX));
  /* 10a8fc48 call 0x10a84e20 */
  push32(0x10a8fc4du); f_10a84e20();
  /* 10a8fc4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fc50 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8fc52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a8fc55 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10a8fc58 push edx */
  push32((uint32_t)(EDX));
  /* 10a8fc59 call 0x10a84e20 */
  push32(0x10a8fc5eu); f_10a84e20();
  /* 10a8fc5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8fc61:;
  /* 10a8fc61 pop ebp */
  EBP = (pop32());
  /* 10a8fc62 ret  */
  ESPCHK(0x10a8fbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc70 @ 0x10a8fc70 (928 bytes, 284 insns) */
void f_10a8fc70(void) {
  FTRACE(0x10a8fc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a8fc70 push ebp */
  push32((uint32_t)(EBP));
  /* 10a8fc71 mov ebp, esp */
  EBP = (ESP);
  /* 10a8fc73 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a8fc76 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10a8fc7d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10a8fc84 cmp dword ptr [0x10ab08b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab08b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8fc8b je 0x10a8ffc1 */
  if (C.zf) goto L_10a8ffc1;
  /* 10a8fc91 cmp dword ptr [0x10ab08c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab08c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8fc98 jne 0x10a8fcc0 */
  if (!C.zf) goto L_10a8fcc0;
  /* 10a8fc9a push 0x10ab08c0 */
  push32((uint32_t)(0x10ab08c0u));
  /* 10a8fc9f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10a8fca4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8fca6 mov ax, word ptr [0x10ab0904] */
  AX = (r16((uint32_t)(0x10ab0904)));
  /* 10a8fcac push eax */
  push32((uint32_t)(EAX));
  /* 10a8fcad push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8fcaf call 0x10a92550 */
  push32(0x10a8fcb4u); f_10a92550();
  /* 10a8fcb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fcb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8fcb9 je 0x10a8fcc0 */
  if (C.zf) goto L_10a8fcc0;
  /* 10a8fcbb jmp 0x10a8ff82 */
  goto L_10a8ff82;
L_10a8fcc0:;
  /* 10a8fcc0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10a8fcc2 push 0x10aac40c */
  push32((uint32_t)(0x10aac40cu));
  /* 10a8fcc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8fcc9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10a8fcce call 0x10a84390 */
  push32(0x10a8fcd3u); f_10a84390();
  /* 10a8fcd3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fcd6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10a8fcd9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10a8fcdb push 0x10aac40c */
  push32((uint32_t)(0x10aac40cu));
  /* 10a8fce0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8fce2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10a8fce7 call 0x10a84390 */
  push32(0x10a8fcecu); f_10a84390();
  /* 10a8fcec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fcef mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a8fcf2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10a8fcf4 push 0x10aac40c */
  push32((uint32_t)(0x10aac40cu));
  /* 10a8fcf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8fcfb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10a8fd00 call 0x10a84390 */
  push32(0x10a8fd05u); f_10a84390();
  /* 10a8fd05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fd08 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10a8fd0b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10a8fd0d push 0x10aac40c */
  push32((uint32_t)(0x10aac40cu));
  /* 10a8fd12 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8fd14 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10a8fd19 call 0x10a84390 */
  push32(0x10a8fd1eu); f_10a84390();
  /* 10a8fd1e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fd21 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a8fd24 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8fd28 je 0x10a8fd3c */
  if (C.zf) goto L_10a8fd3c;
  /* 10a8fd2a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8fd2e je 0x10a8fd3c */
  if (C.zf) goto L_10a8fd3c;
  /* 10a8fd30 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8fd34 je 0x10a8fd3c */
  if (C.zf) goto L_10a8fd3c;
  /* 10a8fd36 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8fd3a jne 0x10a8fd41 */
  if (!C.zf) goto L_10a8fd41;
L_10a8fd3c:;
  /* 10a8fd3c jmp 0x10a8ff82 */
  goto L_10a8ff82;
L_10a8fd41:;
  /* 10a8fd41 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a8fd44 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a8fd47 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a8fd4e jmp 0x10a8fd59 */
  goto L_10a8fd59;
L_10a8fd50:;
  /* 10a8fd50 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8fd53 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fd56 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10a8fd59:;
  /* 10a8fd59 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8fd60 jge 0x10a8fd75 */
  if ((C.sf==C.of)) goto L_10a8fd75;
  /* 10a8fd62 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8fd65 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10a8fd68 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10a8fd6a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8fd6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fd70 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a8fd73 jmp 0x10a8fd50 */
  goto L_10a8fd50;
L_10a8fd75:;
  /* 10a8fd75 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10a8fd78 push eax */
  push32((uint32_t)(EAX));
  /* 10a8fd79 mov ecx, dword ptr [0x10ab08c0] */
  ECX = (r32((uint32_t)(0x10ab08c0)));
  /* 10a8fd7f push ecx */
  push32((uint32_t)(ECX));
  /* 10a8fd80 call dword ptr [0x10ab32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32f8))), 0x10a8fd86u);
  /* 10a8fd86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8fd88 jne 0x10a8fd8f */
  if (!C.zf) goto L_10a8fd8f;
  /* 10a8fd8a jmp 0x10a8ff82 */
  goto L_10a8ff82;
L_10a8fd8f:;
  /* 10a8fd8f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8fd93 jbe 0x10a8fd9a */
  if ((C.cf||C.zf)) goto L_10a8fd9a;
  /* 10a8fd95 jmp 0x10a8ff82 */
  goto L_10a8ff82;
L_10a8fd9a:;
  /* 10a8fd9a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a8fd9d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a8fda3 mov dword ptr [0x10aaeea4], edx */
  w32((uint32_t)(0x10aaeea4), (EDX));
  /* 10a8fda9 cmp dword ptr [0x10aaeea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aaeea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8fdb0 jle 0x10a8fe09 */
  if ((C.zf||C.sf!=C.of)) goto L_10a8fe09;
  /* 10a8fdb2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10a8fdb5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a8fdb8 jmp 0x10a8fdc3 */
  goto L_10a8fdc3;
L_10a8fdba:;
  /* 10a8fdba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8fdbd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fdc0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10a8fdc3:;
  /* 10a8fdc3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8fdc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8fdc8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a8fdca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8fdcc je 0x10a8fe09 */
  if (C.zf) goto L_10a8fe09;
  /* 10a8fdce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8fdd1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8fdd3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10a8fdd6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8fdd8 je 0x10a8fe09 */
  if (C.zf) goto L_10a8fe09;
  /* 10a8fdda mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8fddd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8fddf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a8fde1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a8fde4 jmp 0x10a8fdef */
  goto L_10a8fdef;
L_10a8fde6:;
  /* 10a8fde6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8fde9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fdec mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10a8fdef:;
  /* 10a8fdef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8fdf2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8fdf4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10a8fdf7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8fdfa jg 0x10a8fe07 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a8fe07;
  /* 10a8fdfc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a8fdff add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fe02 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10a8fe05 jmp 0x10a8fde6 */
  goto L_10a8fde6;
L_10a8fe07:;
  /* 10a8fe07 jmp 0x10a8fdba */
  goto L_10a8fdba;
L_10a8fe09:;
  /* 10a8fe09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8fe0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8fe0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8fe0f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a8fe12 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fe15 push eax */
  push32((uint32_t)(EAX));
  /* 10a8fe16 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a8fe1b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a8fe1e push ecx */
  push32((uint32_t)(ECX));
  /* 10a8fe1f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8fe21 call 0x10a8c5c0 */
  push32(0x10a8fe26u); f_10a8c5c0();
  /* 10a8fe26 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fe29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8fe2b jne 0x10a8fe32 */
  if (!C.zf) goto L_10a8fe32;
  /* 10a8fe2d jmp 0x10a8ff82 */
  goto L_10a8ff82;
L_10a8fe32:;
  /* 10a8fe32 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a8fe35 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10a8fe3a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a8fe3d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a8fe40 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a8fe47 jmp 0x10a8fe52 */
  goto L_10a8fe52;
L_10a8fe49:;
  /* 10a8fe49 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8fe4c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fe4f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10a8fe52:;
  /* 10a8fe52 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8fe59 jge 0x10a8fe70 */
  if ((C.sf==C.of)) goto L_10a8fe70;
  /* 10a8fe5b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8fe5e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10a8fe62 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10a8fe65 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a8fe68 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fe6b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a8fe6e jmp 0x10a8fe49 */
  goto L_10a8fe49;
L_10a8fe70:;
  /* 10a8fe70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8fe72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a8fe74 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a8fe77 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fe7a push edx */
  push32((uint32_t)(EDX));
  /* 10a8fe7b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a8fe80 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a8fe83 push eax */
  push32((uint32_t)(EAX));
  /* 10a8fe84 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a8fe86 call 0x10a927f0 */
  push32(0x10a8fe8bu); f_10a927f0();
  /* 10a8fe8b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fe8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a8fe90 jne 0x10a8fe97 */
  if (!C.zf) goto L_10a8fe97;
  /* 10a8fe92 jmp 0x10a8ff82 */
  goto L_10a8ff82;
L_10a8fe97:;
  /* 10a8fe97 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a8fe9a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10a8fe9f cmp dword ptr [0x10aaeea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10aaeea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8fea6 jle 0x10a8ff03 */
  if ((C.zf||C.sf!=C.of)) goto L_10a8ff03;
  /* 10a8fea8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10a8feab mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a8feae jmp 0x10a8feb9 */
  goto L_10a8feb9;
L_10a8feb0:;
  /* 10a8feb0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8feb3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8feb6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10a8feb9:;
  /* 10a8feb9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8febc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a8febe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a8fec0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a8fec2 je 0x10a8ff03 */
  if (C.zf) goto L_10a8ff03;
  /* 10a8fec4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8fec7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a8fec9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10a8fecc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a8fece je 0x10a8ff03 */
  if (C.zf) goto L_10a8ff03;
  /* 10a8fed0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8fed3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8fed5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a8fed7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a8feda jmp 0x10a8fee5 */
  goto L_10a8fee5;
L_10a8fedc:;
  /* 10a8fedc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8fedf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fee2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10a8fee5:;
  /* 10a8fee5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a8fee8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8feea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10a8feed cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8fef0 jg 0x10a8ff01 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a8ff01;
  /* 10a8fef2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a8fef5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a8fef8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10a8feff jmp 0x10a8fedc */
  goto L_10a8fedc;
L_10a8ff01:;
  /* 10a8ff01 jmp 0x10a8feb0 */
  goto L_10a8feb0;
L_10a8ff03:;
  /* 10a8ff03 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a8ff06 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ff09 mov dword ptr [0x10aaec98], eax */
  w32((uint32_t)(0x10aaec98), (EAX));
  /* 10a8ff0e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a8ff11 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ff14 mov dword ptr [0x10aaec9c], ecx */
  w32((uint32_t)(0x10aaec9c), (ECX));
  /* 10a8ff1a cmp dword ptr [0x10ab08f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab08f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ff21 je 0x10a8ff34 */
  if (C.zf) goto L_10a8ff34;
  /* 10a8ff23 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8ff25 mov edx, dword ptr [0x10ab08f0] */
  EDX = (r32((uint32_t)(0x10ab08f0)));
  /* 10a8ff2b push edx */
  push32((uint32_t)(EDX));
  /* 10a8ff2c call 0x10a84e20 */
  push32(0x10a8ff31u); f_10a84e20();
  /* 10a8ff31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8ff34:;
  /* 10a8ff34 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a8ff37 mov dword ptr [0x10ab08f0], eax */
  w32((uint32_t)(0x10ab08f0), (EAX));
  /* 10a8ff3c cmp dword ptr [0x10ab08f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab08f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a8ff43 je 0x10a8ff56 */
  if (C.zf) goto L_10a8ff56;
  /* 10a8ff45 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8ff47 mov ecx, dword ptr [0x10ab08f4] */
  ECX = (r32((uint32_t)(0x10ab08f4)));
  /* 10a8ff4d push ecx */
  push32((uint32_t)(ECX));
  /* 10a8ff4e call 0x10a84e20 */
  push32(0x10a8ff53u); f_10a84e20();
  /* 10a8ff53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a8ff56:;
  /* 10a8ff56 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a8ff59 mov dword ptr [0x10ab08f4], edx */
  w32((uint32_t)(0x10ab08f4), (EDX));
  /* 10a8ff5f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8ff61 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a8ff64 push eax */
  push32((uint32_t)(EAX));
  /* 10a8ff65 call 0x10a84e20 */
  push32(0x10a8ff6au); f_10a84e20();
  /* 10a8ff6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ff6d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8ff6f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a8ff72 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8ff73 call 0x10a84e20 */
  push32(0x10a8ff78u); f_10a84e20();
  /* 10a8ff78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ff7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a8ff7d jmp 0x10a9000c */
  goto L_10a9000c;
L_10a8ff82:;
  /* 10a8ff82 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8ff84 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a8ff87 push edx */
  push32((uint32_t)(EDX));
  /* 10a8ff88 call 0x10a84e20 */
  push32(0x10a8ff8du); f_10a84e20();
  /* 10a8ff8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ff90 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8ff92 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a8ff95 push eax */
  push32((uint32_t)(EAX));
  /* 10a8ff96 call 0x10a84e20 */
  push32(0x10a8ff9bu); f_10a84e20();
  /* 10a8ff9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ff9e push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8ffa0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a8ffa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a8ffa4 call 0x10a84e20 */
  push32(0x10a8ffa9u); f_10a84e20();
  /* 10a8ffa9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ffac push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8ffae mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a8ffb1 push edx */
  push32((uint32_t)(EDX));
  /* 10a8ffb2 call 0x10a84e20 */
  push32(0x10a8ffb7u); f_10a84e20();
  /* 10a8ffb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ffba mov eax, 1 */
  EAX = (0x1u);
  /* 10a8ffbf jmp 0x10a9000c */
  goto L_10a9000c;
L_10a8ffc1:;
  /* 10a8ffc1 mov dword ptr [0x10aaec98], 0x10aaeca2 */
  w32((uint32_t)(0x10aaec98), (0x10aaeca2u));
  /* 10a8ffcb mov dword ptr [0x10aaec9c], 0x10aaeca2 */
  w32((uint32_t)(0x10aaec9c), (0x10aaeca2u));
  /* 10a8ffd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8ffd7 mov eax, dword ptr [0x10ab08f0] */
  EAX = (r32((uint32_t)(0x10ab08f0)));
  /* 10a8ffdc push eax */
  push32((uint32_t)(EAX));
  /* 10a8ffdd call 0x10a84e20 */
  push32(0x10a8ffe2u); f_10a84e20();
  /* 10a8ffe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8ffe5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a8ffe7 mov ecx, dword ptr [0x10ab08f4] */
  ECX = (r32((uint32_t)(0x10ab08f4)));
  /* 10a8ffed push ecx */
  push32((uint32_t)(ECX));
  /* 10a8ffee call 0x10a84e20 */
  push32(0x10a8fff3u); f_10a84e20();
  /* 10a8fff3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a8fff6 mov dword ptr [0x10ab08f0], 0 */
  w32((uint32_t)(0x10ab08f0), (0x0u));
  /* 10a90000 mov dword ptr [0x10ab08f4], 0 */
  w32((uint32_t)(0x10ab08f4), (0x0u));
  /* 10a9000a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a9000c:;
  /* 10a9000c mov esp, ebp */
  ESP = (EBP);
  /* 10a9000e pop ebp */
  EBP = (pop32());
  /* 10a9000f ret  */
  ESPCHK(0x10a8fc70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010010 @ 0x10a90010 (7 bytes, 5 insns) */
void f_10a90010(void) {
  FTRACE(0x10a90010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a90010 push ebp */
  push32((uint32_t)(EBP));
  /* 10a90011 mov ebp, esp */
  EBP = (ESP);
  /* 10a90013 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a90015 pop ebp */
  EBP = (pop32());
  /* 10a90016 ret  */
  ESPCHK(0x10a90010u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10a90020 (129 bytes, 56 insns) */
void f_10a90020(void) {
  FTRACE(0x10a90020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a90020 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a90024 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a90028 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10a9002e jne 0x10a9006c */
  if (!C.zf) goto L_10a9006c;
L_10a90030:;
  /* 10a90030 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a90032 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a90034 jne 0x10a90064 */
  if (!C.zf) goto L_10a90064;
  /* 10a90036 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a90038 je 0x10a90060 */
  if (C.zf) goto L_10a90060;
  /* 10a9003a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a9003d jne 0x10a90064 */
  if (!C.zf) goto L_10a90064;
  /* 10a9003f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10a90041 je 0x10a90060 */
  if (C.zf) goto L_10a90060;
  /* 10a90043 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10a90046 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a90049 jne 0x10a90064 */
  if (!C.zf) goto L_10a90064;
  /* 10a9004b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a9004d je 0x10a90060 */
  if (C.zf) goto L_10a90060;
  /* 10a9004f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a90052 jne 0x10a90064 */
  if (!C.zf) goto L_10a90064;
  /* 10a90054 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90057 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9005a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10a9005c jne 0x10a90030 */
  if (!C.zf) goto L_10a90030;
  /* 10a9005e mov edi, edi */
  EDI = (EDI);
L_10a90060:;
  /* 10a90060 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a90062 ret  */
  ESPCHK(0x10a90020u, _esp0);
  ESP += 4; return;
  /* 10a90063 nop  */
  /* nop */
L_10a90064:;
  /* 10a90064 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a90066 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a90068 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10a90069 ret  */
  ESPCHK(0x10a90020u, _esp0);
  ESP += 4; return;
  /* 10a9006a mov edi, edi */
  EDI = (EDI);
L_10a9006c:;
  /* 10a9006c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10a90072 je 0x10a90088 */
  if (C.zf) goto L_10a90088;
  /* 10a90074 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a90076 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10a90077 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a90079 jne 0x10a90064 */
  if (!C.zf) goto L_10a90064;
  /* 10a9007b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10a9007c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a9007e je 0x10a90060 */
  if (C.zf) goto L_10a90060;
  /* 10a90080 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10a90086 je 0x10a90030 */
  if (C.zf) goto L_10a90030;
L_10a90088:;
  /* 10a90088 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10a9008b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9008e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a90090 jne 0x10a90064 */
  if (!C.zf) goto L_10a90064;
  /* 10a90092 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a90094 je 0x10a90060 */
  if (C.zf) goto L_10a90060;
  /* 10a90096 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a90099 jne 0x10a90064 */
  if (!C.zf) goto L_10a90064;
  /* 10a9009b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10a9009d je 0x10a90060 */
  if (C.zf) goto L_10a90060;
  /* 10a9009f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a900a2 jmp 0x10a90030 */
  goto L_10a90030;
}

/* FUN_100100b0 @ 0x10a900b0 (62 bytes, 35 insns) */
void f_10a900b0(void) {
  FTRACE(0x10a900b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a900b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a900b1 mov ebp, esp */
  EBP = (ESP);
  /* 10a900b3 push esi */
  push32((uint32_t)(ESI));
  /* 10a900b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a900b6 push eax */
  push32((uint32_t)(EAX));
  /* 10a900b7 push eax */
  push32((uint32_t)(EAX));
  /* 10a900b8 push eax */
  push32((uint32_t)(EAX));
  /* 10a900b9 push eax */
  push32((uint32_t)(EAX));
  /* 10a900ba push eax */
  push32((uint32_t)(EAX));
  /* 10a900bb push eax */
  push32((uint32_t)(EAX));
  /* 10a900bc push eax */
  push32((uint32_t)(EAX));
  /* 10a900bd push eax */
  push32((uint32_t)(EAX));
  /* 10a900be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a900c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a900c4:;
  /* 10a900c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a900c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a900c8 je 0x10a900d1 */
  if (C.zf) goto L_10a900d1;
  /* 10a900ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10a900cb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10a900cb");
  /* 10a900cf jmp 0x10a900c4 */
  goto L_10a900c4;
L_10a900d1:;
  /* 10a900d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10a900d4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a900d7 nop  */
  /* nop */
L_10a900d8:;
  /* 10a900d8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10a900d9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a900db or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a900dd je 0x10a900e6 */
  if (C.zf) goto L_10a900e6;
  /* 10a900df inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a900e0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10a900e0");
  /* 10a900e4 jae 0x10a900d8 */
  if (!C.cf) goto L_10a900d8;
L_10a900e6:;
  /* 10a900e6 mov eax, ecx */
  EAX = (ECX);
  /* 10a900e8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a900eb pop esi */
  ESI = (pop32());
  /* 10a900ec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a900ed ret  */
  ESPCHK(0x10a900b0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10a900f0 (56 bytes, 31 insns) */
void f_10a900f0(void) {
  FTRACE(0x10a900f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a900f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a900f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a900f3 push edi */
  push32((uint32_t)(EDI));
  /* 10a900f4 push esi */
  push32((uint32_t)(ESI));
  /* 10a900f5 push ebx */
  push32((uint32_t)(EBX));
  /* 10a900f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a900f9 jecxz 0x10a90121 */
  x86_unimpl("jecxz @ 0x10a900f9");
  /* 10a900fb mov ebx, ecx */
  EBX = (ECX);
  /* 10a900fd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90100 mov esi, edi */
  ESI = (EDI);
  /* 10a90102 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a90104 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10a90106 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a90108 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9010a mov edi, esi */
  EDI = (ESI);
  /* 10a9010c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a9010f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10a90111 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10a90114 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a90116 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a90119 ja 0x10a9011f */
  if ((!C.cf&&!C.zf)) goto L_10a9011f;
  /* 10a9011b je 0x10a90121 */
  if (C.zf) goto L_10a90121;
  /* 10a9011d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a9011e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10a9011f:;
  /* 10a9011f not ecx */
  ECX = (~(ECX));
L_10a90121:;
  /* 10a90121 mov eax, ecx */
  EAX = (ECX);
  /* 10a90123 pop ebx */
  EBX = (pop32());
  /* 10a90124 pop esi */
  ESI = (pop32());
  /* 10a90125 pop edi */
  EDI = (pop32());
  /* 10a90126 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a90127 ret  */
  ESPCHK(0x10a900f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010130 @ 0x10a90130 (58 bytes, 32 insns) */
void f_10a90130(void) {
  FTRACE(0x10a90130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a90130 push ebp */
  push32((uint32_t)(EBP));
  /* 10a90131 mov ebp, esp */
  EBP = (ESP);
  /* 10a90133 push esi */
  push32((uint32_t)(ESI));
  /* 10a90134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a90136 push eax */
  push32((uint32_t)(EAX));
  /* 10a90137 push eax */
  push32((uint32_t)(EAX));
  /* 10a90138 push eax */
  push32((uint32_t)(EAX));
  /* 10a90139 push eax */
  push32((uint32_t)(EAX));
  /* 10a9013a push eax */
  push32((uint32_t)(EAX));
  /* 10a9013b push eax */
  push32((uint32_t)(EAX));
  /* 10a9013c push eax */
  push32((uint32_t)(EAX));
  /* 10a9013d push eax */
  push32((uint32_t)(EAX));
  /* 10a9013e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a90141 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a90144:;
  /* 10a90144 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a90146 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a90148 je 0x10a90151 */
  if (C.zf) goto L_10a90151;
  /* 10a9014a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10a9014b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10a9014b");
  /* 10a9014f jmp 0x10a90144 */
  goto L_10a90144;
L_10a90151:;
  /* 10a90151 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10a90154:;
  /* 10a90154 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a90156 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a90158 je 0x10a90164 */
  if (C.zf) goto L_10a90164;
  /* 10a9015a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a9015b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10a9015b");
  /* 10a9015f jae 0x10a90154 */
  if (!C.cf) goto L_10a90154;
  /* 10a90161 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10a90164:;
  /* 10a90164 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90167 pop esi */
  ESI = (pop32());
  /* 10a90168 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a90169 ret  */
  ESPCHK(0x10a90130u, _esp0);
  ESP += 4; return;
}

/* FUN_10010170 @ 0x10a90170 (512 bytes, 147 insns) */
void f_10a90170(void) {
  FTRACE(0x10a90170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a90170 push ebp */
  push32((uint32_t)(EBP));
  /* 10a90171 mov ebp, esp */
  EBP = (ESP);
  /* 10a90173 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a90176 cmp dword ptr [0x10ab093c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab093c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9017d jne 0x10a901a2 */
  if (!C.zf) goto L_10a901a2;
  /* 10a9017f call 0x10a90c40 */
  push32(0x10a90184u); f_10a90c40();
  /* 10a90184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90186 je 0x10a90192 */
  if (C.zf) goto L_10a90192;
  /* 10a90188 mov eax, dword ptr [0x10ab32bc] */
  EAX = (r32((uint32_t)(0x10ab32bc)));
  /* 10a9018d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a90190 jmp 0x10a90199 */
  goto L_10a90199;
L_10a90192:;
  /* 10a90192 mov dword ptr [ebp - 8], 0x10a90c90 */
  w32((uint32_t)(EBP + -0x8), (0x10a90c90u));
L_10a90199:;
  /* 10a90199 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a9019c mov dword ptr [0x10ab093c], ecx */
  w32((uint32_t)(0x10ab093c), (ECX));
L_10a901a2:;
  /* 10a901a2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a901a6 jne 0x10a901b2 */
  if (!C.zf) goto L_10a901b2;
  /* 10a901a8 call 0x10a90a90 */
  push32(0x10a901adu); f_10a90a90();
  /* 10a901ad jmp 0x10a9027e */
  goto L_10a9027e;
L_10a901b2:;
  /* 10a901b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a901b5 mov dword ptr [0x10ab092c], edx */
  w32((uint32_t)(0x10ab092c), (EDX));
  /* 10a901bb cmp dword ptr [0x10ab092c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab092c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a901c2 je 0x10a901e4 */
  if (C.zf) goto L_10a901e4;
  /* 10a901c4 mov eax, dword ptr [0x10ab092c] */
  EAX = (r32((uint32_t)(0x10ab092c)));
  /* 10a901c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a901cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a901ce je 0x10a901e4 */
  if (C.zf) goto L_10a901e4;
  /* 10a901d0 push 0x10ab092c */
  push32((uint32_t)(0x10ab092cu));
  /* 10a901d5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10a901d7 push 0x10aafa90 */
  push32((uint32_t)(0x10aafa90u));
  /* 10a901dc call 0x10a90370 */
  push32(0x10a901e1u); f_10a90370();
  /* 10a901e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a901e4:;
  /* 10a901e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a901e7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a901ea mov dword ptr [0x10ab0930], edx */
  w32((uint32_t)(0x10ab0930), (EDX));
  /* 10a901f0 cmp dword ptr [0x10ab0930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a901f7 je 0x10a90219 */
  if (C.zf) goto L_10a90219;
  /* 10a901f9 mov eax, dword ptr [0x10ab0930] */
  EAX = (r32((uint32_t)(0x10ab0930)));
  /* 10a901fe movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a90201 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a90203 je 0x10a90219 */
  if (C.zf) goto L_10a90219;
  /* 10a90205 push 0x10ab0930 */
  push32((uint32_t)(0x10ab0930u));
  /* 10a9020a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10a9020c push 0x10aaf9d8 */
  push32((uint32_t)(0x10aaf9d8u));
  /* 10a90211 call 0x10a90370 */
  push32(0x10a90216u); f_10a90370();
  /* 10a90216 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a90219:;
  /* 10a90219 mov dword ptr [0x10ab0934], 0 */
  w32((uint32_t)(0x10ab0934), (0x0u));
  /* 10a90223 cmp dword ptr [0x10ab092c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab092c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9022a je 0x10a9025d */
  if (C.zf) goto L_10a9025d;
  /* 10a9022c mov edx, dword ptr [0x10ab092c] */
  EDX = (r32((uint32_t)(0x10ab092c)));
  /* 10a90232 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a90235 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90237 je 0x10a9025d */
  if (C.zf) goto L_10a9025d;
  /* 10a90239 cmp dword ptr [0x10ab0930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90240 je 0x10a90256 */
  if (C.zf) goto L_10a90256;
  /* 10a90242 mov ecx, dword ptr [0x10ab0930] */
  ECX = (r32((uint32_t)(0x10ab0930)));
  /* 10a90248 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a9024b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a9024d je 0x10a90256 */
  if (C.zf) goto L_10a90256;
  /* 10a9024f call 0x10a90400 */
  push32(0x10a90254u); f_10a90400();
  /* 10a90254 jmp 0x10a9025b */
  goto L_10a9025b;
L_10a90256:;
  /* 10a90256 call 0x10a907f0 */
  push32(0x10a9025bu); f_10a907f0();
L_10a9025b:;
  /* 10a9025b jmp 0x10a9027e */
  goto L_10a9027e;
L_10a9025d:;
  /* 10a9025d cmp dword ptr [0x10ab0930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90264 je 0x10a90279 */
  if (C.zf) goto L_10a90279;
  /* 10a90266 mov eax, dword ptr [0x10ab0930] */
  EAX = (r32((uint32_t)(0x10ab0930)));
  /* 10a9026b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a9026e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a90270 je 0x10a90279 */
  if (C.zf) goto L_10a90279;
  /* 10a90272 call 0x10a90990 */
  push32(0x10a90277u); f_10a90990();
  /* 10a90277 jmp 0x10a9027e */
  goto L_10a9027e;
L_10a90279:;
  /* 10a90279 call 0x10a90a90 */
  push32(0x10a9027eu); f_10a90a90();
L_10a9027e:;
  /* 10a9027e cmp dword ptr [0x10ab0934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90285 jne 0x10a9028e */
  if (!C.zf) goto L_10a9028e;
  /* 10a90287 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a90289 jmp 0x10a9036c */
  goto L_10a9036c;
L_10a9028e:;
  /* 10a9028e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90291 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90297 push edx */
  push32((uint32_t)(EDX));
  /* 10a90298 call 0x10a90ac0 */
  push32(0x10a9029du); f_10a90ac0();
  /* 10a9029d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a902a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a902a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a902a7 je 0x10a902bc */
  if (C.zf) goto L_10a902bc;
  /* 10a902a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a902ac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a902b1 push eax */
  push32((uint32_t)(EAX));
  /* 10a902b2 call dword ptr [0x10ab32c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32c0))), 0x10a902b8u);
  /* 10a902b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a902ba jne 0x10a902c3 */
  if (!C.zf) goto L_10a902c3;
L_10a902bc:;
  /* 10a902bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a902be jmp 0x10a9036c */
  goto L_10a9036c;
L_10a902c3:;
  /* 10a902c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a902c5 mov ecx, dword ptr [0x10ab091c] */
  ECX = (r32((uint32_t)(0x10ab091c)));
  /* 10a902cb push ecx */
  push32((uint32_t)(ECX));
  /* 10a902cc call dword ptr [0x10ab32d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32d0))), 0x10a902d2u);
  /* 10a902d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a902d4 jne 0x10a902dd */
  if (!C.zf) goto L_10a902dd;
  /* 10a902d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a902d8 jmp 0x10a9036c */
  goto L_10a9036c;
L_10a902dd:;
  /* 10a902dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a902e1 je 0x10a90308 */
  if (C.zf) goto L_10a90308;
  /* 10a902e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a902e6 mov ax, word ptr [0x10ab091c] */
  AX = (r16((uint32_t)(0x10ab091c)));
  /* 10a902ec mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10a902ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a902f2 mov dx, word ptr [0x10ab0938] */
  DX = (r16((uint32_t)(0x10ab0938)));
  /* 10a902f9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10a902fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a90300 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10a90304 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10a90308:;
  /* 10a90308 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9030c je 0x10a90367 */
  if (C.zf) goto L_10a90367;
  /* 10a9030e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10a90310 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a90313 push edx */
  push32((uint32_t)(EDX));
  /* 10a90314 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10a90319 mov eax, dword ptr [0x10ab091c] */
  EAX = (r32((uint32_t)(0x10ab091c)));
  /* 10a9031e push eax */
  push32((uint32_t)(EAX));
  /* 10a9031f call dword ptr [0x10ab093c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab093c))), 0x10a90325u);
  /* 10a90325 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90327 jne 0x10a9032d */
  if (!C.zf) goto L_10a9032d;
  /* 10a90329 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a9032b jmp 0x10a9036c */
  goto L_10a9036c;
L_10a9032d:;
  /* 10a9032d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10a9032f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a90332 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90335 push ecx */
  push32((uint32_t)(ECX));
  /* 10a90336 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10a9033b mov edx, dword ptr [0x10ab0938] */
  EDX = (r32((uint32_t)(0x10ab0938)));
  /* 10a90341 push edx */
  push32((uint32_t)(EDX));
  /* 10a90342 call dword ptr [0x10ab093c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab093c))), 0x10a90348u);
  /* 10a90348 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a9034a jne 0x10a90350 */
  if (!C.zf) goto L_10a90350;
  /* 10a9034c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a9034e jmp 0x10a9036c */
  goto L_10a9036c;
L_10a90350:;
  /* 10a90350 push 0xa */
  push32((uint32_t)(0xau));
  /* 10a90352 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a90355 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9035a push eax */
  push32((uint32_t)(EAX));
  /* 10a9035b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a9035e push ecx */
  push32((uint32_t)(ECX));
  /* 10a9035f call 0x10a86ed0 */
  push32(0x10a90364u); f_10a86ed0();
  /* 10a90364 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a90367:;
  /* 10a90367 mov eax, 1 */
  EAX = (0x1u);
L_10a9036c:;
  /* 10a9036c mov esp, ebp */
  ESP = (EBP);
  /* 10a9036e pop ebp */
  EBP = (pop32());
  /* 10a9036f ret  */
  ESPCHK(0x10a90170u, _esp0);
  ESP += 4; return;
}

/* FUN_10010370 @ 0x10a90370 (130 bytes, 47 insns) */
void f_10a90370(void) {
  FTRACE(0x10a90370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a90370 push ebp */
  push32((uint32_t)(EBP));
  /* 10a90371 mov ebp, esp */
  EBP = (ESP);
  /* 10a90373 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a90376 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10a9037d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10a90384:;
  /* 10a90384 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a90387 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9038a jg 0x10a903ee */
  if ((!C.zf&&C.sf==C.of)) goto L_10a903ee;
  /* 10a9038c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90390 je 0x10a903ee */
  if (C.zf) goto L_10a903ee;
  /* 10a90392 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a90395 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90398 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a90399 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a9039b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a9039d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a903a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a903a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a903a6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10a903a9 push eax */
  push32((uint32_t)(EAX));
  /* 10a903aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a903ad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a903af push edx */
  push32((uint32_t)(EDX));
  /* 10a903b0 call 0x10a92a60 */
  push32(0x10a903b5u); f_10a92a60();
  /* 10a903b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a903b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a903bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a903bf jne 0x10a903d2 */
  if (!C.zf) goto L_10a903d2;
  /* 10a903c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a903c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a903c7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10a903cb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a903ce mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a903d0 jmp 0x10a903ec */
  goto L_10a903ec;
L_10a903d2:;
  /* 10a903d2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a903d6 jge 0x10a903e3 */
  if ((C.sf==C.of)) goto L_10a903e3;
  /* 10a903d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a903db sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a903de mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10a903e1 jmp 0x10a903ec */
  goto L_10a903ec;
L_10a903e3:;
  /* 10a903e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a903e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a903e9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a903ec:;
  /* 10a903ec jmp 0x10a90384 */
  goto L_10a90384;
L_10a903ee:;
  /* 10a903ee mov esp, ebp */
  ESP = (EBP);
  /* 10a903f0 pop ebp */
  EBP = (pop32());
  /* 10a903f1 ret  */
  ESPCHK(0x10a90370u, _esp0);
  ESP += 4; return;
}

/* FUN_10010400 @ 0x10a90400 (186 bytes, 50 insns) */
void f_10a90400(void) {
  FTRACE(0x10a90400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a90400 push ebp */
  push32((uint32_t)(EBP));
  /* 10a90401 mov ebp, esp */
  EBP = (ESP);
  /* 10a90403 push ecx */
  push32((uint32_t)(ECX));
  /* 10a90404 mov eax, dword ptr [0x10ab092c] */
  EAX = (r32((uint32_t)(0x10ab092c)));
  /* 10a90409 push eax */
  push32((uint32_t)(EAX));
  /* 10a9040a call 0x10a871c0 */
  push32(0x10a9040fu); f_10a871c0();
  /* 10a9040f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90412 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a90414 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90417 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10a9041a mov dword ptr [0x10ab0928], ecx */
  w32((uint32_t)(0x10ab0928), (ECX));
  /* 10a90420 mov edx, dword ptr [0x10ab0930] */
  EDX = (r32((uint32_t)(0x10ab0930)));
  /* 10a90426 push edx */
  push32((uint32_t)(EDX));
  /* 10a90427 call 0x10a871c0 */
  push32(0x10a9042cu); f_10a871c0();
  /* 10a9042c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9042f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a90431 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90434 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10a90437 mov dword ptr [0x10ab0920], ecx */
  w32((uint32_t)(0x10ab0920), (ECX));
  /* 10a9043d mov dword ptr [0x10ab091c], 0 */
  w32((uint32_t)(0x10ab091c), (0x0u));
  /* 10a90447 cmp dword ptr [0x10ab0928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9044e je 0x10a90459 */
  if (C.zf) goto L_10a90459;
  /* 10a90450 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10a90457 jmp 0x10a9046b */
  goto L_10a9046b;
L_10a90459:;
  /* 10a90459 mov edx, dword ptr [0x10ab092c] */
  EDX = (r32((uint32_t)(0x10ab092c)));
  /* 10a9045f push edx */
  push32((uint32_t)(EDX));
  /* 10a90460 call 0x10a90ea0 */
  push32(0x10a90465u); f_10a90ea0();
  /* 10a90465 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90468 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a9046b:;
  /* 10a9046b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a9046e mov dword ptr [0x10ab0924], eax */
  w32((uint32_t)(0x10ab0924), (EAX));
  /* 10a90473 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a90475 push 0x10a904c0 */
  push32((uint32_t)(0x10a904c0u));
  /* 10a9047a call dword ptr [0x10ab32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32c4))), 0x10a90480u);
  /* 10a90480 mov ecx, dword ptr [0x10ab0934] */
  ECX = (r32((uint32_t)(0x10ab0934)));
  /* 10a90486 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10a9048c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a9048e je 0x10a904ac */
  if (C.zf) goto L_10a904ac;
  /* 10a90490 mov edx, dword ptr [0x10ab0934] */
  EDX = (r32((uint32_t)(0x10ab0934)));
  /* 10a90496 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10a9049c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a9049e je 0x10a904ac */
  if (C.zf) goto L_10a904ac;
  /* 10a904a0 mov eax, dword ptr [0x10ab0934] */
  EAX = (r32((uint32_t)(0x10ab0934)));
  /* 10a904a5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10a904a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a904aa jne 0x10a904b6 */
  if (!C.zf) goto L_10a904b6;
L_10a904ac:;
  /* 10a904ac mov dword ptr [0x10ab0934], 0 */
  w32((uint32_t)(0x10ab0934), (0x0u));
L_10a904b6:;
  /* 10a904b6 mov esp, ebp */
  ESP = (EBP);
  /* 10a904b8 pop ebp */
  EBP = (pop32());
  /* 10a904b9 ret  */
  ESPCHK(0x10a90400u, _esp0);
  ESP += 4; return;
}

/* FUN_100104c0 @ 0x10a904c0 (804 bytes, 220 insns) */
void f_10a904c0(void) {
  FTRACE(0x10a904c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a904c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a904c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a904c3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a904c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a904c9 push eax */
  push32((uint32_t)(EAX));
  /* 10a904ca call 0x10a90e20 */
  push32(0x10a904cfu); f_10a90e20();
  /* 10a904cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a904d2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10a904d5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10a904d7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a904da push ecx */
  push32((uint32_t)(ECX));
  /* 10a904db mov edx, dword ptr [0x10ab0920] */
  EDX = (r32((uint32_t)(0x10ab0920)));
  /* 10a904e1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a904e3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a904e5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10a904eb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a904f1 push edx */
  push32((uint32_t)(EDX));
  /* 10a904f2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a904f5 push eax */
  push32((uint32_t)(EAX));
  /* 10a904f6 call dword ptr [0x10ab093c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab093c))), 0x10a904fcu);
  /* 10a904fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a904fe jne 0x10a90514 */
  if (!C.zf) goto L_10a90514;
  /* 10a90500 mov dword ptr [0x10ab0934], 0 */
  w32((uint32_t)(0x10ab0934), (0x0u));
  /* 10a9050a mov eax, 1 */
  EAX = (0x1u);
  /* 10a9050f jmp 0x10a907de */
  goto L_10a907de;
L_10a90514:;
  /* 10a90514 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a90517 push ecx */
  push32((uint32_t)(ECX));
  /* 10a90518 mov edx, dword ptr [0x10ab0930] */
  EDX = (r32((uint32_t)(0x10ab0930)));
  /* 10a9051e push edx */
  push32((uint32_t)(EDX));
  /* 10a9051f call 0x10a92a60 */
  push32(0x10a90524u); f_10a92a60();
  /* 10a90524 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90527 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90529 jne 0x10a9064f */
  if (!C.zf) goto L_10a9064f;
  /* 10a9052f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10a90531 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10a90534 push eax */
  push32((uint32_t)(EAX));
  /* 10a90535 mov ecx, dword ptr [0x10ab0928] */
  ECX = (r32((uint32_t)(0x10ab0928)));
  /* 10a9053b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a9053d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a9053f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10a90545 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9054b push ecx */
  push32((uint32_t)(ECX));
  /* 10a9054c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a9054f push edx */
  push32((uint32_t)(EDX));
  /* 10a90550 call dword ptr [0x10ab093c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab093c))), 0x10a90556u);
  /* 10a90556 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90558 jne 0x10a9056e */
  if (!C.zf) goto L_10a9056e;
  /* 10a9055a mov dword ptr [0x10ab0934], 0 */
  w32((uint32_t)(0x10ab0934), (0x0u));
  /* 10a90564 mov eax, 1 */
  EAX = (0x1u);
  /* 10a90569 jmp 0x10a907de */
  goto L_10a907de;
L_10a9056e:;
  /* 10a9056e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10a90571 push eax */
  push32((uint32_t)(EAX));
  /* 10a90572 mov ecx, dword ptr [0x10ab092c] */
  ECX = (r32((uint32_t)(0x10ab092c)));
  /* 10a90578 push ecx */
  push32((uint32_t)(ECX));
  /* 10a90579 call 0x10a92a60 */
  push32(0x10a9057eu); f_10a92a60();
  /* 10a9057e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90581 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90583 jne 0x10a905b0 */
  if (!C.zf) goto L_10a905b0;
  /* 10a90585 mov edx, dword ptr [0x10ab0934] */
  EDX = (r32((uint32_t)(0x10ab0934)));
  /* 10a9058b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10a90591 mov dword ptr [0x10ab0934], edx */
  w32((uint32_t)(0x10ab0934), (EDX));
  /* 10a90597 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a9059a mov dword ptr [0x10ab0938], eax */
  w32((uint32_t)(0x10ab0938), (EAX));
  /* 10a9059f mov ecx, dword ptr [0x10ab0938] */
  ECX = (r32((uint32_t)(0x10ab0938)));
  /* 10a905a5 mov dword ptr [0x10ab091c], ecx */
  w32((uint32_t)(0x10ab091c), (ECX));
  /* 10a905ab jmp 0x10a9064f */
  goto L_10a9064f;
L_10a905b0:;
  /* 10a905b0 mov edx, dword ptr [0x10ab0934] */
  EDX = (r32((uint32_t)(0x10ab0934)));
  /* 10a905b6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10a905b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a905bb jne 0x10a9064f */
  if (!C.zf) goto L_10a9064f;
  /* 10a905c1 cmp dword ptr [0x10ab0924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a905c8 je 0x10a9061d */
  if (C.zf) goto L_10a9061d;
  /* 10a905ca mov eax, dword ptr [0x10ab0924] */
  EAX = (r32((uint32_t)(0x10ab0924)));
  /* 10a905cf push eax */
  push32((uint32_t)(EAX));
  /* 10a905d0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a905d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a905d4 mov edx, dword ptr [0x10ab092c] */
  EDX = (r32((uint32_t)(0x10ab092c)));
  /* 10a905da push edx */
  push32((uint32_t)(EDX));
  /* 10a905db call 0x10a92b30 */
  push32(0x10a905e0u); f_10a92b30();
  /* 10a905e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a905e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a905e5 jne 0x10a9061d */
  if (!C.zf) goto L_10a9061d;
  /* 10a905e7 mov eax, dword ptr [0x10ab0934] */
  EAX = (r32((uint32_t)(0x10ab0934)));
  /* 10a905ec or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10a905ee mov dword ptr [0x10ab0934], eax */
  w32((uint32_t)(0x10ab0934), (EAX));
  /* 10a905f3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a905f6 mov dword ptr [0x10ab0938], ecx */
  w32((uint32_t)(0x10ab0938), (ECX));
  /* 10a905fc mov edx, dword ptr [0x10ab092c] */
  EDX = (r32((uint32_t)(0x10ab092c)));
  /* 10a90602 push edx */
  push32((uint32_t)(EDX));
  /* 10a90603 call 0x10a871c0 */
  push32(0x10a90608u); f_10a871c0();
  /* 10a90608 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9060b cmp eax, dword ptr [0x10ab0924] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ab0924))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90611 jne 0x10a9061b */
  if (!C.zf) goto L_10a9061b;
  /* 10a90613 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a90616 mov dword ptr [0x10ab091c], eax */
  w32((uint32_t)(0x10ab091c), (EAX));
L_10a9061b:;
  /* 10a9061b jmp 0x10a9064f */
  goto L_10a9064f;
L_10a9061d:;
  /* 10a9061d mov ecx, dword ptr [0x10ab0934] */
  ECX = (r32((uint32_t)(0x10ab0934)));
  /* 10a90623 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a90626 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a90628 jne 0x10a9064f */
  if (!C.zf) goto L_10a9064f;
  /* 10a9062a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a9062d push edx */
  push32((uint32_t)(EDX));
  /* 10a9062e call 0x10a90b60 */
  push32(0x10a90633u); f_10a90b60();
  /* 10a90633 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90636 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90638 je 0x10a9064f */
  if (C.zf) goto L_10a9064f;
  /* 10a9063a mov eax, dword ptr [0x10ab0934] */
  EAX = (r32((uint32_t)(0x10ab0934)));
  /* 10a9063f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10a90641 mov dword ptr [0x10ab0934], eax */
  w32((uint32_t)(0x10ab0934), (EAX));
  /* 10a90646 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a90649 mov dword ptr [0x10ab0938], ecx */
  w32((uint32_t)(0x10ab0938), (ECX));
L_10a9064f:;
  /* 10a9064f mov edx, dword ptr [0x10ab0934] */
  EDX = (r32((uint32_t)(0x10ab0934)));
  /* 10a90655 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10a9065b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90661 je 0x10a907d1 */
  if (C.zf) goto L_10a907d1;
  /* 10a90667 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10a90669 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10a9066c push eax */
  push32((uint32_t)(EAX));
  /* 10a9066d mov ecx, dword ptr [0x10ab0928] */
  ECX = (r32((uint32_t)(0x10ab0928)));
  /* 10a90673 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a90675 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a90677 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10a9067d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90683 push ecx */
  push32((uint32_t)(ECX));
  /* 10a90684 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a90687 push edx */
  push32((uint32_t)(EDX));
  /* 10a90688 call dword ptr [0x10ab093c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab093c))), 0x10a9068eu);
  /* 10a9068e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90690 jne 0x10a906a6 */
  if (!C.zf) goto L_10a906a6;
  /* 10a90692 mov dword ptr [0x10ab0934], 0 */
  w32((uint32_t)(0x10ab0934), (0x0u));
  /* 10a9069c mov eax, 1 */
  EAX = (0x1u);
  /* 10a906a1 jmp 0x10a907de */
  goto L_10a907de;
L_10a906a6:;
  /* 10a906a6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10a906a9 push eax */
  push32((uint32_t)(EAX));
  /* 10a906aa mov ecx, dword ptr [0x10ab092c] */
  ECX = (r32((uint32_t)(0x10ab092c)));
  /* 10a906b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a906b1 call 0x10a92a60 */
  push32(0x10a906b6u); f_10a92a60();
  /* 10a906b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a906b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a906bb jne 0x10a90770 */
  if (!C.zf) goto L_10a90770;
  /* 10a906c1 mov edx, dword ptr [0x10ab0934] */
  EDX = (r32((uint32_t)(0x10ab0934)));
  /* 10a906c7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10a906ca mov dword ptr [0x10ab0934], edx */
  w32((uint32_t)(0x10ab0934), (EDX));
  /* 10a906d0 cmp dword ptr [0x10ab0928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a906d7 je 0x10a906fa */
  if (C.zf) goto L_10a906fa;
  /* 10a906d9 mov eax, dword ptr [0x10ab0934] */
  EAX = (r32((uint32_t)(0x10ab0934)));
  /* 10a906de or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10a906e1 mov dword ptr [0x10ab0934], eax */
  w32((uint32_t)(0x10ab0934), (EAX));
  /* 10a906e6 cmp dword ptr [0x10ab091c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab091c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a906ed jne 0x10a906f8 */
  if (!C.zf) goto L_10a906f8;
  /* 10a906ef mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a906f2 mov dword ptr [0x10ab091c], ecx */
  w32((uint32_t)(0x10ab091c), (ECX));
L_10a906f8:;
  /* 10a906f8 jmp 0x10a9076e */
  goto L_10a9076e;
L_10a906fa:;
  /* 10a906fa cmp dword ptr [0x10ab0924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90701 je 0x10a9074f */
  if (C.zf) goto L_10a9074f;
  /* 10a90703 mov edx, dword ptr [0x10ab092c] */
  EDX = (r32((uint32_t)(0x10ab092c)));
  /* 10a90709 push edx */
  push32((uint32_t)(EDX));
  /* 10a9070a call 0x10a871c0 */
  push32(0x10a9070fu); f_10a871c0();
  /* 10a9070f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90712 cmp eax, dword ptr [0x10ab0924] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ab0924))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90718 jne 0x10a9074f */
  if (!C.zf) goto L_10a9074f;
  /* 10a9071a push 1 */
  push32((uint32_t)(0x1u));
  /* 10a9071c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a9071f push eax */
  push32((uint32_t)(EAX));
  /* 10a90720 call 0x10a90bb0 */
  push32(0x10a90725u); f_10a90bb0();
  /* 10a90725 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90728 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a9072a je 0x10a9074d */
  if (C.zf) goto L_10a9074d;
  /* 10a9072c mov ecx, dword ptr [0x10ab0934] */
  ECX = (r32((uint32_t)(0x10ab0934)));
  /* 10a90732 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10a90735 mov dword ptr [0x10ab0934], ecx */
  w32((uint32_t)(0x10ab0934), (ECX));
  /* 10a9073b cmp dword ptr [0x10ab091c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab091c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90742 jne 0x10a9074d */
  if (!C.zf) goto L_10a9074d;
  /* 10a90744 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a90747 mov dword ptr [0x10ab091c], edx */
  w32((uint32_t)(0x10ab091c), (EDX));
L_10a9074d:;
  /* 10a9074d jmp 0x10a9076e */
  goto L_10a9076e;
L_10a9074f:;
  /* 10a9074f mov eax, dword ptr [0x10ab0934] */
  EAX = (r32((uint32_t)(0x10ab0934)));
  /* 10a90754 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10a90757 mov dword ptr [0x10ab0934], eax */
  w32((uint32_t)(0x10ab0934), (EAX));
  /* 10a9075c cmp dword ptr [0x10ab091c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab091c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90763 jne 0x10a9076e */
  if (!C.zf) goto L_10a9076e;
  /* 10a90765 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a90768 mov dword ptr [0x10ab091c], ecx */
  w32((uint32_t)(0x10ab091c), (ECX));
L_10a9076e:;
  /* 10a9076e jmp 0x10a907d1 */
  goto L_10a907d1;
L_10a90770:;
  /* 10a90770 cmp dword ptr [0x10ab0928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90777 jne 0x10a907d1 */
  if (!C.zf) goto L_10a907d1;
  /* 10a90779 cmp dword ptr [0x10ab0924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90780 je 0x10a907d1 */
  if (C.zf) goto L_10a907d1;
  /* 10a90782 mov edx, dword ptr [0x10ab0924] */
  EDX = (r32((uint32_t)(0x10ab0924)));
  /* 10a90788 push edx */
  push32((uint32_t)(EDX));
  /* 10a90789 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10a9078c push eax */
  push32((uint32_t)(EAX));
  /* 10a9078d mov ecx, dword ptr [0x10ab092c] */
  ECX = (r32((uint32_t)(0x10ab092c)));
  /* 10a90793 push ecx */
  push32((uint32_t)(ECX));
  /* 10a90794 call 0x10a92b30 */
  push32(0x10a90799u); f_10a92b30();
  /* 10a90799 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9079c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a9079e jne 0x10a907d1 */
  if (!C.zf) goto L_10a907d1;
  /* 10a907a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a907a2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a907a5 push edx */
  push32((uint32_t)(EDX));
  /* 10a907a6 call 0x10a90bb0 */
  push32(0x10a907abu); f_10a90bb0();
  /* 10a907ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a907ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a907b0 je 0x10a907d1 */
  if (C.zf) goto L_10a907d1;
  /* 10a907b2 mov eax, dword ptr [0x10ab0934] */
  EAX = (r32((uint32_t)(0x10ab0934)));
  /* 10a907b7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10a907ba mov dword ptr [0x10ab0934], eax */
  w32((uint32_t)(0x10ab0934), (EAX));
  /* 10a907bf cmp dword ptr [0x10ab091c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab091c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a907c6 jne 0x10a907d1 */
  if (!C.zf) goto L_10a907d1;
  /* 10a907c8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a907cb mov dword ptr [0x10ab091c], ecx */
  w32((uint32_t)(0x10ab091c), (ECX));
L_10a907d1:;
  /* 10a907d1 mov eax, dword ptr [0x10ab0934] */
  EAX = (r32((uint32_t)(0x10ab0934)));
  /* 10a907d6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a907d9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a907db sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a907dd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10a907de:;
  /* 10a907de mov esp, ebp */
  ESP = (EBP);
  /* 10a907e0 pop ebp */
  EBP = (pop32());
  /* 10a907e1 ret 4 */
  ESPCHK(0x10a904c0u, _esp0);
  ESP += 8; return;
}

/* FUN_100107f0 @ 0x10a907f0 (116 bytes, 33 insns) */
void f_10a907f0(void) {
  FTRACE(0x10a907f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a907f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a907f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a907f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a907f4 mov eax, dword ptr [0x10ab092c] */
  EAX = (r32((uint32_t)(0x10ab092c)));
  /* 10a907f9 push eax */
  push32((uint32_t)(EAX));
  /* 10a907fa call 0x10a871c0 */
  push32(0x10a907ffu); f_10a871c0();
  /* 10a907ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90802 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a90804 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90807 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10a9080a mov dword ptr [0x10ab0928], ecx */
  w32((uint32_t)(0x10ab0928), (ECX));
  /* 10a90810 cmp dword ptr [0x10ab0928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90817 je 0x10a90822 */
  if (C.zf) goto L_10a90822;
  /* 10a90819 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10a90820 jmp 0x10a90834 */
  goto L_10a90834;
L_10a90822:;
  /* 10a90822 mov edx, dword ptr [0x10ab092c] */
  EDX = (r32((uint32_t)(0x10ab092c)));
  /* 10a90828 push edx */
  push32((uint32_t)(EDX));
  /* 10a90829 call 0x10a90ea0 */
  push32(0x10a9082eu); f_10a90ea0();
  /* 10a9082e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90831 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a90834:;
  /* 10a90834 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a90837 mov dword ptr [0x10ab0924], eax */
  w32((uint32_t)(0x10ab0924), (EAX));
  /* 10a9083c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a9083e push 0x10a90870 */
  push32((uint32_t)(0x10a90870u));
  /* 10a90843 call dword ptr [0x10ab32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32c4))), 0x10a90849u);
  /* 10a90849 mov ecx, dword ptr [0x10ab0934] */
  ECX = (r32((uint32_t)(0x10ab0934)));
  /* 10a9084f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10a90852 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a90854 jne 0x10a90860 */
  if (!C.zf) goto L_10a90860;
  /* 10a90856 mov dword ptr [0x10ab0934], 0 */
  w32((uint32_t)(0x10ab0934), (0x0u));
L_10a90860:;
  /* 10a90860 mov esp, ebp */
  ESP = (EBP);
  /* 10a90862 pop ebp */
  EBP = (pop32());
  /* 10a90863 ret  */
  ESPCHK(0x10a907f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010870 @ 0x10a90870 (287 bytes, 86 insns) */
void f_10a90870(void) {
  FTRACE(0x10a90870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a90870 push ebp */
  push32((uint32_t)(EBP));
  /* 10a90871 mov ebp, esp */
  EBP = (ESP);
  /* 10a90873 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a90876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90879 push eax */
  push32((uint32_t)(EAX));
  /* 10a9087a call 0x10a90e20 */
  push32(0x10a9087fu); f_10a90e20();
  /* 10a9087f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90882 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10a90885 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10a90887 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a9088a push ecx */
  push32((uint32_t)(ECX));
  /* 10a9088b mov edx, dword ptr [0x10ab0928] */
  EDX = (r32((uint32_t)(0x10ab0928)));
  /* 10a90891 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a90893 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a90895 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10a9089b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a908a1 push edx */
  push32((uint32_t)(EDX));
  /* 10a908a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a908a5 push eax */
  push32((uint32_t)(EAX));
  /* 10a908a6 call dword ptr [0x10ab093c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab093c))), 0x10a908acu);
  /* 10a908ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a908ae jne 0x10a908c4 */
  if (!C.zf) goto L_10a908c4;
  /* 10a908b0 mov dword ptr [0x10ab0934], 0 */
  w32((uint32_t)(0x10ab0934), (0x0u));
  /* 10a908ba mov eax, 1 */
  EAX = (0x1u);
  /* 10a908bf jmp 0x10a90989 */
  goto L_10a90989;
L_10a908c4:;
  /* 10a908c4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a908c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a908c8 mov edx, dword ptr [0x10ab092c] */
  EDX = (r32((uint32_t)(0x10ab092c)));
  /* 10a908ce push edx */
  push32((uint32_t)(EDX));
  /* 10a908cf call 0x10a92a60 */
  push32(0x10a908d4u); f_10a92a60();
  /* 10a908d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a908d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a908d9 jne 0x10a90919 */
  if (!C.zf) goto L_10a90919;
  /* 10a908db cmp dword ptr [0x10ab0928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a908e2 jne 0x10a908f6 */
  if (!C.zf) goto L_10a908f6;
  /* 10a908e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a908e6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a908e9 push eax */
  push32((uint32_t)(EAX));
  /* 10a908ea call 0x10a90bb0 */
  push32(0x10a908efu); f_10a90bb0();
  /* 10a908ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a908f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a908f4 je 0x10a90917 */
  if (C.zf) goto L_10a90917;
L_10a908f6:;
  /* 10a908f6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a908f9 mov dword ptr [0x10ab0938], ecx */
  w32((uint32_t)(0x10ab0938), (ECX));
  /* 10a908ff mov edx, dword ptr [0x10ab0938] */
  EDX = (r32((uint32_t)(0x10ab0938)));
  /* 10a90905 mov dword ptr [0x10ab091c], edx */
  w32((uint32_t)(0x10ab091c), (EDX));
  /* 10a9090b mov eax, dword ptr [0x10ab0934] */
  EAX = (r32((uint32_t)(0x10ab0934)));
  /* 10a90910 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10a90912 mov dword ptr [0x10ab0934], eax */
  w32((uint32_t)(0x10ab0934), (EAX));
L_10a90917:;
  /* 10a90917 jmp 0x10a9097c */
  goto L_10a9097c;
L_10a90919:;
  /* 10a90919 cmp dword ptr [0x10ab0928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90920 jne 0x10a9097c */
  if (!C.zf) goto L_10a9097c;
  /* 10a90922 cmp dword ptr [0x10ab0924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ab0924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90929 je 0x10a9097c */
  if (C.zf) goto L_10a9097c;
  /* 10a9092b mov ecx, dword ptr [0x10ab0924] */
  ECX = (r32((uint32_t)(0x10ab0924)));
  /* 10a90931 push ecx */
  push32((uint32_t)(ECX));
  /* 10a90932 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10a90935 push edx */
  push32((uint32_t)(EDX));
  /* 10a90936 mov eax, dword ptr [0x10ab092c] */
  EAX = (r32((uint32_t)(0x10ab092c)));
  /* 10a9093b push eax */
  push32((uint32_t)(EAX));
  /* 10a9093c call 0x10a92b30 */
  push32(0x10a90941u); f_10a92b30();
  /* 10a90941 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90944 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90946 jne 0x10a9097c */
  if (!C.zf) goto L_10a9097c;
  /* 10a90948 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a9094a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a9094d push ecx */
  push32((uint32_t)(ECX));
  /* 10a9094e call 0x10a90bb0 */
  push32(0x10a90953u); f_10a90bb0();
  /* 10a90953 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90956 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90958 je 0x10a9097c */
  if (C.zf) goto L_10a9097c;
  /* 10a9095a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a9095d mov dword ptr [0x10ab0938], edx */
  w32((uint32_t)(0x10ab0938), (EDX));
  /* 10a90963 mov eax, dword ptr [0x10ab0938] */
  EAX = (r32((uint32_t)(0x10ab0938)));
  /* 10a90968 mov dword ptr [0x10ab091c], eax */
  w32((uint32_t)(0x10ab091c), (EAX));
  /* 10a9096d mov ecx, dword ptr [0x10ab0934] */
  ECX = (r32((uint32_t)(0x10ab0934)));
  /* 10a90973 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10a90976 mov dword ptr [0x10ab0934], ecx */
  w32((uint32_t)(0x10ab0934), (ECX));
L_10a9097c:;
  /* 10a9097c mov eax, dword ptr [0x10ab0934] */
  EAX = (r32((uint32_t)(0x10ab0934)));
  /* 10a90981 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a90984 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a90986 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a90988 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10a90989:;
  /* 10a90989 mov esp, ebp */
  ESP = (EBP);
  /* 10a9098b pop ebp */
  EBP = (pop32());
  /* 10a9098c ret 4 */
  ESPCHK(0x10a90870u, _esp0);
  ESP += 8; return;
}

/* FUN_10010990 @ 0x10a90990 (69 bytes, 20 insns) */
void f_10a90990(void) {
  FTRACE(0x10a90990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a90990 push ebp */
  push32((uint32_t)(EBP));
  /* 10a90991 mov ebp, esp */
  EBP = (ESP);
  /* 10a90993 mov eax, dword ptr [0x10ab0930] */
  EAX = (r32((uint32_t)(0x10ab0930)));
  /* 10a90998 push eax */
  push32((uint32_t)(EAX));
  /* 10a90999 call 0x10a871c0 */
  push32(0x10a9099eu); f_10a871c0();
  /* 10a9099e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a909a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a909a3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a909a6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10a909a9 mov dword ptr [0x10ab0920], ecx */
  w32((uint32_t)(0x10ab0920), (ECX));
  /* 10a909af push 1 */
  push32((uint32_t)(0x1u));
  /* 10a909b1 push 0x10a909e0 */
  push32((uint32_t)(0x10a909e0u));
  /* 10a909b6 call dword ptr [0x10ab32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32c4))), 0x10a909bcu);
  /* 10a909bc mov edx, dword ptr [0x10ab0934] */
  EDX = (r32((uint32_t)(0x10ab0934)));
  /* 10a909c2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a909c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a909c7 jne 0x10a909d3 */
  if (!C.zf) goto L_10a909d3;
  /* 10a909c9 mov dword ptr [0x10ab0934], 0 */
  w32((uint32_t)(0x10ab0934), (0x0u));
L_10a909d3:;
  /* 10a909d3 pop ebp */
  EBP = (pop32());
  /* 10a909d4 ret  */
  ESPCHK(0x10a90990u, _esp0);
  ESP += 4; return;
}

/* FUN_100109e0 @ 0x10a909e0 (172 bytes, 54 insns) */
void f_10a909e0(void) {
  FTRACE(0x10a909e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a909e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a909e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a909e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a909e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a909e9 push eax */
  push32((uint32_t)(EAX));
  /* 10a909ea call 0x10a90e20 */
  push32(0x10a909efu); f_10a90e20();
  /* 10a909ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a909f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10a909f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10a909f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a909fa push ecx */
  push32((uint32_t)(ECX));
  /* 10a909fb mov edx, dword ptr [0x10ab0920] */
  EDX = (r32((uint32_t)(0x10ab0920)));
  /* 10a90a01 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a90a03 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a90a05 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10a90a0b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90a11 push edx */
  push32((uint32_t)(EDX));
  /* 10a90a12 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a90a15 push eax */
  push32((uint32_t)(EAX));
  /* 10a90a16 call dword ptr [0x10ab093c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab093c))), 0x10a90a1cu);
  /* 10a90a1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90a1e jne 0x10a90a31 */
  if (!C.zf) goto L_10a90a31;
  /* 10a90a20 mov dword ptr [0x10ab0934], 0 */
  w32((uint32_t)(0x10ab0934), (0x0u));
  /* 10a90a2a mov eax, 1 */
  EAX = (0x1u);
  /* 10a90a2f jmp 0x10a90a86 */
  goto L_10a90a86;
L_10a90a31:;
  /* 10a90a31 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10a90a34 push ecx */
  push32((uint32_t)(ECX));
  /* 10a90a35 mov edx, dword ptr [0x10ab0930] */
  EDX = (r32((uint32_t)(0x10ab0930)));
  /* 10a90a3b push edx */
  push32((uint32_t)(EDX));
  /* 10a90a3c call 0x10a92a60 */
  push32(0x10a90a41u); f_10a92a60();
  /* 10a90a41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90a44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90a46 jne 0x10a90a79 */
  if (!C.zf) goto L_10a90a79;
  /* 10a90a48 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a90a4b push eax */
  push32((uint32_t)(EAX));
  /* 10a90a4c call 0x10a90b60 */
  push32(0x10a90a51u); f_10a90b60();
  /* 10a90a51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90a54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90a56 je 0x10a90a79 */
  if (C.zf) goto L_10a90a79;
  /* 10a90a58 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10a90a5b mov dword ptr [0x10ab0938], ecx */
  w32((uint32_t)(0x10ab0938), (ECX));
  /* 10a90a61 mov edx, dword ptr [0x10ab0938] */
  EDX = (r32((uint32_t)(0x10ab0938)));
  /* 10a90a67 mov dword ptr [0x10ab091c], edx */
  w32((uint32_t)(0x10ab091c), (EDX));
  /* 10a90a6d mov eax, dword ptr [0x10ab0934] */
  EAX = (r32((uint32_t)(0x10ab0934)));
  /* 10a90a72 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10a90a74 mov dword ptr [0x10ab0934], eax */
  w32((uint32_t)(0x10ab0934), (EAX));
L_10a90a79:;
  /* 10a90a79 mov eax, dword ptr [0x10ab0934] */
  EAX = (r32((uint32_t)(0x10ab0934)));
  /* 10a90a7e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10a90a81 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a90a83 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a90a85 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10a90a86:;
  /* 10a90a86 mov esp, ebp */
  ESP = (EBP);
  /* 10a90a88 pop ebp */
  EBP = (pop32());
  /* 10a90a89 ret 4 */
  ESPCHK(0x10a909e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010a90 @ 0x10a90a90 (43 bytes, 11 insns) */
void f_10a90a90(void) {
  FTRACE(0x10a90a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a90a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10a90a91 mov ebp, esp */
  EBP = (ESP);
  /* 10a90a93 mov eax, dword ptr [0x10ab0934] */
  EAX = (r32((uint32_t)(0x10ab0934)));
  /* 10a90a98 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10a90a9d mov dword ptr [0x10ab0934], eax */
  w32((uint32_t)(0x10ab0934), (EAX));
  /* 10a90aa2 call dword ptr [0x10ab32b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32b4))), 0x10a90aa8u);
  /* 10a90aa8 mov dword ptr [0x10ab0938], eax */
  w32((uint32_t)(0x10ab0938), (EAX));
  /* 10a90aad mov ecx, dword ptr [0x10ab0938] */
  ECX = (r32((uint32_t)(0x10ab0938)));
  /* 10a90ab3 mov dword ptr [0x10ab091c], ecx */
  w32((uint32_t)(0x10ab091c), (ECX));
  /* 10a90ab9 pop ebp */
  EBP = (pop32());
  /* 10a90aba ret  */
  ESPCHK(0x10a90a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ac0 @ 0x10a90ac0 (155 bytes, 57 insns) */
void f_10a90ac0(void) {
  FTRACE(0x10a90ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a90ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a90ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10a90ac3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a90ac6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90aca je 0x10a90aeb */
  if (C.zf) goto L_10a90aeb;
  /* 10a90acc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90acf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a90ad2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a90ad4 je 0x10a90aeb */
  if (C.zf) goto L_10a90aeb;
  /* 10a90ad6 push 0x10aaca9c */
  push32((uint32_t)(0x10aaca9cu));
  /* 10a90adb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90ade push edx */
  push32((uint32_t)(EDX));
  /* 10a90adf call 0x10a90020 */
  push32(0x10a90ae4u); f_10a90020();
  /* 10a90ae4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90ae7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90ae9 jne 0x10a90b13 */
  if (!C.zf) goto L_10a90b13;
L_10a90aeb:;
  /* 10a90aeb push 8 */
  push32((uint32_t)(0x8u));
  /* 10a90aed lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10a90af0 push eax */
  push32((uint32_t)(EAX));
  /* 10a90af1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10a90af6 mov ecx, dword ptr [0x10ab0938] */
  ECX = (r32((uint32_t)(0x10ab0938)));
  /* 10a90afc push ecx */
  push32((uint32_t)(ECX));
  /* 10a90afd call dword ptr [0x10ab093c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab093c))), 0x10a90b03u);
  /* 10a90b03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90b05 jne 0x10a90b0b */
  if (!C.zf) goto L_10a90b0b;
  /* 10a90b07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a90b09 jmp 0x10a90b57 */
  goto L_10a90b57;
L_10a90b0b:;
  /* 10a90b0b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10a90b0e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a90b11 jmp 0x10a90b4b */
  goto L_10a90b4b;
L_10a90b13:;
  /* 10a90b13 push 0x10aaca98 */
  push32((uint32_t)(0x10aaca98u));
  /* 10a90b18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90b1b push eax */
  push32((uint32_t)(EAX));
  /* 10a90b1c call 0x10a90020 */
  push32(0x10a90b21u); f_10a90020();
  /* 10a90b21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90b24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90b26 jne 0x10a90b4b */
  if (!C.zf) goto L_10a90b4b;
  /* 10a90b28 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a90b2a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10a90b2d push ecx */
  push32((uint32_t)(ECX));
  /* 10a90b2e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a90b30 mov edx, dword ptr [0x10ab0938] */
  EDX = (r32((uint32_t)(0x10ab0938)));
  /* 10a90b36 push edx */
  push32((uint32_t)(EDX));
  /* 10a90b37 call dword ptr [0x10ab093c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab093c))), 0x10a90b3du);
  /* 10a90b3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90b3f jne 0x10a90b45 */
  if (!C.zf) goto L_10a90b45;
  /* 10a90b41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a90b43 jmp 0x10a90b57 */
  goto L_10a90b57;
L_10a90b45:;
  /* 10a90b45 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10a90b48 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a90b4b:;
  /* 10a90b4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90b4e push ecx */
  push32((uint32_t)(ECX));
  /* 10a90b4f call 0x10a92c40 */
  push32(0x10a90b54u); f_10a92c40();
  /* 10a90b54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a90b57:;
  /* 10a90b57 mov esp, ebp */
  ESP = (EBP);
  /* 10a90b59 pop ebp */
  EBP = (pop32());
  /* 10a90b5a ret  */
  ESPCHK(0x10a90ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b60 @ 0x10a90b60 (79 bytes, 26 insns) */
void f_10a90b60(void) {
  FTRACE(0x10a90b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a90b60 push ebp */
  push32((uint32_t)(EBP));
  /* 10a90b61 mov ebp, esp */
  EBP = (ESP);
  /* 10a90b63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a90b66 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10a90b6a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10a90b6e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a90b75 jmp 0x10a90b80 */
  goto L_10a90b80;
L_10a90b77:;
  /* 10a90b77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a90b7a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90b7d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a90b80:;
  /* 10a90b80 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90b84 jae 0x10a90ba6 */
  if (!C.cf) goto L_10a90ba6;
  /* 10a90b86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a90b89 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a90b8f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a90b92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a90b94 mov cx, word ptr [eax*2 + 0x10aaf9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10aaf9c4)));
  /* 10a90b9c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90b9e jne 0x10a90ba4 */
  if (!C.zf) goto L_10a90ba4;
  /* 10a90ba0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a90ba2 jmp 0x10a90bab */
  goto L_10a90bab;
L_10a90ba4:;
  /* 10a90ba4 jmp 0x10a90b77 */
  goto L_10a90b77;
L_10a90ba6:;
  /* 10a90ba6 mov eax, 1 */
  EAX = (0x1u);
L_10a90bab:;
  /* 10a90bab mov esp, ebp */
  ESP = (EBP);
  /* 10a90bad pop ebp */
  EBP = (pop32());
  /* 10a90bae ret  */
  ESPCHK(0x10a90b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bb0 @ 0x10a90bb0 (135 bytes, 48 insns) */
void f_10a90bb0(void) {
  FTRACE(0x10a90bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a90bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a90bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10a90bb3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a90bb6 push esi */
  push32((uint32_t)(ESI));
  /* 10a90bb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90bba and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a90bbf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a90bc4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a90bc9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10a90bcc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a90bd1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a90bd4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10a90bd6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10a90bd9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a90bda push 1 */
  push32((uint32_t)(0x1u));
  /* 10a90bdc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a90bdf push edx */
  push32((uint32_t)(EDX));
  /* 10a90be0 call dword ptr [0x10ab093c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab093c))), 0x10a90be6u);
  /* 10a90be6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90be8 jne 0x10a90bee */
  if (!C.zf) goto L_10a90bee;
  /* 10a90bea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a90bec jmp 0x10a90c32 */
  goto L_10a90c32;
L_10a90bee:;
  /* 10a90bee lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10a90bf1 push eax */
  push32((uint32_t)(EAX));
  /* 10a90bf2 call 0x10a90e20 */
  push32(0x10a90bf7u); f_10a90e20();
  /* 10a90bf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90bfa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90bfd je 0x10a90c2d */
  if (C.zf) goto L_10a90c2d;
  /* 10a90bff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90c03 je 0x10a90c2d */
  if (C.zf) goto L_10a90c2d;
  /* 10a90c05 mov ecx, dword ptr [0x10ab092c] */
  ECX = (r32((uint32_t)(0x10ab092c)));
  /* 10a90c0b push ecx */
  push32((uint32_t)(ECX));
  /* 10a90c0c call 0x10a90ea0 */
  push32(0x10a90c11u); f_10a90ea0();
  /* 10a90c11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90c14 mov esi, eax */
  ESI = (EAX);
  /* 10a90c16 mov edx, dword ptr [0x10ab092c] */
  EDX = (r32((uint32_t)(0x10ab092c)));
  /* 10a90c1c push edx */
  push32((uint32_t)(EDX));
  /* 10a90c1d call 0x10a871c0 */
  push32(0x10a90c22u); f_10a871c0();
  /* 10a90c22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90c25 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90c27 jne 0x10a90c2d */
  if (!C.zf) goto L_10a90c2d;
  /* 10a90c29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a90c2b jmp 0x10a90c32 */
  goto L_10a90c32;
L_10a90c2d:;
  /* 10a90c2d mov eax, 1 */
  EAX = (0x1u);
L_10a90c32:;
  /* 10a90c32 pop esi */
  ESI = (pop32());
  /* 10a90c33 mov esp, ebp */
  ESP = (EBP);
  /* 10a90c35 pop ebp */
  EBP = (pop32());
  /* 10a90c36 ret  */
  ESPCHK(0x10a90bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c40 @ 0x10a90c40 (77 bytes, 18 insns) */
void f_10a90c40(void) {
  FTRACE(0x10a90c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a90c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10a90c41 mov ebp, esp */
  EBP = (ESP);
  /* 10a90c43 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a90c49 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10a90c53 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10a90c59 push eax */
  push32((uint32_t)(EAX));
  /* 10a90c5a call dword ptr [0x10ab32b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32b0))), 0x10a90c60u);
  /* 10a90c60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90c62 je 0x10a90c79 */
  if (C.zf) goto L_10a90c79;
  /* 10a90c64 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90c6b jne 0x10a90c79 */
  if (!C.zf) goto L_10a90c79;
  /* 10a90c6d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10a90c77 jmp 0x10a90c83 */
  goto L_10a90c83;
L_10a90c79:;
  /* 10a90c79 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10a90c83:;
  /* 10a90c83 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10a90c89 mov esp, ebp */
  ESP = (EBP);
  /* 10a90c8b pop ebp */
  EBP = (pop32());
  /* 10a90c8c ret  */
  ESPCHK(0x10a90c40u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10a90c90 (388 bytes, 118 insns) */
void f_10a90c90(void) {
  FTRACE(0x10a90c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a90c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10a90c91 mov ebp, esp */
  EBP = (ESP);
  /* 10a90c93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a90c96 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a90c9d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10a90ca4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a90cab:;
  /* 10a90cab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a90cae cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90cb1 jg 0x10a90df8 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a90df8;
  /* 10a90cb7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a90cba add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90cbd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a90cbe sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a90cc0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a90cc2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a90cc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a90cc8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a90ccb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90cce cmp edx, dword ptr [ecx + 0x10aaf520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10aaf520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90cd4 jne 0x10a90dce */
  if (!C.zf) goto L_10a90dce;
  /* 10a90cda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a90cdd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a90ce0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90ce4 ja 0x10a90d07 */
  if ((!C.cf&&!C.zf)) goto L_10a90d07;
  /* 10a90ce6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90cea je 0x10a90d79 */
  if (C.zf) goto L_10a90d79;
  /* 10a90cf0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90cf4 je 0x10a90d24 */
  if (C.zf) goto L_10a90d24;
  /* 10a90cf6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90cfa je 0x10a90d46 */
  if (C.zf) goto L_10a90d46;
  /* 10a90cfc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90d00 je 0x10a90d68 */
  if (C.zf) goto L_10a90d68;
  /* 10a90d02 jmp 0x10a90d98 */
  goto L_10a90d98;
L_10a90d07:;
  /* 10a90d07 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90d0e je 0x10a90d35 */
  if (C.zf) goto L_10a90d35;
  /* 10a90d10 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90d17 je 0x10a90d57 */
  if (C.zf) goto L_10a90d57;
  /* 10a90d19 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90d20 je 0x10a90d8a */
  if (C.zf) goto L_10a90d8a;
  /* 10a90d22 jmp 0x10a90d98 */
  goto L_10a90d98;
L_10a90d24:;
  /* 10a90d24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a90d27 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a90d2a add ecx, 0x10aaf524 */
  { uint32_t _a=(ECX),_b=(0x10aaf524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90d30 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a90d33 jmp 0x10a90d98 */
  goto L_10a90d98;
L_10a90d35:;
  /* 10a90d35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a90d38 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a90d3b mov eax, dword ptr [edx + 0x10aaf52c] */
  EAX = (r32((uint32_t)(EDX + 0x10aaf52c)));
  /* 10a90d41 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a90d44 jmp 0x10a90d98 */
  goto L_10a90d98;
L_10a90d46:;
  /* 10a90d46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a90d49 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a90d4c add ecx, 0x10aaf530 */
  { uint32_t _a=(ECX),_b=(0x10aaf530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90d52 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a90d55 jmp 0x10a90d98 */
  goto L_10a90d98;
L_10a90d57:;
  /* 10a90d57 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a90d5a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a90d5d mov eax, dword ptr [edx + 0x10aaf534] */
  EAX = (r32((uint32_t)(EDX + 0x10aaf534)));
  /* 10a90d63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a90d66 jmp 0x10a90d98 */
  goto L_10a90d98;
L_10a90d68:;
  /* 10a90d68 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a90d6b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a90d6e add ecx, 0x10aaf538 */
  { uint32_t _a=(ECX),_b=(0x10aaf538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90d74 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a90d77 jmp 0x10a90d98 */
  goto L_10a90d98;
L_10a90d79:;
  /* 10a90d79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a90d7c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a90d7f add edx, 0x10aaf53c */
  { uint32_t _a=(EDX),_b=(0x10aaf53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90d85 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a90d88 jmp 0x10a90d98 */
  goto L_10a90d98;
L_10a90d8a:;
  /* 10a90d8a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a90d8d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a90d90 add eax, 0x10aaf544 */
  { uint32_t _a=(EAX),_b=(0x10aaf544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90d95 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a90d98:;
  /* 10a90d98 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90d9c je 0x10a90da4 */
  if (C.zf) goto L_10a90da4;
  /* 10a90d9e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90da2 jge 0x10a90da6 */
  if ((C.sf==C.of)) goto L_10a90da6;
L_10a90da4:;
  /* 10a90da4 jmp 0x10a90df8 */
  goto L_10a90df8;
L_10a90da6:;
  /* 10a90da6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a90da9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a90dac push ecx */
  push32((uint32_t)(ECX));
  /* 10a90dad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a90db0 push edx */
  push32((uint32_t)(EDX));
  /* 10a90db1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a90db4 push eax */
  push32((uint32_t)(EAX));
  /* 10a90db5 call 0x10a87bb0 */
  push32(0x10a90dbau); f_10a87bb0();
  /* 10a90dba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90dbd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a90dc0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90dc3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10a90dc7 mov eax, 1 */
  EAX = (0x1u);
  /* 10a90dcc jmp 0x10a90e0e */
  goto L_10a90e0e;
L_10a90dce:;
  /* 10a90dce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a90dd1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a90dd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90dd7 cmp eax, dword ptr [edx + 0x10aaf520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10aaf520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90ddd jae 0x10a90dea */
  if (!C.cf) goto L_10a90dea;
  /* 10a90ddf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a90de2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a90de5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a90de8 jmp 0x10a90df3 */
  goto L_10a90df3;
L_10a90dea:;
  /* 10a90dea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a90ded add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90df0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a90df3:;
  /* 10a90df3 jmp 0x10a90cab */
  goto L_10a90cab;
L_10a90df8:;
  /* 10a90df8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a90dfb push eax */
  push32((uint32_t)(EAX));
  /* 10a90dfc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a90dff push ecx */
  push32((uint32_t)(ECX));
  /* 10a90e00 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a90e03 push edx */
  push32((uint32_t)(EDX));
  /* 10a90e04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90e07 push eax */
  push32((uint32_t)(EAX));
  /* 10a90e08 call dword ptr [0x10ab32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32bc))), 0x10a90e0eu);
L_10a90e0e:;
  /* 10a90e0e mov esp, ebp */
  ESP = (EBP);
  /* 10a90e10 pop ebp */
  EBP = (pop32());
  /* 10a90e11 ret 0x10 */
  ESPCHK(0x10a90c90u, _esp0);
  ESP += 20; return;
}

/* FUN_10010e20 @ 0x10a90e20 (118 bytes, 42 insns) */
void f_10a90e20(void) {
  FTRACE(0x10a90e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a90e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10a90e21 mov ebp, esp */
  EBP = (ESP);
  /* 10a90e23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a90e26 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a90e2d:;
  /* 10a90e2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90e30 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a90e32 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10a90e35 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a90e39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90e3c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90e3f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a90e42 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a90e44 je 0x10a90e8f */
  if (C.zf) goto L_10a90e8f;
  /* 10a90e46 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a90e4a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90e4d jl 0x10a90e62 */
  if ((C.sf!=C.of)) goto L_10a90e62;
  /* 10a90e4f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a90e53 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90e56 jg 0x10a90e62 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a90e62;
  /* 10a90e58 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10a90e5b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a90e5d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10a90e60 jmp 0x10a90e7c */
  goto L_10a90e7c;
L_10a90e62:;
  /* 10a90e62 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a90e66 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90e69 jl 0x10a90e7c */
  if ((C.sf!=C.of)) goto L_10a90e7c;
  /* 10a90e6b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a90e6f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90e72 jg 0x10a90e7c */
  if ((!C.zf&&C.sf==C.of)) goto L_10a90e7c;
  /* 10a90e74 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10a90e77 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a90e79 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10a90e7c:;
  /* 10a90e7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a90e7f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10a90e82 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a90e86 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10a90e8a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a90e8d jmp 0x10a90e2d */
  goto L_10a90e2d;
L_10a90e8f:;
  /* 10a90e8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a90e92 mov esp, ebp */
  ESP = (EBP);
  /* 10a90e94 pop ebp */
  EBP = (pop32());
  /* 10a90e95 ret  */
  ESPCHK(0x10a90e20u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10a90ea0 (101 bytes, 36 insns) */
void f_10a90ea0(void) {
  FTRACE(0x10a90ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a90ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a90ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10a90ea3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a90ea6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a90ead mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90eb0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a90eb2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10a90eb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90eb8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90ebb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10a90ebe:;
  /* 10a90ebe movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10a90ec2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90ec5 jl 0x10a90ed0 */
  if ((C.sf!=C.of)) goto L_10a90ed0;
  /* 10a90ec7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10a90ecb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90ece jle 0x10a90ee2 */
  if ((C.zf||C.sf!=C.of)) goto L_10a90ee2;
L_10a90ed0:;
  /* 10a90ed0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10a90ed4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90ed7 jl 0x10a90efe */
  if ((C.sf!=C.of)) goto L_10a90efe;
  /* 10a90ed9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10a90edd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90ee0 jg 0x10a90efe */
  if ((!C.zf&&C.sf==C.of)) goto L_10a90efe;
L_10a90ee2:;
  /* 10a90ee2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a90ee5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90ee8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a90eeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90eee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a90ef0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10a90ef3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90ef6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90ef9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10a90efc jmp 0x10a90ebe */
  goto L_10a90ebe;
L_10a90efe:;
  /* 10a90efe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a90f01 mov esp, ebp */
  ESP = (EBP);
  /* 10a90f03 pop ebp */
  EBP = (pop32());
  /* 10a90f04 ret  */
  ESPCHK(0x10a90ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f10 @ 0x10a90f10 (122 bytes, 39 insns) */
void f_10a90f10(void) {
  FTRACE(0x10a90f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a90f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10a90f11 mov ebp, esp */
  EBP = (ESP);
  /* 10a90f13 push ecx */
  push32((uint32_t)(ECX));
  /* 10a90f14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90f17 cmp eax, dword ptr [0x10ab21bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ab21bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90f1d jae 0x10a90f41 */
  if (!C.cf) goto L_10a90f41;
  /* 10a90f1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90f22 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10a90f25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90f28 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10a90f2b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a90f2e mov eax, dword ptr [ecx*4 + 0x10ab2080] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10ab2080)));
  /* 10a90f35 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10a90f3a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a90f3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a90f3f jne 0x10a90f5c */
  if (!C.zf) goto L_10a90f5c;
L_10a90f41:;
  /* 10a90f41 call 0x10a8c260 */
  push32(0x10a90f46u); f_10a8c260();
  /* 10a90f46 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10a90f4c call 0x10a8c270 */
  push32(0x10a90f51u); f_10a8c270();
  /* 10a90f51 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a90f57 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a90f5a jmp 0x10a90f86 */
  goto L_10a90f86;
L_10a90f5c:;
  /* 10a90f5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90f5f push edx */
  push32((uint32_t)(EDX));
  /* 10a90f60 call 0x10a8da80 */
  push32(0x10a90f65u); f_10a8da80();
  /* 10a90f65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90f68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90f6b push eax */
  push32((uint32_t)(EAX));
  /* 10a90f6c call 0x10a90f90 */
  push32(0x10a90f71u); f_10a90f90();
  /* 10a90f71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90f74 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a90f77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90f7a push ecx */
  push32((uint32_t)(ECX));
  /* 10a90f7b call 0x10a8db10 */
  push32(0x10a90f80u); f_10a8db10();
  /* 10a90f80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90f83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a90f86:;
  /* 10a90f86 mov esp, ebp */
  ESP = (EBP);
  /* 10a90f88 pop ebp */
  EBP = (pop32());
  /* 10a90f89 ret  */
  ESPCHK(0x10a90f10u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10a90f90 (170 bytes, 59 insns) */
void f_10a90f90(void) {
  FTRACE(0x10a90f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a90f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10a90f91 mov ebp, esp */
  EBP = (ESP);
  /* 10a90f93 push ecx */
  push32((uint32_t)(ECX));
  /* 10a90f94 push esi */
  push32((uint32_t)(ESI));
  /* 10a90f95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90f98 push eax */
  push32((uint32_t)(EAX));
  /* 10a90f99 call 0x10a8d900 */
  push32(0x10a90f9eu); f_10a8d900();
  /* 10a90f9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90fa1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90fa4 je 0x10a90fe3 */
  if (C.zf) goto L_10a90fe3;
  /* 10a90fa6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90faa je 0x10a90fb2 */
  if (C.zf) goto L_10a90fb2;
  /* 10a90fac cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90fb0 jne 0x10a90fcc */
  if (!C.zf) goto L_10a90fcc;
L_10a90fb2:;
  /* 10a90fb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a90fb4 call 0x10a8d900 */
  push32(0x10a90fb9u); f_10a8d900();
  /* 10a90fb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90fbc mov esi, eax */
  ESI = (EAX);
  /* 10a90fbe push 2 */
  push32((uint32_t)(0x2u));
  /* 10a90fc0 call 0x10a8d900 */
  push32(0x10a90fc5u); f_10a8d900();
  /* 10a90fc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90fc8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a90fca je 0x10a90fe3 */
  if (C.zf) goto L_10a90fe3;
L_10a90fcc:;
  /* 10a90fcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90fcf push ecx */
  push32((uint32_t)(ECX));
  /* 10a90fd0 call 0x10a8d900 */
  push32(0x10a90fd5u); f_10a8d900();
  /* 10a90fd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a90fd8 push eax */
  push32((uint32_t)(EAX));
  /* 10a90fd9 call dword ptr [0x10ab32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab32b8))), 0x10a90fdfu);
  /* 10a90fdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a90fe1 je 0x10a90fec */
  if (C.zf) goto L_10a90fec;
L_10a90fe3:;
  /* 10a90fe3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a90fea jmp 0x10a90ff5 */
  goto L_10a90ff5;
L_10a90fec:;
  /* 10a90fec call dword ptr [0x10ab3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ab3370))), 0x10a90ff2u);
  /* 10a90ff2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a90ff5:;
  /* 10a90ff5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a90ff8 push edx */
  push32((uint32_t)(EDX));
  /* 10a90ff9 call 0x10a8d820 */
  push32(0x10a90ffeu); f_10a8d820();
  /* 10a90ffe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91001 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a91004 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10a91007 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a9100a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10a9100d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a91010 mov edx, dword ptr [eax*4 + 0x10ab2080] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ab2080)));
  /* 10a91017 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10a9101c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91020 je 0x10a91033 */
  if (C.zf) goto L_10a91033;
  /* 10a91022 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a91025 push eax */
  push32((uint32_t)(EAX));
  /* 10a91026 call 0x10a8c1c0 */
  push32(0x10a9102bu); f_10a8c1c0();
  /* 10a9102b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9102e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a91031 jmp 0x10a91035 */
  goto L_10a91035;
L_10a91033:;
  /* 10a91033 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a91035:;
  /* 10a91035 pop esi */
  ESI = (pop32());
  /* 10a91036 mov esp, ebp */
  ESP = (EBP);
  /* 10a91038 pop ebp */
  EBP = (pop32());
  /* 10a91039 ret  */
  ESPCHK(0x10a90f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011040 @ 0x10a91040 (146 bytes, 52 insns) */
void f_10a91040(void) {
  FTRACE(0x10a91040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a91040 push ebp */
  push32((uint32_t)(EBP));
  /* 10a91041 mov ebp, esp */
  EBP = (ESP);
  /* 10a91043 push ebx */
  push32((uint32_t)(EBX));
  /* 10a91044 push esi */
  push32((uint32_t)(ESI));
  /* 10a91045 push edi */
  push32((uint32_t)(EDI));
L_10a91046:;
  /* 10a91046 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a9104a jne 0x10a9106a */
  if (!C.zf) goto L_10a9106a;
  /* 10a9104c push 0x10aac3d8 */
  push32((uint32_t)(0x10aac3d8u));
  /* 10a91051 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a91053 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10a91055 push 0x10aacaa0 */
  push32((uint32_t)(0x10aacaa0u));
  /* 10a9105a push 2 */
  push32((uint32_t)(0x2u));
  /* 10a9105c call 0x10a83450 */
  push32(0x10a91061u); f_10a83450();
  /* 10a91061 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a91064 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a91067 jne 0x10a9106a */
  if (!C.zf) goto L_10a9106a;
  /* 10a91069 int3  */
  x86_unimpl("int3 @ 0x10a91069");
L_10a9106a:;
  /* 10a9106a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a9106c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a9106e jne 0x10a91046 */
  if (!C.zf) goto L_10a91046;
  /* 10a91070 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a91073 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a91076 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10a9107c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a9107e je 0x10a910cd */
  if (C.zf) goto L_10a910cd;
  /* 10a91080 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a91083 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10a91086 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10a91089 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a9108b je 0x10a910cd */
  if (C.zf) goto L_10a910cd;
  /* 10a9108d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a9108f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a91092 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a91095 push eax */
  push32((uint32_t)(EAX));
  /* 10a91096 call 0x10a84e20 */
  push32(0x10a9109bu); f_10a84e20();
  /* 10a9109b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a9109e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a910a1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a910a4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10a910aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a910ad mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10a910b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a910b3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10a910b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a910bc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10a910c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a910c6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10a910cd:;
  /* 10a910cd pop edi */
  EDI = (pop32());
  /* 10a910ce pop esi */
  ESI = (pop32());
  /* 10a910cf pop ebx */
  EBX = (pop32());
  /* 10a910d0 pop ebp */
  EBP = (pop32());
  /* 10a910d1 ret  */
  ESPCHK(0x10a91040u, _esp0);
  ESP += 4; return;
}

