#include "recomp.h"

/* FUN_10011370 @ 0x112d1370 (393 bytes, 123 insns) */
void f_112d1370(void) {
  FTRACE(0x112d1370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d1370 push ebp */
  push32((uint32_t)(EBP));
  /* 112d1371 mov ebp, esp */
  EBP = (ESP);
  /* 112d1373 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1376 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d137a jne 0x112d1386 */
  if (!C.zf) goto L_112d1386;
  /* 112d137c mov eax, dword ptr [0x112eec98] */
  EAX = (r32((uint32_t)(0x112eec98)));
  /* 112d1381 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112d1384 jmp 0x112d138c */
  goto L_112d138c;
L_112d1386:;
  /* 112d1386 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d1389 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_112d138c:;
  /* 112d138c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d138f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112d1392 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1395 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112d1398 push 0x112ef8c4 */
  push32((uint32_t)(0x112ef8c4u));
  /* 112d139d call dword ptr [0x112f2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2378))), 0x112d13a3u);
  /* 112d13a3 cmp dword ptr [0x112ef8b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef8b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d13aa je 0x112d13ca */
  if (C.zf) goto L_112d13ca;
  /* 112d13ac push 0x112ef8c4 */
  push32((uint32_t)(0x112ef8c4u));
  /* 112d13b1 call dword ptr [0x112f2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2368))), 0x112d13b7u);
  /* 112d13b7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112d13b9 call 0x112c7a30 */
  push32(0x112d13beu); f_112c7a30();
  /* 112d13be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d13c1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 112d13c8 jmp 0x112d13d1 */
  goto L_112d13d1;
L_112d13ca:;
  /* 112d13ca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_112d13d1:;
  /* 112d13d1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d13d5 jbe 0x112d14c2 */
  if ((C.cf||C.zf)) goto L_112d14c2;
  /* 112d13db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d13de mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112d13e0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 112d13e3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112d13e7 je 0x112d13f1 */
  if (C.zf) goto L_112d13f1;
  /* 112d13e9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112d13ed je 0x112d13f6 */
  if (C.zf) goto L_112d13f6;
  /* 112d13ef jmp 0x112d1450 */
  goto L_112d1450;
L_112d13f1:;
  /* 112d13f1 jmp 0x112d14c2 */
  goto L_112d14c2;
L_112d13f6:;
  /* 112d13f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d13f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d13fc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 112d13ff mov dword ptr [0x112ef8a0], 0 */
  w32((uint32_t)(0x112ef8a0), (0x0u));
  /* 112d1409 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d140c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112d140f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1412 jne 0x112d1427 */
  if (!C.zf) goto L_112d1427;
  /* 112d1414 mov dword ptr [0x112ef8a0], 1 */
  w32((uint32_t)(0x112ef8a0), (0x1u));
  /* 112d141e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1421 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1424 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_112d1427:;
  /* 112d1427 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d142a push ecx */
  push32((uint32_t)(ECX));
  /* 112d142b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 112d142e push edx */
  push32((uint32_t)(EDX));
  /* 112d142f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 112d1432 push eax */
  push32((uint32_t)(EAX));
  /* 112d1433 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1436 push ecx */
  push32((uint32_t)(ECX));
  /* 112d1437 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d143a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112d143c push eax */
  push32((uint32_t)(EAX));
  /* 112d143d call 0x112d1500 */
  push32(0x112d1442u); f_112d1500();
  /* 112d1442 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1445 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1448 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d144b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 112d144e jmp 0x112d14bd */
  goto L_112d14bd;
L_112d1450:;
  /* 112d1450 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1453 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d1455 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112d1457 mov ecx, dword ptr [0x112edc98] */
  ECX = (r32((uint32_t)(0x112edc98)));
  /* 112d145d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d145f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 112d1463 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 112d1469 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d146b je 0x112d1498 */
  if (C.zf) goto L_112d1498;
  /* 112d146d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1471 jbe 0x112d1498 */
  if ((C.cf||C.zf)) goto L_112d1498;
  /* 112d1473 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1476 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1479 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112d147b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112d147d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1480 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1483 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112d1486 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1489 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d148c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 112d148f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1492 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1495 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_112d1498:;
  /* 112d1498 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d149b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d149e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112d14a0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112d14a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d14a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d14a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112d14ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d14ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d14b1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 112d14b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d14b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d14ba mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_112d14bd:;
  /* 112d14bd jmp 0x112d13d1 */
  goto L_112d13d1;
L_112d14c2:;
  /* 112d14c2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d14c6 je 0x112d14d4 */
  if (C.zf) goto L_112d14d4;
  /* 112d14c8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112d14ca call 0x112c7ad0 */
  push32(0x112d14cfu); f_112c7ad0();
  /* 112d14cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d14d2 jmp 0x112d14df */
  goto L_112d14df;
L_112d14d4:;
  /* 112d14d4 push 0x112ef8c4 */
  push32((uint32_t)(0x112ef8c4u));
  /* 112d14d9 call dword ptr [0x112f2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2368))), 0x112d14dfu);
L_112d14df:;
  /* 112d14df cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d14e3 jbe 0x112d14f3 */
  if ((C.cf||C.zf)) goto L_112d14f3;
  /* 112d14e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d14e8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 112d14eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d14ee sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d14f1 jmp 0x112d14f5 */
  goto L_112d14f5;
L_112d14f3:;
  /* 112d14f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112d14f5:;
  /* 112d14f5 mov esp, ebp */
  ESP = (EBP);
  /* 112d14f7 pop ebp */
  EBP = (pop32());
  /* 112d14f8 ret  */
  ESPCHK(0x112d1370u, _esp0);
  ESP += 4; return;
}

/* FUN_10011500 @ 0x112d1500 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_112d1500(void) {
  FTRACE(0x112d1500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d1500 push ebp */
  push32((uint32_t)(EBP));
  /* 112d1501 mov ebp, esp */
  EBP = (ESP);
  /* 112d1503 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1506 push esi */
  push32((uint32_t)(ESI));
  /* 112d1507 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 112d150b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112d150e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1511 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1514 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112d1517 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d151b ja 0x112d1a68 */
  if ((!C.cf&&!C.zf)) goto L_112d1a68;
  /* 112d1521 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1524 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d1526 mov dl, byte ptr [eax + 0x112d1ac9] */
  DL = (r8((uint32_t)(EAX + 0x112d1ac9)));
  /* 112d152c jmp dword ptr [edx*4 + 0x112d1a6d] */
  switch (EDX) {
    case 0: goto L_112d1a46;
    case 1: goto L_112d1555;
    case 2: goto L_112d159b;
    case 3: goto L_112d16e8;
    case 4: goto L_112d1710;
    case 5: goto L_112d17af;
    case 6: goto L_112d181b;
    case 7: goto L_112d1844;
    case 8: goto L_112d1885;
    case 9: goto L_112d1967;
    case 10: goto L_112d19ce;
    case 11: goto L_112d1a1b;
    case 12: goto L_112d1533;
    case 13: goto L_112d1578;
    case 14: goto L_112d15be;
    case 15: goto L_112d16be;
    case 16: goto L_112d1755;
    case 17: goto L_112d1782;
    case 18: goto L_112d17d7;
    case 19: goto L_112d185b;
    case 20: goto L_112d1909;
    case 21: goto L_112d1998;
    case 22: goto L_112d1a68;
    default: x86_unimpl("switch@0x112d152c out of table"); return;
  }
L_112d1533:;
  /* 112d1533 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1536 push ecx */
  push32((uint32_t)(ECX));
  /* 112d1537 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d153a push edx */
  push32((uint32_t)(EDX));
  /* 112d153b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d153e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 112d1541 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d1544 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 112d1547 push eax */
  push32((uint32_t)(EAX));
  /* 112d1548 call 0x112d1b20 */
  push32(0x112d154du); f_112d1b20();
  /* 112d154d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1550 jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d1555:;
  /* 112d1555 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1558 push ecx */
  push32((uint32_t)(ECX));
  /* 112d1559 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d155c push edx */
  push32((uint32_t)(EDX));
  /* 112d155d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1560 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 112d1563 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d1566 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 112d156a push eax */
  push32((uint32_t)(EAX));
  /* 112d156b call 0x112d1b20 */
  push32(0x112d1570u); f_112d1b20();
  /* 112d1570 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1573 jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d1578:;
  /* 112d1578 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d157b push ecx */
  push32((uint32_t)(ECX));
  /* 112d157c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d157f push edx */
  push32((uint32_t)(EDX));
  /* 112d1580 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1583 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112d1586 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d1589 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 112d158d push eax */
  push32((uint32_t)(EAX));
  /* 112d158e call 0x112d1b20 */
  push32(0x112d1593u); f_112d1b20();
  /* 112d1593 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1596 jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d159b:;
  /* 112d159b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d159e push ecx */
  push32((uint32_t)(ECX));
  /* 112d159f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d15a2 push edx */
  push32((uint32_t)(EDX));
  /* 112d15a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d15a6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112d15a9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d15ac mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 112d15b0 push eax */
  push32((uint32_t)(EAX));
  /* 112d15b1 call 0x112d1b20 */
  push32(0x112d15b6u); f_112d1b20();
  /* 112d15b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d15b9 jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d15be:;
  /* 112d15be cmp dword ptr [0x112ef8a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef8a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d15c5 je 0x112d1646 */
  if (C.zf) goto L_112d1646;
  /* 112d15c7 mov dword ptr [0x112ef8a0], 0 */
  w32((uint32_t)(0x112ef8a0), (0x0u));
  /* 112d15d1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d15d4 push ecx */
  push32((uint32_t)(ECX));
  /* 112d15d5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d15d8 push edx */
  push32((uint32_t)(EDX));
  /* 112d15d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d15dc push eax */
  push32((uint32_t)(EAX));
  /* 112d15dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d15e0 push ecx */
  push32((uint32_t)(ECX));
  /* 112d15e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d15e4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 112d15ea push eax */
  push32((uint32_t)(EAX));
  /* 112d15eb call 0x112d1cd0 */
  push32(0x112d15f0u); f_112d1cd0();
  /* 112d15f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d15f3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d15f6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d15f9 jne 0x112d1600 */
  if (!C.zf) goto L_112d1600;
  /* 112d15fb jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d1600:;
  /* 112d1600 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1603 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112d1605 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 112d1608 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d160b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d160d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1610 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1613 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112d1615 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1618 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d161a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d161d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1620 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112d1622 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d1625 push ecx */
  push32((uint32_t)(ECX));
  /* 112d1626 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1629 push edx */
  push32((uint32_t)(EDX));
  /* 112d162a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d162d push eax */
  push32((uint32_t)(EAX));
  /* 112d162e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1631 push ecx */
  push32((uint32_t)(ECX));
  /* 112d1632 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d1635 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 112d163b push eax */
  push32((uint32_t)(EAX));
  /* 112d163c call 0x112d1cd0 */
  push32(0x112d1641u); f_112d1cd0();
  /* 112d1641 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1644 jmp 0x112d16b9 */
  goto L_112d16b9;
L_112d1646:;
  /* 112d1646 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d1649 push ecx */
  push32((uint32_t)(ECX));
  /* 112d164a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d164d push edx */
  push32((uint32_t)(EDX));
  /* 112d164e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1651 push eax */
  push32((uint32_t)(EAX));
  /* 112d1652 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1655 push ecx */
  push32((uint32_t)(ECX));
  /* 112d1656 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d1659 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 112d165f push eax */
  push32((uint32_t)(EAX));
  /* 112d1660 call 0x112d1cd0 */
  push32(0x112d1665u); f_112d1cd0();
  /* 112d1665 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1668 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d166b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d166e jne 0x112d1675 */
  if (!C.zf) goto L_112d1675;
  /* 112d1670 jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d1675:;
  /* 112d1675 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1678 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112d167a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 112d167d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1680 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d1682 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1685 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1688 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112d168a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d168d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d168f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1692 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1695 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112d1697 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d169a push ecx */
  push32((uint32_t)(ECX));
  /* 112d169b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d169e push edx */
  push32((uint32_t)(EDX));
  /* 112d169f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d16a2 push eax */
  push32((uint32_t)(EAX));
  /* 112d16a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d16a6 push ecx */
  push32((uint32_t)(ECX));
  /* 112d16a7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d16aa mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 112d16b0 push eax */
  push32((uint32_t)(EAX));
  /* 112d16b1 call 0x112d1cd0 */
  push32(0x112d16b6u); f_112d1cd0();
  /* 112d16b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112d16b9:;
  /* 112d16b9 jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d16be:;
  /* 112d16be mov ecx, dword ptr [0x112ef8a0] */
  ECX = (r32((uint32_t)(0x112ef8a0)));
  /* 112d16c4 mov dword ptr [0x112ef8b0], ecx */
  w32((uint32_t)(0x112ef8b0), (ECX));
  /* 112d16ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d16cd push edx */
  push32((uint32_t)(EDX));
  /* 112d16ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d16d1 push eax */
  push32((uint32_t)(EAX));
  /* 112d16d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 112d16d4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d16d7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112d16da push edx */
  push32((uint32_t)(EDX));
  /* 112d16db call 0x112d1b70 */
  push32(0x112d16e0u); f_112d1b70();
  /* 112d16e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d16e3 jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d16e8:;
  /* 112d16e8 mov eax, dword ptr [0x112ef8a0] */
  EAX = (r32((uint32_t)(0x112ef8a0)));
  /* 112d16ed mov dword ptr [0x112ef8b0], eax */
  w32((uint32_t)(0x112ef8b0), (EAX));
  /* 112d16f2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d16f5 push ecx */
  push32((uint32_t)(ECX));
  /* 112d16f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d16f9 push edx */
  push32((uint32_t)(EDX));
  /* 112d16fa push 2 */
  push32((uint32_t)(0x2u));
  /* 112d16fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d16ff mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 112d1702 push ecx */
  push32((uint32_t)(ECX));
  /* 112d1703 call 0x112d1b70 */
  push32(0x112d1708u); f_112d1b70();
  /* 112d1708 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d170b jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d1710:;
  /* 112d1710 mov edx, dword ptr [0x112ef8a0] */
  EDX = (r32((uint32_t)(0x112ef8a0)));
  /* 112d1716 mov dword ptr [0x112ef8b0], edx */
  w32((uint32_t)(0x112ef8b0), (EDX));
  /* 112d171c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d171f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 112d1722 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112d1723 mov ecx, 0xc */
  ECX = (0xcu);
  /* 112d1728 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112d172a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112d172d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1731 jne 0x112d173a */
  if (!C.zf) goto L_112d173a;
  /* 112d1733 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_112d173a:;
  /* 112d173a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d173d push edx */
  push32((uint32_t)(EDX));
  /* 112d173e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1741 push eax */
  push32((uint32_t)(EAX));
  /* 112d1742 push 2 */
  push32((uint32_t)(0x2u));
  /* 112d1744 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d1747 push ecx */
  push32((uint32_t)(ECX));
  /* 112d1748 call 0x112d1b70 */
  push32(0x112d174du); f_112d1b70();
  /* 112d174d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1750 jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d1755:;
  /* 112d1755 mov edx, dword ptr [0x112ef8a0] */
  EDX = (r32((uint32_t)(0x112ef8a0)));
  /* 112d175b mov dword ptr [0x112ef8b0], edx */
  w32((uint32_t)(0x112ef8b0), (EDX));
  /* 112d1761 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1764 push eax */
  push32((uint32_t)(EAX));
  /* 112d1765 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1768 push ecx */
  push32((uint32_t)(ECX));
  /* 112d1769 push 3 */
  push32((uint32_t)(0x3u));
  /* 112d176b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d176e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 112d1771 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1774 push eax */
  push32((uint32_t)(EAX));
  /* 112d1775 call 0x112d1b70 */
  push32(0x112d177au); f_112d1b70();
  /* 112d177a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d177d jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d1782:;
  /* 112d1782 mov ecx, dword ptr [0x112ef8a0] */
  ECX = (r32((uint32_t)(0x112ef8a0)));
  /* 112d1788 mov dword ptr [0x112ef8b0], ecx */
  w32((uint32_t)(0x112ef8b0), (ECX));
  /* 112d178e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1791 push edx */
  push32((uint32_t)(EDX));
  /* 112d1792 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1795 push eax */
  push32((uint32_t)(EAX));
  /* 112d1796 push 2 */
  push32((uint32_t)(0x2u));
  /* 112d1798 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d179b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 112d179e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d17a1 push edx */
  push32((uint32_t)(EDX));
  /* 112d17a2 call 0x112d1b70 */
  push32(0x112d17a7u); f_112d1b70();
  /* 112d17a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d17aa jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d17af:;
  /* 112d17af mov eax, dword ptr [0x112ef8a0] */
  EAX = (r32((uint32_t)(0x112ef8a0)));
  /* 112d17b4 mov dword ptr [0x112ef8b0], eax */
  w32((uint32_t)(0x112ef8b0), (EAX));
  /* 112d17b9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d17bc push ecx */
  push32((uint32_t)(ECX));
  /* 112d17bd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d17c0 push edx */
  push32((uint32_t)(EDX));
  /* 112d17c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 112d17c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d17c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112d17c9 push ecx */
  push32((uint32_t)(ECX));
  /* 112d17ca call 0x112d1b70 */
  push32(0x112d17cfu); f_112d1b70();
  /* 112d17cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d17d2 jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d17d7:;
  /* 112d17d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d17da cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d17de jg 0x112d17fc */
  if ((!C.zf&&C.sf==C.of)) goto L_112d17fc;
  /* 112d17e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d17e3 push eax */
  push32((uint32_t)(EAX));
  /* 112d17e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d17e7 push ecx */
  push32((uint32_t)(ECX));
  /* 112d17e8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d17eb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 112d17f1 push eax */
  push32((uint32_t)(EAX));
  /* 112d17f2 call 0x112d1b20 */
  push32(0x112d17f7u); f_112d1b20();
  /* 112d17f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d17fa jmp 0x112d1816 */
  goto L_112d1816;
L_112d17fc:;
  /* 112d17fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d17ff push ecx */
  push32((uint32_t)(ECX));
  /* 112d1800 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1803 push edx */
  push32((uint32_t)(EDX));
  /* 112d1804 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d1807 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 112d180d push ecx */
  push32((uint32_t)(ECX));
  /* 112d180e call 0x112d1b20 */
  push32(0x112d1813u); f_112d1b20();
  /* 112d1813 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112d1816:;
  /* 112d1816 jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d181b:;
  /* 112d181b mov edx, dword ptr [0x112ef8a0] */
  EDX = (r32((uint32_t)(0x112ef8a0)));
  /* 112d1821 mov dword ptr [0x112ef8b0], edx */
  w32((uint32_t)(0x112ef8b0), (EDX));
  /* 112d1827 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d182a push eax */
  push32((uint32_t)(EAX));
  /* 112d182b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d182e push ecx */
  push32((uint32_t)(ECX));
  /* 112d182f push 2 */
  push32((uint32_t)(0x2u));
  /* 112d1831 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1834 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112d1836 push eax */
  push32((uint32_t)(EAX));
  /* 112d1837 call 0x112d1b70 */
  push32(0x112d183cu); f_112d1b70();
  /* 112d183c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d183f jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d1844:;
  /* 112d1844 mov ecx, dword ptr [0x112ef8a0] */
  ECX = (r32((uint32_t)(0x112ef8a0)));
  /* 112d184a mov dword ptr [0x112ef8b0], ecx */
  w32((uint32_t)(0x112ef8b0), (ECX));
  /* 112d1850 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1853 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 112d1856 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112d1859 jmp 0x112d18ad */
  goto L_112d18ad;
L_112d185b:;
  /* 112d185b mov ecx, dword ptr [0x112ef8a0] */
  ECX = (r32((uint32_t)(0x112ef8a0)));
  /* 112d1861 mov dword ptr [0x112ef8b0], ecx */
  w32((uint32_t)(0x112ef8b0), (ECX));
  /* 112d1867 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d186a push edx */
  push32((uint32_t)(EDX));
  /* 112d186b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d186e push eax */
  push32((uint32_t)(EAX));
  /* 112d186f push 1 */
  push32((uint32_t)(0x1u));
  /* 112d1871 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1874 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 112d1877 push edx */
  push32((uint32_t)(EDX));
  /* 112d1878 call 0x112d1b70 */
  push32(0x112d187du); f_112d1b70();
  /* 112d187d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1880 jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d1885:;
  /* 112d1885 mov eax, dword ptr [0x112ef8a0] */
  EAX = (r32((uint32_t)(0x112ef8a0)));
  /* 112d188a mov dword ptr [0x112ef8b0], eax */
  w32((uint32_t)(0x112ef8b0), (EAX));
  /* 112d188f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1892 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1896 jne 0x112d18a1 */
  if (!C.zf) goto L_112d18a1;
  /* 112d1898 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 112d189f jmp 0x112d18ad */
  goto L_112d18ad;
L_112d18a1:;
  /* 112d18a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d18a4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 112d18a7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d18aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112d18ad:;
  /* 112d18ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d18b0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 112d18b3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d18b6 jge 0x112d18c1 */
  if ((C.sf==C.of)) goto L_112d18c1;
  /* 112d18b8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112d18bf jmp 0x112d18ee */
  goto L_112d18ee;
L_112d18c1:;
  /* 112d18c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d18c4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 112d18c7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112d18c8 mov ecx, 7 */
  ECX = (0x7u);
  /* 112d18cd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112d18cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112d18d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d18d5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 112d18d8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112d18d9 mov ecx, 7 */
  ECX = (0x7u);
  /* 112d18de idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112d18e0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d18e3 jl 0x112d18ee */
  if ((C.sf!=C.of)) goto L_112d18ee;
  /* 112d18e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d18e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d18eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112d18ee:;
  /* 112d18ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d18f1 push eax */
  push32((uint32_t)(EAX));
  /* 112d18f2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d18f5 push ecx */
  push32((uint32_t)(ECX));
  /* 112d18f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 112d18f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d18fb push edx */
  push32((uint32_t)(EDX));
  /* 112d18fc call 0x112d1b70 */
  push32(0x112d1901u); f_112d1b70();
  /* 112d1901 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1904 jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d1909:;
  /* 112d1909 cmp dword ptr [0x112ef8a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef8a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1910 je 0x112d1940 */
  if (C.zf) goto L_112d1940;
  /* 112d1912 mov dword ptr [0x112ef8a0], 0 */
  w32((uint32_t)(0x112ef8a0), (0x0u));
  /* 112d191c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d191f push eax */
  push32((uint32_t)(EAX));
  /* 112d1920 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1923 push ecx */
  push32((uint32_t)(ECX));
  /* 112d1924 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1927 push edx */
  push32((uint32_t)(EDX));
  /* 112d1928 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d192b push eax */
  push32((uint32_t)(EAX));
  /* 112d192c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d192f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 112d1935 push edx */
  push32((uint32_t)(EDX));
  /* 112d1936 call 0x112d1cd0 */
  push32(0x112d193bu); f_112d1cd0();
  /* 112d193b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d193e jmp 0x112d1962 */
  goto L_112d1962;
L_112d1940:;
  /* 112d1940 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d1943 push eax */
  push32((uint32_t)(EAX));
  /* 112d1944 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1947 push ecx */
  push32((uint32_t)(ECX));
  /* 112d1948 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d194b push edx */
  push32((uint32_t)(EDX));
  /* 112d194c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d194f push eax */
  push32((uint32_t)(EAX));
  /* 112d1950 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d1953 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 112d1959 push edx */
  push32((uint32_t)(EDX));
  /* 112d195a call 0x112d1cd0 */
  push32(0x112d195fu); f_112d1cd0();
  /* 112d195f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112d1962:;
  /* 112d1962 jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d1967:;
  /* 112d1967 mov dword ptr [0x112ef8a0], 0 */
  w32((uint32_t)(0x112ef8a0), (0x0u));
  /* 112d1971 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d1974 push eax */
  push32((uint32_t)(EAX));
  /* 112d1975 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1978 push ecx */
  push32((uint32_t)(ECX));
  /* 112d1979 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d197c push edx */
  push32((uint32_t)(EDX));
  /* 112d197d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1980 push eax */
  push32((uint32_t)(EAX));
  /* 112d1981 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d1984 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 112d198a push edx */
  push32((uint32_t)(EDX));
  /* 112d198b call 0x112d1cd0 */
  push32(0x112d1990u); f_112d1cd0();
  /* 112d1990 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1993 jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d1998:;
  /* 112d1998 mov eax, dword ptr [0x112ef8a0] */
  EAX = (r32((uint32_t)(0x112ef8a0)));
  /* 112d199d mov dword ptr [0x112ef8b0], eax */
  w32((uint32_t)(0x112ef8b0), (EAX));
  /* 112d19a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d19a5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 112d19a8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112d19a9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 112d19ae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112d19b0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112d19b3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d19b6 push edx */
  push32((uint32_t)(EDX));
  /* 112d19b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d19ba push eax */
  push32((uint32_t)(EAX));
  /* 112d19bb push 2 */
  push32((uint32_t)(0x2u));
  /* 112d19bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d19c0 push ecx */
  push32((uint32_t)(ECX));
  /* 112d19c1 call 0x112d1b70 */
  push32(0x112d19c6u); f_112d1b70();
  /* 112d19c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d19c9 jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d19ce:;
  /* 112d19ce mov edx, dword ptr [0x112ef8a0] */
  EDX = (r32((uint32_t)(0x112ef8a0)));
  /* 112d19d4 mov dword ptr [0x112ef8b0], edx */
  w32((uint32_t)(0x112ef8b0), (EDX));
  /* 112d19da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d19dd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 112d19e0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112d19e1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 112d19e6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112d19e8 mov ecx, eax */
  ECX = (EAX);
  /* 112d19ea add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d19ed imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d19f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d19f3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112d19f6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112d19f7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 112d19fc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112d19fe add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1a00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112d1a03 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1a06 push eax */
  push32((uint32_t)(EAX));
  /* 112d1a07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1a0a push ecx */
  push32((uint32_t)(ECX));
  /* 112d1a0b push 4 */
  push32((uint32_t)(0x4u));
  /* 112d1a0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d1a10 push edx */
  push32((uint32_t)(EDX));
  /* 112d1a11 call 0x112d1b70 */
  push32(0x112d1a16u); f_112d1b70();
  /* 112d1a16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1a19 jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d1a1b:;
  /* 112d1a1b call 0x112d2b30 */
  push32(0x112d1a20u); f_112d2b30();
  /* 112d1a20 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1a23 push eax */
  push32((uint32_t)(EAX));
  /* 112d1a24 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1a27 push ecx */
  push32((uint32_t)(ECX));
  /* 112d1a28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1a2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d1a2d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1a31 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 112d1a34 mov ecx, dword ptr [eax*4 + 0x112eee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x112eee1c)));
  /* 112d1a3b push ecx */
  push32((uint32_t)(ECX));
  /* 112d1a3c call 0x112d1b20 */
  push32(0x112d1a41u); f_112d1b20();
  /* 112d1a41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1a44 jmp 0x112d1a68 */
  goto L_112d1a68;
L_112d1a46:;
  /* 112d1a46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1a49 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112d1a4b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 112d1a4e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1a51 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d1a53 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1a56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1a59 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112d1a5b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1a5e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d1a60 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1a63 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1a66 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_112d1a68:;
  /* 112d1a68 pop esi */
  ESI = (pop32());
  /* 112d1a69 mov esp, ebp */
  ESP = (EBP);
  /* 112d1a6b pop ebp */
  EBP = (pop32());
  /* 112d1a6c ret  */
  ESPCHK(0x112d1500u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x112d1b20 (72 bytes, 30 insns) */
void f_112d1b20(void) {
  FTRACE(0x112d1b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d1b20 push ebp */
  push32((uint32_t)(EBP));
  /* 112d1b21 mov ebp, esp */
  EBP = (ESP);
L_112d1b23:;
  /* 112d1b23 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1b26 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1b29 je 0x112d1b66 */
  if (C.zf) goto L_112d1b66;
  /* 112d1b2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1b2e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112d1b31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d1b33 je 0x112d1b66 */
  if (C.zf) goto L_112d1b66;
  /* 112d1b35 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1b38 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112d1b3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1b3d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112d1b3f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 112d1b41 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1b44 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d1b46 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1b49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1b4c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112d1b4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1b51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1b54 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 112d1b57 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1b5a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112d1b5c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1b5f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1b62 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112d1b64 jmp 0x112d1b23 */
  goto L_112d1b23;
L_112d1b66:;
  /* 112d1b66 pop ebp */
  EBP = (pop32());
  /* 112d1b67 ret  */
  ESPCHK(0x112d1b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b70 @ 0x112d1b70 (173 bytes, 64 insns) */
void f_112d1b70(void) {
  FTRACE(0x112d1b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d1b70 push ebp */
  push32((uint32_t)(EBP));
  /* 112d1b71 mov ebp, esp */
  EBP = (ESP);
  /* 112d1b73 push ecx */
  push32((uint32_t)(ECX));
  /* 112d1b74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112d1b7b cmp dword ptr [0x112ef8b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef8b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1b82 je 0x112d1b9a */
  if (C.zf) goto L_112d1b9a;
  /* 112d1b84 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1b87 push eax */
  push32((uint32_t)(EAX));
  /* 112d1b88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1b8b push ecx */
  push32((uint32_t)(ECX));
  /* 112d1b8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1b8f push edx */
  push32((uint32_t)(EDX));
  /* 112d1b90 call 0x112d1c20 */
  push32(0x112d1b95u); f_112d1c20();
  /* 112d1b95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1b98 jmp 0x112d1c19 */
  goto L_112d1c19;
L_112d1b9a:;
  /* 112d1b9a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1b9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1ba0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1ba2 jae 0x112d1c10 */
  if (!C.cf) goto L_112d1c10;
  /* 112d1ba4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1ba7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1baa mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 112d1bad jmp 0x112d1bb8 */
  goto L_112d1bb8;
L_112d1baf:;
  /* 112d1baf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1bb2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1bb5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_112d1bb8:;
  /* 112d1bb8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1bbb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1bbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112d1bc0 je 0x112d1bf4 */
  if (C.zf) goto L_112d1bf4;
  /* 112d1bc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1bc5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112d1bc6 mov ecx, 0xa */
  ECX = (0xau);
  /* 112d1bcb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112d1bcd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1bd0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1bd3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112d1bd5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1bd8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 112d1bdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1bde cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112d1bdf mov ecx, 0xa */
  ECX = (0xau);
  /* 112d1be4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112d1be6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112d1be9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d1bec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1bef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112d1bf2 jmp 0x112d1baf */
  goto L_112d1baf;
L_112d1bf4:;
  /* 112d1bf4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1bf7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112d1bf9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1bfc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1bff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112d1c01 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1c04 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112d1c06 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1c09 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1c0c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112d1c0e jmp 0x112d1c19 */
  goto L_112d1c19;
L_112d1c10:;
  /* 112d1c10 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1c13 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_112d1c19:;
  /* 112d1c19 mov esp, ebp */
  ESP = (EBP);
  /* 112d1c1b pop ebp */
  EBP = (pop32());
  /* 112d1c1c ret  */
  ESPCHK(0x112d1b70u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x112d1c20 (172 bytes, 65 insns) */
void f_112d1c20(void) {
  FTRACE(0x112d1c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d1c20 push ebp */
  push32((uint32_t)(EBP));
  /* 112d1c21 mov ebp, esp */
  EBP = (ESP);
  /* 112d1c23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1c26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1c29 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112d1c2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112d1c2e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1c31 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1c34 jbe 0x112d1c7b */
  if ((C.cf||C.zf)) goto L_112d1c7b;
L_112d1c36:;
  /* 112d1c36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1c39 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112d1c3a mov ecx, 0xa */
  ECX = (0xau);
  /* 112d1c3f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112d1c41 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1c44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d1c47 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112d1c49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d1c4c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1c4f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112d1c52 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1c55 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112d1c57 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1c5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1c5d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112d1c5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1c62 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112d1c63 mov ecx, 0xa */
  ECX = (0xau);
  /* 112d1c68 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112d1c6a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112d1c6d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1c71 jle 0x112d1c7b */
  if ((C.zf||C.sf!=C.of)) goto L_112d1c7b;
  /* 112d1c73 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1c76 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1c79 ja 0x112d1c36 */
  if ((!C.cf&&!C.zf)) goto L_112d1c36;
L_112d1c7b:;
  /* 112d1c7b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1c7e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112d1c80 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112d1c83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1c86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d1c89 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 112d1c8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d1c8e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1c91 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112d1c94:;
  /* 112d1c94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d1c97 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112d1c99 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 112d1c9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d1c9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d1ca2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112d1ca4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 112d1ca6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d1ca9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1cac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112d1caf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d1cb2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 112d1cb5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 112d1cb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d1cba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1cbd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112d1cc0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d1cc3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1cc6 jb 0x112d1c94 */
  if (C.cf) goto L_112d1c94;
  /* 112d1cc8 mov esp, ebp */
  ESP = (EBP);
  /* 112d1cca pop ebp */
  EBP = (pop32());
  /* 112d1ccb ret  */
  ESPCHK(0x112d1c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cd0 @ 0x112d1cd0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_112d1cd0(void) {
  FTRACE(0x112d1cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d1cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 112d1cd1 mov ebp, esp */
  EBP = (ESP);
  /* 112d1cd3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_112d1cd6:;
  /* 112d1cd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1cd9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112d1cdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112d1cde je 0x112d214c */
  if (C.zf) goto L_112d214c;
  /* 112d1ce4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1ce7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1cea je 0x112d214c */
  if (C.zf) goto L_112d214c;
  /* 112d1cf0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 112d1cf4 mov dword ptr [0x112ef8b0], 0 */
  w32((uint32_t)(0x112ef8b0), (0x0u));
  /* 112d1cfe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 112d1d05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1d08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112d1d0b jmp 0x112d1d16 */
  goto L_112d1d16;
L_112d1d0d:;
  /* 112d1d0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1d10 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1d13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_112d1d16:;
  /* 112d1d16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d1d19 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112d1d1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1d1f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112d1d22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d1d25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1d28 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112d1d2b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1d2d jne 0x112d1d31 */
  if (!C.zf) goto L_112d1d31;
  /* 112d1d2f jmp 0x112d1d0d */
  goto L_112d1d0d;
L_112d1d31:;
  /* 112d1d31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d1d34 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1d37 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112d1d3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1d3d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112d1d40 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 112d1d43 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d1d46 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1d49 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112d1d4c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1d50 ja 0x112d20a0 */
  if ((!C.cf&&!C.zf)) goto L_112d20a0;
  /* 112d1d56 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d1d59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d1d5b mov al, byte ptr [ecx + 0x112d217c] */
  AL = (r8((uint32_t)(ECX + 0x112d217c)));
  /* 112d1d61 jmp dword ptr [eax*4 + 0x112d2150] */
  switch (EAX) {
    case 0: goto L_112d1fbf;
    case 1: goto L_112d1ea3;
    case 2: goto L_112d1e2e;
    case 3: goto L_112d1d68;
    case 4: goto L_112d1da6;
    case 5: goto L_112d1e07;
    case 6: goto L_112d1e55;
    case 7: goto L_112d1e7c;
    case 8: goto L_112d1eea;
    case 9: goto L_112d1de4;
    case 10: goto L_112d20a0;
    default: x86_unimpl("switch@0x112d1d61 out of table"); return;
  }
L_112d1d68:;
  /* 112d1d68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1d6b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 112d1d6e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112d1d71 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1d74 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112d1d77 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1d7b ja 0x112d1da1 */
  if ((!C.cf&&!C.zf)) goto L_112d1da1;
  /* 112d1d7d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112d1d80 jmp dword ptr [ecx*4 + 0x112d21cf] */
  switch (ECX) {
    case 0: goto L_112d1d87;
    case 1: goto L_112d1d91;
    case 2: goto L_112d1d97;
    case 3: goto L_112d1d9d;
    case 4: goto L_112d1dc5;
    case 5: goto L_112d1dcf;
    case 6: goto L_112d1dd5;
    case 7: goto L_112d1ddb;
    default: x86_unimpl("switch@0x112d1d80 out of table"); return;
  }
L_112d1d87:;
  /* 112d1d87 mov dword ptr [0x112ef8b0], 1 */
  w32((uint32_t)(0x112ef8b0), (0x1u));
L_112d1d91:;
  /* 112d1d91 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 112d1d95 jmp 0x112d1da1 */
  goto L_112d1da1;
L_112d1d97:;
  /* 112d1d97 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 112d1d9b jmp 0x112d1da1 */
  goto L_112d1da1;
L_112d1d9d:;
  /* 112d1d9d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_112d1da1:;
  /* 112d1da1 jmp 0x112d20a0 */
  goto L_112d20a0;
L_112d1da6:;
  /* 112d1da6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1da9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 112d1dac mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112d1daf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1db2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 112d1db5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1db9 ja 0x112d1ddf */
  if ((!C.cf&&!C.zf)) goto L_112d1ddf;
  /* 112d1dbb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112d1dbe jmp dword ptr [ecx*4 + 0x112d21df] */
  switch (ECX) {
    case 0: goto L_112d1dc5;
    case 1: goto L_112d1dcf;
    case 2: goto L_112d1dd5;
    case 3: goto L_112d1ddb;
    default: x86_unimpl("switch@0x112d1dbe out of table"); return;
  }
L_112d1dc5:;
  /* 112d1dc5 mov dword ptr [0x112ef8b0], 1 */
  w32((uint32_t)(0x112ef8b0), (0x1u));
L_112d1dcf:;
  /* 112d1dcf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 112d1dd3 jmp 0x112d1ddf */
  goto L_112d1ddf;
L_112d1dd5:;
  /* 112d1dd5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 112d1dd9 jmp 0x112d1ddf */
  goto L_112d1ddf;
L_112d1ddb:;
  /* 112d1ddb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_112d1ddf:;
  /* 112d1ddf jmp 0x112d20a0 */
  goto L_112d20a0;
L_112d1de4:;
  /* 112d1de4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1de7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 112d1dea cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1dee je 0x112d1df8 */
  if (C.zf) goto L_112d1df8;
  /* 112d1df0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1df4 je 0x112d1dfe */
  if (C.zf) goto L_112d1dfe;
  /* 112d1df6 jmp 0x112d1e02 */
  goto L_112d1e02;
L_112d1df8:;
  /* 112d1df8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 112d1dfc jmp 0x112d1e02 */
  goto L_112d1e02;
L_112d1dfe:;
  /* 112d1dfe mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_112d1e02:;
  /* 112d1e02 jmp 0x112d20a0 */
  goto L_112d20a0;
L_112d1e07:;
  /* 112d1e07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1e0a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 112d1e0d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1e11 je 0x112d1e1b */
  if (C.zf) goto L_112d1e1b;
  /* 112d1e13 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1e17 je 0x112d1e25 */
  if (C.zf) goto L_112d1e25;
  /* 112d1e19 jmp 0x112d1e29 */
  goto L_112d1e29;
L_112d1e1b:;
  /* 112d1e1b mov dword ptr [0x112ef8b0], 1 */
  w32((uint32_t)(0x112ef8b0), (0x1u));
L_112d1e25:;
  /* 112d1e25 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_112d1e29:;
  /* 112d1e29 jmp 0x112d20a0 */
  goto L_112d20a0;
L_112d1e2e:;
  /* 112d1e2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1e31 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 112d1e34 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1e38 je 0x112d1e42 */
  if (C.zf) goto L_112d1e42;
  /* 112d1e3a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1e3e je 0x112d1e4c */
  if (C.zf) goto L_112d1e4c;
  /* 112d1e40 jmp 0x112d1e50 */
  goto L_112d1e50;
L_112d1e42:;
  /* 112d1e42 mov dword ptr [0x112ef8b0], 1 */
  w32((uint32_t)(0x112ef8b0), (0x1u));
L_112d1e4c:;
  /* 112d1e4c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_112d1e50:;
  /* 112d1e50 jmp 0x112d20a0 */
  goto L_112d20a0;
L_112d1e55:;
  /* 112d1e55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1e58 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 112d1e5b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1e5f je 0x112d1e69 */
  if (C.zf) goto L_112d1e69;
  /* 112d1e61 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1e65 je 0x112d1e73 */
  if (C.zf) goto L_112d1e73;
  /* 112d1e67 jmp 0x112d1e77 */
  goto L_112d1e77;
L_112d1e69:;
  /* 112d1e69 mov dword ptr [0x112ef8b0], 1 */
  w32((uint32_t)(0x112ef8b0), (0x1u));
L_112d1e73:;
  /* 112d1e73 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_112d1e77:;
  /* 112d1e77 jmp 0x112d20a0 */
  goto L_112d20a0;
L_112d1e7c:;
  /* 112d1e7c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1e7f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 112d1e82 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1e86 je 0x112d1e90 */
  if (C.zf) goto L_112d1e90;
  /* 112d1e88 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1e8c je 0x112d1e9a */
  if (C.zf) goto L_112d1e9a;
  /* 112d1e8e jmp 0x112d1e9e */
  goto L_112d1e9e;
L_112d1e90:;
  /* 112d1e90 mov dword ptr [0x112ef8b0], 1 */
  w32((uint32_t)(0x112ef8b0), (0x1u));
L_112d1e9a:;
  /* 112d1e9a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_112d1e9e:;
  /* 112d1e9e jmp 0x112d20a0 */
  goto L_112d20a0;
L_112d1ea3:;
  /* 112d1ea3 push 0x112eb94c */
  push32((uint32_t)(0x112eb94cu));
  /* 112d1ea8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1eab push ecx */
  push32((uint32_t)(ECX));
  /* 112d1eac call 0x112d2700 */
  push32(0x112d1eb1u); f_112d2700();
  /* 112d1eb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1eb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d1eb6 jne 0x112d1ec3 */
  if (!C.zf) goto L_112d1ec3;
  /* 112d1eb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1ebb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1ebe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112d1ec1 jmp 0x112d1ee1 */
  goto L_112d1ee1;
L_112d1ec3:;
  /* 112d1ec3 push 0x112eb948 */
  push32((uint32_t)(0x112eb948u));
  /* 112d1ec8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1ecb push eax */
  push32((uint32_t)(EAX));
  /* 112d1ecc call 0x112d2700 */
  push32(0x112d1ed1u); f_112d2700();
  /* 112d1ed1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1ed4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d1ed6 jne 0x112d1ee1 */
  if (!C.zf) goto L_112d1ee1;
  /* 112d1ed8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1edb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1ede mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112d1ee1:;
  /* 112d1ee1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 112d1ee5 jmp 0x112d20a0 */
  goto L_112d20a0;
L_112d1eea:;
  /* 112d1eea mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d1eed cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1ef1 jg 0x112d1f01 */
  if ((!C.zf&&C.sf==C.of)) goto L_112d1f01;
  /* 112d1ef3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d1ef6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 112d1efc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112d1eff jmp 0x112d1f0d */
  goto L_112d1f0d;
L_112d1f01:;
  /* 112d1f01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d1f04 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 112d1f0a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_112d1f0d:;
  /* 112d1f0d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1f11 jle 0x112d1fb4 */
  if ((C.zf||C.sf!=C.of)) goto L_112d1fb4;
  /* 112d1f17 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1f1a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1f1d jbe 0x112d1fb4 */
  if ((C.cf||C.zf)) goto L_112d1fb4;
  /* 112d1f23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d1f26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d1f28 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112d1f2a mov ecx, dword ptr [0x112edc98] */
  ECX = (r32((uint32_t)(0x112edc98)));
  /* 112d1f30 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d1f32 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 112d1f36 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 112d1f3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d1f3e je 0x112d1f77 */
  if (C.zf) goto L_112d1f77;
  /* 112d1f40 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1f43 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1f46 jbe 0x112d1f77 */
  if ((C.cf||C.zf)) goto L_112d1f77;
  /* 112d1f48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1f4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d1f4d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d1f50 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112d1f52 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 112d1f54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1f57 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112d1f59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1f5c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1f5f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112d1f61 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d1f64 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1f67 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 112d1f6a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1f6d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112d1f6f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1f72 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1f75 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_112d1f77:;
  /* 112d1f77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1f7a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112d1f7c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d1f7f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112d1f81 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 112d1f83 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1f86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d1f88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1f8b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d1f8e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112d1f90 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d1f93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1f96 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112d1f99 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1f9c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112d1f9e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1fa1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1fa4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112d1fa6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1fa9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d1fac mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112d1faf jmp 0x112d1f0d */
  goto L_112d1f0d;
L_112d1fb4:;
  /* 112d1fb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d1fb7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112d1fba jmp 0x112d1cd6 */
  goto L_112d1cd6;
L_112d1fbf:;
  /* 112d1fbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d1fc2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112d1fc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112d1fc7 je 0x112d2092 */
  if (C.zf) goto L_112d2092;
  /* 112d1fcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1fd0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d1fd3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_112d1fd6:;
  /* 112d1fd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1fd9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112d1fdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112d1fde je 0x112d2090 */
  if (C.zf) goto L_112d2090;
  /* 112d1fe4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d1fe7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1fea je 0x112d2090 */
  if (C.zf) goto L_112d2090;
  /* 112d1ff0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1ff3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112d1ff6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d1ff9 jne 0x112d2009 */
  if (!C.zf) goto L_112d2009;
  /* 112d1ffb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d1ffe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2001 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 112d2004 jmp 0x112d2090 */
  goto L_112d2090;
L_112d2009:;
  /* 112d2009 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d200c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d200e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112d2010 mov edx, dword ptr [0x112edc98] */
  EDX = (r32((uint32_t)(0x112edc98)));
  /* 112d2016 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d2018 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 112d201c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 112d2021 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d2023 je 0x112d205c */
  if (C.zf) goto L_112d205c;
  /* 112d2025 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d2028 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d202b jbe 0x112d205c */
  if ((C.cf||C.zf)) goto L_112d205c;
  /* 112d202d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d2030 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112d2032 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2035 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112d2037 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112d2039 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d203c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112d203e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2041 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d2044 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112d2046 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2049 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d204c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112d204f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d2052 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d2054 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d2057 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d205a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_112d205c:;
  /* 112d205c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d205f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d2061 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2064 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112d2066 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 112d2068 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d206b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112d206d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2070 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d2073 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112d2075 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2078 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d207b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 112d207e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d2081 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112d2083 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d2086 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d2089 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112d208b jmp 0x112d1fd6 */
  goto L_112d1fd6;
L_112d2090:;
  /* 112d2090 jmp 0x112d209b */
  goto L_112d209b;
L_112d2092:;
  /* 112d2092 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2095 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2098 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_112d209b:;
  /* 112d209b jmp 0x112d1cd6 */
  goto L_112d1cd6;
L_112d20a0:;
  /* 112d20a0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 112d20a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112d20a6 je 0x112d20cc */
  if (C.zf) goto L_112d20cc;
  /* 112d20a8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d20ab push edx */
  push32((uint32_t)(EDX));
  /* 112d20ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d20af push eax */
  push32((uint32_t)(EAX));
  /* 112d20b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d20b3 push ecx */
  push32((uint32_t)(ECX));
  /* 112d20b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d20b7 push edx */
  push32((uint32_t)(EDX));
  /* 112d20b8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 112d20bb push eax */
  push32((uint32_t)(EAX));
  /* 112d20bc call 0x112d1500 */
  push32(0x112d20c1u); f_112d1500();
  /* 112d20c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d20c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d20c7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 112d20ca jmp 0x112d2147 */
  goto L_112d2147;
L_112d20cc:;
  /* 112d20cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d20cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d20d1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112d20d3 mov ecx, dword ptr [0x112edc98] */
  ECX = (r32((uint32_t)(0x112edc98)));
  /* 112d20d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d20db mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 112d20df and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 112d20e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d20e7 je 0x112d2118 */
  if (C.zf) goto L_112d2118;
  /* 112d20e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d20ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112d20ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d20f1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112d20f3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 112d20f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d20f8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d20fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d20fd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d2100 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112d2102 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2105 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2108 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 112d210b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d210e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112d2110 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d2113 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d2116 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_112d2118:;
  /* 112d2118 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d211b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112d211d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2120 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112d2122 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112d2124 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d2127 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112d2129 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d212c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d212f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112d2131 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2134 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2137 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112d213a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d213d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d213f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d2142 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d2145 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_112d2147:;
  /* 112d2147 jmp 0x112d1cd6 */
  goto L_112d1cd6;
L_112d214c:;
  /* 112d214c mov esp, ebp */
  ESP = (EBP);
  /* 112d214e pop ebp */
  EBP = (pop32());
  /* 112d214f ret  */
  ESPCHK(0x112d1cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100121f0 @ 0x112d21f0 (650 bytes, 178 insns) */
void f_112d21f0(void) {
  FTRACE(0x112d21f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d21f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112d21f1 mov ebp, esp */
  EBP = (ESP);
  /* 112d21f3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d21f9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d21fd jne 0x112d2359 */
  if (!C.zf) goto L_112d2359;
  /* 112d2203 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d2206 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 112d220c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 112d2212 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112d2215 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112d221c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 112d2226 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d2228 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 112d222e push edx */
  push32((uint32_t)(EDX));
  /* 112d222f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2232 push eax */
  push32((uint32_t)(EAX));
  /* 112d2233 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d2236 push ecx */
  push32((uint32_t)(ECX));
  /* 112d2237 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d223a push edx */
  push32((uint32_t)(EDX));
  /* 112d223b call 0x112d3610 */
  push32(0x112d2240u); f_112d3610();
  /* 112d2240 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2243 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112d2246 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d224a jne 0x112d22df */
  if (!C.zf) goto L_112d22df;
  /* 112d2250 call dword ptr [0x112f23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23a4))), 0x112d2256u);
  /* 112d2256 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2259 je 0x112d2260 */
  if (C.zf) goto L_112d2260;
  /* 112d225b jmp 0x112d233d */
  goto L_112d233d;
L_112d2260:;
  /* 112d2260 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d2262 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d2264 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d2266 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d2269 push eax */
  push32((uint32_t)(EAX));
  /* 112d226a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d226d push ecx */
  push32((uint32_t)(ECX));
  /* 112d226e call 0x112d3610 */
  push32(0x112d2273u); f_112d3610();
  /* 112d2273 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2276 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 112d227c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2283 jne 0x112d228a */
  if (!C.zf) goto L_112d228a;
  /* 112d2285 jmp 0x112d233d */
  goto L_112d233d;
L_112d228a:;
  /* 112d228a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 112d228c push 0x112eb954 */
  push32((uint32_t)(0x112eb954u));
  /* 112d2291 push 2 */
  push32((uint32_t)(0x2u));
  /* 112d2293 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 112d2299 push edx */
  push32((uint32_t)(EDX));
  /* 112d229a call 0x112c4030 */
  push32(0x112d229fu); f_112c4030();
  /* 112d229f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d22a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112d22a5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d22a9 jne 0x112d22b0 */
  if (!C.zf) goto L_112d22b0;
  /* 112d22ab jmp 0x112d233d */
  goto L_112d233d;
L_112d22b0:;
  /* 112d22b0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112d22b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d22b9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 112d22bf push eax */
  push32((uint32_t)(EAX));
  /* 112d22c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d22c3 push ecx */
  push32((uint32_t)(ECX));
  /* 112d22c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d22c7 push edx */
  push32((uint32_t)(EDX));
  /* 112d22c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d22cb push eax */
  push32((uint32_t)(EAX));
  /* 112d22cc call 0x112d3610 */
  push32(0x112d22d1u); f_112d3610();
  /* 112d22d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d22d4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112d22d7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d22db jne 0x112d22df */
  if (!C.zf) goto L_112d22df;
  /* 112d22dd jmp 0x112d233d */
  goto L_112d233d;
L_112d22df:;
  /* 112d22df push 0x63 */
  push32((uint32_t)(0x63u));
  /* 112d22e1 push 0x112eb954 */
  push32((uint32_t)(0x112eb954u));
  /* 112d22e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 112d22e8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d22eb push ecx */
  push32((uint32_t)(ECX));
  /* 112d22ec call 0x112c4030 */
  push32(0x112d22f1u); f_112c4030();
  /* 112d22f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d22f4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 112d22fa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 112d22fc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 112d2302 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2305 jne 0x112d2309 */
  if (!C.zf) goto L_112d2309;
  /* 112d2307 jmp 0x112d233d */
  goto L_112d233d;
L_112d2309:;
  /* 112d2309 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d230c push ecx */
  push32((uint32_t)(ECX));
  /* 112d230d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2310 push edx */
  push32((uint32_t)(EDX));
  /* 112d2311 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 112d2317 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112d2319 push ecx */
  push32((uint32_t)(ECX));
  /* 112d231a call 0x112c7850 */
  push32(0x112d231fu); f_112c7850();
  /* 112d231f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2322 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2326 je 0x112d2336 */
  if (C.zf) goto L_112d2336;
  /* 112d2328 push 2 */
  push32((uint32_t)(0x2u));
  /* 112d232a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d232d push edx */
  push32((uint32_t)(EDX));
  /* 112d232e call 0x112c4ac0 */
  push32(0x112d2333u); f_112c4ac0();
  /* 112d2333 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112d2336:;
  /* 112d2336 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d2338 jmp 0x112d2476 */
  goto L_112d2476;
L_112d233d:;
  /* 112d233d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2341 je 0x112d2351 */
  if (C.zf) goto L_112d2351;
  /* 112d2343 push 2 */
  push32((uint32_t)(0x2u));
  /* 112d2345 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2348 push eax */
  push32((uint32_t)(EAX));
  /* 112d2349 call 0x112c4ac0 */
  push32(0x112d234eu); f_112c4ac0();
  /* 112d234e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112d2351:;
  /* 112d2351 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d2354 jmp 0x112d2476 */
  goto L_112d2476;
L_112d2359:;
  /* 112d2359 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d235d jne 0x112d2473 */
  if (!C.zf) goto L_112d2473;
  /* 112d2363 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 112d236d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d2370 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 112d2376 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d2378 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 112d237e push edx */
  push32((uint32_t)(EDX));
  /* 112d237f push 0x112ef7c8 */
  push32((uint32_t)(0x112ef7c8u));
  /* 112d2384 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d2387 push eax */
  push32((uint32_t)(EAX));
  /* 112d2388 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d238b push ecx */
  push32((uint32_t)(ECX));
  /* 112d238c call 0x112d3470 */
  push32(0x112d2391u); f_112d3470();
  /* 112d2391 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d2396 jne 0x112d23a0 */
  if (!C.zf) goto L_112d23a0;
  /* 112d2398 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d239b jmp 0x112d2476 */
  goto L_112d2476;
L_112d23a0:;
  /* 112d23a0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 112d23a6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 112d23a9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 112d23b3 jmp 0x112d23c4 */
  goto L_112d23c4;
L_112d23b5:;
  /* 112d23b5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 112d23bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d23be mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_112d23c4:;
  /* 112d23c4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d23cb jge 0x112d246f */
  if ((C.sf==C.of)) goto L_112d246f;
  /* 112d23d1 cmp dword ptr [0x112edea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112edea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d23d8 jle 0x112d240b */
  if ((C.zf||C.sf!=C.of)) goto L_112d240b;
  /* 112d23da push 4 */
  push32((uint32_t)(0x4u));
  /* 112d23dc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 112d23e2 mov dl, byte ptr [ecx*2 + 0x112ef7c8] */
  DL = (r8((uint32_t)(ECX*2 + 0x112ef7c8)));
  /* 112d23e9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 112d23ef mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 112d23f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d23fa push eax */
  push32((uint32_t)(EAX));
  /* 112d23fb call 0x112ca040 */
  push32(0x112d2400u); f_112ca040();
  /* 112d2400 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2403 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 112d2409 jmp 0x112d243e */
  goto L_112d243e;
L_112d240b:;
  /* 112d240b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 112d2411 mov dl, byte ptr [ecx*2 + 0x112ef7c8] */
  DL = (r8((uint32_t)(ECX*2 + 0x112ef7c8)));
  /* 112d2418 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 112d241e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 112d2424 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d2429 mov ecx, dword ptr [0x112edc98] */
  ECX = (r32((uint32_t)(0x112edc98)));
  /* 112d242f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d2431 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 112d2435 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 112d2438 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_112d243e:;
  /* 112d243e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2445 je 0x112d2468 */
  if (C.zf) goto L_112d2468;
  /* 112d2447 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 112d244d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112d2450 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d2453 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 112d245a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 112d245e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 112d2464 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 112d2466 jmp 0x112d246a */
  goto L_112d246a;
L_112d2468:;
  /* 112d2468 jmp 0x112d246f */
  goto L_112d246f;
L_112d246a:;
  /* 112d246a jmp 0x112d23b5 */
  goto L_112d23b5;
L_112d246f:;
  /* 112d246f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d2471 jmp 0x112d2476 */
  goto L_112d2476;
L_112d2473:;
  /* 112d2473 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_112d2476:;
  /* 112d2476 mov esp, ebp */
  ESP = (EBP);
  /* 112d2478 pop ebp */
  EBP = (pop32());
  /* 112d2479 ret  */
  ESPCHK(0x112d21f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012480 @ 0x112d2480 (10 bytes, 5 insns) */
void f_112d2480(void) {
  FTRACE(0x112d2480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d2480 push ebp */
  push32((uint32_t)(EBP));
  /* 112d2481 mov ebp, esp */
  EBP = (ESP);
  /* 112d2483 mov eax, dword ptr [0x112eed88] */
  EAX = (r32((uint32_t)(0x112eed88)));
  /* 112d2488 pop ebp */
  EBP = (pop32());
  /* 112d2489 ret  */
  ESPCHK(0x112d2480u, _esp0);
  ESP += 4; return;
}

/* FUN_10012490 @ 0x112d2490 (575 bytes, 196 insns) */
void f_112d2490(void) {
  FTRACE(0x112d2490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d2490 push ebp */
  push32((uint32_t)(EBP));
  /* 112d2491 mov ebp, esp */
  EBP = (ESP);
  /* 112d2493 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112d2495 push 0x112eb960 */
  push32((uint32_t)(0x112eb960u));
  /* 112d249a push 0x112cd138 */
  push32((uint32_t)(0x112cd138u));
  /* 112d249f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 112d24a5 push eax */
  push32((uint32_t)(EAX));
  /* 112d24a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 112d24ad add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d24b0 push ebx */
  push32((uint32_t)(EBX));
  /* 112d24b1 push esi */
  push32((uint32_t)(ESI));
  /* 112d24b2 push edi */
  push32((uint32_t)(EDI));
  /* 112d24b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112d24b6 cmp dword ptr [0x112ef7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d24bd jne 0x112d250e */
  if (!C.zf) goto L_112d250e;
  /* 112d24bf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 112d24c2 push eax */
  push32((uint32_t)(EAX));
  /* 112d24c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 112d24c5 push 0x112eb094 */
  push32((uint32_t)(0x112eb094u));
  /* 112d24ca push 1 */
  push32((uint32_t)(0x1u));
  /* 112d24cc call dword ptr [0x112f2300] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2300))), 0x112d24d2u);
  /* 112d24d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d24d4 je 0x112d24e2 */
  if (C.zf) goto L_112d24e2;
  /* 112d24d6 mov dword ptr [0x112ef7d4], 1 */
  w32((uint32_t)(0x112ef7d4), (0x1u));
  /* 112d24e0 jmp 0x112d250e */
  goto L_112d250e;
L_112d24e2:;
  /* 112d24e2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 112d24e5 push ecx */
  push32((uint32_t)(ECX));
  /* 112d24e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 112d24e8 push 0x112eb090 */
  push32((uint32_t)(0x112eb090u));
  /* 112d24ed push 1 */
  push32((uint32_t)(0x1u));
  /* 112d24ef push 0 */
  push32((uint32_t)(0x0u));
  /* 112d24f1 call dword ptr [0x112f2310] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2310))), 0x112d24f7u);
  /* 112d24f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d24f9 je 0x112d2507 */
  if (C.zf) goto L_112d2507;
  /* 112d24fb mov dword ptr [0x112ef7d4], 2 */
  w32((uint32_t)(0x112ef7d4), (0x2u));
  /* 112d2505 jmp 0x112d250e */
  goto L_112d250e;
L_112d2507:;
  /* 112d2507 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d2509 jmp 0x112d26e9 */
  goto L_112d26e9;
L_112d250e:;
  /* 112d250e cmp dword ptr [0x112ef7d4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7d4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2515 jne 0x112d2532 */
  if (!C.zf) goto L_112d2532;
  /* 112d2517 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d251a push edx */
  push32((uint32_t)(EDX));
  /* 112d251b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d251e push eax */
  push32((uint32_t)(EAX));
  /* 112d251f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d2522 push ecx */
  push32((uint32_t)(ECX));
  /* 112d2523 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2526 push edx */
  push32((uint32_t)(EDX));
  /* 112d2527 call dword ptr [0x112f2300] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2300))), 0x112d252du);
  /* 112d252d jmp 0x112d26e9 */
  goto L_112d26e9;
L_112d2532:;
  /* 112d2532 cmp dword ptr [0x112ef7d4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7d4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2539 jne 0x112d26e7 */
  if (!C.zf) goto L_112d26e7;
  /* 112d253f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2543 jne 0x112d254d */
  if (!C.zf) goto L_112d254d;
  /* 112d2545 mov eax, dword ptr [0x112ef748] */
  EAX = (r32((uint32_t)(0x112ef748)));
  /* 112d254a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_112d254d:;
  /* 112d254d push 0 */
  push32((uint32_t)(0x0u));
  /* 112d254f push 0 */
  push32((uint32_t)(0x0u));
  /* 112d2551 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d2553 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d2555 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d2558 push ecx */
  push32((uint32_t)(ECX));
  /* 112d2559 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d255c push edx */
  push32((uint32_t)(EDX));
  /* 112d255d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 112d2562 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d2565 push eax */
  push32((uint32_t)(EAX));
  /* 112d2566 call dword ptr [0x112f2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2390))), 0x112d256cu);
  /* 112d256c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112d256f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2573 jne 0x112d257c */
  if (!C.zf) goto L_112d257c;
  /* 112d2575 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d2577 jmp 0x112d26e9 */
  goto L_112d26e9;
L_112d257c:;
  /* 112d257c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112d2583 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112d2586 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2589 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 112d258b call 0x112c71d0 */
  push32(0x112d2590u); f_112c71d0();
  /* 112d2590 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 112d2593 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112d2596 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 112d2599 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 112d259c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112d259f push edx */
  push32((uint32_t)(EDX));
  /* 112d25a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d25a2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112d25a5 push eax */
  push32((uint32_t)(EAX));
  /* 112d25a6 call 0x112c7da0 */
  push32(0x112d25abu); f_112c7da0();
  /* 112d25ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d25ae mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 112d25b5 jmp 0x112d25ce */
  goto L_112d25ce;
  /* 112d25b7 mov eax, 1 */
  EAX = (0x1u);
  /* 112d25bc ret  */
  ESPCHK(0x112d2490u, _esp0);
  ESP += 4; return;
  /* 112d25bd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 112d25c0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 112d25c7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_112d25ce:;
  /* 112d25ce cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d25d2 jne 0x112d25db */
  if (!C.zf) goto L_112d25db;
  /* 112d25d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d25d6 jmp 0x112d26e9 */
  goto L_112d26e9;
L_112d25db:;
  /* 112d25db push 0 */
  push32((uint32_t)(0x0u));
  /* 112d25dd push 0 */
  push32((uint32_t)(0x0u));
  /* 112d25df mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112d25e2 push ecx */
  push32((uint32_t)(ECX));
  /* 112d25e3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112d25e6 push edx */
  push32((uint32_t)(EDX));
  /* 112d25e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d25ea push eax */
  push32((uint32_t)(EAX));
  /* 112d25eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d25ee push ecx */
  push32((uint32_t)(ECX));
  /* 112d25ef push 0x220 */
  push32((uint32_t)(0x220u));
  /* 112d25f4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d25f7 push edx */
  push32((uint32_t)(EDX));
  /* 112d25f8 call dword ptr [0x112f2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2390))), 0x112d25feu);
  /* 112d25fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d2600 jne 0x112d2609 */
  if (!C.zf) goto L_112d2609;
  /* 112d2602 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d2604 jmp 0x112d26e9 */
  goto L_112d26e9;
L_112d2609:;
  /* 112d2609 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112d2610 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112d2613 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 112d2617 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d261a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 112d261c call 0x112c71d0 */
  push32(0x112d2621u); f_112c71d0();
  /* 112d2621 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 112d2624 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112d2627 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 112d262a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 112d262d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 112d2634 jmp 0x112d264d */
  goto L_112d264d;
  /* 112d2636 mov eax, 1 */
  EAX = (0x1u);
  /* 112d263b ret  */
  ESPCHK(0x112d2490u, _esp0);
  ESP += 4; return;
  /* 112d263c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 112d263f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 112d2646 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_112d264d:;
  /* 112d264d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2651 jne 0x112d265a */
  if (!C.zf) goto L_112d265a;
  /* 112d2653 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d2655 jmp 0x112d26e9 */
  goto L_112d26e9;
L_112d265a:;
  /* 112d265a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d265e jne 0x112d2669 */
  if (!C.zf) goto L_112d2669;
  /* 112d2660 mov edx, dword ptr [0x112ef738] */
  EDX = (r32((uint32_t)(0x112ef738)));
  /* 112d2666 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_112d2669:;
  /* 112d2669 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d266c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112d266f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 112d2675 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d2678 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112d267b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 112d2682 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112d2685 push ecx */
  push32((uint32_t)(ECX));
  /* 112d2686 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112d2689 push edx */
  push32((uint32_t)(EDX));
  /* 112d268a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112d268d push eax */
  push32((uint32_t)(EAX));
  /* 112d268e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2691 push ecx */
  push32((uint32_t)(ECX));
  /* 112d2692 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112d2695 push edx */
  push32((uint32_t)(EDX));
  /* 112d2696 call dword ptr [0x112f2310] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2310))), 0x112d269cu);
  /* 112d269c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112d269f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d26a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112d26a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d26a7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 112d26ac cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d26b2 je 0x112d26c8 */
  if (C.zf) goto L_112d26c8;
  /* 112d26b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d26b7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112d26ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d26bc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 112d26c0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d26c6 je 0x112d26cc */
  if (C.zf) goto L_112d26cc;
L_112d26c8:;
  /* 112d26c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d26ca jmp 0x112d26e9 */
  goto L_112d26e9;
L_112d26cc:;
  /* 112d26cc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d26cf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 112d26d1 push eax */
  push32((uint32_t)(EAX));
  /* 112d26d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112d26d5 push ecx */
  push32((uint32_t)(ECX));
  /* 112d26d6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d26d9 push edx */
  push32((uint32_t)(EDX));
  /* 112d26da call 0x112cbf20 */
  push32(0x112d26dfu); f_112cbf20();
  /* 112d26df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d26e2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112d26e5 jmp 0x112d26e9 */
  goto L_112d26e9;
L_112d26e7:;
  /* 112d26e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112d26e9:;
  /* 112d26e9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 112d26ec mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d26ef mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 112d26f6 pop edi */
  EDI = (pop32());
  /* 112d26f7 pop esi */
  ESI = (pop32());
  /* 112d26f8 pop ebx */
  EBX = (pop32());
  /* 112d26f9 mov esp, ebp */
  ESP = (EBP);
  /* 112d26fb pop ebp */
  EBP = (pop32());
  /* 112d26fc ret  */
  ESPCHK(0x112d2490u, _esp0);
  ESP += 4; return;
}

/* FUN_10012700 @ 0x112d2700 (208 bytes, 85 insns) */
void f_112d2700(void) {
  FTRACE(0x112d2700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d2700 push ebp */
  push32((uint32_t)(EBP));
  /* 112d2701 mov ebp, esp */
  EBP = (ESP);
  /* 112d2703 push edi */
  push32((uint32_t)(EDI));
  /* 112d2704 push esi */
  push32((uint32_t)(ESI));
  /* 112d2705 push ebx */
  push32((uint32_t)(EBX));
  /* 112d2706 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 112d2709 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 112d270c lea eax, [0x112ef730] */
  EAX = ((uint32_t)(0x112ef730));
  /* 112d2712 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2716 jne 0x112d2753 */
  if (!C.zf) goto L_112d2753;
  /* 112d2718 mov al, 0xff */
  AL = (0xffu);
  /* 112d271a mov edi, edi */
  EDI = (EDI);
L_112d271c:;
  /* 112d271c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112d271e je 0x112d274e */
  if (C.zf) goto L_112d274e;
  /* 112d2720 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112d2722 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112d2723 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 112d2725 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112d2726 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112d2728 je 0x112d271c */
  if (C.zf) goto L_112d271c;
  /* 112d272a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112d272c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112d272e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112d2730 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 112d2733 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 112d2735 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 112d2737 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 112d2739 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112d273b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112d273d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112d273f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 112d2742 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 112d2744 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 112d2746 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112d2748 je 0x112d271c */
  if (C.zf) goto L_112d271c;
  /* 112d274a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112d274c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_112d274e:;
  /* 112d274e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 112d2751 jmp 0x112d27cb */
  goto L_112d27cb;
L_112d2753:;
  /* 112d2753 lock inc dword ptr [0x112ef8c4] */
  x86_unimpl("lock inc @ 0x112d2753");
  /* 112d275a cmp dword ptr [0x112ef8b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef8b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2761 jg 0x112d2767 */
  if ((!C.zf&&C.sf==C.of)) goto L_112d2767;
  /* 112d2763 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d2765 jmp 0x112d277c */
  goto L_112d277c;
L_112d2767:;
  /* 112d2767 lock dec dword ptr [0x112ef8c4] */
  x86_unimpl("lock dec @ 0x112d2767");
  /* 112d276e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112d2770 call 0x112c7a30 */
  push32(0x112d2775u); f_112c7a30();
  /* 112d2775 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_112d277c:;
  /* 112d277c mov eax, 0xff */
  EAX = (0xffu);
  /* 112d2781 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112d2783 nop  */
  /* nop */
L_112d2784:;
  /* 112d2784 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112d2786 je 0x112d27af */
  if (C.zf) goto L_112d27af;
  /* 112d2788 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112d278a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112d278b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 112d278d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112d278e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112d2790 je 0x112d2784 */
  if (C.zf) goto L_112d2784;
  /* 112d2792 push eax */
  push32((uint32_t)(EAX));
  /* 112d2793 push ebx */
  push32((uint32_t)(EBX));
  /* 112d2794 call 0x112d3870 */
  push32(0x112d2799u); f_112d3870();
  /* 112d2799 mov ebx, eax */
  EBX = (EAX);
  /* 112d279b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d279e call 0x112d3870 */
  push32(0x112d27a3u); f_112d3870();
  /* 112d27a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d27a6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112d27a8 je 0x112d2784 */
  if (C.zf) goto L_112d2784;
  /* 112d27aa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d27ac sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_112d27af:;
  /* 112d27af mov ebx, eax */
  EBX = (EAX);
  /* 112d27b1 pop eax */
  EAX = (pop32());
  /* 112d27b2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d27b4 jne 0x112d27bf */
  if (!C.zf) goto L_112d27bf;
  /* 112d27b6 lock dec dword ptr [0x112ef8c4] */
  x86_unimpl("lock dec @ 0x112d27b6");
  /* 112d27bd jmp 0x112d27c9 */
  goto L_112d27c9;
L_112d27bf:;
  /* 112d27bf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112d27c1 call 0x112c7ad0 */
  push32(0x112d27c6u); f_112c7ad0();
  /* 112d27c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112d27c9:;
  /* 112d27c9 mov eax, ebx */
  EAX = (EBX);
L_112d27cb:;
  /* 112d27cb pop ebx */
  EBX = (pop32());
  /* 112d27cc pop esi */
  ESI = (pop32());
  /* 112d27cd pop edi */
  EDI = (pop32());
  /* 112d27ce leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112d27cf ret  */
  ESPCHK(0x112d2700u, _esp0);
  ESP += 4; return;
}

/* FUN_100127d0 @ 0x112d27d0 (257 bytes, 103 insns) */
void f_112d27d0(void) {
  FTRACE(0x112d27d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d27d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112d27d1 mov ebp, esp */
  EBP = (ESP);
  /* 112d27d3 push edi */
  push32((uint32_t)(EDI));
  /* 112d27d4 push esi */
  push32((uint32_t)(ESI));
  /* 112d27d5 push ebx */
  push32((uint32_t)(EBX));
  /* 112d27d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d27d9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d27db je 0x112d28ca */
  if (C.zf) goto L_112d28ca;
  /* 112d27e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 112d27e4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 112d27e7 lea eax, [0x112ef730] */
  EAX = ((uint32_t)(0x112ef730));
  /* 112d27ed cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d27f1 jne 0x112d2841 */
  if (!C.zf) goto L_112d2841;
  /* 112d27f3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 112d27f5 mov bl, 0x5a */
  BL = (0x5au);
  /* 112d27f7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 112d27f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112d27fc:;
  /* 112d27fc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 112d27fe or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 112d2800 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 112d2802 je 0x112d2825 */
  if (C.zf) goto L_112d2825;
  /* 112d2804 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112d2806 je 0x112d2825 */
  if (C.zf) goto L_112d2825;
  /* 112d2808 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112d2809 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112d280a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112d280c jb 0x112d2814 */
  if (C.cf) goto L_112d2814;
  /* 112d280e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112d2810 ja 0x112d2814 */
  if ((!C.cf&&!C.zf)) goto L_112d2814;
  /* 112d2812 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_112d2814:;
  /* 112d2814 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112d2816 jb 0x112d281e */
  if (C.cf) goto L_112d281e;
  /* 112d2818 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112d281a ja 0x112d281e */
  if ((!C.cf&&!C.zf)) goto L_112d281e;
  /* 112d281c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_112d281e:;
  /* 112d281e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112d2820 jne 0x112d282f */
  if (!C.zf) goto L_112d282f;
  /* 112d2822 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112d2823 jne 0x112d27fc */
  if (!C.zf) goto L_112d27fc;
L_112d2825:;
  /* 112d2825 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d2827 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112d2829 je 0x112d28ca */
  if (C.zf) goto L_112d28ca;
L_112d282f:;
  /* 112d282f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 112d2834 jb 0x112d28ca */
  if (C.cf) goto L_112d28ca;
  /* 112d283a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 112d283c jmp 0x112d28ca */
  goto L_112d28ca;
L_112d2841:;
  /* 112d2841 lock inc dword ptr [0x112ef8c4] */
  x86_unimpl("lock inc @ 0x112d2841");
  /* 112d2848 cmp dword ptr [0x112ef8b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef8b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d284f jg 0x112d2855 */
  if ((!C.zf&&C.sf==C.of)) goto L_112d2855;
  /* 112d2851 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d2853 jmp 0x112d286e */
  goto L_112d286e;
L_112d2855:;
  /* 112d2855 lock dec dword ptr [0x112ef8c4] */
  x86_unimpl("lock dec @ 0x112d2855");
  /* 112d285c mov ebx, ecx */
  EBX = (ECX);
  /* 112d285e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112d2860 call 0x112c7a30 */
  push32(0x112d2865u); f_112c7a30();
  /* 112d2865 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 112d286c mov ecx, ebx */
  ECX = (EBX);
L_112d286e:;
  /* 112d286e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d2870 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112d2872 mov edi, edi */
  EDI = (EDI);
L_112d2874:;
  /* 112d2874 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112d2876 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d2878 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 112d287a je 0x112d289f */
  if (C.zf) goto L_112d289f;
  /* 112d287c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112d287e je 0x112d289f */
  if (C.zf) goto L_112d289f;
  /* 112d2880 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112d2881 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112d2882 push ecx */
  push32((uint32_t)(ECX));
  /* 112d2883 push eax */
  push32((uint32_t)(EAX));
  /* 112d2884 push ebx */
  push32((uint32_t)(EBX));
  /* 112d2885 call 0x112d3870 */
  push32(0x112d288au); f_112d3870();
  /* 112d288a mov ebx, eax */
  EBX = (EAX);
  /* 112d288c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d288f call 0x112d3870 */
  push32(0x112d2894u); f_112d3870();
  /* 112d2894 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2897 pop ecx */
  ECX = (pop32());
  /* 112d2898 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d289a jne 0x112d28a5 */
  if (!C.zf) goto L_112d28a5;
  /* 112d289c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112d289d jne 0x112d2874 */
  if (!C.zf) goto L_112d2874;
L_112d289f:;
  /* 112d289f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d28a1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d28a3 je 0x112d28ae */
  if (C.zf) goto L_112d28ae;
L_112d28a5:;
  /* 112d28a5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 112d28aa jb 0x112d28ae */
  if (C.cf) goto L_112d28ae;
  /* 112d28ac neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_112d28ae:;
  /* 112d28ae pop eax */
  EAX = (pop32());
  /* 112d28af or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d28b1 jne 0x112d28bc */
  if (!C.zf) goto L_112d28bc;
  /* 112d28b3 lock dec dword ptr [0x112ef8c4] */
  x86_unimpl("lock dec @ 0x112d28b3");
  /* 112d28ba jmp 0x112d28ca */
  goto L_112d28ca;
L_112d28bc:;
  /* 112d28bc mov ebx, ecx */
  EBX = (ECX);
  /* 112d28be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112d28c0 call 0x112c7ad0 */
  push32(0x112d28c5u); f_112c7ad0();
  /* 112d28c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d28c8 mov ecx, ebx */
  ECX = (EBX);
L_112d28ca:;
  /* 112d28ca mov eax, ecx */
  EAX = (ECX);
  /* 112d28cc pop ebx */
  EBX = (pop32());
  /* 112d28cd pop esi */
  ESI = (pop32());
  /* 112d28ce pop edi */
  EDI = (pop32());
  /* 112d28cf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112d28d0 ret  */
  ESPCHK(0x112d27d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100128e0 @ 0x112d28e0 (255 bytes, 88 insns) */
void f_112d28e0(void) {
  FTRACE(0x112d28e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d28e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112d28e1 mov ebp, esp */
  EBP = (ESP);
  /* 112d28e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_112d28e6:;
  /* 112d28e6 cmp dword ptr [0x112edea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112edea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d28ed jle 0x112d2906 */
  if ((C.zf||C.sf!=C.of)) goto L_112d2906;
  /* 112d28ef push 8 */
  push32((uint32_t)(0x8u));
  /* 112d28f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d28f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d28f6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112d28f8 push ecx */
  push32((uint32_t)(ECX));
  /* 112d28f9 call 0x112ca040 */
  push32(0x112d28feu); f_112ca040();
  /* 112d28fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2901 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112d2904 jmp 0x112d291f */
  goto L_112d291f;
L_112d2906:;
  /* 112d2906 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2909 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d290b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112d290d mov ecx, dword ptr [0x112edc98] */
  ECX = (r32((uint32_t)(0x112edc98)));
  /* 112d2913 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d2915 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 112d2919 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 112d291c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_112d291f:;
  /* 112d291f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2923 je 0x112d2930 */
  if (C.zf) goto L_112d2930;
  /* 112d2925 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2928 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d292b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112d292e jmp 0x112d28e6 */
  goto L_112d28e6;
L_112d2930:;
  /* 112d2930 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2933 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d2935 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112d2937 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112d293a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d293d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2940 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112d2943 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d2946 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112d2949 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d294d je 0x112d2955 */
  if (C.zf) goto L_112d2955;
  /* 112d294f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2953 jne 0x112d2968 */
  if (!C.zf) goto L_112d2968;
L_112d2955:;
  /* 112d2955 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2958 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d295a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112d295c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112d295f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2962 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2965 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_112d2968:;
  /* 112d2968 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_112d296f:;
  /* 112d296f cmp dword ptr [0x112edea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112edea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2976 jle 0x112d298b */
  if ((C.zf||C.sf!=C.of)) goto L_112d298b;
  /* 112d2978 push 4 */
  push32((uint32_t)(0x4u));
  /* 112d297a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d297d push edx */
  push32((uint32_t)(EDX));
  /* 112d297e call 0x112ca040 */
  push32(0x112d2983u); f_112ca040();
  /* 112d2983 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2986 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112d2989 jmp 0x112d29a0 */
  goto L_112d29a0;
L_112d298b:;
  /* 112d298b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d298e mov ecx, dword ptr [0x112edc98] */
  ECX = (r32((uint32_t)(0x112edc98)));
  /* 112d2994 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d2996 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 112d299a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 112d299d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_112d29a0:;
  /* 112d29a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d29a4 je 0x112d29cb */
  if (C.zf) goto L_112d29cb;
  /* 112d29a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d29a9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d29ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d29af lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 112d29b3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112d29b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d29b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d29bb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112d29bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112d29c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d29c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d29c6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 112d29c9 jmp 0x112d296f */
  goto L_112d296f;
L_112d29cb:;
  /* 112d29cb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d29cf jne 0x112d29d8 */
  if (!C.zf) goto L_112d29d8;
  /* 112d29d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d29d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112d29d6 jmp 0x112d29db */
  goto L_112d29db;
L_112d29d8:;
  /* 112d29d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_112d29db:;
  /* 112d29db mov esp, ebp */
  ESP = (EBP);
  /* 112d29dd pop ebp */
  EBP = (pop32());
  /* 112d29de ret  */
  ESPCHK(0x112d28e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100129e0 @ 0x112d29e0 (17 bytes, 8 insns) */
void f_112d29e0(void) {
  FTRACE(0x112d29e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d29e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112d29e1 mov ebp, esp */
  EBP = (ESP);
  /* 112d29e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d29e6 push eax */
  push32((uint32_t)(EAX));
  /* 112d29e7 call 0x112d28e0 */
  push32(0x112d29ecu); f_112d28e0();
  /* 112d29ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d29ef pop ebp */
  EBP = (pop32());
  /* 112d29f0 ret  */
  ESPCHK(0x112d29e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a00 @ 0x112d2a00 (297 bytes, 106 insns) */
void f_112d2a00(void) {
  FTRACE(0x112d2a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d2a00 push ebp */
  push32((uint32_t)(EBP));
  /* 112d2a01 mov ebp, esp */
  EBP = (ESP);
  /* 112d2a03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d2a06 push esi */
  push32((uint32_t)(ESI));
L_112d2a07:;
  /* 112d2a07 cmp dword ptr [0x112edea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112edea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2a0e jle 0x112d2a27 */
  if ((C.zf||C.sf!=C.of)) goto L_112d2a27;
  /* 112d2a10 push 8 */
  push32((uint32_t)(0x8u));
  /* 112d2a12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2a15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d2a17 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112d2a19 push ecx */
  push32((uint32_t)(ECX));
  /* 112d2a1a call 0x112ca040 */
  push32(0x112d2a1fu); f_112ca040();
  /* 112d2a1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2a22 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112d2a25 jmp 0x112d2a40 */
  goto L_112d2a40;
L_112d2a27:;
  /* 112d2a27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2a2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d2a2c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112d2a2e mov ecx, dword ptr [0x112edc98] */
  ECX = (r32((uint32_t)(0x112edc98)));
  /* 112d2a34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d2a36 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 112d2a3a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 112d2a3d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_112d2a40:;
  /* 112d2a40 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2a44 je 0x112d2a51 */
  if (C.zf) goto L_112d2a51;
  /* 112d2a46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2a49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2a4c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112d2a4f jmp 0x112d2a07 */
  goto L_112d2a07;
L_112d2a51:;
  /* 112d2a51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2a54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d2a56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112d2a58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112d2a5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2a5e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2a61 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112d2a64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d2a67 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112d2a6a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2a6e je 0x112d2a76 */
  if (C.zf) goto L_112d2a76;
  /* 112d2a70 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2a74 jne 0x112d2a89 */
  if (!C.zf) goto L_112d2a89;
L_112d2a76:;
  /* 112d2a76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2a79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d2a7b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112d2a7d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112d2a80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2a83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2a86 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_112d2a89:;
  /* 112d2a89 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 112d2a90 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_112d2a97:;
  /* 112d2a97 cmp dword ptr [0x112edea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112edea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2a9e jle 0x112d2ab3 */
  if ((C.zf||C.sf!=C.of)) goto L_112d2ab3;
  /* 112d2aa0 push 4 */
  push32((uint32_t)(0x4u));
  /* 112d2aa2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d2aa5 push edx */
  push32((uint32_t)(EDX));
  /* 112d2aa6 call 0x112ca040 */
  push32(0x112d2aabu); f_112ca040();
  /* 112d2aab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2aae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112d2ab1 jmp 0x112d2ac8 */
  goto L_112d2ac8;
L_112d2ab3:;
  /* 112d2ab3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d2ab6 mov ecx, dword ptr [0x112edc98] */
  ECX = (r32((uint32_t)(0x112edc98)));
  /* 112d2abc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d2abe mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 112d2ac2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 112d2ac5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_112d2ac8:;
  /* 112d2ac8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2acc je 0x112d2b09 */
  if (C.zf) goto L_112d2b09;
  /* 112d2ace push 0 */
  push32((uint32_t)(0x0u));
  /* 112d2ad0 push 0xa */
  push32((uint32_t)(0xau));
  /* 112d2ad2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d2ad5 push eax */
  push32((uint32_t)(EAX));
  /* 112d2ad6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2ad9 push ecx */
  push32((uint32_t)(ECX));
  /* 112d2ada call 0x112d39a0 */
  push32(0x112d2adfu); f_112d39a0();
  /* 112d2adf mov ecx, eax */
  ECX = (EAX);
  /* 112d2ae1 mov esi, edx */
  ESI = (EDX);
  /* 112d2ae3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d2ae6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d2ae9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112d2aea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2aec adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2aee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112d2af1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 112d2af4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2af7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d2af9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112d2afb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112d2afe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2b01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2b04 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 112d2b07 jmp 0x112d2a97 */
  goto L_112d2a97;
L_112d2b09:;
  /* 112d2b09 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2b0d jne 0x112d2b1e */
  if (!C.zf) goto L_112d2b1e;
  /* 112d2b0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2b12 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112d2b14 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d2b17 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2b1a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 112d2b1c jmp 0x112d2b24 */
  goto L_112d2b24;
L_112d2b1e:;
  /* 112d2b1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2b21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_112d2b24:;
  /* 112d2b24 pop esi */
  ESI = (pop32());
  /* 112d2b25 mov esp, ebp */
  ESP = (EBP);
  /* 112d2b27 pop ebp */
  EBP = (pop32());
  /* 112d2b28 ret  */
  ESPCHK(0x112d2a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b30 @ 0x112d2b30 (61 bytes, 18 insns) */
void f_112d2b30(void) {
  FTRACE(0x112d2b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d2b30 push ebp */
  push32((uint32_t)(EBP));
  /* 112d2b31 mov ebp, esp */
  EBP = (ESP);
  /* 112d2b33 cmp dword ptr [0x112ef890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2b3a jne 0x112d2b6b */
  if (!C.zf) goto L_112d2b6b;
  /* 112d2b3c push 0xb */
  push32((uint32_t)(0xbu));
  /* 112d2b3e call 0x112c7a30 */
  push32(0x112d2b43u); f_112c7a30();
  /* 112d2b43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2b46 cmp dword ptr [0x112ef890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2b4d jne 0x112d2b61 */
  if (!C.zf) goto L_112d2b61;
  /* 112d2b4f call 0x112d2b90 */
  push32(0x112d2b54u); f_112d2b90();
  /* 112d2b54 mov eax, dword ptr [0x112ef890] */
  EAX = (r32((uint32_t)(0x112ef890)));
  /* 112d2b59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2b5c mov dword ptr [0x112ef890], eax */
  w32((uint32_t)(0x112ef890), (EAX));
L_112d2b61:;
  /* 112d2b61 push 0xb */
  push32((uint32_t)(0xbu));
  /* 112d2b63 call 0x112c7ad0 */
  push32(0x112d2b68u); f_112c7ad0();
  /* 112d2b68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112d2b6b:;
  /* 112d2b6b pop ebp */
  EBP = (pop32());
  /* 112d2b6c ret  */
  ESPCHK(0x112d2b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b70 @ 0x112d2b70 (30 bytes, 11 insns) */
void f_112d2b70(void) {
  FTRACE(0x112d2b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d2b70 push ebp */
  push32((uint32_t)(EBP));
  /* 112d2b71 mov ebp, esp */
  EBP = (ESP);
  /* 112d2b73 push 0xb */
  push32((uint32_t)(0xbu));
  /* 112d2b75 call 0x112c7a30 */
  push32(0x112d2b7au); f_112c7a30();
  /* 112d2b7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2b7d call 0x112d2b90 */
  push32(0x112d2b82u); f_112d2b90();
  /* 112d2b82 push 0xb */
  push32((uint32_t)(0xbu));
  /* 112d2b84 call 0x112c7ad0 */
  push32(0x112d2b89u); f_112c7ad0();
  /* 112d2b89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2b8c pop ebp */
  EBP = (pop32());
  /* 112d2b8d ret  */
  ESPCHK(0x112d2b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b90 @ 0x112d2b90 (939 bytes, 266 insns) */
void f_112d2b90(void) {
  FTRACE(0x112d2b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d2b90 push ebp */
  push32((uint32_t)(EBP));
  /* 112d2b91 mov ebp, esp */
  EBP = (ESP);
  /* 112d2b93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d2b96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112d2b9d push 0xc */
  push32((uint32_t)(0xcu));
  /* 112d2b9f call 0x112c7a30 */
  push32(0x112d2ba4u); f_112c7a30();
  /* 112d2ba4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2ba7 mov dword ptr [0x112ef7d8], 0 */
  w32((uint32_t)(0x112ef7d8), (0x0u));
  /* 112d2bb1 mov dword ptr [0x112eee38], 0xffffffff */
  w32((uint32_t)(0x112eee38), (0xffffffffu));
  /* 112d2bbb mov eax, dword ptr [0x112eee38] */
  EAX = (r32((uint32_t)(0x112eee38)));
  /* 112d2bc0 mov dword ptr [0x112eee28], eax */
  w32((uint32_t)(0x112eee28), (EAX));
  /* 112d2bc5 push 0x112eb9c0 */
  push32((uint32_t)(0x112eb9c0u));
  /* 112d2bca call 0x112d3a10 */
  push32(0x112d2bcfu); f_112d3a10();
  /* 112d2bcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2bd2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112d2bd5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2bd9 jne 0x112d2d13 */
  if (!C.zf) goto L_112d2d13;
  /* 112d2bdf push 0xc */
  push32((uint32_t)(0xcu));
  /* 112d2be1 call 0x112c7ad0 */
  push32(0x112d2be6u); f_112c7ad0();
  /* 112d2be6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2be9 push 0x112ef7e0 */
  push32((uint32_t)(0x112ef7e0u));
  /* 112d2bee call dword ptr [0x112f22c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22c4))), 0x112d2bf4u);
  /* 112d2bf4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2bf7 je 0x112d2d0e */
  if (C.zf) goto L_112d2d0e;
  /* 112d2bfd mov dword ptr [0x112ef7d8], 1 */
  w32((uint32_t)(0x112ef7d8), (0x1u));
  /* 112d2c07 mov ecx, dword ptr [0x112ef7e0] */
  ECX = (r32((uint32_t)(0x112ef7e0)));
  /* 112d2c0d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d2c10 mov dword ptr [0x112eed90], ecx */
  w32((uint32_t)(0x112eed90), (ECX));
  /* 112d2c16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d2c18 mov dx, word ptr [0x112ef826] */
  DX = (r16((uint32_t)(0x112ef826)));
  /* 112d2c1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d2c21 je 0x112d2c39 */
  if (C.zf) goto L_112d2c39;
  /* 112d2c23 mov eax, dword ptr [0x112ef834] */
  EAX = (r32((uint32_t)(0x112ef834)));
  /* 112d2c28 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d2c2b mov ecx, dword ptr [0x112eed90] */
  ECX = (r32((uint32_t)(0x112eed90)));
  /* 112d2c31 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2c33 mov dword ptr [0x112eed90], ecx */
  w32((uint32_t)(0x112eed90), (ECX));
L_112d2c39:;
  /* 112d2c39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d2c3b mov dx, word ptr [0x112ef87a] */
  DX = (r16((uint32_t)(0x112ef87a)));
  /* 112d2c42 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d2c44 je 0x112d2c6e */
  if (C.zf) goto L_112d2c6e;
  /* 112d2c46 cmp dword ptr [0x112ef888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2c4d je 0x112d2c6e */
  if (C.zf) goto L_112d2c6e;
  /* 112d2c4f mov dword ptr [0x112eed94], 1 */
  w32((uint32_t)(0x112eed94), (0x1u));
  /* 112d2c59 mov eax, dword ptr [0x112ef888] */
  EAX = (r32((uint32_t)(0x112ef888)));
  /* 112d2c5e sub eax, dword ptr [0x112ef834] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112ef834))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d2c64 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d2c67 mov dword ptr [0x112eed98], eax */
  w32((uint32_t)(0x112eed98), (EAX));
  /* 112d2c6c jmp 0x112d2c82 */
  goto L_112d2c82;
L_112d2c6e:;
  /* 112d2c6e mov dword ptr [0x112eed94], 0 */
  w32((uint32_t)(0x112eed94), (0x0u));
  /* 112d2c78 mov dword ptr [0x112eed98], 0 */
  w32((uint32_t)(0x112eed98), (0x0u));
L_112d2c82:;
  /* 112d2c82 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 112d2c85 push ecx */
  push32((uint32_t)(ECX));
  /* 112d2c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d2c88 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 112d2c8a mov edx, dword ptr [0x112eee1c] */
  EDX = (r32((uint32_t)(0x112eee1c)));
  /* 112d2c90 push edx */
  push32((uint32_t)(EDX));
  /* 112d2c91 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112d2c93 push 0x112ef7e4 */
  push32((uint32_t)(0x112ef7e4u));
  /* 112d2c98 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 112d2c9d mov eax, dword ptr [0x112ef748] */
  EAX = (r32((uint32_t)(0x112ef748)));
  /* 112d2ca2 push eax */
  push32((uint32_t)(EAX));
  /* 112d2ca3 call dword ptr [0x112f2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2390))), 0x112d2ca9u);
  /* 112d2ca9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d2cab je 0x112d2cbf */
  if (C.zf) goto L_112d2cbf;
  /* 112d2cad cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2cb1 jne 0x112d2cbf */
  if (!C.zf) goto L_112d2cbf;
  /* 112d2cb3 mov ecx, dword ptr [0x112eee1c] */
  ECX = (r32((uint32_t)(0x112eee1c)));
  /* 112d2cb9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 112d2cbd jmp 0x112d2cc8 */
  goto L_112d2cc8;
L_112d2cbf:;
  /* 112d2cbf mov edx, dword ptr [0x112eee1c] */
  EDX = (r32((uint32_t)(0x112eee1c)));
  /* 112d2cc5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_112d2cc8:;
  /* 112d2cc8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 112d2ccb push eax */
  push32((uint32_t)(EAX));
  /* 112d2ccc push 0 */
  push32((uint32_t)(0x0u));
  /* 112d2cce push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 112d2cd0 mov ecx, dword ptr [0x112eee20] */
  ECX = (r32((uint32_t)(0x112eee20)));
  /* 112d2cd6 push ecx */
  push32((uint32_t)(ECX));
  /* 112d2cd7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112d2cd9 push 0x112ef838 */
  push32((uint32_t)(0x112ef838u));
  /* 112d2cde push 0x220 */
  push32((uint32_t)(0x220u));
  /* 112d2ce3 mov edx, dword ptr [0x112ef748] */
  EDX = (r32((uint32_t)(0x112ef748)));
  /* 112d2ce9 push edx */
  push32((uint32_t)(EDX));
  /* 112d2cea call dword ptr [0x112f2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2390))), 0x112d2cf0u);
  /* 112d2cf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d2cf2 je 0x112d2d05 */
  if (C.zf) goto L_112d2d05;
  /* 112d2cf4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2cf8 jne 0x112d2d05 */
  if (!C.zf) goto L_112d2d05;
  /* 112d2cfa mov eax, dword ptr [0x112eee20] */
  EAX = (r32((uint32_t)(0x112eee20)));
  /* 112d2cff mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 112d2d03 jmp 0x112d2d0e */
  goto L_112d2d0e;
L_112d2d05:;
  /* 112d2d05 mov ecx, dword ptr [0x112eee20] */
  ECX = (r32((uint32_t)(0x112eee20)));
  /* 112d2d0b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_112d2d0e:;
  /* 112d2d0e jmp 0x112d2f37 */
  goto L_112d2f37;
L_112d2d13:;
  /* 112d2d13 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2d16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112d2d19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d2d1b je 0x112d2d3d */
  if (C.zf) goto L_112d2d3d;
  /* 112d2d1d cmp dword ptr [0x112ef88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2d24 je 0x112d2d4c */
  if (C.zf) goto L_112d2d4c;
  /* 112d2d26 mov ecx, dword ptr [0x112ef88c] */
  ECX = (r32((uint32_t)(0x112ef88c)));
  /* 112d2d2c push ecx */
  push32((uint32_t)(ECX));
  /* 112d2d2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2d30 push edx */
  push32((uint32_t)(EDX));
  /* 112d2d31 call 0x112cfcc0 */
  push32(0x112d2d36u); f_112cfcc0();
  /* 112d2d36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2d39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d2d3b jne 0x112d2d4c */
  if (!C.zf) goto L_112d2d4c;
L_112d2d3d:;
  /* 112d2d3d push 0xc */
  push32((uint32_t)(0xcu));
  /* 112d2d3f call 0x112c7ad0 */
  push32(0x112d2d44u); f_112c7ad0();
  /* 112d2d44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2d47 jmp 0x112d2f37 */
  goto L_112d2f37;
L_112d2d4c:;
  /* 112d2d4c push 2 */
  push32((uint32_t)(0x2u));
  /* 112d2d4e mov eax, dword ptr [0x112ef88c] */
  EAX = (r32((uint32_t)(0x112ef88c)));
  /* 112d2d53 push eax */
  push32((uint32_t)(EAX));
  /* 112d2d54 call 0x112c4ac0 */
  push32(0x112d2d59u); f_112c4ac0();
  /* 112d2d59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2d5c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 112d2d61 push 0x112eb9b8 */
  push32((uint32_t)(0x112eb9b8u));
  /* 112d2d66 push 2 */
  push32((uint32_t)(0x2u));
  /* 112d2d68 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2d6b push ecx */
  push32((uint32_t)(ECX));
  /* 112d2d6c call 0x112c6e60 */
  push32(0x112d2d71u); f_112c6e60();
  /* 112d2d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2d74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2d77 push eax */
  push32((uint32_t)(EAX));
  /* 112d2d78 call 0x112c4030 */
  push32(0x112d2d7du); f_112c4030();
  /* 112d2d7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2d80 mov dword ptr [0x112ef88c], eax */
  w32((uint32_t)(0x112ef88c), (EAX));
  /* 112d2d85 cmp dword ptr [0x112ef88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2d8c jne 0x112d2d9d */
  if (!C.zf) goto L_112d2d9d;
  /* 112d2d8e push 0xc */
  push32((uint32_t)(0xcu));
  /* 112d2d90 call 0x112c7ad0 */
  push32(0x112d2d95u); f_112c7ad0();
  /* 112d2d95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2d98 jmp 0x112d2f37 */
  goto L_112d2f37;
L_112d2d9d:;
  /* 112d2d9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2da0 push edx */
  push32((uint32_t)(EDX));
  /* 112d2da1 mov eax, dword ptr [0x112ef88c] */
  EAX = (r32((uint32_t)(0x112ef88c)));
  /* 112d2da6 push eax */
  push32((uint32_t)(EAX));
  /* 112d2da7 call 0x112c6fe0 */
  push32(0x112d2dacu); f_112c6fe0();
  /* 112d2dac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2daf push 0xc */
  push32((uint32_t)(0xcu));
  /* 112d2db1 call 0x112c7ad0 */
  push32(0x112d2db6u); f_112c7ad0();
  /* 112d2db6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2db9 push 3 */
  push32((uint32_t)(0x3u));
  /* 112d2dbb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2dbe push ecx */
  push32((uint32_t)(ECX));
  /* 112d2dbf mov edx, dword ptr [0x112eee1c] */
  EDX = (r32((uint32_t)(0x112eee1c)));
  /* 112d2dc5 push edx */
  push32((uint32_t)(EDX));
  /* 112d2dc6 call 0x112c7850 */
  push32(0x112d2dcbu); f_112c7850();
  /* 112d2dcb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2dce mov eax, dword ptr [0x112eee1c] */
  EAX = (r32((uint32_t)(0x112eee1c)));
  /* 112d2dd3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 112d2dd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2dda add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2ddd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112d2de0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2de3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112d2de6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2de9 jne 0x112d2dfd */
  if (!C.zf) goto L_112d2dfd;
  /* 112d2deb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d2dee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2df1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112d2df4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2df7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2dfa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_112d2dfd:;
  /* 112d2dfd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2e00 push eax */
  push32((uint32_t)(EAX));
  /* 112d2e01 call 0x112d28e0 */
  push32(0x112d2e06u); f_112d28e0();
  /* 112d2e06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2e09 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d2e0f mov dword ptr [0x112eed90], eax */
  w32((uint32_t)(0x112eed90), (EAX));
L_112d2e14:;
  /* 112d2e14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2e17 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112d2e1a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2e1d je 0x112d2e35 */
  if (C.zf) goto L_112d2e35;
  /* 112d2e1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2e22 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112d2e25 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2e28 jl 0x112d2e40 */
  if ((C.sf!=C.of)) goto L_112d2e40;
  /* 112d2e2a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2e2d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112d2e30 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2e33 jg 0x112d2e40 */
  if ((!C.zf&&C.sf==C.of)) goto L_112d2e40;
L_112d2e35:;
  /* 112d2e35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2e38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2e3b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112d2e3e jmp 0x112d2e14 */
  goto L_112d2e14;
L_112d2e40:;
  /* 112d2e40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2e43 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112d2e46 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2e49 jne 0x112d2ee5 */
  if (!C.zf) goto L_112d2ee5;
  /* 112d2e4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2e52 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2e55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112d2e58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2e5b push edx */
  push32((uint32_t)(EDX));
  /* 112d2e5c call 0x112d28e0 */
  push32(0x112d2e61u); f_112d28e0();
  /* 112d2e61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2e64 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d2e67 mov ecx, dword ptr [0x112eed90] */
  ECX = (r32((uint32_t)(0x112eed90)));
  /* 112d2e6d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2e6f mov dword ptr [0x112eed90], ecx */
  w32((uint32_t)(0x112eed90), (ECX));
L_112d2e75:;
  /* 112d2e75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2e78 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112d2e7b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2e7e jl 0x112d2e96 */
  if ((C.sf!=C.of)) goto L_112d2e96;
  /* 112d2e80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2e83 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112d2e86 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2e89 jg 0x112d2e96 */
  if ((!C.zf&&C.sf==C.of)) goto L_112d2e96;
  /* 112d2e8b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2e8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2e91 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112d2e94 jmp 0x112d2e75 */
  goto L_112d2e75;
L_112d2e96:;
  /* 112d2e96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2e99 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112d2e9c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2e9f jne 0x112d2ee5 */
  if (!C.zf) goto L_112d2ee5;
  /* 112d2ea1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2ea4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2ea7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112d2eaa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2ead push ecx */
  push32((uint32_t)(ECX));
  /* 112d2eae call 0x112d28e0 */
  push32(0x112d2eb3u); f_112d28e0();
  /* 112d2eb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2eb6 mov edx, dword ptr [0x112eed90] */
  EDX = (r32((uint32_t)(0x112eed90)));
  /* 112d2ebc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2ebe mov dword ptr [0x112eed90], edx */
  w32((uint32_t)(0x112eed90), (EDX));
L_112d2ec4:;
  /* 112d2ec4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2ec7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112d2eca cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2ecd jl 0x112d2ee5 */
  if ((C.sf!=C.of)) goto L_112d2ee5;
  /* 112d2ecf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2ed2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112d2ed5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2ed8 jg 0x112d2ee5 */
  if ((!C.zf&&C.sf==C.of)) goto L_112d2ee5;
  /* 112d2eda mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2edd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2ee0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112d2ee3 jmp 0x112d2ec4 */
  goto L_112d2ec4;
L_112d2ee5:;
  /* 112d2ee5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2ee9 je 0x112d2ef9 */
  if (C.zf) goto L_112d2ef9;
  /* 112d2eeb mov edx, dword ptr [0x112eed90] */
  EDX = (r32((uint32_t)(0x112eed90)));
  /* 112d2ef1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 112d2ef3 mov dword ptr [0x112eed90], edx */
  w32((uint32_t)(0x112eed90), (EDX));
L_112d2ef9:;
  /* 112d2ef9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2efc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112d2eff mov dword ptr [0x112eed94], ecx */
  w32((uint32_t)(0x112eed94), (ECX));
  /* 112d2f05 cmp dword ptr [0x112eed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112eed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2f0c je 0x112d2f2e */
  if (C.zf) goto L_112d2f2e;
  /* 112d2f0e push 3 */
  push32((uint32_t)(0x3u));
  /* 112d2f10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d2f13 push edx */
  push32((uint32_t)(EDX));
  /* 112d2f14 mov eax, dword ptr [0x112eee20] */
  EAX = (r32((uint32_t)(0x112eee20)));
  /* 112d2f19 push eax */
  push32((uint32_t)(EAX));
  /* 112d2f1a call 0x112c7850 */
  push32(0x112d2f1fu); f_112c7850();
  /* 112d2f1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2f22 mov ecx, dword ptr [0x112eee20] */
  ECX = (r32((uint32_t)(0x112eee20)));
  /* 112d2f28 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 112d2f2c jmp 0x112d2f37 */
  goto L_112d2f37;
L_112d2f2e:;
  /* 112d2f2e mov edx, dword ptr [0x112eee20] */
  EDX = (r32((uint32_t)(0x112eee20)));
  /* 112d2f34 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_112d2f37:;
  /* 112d2f37 mov esp, ebp */
  ESP = (EBP);
  /* 112d2f39 pop ebp */
  EBP = (pop32());
  /* 112d2f3a ret  */
  ESPCHK(0x112d2b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f40 @ 0x112d2f40 (46 bytes, 18 insns) */
void f_112d2f40(void) {
  FTRACE(0x112d2f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d2f40 push ebp */
  push32((uint32_t)(EBP));
  /* 112d2f41 mov ebp, esp */
  EBP = (ESP);
  /* 112d2f43 push ecx */
  push32((uint32_t)(ECX));
  /* 112d2f44 push 0xb */
  push32((uint32_t)(0xbu));
  /* 112d2f46 call 0x112c7a30 */
  push32(0x112d2f4bu); f_112c7a30();
  /* 112d2f4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2f4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2f51 push eax */
  push32((uint32_t)(EAX));
  /* 112d2f52 call 0x112d2f70 */
  push32(0x112d2f57u); f_112d2f70();
  /* 112d2f57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2f5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112d2f5d push 0xb */
  push32((uint32_t)(0xbu));
  /* 112d2f5f call 0x112c7ad0 */
  push32(0x112d2f64u); f_112c7ad0();
  /* 112d2f64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d2f67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d2f6a mov esp, ebp */
  ESP = (EBP);
  /* 112d2f6c pop ebp */
  EBP = (pop32());
  /* 112d2f6d ret  */
  ESPCHK(0x112d2f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f70 @ 0x112d2f70 (762 bytes, 246 insns) */
void f_112d2f70(void) {
  FTRACE(0x112d2f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d2f70 push ebp */
  push32((uint32_t)(EBP));
  /* 112d2f71 mov ebp, esp */
  EBP = (ESP);
  /* 112d2f73 push ecx */
  push32((uint32_t)(ECX));
  /* 112d2f74 cmp dword ptr [0x112eed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112eed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2f7b jne 0x112d2f84 */
  if (!C.zf) goto L_112d2f84;
  /* 112d2f7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d2f7f jmp 0x112d3266 */
  goto L_112d3266;
L_112d2f84:;
  /* 112d2f84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2f87 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 112d2f8a cmp ecx, dword ptr [0x112eee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112eee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2f90 jne 0x112d2fa4 */
  if (!C.zf) goto L_112d2fa4;
  /* 112d2f92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d2f95 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112d2f98 cmp eax, dword ptr [0x112eee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112eee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2f9e je 0x112d316b */
  if (C.zf) goto L_112d316b;
L_112d2fa4:;
  /* 112d2fa4 cmp dword ptr [0x112ef7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d2fab je 0x112d3125 */
  if (C.zf) goto L_112d3125;
  /* 112d2fb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d2fb3 mov cx, word ptr [0x112ef878] */
  CX = (r16((uint32_t)(0x112ef878)));
  /* 112d2fba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112d2fbc jne 0x112d3019 */
  if (!C.zf) goto L_112d3019;
  /* 112d2fbe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d2fc0 mov dx, word ptr [0x112ef886] */
  DX = (r16((uint32_t)(0x112ef886)));
  /* 112d2fc7 push edx */
  push32((uint32_t)(EDX));
  /* 112d2fc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d2fca mov ax, word ptr [0x112ef884] */
  AX = (r16((uint32_t)(0x112ef884)));
  /* 112d2fd0 push eax */
  push32((uint32_t)(EAX));
  /* 112d2fd1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d2fd3 mov cx, word ptr [0x112ef882] */
  CX = (r16((uint32_t)(0x112ef882)));
  /* 112d2fda push ecx */
  push32((uint32_t)(ECX));
  /* 112d2fdb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d2fdd mov dx, word ptr [0x112ef880] */
  DX = (r16((uint32_t)(0x112ef880)));
  /* 112d2fe4 push edx */
  push32((uint32_t)(EDX));
  /* 112d2fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d2fe7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d2fe9 mov ax, word ptr [0x112ef87c] */
  AX = (r16((uint32_t)(0x112ef87c)));
  /* 112d2fef push eax */
  push32((uint32_t)(EAX));
  /* 112d2ff0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d2ff2 mov cx, word ptr [0x112ef87e] */
  CX = (r16((uint32_t)(0x112ef87e)));
  /* 112d2ff9 push ecx */
  push32((uint32_t)(ECX));
  /* 112d2ffa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d2ffc mov dx, word ptr [0x112ef87a] */
  DX = (r16((uint32_t)(0x112ef87a)));
  /* 112d3003 push edx */
  push32((uint32_t)(EDX));
  /* 112d3004 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d3007 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 112d300a push ecx */
  push32((uint32_t)(ECX));
  /* 112d300b push 1 */
  push32((uint32_t)(0x1u));
  /* 112d300d push 1 */
  push32((uint32_t)(0x1u));
  /* 112d300f call 0x112d3270 */
  push32(0x112d3014u); f_112d3270();
  /* 112d3014 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3017 jmp 0x112d306a */
  goto L_112d306a;
L_112d3019:;
  /* 112d3019 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d301b mov dx, word ptr [0x112ef886] */
  DX = (r16((uint32_t)(0x112ef886)));
  /* 112d3022 push edx */
  push32((uint32_t)(EDX));
  /* 112d3023 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3025 mov ax, word ptr [0x112ef884] */
  AX = (r16((uint32_t)(0x112ef884)));
  /* 112d302b push eax */
  push32((uint32_t)(EAX));
  /* 112d302c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d302e mov cx, word ptr [0x112ef882] */
  CX = (r16((uint32_t)(0x112ef882)));
  /* 112d3035 push ecx */
  push32((uint32_t)(ECX));
  /* 112d3036 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d3038 mov dx, word ptr [0x112ef880] */
  DX = (r16((uint32_t)(0x112ef880)));
  /* 112d303f push edx */
  push32((uint32_t)(EDX));
  /* 112d3040 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3042 mov ax, word ptr [0x112ef87e] */
  AX = (r16((uint32_t)(0x112ef87e)));
  /* 112d3048 push eax */
  push32((uint32_t)(EAX));
  /* 112d3049 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d304b push 0 */
  push32((uint32_t)(0x0u));
  /* 112d304d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d304f mov cx, word ptr [0x112ef87a] */
  CX = (r16((uint32_t)(0x112ef87a)));
  /* 112d3056 push ecx */
  push32((uint32_t)(ECX));
  /* 112d3057 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d305a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112d305d push eax */
  push32((uint32_t)(EAX));
  /* 112d305e push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3060 push 1 */
  push32((uint32_t)(0x1u));
  /* 112d3062 call 0x112d3270 */
  push32(0x112d3067u); f_112d3270();
  /* 112d3067 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112d306a:;
  /* 112d306a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d306c mov cx, word ptr [0x112ef824] */
  CX = (r16((uint32_t)(0x112ef824)));
  /* 112d3073 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112d3075 jne 0x112d30d2 */
  if (!C.zf) goto L_112d30d2;
  /* 112d3077 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d3079 mov dx, word ptr [0x112ef832] */
  DX = (r16((uint32_t)(0x112ef832)));
  /* 112d3080 push edx */
  push32((uint32_t)(EDX));
  /* 112d3081 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3083 mov ax, word ptr [0x112ef830] */
  AX = (r16((uint32_t)(0x112ef830)));
  /* 112d3089 push eax */
  push32((uint32_t)(EAX));
  /* 112d308a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d308c mov cx, word ptr [0x112ef82e] */
  CX = (r16((uint32_t)(0x112ef82e)));
  /* 112d3093 push ecx */
  push32((uint32_t)(ECX));
  /* 112d3094 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d3096 mov dx, word ptr [0x112ef82c] */
  DX = (r16((uint32_t)(0x112ef82c)));
  /* 112d309d push edx */
  push32((uint32_t)(EDX));
  /* 112d309e push 0 */
  push32((uint32_t)(0x0u));
  /* 112d30a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d30a2 mov ax, word ptr [0x112ef828] */
  AX = (r16((uint32_t)(0x112ef828)));
  /* 112d30a8 push eax */
  push32((uint32_t)(EAX));
  /* 112d30a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d30ab mov cx, word ptr [0x112ef82a] */
  CX = (r16((uint32_t)(0x112ef82a)));
  /* 112d30b2 push ecx */
  push32((uint32_t)(ECX));
  /* 112d30b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d30b5 mov dx, word ptr [0x112ef826] */
  DX = (r16((uint32_t)(0x112ef826)));
  /* 112d30bc push edx */
  push32((uint32_t)(EDX));
  /* 112d30bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d30c0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 112d30c3 push ecx */
  push32((uint32_t)(ECX));
  /* 112d30c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 112d30c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d30c8 call 0x112d3270 */
  push32(0x112d30cdu); f_112d3270();
  /* 112d30cd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d30d0 jmp 0x112d3123 */
  goto L_112d3123;
L_112d30d2:;
  /* 112d30d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d30d4 mov dx, word ptr [0x112ef832] */
  DX = (r16((uint32_t)(0x112ef832)));
  /* 112d30db push edx */
  push32((uint32_t)(EDX));
  /* 112d30dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d30de mov ax, word ptr [0x112ef830] */
  AX = (r16((uint32_t)(0x112ef830)));
  /* 112d30e4 push eax */
  push32((uint32_t)(EAX));
  /* 112d30e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d30e7 mov cx, word ptr [0x112ef82e] */
  CX = (r16((uint32_t)(0x112ef82e)));
  /* 112d30ee push ecx */
  push32((uint32_t)(ECX));
  /* 112d30ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d30f1 mov dx, word ptr [0x112ef82c] */
  DX = (r16((uint32_t)(0x112ef82c)));
  /* 112d30f8 push edx */
  push32((uint32_t)(EDX));
  /* 112d30f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d30fb mov ax, word ptr [0x112ef82a] */
  AX = (r16((uint32_t)(0x112ef82a)));
  /* 112d3101 push eax */
  push32((uint32_t)(EAX));
  /* 112d3102 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3104 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3106 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d3108 mov cx, word ptr [0x112ef826] */
  CX = (r16((uint32_t)(0x112ef826)));
  /* 112d310f push ecx */
  push32((uint32_t)(ECX));
  /* 112d3110 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d3113 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112d3116 push eax */
  push32((uint32_t)(EAX));
  /* 112d3117 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3119 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d311b call 0x112d3270 */
  push32(0x112d3120u); f_112d3270();
  /* 112d3120 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112d3123:;
  /* 112d3123 jmp 0x112d316b */
  goto L_112d316b;
L_112d3125:;
  /* 112d3125 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3127 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3129 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d312b push 2 */
  push32((uint32_t)(0x2u));
  /* 112d312d push 0 */
  push32((uint32_t)(0x0u));
  /* 112d312f push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3131 push 1 */
  push32((uint32_t)(0x1u));
  /* 112d3133 push 4 */
  push32((uint32_t)(0x4u));
  /* 112d3135 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d3138 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 112d313b push edx */
  push32((uint32_t)(EDX));
  /* 112d313c push 1 */
  push32((uint32_t)(0x1u));
  /* 112d313e push 1 */
  push32((uint32_t)(0x1u));
  /* 112d3140 call 0x112d3270 */
  push32(0x112d3145u); f_112d3270();
  /* 112d3145 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3148 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d314a push 0 */
  push32((uint32_t)(0x0u));
  /* 112d314c push 0 */
  push32((uint32_t)(0x0u));
  /* 112d314e push 2 */
  push32((uint32_t)(0x2u));
  /* 112d3150 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3152 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3154 push 5 */
  push32((uint32_t)(0x5u));
  /* 112d3156 push 0xa */
  push32((uint32_t)(0xau));
  /* 112d3158 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d315b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 112d315e push ecx */
  push32((uint32_t)(ECX));
  /* 112d315f push 1 */
  push32((uint32_t)(0x1u));
  /* 112d3161 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3163 call 0x112d3270 */
  push32(0x112d3168u); f_112d3270();
  /* 112d3168 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112d316b:;
  /* 112d316b mov edx, dword ptr [0x112eee2c] */
  EDX = (r32((uint32_t)(0x112eee2c)));
  /* 112d3171 cmp edx, dword ptr [0x112eee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x112eee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3177 jge 0x112d31c4 */
  if ((C.sf==C.of)) goto L_112d31c4;
  /* 112d3179 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d317c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 112d317f cmp ecx, dword ptr [0x112eee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112eee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3185 jl 0x112d3195 */
  if ((C.sf!=C.of)) goto L_112d3195;
  /* 112d3187 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d318a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 112d318d cmp eax, dword ptr [0x112eee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112eee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3193 jle 0x112d319c */
  if ((C.zf||C.sf!=C.of)) goto L_112d319c;
L_112d3195:;
  /* 112d3195 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3197 jmp 0x112d3266 */
  goto L_112d3266;
L_112d319c:;
  /* 112d319c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d319f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 112d31a2 cmp edx, dword ptr [0x112eee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x112eee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d31a8 jle 0x112d31c2 */
  if ((C.zf||C.sf!=C.of)) goto L_112d31c2;
  /* 112d31aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d31ad mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 112d31b0 cmp ecx, dword ptr [0x112eee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112eee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d31b6 jge 0x112d31c2 */
  if ((C.sf==C.of)) goto L_112d31c2;
  /* 112d31b8 mov eax, 1 */
  EAX = (0x1u);
  /* 112d31bd jmp 0x112d3266 */
  goto L_112d3266;
L_112d31c2:;
  /* 112d31c2 jmp 0x112d3207 */
  goto L_112d3207;
L_112d31c4:;
  /* 112d31c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d31c7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 112d31ca cmp eax, dword ptr [0x112eee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112eee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d31d0 jl 0x112d31e0 */
  if ((C.sf!=C.of)) goto L_112d31e0;
  /* 112d31d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d31d5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 112d31d8 cmp edx, dword ptr [0x112eee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x112eee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d31de jle 0x112d31e7 */
  if ((C.zf||C.sf!=C.of)) goto L_112d31e7;
L_112d31e0:;
  /* 112d31e0 mov eax, 1 */
  EAX = (0x1u);
  /* 112d31e5 jmp 0x112d3266 */
  goto L_112d3266;
L_112d31e7:;
  /* 112d31e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d31ea mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 112d31ed cmp ecx, dword ptr [0x112eee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112eee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d31f3 jle 0x112d3207 */
  if ((C.zf||C.sf!=C.of)) goto L_112d3207;
  /* 112d31f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d31f8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 112d31fb cmp eax, dword ptr [0x112eee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112eee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3201 jge 0x112d3207 */
  if ((C.sf==C.of)) goto L_112d3207;
  /* 112d3203 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3205 jmp 0x112d3266 */
  goto L_112d3266;
L_112d3207:;
  /* 112d3207 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d320a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112d320d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d3210 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d3213 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112d3215 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3217 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d321a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112d321d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d3223 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3225 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d322b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112d322e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d3231 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 112d3234 cmp edx, dword ptr [0x112eee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x112eee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d323a jne 0x112d3252 */
  if (!C.zf) goto L_112d3252;
  /* 112d323c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d323f cmp eax, dword ptr [0x112eee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112eee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3245 jl 0x112d324e */
  if ((C.sf!=C.of)) goto L_112d324e;
  /* 112d3247 mov eax, 1 */
  EAX = (0x1u);
  /* 112d324c jmp 0x112d3266 */
  goto L_112d3266;
L_112d324e:;
  /* 112d324e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3250 jmp 0x112d3266 */
  goto L_112d3266;
L_112d3252:;
  /* 112d3252 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d3255 cmp ecx, dword ptr [0x112eee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112eee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d325b jge 0x112d3264 */
  if ((C.sf==C.of)) goto L_112d3264;
  /* 112d325d mov eax, 1 */
  EAX = (0x1u);
  /* 112d3262 jmp 0x112d3266 */
  goto L_112d3266;
L_112d3264:;
  /* 112d3264 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112d3266:;
  /* 112d3266 mov esp, ebp */
  ESP = (EBP);
  /* 112d3268 pop ebp */
  EBP = (pop32());
  /* 112d3269 ret  */
  ESPCHK(0x112d2f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013270 @ 0x112d3270 (504 bytes, 145 insns) */
void f_112d3270(void) {
  FTRACE(0x112d3270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d3270 push ebp */
  push32((uint32_t)(EBP));
  /* 112d3271 mov ebp, esp */
  EBP = (ESP);
  /* 112d3273 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d3276 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d327a jne 0x112d334c */
  if (!C.zf) goto L_112d334c;
  /* 112d3280 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d3283 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 112d3286 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d3288 jne 0x112d3299 */
  if (!C.zf) goto L_112d3299;
  /* 112d328a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d328d mov edx, dword ptr [ecx*4 + 0x112eee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x112eee4c)));
  /* 112d3294 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112d3297 jmp 0x112d32a6 */
  goto L_112d32a6;
L_112d3299:;
  /* 112d3299 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d329c mov ecx, dword ptr [eax*4 + 0x112eee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x112eee80)));
  /* 112d32a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_112d32a6:;
  /* 112d32a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d32a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d32ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112d32af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d32b2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d32b5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d32bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d32be add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d32c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d32c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d32c6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 112d32c9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 112d32cd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112d32ce mov ecx, 7 */
  ECX = (0x7u);
  /* 112d32d3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112d32d5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112d32d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d32db cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d32de jge 0x112d32f9 */
  if ((C.sf==C.of)) goto L_112d32f9;
  /* 112d32e0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112d32e3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d32e6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d32e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d32ec imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d32ef add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d32f2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d32f4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112d32f7 jmp 0x112d330d */
  goto L_112d330d;
L_112d32f9:;
  /* 112d32f9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112d32fc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d32ff mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d3302 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d3305 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3308 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d330a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112d330d:;
  /* 112d330d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3311 jne 0x112d334a */
  if (!C.zf) goto L_112d334a;
  /* 112d3313 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d3316 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 112d3319 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112d331b jne 0x112d332c */
  if (!C.zf) goto L_112d332c;
  /* 112d331d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d3320 mov eax, dword ptr [edx*4 + 0x112eee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x112eee50)));
  /* 112d3327 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112d332a jmp 0x112d3339 */
  goto L_112d3339;
L_112d332c:;
  /* 112d332c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d332f mov edx, dword ptr [ecx*4 + 0x112eee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x112eee84)));
  /* 112d3336 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_112d3339:;
  /* 112d3339 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d333c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d333f jle 0x112d334a */
  if ((C.zf||C.sf!=C.of)) goto L_112d334a;
  /* 112d3341 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d3344 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d3347 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_112d334a:;
  /* 112d334a jmp 0x112d3381 */
  goto L_112d3381;
L_112d334c:;
  /* 112d334c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d334f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 112d3352 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d3354 jne 0x112d3365 */
  if (!C.zf) goto L_112d3365;
  /* 112d3356 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d3359 mov ecx, dword ptr [eax*4 + 0x112eee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x112eee4c)));
  /* 112d3360 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 112d3363 jmp 0x112d3372 */
  goto L_112d3372;
L_112d3365:;
  /* 112d3365 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d3368 mov eax, dword ptr [edx*4 + 0x112eee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x112eee80)));
  /* 112d336f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_112d3372:;
  /* 112d3372 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d3375 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112d3378 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d337b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d337e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_112d3381:;
  /* 112d3381 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3385 jne 0x112d33c1 */
  if (!C.zf) goto L_112d33c1;
  /* 112d3387 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d338a mov dword ptr [0x112eee2c], eax */
  w32((uint32_t)(0x112eee2c), (EAX));
  /* 112d338f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 112d3392 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d3395 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 112d3398 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d339a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d339d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 112d33a0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d33a2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d33a8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 112d33ab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d33ad mov dword ptr [0x112eee30], ecx */
  w32((uint32_t)(0x112eee30), (ECX));
  /* 112d33b3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d33b6 mov dword ptr [0x112eee28], edx */
  w32((uint32_t)(0x112eee28), (EDX));
  /* 112d33bc jmp 0x112d3464 */
  goto L_112d3464;
L_112d33c1:;
  /* 112d33c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d33c4 mov dword ptr [0x112eee3c], eax */
  w32((uint32_t)(0x112eee3c), (EAX));
  /* 112d33c9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 112d33cc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d33cf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 112d33d2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d33d4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d33d7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 112d33da add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d33dc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d33e2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 112d33e5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d33e7 mov dword ptr [0x112eee40], ecx */
  w32((uint32_t)(0x112eee40), (ECX));
  /* 112d33ed mov edx, dword ptr [0x112eed98] */
  EDX = (r32((uint32_t)(0x112eed98)));
  /* 112d33f3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112d33f9 mov eax, dword ptr [0x112eee40] */
  EAX = (r32((uint32_t)(0x112eee40)));
  /* 112d33fe add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3400 mov dword ptr [0x112eee40], eax */
  w32((uint32_t)(0x112eee40), (EAX));
  /* 112d3405 cmp dword ptr [0x112eee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112eee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d340c jge 0x112d3431 */
  if ((C.sf==C.of)) goto L_112d3431;
  /* 112d340e mov ecx, dword ptr [0x112eee40] */
  ECX = (r32((uint32_t)(0x112eee40)));
  /* 112d3414 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d341a mov dword ptr [0x112eee40], ecx */
  w32((uint32_t)(0x112eee40), (ECX));
  /* 112d3420 mov edx, dword ptr [0x112eee3c] */
  EDX = (r32((uint32_t)(0x112eee3c)));
  /* 112d3426 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d3429 mov dword ptr [0x112eee3c], edx */
  w32((uint32_t)(0x112eee3c), (EDX));
  /* 112d342f jmp 0x112d345b */
  goto L_112d345b;
L_112d3431:;
  /* 112d3431 cmp dword ptr [0x112eee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x112eee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d343b jl 0x112d345b */
  if ((C.sf!=C.of)) goto L_112d345b;
  /* 112d343d mov eax, dword ptr [0x112eee40] */
  EAX = (r32((uint32_t)(0x112eee40)));
  /* 112d3442 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d3447 mov dword ptr [0x112eee40], eax */
  w32((uint32_t)(0x112eee40), (EAX));
  /* 112d344c mov ecx, dword ptr [0x112eee3c] */
  ECX = (r32((uint32_t)(0x112eee3c)));
  /* 112d3452 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3455 mov dword ptr [0x112eee3c], ecx */
  w32((uint32_t)(0x112eee3c), (ECX));
L_112d345b:;
  /* 112d345b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d345e mov dword ptr [0x112eee38], edx */
  w32((uint32_t)(0x112eee38), (EDX));
L_112d3464:;
  /* 112d3464 mov esp, ebp */
  ESP = (EBP);
  /* 112d3466 pop ebp */
  EBP = (pop32());
  /* 112d3467 ret  */
  ESPCHK(0x112d3270u, _esp0);
  ESP += 4; return;
}

/* FUN_10013470 @ 0x112d3470 (382 bytes, 135 insns) */
void f_112d3470(void) {
  FTRACE(0x112d3470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d3470 push ebp */
  push32((uint32_t)(EBP));
  /* 112d3471 mov ebp, esp */
  EBP = (ESP);
  /* 112d3473 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112d3475 push 0x112eb9c8 */
  push32((uint32_t)(0x112eb9c8u));
  /* 112d347a push 0x112cd138 */
  push32((uint32_t)(0x112cd138u));
  /* 112d347f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 112d3485 push eax */
  push32((uint32_t)(EAX));
  /* 112d3486 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 112d348d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3490 push ebx */
  push32((uint32_t)(EBX));
  /* 112d3491 push esi */
  push32((uint32_t)(ESI));
  /* 112d3492 push edi */
  push32((uint32_t)(EDI));
  /* 112d3493 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112d3496 cmp dword ptr [0x112ef894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d349d jne 0x112d34e2 */
  if (!C.zf) goto L_112d34e2;
  /* 112d349f push 0 */
  push32((uint32_t)(0x0u));
  /* 112d34a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d34a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 112d34a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d34a7 call dword ptr [0x112f22c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22c0))), 0x112d34adu);
  /* 112d34ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d34af je 0x112d34bd */
  if (C.zf) goto L_112d34bd;
  /* 112d34b1 mov dword ptr [0x112ef894], 1 */
  w32((uint32_t)(0x112ef894), (0x1u));
  /* 112d34bb jmp 0x112d34e2 */
  goto L_112d34e2;
L_112d34bd:;
  /* 112d34bd push 0 */
  push32((uint32_t)(0x0u));
  /* 112d34bf push 0 */
  push32((uint32_t)(0x0u));
  /* 112d34c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 112d34c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d34c5 call dword ptr [0x112f22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22d8))), 0x112d34cbu);
  /* 112d34cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d34cd je 0x112d34db */
  if (C.zf) goto L_112d34db;
  /* 112d34cf mov dword ptr [0x112ef894], 2 */
  w32((uint32_t)(0x112ef894), (0x2u));
  /* 112d34d9 jmp 0x112d34e2 */
  goto L_112d34e2;
L_112d34db:;
  /* 112d34db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d34dd jmp 0x112d35f1 */
  goto L_112d35f1;
L_112d34e2:;
  /* 112d34e2 cmp dword ptr [0x112ef894], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112ef894))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d34e9 jne 0x112d3506 */
  if (!C.zf) goto L_112d3506;
  /* 112d34eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d34ee push eax */
  push32((uint32_t)(EAX));
  /* 112d34ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d34f2 push ecx */
  push32((uint32_t)(ECX));
  /* 112d34f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d34f6 push edx */
  push32((uint32_t)(EDX));
  /* 112d34f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d34fa push eax */
  push32((uint32_t)(EAX));
  /* 112d34fb call dword ptr [0x112f22c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22c0))), 0x112d3501u);
  /* 112d3501 jmp 0x112d35f1 */
  goto L_112d35f1;
L_112d3506:;
  /* 112d3506 cmp dword ptr [0x112ef894], 2 */
  { uint32_t _a=(r32((uint32_t)(0x112ef894))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d350d jne 0x112d35ef */
  if (!C.zf) goto L_112d35ef;
  /* 112d3513 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3517 jne 0x112d3522 */
  if (!C.zf) goto L_112d3522;
  /* 112d3519 mov ecx, dword ptr [0x112ef748] */
  ECX = (r32((uint32_t)(0x112ef748)));
  /* 112d351f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_112d3522:;
  /* 112d3522 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3524 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3526 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d3529 push edx */
  push32((uint32_t)(EDX));
  /* 112d352a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d352d push eax */
  push32((uint32_t)(EAX));
  /* 112d352e call dword ptr [0x112f22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22d8))), 0x112d3534u);
  /* 112d3534 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 112d3537 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d353b jne 0x112d3544 */
  if (!C.zf) goto L_112d3544;
  /* 112d353d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d353f jmp 0x112d35f1 */
  goto L_112d35f1;
L_112d3544:;
  /* 112d3544 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112d354b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112d354e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3551 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 112d3553 call 0x112c71d0 */
  push32(0x112d3558u); f_112c71d0();
  /* 112d3558 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 112d355b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112d355e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112d3561 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 112d3564 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 112d356b jmp 0x112d3584 */
  goto L_112d3584;
  /* 112d356d mov eax, 1 */
  EAX = (0x1u);
  /* 112d3572 ret  */
  ESPCHK(0x112d3470u, _esp0);
  ESP += 4; return;
  /* 112d3573 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 112d3576 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 112d357d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_112d3584:;
  /* 112d3584 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3588 jne 0x112d358e */
  if (!C.zf) goto L_112d358e;
  /* 112d358a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d358c jmp 0x112d35f1 */
  goto L_112d35f1;
L_112d358e:;
  /* 112d358e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112d3591 push edx */
  push32((uint32_t)(EDX));
  /* 112d3592 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112d3595 push eax */
  push32((uint32_t)(EAX));
  /* 112d3596 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d3599 push ecx */
  push32((uint32_t)(ECX));
  /* 112d359a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d359d push edx */
  push32((uint32_t)(EDX));
  /* 112d359e call dword ptr [0x112f22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22d8))), 0x112d35a4u);
  /* 112d35a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d35a6 jne 0x112d35ac */
  if (!C.zf) goto L_112d35ac;
  /* 112d35a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d35aa jmp 0x112d35f1 */
  goto L_112d35f1;
L_112d35ac:;
  /* 112d35ac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d35b0 jne 0x112d35cd */
  if (!C.zf) goto L_112d35cd;
  /* 112d35b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d35b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d35b6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112d35b8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112d35bb push eax */
  push32((uint32_t)(EAX));
  /* 112d35bc push 1 */
  push32((uint32_t)(0x1u));
  /* 112d35be mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d35c1 push ecx */
  push32((uint32_t)(ECX));
  /* 112d35c2 call dword ptr [0x112f2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2308))), 0x112d35c8u);
  /* 112d35c8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 112d35cb jmp 0x112d35ea */
  goto L_112d35ea;
L_112d35cd:;
  /* 112d35cd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d35d0 push edx */
  push32((uint32_t)(EDX));
  /* 112d35d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d35d4 push eax */
  push32((uint32_t)(EAX));
  /* 112d35d5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112d35d7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112d35da push ecx */
  push32((uint32_t)(ECX));
  /* 112d35db push 1 */
  push32((uint32_t)(0x1u));
  /* 112d35dd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d35e0 push edx */
  push32((uint32_t)(EDX));
  /* 112d35e1 call dword ptr [0x112f2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2308))), 0x112d35e7u);
  /* 112d35e7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_112d35ea:;
  /* 112d35ea mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112d35ed jmp 0x112d35f1 */
  goto L_112d35f1;
L_112d35ef:;
  /* 112d35ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112d35f1:;
  /* 112d35f1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 112d35f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d35f7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 112d35fe pop edi */
  EDI = (pop32());
  /* 112d35ff pop esi */
  ESI = (pop32());
  /* 112d3600 pop ebx */
  EBX = (pop32());
  /* 112d3601 mov esp, ebp */
  ESP = (EBP);
  /* 112d3603 pop ebp */
  EBP = (pop32());
  /* 112d3604 ret  */
  ESPCHK(0x112d3470u, _esp0);
  ESP += 4; return;
}

/* FUN_10013610 @ 0x112d3610 (398 bytes, 140 insns) */
void f_112d3610(void) {
  FTRACE(0x112d3610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d3610 push ebp */
  push32((uint32_t)(EBP));
  /* 112d3611 mov ebp, esp */
  EBP = (ESP);
  /* 112d3613 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112d3615 push 0x112eb9d8 */
  push32((uint32_t)(0x112eb9d8u));
  /* 112d361a push 0x112cd138 */
  push32((uint32_t)(0x112cd138u));
  /* 112d361f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 112d3625 push eax */
  push32((uint32_t)(EAX));
  /* 112d3626 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 112d362d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3630 push ebx */
  push32((uint32_t)(EBX));
  /* 112d3631 push esi */
  push32((uint32_t)(ESI));
  /* 112d3632 push edi */
  push32((uint32_t)(EDI));
  /* 112d3633 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112d3636 cmp dword ptr [0x112ef898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d363d jne 0x112d3682 */
  if (!C.zf) goto L_112d3682;
  /* 112d363f push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3641 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3643 push 1 */
  push32((uint32_t)(0x1u));
  /* 112d3645 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3647 call dword ptr [0x112f22c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22c0))), 0x112d364du);
  /* 112d364d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d364f je 0x112d365d */
  if (C.zf) goto L_112d365d;
  /* 112d3651 mov dword ptr [0x112ef898], 1 */
  w32((uint32_t)(0x112ef898), (0x1u));
  /* 112d365b jmp 0x112d3682 */
  goto L_112d3682;
L_112d365d:;
  /* 112d365d push 0 */
  push32((uint32_t)(0x0u));
  /* 112d365f push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3661 push 1 */
  push32((uint32_t)(0x1u));
  /* 112d3663 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3665 call dword ptr [0x112f22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22d8))), 0x112d366bu);
  /* 112d366b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d366d je 0x112d367b */
  if (C.zf) goto L_112d367b;
  /* 112d366f mov dword ptr [0x112ef898], 2 */
  w32((uint32_t)(0x112ef898), (0x2u));
  /* 112d3679 jmp 0x112d3682 */
  goto L_112d3682;
L_112d367b:;
  /* 112d367b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d367d jmp 0x112d37a1 */
  goto L_112d37a1;
L_112d3682:;
  /* 112d3682 cmp dword ptr [0x112ef898], 2 */
  { uint32_t _a=(r32((uint32_t)(0x112ef898))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3689 jne 0x112d36a6 */
  if (!C.zf) goto L_112d36a6;
  /* 112d368b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d368e push eax */
  push32((uint32_t)(EAX));
  /* 112d368f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d3692 push ecx */
  push32((uint32_t)(ECX));
  /* 112d3693 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d3696 push edx */
  push32((uint32_t)(EDX));
  /* 112d3697 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d369a push eax */
  push32((uint32_t)(EAX));
  /* 112d369b call dword ptr [0x112f22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22d8))), 0x112d36a1u);
  /* 112d36a1 jmp 0x112d37a1 */
  goto L_112d37a1;
L_112d36a6:;
  /* 112d36a6 cmp dword ptr [0x112ef898], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112ef898))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d36ad jne 0x112d379f */
  if (!C.zf) goto L_112d379f;
  /* 112d36b3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d36b7 jne 0x112d36c2 */
  if (!C.zf) goto L_112d36c2;
  /* 112d36b9 mov ecx, dword ptr [0x112ef748] */
  ECX = (r32((uint32_t)(0x112ef748)));
  /* 112d36bf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_112d36c2:;
  /* 112d36c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d36c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d36c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d36c9 push edx */
  push32((uint32_t)(EDX));
  /* 112d36ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d36cd push eax */
  push32((uint32_t)(EAX));
  /* 112d36ce call dword ptr [0x112f22c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22c0))), 0x112d36d4u);
  /* 112d36d4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 112d36d7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d36db jne 0x112d36e4 */
  if (!C.zf) goto L_112d36e4;
  /* 112d36dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d36df jmp 0x112d37a1 */
  goto L_112d37a1;
L_112d36e4:;
  /* 112d36e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112d36eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112d36ee shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 112d36f0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d36f3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 112d36f5 call 0x112c71d0 */
  push32(0x112d36fau); f_112c71d0();
  /* 112d36fa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 112d36fd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112d3700 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 112d3703 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 112d3706 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 112d370d jmp 0x112d3726 */
  goto L_112d3726;
  /* 112d370f mov eax, 1 */
  EAX = (0x1u);
  /* 112d3714 ret  */
  ESPCHK(0x112d3610u, _esp0);
  ESP += 4; return;
  /* 112d3715 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 112d3718 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 112d371f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_112d3726:;
  /* 112d3726 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d372a jne 0x112d3730 */
  if (!C.zf) goto L_112d3730;
  /* 112d372c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d372e jmp 0x112d37a1 */
  goto L_112d37a1;
L_112d3730:;
  /* 112d3730 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112d3733 push edx */
  push32((uint32_t)(EDX));
  /* 112d3734 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112d3737 push eax */
  push32((uint32_t)(EAX));
  /* 112d3738 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d373b push ecx */
  push32((uint32_t)(ECX));
  /* 112d373c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d373f push edx */
  push32((uint32_t)(EDX));
  /* 112d3740 call dword ptr [0x112f22c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22c0))), 0x112d3746u);
  /* 112d3746 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d3748 jne 0x112d374e */
  if (!C.zf) goto L_112d374e;
  /* 112d374a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d374c jmp 0x112d37a1 */
  goto L_112d37a1;
L_112d374e:;
  /* 112d374e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3752 jne 0x112d3776 */
  if (!C.zf) goto L_112d3776;
  /* 112d3754 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3756 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3758 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d375a push 0 */
  push32((uint32_t)(0x0u));
  /* 112d375c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112d375e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112d3761 push eax */
  push32((uint32_t)(EAX));
  /* 112d3762 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 112d3767 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d376a push ecx */
  push32((uint32_t)(ECX));
  /* 112d376b call dword ptr [0x112f2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2390))), 0x112d3771u);
  /* 112d3771 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 112d3774 jmp 0x112d379a */
  goto L_112d379a;
L_112d3776:;
  /* 112d3776 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3778 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d377a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d377d push edx */
  push32((uint32_t)(EDX));
  /* 112d377e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d3781 push eax */
  push32((uint32_t)(EAX));
  /* 112d3782 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112d3784 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112d3787 push ecx */
  push32((uint32_t)(ECX));
  /* 112d3788 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 112d378d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d3790 push edx */
  push32((uint32_t)(EDX));
  /* 112d3791 call dword ptr [0x112f2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2390))), 0x112d3797u);
  /* 112d3797 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_112d379a:;
  /* 112d379a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112d379d jmp 0x112d37a1 */
  goto L_112d37a1;
L_112d379f:;
  /* 112d379f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112d37a1:;
  /* 112d37a1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 112d37a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d37a7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 112d37ae pop edi */
  EDI = (pop32());
  /* 112d37af pop esi */
  ESI = (pop32());
  /* 112d37b0 pop ebx */
  EBX = (pop32());
  /* 112d37b1 mov esp, ebp */
  ESP = (EBP);
  /* 112d37b3 pop ebp */
  EBP = (pop32());
  /* 112d37b4 ret  */
  ESPCHK(0x112d3610u, _esp0);
  ESP += 4; return;
}

/* FUN_100137c0 @ 0x112d37c0 (11 bytes, 6 insns) */
void f_112d37c0(void) {
  FTRACE(0x112d37c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d37c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112d37c1 mov ebp, esp */
  EBP = (ESP);
  /* 112d37c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d37c6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d37c9 pop ebp */
  EBP = (pop32());
  /* 112d37ca ret  */
  ESPCHK(0x112d37c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100137d0 @ 0x112d37d0 (147 bytes, 43 insns) */
void f_112d37d0(void) {
  FTRACE(0x112d37d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d37d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112d37d1 mov ebp, esp */
  EBP = (ESP);
  /* 112d37d3 push ecx */
  push32((uint32_t)(ECX));
  /* 112d37d4 cmp dword ptr [0x112ef738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d37db jne 0x112d37f7 */
  if (!C.zf) goto L_112d37f7;
  /* 112d37dd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d37e1 jl 0x112d37f2 */
  if ((C.sf!=C.of)) goto L_112d37f2;
  /* 112d37e3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d37e7 jg 0x112d37f2 */
  if ((!C.zf&&C.sf==C.of)) goto L_112d37f2;
  /* 112d37e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d37ec add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d37ef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_112d37f2:;
  /* 112d37f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d37f5 jmp 0x112d385f */
  goto L_112d385f;
L_112d37f7:;
  /* 112d37f7 push 0x112ef8c4 */
  push32((uint32_t)(0x112ef8c4u));
  /* 112d37fc call dword ptr [0x112f2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2378))), 0x112d3802u);
  /* 112d3802 cmp dword ptr [0x112ef8b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef8b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3809 je 0x112d3829 */
  if (C.zf) goto L_112d3829;
  /* 112d380b push 0x112ef8c4 */
  push32((uint32_t)(0x112ef8c4u));
  /* 112d3810 call dword ptr [0x112f2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2368))), 0x112d3816u);
  /* 112d3816 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112d3818 call 0x112c7a30 */
  push32(0x112d381du); f_112c7a30();
  /* 112d381d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3820 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112d3827 jmp 0x112d3830 */
  goto L_112d3830;
L_112d3829:;
  /* 112d3829 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_112d3830:;
  /* 112d3830 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d3833 push ecx */
  push32((uint32_t)(ECX));
  /* 112d3834 call 0x112d3870 */
  push32(0x112d3839u); f_112d3870();
  /* 112d3839 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d383c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112d383f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3843 je 0x112d3851 */
  if (C.zf) goto L_112d3851;
  /* 112d3845 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 112d3847 call 0x112c7ad0 */
  push32(0x112d384cu); f_112c7ad0();
  /* 112d384c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d384f jmp 0x112d385c */
  goto L_112d385c;
L_112d3851:;
  /* 112d3851 push 0x112ef8c4 */
  push32((uint32_t)(0x112ef8c4u));
  /* 112d3856 call dword ptr [0x112f2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2368))), 0x112d385cu);
L_112d385c:;
  /* 112d385c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_112d385f:;
  /* 112d385f mov esp, ebp */
  ESP = (EBP);
  /* 112d3861 pop ebp */
  EBP = (pop32());
  /* 112d3862 ret  */
  ESPCHK(0x112d37d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013870 @ 0x112d3870 (299 bytes, 91 insns) */
void f_112d3870(void) {
  FTRACE(0x112d3870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d3870 push ebp */
  push32((uint32_t)(EBP));
  /* 112d3871 mov ebp, esp */
  EBP = (ESP);
  /* 112d3873 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d3876 cmp dword ptr [0x112ef738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d387d jne 0x112d389c */
  if (!C.zf) goto L_112d389c;
  /* 112d387f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3883 jl 0x112d3894 */
  if ((C.sf!=C.of)) goto L_112d3894;
  /* 112d3885 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3889 jg 0x112d3894 */
  if ((!C.zf&&C.sf==C.of)) goto L_112d3894;
  /* 112d388b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d388e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3891 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_112d3894:;
  /* 112d3894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d3897 jmp 0x112d3997 */
  goto L_112d3997;
L_112d389c:;
  /* 112d389c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d38a3 jge 0x112d38e3 */
  if ((C.sf==C.of)) goto L_112d38e3;
  /* 112d38a5 cmp dword ptr [0x112edea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112edea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d38ac jle 0x112d38c1 */
  if ((C.zf||C.sf!=C.of)) goto L_112d38c1;
  /* 112d38ae push 1 */
  push32((uint32_t)(0x1u));
  /* 112d38b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d38b3 push ecx */
  push32((uint32_t)(ECX));
  /* 112d38b4 call 0x112ca040 */
  push32(0x112d38b9u); f_112ca040();
  /* 112d38b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d38bc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112d38bf jmp 0x112d38d5 */
  goto L_112d38d5;
L_112d38c1:;
  /* 112d38c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d38c4 mov eax, dword ptr [0x112edc98] */
  EAX = (r32((uint32_t)(0x112edc98)));
  /* 112d38c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d38cb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 112d38cf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112d38d2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_112d38d5:;
  /* 112d38d5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d38d9 jne 0x112d38e3 */
  if (!C.zf) goto L_112d38e3;
  /* 112d38db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d38de jmp 0x112d3997 */
  goto L_112d3997;
L_112d38e3:;
  /* 112d38e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d38e6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 112d38e9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112d38ef and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112d38f5 mov eax, dword ptr [0x112edc98] */
  EAX = (r32((uint32_t)(0x112edc98)));
  /* 112d38fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d38fc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 112d3900 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 112d3906 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112d3908 je 0x112d392c */
  if (C.zf) goto L_112d392c;
  /* 112d390a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d390d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 112d3910 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112d3916 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 112d3919 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 112d391c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 112d391f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 112d3923 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 112d392a jmp 0x112d393d */
  goto L_112d393d;
L_112d392c:;
  /* 112d392c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 112d392f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 112d3932 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 112d3936 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_112d393d:;
  /* 112d393d push 1 */
  push32((uint32_t)(0x1u));
  /* 112d393f push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3941 push 3 */
  push32((uint32_t)(0x3u));
  /* 112d3943 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 112d3946 push edx */
  push32((uint32_t)(EDX));
  /* 112d3947 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d394a push eax */
  push32((uint32_t)(EAX));
  /* 112d394b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 112d394e push ecx */
  push32((uint32_t)(ECX));
  /* 112d394f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 112d3954 mov edx, dword ptr [0x112ef738] */
  EDX = (r32((uint32_t)(0x112ef738)));
  /* 112d395a push edx */
  push32((uint32_t)(EDX));
  /* 112d395b call 0x112cc420 */
  push32(0x112d3960u); f_112cc420();
  /* 112d3960 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3963 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112d3966 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d396a jne 0x112d3971 */
  if (!C.zf) goto L_112d3971;
  /* 112d396c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d396f jmp 0x112d3997 */
  goto L_112d3997;
L_112d3971:;
  /* 112d3971 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3975 jne 0x112d3981 */
  if (!C.zf) goto L_112d3981;
  /* 112d3977 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d397a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d397f jmp 0x112d3997 */
  goto L_112d3997;
L_112d3981:;
  /* 112d3981 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d3984 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d3989 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 112d398c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 112d3992 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 112d3995 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_112d3997:;
  /* 112d3997 mov esp, ebp */
  ESP = (EBP);
  /* 112d3999 pop ebp */
  EBP = (pop32());
  /* 112d399a ret  */
  ESPCHK(0x112d3870u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x112d39a0 (52 bytes, 19 insns) */
void f_112d39a0(void) {
  FTRACE(0x112d39a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d39a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112d39a4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 112d39a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112d39aa mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 112d39ae jne 0x112d39b9 */
  if (!C.zf) goto L_112d39b9;
  /* 112d39b0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112d39b4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 112d39b6 ret 0x10 */
  ESPCHK(0x112d39a0u, _esp0);
  ESP += 20; return;
L_112d39b9:;
  /* 112d39b9 push ebx */
  push32((uint32_t)(EBX));
  /* 112d39ba mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 112d39bc mov ebx, eax */
  EBX = (EAX);
  /* 112d39be mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112d39c2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 112d39c6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d39c8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112d39cc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 112d39ce add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d39d0 pop ebx */
  EBX = (pop32());
  /* 112d39d1 ret 0x10 */
  ESPCHK(0x112d39a0u, _esp0);
  ESP += 20; return;
}

/* FUN_100139e0 @ 0x112d39e0 (46 bytes, 18 insns) */
void f_112d39e0(void) {
  FTRACE(0x112d39e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d39e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112d39e1 mov ebp, esp */
  EBP = (ESP);
  /* 112d39e3 push ecx */
  push32((uint32_t)(ECX));
  /* 112d39e4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 112d39e6 call 0x112c7a30 */
  push32(0x112d39ebu); f_112c7a30();
  /* 112d39eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d39ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d39f1 push eax */
  push32((uint32_t)(EAX));
  /* 112d39f2 call 0x112d3a10 */
  push32(0x112d39f7u); f_112d3a10();
  /* 112d39f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d39fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112d39fd push 0xc */
  push32((uint32_t)(0xcu));
  /* 112d39ff call 0x112c7ad0 */
  push32(0x112d3a04u); f_112c7ad0();
  /* 112d3a04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3a07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d3a0a mov esp, ebp */
  ESP = (EBP);
  /* 112d3a0c pop ebp */
  EBP = (pop32());
  /* 112d3a0d ret  */
  ESPCHK(0x112d39e0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x112d3a10 (198 bytes, 69 insns) */
void f_112d3a10(void) {
  FTRACE(0x112d3a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d3a10 push ebp */
  push32((uint32_t)(EBP));
  /* 112d3a11 mov ebp, esp */
  EBP = (ESP);
  /* 112d3a13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d3a16 mov eax, dword ptr [0x112ef554] */
  EAX = (r32((uint32_t)(0x112ef554)));
  /* 112d3a1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112d3a1e cmp dword ptr [0x112f1060], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112f1060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3a25 jne 0x112d3a2e */
  if (!C.zf) goto L_112d3a2e;
  /* 112d3a27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3a29 jmp 0x112d3ad2 */
  goto L_112d3ad2;
L_112d3a2e:;
  /* 112d3a2e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3a32 jne 0x112d3a56 */
  if (!C.zf) goto L_112d3a56;
  /* 112d3a34 cmp dword ptr [0x112ef55c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef55c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3a3b je 0x112d3a56 */
  if (C.zf) goto L_112d3a56;
  /* 112d3a3d call 0x112d3b30 */
  push32(0x112d3a42u); f_112d3b30();
  /* 112d3a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d3a44 je 0x112d3a4d */
  if (C.zf) goto L_112d3a4d;
  /* 112d3a46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3a48 jmp 0x112d3ad2 */
  goto L_112d3ad2;
L_112d3a4d:;
  /* 112d3a4d mov ecx, dword ptr [0x112ef554] */
  ECX = (r32((uint32_t)(0x112ef554)));
  /* 112d3a53 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_112d3a56:;
  /* 112d3a56 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3a5a je 0x112d3ad0 */
  if (C.zf) goto L_112d3ad0;
  /* 112d3a5c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3a60 je 0x112d3ad0 */
  if (C.zf) goto L_112d3ad0;
  /* 112d3a62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d3a65 push edx */
  push32((uint32_t)(EDX));
  /* 112d3a66 call 0x112c6e60 */
  push32(0x112d3a6bu); f_112c6e60();
  /* 112d3a6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3a6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112d3a71:;
  /* 112d3a71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d3a74 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3a77 je 0x112d3ad0 */
  if (C.zf) goto L_112d3ad0;
  /* 112d3a79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d3a7c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d3a7e push edx */
  push32((uint32_t)(EDX));
  /* 112d3a7f call 0x112c6e60 */
  push32(0x112d3a84u); f_112c6e60();
  /* 112d3a84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3a87 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3a8a jbe 0x112d3ac5 */
  if ((C.cf||C.zf)) goto L_112d3ac5;
  /* 112d3a8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d3a8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112d3a91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d3a94 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 112d3a98 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3a9b jne 0x112d3ac5 */
  if (!C.zf) goto L_112d3ac5;
  /* 112d3a9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d3aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 112d3aa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d3aa4 push edx */
  push32((uint32_t)(EDX));
  /* 112d3aa5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d3aa8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112d3aaa push ecx */
  push32((uint32_t)(ECX));
  /* 112d3aab call 0x112d3ae0 */
  push32(0x112d3ab0u); f_112d3ae0();
  /* 112d3ab0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3ab3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d3ab5 jne 0x112d3ac5 */
  if (!C.zf) goto L_112d3ac5;
  /* 112d3ab7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d3aba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112d3abc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d3abf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 112d3ac3 jmp 0x112d3ad2 */
  goto L_112d3ad2;
L_112d3ac5:;
  /* 112d3ac5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d3ac8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3acb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112d3ace jmp 0x112d3a71 */
  goto L_112d3a71;
L_112d3ad0:;
  /* 112d3ad0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112d3ad2:;
  /* 112d3ad2 mov esp, ebp */
  ESP = (EBP);
  /* 112d3ad4 pop ebp */
  EBP = (pop32());
  /* 112d3ad5 ret  */
  ESPCHK(0x112d3a10u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x112d3ae0 (79 bytes, 32 insns) */
void f_112d3ae0(void) {
  FTRACE(0x112d3ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d3ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 112d3ae1 mov ebp, esp */
  EBP = (ESP);
  /* 112d3ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 112d3ae4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3ae8 jne 0x112d3aee */
  if (!C.zf) goto L_112d3aee;
  /* 112d3aea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3aec jmp 0x112d3b2b */
  goto L_112d3b2b;
L_112d3aee:;
  /* 112d3aee mov eax, dword ptr [0x112f0c24] */
  EAX = (r32((uint32_t)(0x112f0c24)));
  /* 112d3af3 push eax */
  push32((uint32_t)(EAX));
  /* 112d3af4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d3af7 push ecx */
  push32((uint32_t)(ECX));
  /* 112d3af8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d3afb push edx */
  push32((uint32_t)(EDX));
  /* 112d3afc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d3aff push eax */
  push32((uint32_t)(EAX));
  /* 112d3b00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d3b03 push ecx */
  push32((uint32_t)(ECX));
  /* 112d3b04 push 1 */
  push32((uint32_t)(0x1u));
  /* 112d3b06 mov edx, dword ptr [0x112f0ec4] */
  EDX = (r32((uint32_t)(0x112f0ec4)));
  /* 112d3b0c push edx */
  push32((uint32_t)(EDX));
  /* 112d3b0d call 0x112d3be0 */
  push32(0x112d3b12u); f_112d3be0();
  /* 112d3b12 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3b15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112d3b18 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3b1c jne 0x112d3b25 */
  if (!C.zf) goto L_112d3b25;
  /* 112d3b1e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 112d3b23 jmp 0x112d3b2b */
  goto L_112d3b2b;
L_112d3b25:;
  /* 112d3b25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d3b28 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_112d3b2b:;
  /* 112d3b2b mov esp, ebp */
  ESP = (EBP);
  /* 112d3b2d pop ebp */
  EBP = (pop32());
  /* 112d3b2e ret  */
  ESPCHK(0x112d3ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b30 @ 0x112d3b30 (174 bytes, 66 insns) */
void f_112d3b30(void) {
  FTRACE(0x112d3b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d3b30 push ebp */
  push32((uint32_t)(EBP));
  /* 112d3b31 mov ebp, esp */
  EBP = (ESP);
  /* 112d3b33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d3b36 mov eax, dword ptr [0x112ef55c] */
  EAX = (r32((uint32_t)(0x112ef55c)));
  /* 112d3b3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112d3b3e:;
  /* 112d3b3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d3b41 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3b44 je 0x112d3bd8 */
  if (C.zf) goto L_112d3bd8;
  /* 112d3b4a push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3b4c push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3b50 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3b52 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112d3b54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d3b57 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112d3b59 push eax */
  push32((uint32_t)(EAX));
  /* 112d3b5a push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3b5c push 1 */
  push32((uint32_t)(0x1u));
  /* 112d3b5e call dword ptr [0x112f2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2390))), 0x112d3b64u);
  /* 112d3b64 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112d3b67 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3b6b jne 0x112d3b72 */
  if (!C.zf) goto L_112d3b72;
  /* 112d3b6d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d3b70 jmp 0x112d3bda */
  goto L_112d3bda;
L_112d3b72:;
  /* 112d3b72 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 112d3b74 push 0x112eb9e4 */
  push32((uint32_t)(0x112eb9e4u));
  /* 112d3b79 push 2 */
  push32((uint32_t)(0x2u));
  /* 112d3b7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d3b7e push ecx */
  push32((uint32_t)(ECX));
  /* 112d3b7f call 0x112c4030 */
  push32(0x112d3b84u); f_112c4030();
  /* 112d3b84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3b87 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112d3b8a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3b8e jne 0x112d3b95 */
  if (!C.zf) goto L_112d3b95;
  /* 112d3b90 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d3b93 jmp 0x112d3bda */
  goto L_112d3bda;
L_112d3b95:;
  /* 112d3b95 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3b99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d3b9c push edx */
  push32((uint32_t)(EDX));
  /* 112d3b9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d3ba0 push eax */
  push32((uint32_t)(EAX));
  /* 112d3ba1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112d3ba3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d3ba6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d3ba8 push edx */
  push32((uint32_t)(EDX));
  /* 112d3ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3bab push 1 */
  push32((uint32_t)(0x1u));
  /* 112d3bad call dword ptr [0x112f2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2390))), 0x112d3bb3u);
  /* 112d3bb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d3bb5 jne 0x112d3bbc */
  if (!C.zf) goto L_112d3bbc;
  /* 112d3bb7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d3bba jmp 0x112d3bda */
  goto L_112d3bda;
L_112d3bbc:;
  /* 112d3bbc push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3bbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d3bc1 push eax */
  push32((uint32_t)(EAX));
  /* 112d3bc2 call 0x112d4030 */
  push32(0x112d3bc7u); f_112d4030();
  /* 112d3bc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3bca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d3bcd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3bd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112d3bd3 jmp 0x112d3b3e */
  goto L_112d3b3e;
L_112d3bd8:;
  /* 112d3bd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112d3bda:;
  /* 112d3bda mov esp, ebp */
  ESP = (EBP);
  /* 112d3bdc pop ebp */
  EBP = (pop32());
  /* 112d3bdd ret  */
  ESPCHK(0x112d3b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013be0 @ 0x112d3be0 (970 bytes, 340 insns) */
void f_112d3be0(void) {
  FTRACE(0x112d3be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d3be0 push ebp */
  push32((uint32_t)(EBP));
  /* 112d3be1 mov ebp, esp */
  EBP = (ESP);
  /* 112d3be3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112d3be5 push 0x112eba38 */
  push32((uint32_t)(0x112eba38u));
  /* 112d3bea push 0x112cd138 */
  push32((uint32_t)(0x112cd138u));
  /* 112d3bef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 112d3bf5 push eax */
  push32((uint32_t)(EAX));
  /* 112d3bf6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 112d3bfd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3c00 push ebx */
  push32((uint32_t)(EBX));
  /* 112d3c01 push esi */
  push32((uint32_t)(ESI));
  /* 112d3c02 push edi */
  push32((uint32_t)(EDI));
  /* 112d3c03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112d3c06 cmp dword ptr [0x112ef89c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef89c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3c0d jne 0x112d3c66 */
  if (!C.zf) goto L_112d3c66;
  /* 112d3c0f push 1 */
  push32((uint32_t)(0x1u));
  /* 112d3c11 push 0x112eb094 */
  push32((uint32_t)(0x112eb094u));
  /* 112d3c16 push 1 */
  push32((uint32_t)(0x1u));
  /* 112d3c18 push 0x112eb094 */
  push32((uint32_t)(0x112eb094u));
  /* 112d3c1d push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3c1f push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3c21 call dword ptr [0x112f22bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22bc))), 0x112d3c27u);
  /* 112d3c27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d3c29 je 0x112d3c37 */
  if (C.zf) goto L_112d3c37;
  /* 112d3c2b mov dword ptr [0x112ef89c], 1 */
  w32((uint32_t)(0x112ef89c), (0x1u));
  /* 112d3c35 jmp 0x112d3c66 */
  goto L_112d3c66;
L_112d3c37:;
  /* 112d3c37 push 1 */
  push32((uint32_t)(0x1u));
  /* 112d3c39 push 0x112eb090 */
  push32((uint32_t)(0x112eb090u));
  /* 112d3c3e push 1 */
  push32((uint32_t)(0x1u));
  /* 112d3c40 push 0x112eb090 */
  push32((uint32_t)(0x112eb090u));
  /* 112d3c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3c47 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3c49 call dword ptr [0x112f22c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22c8))), 0x112d3c4fu);
  /* 112d3c4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d3c51 je 0x112d3c5f */
  if (C.zf) goto L_112d3c5f;
  /* 112d3c53 mov dword ptr [0x112ef89c], 2 */
  w32((uint32_t)(0x112ef89c), (0x2u));
  /* 112d3c5d jmp 0x112d3c66 */
  goto L_112d3c66;
L_112d3c5f:;
  /* 112d3c5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3c61 jmp 0x112d3fc4 */
  goto L_112d3fc4;
L_112d3c66:;
  /* 112d3c66 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3c6a jle 0x112d3c7f */
  if ((C.zf||C.sf!=C.of)) goto L_112d3c7f;
  /* 112d3c6c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d3c6f push eax */
  push32((uint32_t)(EAX));
  /* 112d3c70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d3c73 push ecx */
  push32((uint32_t)(ECX));
  /* 112d3c74 call 0x112d3fe0 */
  push32(0x112d3c79u); f_112d3fe0();
  /* 112d3c79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3c7c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_112d3c7f:;
  /* 112d3c7f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3c83 jle 0x112d3c98 */
  if ((C.zf||C.sf!=C.of)) goto L_112d3c98;
  /* 112d3c85 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112d3c88 push edx */
  push32((uint32_t)(EDX));
  /* 112d3c89 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d3c8c push eax */
  push32((uint32_t)(EAX));
  /* 112d3c8d call 0x112d3fe0 */
  push32(0x112d3c92u); f_112d3fe0();
  /* 112d3c92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3c95 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_112d3c98:;
  /* 112d3c98 cmp dword ptr [0x112ef89c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x112ef89c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3c9f jne 0x112d3cc4 */
  if (!C.zf) goto L_112d3cc4;
  /* 112d3ca1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112d3ca4 push ecx */
  push32((uint32_t)(ECX));
  /* 112d3ca5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d3ca8 push edx */
  push32((uint32_t)(EDX));
  /* 112d3ca9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d3cac push eax */
  push32((uint32_t)(EAX));
  /* 112d3cad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d3cb0 push ecx */
  push32((uint32_t)(ECX));
  /* 112d3cb1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d3cb4 push edx */
  push32((uint32_t)(EDX));
  /* 112d3cb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d3cb8 push eax */
  push32((uint32_t)(EAX));
  /* 112d3cb9 call dword ptr [0x112f22c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22c8))), 0x112d3cbfu);
  /* 112d3cbf jmp 0x112d3fc4 */
  goto L_112d3fc4;
L_112d3cc4:;
  /* 112d3cc4 cmp dword ptr [0x112ef89c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112ef89c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3ccb jne 0x112d3fc2 */
  if (!C.zf) goto L_112d3fc2;
  /* 112d3cd1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3cd5 jne 0x112d3ce0 */
  if (!C.zf) goto L_112d3ce0;
  /* 112d3cd7 mov ecx, dword ptr [0x112ef748] */
  ECX = (r32((uint32_t)(0x112ef748)));
  /* 112d3cdd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_112d3ce0:;
  /* 112d3ce0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3ce4 je 0x112d3cf0 */
  if (C.zf) goto L_112d3cf0;
  /* 112d3ce6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3cea jne 0x112d3e6c */
  if (!C.zf) goto L_112d3e6c;
L_112d3cf0:;
  /* 112d3cf0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d3cf3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3cf6 jne 0x112d3d02 */
  if (!C.zf) goto L_112d3d02;
  /* 112d3cf8 mov eax, 2 */
  EAX = (0x2u);
  /* 112d3cfd jmp 0x112d3fc4 */
  goto L_112d3fc4;
L_112d3d02:;
  /* 112d3d02 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3d06 jle 0x112d3d12 */
  if ((C.zf||C.sf!=C.of)) goto L_112d3d12;
  /* 112d3d08 mov eax, 1 */
  EAX = (0x1u);
  /* 112d3d0d jmp 0x112d3fc4 */
  goto L_112d3fc4;
L_112d3d12:;
  /* 112d3d12 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3d16 jle 0x112d3d22 */
  if ((C.zf||C.sf!=C.of)) goto L_112d3d22;
  /* 112d3d18 mov eax, 3 */
  EAX = (0x3u);
  /* 112d3d1d jmp 0x112d3fc4 */
  goto L_112d3fc4;
L_112d3d22:;
  /* 112d3d22 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 112d3d25 push eax */
  push32((uint32_t)(EAX));
  /* 112d3d26 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 112d3d29 push ecx */
  push32((uint32_t)(ECX));
  /* 112d3d2a call dword ptr [0x112f2314] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2314))), 0x112d3d30u);
  /* 112d3d30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d3d32 jne 0x112d3d3b */
  if (!C.zf) goto L_112d3d3b;
  /* 112d3d34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3d36 jmp 0x112d3fc4 */
  goto L_112d3fc4;
L_112d3d3b:;
  /* 112d3d3b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3d3f jne 0x112d3d47 */
  if (!C.zf) goto L_112d3d47;
  /* 112d3d41 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3d45 je 0x112d3d74 */
  if (C.zf) goto L_112d3d74;
L_112d3d47:;
  /* 112d3d47 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3d4b jne 0x112d3d53 */
  if (!C.zf) goto L_112d3d53;
  /* 112d3d4d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3d51 je 0x112d3d74 */
  if (C.zf) goto L_112d3d74;
L_112d3d53:;
  /* 112d3d53 push 0x112eb9f8 */
  push32((uint32_t)(0x112eb9f8u));
  /* 112d3d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3d5a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 112d3d5f push 0x112eb9f0 */
  push32((uint32_t)(0x112eb9f0u));
  /* 112d3d64 push 2 */
  push32((uint32_t)(0x2u));
  /* 112d3d66 call 0x112c30f0 */
  push32(0x112d3d6bu); f_112c30f0();
  /* 112d3d6b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3d6e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3d71 jne 0x112d3d74 */
  if (!C.zf) goto L_112d3d74;
  /* 112d3d73 int3  */
  x86_unimpl("int3 @ 0x112d3d73");
L_112d3d74:;
  /* 112d3d74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d3d76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d3d78 jne 0x112d3d3b */
  if (!C.zf) goto L_112d3d3b;
  /* 112d3d7a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3d7e jle 0x112d3df3 */
  if ((C.zf||C.sf!=C.of)) goto L_112d3df3;
  /* 112d3d80 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3d84 jae 0x112d3d90 */
  if (!C.cf) goto L_112d3d90;
  /* 112d3d86 mov eax, 3 */
  EAX = (0x3u);
  /* 112d3d8b jmp 0x112d3fc4 */
  goto L_112d3fc4;
L_112d3d90:;
  /* 112d3d90 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 112d3d93 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 112d3d96 jmp 0x112d3da1 */
  goto L_112d3da1;
L_112d3d98:;
  /* 112d3d98 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 112d3d9b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3d9e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_112d3da1:;
  /* 112d3da1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 112d3da4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3da6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112d3da8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d3daa je 0x112d3de9 */
  if (C.zf) goto L_112d3de9;
  /* 112d3dac mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 112d3daf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d3db1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 112d3db4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d3db6 je 0x112d3de9 */
  if (C.zf) goto L_112d3de9;
  /* 112d3db8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d3dbb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d3dbd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112d3dbf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 112d3dc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3dc4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112d3dc6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3dc8 jl 0x112d3de7 */
  if ((C.sf!=C.of)) goto L_112d3de7;
  /* 112d3dca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d3dcd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d3dcf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112d3dd1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 112d3dd4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d3dd6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 112d3dd9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3ddb jg 0x112d3de7 */
  if ((!C.zf&&C.sf==C.of)) goto L_112d3de7;
  /* 112d3ddd mov eax, 2 */
  EAX = (0x2u);
  /* 112d3de2 jmp 0x112d3fc4 */
  goto L_112d3fc4;
L_112d3de7:;
  /* 112d3de7 jmp 0x112d3d98 */
  goto L_112d3d98;
L_112d3de9:;
  /* 112d3de9 mov eax, 3 */
  EAX = (0x3u);
  /* 112d3dee jmp 0x112d3fc4 */
  goto L_112d3fc4;
L_112d3df3:;
  /* 112d3df3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3df7 jle 0x112d3e6c */
  if ((C.zf||C.sf!=C.of)) goto L_112d3e6c;
  /* 112d3df9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3dfd jae 0x112d3e09 */
  if (!C.cf) goto L_112d3e09;
  /* 112d3dff mov eax, 1 */
  EAX = (0x1u);
  /* 112d3e04 jmp 0x112d3fc4 */
  goto L_112d3fc4;
L_112d3e09:;
  /* 112d3e09 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 112d3e0c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 112d3e0f jmp 0x112d3e1a */
  goto L_112d3e1a;
L_112d3e11:;
  /* 112d3e11 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 112d3e14 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3e17 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_112d3e1a:;
  /* 112d3e1a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 112d3e1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d3e1f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112d3e21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d3e23 je 0x112d3e62 */
  if (C.zf) goto L_112d3e62;
  /* 112d3e25 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 112d3e28 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d3e2a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 112d3e2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112d3e2f je 0x112d3e62 */
  if (C.zf) goto L_112d3e62;
  /* 112d3e31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d3e34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3e36 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112d3e38 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 112d3e3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112d3e3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112d3e3f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3e41 jl 0x112d3e60 */
  if ((C.sf!=C.of)) goto L_112d3e60;
  /* 112d3e43 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d3e46 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d3e48 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112d3e4a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 112d3e4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3e4f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 112d3e52 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3e54 jg 0x112d3e60 */
  if ((!C.zf&&C.sf==C.of)) goto L_112d3e60;
  /* 112d3e56 mov eax, 2 */
  EAX = (0x2u);
  /* 112d3e5b jmp 0x112d3fc4 */
  goto L_112d3fc4;
L_112d3e60:;
  /* 112d3e60 jmp 0x112d3e11 */
  goto L_112d3e11;
L_112d3e62:;
  /* 112d3e62 mov eax, 1 */
  EAX = (0x1u);
  /* 112d3e67 jmp 0x112d3fc4 */
  goto L_112d3fc4;
L_112d3e6c:;
  /* 112d3e6c push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3e6e push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3e70 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d3e73 push ecx */
  push32((uint32_t)(ECX));
  /* 112d3e74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d3e77 push edx */
  push32((uint32_t)(EDX));
  /* 112d3e78 push 9 */
  push32((uint32_t)(0x9u));
  /* 112d3e7a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 112d3e7d push eax */
  push32((uint32_t)(EAX));
  /* 112d3e7e call dword ptr [0x112f2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2308))), 0x112d3e84u);
  /* 112d3e84 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 112d3e87 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3e8b jne 0x112d3e94 */
  if (!C.zf) goto L_112d3e94;
  /* 112d3e8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3e8f jmp 0x112d3fc4 */
  goto L_112d3fc4;
L_112d3e94:;
  /* 112d3e94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112d3e9b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112d3e9e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 112d3ea0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3ea3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 112d3ea5 call 0x112c71d0 */
  push32(0x112d3eaau); f_112c71d0();
  /* 112d3eaa mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 112d3ead mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112d3eb0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 112d3eb3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 112d3eb6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 112d3ebd jmp 0x112d3ed6 */
  goto L_112d3ed6;
  /* 112d3ebf mov eax, 1 */
  EAX = (0x1u);
  /* 112d3ec4 ret  */
  ESPCHK(0x112d3be0u, _esp0);
  ESP += 4; return;
  /* 112d3ec5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 112d3ec8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 112d3ecf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_112d3ed6:;
  /* 112d3ed6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3eda jne 0x112d3ee3 */
  if (!C.zf) goto L_112d3ee3;
  /* 112d3edc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3ede jmp 0x112d3fc4 */
  goto L_112d3fc4;
L_112d3ee3:;
  /* 112d3ee3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112d3ee6 push edx */
  push32((uint32_t)(EDX));
  /* 112d3ee7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112d3eea push eax */
  push32((uint32_t)(EAX));
  /* 112d3eeb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112d3eee push ecx */
  push32((uint32_t)(ECX));
  /* 112d3eef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112d3ef2 push edx */
  push32((uint32_t)(EDX));
  /* 112d3ef3 push 1 */
  push32((uint32_t)(0x1u));
  /* 112d3ef5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 112d3ef8 push eax */
  push32((uint32_t)(EAX));
  /* 112d3ef9 call dword ptr [0x112f2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2308))), 0x112d3effu);
  /* 112d3eff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d3f01 jne 0x112d3f0a */
  if (!C.zf) goto L_112d3f0a;
  /* 112d3f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3f05 jmp 0x112d3fc4 */
  goto L_112d3fc4;
L_112d3f0a:;
  /* 112d3f0a push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3f0c push 0 */
  push32((uint32_t)(0x0u));
  /* 112d3f0e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112d3f11 push ecx */
  push32((uint32_t)(ECX));
  /* 112d3f12 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d3f15 push edx */
  push32((uint32_t)(EDX));
  /* 112d3f16 push 9 */
  push32((uint32_t)(0x9u));
  /* 112d3f18 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 112d3f1b push eax */
  push32((uint32_t)(EAX));
  /* 112d3f1c call dword ptr [0x112f2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2308))), 0x112d3f22u);
  /* 112d3f22 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112d3f25 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3f29 jne 0x112d3f32 */
  if (!C.zf) goto L_112d3f32;
  /* 112d3f2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3f2d jmp 0x112d3fc4 */
  goto L_112d3fc4;
L_112d3f32:;
  /* 112d3f32 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112d3f39 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112d3f3c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 112d3f3e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d3f41 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 112d3f43 call 0x112c71d0 */
  push32(0x112d3f48u); f_112c71d0();
  /* 112d3f48 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 112d3f4b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112d3f4e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 112d3f51 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 112d3f54 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 112d3f5b jmp 0x112d3f74 */
  goto L_112d3f74;
  /* 112d3f5d mov eax, 1 */
  EAX = (0x1u);
  /* 112d3f62 ret  */
  ESPCHK(0x112d3be0u, _esp0);
  ESP += 4; return;
  /* 112d3f63 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 112d3f66 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 112d3f6d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_112d3f74:;
  /* 112d3f74 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d3f78 jne 0x112d3f7e */
  if (!C.zf) goto L_112d3f7e;
  /* 112d3f7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3f7c jmp 0x112d3fc4 */
  goto L_112d3fc4;
L_112d3f7e:;
  /* 112d3f7e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 112d3f81 push edx */
  push32((uint32_t)(EDX));
  /* 112d3f82 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112d3f85 push eax */
  push32((uint32_t)(EAX));
  /* 112d3f86 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 112d3f89 push ecx */
  push32((uint32_t)(ECX));
  /* 112d3f8a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112d3f8d push edx */
  push32((uint32_t)(EDX));
  /* 112d3f8e push 1 */
  push32((uint32_t)(0x1u));
  /* 112d3f90 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 112d3f93 push eax */
  push32((uint32_t)(EAX));
  /* 112d3f94 call dword ptr [0x112f2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2308))), 0x112d3f9au);
  /* 112d3f9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d3f9c jne 0x112d3fa2 */
  if (!C.zf) goto L_112d3fa2;
  /* 112d3f9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d3fa0 jmp 0x112d3fc4 */
  goto L_112d3fc4;
L_112d3fa2:;
  /* 112d3fa2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112d3fa5 push ecx */
  push32((uint32_t)(ECX));
  /* 112d3fa6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 112d3fa9 push edx */
  push32((uint32_t)(EDX));
  /* 112d3faa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112d3fad push eax */
  push32((uint32_t)(EAX));
  /* 112d3fae mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112d3fb1 push ecx */
  push32((uint32_t)(ECX));
  /* 112d3fb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d3fb5 push edx */
  push32((uint32_t)(EDX));
  /* 112d3fb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d3fb9 push eax */
  push32((uint32_t)(EAX));
  /* 112d3fba call dword ptr [0x112f22bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22bc))), 0x112d3fc0u);
  /* 112d3fc0 jmp 0x112d3fc4 */
  goto L_112d3fc4;
L_112d3fc2:;
  /* 112d3fc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112d3fc4:;
  /* 112d3fc4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 112d3fc7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d3fca mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 112d3fd1 pop edi */
  EDI = (pop32());
  /* 112d3fd2 pop esi */
  ESI = (pop32());
  /* 112d3fd3 pop ebx */
  EBX = (pop32());
  /* 112d3fd4 mov esp, ebp */
  ESP = (EBP);
  /* 112d3fd6 pop ebp */
  EBP = (pop32());
  /* 112d3fd7 ret  */
  ESPCHK(0x112d3be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013fe0 @ 0x112d3fe0 (80 bytes, 32 insns) */
void f_112d3fe0(void) {
  FTRACE(0x112d3fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d3fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 112d3fe1 mov ebp, esp */
  EBP = (ESP);
  /* 112d3fe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d3fe6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d3fe9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112d3fec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d3fef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112d3ff2:;
  /* 112d3ff2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d3ff5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d3ff8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d3ffb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112d3ffe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d4000 je 0x112d4017 */
  if (C.zf) goto L_112d4017;
  /* 112d4002 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d4005 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112d4008 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d400a je 0x112d4017 */
  if (C.zf) goto L_112d4017;
  /* 112d400c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d400f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d4012 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112d4015 jmp 0x112d3ff2 */
  goto L_112d3ff2;
L_112d4017:;
  /* 112d4017 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d401a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112d401d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d401f jne 0x112d4029 */
  if (!C.zf) goto L_112d4029;
  /* 112d4021 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d4024 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d4027 jmp 0x112d402c */
  goto L_112d402c;
L_112d4029:;
  /* 112d4029 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_112d402c:;
  /* 112d402c mov esp, ebp */
  ESP = (EBP);
  /* 112d402e pop ebp */
  EBP = (pop32());
  /* 112d402f ret  */
  ESPCHK(0x112d3fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014030 @ 0x112d4030 (736 bytes, 224 insns) */
void f_112d4030(void) {
  FTRACE(0x112d4030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d4030 push ebp */
  push32((uint32_t)(EBP));
  /* 112d4031 mov ebp, esp */
  EBP = (ESP);
  /* 112d4033 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d4036 push esi */
  push32((uint32_t)(ESI));
  /* 112d4037 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d403b je 0x112d405c */
  if (C.zf) goto L_112d405c;
  /* 112d403d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 112d403f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d4042 push eax */
  push32((uint32_t)(EAX));
  /* 112d4043 call 0x112d4480 */
  push32(0x112d4048u); f_112d4480();
  /* 112d4048 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d404b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112d404e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d4052 je 0x112d405c */
  if (C.zf) goto L_112d405c;
  /* 112d4054 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d4057 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d405a jne 0x112d4064 */
  if (!C.zf) goto L_112d4064;
L_112d405c:;
  /* 112d405c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d405f jmp 0x112d430b */
  goto L_112d430b;
L_112d4064:;
  /* 112d4064 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112d4067 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 112d406b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112d406d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d406f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112d4070 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112d4073 mov ecx, dword ptr [0x112ef554] */
  ECX = (r32((uint32_t)(0x112ef554)));
  /* 112d4079 cmp ecx, dword ptr [0x112ef558] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112ef558))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d407f jne 0x112d4095 */
  if (!C.zf) goto L_112d4095;
  /* 112d4081 mov edx, dword ptr [0x112ef554] */
  EDX = (r32((uint32_t)(0x112ef554)));
  /* 112d4087 push edx */
  push32((uint32_t)(EDX));
  /* 112d4088 call 0x112d4390 */
  push32(0x112d408du); f_112d4390();
  /* 112d408d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d4090 mov dword ptr [0x112ef554], eax */
  w32((uint32_t)(0x112ef554), (EAX));
L_112d4095:;
  /* 112d4095 cmp dword ptr [0x112ef554], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef554))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d409c jne 0x112d4155 */
  if (!C.zf) goto L_112d4155;
  /* 112d40a2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d40a6 je 0x112d40c7 */
  if (C.zf) goto L_112d40c7;
  /* 112d40a8 cmp dword ptr [0x112ef55c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef55c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d40af je 0x112d40c7 */
  if (C.zf) goto L_112d40c7;
  /* 112d40b1 call 0x112d3b30 */
  push32(0x112d40b6u); f_112d3b30();
  /* 112d40b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d40b8 je 0x112d40c2 */
  if (C.zf) goto L_112d40c2;
  /* 112d40ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d40bd jmp 0x112d430b */
  goto L_112d430b;
L_112d40c2:;
  /* 112d40c2 jmp 0x112d4155 */
  goto L_112d4155;
L_112d40c7:;
  /* 112d40c7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d40cb je 0x112d40d4 */
  if (C.zf) goto L_112d40d4;
  /* 112d40cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d40cf jmp 0x112d430b */
  goto L_112d430b;
L_112d40d4:;
  /* 112d40d4 cmp dword ptr [0x112ef554], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef554))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d40db jne 0x112d4114 */
  if (!C.zf) goto L_112d4114;
  /* 112d40dd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 112d40e2 push 0x112eba50 */
  push32((uint32_t)(0x112eba50u));
  /* 112d40e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112d40e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 112d40eb call 0x112c4030 */
  push32(0x112d40f0u); f_112c4030();
  /* 112d40f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d40f3 mov dword ptr [0x112ef554], eax */
  w32((uint32_t)(0x112ef554), (EAX));
  /* 112d40f8 cmp dword ptr [0x112ef554], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef554))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d40ff jne 0x112d4109 */
  if (!C.zf) goto L_112d4109;
  /* 112d4101 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d4104 jmp 0x112d430b */
  goto L_112d430b;
L_112d4109:;
  /* 112d4109 mov eax, dword ptr [0x112ef554] */
  EAX = (r32((uint32_t)(0x112ef554)));
  /* 112d410e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_112d4114:;
  /* 112d4114 cmp dword ptr [0x112ef55c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef55c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d411b jne 0x112d4155 */
  if (!C.zf) goto L_112d4155;
  /* 112d411d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 112d4122 push 0x112eba50 */
  push32((uint32_t)(0x112eba50u));
  /* 112d4127 push 2 */
  push32((uint32_t)(0x2u));
  /* 112d4129 push 4 */
  push32((uint32_t)(0x4u));
  /* 112d412b call 0x112c4030 */
  push32(0x112d4130u); f_112c4030();
  /* 112d4130 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d4133 mov dword ptr [0x112ef55c], eax */
  w32((uint32_t)(0x112ef55c), (EAX));
  /* 112d4138 cmp dword ptr [0x112ef55c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef55c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d413f jne 0x112d4149 */
  if (!C.zf) goto L_112d4149;
  /* 112d4141 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d4144 jmp 0x112d430b */
  goto L_112d430b;
L_112d4149:;
  /* 112d4149 mov ecx, dword ptr [0x112ef55c] */
  ECX = (r32((uint32_t)(0x112ef55c)));
  /* 112d414f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_112d4155:;
  /* 112d4155 mov edx, dword ptr [0x112ef554] */
  EDX = (r32((uint32_t)(0x112ef554)));
  /* 112d415b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112d415e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112d4161 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d4164 push eax */
  push32((uint32_t)(EAX));
  /* 112d4165 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d4168 push ecx */
  push32((uint32_t)(ECX));
  /* 112d4169 call 0x112d4310 */
  push32(0x112d416eu); f_112d4310();
  /* 112d416e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d4171 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112d4174 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d4178 jl 0x112d4211 */
  if ((C.sf!=C.of)) goto L_112d4211;
  /* 112d417e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d4181 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d4184 je 0x112d4211 */
  if (C.zf) goto L_112d4211;
  /* 112d418a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d418e je 0x112d4203 */
  if (C.zf) goto L_112d4203;
  /* 112d4190 push 2 */
  push32((uint32_t)(0x2u));
  /* 112d4192 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d4195 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d4198 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 112d419b push edx */
  push32((uint32_t)(EDX));
  /* 112d419c call 0x112c4ac0 */
  push32(0x112d41a1u); f_112c4ac0();
  /* 112d41a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d41a4 jmp 0x112d41af */
  goto L_112d41af;
L_112d41a6:;
  /* 112d41a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d41a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d41ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112d41af:;
  /* 112d41af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d41b2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d41b5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d41b9 je 0x112d41d0 */
  if (C.zf) goto L_112d41d0;
  /* 112d41bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d41be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d41c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d41c4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 112d41c7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 112d41cb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 112d41ce jmp 0x112d41a6 */
  goto L_112d41a6;
L_112d41d0:;
  /* 112d41d0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 112d41d5 push 0x112eba50 */
  push32((uint32_t)(0x112eba50u));
  /* 112d41da push 2 */
  push32((uint32_t)(0x2u));
  /* 112d41dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d41df shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 112d41e2 push eax */
  push32((uint32_t)(EAX));
  /* 112d41e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d41e6 push ecx */
  push32((uint32_t)(ECX));
  /* 112d41e7 call 0x112c44c0 */
  push32(0x112d41ecu); f_112c44c0();
  /* 112d41ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d41ef mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112d41f2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d41f6 je 0x112d4201 */
  if (C.zf) goto L_112d4201;
  /* 112d41f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d41fb mov dword ptr [0x112ef554], edx */
  w32((uint32_t)(0x112ef554), (EDX));
L_112d4201:;
  /* 112d4201 jmp 0x112d420f */
  goto L_112d420f;
L_112d4203:;
  /* 112d4203 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d4206 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d4209 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d420c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_112d420f:;
  /* 112d420f jmp 0x112d4284 */
  goto L_112d4284;
L_112d4211:;
  /* 112d4211 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d4215 jne 0x112d427d */
  if (!C.zf) goto L_112d427d;
  /* 112d4217 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d421b jge 0x112d4225 */
  if ((C.sf==C.of)) goto L_112d4225;
  /* 112d421d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d4220 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112d4222 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112d4225:;
  /* 112d4225 push 0xce */
  push32((uint32_t)(0xceu));
  /* 112d422a push 0x112eba50 */
  push32((uint32_t)(0x112eba50u));
  /* 112d422f push 2 */
  push32((uint32_t)(0x2u));
  /* 112d4231 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d4234 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 112d423b push edx */
  push32((uint32_t)(EDX));
  /* 112d423c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d423f push eax */
  push32((uint32_t)(EAX));
  /* 112d4240 call 0x112c44c0 */
  push32(0x112d4245u); f_112c44c0();
  /* 112d4245 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d4248 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112d424b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d424f jne 0x112d4259 */
  if (!C.zf) goto L_112d4259;
  /* 112d4251 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d4254 jmp 0x112d430b */
  goto L_112d430b;
L_112d4259:;
  /* 112d4259 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d425c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d425f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d4262 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 112d4265 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d4268 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d426b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 112d4273 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d4276 mov dword ptr [0x112ef554], eax */
  w32((uint32_t)(0x112ef554), (EAX));
  /* 112d427b jmp 0x112d4284 */
  goto L_112d4284;
L_112d427d:;
  /* 112d427d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d427f jmp 0x112d430b */
  goto L_112d430b;
L_112d4284:;
  /* 112d4284 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d4288 je 0x112d4309 */
  if (C.zf) goto L_112d4309;
  /* 112d428a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 112d428f push 0x112eba50 */
  push32((uint32_t)(0x112eba50u));
  /* 112d4294 push 2 */
  push32((uint32_t)(0x2u));
  /* 112d4296 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d4299 push ecx */
  push32((uint32_t)(ECX));
  /* 112d429a call 0x112c6e60 */
  push32(0x112d429fu); f_112c6e60();
  /* 112d429f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d42a2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d42a5 push eax */
  push32((uint32_t)(EAX));
  /* 112d42a6 call 0x112c4030 */
  push32(0x112d42abu); f_112c4030();
  /* 112d42ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d42ae mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112d42b1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d42b5 je 0x112d4309 */
  if (C.zf) goto L_112d4309;
  /* 112d42b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d42ba push edx */
  push32((uint32_t)(EDX));
  /* 112d42bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d42be push eax */
  push32((uint32_t)(EAX));
  /* 112d42bf call 0x112c6fe0 */
  push32(0x112d42c4u); f_112c6fe0();
  /* 112d42c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d42c7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112d42ca sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d42cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d42d0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d42d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112d42d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d42d8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 112d42db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d42de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d42e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112d42e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112d42e7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 112d42e9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d42eb not edx */
  EDX = (~(EDX));
  /* 112d42ed and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 112d42f0 push edx */
  push32((uint32_t)(EDX));
  /* 112d42f1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d42f4 push eax */
  push32((uint32_t)(EAX));
  /* 112d42f5 call dword ptr [0x112f22b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22b8))), 0x112d42fbu);
  /* 112d42fb push 2 */
  push32((uint32_t)(0x2u));
  /* 112d42fd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d4300 push ecx */
  push32((uint32_t)(ECX));
  /* 112d4301 call 0x112c4ac0 */
  push32(0x112d4306u); f_112c4ac0();
  /* 112d4306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112d4309:;
  /* 112d4309 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112d430b:;
  /* 112d430b pop esi */
  ESI = (pop32());
  /* 112d430c mov esp, ebp */
  ESP = (EBP);
  /* 112d430e pop ebp */
  EBP = (pop32());
  /* 112d430f ret  */
  ESPCHK(0x112d4030u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x112d4310 (124 bytes, 47 insns) */
void f_112d4310(void) {
  FTRACE(0x112d4310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d4310 push ebp */
  push32((uint32_t)(EBP));
  /* 112d4311 mov ebp, esp */
  EBP = (ESP);
  /* 112d4313 push ecx */
  push32((uint32_t)(ECX));
  /* 112d4314 mov eax, dword ptr [0x112ef554] */
  EAX = (r32((uint32_t)(0x112ef554)));
  /* 112d4319 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112d431c jmp 0x112d4327 */
  goto L_112d4327;
L_112d431e:;
  /* 112d431e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d4321 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d4324 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112d4327:;
  /* 112d4327 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d432a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d432d je 0x112d437a */
  if (C.zf) goto L_112d437a;
  /* 112d432f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d4332 push eax */
  push32((uint32_t)(EAX));
  /* 112d4333 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d4336 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d4338 push edx */
  push32((uint32_t)(EDX));
  /* 112d4339 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d433c push eax */
  push32((uint32_t)(EAX));
  /* 112d433d call 0x112d3ae0 */
  push32(0x112d4342u); f_112d3ae0();
  /* 112d4342 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d4345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112d4347 jne 0x112d4378 */
  if (!C.zf) goto L_112d4378;
  /* 112d4349 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d434c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d434e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d4351 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 112d4355 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d4358 je 0x112d436a */
  if (C.zf) goto L_112d436a;
  /* 112d435a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d435d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112d435f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d4362 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 112d4366 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d4368 jne 0x112d4378 */
  if (!C.zf) goto L_112d4378;
L_112d436a:;
  /* 112d436a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d436d sub eax, dword ptr [0x112ef554] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112ef554))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d4373 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 112d4376 jmp 0x112d4388 */
  goto L_112d4388;
L_112d4378:;
  /* 112d4378 jmp 0x112d431e */
  goto L_112d431e;
L_112d437a:;
  /* 112d437a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d437d sub eax, dword ptr [0x112ef554] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112ef554))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d4383 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 112d4386 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_112d4388:;
  /* 112d4388 mov esp, ebp */
  ESP = (EBP);
  /* 112d438a pop ebp */
  EBP = (pop32());
  /* 112d438b ret  */
  ESPCHK(0x112d4310u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x112d4390 (238 bytes, 80 insns) */
void f_112d4390(void) {
  FTRACE(0x112d4390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d4390 push ebp */
  push32((uint32_t)(EBP));
  /* 112d4391 mov ebp, esp */
  EBP = (ESP);
  /* 112d4393 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d4396 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 112d439d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d43a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112d43a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d43a7 jne 0x112d43b0 */
  if (!C.zf) goto L_112d43b0;
  /* 112d43a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d43ab jmp 0x112d447a */
  goto L_112d447a;
L_112d43b0:;
  /* 112d43b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d43b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d43b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d43b8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d43bb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112d43be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d43c0 je 0x112d43cd */
  if (C.zf) goto L_112d43cd;
  /* 112d43c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d43c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d43c8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112d43cb jmp 0x112d43b0 */
  goto L_112d43b0;
L_112d43cd:;
  /* 112d43cd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 112d43d2 push 0x112eba50 */
  push32((uint32_t)(0x112eba50u));
  /* 112d43d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112d43d9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112d43dc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 112d43e3 push eax */
  push32((uint32_t)(EAX));
  /* 112d43e4 call 0x112c4030 */
  push32(0x112d43e9u); f_112c4030();
  /* 112d43e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d43ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112d43ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d43f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112d43f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d43f9 jne 0x112d4405 */
  if (!C.zf) goto L_112d4405;
  /* 112d43fb push 9 */
  push32((uint32_t)(0x9u));
  /* 112d43fd call 0x112c2fa0 */
  push32(0x112d4402u); f_112c2fa0();
  /* 112d4402 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112d4405:;
  /* 112d4405 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d4408 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_112d440b:;
  /* 112d440b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d440e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d4411 je 0x112d446e */
  if (C.zf) goto L_112d446e;
  /* 112d4413 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 112d4418 push 0x112eba50 */
  push32((uint32_t)(0x112eba50u));
  /* 112d441d push 2 */
  push32((uint32_t)(0x2u));
  /* 112d441f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d4422 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112d4424 push edx */
  push32((uint32_t)(EDX));
  /* 112d4425 call 0x112c6e60 */
  push32(0x112d442au); f_112c6e60();
  /* 112d442a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d442d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d4430 push eax */
  push32((uint32_t)(EAX));
  /* 112d4431 call 0x112c4030 */
  push32(0x112d4436u); f_112c4030();
  /* 112d4436 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d4439 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d443c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112d443e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d4441 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d4444 je 0x112d445a */
  if (C.zf) goto L_112d445a;
  /* 112d4446 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d4449 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112d444b push ecx */
  push32((uint32_t)(ECX));
  /* 112d444c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d444f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112d4451 push eax */
  push32((uint32_t)(EAX));
  /* 112d4452 call 0x112c6fe0 */
  push32(0x112d4457u); f_112c6fe0();
  /* 112d4457 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112d445a:;
  /* 112d445a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112d445d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d4460 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112d4463 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d4466 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d4469 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112d446c jmp 0x112d440b */
  goto L_112d440b;
L_112d446e:;
  /* 112d446e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112d4471 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112d4477 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_112d447a:;
  /* 112d447a mov esp, ebp */
  ESP = (EBP);
  /* 112d447c pop ebp */
  EBP = (pop32());
  /* 112d447d ret  */
  ESPCHK(0x112d4390u, _esp0);
  ESP += 4; return;
}

/* FUN_10014480 @ 0x112d4480 (237 bytes, 81 insns) */
void f_112d4480(void) {
  FTRACE(0x112d4480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d4480 push ebp */
  push32((uint32_t)(EBP));
  /* 112d4481 mov ebp, esp */
  EBP = (ESP);
  /* 112d4483 push ecx */
  push32((uint32_t)(ECX));
  /* 112d4484 cmp dword ptr [0x112f0cac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112f0cac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d448b jne 0x112d44a2 */
  if (!C.zf) goto L_112d44a2;
  /* 112d448d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112d4490 push eax */
  push32((uint32_t)(EAX));
  /* 112d4491 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d4494 push ecx */
  push32((uint32_t)(ECX));
  /* 112d4495 call 0x112d4580 */
  push32(0x112d449au); f_112d4580();
  /* 112d449a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d449d jmp 0x112d4569 */
  goto L_112d4569;
L_112d44a2:;
  /* 112d44a2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112d44a4 call 0x112c7a30 */
  push32(0x112d44a9u); f_112c7a30();
  /* 112d44a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d44ac jmp 0x112d44b7 */
  goto L_112d44b7;
L_112d44ae:;
  /* 112d44ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d44b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d44b4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_112d44b7:;
  /* 112d44b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d44ba movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 112d44be mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 112d44c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d44c5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112d44cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112d44cd je 0x112d454b */
  if (C.zf) goto L_112d454b;
  /* 112d44cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d44d2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d44d7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d44d9 mov cl, byte ptr [eax + 0x112f0dc1] */
  CL = (r8((uint32_t)(EAX + 0x112f0dc1)));
  /* 112d44df and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 112d44e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112d44e4 je 0x112d4536 */
  if (C.zf) goto L_112d4536;
  /* 112d44e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d44e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d44ec mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 112d44ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d44f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d44f4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112d44f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112d44f8 jne 0x112d4508 */
  if (!C.zf) goto L_112d4508;
  /* 112d44fa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112d44fc call 0x112c7ad0 */
  push32(0x112d4501u); f_112c7ad0();
  /* 112d4501 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d4504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d4506 jmp 0x112d4569 */
  goto L_112d4569;
L_112d4508:;
  /* 112d4508 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d450b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112d4511 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 112d4514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d4517 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112d4519 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112d451b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112d451d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d4520 jne 0x112d4534 */
  if (!C.zf) goto L_112d4534;
  /* 112d4522 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112d4524 call 0x112c7ad0 */
  push32(0x112d4529u); f_112c7ad0();
  /* 112d4529 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d452c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d452f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112d4532 jmp 0x112d4569 */
  goto L_112d4569;
L_112d4534:;
  /* 112d4534 jmp 0x112d4546 */
  goto L_112d4546;
L_112d4536:;
  /* 112d4536 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d4539 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112d453f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d4542 jne 0x112d4546 */
  if (!C.zf) goto L_112d4546;
  /* 112d4544 jmp 0x112d454b */
  goto L_112d454b;
L_112d4546:;
  /* 112d4546 jmp 0x112d44ae */
  goto L_112d44ae;
L_112d454b:;
  /* 112d454b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112d454d call 0x112c7ad0 */
  push32(0x112d4552u); f_112c7ad0();
  /* 112d4552 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112d4555 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112d4558 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d455d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112d4560 jne 0x112d4567 */
  if (!C.zf) goto L_112d4567;
  /* 112d4562 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112d4565 jmp 0x112d4569 */
  goto L_112d4569;
L_112d4567:;
  /* 112d4567 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112d4569:;
  /* 112d4569 mov esp, ebp */
  ESP = (EBP);
  /* 112d456b pop ebp */
  EBP = (pop32());
  /* 112d456c ret  */
  ESPCHK(0x112d4480u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x112d4580 (193 bytes, 87 insns) */
void f_112d4580(void) {
  FTRACE(0x112d4580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d4580 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d4582 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 112d4586 push ebx */
  push32((uint32_t)(EBX));
  /* 112d4587 mov ebx, eax */
  EBX = (EAX);
  /* 112d4589 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 112d458c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 112d4590 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 112d4596 je 0x112d45ab */
  if (C.zf) goto L_112d45ab;
L_112d4598:;
  /* 112d4598 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 112d459a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 112d459b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112d459d je 0x112d4570 */
  if (C.zf) { jmp_ind(0x112d4570u); return; }
  /* 112d459f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 112d45a1 je 0x112d45f4 */
  if (C.zf) goto L_112d45f4;
  /* 112d45a3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 112d45a9 jne 0x112d4598 */
  if (!C.zf) goto L_112d4598;
L_112d45ab:;
  /* 112d45ab or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 112d45ad push edi */
  push32((uint32_t)(EDI));
  /* 112d45ae mov eax, ebx */
  EAX = (EBX);
  /* 112d45b0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 112d45b3 push esi */
  push32((uint32_t)(ESI));
  /* 112d45b4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_112d45b6:;
  /* 112d45b6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 112d45b8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 112d45bd mov eax, ecx */
  EAX = (ECX);
  /* 112d45bf mov esi, edi */
  ESI = (EDI);
  /* 112d45c1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 112d45c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112d45c5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112d45c7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112d45ca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112d45cd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 112d45cf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 112d45d1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112d45d4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 112d45da jne 0x112d45f8 */
  if (!C.zf) goto L_112d45f8;
  /* 112d45dc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 112d45e1 je 0x112d45b6 */
  if (C.zf) goto L_112d45b6;
  /* 112d45e3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 112d45e8 jne 0x112d45f2 */
  if (!C.zf) goto L_112d45f2;
  /* 112d45ea and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 112d45f0 jne 0x112d45b6 */
  if (!C.zf) goto L_112d45b6;
L_112d45f2:;
  /* 112d45f2 pop esi */
  ESI = (pop32());
  /* 112d45f3 pop edi */
  EDI = (pop32());
L_112d45f4:;
  /* 112d45f4 pop ebx */
  EBX = (pop32());
  /* 112d45f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112d45f7 ret  */
  ESPCHK(0x112d4580u, _esp0);
  ESP += 4; return;
L_112d45f8:;
  /* 112d45f8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 112d45fb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112d45fd je 0x112d4635 */
  if (C.zf) goto L_112d4635;
  /* 112d45ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112d4601 je 0x112d45f2 */
  if (C.zf) goto L_112d45f2;
  /* 112d4603 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112d4605 je 0x112d462e */
  if (C.zf) goto L_112d462e;
  /* 112d4607 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 112d4609 je 0x112d45f2 */
  if (C.zf) goto L_112d45f2;
  /* 112d460b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 112d460e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112d4610 je 0x112d4627 */
  if (C.zf) goto L_112d4627;
  /* 112d4612 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112d4614 je 0x112d45f2 */
  if (C.zf) goto L_112d45f2;
  /* 112d4616 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112d4618 je 0x112d4620 */
  if (C.zf) goto L_112d4620;
  /* 112d461a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 112d461c je 0x112d45f2 */
  if (C.zf) goto L_112d45f2;
  /* 112d461e jmp 0x112d45b6 */
  goto L_112d45b6;
L_112d4620:;
  /* 112d4620 pop esi */
  ESI = (pop32());
  /* 112d4621 pop edi */
  EDI = (pop32());
  /* 112d4622 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 112d4625 pop ebx */
  EBX = (pop32());
  /* 112d4626 ret  */
  ESPCHK(0x112d4580u, _esp0);
  ESP += 4; return;
L_112d4627:;
  /* 112d4627 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 112d462a pop esi */
  ESI = (pop32());
  /* 112d462b pop edi */
  EDI = (pop32());
  /* 112d462c pop ebx */
  EBX = (pop32());
  /* 112d462d ret  */
  ESPCHK(0x112d4580u, _esp0);
  ESP += 4; return;
L_112d462e:;
  /* 112d462e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 112d4631 pop esi */
  ESI = (pop32());
  /* 112d4632 pop edi */
  EDI = (pop32());
  /* 112d4633 pop ebx */
  EBX = (pop32());
  /* 112d4634 ret  */
  ESPCHK(0x112d4580u, _esp0);
  ESP += 4; return;
L_112d4635:;
  /* 112d4635 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 112d4638 pop esi */
  ESI = (pop32());
  /* 112d4639 pop edi */
  EDI = (pop32());
  /* 112d463a pop ebx */
  EBX = (pop32());
  /* 112d463b ret  */
  ESPCHK(0x112d4580u, _esp0);
  ESP += 4; return;
  /* 112d463c jmp dword ptr [0x112f2354] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x112f2354)))); return;
}

/* RtlUnwind @ 0x112d478c (6 bytes, 1 insns) */
void f_112d478c(void) {
  FTRACE(0x112d478cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112d478c jmp dword ptr [0x112f22f0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x112f22f0)))); return;
}

