#include "recomp.h"

/* ___free_lc_time @ 0x11fa1240 (779 bytes, 265 insns) */
void f_11fa1240(void) {
  FTRACE(0x11fa1240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa1240 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa1241 mov ebp, esp */
  EBP = (ESP);
  /* 11fa1243 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1247 jne 0x11fa124e */
  if (!C.zf) goto L_11fa124e;
  /* 11fa1249 jmp 0x11fa1549 */
  goto L_11fa1549;
L_11fa124e:;
  /* 11fa124e push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1250 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1253 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fa1256 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1257 call 0x11f96e90 */
  push32(0x11fa125cu); f_11f96e90();
  /* 11fa125c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa125f push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1261 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1264 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fa1267 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1268 call 0x11f96e90 */
  push32(0x11fa126du); f_11f96e90();
  /* 11fa126d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1270 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1272 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1275 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fa1278 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1279 call 0x11f96e90 */
  push32(0x11fa127eu); f_11f96e90();
  /* 11fa127e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1281 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1283 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1286 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fa1289 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa128a call 0x11f96e90 */
  push32(0x11fa128fu); f_11f96e90();
  /* 11fa128f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1292 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1294 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1297 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fa129a push eax */
  push32((uint32_t)(EAX));
  /* 11fa129b call 0x11f96e90 */
  push32(0x11fa12a0u); f_11f96e90();
  /* 11fa12a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa12a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa12a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa12a8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11fa12ab push edx */
  push32((uint32_t)(EDX));
  /* 11fa12ac call 0x11f96e90 */
  push32(0x11fa12b1u); f_11f96e90();
  /* 11fa12b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa12b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa12b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa12b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fa12bb push ecx */
  push32((uint32_t)(ECX));
  /* 11fa12bc call 0x11f96e90 */
  push32(0x11fa12c1u); f_11f96e90();
  /* 11fa12c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa12c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa12c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa12c9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11fa12cc push eax */
  push32((uint32_t)(EAX));
  /* 11fa12cd call 0x11f96e90 */
  push32(0x11fa12d2u); f_11f96e90();
  /* 11fa12d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa12d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa12d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa12da mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11fa12dd push edx */
  push32((uint32_t)(EDX));
  /* 11fa12de call 0x11f96e90 */
  push32(0x11fa12e3u); f_11f96e90();
  /* 11fa12e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa12e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa12e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa12eb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11fa12ee push ecx */
  push32((uint32_t)(ECX));
  /* 11fa12ef call 0x11f96e90 */
  push32(0x11fa12f4u); f_11f96e90();
  /* 11fa12f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa12f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa12f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa12fc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 11fa12ff push eax */
  push32((uint32_t)(EAX));
  /* 11fa1300 call 0x11f96e90 */
  push32(0x11fa1305u); f_11f96e90();
  /* 11fa1305 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1308 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa130a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa130d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11fa1310 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1311 call 0x11f96e90 */
  push32(0x11fa1316u); f_11f96e90();
  /* 11fa1316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1319 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa131b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa131e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11fa1321 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1322 call 0x11f96e90 */
  push32(0x11fa1327u); f_11f96e90();
  /* 11fa1327 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa132a push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa132c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa132f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11fa1332 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1333 call 0x11f96e90 */
  push32(0x11fa1338u); f_11f96e90();
  /* 11fa1338 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa133b push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa133d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1340 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11fa1343 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1344 call 0x11f96e90 */
  push32(0x11fa1349u); f_11f96e90();
  /* 11fa1349 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa134c push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa134e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1351 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11fa1354 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1355 call 0x11f96e90 */
  push32(0x11fa135au); f_11f96e90();
  /* 11fa135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa135d push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa135f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1362 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11fa1365 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1366 call 0x11f96e90 */
  push32(0x11fa136bu); f_11f96e90();
  /* 11fa136b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa136e push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1370 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1373 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11fa1376 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1377 call 0x11f96e90 */
  push32(0x11fa137cu); f_11f96e90();
  /* 11fa137c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa137f push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1381 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1384 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11fa1387 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1388 call 0x11f96e90 */
  push32(0x11fa138du); f_11f96e90();
  /* 11fa138d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1390 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1392 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1395 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11fa1398 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1399 call 0x11f96e90 */
  push32(0x11fa139eu); f_11f96e90();
  /* 11fa139e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa13a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa13a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa13a6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11fa13a9 push edx */
  push32((uint32_t)(EDX));
  /* 11fa13aa call 0x11f96e90 */
  push32(0x11fa13afu); f_11f96e90();
  /* 11fa13af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa13b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa13b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa13b7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11fa13ba push ecx */
  push32((uint32_t)(ECX));
  /* 11fa13bb call 0x11f96e90 */
  push32(0x11fa13c0u); f_11f96e90();
  /* 11fa13c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa13c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa13c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa13c8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 11fa13cb push eax */
  push32((uint32_t)(EAX));
  /* 11fa13cc call 0x11f96e90 */
  push32(0x11fa13d1u); f_11f96e90();
  /* 11fa13d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa13d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa13d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa13d9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 11fa13dc push edx */
  push32((uint32_t)(EDX));
  /* 11fa13dd call 0x11f96e90 */
  push32(0x11fa13e2u); f_11f96e90();
  /* 11fa13e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa13e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa13e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa13ea mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 11fa13ed push ecx */
  push32((uint32_t)(ECX));
  /* 11fa13ee call 0x11f96e90 */
  push32(0x11fa13f3u); f_11f96e90();
  /* 11fa13f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa13f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa13f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa13fb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 11fa13fe push eax */
  push32((uint32_t)(EAX));
  /* 11fa13ff call 0x11f96e90 */
  push32(0x11fa1404u); f_11f96e90();
  /* 11fa1404 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1407 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1409 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa140c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 11fa140f push edx */
  push32((uint32_t)(EDX));
  /* 11fa1410 call 0x11f96e90 */
  push32(0x11fa1415u); f_11f96e90();
  /* 11fa1415 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1418 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa141a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa141d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11fa1420 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1421 call 0x11f96e90 */
  push32(0x11fa1426u); f_11f96e90();
  /* 11fa1426 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1429 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa142b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa142e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11fa1431 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1432 call 0x11f96e90 */
  push32(0x11fa1437u); f_11f96e90();
  /* 11fa1437 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa143a push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa143c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa143f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11fa1442 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1443 call 0x11f96e90 */
  push32(0x11fa1448u); f_11f96e90();
  /* 11fa1448 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa144b push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa144d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1450 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11fa1453 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1454 call 0x11f96e90 */
  push32(0x11fa1459u); f_11f96e90();
  /* 11fa1459 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa145c push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa145e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1461 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11fa1464 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1465 call 0x11f96e90 */
  push32(0x11fa146au); f_11f96e90();
  /* 11fa146a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa146d push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa146f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1472 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11fa1478 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1479 call 0x11f96e90 */
  push32(0x11fa147eu); f_11f96e90();
  /* 11fa147e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1481 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1486 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 11fa148c push ecx */
  push32((uint32_t)(ECX));
  /* 11fa148d call 0x11f96e90 */
  push32(0x11fa1492u); f_11f96e90();
  /* 11fa1492 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1495 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1497 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa149a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11fa14a0 push eax */
  push32((uint32_t)(EAX));
  /* 11fa14a1 call 0x11f96e90 */
  push32(0x11fa14a6u); f_11f96e90();
  /* 11fa14a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa14a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa14ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa14ae mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11fa14b4 push edx */
  push32((uint32_t)(EDX));
  /* 11fa14b5 call 0x11f96e90 */
  push32(0x11fa14bau); f_11f96e90();
  /* 11fa14ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa14bd push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa14bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa14c2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11fa14c8 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa14c9 call 0x11f96e90 */
  push32(0x11fa14ceu); f_11f96e90();
  /* 11fa14ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa14d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa14d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa14d6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 11fa14dc push eax */
  push32((uint32_t)(EAX));
  /* 11fa14dd call 0x11f96e90 */
  push32(0x11fa14e2u); f_11f96e90();
  /* 11fa14e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa14e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa14e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa14ea mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11fa14f0 push edx */
  push32((uint32_t)(EDX));
  /* 11fa14f1 call 0x11f96e90 */
  push32(0x11fa14f6u); f_11f96e90();
  /* 11fa14f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa14f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa14fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa14fe mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11fa1504 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1505 call 0x11f96e90 */
  push32(0x11fa150au); f_11f96e90();
  /* 11fa150a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa150d push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa150f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1512 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11fa1518 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1519 call 0x11f96e90 */
  push32(0x11fa151eu); f_11f96e90();
  /* 11fa151e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1521 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1523 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1526 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11fa152c push edx */
  push32((uint32_t)(EDX));
  /* 11fa152d call 0x11f96e90 */
  push32(0x11fa1532u); f_11f96e90();
  /* 11fa1532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1535 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1537 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa153a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11fa1540 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1541 call 0x11f96e90 */
  push32(0x11fa1546u); f_11f96e90();
  /* 11fa1546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa1549:;
  /* 11fa1549 pop ebp */
  EBP = (pop32());
  /* 11fa154a ret  */
  ESPCHK(0x11fa1240u, _esp0);
  ESP += 4; return;
}

/* FUN_10011550 @ 0x11fa1550 (678 bytes, 180 insns) */
void f_11fa1550(void) {
  FTRACE(0x11fa1550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa1550 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa1551 mov ebp, esp */
  EBP = (ESP);
  /* 11fa1553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa1556 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fa155d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa155f mov ax, word ptr [0x11fc2922] */
  AX = (r16((uint32_t)(0x11fc2922)));
  /* 11fa1565 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa1568 cmp dword ptr [0x11fc28c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc28c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa156f je 0x11fa16ca */
  if (C.zf) goto L_11fa16ca;
  /* 11fa1575 push 0x11fc28f0 */
  push32((uint32_t)(0x11fc28f0u));
  /* 11fa157a push 0xe */
  push32((uint32_t)(0xeu));
  /* 11fa157c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa157f push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1580 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa1582 call 0x11fa45c0 */
  push32(0x11fa1587u); f_11fa45c0();
  /* 11fa1587 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa158a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa158d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa158f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fa1592 push 0x11fc28f4 */
  push32((uint32_t)(0x11fc28f4u));
  /* 11fa1597 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11fa1599 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa159c push eax */
  push32((uint32_t)(EAX));
  /* 11fa159d push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa159f call 0x11fa45c0 */
  push32(0x11fa15a4u); f_11fa45c0();
  /* 11fa15a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa15a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa15aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa15ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa15af push 0x11fc28f8 */
  push32((uint32_t)(0x11fc28f8u));
  /* 11fa15b4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11fa15b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa15b9 push edx */
  push32((uint32_t)(EDX));
  /* 11fa15ba push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa15bc call 0x11fa45c0 */
  push32(0x11fa15c1u); f_11fa45c0();
  /* 11fa15c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa15c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa15c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa15c9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa15cc mov edx, dword ptr [0x11fc28f8] */
  EDX = (r32((uint32_t)(0x11fc28f8)));
  /* 11fa15d2 push edx */
  push32((uint32_t)(EDX));
  /* 11fa15d3 call 0x11fa1800 */
  push32(0x11fa15d8u); f_11fa1800();
  /* 11fa15d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa15db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa15df je 0x11fa1639 */
  if (C.zf) goto L_11fa1639;
  /* 11fa15e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa15e3 mov eax, dword ptr [0x11fc28f0] */
  EAX = (r32((uint32_t)(0x11fc28f0)));
  /* 11fa15e8 push eax */
  push32((uint32_t)(EAX));
  /* 11fa15e9 call 0x11f96e90 */
  push32(0x11fa15eeu); f_11f96e90();
  /* 11fa15ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa15f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa15f3 mov ecx, dword ptr [0x11fc28f4] */
  ECX = (r32((uint32_t)(0x11fc28f4)));
  /* 11fa15f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa15fa call 0x11f96e90 */
  push32(0x11fa15ffu); f_11f96e90();
  /* 11fa15ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1602 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1604 mov edx, dword ptr [0x11fc28f8] */
  EDX = (r32((uint32_t)(0x11fc28f8)));
  /* 11fa160a push edx */
  push32((uint32_t)(EDX));
  /* 11fa160b call 0x11f96e90 */
  push32(0x11fa1610u); f_11f96e90();
  /* 11fa1610 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1613 mov dword ptr [0x11fc28f0], 0 */
  w32((uint32_t)(0x11fc28f0), (0x0u));
  /* 11fa161d mov dword ptr [0x11fc28f4], 0 */
  w32((uint32_t)(0x11fc28f4), (0x0u));
  /* 11fa1627 mov dword ptr [0x11fc28f8], 0 */
  w32((uint32_t)(0x11fc28f8), (0x0u));
  /* 11fa1631 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa1634 jmp 0x11fa17f2 */
  goto L_11fa17f2;
L_11fa1639:;
  /* 11fa1639 mov eax, dword ptr [0x11fc1d98] */
  EAX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa163e cmp dword ptr [eax], 0x11fc1d60 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11fc1d60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1644 je 0x11fa1680 */
  if (C.zf) goto L_11fa1680;
  /* 11fa1646 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1648 mov ecx, dword ptr [0x11fc1d98] */
  ECX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa164e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa1650 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1651 call 0x11f96e90 */
  push32(0x11fa1656u); f_11f96e90();
  /* 11fa1656 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1659 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa165b mov eax, dword ptr [0x11fc1d98] */
  EAX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa1660 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fa1663 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1664 call 0x11f96e90 */
  push32(0x11fa1669u); f_11f96e90();
  /* 11fa1669 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa166c push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa166e mov edx, dword ptr [0x11fc1d98] */
  EDX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa1674 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fa1677 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1678 call 0x11f96e90 */
  push32(0x11fa167du); f_11f96e90();
  /* 11fa167d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa1680:;
  /* 11fa1680 mov ecx, dword ptr [0x11fc1d98] */
  ECX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa1686 mov edx, dword ptr [0x11fc28f0] */
  EDX = (r32((uint32_t)(0x11fc28f0)));
  /* 11fa168c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11fa168e mov eax, dword ptr [0x11fc1d98] */
  EAX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa1693 mov ecx, dword ptr [0x11fc28f4] */
  ECX = (r32((uint32_t)(0x11fc28f4)));
  /* 11fa1699 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11fa169c mov edx, dword ptr [0x11fc1d98] */
  EDX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa16a2 mov eax, dword ptr [0x11fc28f8] */
  EAX = (r32((uint32_t)(0x11fc28f8)));
  /* 11fa16a7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11fa16aa mov ecx, dword ptr [0x11fc1d98] */
  ECX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa16b0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa16b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa16b4 mov byte ptr [0x11fc0eb8], al */
  w8((uint32_t)(0x11fc0eb8), (AL));
  /* 11fa16b9 mov dword ptr [0x11fc0ebc], 1 */
  w32((uint32_t)(0x11fc0ebc), (0x1u));
  /* 11fa16c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa16c5 jmp 0x11fa17f2 */
  goto L_11fa17f2;
L_11fa16ca:;
  /* 11fa16ca push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa16cc mov ecx, dword ptr [0x11fc28f0] */
  ECX = (r32((uint32_t)(0x11fc28f0)));
  /* 11fa16d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa16d3 call 0x11f96e90 */
  push32(0x11fa16d8u); f_11f96e90();
  /* 11fa16d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa16db push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa16dd mov edx, dword ptr [0x11fc28f4] */
  EDX = (r32((uint32_t)(0x11fc28f4)));
  /* 11fa16e3 push edx */
  push32((uint32_t)(EDX));
  /* 11fa16e4 call 0x11f96e90 */
  push32(0x11fa16e9u); f_11f96e90();
  /* 11fa16e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa16ec push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa16ee mov eax, dword ptr [0x11fc28f8] */
  EAX = (r32((uint32_t)(0x11fc28f8)));
  /* 11fa16f3 push eax */
  push32((uint32_t)(EAX));
  /* 11fa16f4 call 0x11f96e90 */
  push32(0x11fa16f9u); f_11f96e90();
  /* 11fa16f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa16fc mov dword ptr [0x11fc28f0], 0 */
  w32((uint32_t)(0x11fc28f0), (0x0u));
  /* 11fa1706 mov dword ptr [0x11fc28f4], 0 */
  w32((uint32_t)(0x11fc28f4), (0x0u));
  /* 11fa1710 mov dword ptr [0x11fc28f8], 0 */
  w32((uint32_t)(0x11fc28f8), (0x0u));
  /* 11fa171a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11fa171f push 0x11fbe25c */
  push32((uint32_t)(0x11fbe25cu));
  /* 11fa1724 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1726 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1728 call 0x11f96400 */
  push32(0x11fa172du); f_11f96400();
  /* 11fa172d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1730 mov ecx, dword ptr [0x11fc1d98] */
  ECX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa1736 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fa1738 mov edx, dword ptr [0x11fc1d98] */
  EDX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa173e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1741 jne 0x11fa174b */
  if (!C.zf) goto L_11fa174b;
  /* 11fa1743 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa1746 jmp 0x11fa17f2 */
  goto L_11fa17f2;
L_11fa174b:;
  /* 11fa174b push 0x11fbe22c */
  push32((uint32_t)(0x11fbe22cu));
  /* 11fa1750 mov eax, dword ptr [0x11fc1d98] */
  EAX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa1755 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fa1757 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1758 call 0x11f993b0 */
  push32(0x11fa175du); f_11f993b0();
  /* 11fa175d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1760 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11fa1765 push 0x11fbe25c */
  push32((uint32_t)(0x11fbe25cu));
  /* 11fa176a push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa176c push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa176e call 0x11f96400 */
  push32(0x11fa1773u); f_11f96400();
  /* 11fa1773 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1776 mov edx, dword ptr [0x11fc1d98] */
  EDX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa177c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11fa177f mov eax, dword ptr [0x11fc1d98] */
  EAX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa1784 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1788 jne 0x11fa178f */
  if (!C.zf) goto L_11fa178f;
  /* 11fa178a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa178d jmp 0x11fa17f2 */
  goto L_11fa17f2;
L_11fa178f:;
  /* 11fa178f mov ecx, dword ptr [0x11fc1d98] */
  ECX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa1795 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fa1798 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11fa179b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11fa17a0 push 0x11fbe25c */
  push32((uint32_t)(0x11fbe25cu));
  /* 11fa17a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa17a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa17a9 call 0x11f96400 */
  push32(0x11fa17aeu); f_11f96400();
  /* 11fa17ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa17b1 mov ecx, dword ptr [0x11fc1d98] */
  ECX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa17b7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11fa17ba mov edx, dword ptr [0x11fc1d98] */
  EDX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa17c0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa17c4 jne 0x11fa17cb */
  if (!C.zf) goto L_11fa17cb;
  /* 11fa17c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa17c9 jmp 0x11fa17f2 */
  goto L_11fa17f2;
L_11fa17cb:;
  /* 11fa17cb mov eax, dword ptr [0x11fc1d98] */
  EAX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa17d0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fa17d3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11fa17d6 mov edx, dword ptr [0x11fc1d98] */
  EDX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa17dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fa17de mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fa17e0 mov byte ptr [0x11fc0eb8], cl */
  w8((uint32_t)(0x11fc0eb8), (CL));
  /* 11fa17e6 mov dword ptr [0x11fc0ebc], 1 */
  w32((uint32_t)(0x11fc0ebc), (0x1u));
  /* 11fa17f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fa17f2:;
  /* 11fa17f2 mov esp, ebp */
  ESP = (EBP);
  /* 11fa17f4 pop ebp */
  EBP = (pop32());
  /* 11fa17f5 ret  */
  ESPCHK(0x11fa1550u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11fa1800 (125 bytes, 49 insns) */
void f_11fa1800(void) {
  FTRACE(0x11fa1800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa1800 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa1801 mov ebp, esp */
  EBP = (ESP);
  /* 11fa1803 push ecx */
  push32((uint32_t)(ECX));
L_11fa1804:;
  /* 11fa1804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1807 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa180a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa180c je 0x11fa1879 */
  if (C.zf) goto L_11fa1879;
  /* 11fa180e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1811 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fa1814 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1817 jl 0x11fa183d */
  if ((C.sf!=C.of)) goto L_11fa183d;
  /* 11fa1819 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa181c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fa181f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1822 jg 0x11fa183d */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa183d;
  /* 11fa1824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1827 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa182a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa182d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1830 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11fa1832 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1835 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1838 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fa183b jmp 0x11fa1877 */
  goto L_11fa1877;
L_11fa183d:;
  /* 11fa183d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1840 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fa1843 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1846 jne 0x11fa186e */
  if (!C.zf) goto L_11fa186e;
  /* 11fa1848 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa184b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fa184e:;
  /* 11fa184e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1851 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1854 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11fa1857 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11fa1859 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa185c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa185f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fa1862 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1865 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fa1868 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa186a jne 0x11fa184e */
  if (!C.zf) goto L_11fa184e;
  /* 11fa186c jmp 0x11fa1877 */
  goto L_11fa1877;
L_11fa186e:;
  /* 11fa186e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1871 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1874 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11fa1877:;
  /* 11fa1877 jmp 0x11fa1804 */
  goto L_11fa1804;
L_11fa1879:;
  /* 11fa1879 mov esp, ebp */
  ESP = (EBP);
  /* 11fa187b pop ebp */
  EBP = (pop32());
  /* 11fa187c ret  */
  ESPCHK(0x11fa1800u, _esp0);
  ESP += 4; return;
}

/* FUN_10011880 @ 0x11fa1880 (304 bytes, 85 insns) */
void f_11fa1880(void) {
  FTRACE(0x11fa1880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa1880 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa1881 mov ebp, esp */
  EBP = (ESP);
  /* 11fa1883 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1884 cmp dword ptr [0x11fc28c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc28c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa188b je 0x11fa194c */
  if (C.zf) goto L_11fa194c;
  /* 11fa1891 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11fa1893 push 0x11fbe268 */
  push32((uint32_t)(0x11fbe268u));
  /* 11fa1898 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa189a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11fa189c push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa189e call 0x11f96810 */
  push32(0x11fa18a3u); f_11f96810();
  /* 11fa18a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa18a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa18a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa18ad jne 0x11fa18b9 */
  if (!C.zf) goto L_11fa18b9;
  /* 11fa18af mov eax, 1 */
  EAX = (0x1u);
  /* 11fa18b4 jmp 0x11fa19ac */
  goto L_11fa19ac;
L_11fa18b9:;
  /* 11fa18b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa18bc push eax */
  push32((uint32_t)(EAX));
  /* 11fa18bd call 0x11fa19b0 */
  push32(0x11fa18c2u); f_11fa19b0();
  /* 11fa18c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa18c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa18c7 je 0x11fa18ed */
  if (C.zf) goto L_11fa18ed;
  /* 11fa18c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa18cc push ecx */
  push32((uint32_t)(ECX));
  /* 11fa18cd call 0x11fa1c40 */
  push32(0x11fa18d2u); f_11fa1c40();
  /* 11fa18d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa18d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa18d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa18da push edx */
  push32((uint32_t)(EDX));
  /* 11fa18db call 0x11f96e90 */
  push32(0x11fa18e0u); f_11f96e90();
  /* 11fa18e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa18e3 mov eax, 1 */
  EAX = (0x1u);
  /* 11fa18e8 jmp 0x11fa19ac */
  goto L_11fa19ac;
L_11fa18ed:;
  /* 11fa18ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa18f0 mov ecx, dword ptr [0x11fc1d98] */
  ECX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa18f6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa18f8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fa18fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa18fd mov ecx, dword ptr [0x11fc1d98] */
  ECX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa1903 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fa1906 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11fa1909 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa190c mov ecx, dword ptr [0x11fc1d98] */
  ECX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa1912 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fa1915 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11fa1918 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa191b mov dword ptr [0x11fc1d98], eax */
  w32((uint32_t)(0x11fc1d98), (EAX));
  /* 11fa1920 mov ecx, dword ptr [0x11fc28fc] */
  ECX = (r32((uint32_t)(0x11fc28fc)));
  /* 11fa1926 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1927 call 0x11fa1c40 */
  push32(0x11fa192cu); f_11fa1c40();
  /* 11fa192c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa192f push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1931 mov edx, dword ptr [0x11fc28fc] */
  EDX = (r32((uint32_t)(0x11fc28fc)));
  /* 11fa1937 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1938 call 0x11f96e90 */
  push32(0x11fa193du); f_11f96e90();
  /* 11fa193d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1940 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1943 mov dword ptr [0x11fc28fc], eax */
  w32((uint32_t)(0x11fc28fc), (EAX));
  /* 11fa1948 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa194a jmp 0x11fa19ac */
  goto L_11fa19ac;
L_11fa194c:;
  /* 11fa194c mov ecx, dword ptr [0x11fc1d98] */
  ECX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa1952 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa1954 mov dword ptr [0x11fc1d68], edx */
  w32((uint32_t)(0x11fc1d68), (EDX));
  /* 11fa195a mov eax, dword ptr [0x11fc1d98] */
  EAX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa195f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fa1962 mov dword ptr [0x11fc1d6c], ecx */
  w32((uint32_t)(0x11fc1d6c), (ECX));
  /* 11fa1968 mov edx, dword ptr [0x11fc1d98] */
  EDX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa196e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fa1971 mov dword ptr [0x11fc1d70], eax */
  w32((uint32_t)(0x11fc1d70), (EAX));
  /* 11fa1976 mov dword ptr [0x11fc1d98], 0x11fc1d68 */
  w32((uint32_t)(0x11fc1d98), (0x11fc1d68u));
  /* 11fa1980 mov ecx, dword ptr [0x11fc28fc] */
  ECX = (r32((uint32_t)(0x11fc28fc)));
  /* 11fa1986 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1987 call 0x11fa1c40 */
  push32(0x11fa198cu); f_11fa1c40();
  /* 11fa198c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa198f push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1991 mov edx, dword ptr [0x11fc28fc] */
  EDX = (r32((uint32_t)(0x11fc28fc)));
  /* 11fa1997 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1998 call 0x11f96e90 */
  push32(0x11fa199du); f_11f96e90();
  /* 11fa199d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa19a0 mov dword ptr [0x11fc28fc], 0 */
  w32((uint32_t)(0x11fc28fc), (0x0u));
  /* 11fa19aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fa19ac:;
  /* 11fa19ac mov esp, ebp */
  ESP = (EBP);
  /* 11fa19ae pop ebp */
  EBP = (pop32());
  /* 11fa19af ret  */
  ESPCHK(0x11fa1880u, _esp0);
  ESP += 4; return;
}

/* FUN_100119b0 @ 0x11fa19b0 (525 bytes, 200 insns) */
void f_11fa19b0(void) {
  FTRACE(0x11fa19b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa19b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa19b1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa19b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa19b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fa19bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa19bf mov ax, word ptr [0x11fc291c] */
  AX = (r16((uint32_t)(0x11fc291c)));
  /* 11fa19c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa19c8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa19cc jne 0x11fa19d6 */
  if (!C.zf) goto L_11fa19d6;
  /* 11fa19ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa19d1 jmp 0x11fa1bb9 */
  goto L_11fa1bb9;
L_11fa19d6:;
  /* 11fa19d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa19d9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa19dc push ecx */
  push32((uint32_t)(ECX));
  /* 11fa19dd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11fa19df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa19e2 push edx */
  push32((uint32_t)(EDX));
  /* 11fa19e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa19e5 call 0x11fa45c0 */
  push32(0x11fa19eau); f_11fa45c0();
  /* 11fa19ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa19ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa19f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa19f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa19f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa19f8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa19fb push edx */
  push32((uint32_t)(EDX));
  /* 11fa19fc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11fa19fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1a01 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1a02 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa1a04 call 0x11fa45c0 */
  push32(0x11fa1a09u); f_11fa45c0();
  /* 11fa1a09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1a0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa1a0f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1a11 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa1a14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1a17 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1a1a push edx */
  push32((uint32_t)(EDX));
  /* 11fa1a1b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11fa1a1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1a20 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1a21 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa1a23 call 0x11fa45c0 */
  push32(0x11fa1a28u); f_11fa45c0();
  /* 11fa1a28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1a2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa1a2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1a30 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa1a33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1a36 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1a39 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1a3a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11fa1a3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1a3f push eax */
  push32((uint32_t)(EAX));
  /* 11fa1a40 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa1a42 call 0x11fa45c0 */
  push32(0x11fa1a47u); f_11fa45c0();
  /* 11fa1a47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1a4a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa1a4d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1a4f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa1a52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1a55 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1a58 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1a59 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11fa1a5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1a5e push eax */
  push32((uint32_t)(EAX));
  /* 11fa1a5f push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa1a61 call 0x11fa45c0 */
  push32(0x11fa1a66u); f_11fa45c0();
  /* 11fa1a66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1a69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa1a6c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1a6e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa1a71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1a74 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11fa1a77 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1a78 call 0x11fa1bc0 */
  push32(0x11fa1a7du); f_11fa1bc0();
  /* 11fa1a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1a80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1a83 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1a86 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1a87 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11fa1a89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1a8c push edx */
  push32((uint32_t)(EDX));
  /* 11fa1a8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa1a8f call 0x11fa45c0 */
  push32(0x11fa1a94u); f_11fa45c0();
  /* 11fa1a94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1a97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa1a9a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1a9c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa1a9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1aa2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1aa5 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1aa6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11fa1aa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1aab push eax */
  push32((uint32_t)(EAX));
  /* 11fa1aac push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa1aae call 0x11fa45c0 */
  push32(0x11fa1ab3u); f_11fa45c0();
  /* 11fa1ab3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1ab6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa1ab9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1abb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa1abe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1ac1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1ac4 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1ac5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11fa1ac7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1aca push eax */
  push32((uint32_t)(EAX));
  /* 11fa1acb push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa1acd call 0x11fa45c0 */
  push32(0x11fa1ad2u); f_11fa45c0();
  /* 11fa1ad2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1ad5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa1ad8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1ada mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa1add mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1ae0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1ae3 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1ae4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11fa1ae6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1ae9 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1aea push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa1aec call 0x11fa45c0 */
  push32(0x11fa1af1u); f_11fa45c0();
  /* 11fa1af1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1af4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa1af7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1af9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa1afc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1aff add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1b02 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1b03 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11fa1b05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1b08 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1b09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa1b0b call 0x11fa45c0 */
  push32(0x11fa1b10u); f_11fa45c0();
  /* 11fa1b10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1b13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa1b16 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1b18 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa1b1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1b1e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1b21 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1b22 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11fa1b24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1b27 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa1b2a call 0x11fa45c0 */
  push32(0x11fa1b2fu); f_11fa45c0();
  /* 11fa1b2f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1b32 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa1b35 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1b37 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa1b3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1b3d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1b40 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1b41 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11fa1b43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1b46 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1b47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa1b49 call 0x11fa45c0 */
  push32(0x11fa1b4eu); f_11fa45c0();
  /* 11fa1b4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1b51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa1b54 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1b56 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa1b59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1b5c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1b5f push edx */
  push32((uint32_t)(EDX));
  /* 11fa1b60 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11fa1b62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1b65 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1b66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa1b68 call 0x11fa45c0 */
  push32(0x11fa1b6du); f_11fa45c0();
  /* 11fa1b6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1b70 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa1b73 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1b75 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa1b78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1b7b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1b7e push edx */
  push32((uint32_t)(EDX));
  /* 11fa1b7f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11fa1b81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1b84 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa1b87 call 0x11fa45c0 */
  push32(0x11fa1b8cu); f_11fa45c0();
  /* 11fa1b8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1b8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa1b92 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1b94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa1b97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1b9a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1b9d push edx */
  push32((uint32_t)(EDX));
  /* 11fa1b9e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11fa1ba0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1ba3 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1ba4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa1ba6 call 0x11fa45c0 */
  push32(0x11fa1babu); f_11fa45c0();
  /* 11fa1bab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1bae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa1bb1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1bb3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa1bb6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11fa1bb9:;
  /* 11fa1bb9 mov esp, ebp */
  ESP = (EBP);
  /* 11fa1bbb pop ebp */
  EBP = (pop32());
  /* 11fa1bbc ret  */
  ESPCHK(0x11fa19b0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11fa1bc0 (125 bytes, 49 insns) */
void f_11fa1bc0(void) {
  FTRACE(0x11fa1bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa1bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa1bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa1bc3 push ecx */
  push32((uint32_t)(ECX));
L_11fa1bc4:;
  /* 11fa1bc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1bc7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa1bca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa1bcc je 0x11fa1c39 */
  if (C.zf) goto L_11fa1c39;
  /* 11fa1bce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1bd1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fa1bd4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1bd7 jl 0x11fa1bfd */
  if ((C.sf!=C.of)) goto L_11fa1bfd;
  /* 11fa1bd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1bdc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fa1bdf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1be2 jg 0x11fa1bfd */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa1bfd;
  /* 11fa1be4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1be7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa1bea sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa1bed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1bf0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11fa1bf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1bf5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1bf8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fa1bfb jmp 0x11fa1c37 */
  goto L_11fa1c37;
L_11fa1bfd:;
  /* 11fa1bfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1c00 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fa1c03 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1c06 jne 0x11fa1c2e */
  if (!C.zf) goto L_11fa1c2e;
  /* 11fa1c08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1c0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fa1c0e:;
  /* 11fa1c0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1c11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1c14 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11fa1c17 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11fa1c19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1c1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1c1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fa1c22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa1c25 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fa1c28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa1c2a jne 0x11fa1c0e */
  if (!C.zf) goto L_11fa1c0e;
  /* 11fa1c2c jmp 0x11fa1c37 */
  goto L_11fa1c37;
L_11fa1c2e:;
  /* 11fa1c2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1c31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1c34 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11fa1c37:;
  /* 11fa1c37 jmp 0x11fa1bc4 */
  goto L_11fa1bc4;
L_11fa1c39:;
  /* 11fa1c39 mov esp, ebp */
  ESP = (EBP);
  /* 11fa1c3b pop ebp */
  EBP = (pop32());
  /* 11fa1c3c ret  */
  ESPCHK(0x11fa1bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c40 @ 0x11fa1c40 (147 bytes, 52 insns) */
void f_11fa1c40(void) {
  FTRACE(0x11fa1c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa1c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa1c41 mov ebp, esp */
  EBP = (ESP);
  /* 11fa1c43 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1c47 jne 0x11fa1c4e */
  if (!C.zf) goto L_11fa1c4e;
  /* 11fa1c49 jmp 0x11fa1cd1 */
  goto L_11fa1cd1;
L_11fa1c4e:;
  /* 11fa1c4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1c51 cmp dword ptr [eax + 0xc], 0x11fc2958 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11fc2958u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1c58 je 0x11fa1cd1 */
  if (C.zf) goto L_11fa1cd1;
  /* 11fa1c5a push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1c5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1c5f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fa1c62 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1c63 call 0x11f96e90 */
  push32(0x11fa1c68u); f_11f96e90();
  /* 11fa1c68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1c6b push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1c6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1c70 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fa1c73 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1c74 call 0x11f96e90 */
  push32(0x11fa1c79u); f_11f96e90();
  /* 11fa1c79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1c7c push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1c7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1c81 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fa1c84 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1c85 call 0x11f96e90 */
  push32(0x11fa1c8au); f_11f96e90();
  /* 11fa1c8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1c8d push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1c8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1c92 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11fa1c95 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1c96 call 0x11f96e90 */
  push32(0x11fa1c9bu); f_11f96e90();
  /* 11fa1c9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1c9e push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1ca0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1ca3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fa1ca6 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1ca7 call 0x11f96e90 */
  push32(0x11fa1cacu); f_11f96e90();
  /* 11fa1cac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1caf push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1cb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1cb4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11fa1cb7 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1cb8 call 0x11f96e90 */
  push32(0x11fa1cbdu); f_11f96e90();
  /* 11fa1cbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1cc0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1cc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa1cc5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11fa1cc8 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1cc9 call 0x11f96e90 */
  push32(0x11fa1cceu); f_11f96e90();
  /* 11fa1cce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa1cd1:;
  /* 11fa1cd1 pop ebp */
  EBP = (pop32());
  /* 11fa1cd2 ret  */
  ESPCHK(0x11fa1c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ce0 @ 0x11fa1ce0 (928 bytes, 284 insns) */
void f_11fa1ce0(void) {
  FTRACE(0x11fa1ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa1ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa1ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa1ce3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa1ce6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11fa1ced mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11fa1cf4 cmp dword ptr [0x11fc28c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc28c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1cfb je 0x11fa2031 */
  if (C.zf) goto L_11fa2031;
  /* 11fa1d01 cmp dword ptr [0x11fc28d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc28d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1d08 jne 0x11fa1d30 */
  if (!C.zf) goto L_11fa1d30;
  /* 11fa1d0a push 0x11fc28d0 */
  push32((uint32_t)(0x11fc28d0u));
  /* 11fa1d0f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11fa1d14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa1d16 mov ax, word ptr [0x11fc2914] */
  AX = (r16((uint32_t)(0x11fc2914)));
  /* 11fa1d1c push eax */
  push32((uint32_t)(EAX));
  /* 11fa1d1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa1d1f call 0x11fa45c0 */
  push32(0x11fa1d24u); f_11fa45c0();
  /* 11fa1d24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1d27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa1d29 je 0x11fa1d30 */
  if (C.zf) goto L_11fa1d30;
  /* 11fa1d2b jmp 0x11fa1ff2 */
  goto L_11fa1ff2;
L_11fa1d30:;
  /* 11fa1d30 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11fa1d32 push 0x11fbe274 */
  push32((uint32_t)(0x11fbe274u));
  /* 11fa1d37 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1d39 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11fa1d3e call 0x11f96400 */
  push32(0x11fa1d43u); f_11f96400();
  /* 11fa1d43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1d46 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11fa1d49 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11fa1d4b push 0x11fbe274 */
  push32((uint32_t)(0x11fbe274u));
  /* 11fa1d50 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1d52 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11fa1d57 call 0x11f96400 */
  push32(0x11fa1d5cu); f_11f96400();
  /* 11fa1d5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1d5f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11fa1d62 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11fa1d64 push 0x11fbe274 */
  push32((uint32_t)(0x11fbe274u));
  /* 11fa1d69 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1d6b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11fa1d70 call 0x11f96400 */
  push32(0x11fa1d75u); f_11f96400();
  /* 11fa1d75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1d78 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11fa1d7b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11fa1d7d push 0x11fbe274 */
  push32((uint32_t)(0x11fbe274u));
  /* 11fa1d82 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1d84 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11fa1d89 call 0x11f96400 */
  push32(0x11fa1d8eu); f_11f96400();
  /* 11fa1d8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1d91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11fa1d94 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1d98 je 0x11fa1dac */
  if (C.zf) goto L_11fa1dac;
  /* 11fa1d9a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1d9e je 0x11fa1dac */
  if (C.zf) goto L_11fa1dac;
  /* 11fa1da0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1da4 je 0x11fa1dac */
  if (C.zf) goto L_11fa1dac;
  /* 11fa1da6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1daa jne 0x11fa1db1 */
  if (!C.zf) goto L_11fa1db1;
L_11fa1dac:;
  /* 11fa1dac jmp 0x11fa1ff2 */
  goto L_11fa1ff2;
L_11fa1db1:;
  /* 11fa1db1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fa1db4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11fa1db7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11fa1dbe jmp 0x11fa1dc9 */
  goto L_11fa1dc9;
L_11fa1dc0:;
  /* 11fa1dc0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fa1dc3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1dc6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11fa1dc9:;
  /* 11fa1dc9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1dd0 jge 0x11fa1de5 */
  if ((C.sf==C.of)) goto L_11fa1de5;
  /* 11fa1dd2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa1dd5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11fa1dd8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11fa1dda mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa1ddd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1de0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11fa1de3 jmp 0x11fa1dc0 */
  goto L_11fa1dc0;
L_11fa1de5:;
  /* 11fa1de5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11fa1de8 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1de9 mov ecx, dword ptr [0x11fc28d0] */
  ECX = (r32((uint32_t)(0x11fc28d0)));
  /* 11fa1def push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1df0 call dword ptr [0x11fc5328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5328))), 0x11fa1df6u);
  /* 11fa1df6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa1df8 jne 0x11fa1dff */
  if (!C.zf) goto L_11fa1dff;
  /* 11fa1dfa jmp 0x11fa1ff2 */
  goto L_11fa1ff2;
L_11fa1dff:;
  /* 11fa1dff cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1e03 jbe 0x11fa1e0a */
  if ((C.cf||C.zf)) goto L_11fa1e0a;
  /* 11fa1e05 jmp 0x11fa1ff2 */
  goto L_11fa1ff2;
L_11fa1e0a:;
  /* 11fa1e0a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa1e0d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fa1e13 mov dword ptr [0x11fc0eb4], edx */
  w32((uint32_t)(0x11fc0eb4), (EDX));
  /* 11fa1e19 cmp dword ptr [0x11fc0eb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11fc0eb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1e20 jle 0x11fa1e79 */
  if ((C.zf||C.sf!=C.of)) goto L_11fa1e79;
  /* 11fa1e22 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11fa1e25 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fa1e28 jmp 0x11fa1e33 */
  goto L_11fa1e33;
L_11fa1e2a:;
  /* 11fa1e2a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa1e2d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1e30 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11fa1e33:;
  /* 11fa1e33 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa1e36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa1e38 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa1e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa1e3c je 0x11fa1e79 */
  if (C.zf) goto L_11fa1e79;
  /* 11fa1e3e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa1e41 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa1e43 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11fa1e46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa1e48 je 0x11fa1e79 */
  if (C.zf) goto L_11fa1e79;
  /* 11fa1e4a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa1e4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1e4f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fa1e51 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11fa1e54 jmp 0x11fa1e5f */
  goto L_11fa1e5f;
L_11fa1e56:;
  /* 11fa1e56 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fa1e59 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1e5c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11fa1e5f:;
  /* 11fa1e5f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa1e62 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1e64 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11fa1e67 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1e6a jg 0x11fa1e77 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa1e77;
  /* 11fa1e6c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fa1e6f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1e72 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11fa1e75 jmp 0x11fa1e56 */
  goto L_11fa1e56;
L_11fa1e77:;
  /* 11fa1e77 jmp 0x11fa1e2a */
  goto L_11fa1e2a;
L_11fa1e79:;
  /* 11fa1e79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa1e7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa1e7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa1e7f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fa1e82 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1e85 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1e86 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11fa1e8b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fa1e8e push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1e8f push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa1e91 call 0x11f9e630 */
  push32(0x11fa1e96u); f_11f9e630();
  /* 11fa1e96 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1e99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa1e9b jne 0x11fa1ea2 */
  if (!C.zf) goto L_11fa1ea2;
  /* 11fa1e9d jmp 0x11fa1ff2 */
  goto L_11fa1ff2;
L_11fa1ea2:;
  /* 11fa1ea2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fa1ea5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 11fa1eaa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fa1ead mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11fa1eb0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11fa1eb7 jmp 0x11fa1ec2 */
  goto L_11fa1ec2;
L_11fa1eb9:;
  /* 11fa1eb9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fa1ebc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1ebf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11fa1ec2:;
  /* 11fa1ec2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1ec9 jge 0x11fa1ee0 */
  if ((C.sf==C.of)) goto L_11fa1ee0;
  /* 11fa1ecb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fa1ece mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11fa1ed2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11fa1ed5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fa1ed8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1edb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11fa1ede jmp 0x11fa1eb9 */
  goto L_11fa1eb9;
L_11fa1ee0:;
  /* 11fa1ee0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa1ee2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa1ee4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fa1ee7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1eea push edx */
  push32((uint32_t)(EDX));
  /* 11fa1eeb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11fa1ef0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fa1ef3 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1ef4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa1ef6 call 0x11fa4860 */
  push32(0x11fa1efbu); f_11fa4860();
  /* 11fa1efb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1efe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa1f00 jne 0x11fa1f07 */
  if (!C.zf) goto L_11fa1f07;
  /* 11fa1f02 jmp 0x11fa1ff2 */
  goto L_11fa1ff2;
L_11fa1f07:;
  /* 11fa1f07 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fa1f0a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11fa1f0f cmp dword ptr [0x11fc0eb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11fc0eb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1f16 jle 0x11fa1f73 */
  if ((C.zf||C.sf!=C.of)) goto L_11fa1f73;
  /* 11fa1f18 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 11fa1f1b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11fa1f1e jmp 0x11fa1f29 */
  goto L_11fa1f29;
L_11fa1f20:;
  /* 11fa1f20 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa1f23 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1f26 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11fa1f29:;
  /* 11fa1f29 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa1f2c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa1f2e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fa1f30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa1f32 je 0x11fa1f73 */
  if (C.zf) goto L_11fa1f73;
  /* 11fa1f34 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa1f37 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa1f39 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11fa1f3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa1f3e je 0x11fa1f73 */
  if (C.zf) goto L_11fa1f73;
  /* 11fa1f40 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa1f43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa1f45 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa1f47 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fa1f4a jmp 0x11fa1f55 */
  goto L_11fa1f55;
L_11fa1f4c:;
  /* 11fa1f4c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fa1f4f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1f52 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11fa1f55:;
  /* 11fa1f55 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa1f58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa1f5a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11fa1f5d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1f60 jg 0x11fa1f71 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa1f71;
  /* 11fa1f62 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fa1f65 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fa1f68 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 11fa1f6f jmp 0x11fa1f4c */
  goto L_11fa1f4c;
L_11fa1f71:;
  /* 11fa1f71 jmp 0x11fa1f20 */
  goto L_11fa1f20;
L_11fa1f73:;
  /* 11fa1f73 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fa1f76 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1f79 mov dword ptr [0x11fc0ca8], eax */
  w32((uint32_t)(0x11fc0ca8), (EAX));
  /* 11fa1f7e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fa1f81 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1f84 mov dword ptr [0x11fc0cac], ecx */
  w32((uint32_t)(0x11fc0cac), (ECX));
  /* 11fa1f8a cmp dword ptr [0x11fc2900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1f91 je 0x11fa1fa4 */
  if (C.zf) goto L_11fa1fa4;
  /* 11fa1f93 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1f95 mov edx, dword ptr [0x11fc2900] */
  EDX = (r32((uint32_t)(0x11fc2900)));
  /* 11fa1f9b push edx */
  push32((uint32_t)(EDX));
  /* 11fa1f9c call 0x11f96e90 */
  push32(0x11fa1fa1u); f_11f96e90();
  /* 11fa1fa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa1fa4:;
  /* 11fa1fa4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fa1fa7 mov dword ptr [0x11fc2900], eax */
  w32((uint32_t)(0x11fc2900), (EAX));
  /* 11fa1fac cmp dword ptr [0x11fc2904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa1fb3 je 0x11fa1fc6 */
  if (C.zf) goto L_11fa1fc6;
  /* 11fa1fb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1fb7 mov ecx, dword ptr [0x11fc2904] */
  ECX = (r32((uint32_t)(0x11fc2904)));
  /* 11fa1fbd push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1fbe call 0x11f96e90 */
  push32(0x11fa1fc3u); f_11f96e90();
  /* 11fa1fc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa1fc6:;
  /* 11fa1fc6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fa1fc9 mov dword ptr [0x11fc2904], edx */
  w32((uint32_t)(0x11fc2904), (EDX));
  /* 11fa1fcf push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1fd1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fa1fd4 push eax */
  push32((uint32_t)(EAX));
  /* 11fa1fd5 call 0x11f96e90 */
  push32(0x11fa1fdau); f_11f96e90();
  /* 11fa1fda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1fdd push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1fdf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fa1fe2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa1fe3 call 0x11f96e90 */
  push32(0x11fa1fe8u); f_11f96e90();
  /* 11fa1fe8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa1feb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa1fed jmp 0x11fa207c */
  goto L_11fa207c;
L_11fa1ff2:;
  /* 11fa1ff2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa1ff4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fa1ff7 push edx */
  push32((uint32_t)(EDX));
  /* 11fa1ff8 call 0x11f96e90 */
  push32(0x11fa1ffdu); f_11f96e90();
  /* 11fa1ffd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2000 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa2002 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fa2005 push eax */
  push32((uint32_t)(EAX));
  /* 11fa2006 call 0x11f96e90 */
  push32(0x11fa200bu); f_11f96e90();
  /* 11fa200b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa200e push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa2010 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fa2013 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa2014 call 0x11f96e90 */
  push32(0x11fa2019u); f_11f96e90();
  /* 11fa2019 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa201c push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa201e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fa2021 push edx */
  push32((uint32_t)(EDX));
  /* 11fa2022 call 0x11f96e90 */
  push32(0x11fa2027u); f_11f96e90();
  /* 11fa2027 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa202a mov eax, 1 */
  EAX = (0x1u);
  /* 11fa202f jmp 0x11fa207c */
  goto L_11fa207c;
L_11fa2031:;
  /* 11fa2031 mov dword ptr [0x11fc0ca8], 0x11fc0cb2 */
  w32((uint32_t)(0x11fc0ca8), (0x11fc0cb2u));
  /* 11fa203b mov dword ptr [0x11fc0cac], 0x11fc0cb2 */
  w32((uint32_t)(0x11fc0cac), (0x11fc0cb2u));
  /* 11fa2045 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa2047 mov eax, dword ptr [0x11fc2900] */
  EAX = (r32((uint32_t)(0x11fc2900)));
  /* 11fa204c push eax */
  push32((uint32_t)(EAX));
  /* 11fa204d call 0x11f96e90 */
  push32(0x11fa2052u); f_11f96e90();
  /* 11fa2052 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2055 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa2057 mov ecx, dword ptr [0x11fc2904] */
  ECX = (r32((uint32_t)(0x11fc2904)));
  /* 11fa205d push ecx */
  push32((uint32_t)(ECX));
  /* 11fa205e call 0x11f96e90 */
  push32(0x11fa2063u); f_11f96e90();
  /* 11fa2063 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2066 mov dword ptr [0x11fc2900], 0 */
  w32((uint32_t)(0x11fc2900), (0x0u));
  /* 11fa2070 mov dword ptr [0x11fc2904], 0 */
  w32((uint32_t)(0x11fc2904), (0x0u));
  /* 11fa207a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fa207c:;
  /* 11fa207c mov esp, ebp */
  ESP = (EBP);
  /* 11fa207e pop ebp */
  EBP = (pop32());
  /* 11fa207f ret  */
  ESPCHK(0x11fa1ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012080 @ 0x11fa2080 (7 bytes, 5 insns) */
void f_11fa2080(void) {
  FTRACE(0x11fa2080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa2080 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa2081 mov ebp, esp */
  EBP = (ESP);
  /* 11fa2083 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa2085 pop ebp */
  EBP = (pop32());
  /* 11fa2086 ret  */
  ESPCHK(0x11fa2080u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11fa2090 (129 bytes, 56 insns) */
void f_11fa2090(void) {
  FTRACE(0x11fa2090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa2090 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11fa2094 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11fa2098 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11fa209e jne 0x11fa20dc */
  if (!C.zf) goto L_11fa20dc;
L_11fa20a0:;
  /* 11fa20a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fa20a2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa20a4 jne 0x11fa20d4 */
  if (!C.zf) goto L_11fa20d4;
  /* 11fa20a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11fa20a8 je 0x11fa20d0 */
  if (C.zf) goto L_11fa20d0;
  /* 11fa20aa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa20ad jne 0x11fa20d4 */
  if (!C.zf) goto L_11fa20d4;
  /* 11fa20af or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11fa20b1 je 0x11fa20d0 */
  if (C.zf) goto L_11fa20d0;
  /* 11fa20b3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11fa20b6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa20b9 jne 0x11fa20d4 */
  if (!C.zf) goto L_11fa20d4;
  /* 11fa20bb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11fa20bd je 0x11fa20d0 */
  if (C.zf) goto L_11fa20d0;
  /* 11fa20bf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa20c2 jne 0x11fa20d4 */
  if (!C.zf) goto L_11fa20d4;
  /* 11fa20c4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa20c7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa20ca or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11fa20cc jne 0x11fa20a0 */
  if (!C.zf) goto L_11fa20a0;
  /* 11fa20ce mov edi, edi */
  EDI = (EDI);
L_11fa20d0:;
  /* 11fa20d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa20d2 ret  */
  ESPCHK(0x11fa2090u, _esp0);
  ESP += 4; return;
  /* 11fa20d3 nop  */
  /* nop */
L_11fa20d4:;
  /* 11fa20d4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa20d6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fa20d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11fa20d9 ret  */
  ESPCHK(0x11fa2090u, _esp0);
  ESP += 4; return;
  /* 11fa20da mov edi, edi */
  EDI = (EDI);
L_11fa20dc:;
  /* 11fa20dc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11fa20e2 je 0x11fa20f8 */
  if (C.zf) goto L_11fa20f8;
  /* 11fa20e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa20e6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11fa20e7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa20e9 jne 0x11fa20d4 */
  if (!C.zf) goto L_11fa20d4;
  /* 11fa20eb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11fa20ec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11fa20ee je 0x11fa20d0 */
  if (C.zf) goto L_11fa20d0;
  /* 11fa20f0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11fa20f6 je 0x11fa20a0 */
  if (C.zf) goto L_11fa20a0;
L_11fa20f8:;
  /* 11fa20f8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11fa20fb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa20fe cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa2100 jne 0x11fa20d4 */
  if (!C.zf) goto L_11fa20d4;
  /* 11fa2102 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11fa2104 je 0x11fa20d0 */
  if (C.zf) goto L_11fa20d0;
  /* 11fa2106 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa2109 jne 0x11fa20d4 */
  if (!C.zf) goto L_11fa20d4;
  /* 11fa210b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11fa210d je 0x11fa20d0 */
  if (C.zf) goto L_11fa20d0;
  /* 11fa210f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2112 jmp 0x11fa20a0 */
  goto L_11fa20a0;
}

/* FUN_10012120 @ 0x11fa2120 (62 bytes, 35 insns) */
void f_11fa2120(void) {
  FTRACE(0x11fa2120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa2120 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa2121 mov ebp, esp */
  EBP = (ESP);
  /* 11fa2123 push esi */
  push32((uint32_t)(ESI));
  /* 11fa2124 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa2126 push eax */
  push32((uint32_t)(EAX));
  /* 11fa2127 push eax */
  push32((uint32_t)(EAX));
  /* 11fa2128 push eax */
  push32((uint32_t)(EAX));
  /* 11fa2129 push eax */
  push32((uint32_t)(EAX));
  /* 11fa212a push eax */
  push32((uint32_t)(EAX));
  /* 11fa212b push eax */
  push32((uint32_t)(EAX));
  /* 11fa212c push eax */
  push32((uint32_t)(EAX));
  /* 11fa212d push eax */
  push32((uint32_t)(EAX));
  /* 11fa212e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa2131 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11fa2134:;
  /* 11fa2134 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa2136 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11fa2138 je 0x11fa2141 */
  if (C.zf) goto L_11fa2141;
  /* 11fa213a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11fa213b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11fa213b");
  /* 11fa213f jmp 0x11fa2134 */
  goto L_11fa2134;
L_11fa2141:;
  /* 11fa2141 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2144 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fa2147 nop  */
  /* nop */
L_11fa2148:;
  /* 11fa2148 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11fa2149 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fa214b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11fa214d je 0x11fa2156 */
  if (C.zf) goto L_11fa2156;
  /* 11fa214f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11fa2150 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11fa2150");
  /* 11fa2154 jae 0x11fa2148 */
  if (!C.cf) goto L_11fa2148;
L_11fa2156:;
  /* 11fa2156 mov eax, ecx */
  EAX = (ECX);
  /* 11fa2158 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa215b pop esi */
  ESI = (pop32());
  /* 11fa215c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fa215d ret  */
  ESPCHK(0x11fa2120u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11fa2160 (56 bytes, 31 insns) */
void f_11fa2160(void) {
  FTRACE(0x11fa2160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa2160 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa2161 mov ebp, esp */
  EBP = (ESP);
  /* 11fa2163 push edi */
  push32((uint32_t)(EDI));
  /* 11fa2164 push esi */
  push32((uint32_t)(ESI));
  /* 11fa2165 push ebx */
  push32((uint32_t)(EBX));
  /* 11fa2166 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa2169 jecxz 0x11fa2191 */
  x86_unimpl("jecxz @ 0x11fa2169");
  /* 11fa216b mov ebx, ecx */
  EBX = (ECX);
  /* 11fa216d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2170 mov esi, edi */
  ESI = (EDI);
  /* 11fa2172 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa2174 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11fa2176 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fa2178 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa217a mov edi, esi */
  EDI = (ESI);
  /* 11fa217c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa217f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11fa2181 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11fa2184 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa2186 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa2189 ja 0x11fa218f */
  if ((!C.cf&&!C.zf)) goto L_11fa218f;
  /* 11fa218b je 0x11fa2191 */
  if (C.zf) goto L_11fa2191;
  /* 11fa218d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11fa218e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11fa218f:;
  /* 11fa218f not ecx */
  ECX = (~(ECX));
L_11fa2191:;
  /* 11fa2191 mov eax, ecx */
  EAX = (ECX);
  /* 11fa2193 pop ebx */
  EBX = (pop32());
  /* 11fa2194 pop esi */
  ESI = (pop32());
  /* 11fa2195 pop edi */
  EDI = (pop32());
  /* 11fa2196 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fa2197 ret  */
  ESPCHK(0x11fa2160u, _esp0);
  ESP += 4; return;
}

/* FUN_100121a0 @ 0x11fa21a0 (58 bytes, 32 insns) */
void f_11fa21a0(void) {
  FTRACE(0x11fa21a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa21a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa21a1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa21a3 push esi */
  push32((uint32_t)(ESI));
  /* 11fa21a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa21a6 push eax */
  push32((uint32_t)(EAX));
  /* 11fa21a7 push eax */
  push32((uint32_t)(EAX));
  /* 11fa21a8 push eax */
  push32((uint32_t)(EAX));
  /* 11fa21a9 push eax */
  push32((uint32_t)(EAX));
  /* 11fa21aa push eax */
  push32((uint32_t)(EAX));
  /* 11fa21ab push eax */
  push32((uint32_t)(EAX));
  /* 11fa21ac push eax */
  push32((uint32_t)(EAX));
  /* 11fa21ad push eax */
  push32((uint32_t)(EAX));
  /* 11fa21ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa21b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11fa21b4:;
  /* 11fa21b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa21b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11fa21b8 je 0x11fa21c1 */
  if (C.zf) goto L_11fa21c1;
  /* 11fa21ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11fa21bb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11fa21bb");
  /* 11fa21bf jmp 0x11fa21b4 */
  goto L_11fa21b4;
L_11fa21c1:;
  /* 11fa21c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11fa21c4:;
  /* 11fa21c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fa21c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11fa21c8 je 0x11fa21d4 */
  if (C.zf) goto L_11fa21d4;
  /* 11fa21ca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11fa21cb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11fa21cb");
  /* 11fa21cf jae 0x11fa21c4 */
  if (!C.cf) goto L_11fa21c4;
  /* 11fa21d1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11fa21d4:;
  /* 11fa21d4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa21d7 pop esi */
  ESI = (pop32());
  /* 11fa21d8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fa21d9 ret  */
  ESPCHK(0x11fa21a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100121e0 @ 0x11fa21e0 (512 bytes, 147 insns) */
void f_11fa21e0(void) {
  FTRACE(0x11fa21e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa21e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa21e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa21e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa21e6 cmp dword ptr [0x11fc294c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc294c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa21ed jne 0x11fa2212 */
  if (!C.zf) goto L_11fa2212;
  /* 11fa21ef call 0x11fa2cb0 */
  push32(0x11fa21f4u); f_11fa2cb0();
  /* 11fa21f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa21f6 je 0x11fa2202 */
  if (C.zf) goto L_11fa2202;
  /* 11fa21f8 mov eax, dword ptr [0x11fc52ec] */
  EAX = (r32((uint32_t)(0x11fc52ec)));
  /* 11fa21fd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fa2200 jmp 0x11fa2209 */
  goto L_11fa2209;
L_11fa2202:;
  /* 11fa2202 mov dword ptr [ebp - 8], 0x11fa2d00 */
  w32((uint32_t)(EBP + -0x8), (0x11fa2d00u));
L_11fa2209:;
  /* 11fa2209 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa220c mov dword ptr [0x11fc294c], ecx */
  w32((uint32_t)(0x11fc294c), (ECX));
L_11fa2212:;
  /* 11fa2212 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2216 jne 0x11fa2222 */
  if (!C.zf) goto L_11fa2222;
  /* 11fa2218 call 0x11fa2b00 */
  push32(0x11fa221du); f_11fa2b00();
  /* 11fa221d jmp 0x11fa22ee */
  goto L_11fa22ee;
L_11fa2222:;
  /* 11fa2222 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2225 mov dword ptr [0x11fc293c], edx */
  w32((uint32_t)(0x11fc293c), (EDX));
  /* 11fa222b cmp dword ptr [0x11fc293c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc293c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2232 je 0x11fa2254 */
  if (C.zf) goto L_11fa2254;
  /* 11fa2234 mov eax, dword ptr [0x11fc293c] */
  EAX = (r32((uint32_t)(0x11fc293c)));
  /* 11fa2239 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa223c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa223e je 0x11fa2254 */
  if (C.zf) goto L_11fa2254;
  /* 11fa2240 push 0x11fc293c */
  push32((uint32_t)(0x11fc293cu));
  /* 11fa2245 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11fa2247 push 0x11fc1aa0 */
  push32((uint32_t)(0x11fc1aa0u));
  /* 11fa224c call 0x11fa23e0 */
  push32(0x11fa2251u); f_11fa23e0();
  /* 11fa2251 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa2254:;
  /* 11fa2254 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2257 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa225a mov dword ptr [0x11fc2940], edx */
  w32((uint32_t)(0x11fc2940), (EDX));
  /* 11fa2260 cmp dword ptr [0x11fc2940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2267 je 0x11fa2289 */
  if (C.zf) goto L_11fa2289;
  /* 11fa2269 mov eax, dword ptr [0x11fc2940] */
  EAX = (r32((uint32_t)(0x11fc2940)));
  /* 11fa226e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa2271 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa2273 je 0x11fa2289 */
  if (C.zf) goto L_11fa2289;
  /* 11fa2275 push 0x11fc2940 */
  push32((uint32_t)(0x11fc2940u));
  /* 11fa227a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11fa227c push 0x11fc19e8 */
  push32((uint32_t)(0x11fc19e8u));
  /* 11fa2281 call 0x11fa23e0 */
  push32(0x11fa2286u); f_11fa23e0();
  /* 11fa2286 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa2289:;
  /* 11fa2289 mov dword ptr [0x11fc2944], 0 */
  w32((uint32_t)(0x11fc2944), (0x0u));
  /* 11fa2293 cmp dword ptr [0x11fc293c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc293c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa229a je 0x11fa22cd */
  if (C.zf) goto L_11fa22cd;
  /* 11fa229c mov edx, dword ptr [0x11fc293c] */
  EDX = (r32((uint32_t)(0x11fc293c)));
  /* 11fa22a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fa22a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa22a7 je 0x11fa22cd */
  if (C.zf) goto L_11fa22cd;
  /* 11fa22a9 cmp dword ptr [0x11fc2940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa22b0 je 0x11fa22c6 */
  if (C.zf) goto L_11fa22c6;
  /* 11fa22b2 mov ecx, dword ptr [0x11fc2940] */
  ECX = (r32((uint32_t)(0x11fc2940)));
  /* 11fa22b8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fa22bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa22bd je 0x11fa22c6 */
  if (C.zf) goto L_11fa22c6;
  /* 11fa22bf call 0x11fa2470 */
  push32(0x11fa22c4u); f_11fa2470();
  /* 11fa22c4 jmp 0x11fa22cb */
  goto L_11fa22cb;
L_11fa22c6:;
  /* 11fa22c6 call 0x11fa2860 */
  push32(0x11fa22cbu); f_11fa2860();
L_11fa22cb:;
  /* 11fa22cb jmp 0x11fa22ee */
  goto L_11fa22ee;
L_11fa22cd:;
  /* 11fa22cd cmp dword ptr [0x11fc2940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa22d4 je 0x11fa22e9 */
  if (C.zf) goto L_11fa22e9;
  /* 11fa22d6 mov eax, dword ptr [0x11fc2940] */
  EAX = (r32((uint32_t)(0x11fc2940)));
  /* 11fa22db movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa22de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa22e0 je 0x11fa22e9 */
  if (C.zf) goto L_11fa22e9;
  /* 11fa22e2 call 0x11fa2a00 */
  push32(0x11fa22e7u); f_11fa2a00();
  /* 11fa22e7 jmp 0x11fa22ee */
  goto L_11fa22ee;
L_11fa22e9:;
  /* 11fa22e9 call 0x11fa2b00 */
  push32(0x11fa22eeu); f_11fa2b00();
L_11fa22ee:;
  /* 11fa22ee cmp dword ptr [0x11fc2944], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2944))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa22f5 jne 0x11fa22fe */
  if (!C.zf) goto L_11fa22fe;
  /* 11fa22f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa22f9 jmp 0x11fa23dc */
  goto L_11fa23dc;
L_11fa22fe:;
  /* 11fa22fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2301 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2307 push edx */
  push32((uint32_t)(EDX));
  /* 11fa2308 call 0x11fa2b30 */
  push32(0x11fa230du); f_11fa2b30();
  /* 11fa230d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2310 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa2313 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2317 je 0x11fa232c */
  if (C.zf) goto L_11fa232c;
  /* 11fa2319 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa231c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa2321 push eax */
  push32((uint32_t)(EAX));
  /* 11fa2322 call dword ptr [0x11fc52f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52f0))), 0x11fa2328u);
  /* 11fa2328 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa232a jne 0x11fa2333 */
  if (!C.zf) goto L_11fa2333;
L_11fa232c:;
  /* 11fa232c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa232e jmp 0x11fa23dc */
  goto L_11fa23dc;
L_11fa2333:;
  /* 11fa2333 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa2335 mov ecx, dword ptr [0x11fc292c] */
  ECX = (r32((uint32_t)(0x11fc292c)));
  /* 11fa233b push ecx */
  push32((uint32_t)(ECX));
  /* 11fa233c call dword ptr [0x11fc5300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5300))), 0x11fa2342u);
  /* 11fa2342 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa2344 jne 0x11fa234d */
  if (!C.zf) goto L_11fa234d;
  /* 11fa2346 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa2348 jmp 0x11fa23dc */
  goto L_11fa23dc;
L_11fa234d:;
  /* 11fa234d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2351 je 0x11fa2378 */
  if (C.zf) goto L_11fa2378;
  /* 11fa2353 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa2356 mov ax, word ptr [0x11fc292c] */
  AX = (r16((uint32_t)(0x11fc292c)));
  /* 11fa235c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11fa235f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa2362 mov dx, word ptr [0x11fc2948] */
  DX = (r16((uint32_t)(0x11fc2948)));
  /* 11fa2369 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 11fa236d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa2370 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fa2374 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11fa2378:;
  /* 11fa2378 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa237c je 0x11fa23d7 */
  if (C.zf) goto L_11fa23d7;
  /* 11fa237e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11fa2380 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa2383 push edx */
  push32((uint32_t)(EDX));
  /* 11fa2384 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11fa2389 mov eax, dword ptr [0x11fc292c] */
  EAX = (r32((uint32_t)(0x11fc292c)));
  /* 11fa238e push eax */
  push32((uint32_t)(EAX));
  /* 11fa238f call dword ptr [0x11fc294c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc294c))), 0x11fa2395u);
  /* 11fa2395 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa2397 jne 0x11fa239d */
  if (!C.zf) goto L_11fa239d;
  /* 11fa2399 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa239b jmp 0x11fa23dc */
  goto L_11fa23dc;
L_11fa239d:;
  /* 11fa239d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11fa239f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa23a2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa23a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa23a6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 11fa23ab mov edx, dword ptr [0x11fc2948] */
  EDX = (r32((uint32_t)(0x11fc2948)));
  /* 11fa23b1 push edx */
  push32((uint32_t)(EDX));
  /* 11fa23b2 call dword ptr [0x11fc294c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc294c))), 0x11fa23b8u);
  /* 11fa23b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa23ba jne 0x11fa23c0 */
  if (!C.zf) goto L_11fa23c0;
  /* 11fa23bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa23be jmp 0x11fa23dc */
  goto L_11fa23dc;
L_11fa23c0:;
  /* 11fa23c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11fa23c2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa23c5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa23ca push eax */
  push32((uint32_t)(EAX));
  /* 11fa23cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa23ce push ecx */
  push32((uint32_t)(ECX));
  /* 11fa23cf call 0x11f98f40 */
  push32(0x11fa23d4u); f_11f98f40();
  /* 11fa23d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa23d7:;
  /* 11fa23d7 mov eax, 1 */
  EAX = (0x1u);
L_11fa23dc:;
  /* 11fa23dc mov esp, ebp */
  ESP = (EBP);
  /* 11fa23de pop ebp */
  EBP = (pop32());
  /* 11fa23df ret  */
  ESPCHK(0x11fa21e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100123e0 @ 0x11fa23e0 (130 bytes, 47 insns) */
void f_11fa23e0(void) {
  FTRACE(0x11fa23e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa23e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa23e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa23e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa23e6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11fa23ed mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11fa23f4:;
  /* 11fa23f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa23f7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa23fa jg 0x11fa245e */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa245e;
  /* 11fa23fc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2400 je 0x11fa245e */
  if (C.zf) goto L_11fa245e;
  /* 11fa2402 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa2405 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2408 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fa2409 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa240b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fa240d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa2410 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa2413 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2416 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11fa2419 push eax */
  push32((uint32_t)(EAX));
  /* 11fa241a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa241d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa241f push edx */
  push32((uint32_t)(EDX));
  /* 11fa2420 call 0x11fa4ad0 */
  push32(0x11fa2425u); f_11fa4ad0();
  /* 11fa2425 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2428 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fa242b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa242f jne 0x11fa2442 */
  if (!C.zf) goto L_11fa2442;
  /* 11fa2431 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa2434 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2437 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 11fa243b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa243e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fa2440 jmp 0x11fa245c */
  goto L_11fa245c;
L_11fa2442:;
  /* 11fa2442 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2446 jge 0x11fa2453 */
  if ((C.sf==C.of)) goto L_11fa2453;
  /* 11fa2448 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa244b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa244e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11fa2451 jmp 0x11fa245c */
  goto L_11fa245c;
L_11fa2453:;
  /* 11fa2453 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa2456 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2459 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11fa245c:;
  /* 11fa245c jmp 0x11fa23f4 */
  goto L_11fa23f4;
L_11fa245e:;
  /* 11fa245e mov esp, ebp */
  ESP = (EBP);
  /* 11fa2460 pop ebp */
  EBP = (pop32());
  /* 11fa2461 ret  */
  ESPCHK(0x11fa23e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012470 @ 0x11fa2470 (186 bytes, 50 insns) */
void f_11fa2470(void) {
  FTRACE(0x11fa2470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa2470 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa2471 mov ebp, esp */
  EBP = (ESP);
  /* 11fa2473 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa2474 mov eax, dword ptr [0x11fc293c] */
  EAX = (r32((uint32_t)(0x11fc293c)));
  /* 11fa2479 push eax */
  push32((uint32_t)(EAX));
  /* 11fa247a call 0x11f99230 */
  push32(0x11fa247fu); f_11f99230();
  /* 11fa247f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2482 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa2484 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2487 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11fa248a mov dword ptr [0x11fc2938], ecx */
  w32((uint32_t)(0x11fc2938), (ECX));
  /* 11fa2490 mov edx, dword ptr [0x11fc2940] */
  EDX = (r32((uint32_t)(0x11fc2940)));
  /* 11fa2496 push edx */
  push32((uint32_t)(EDX));
  /* 11fa2497 call 0x11f99230 */
  push32(0x11fa249cu); f_11f99230();
  /* 11fa249c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa249f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa24a1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa24a4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11fa24a7 mov dword ptr [0x11fc2930], ecx */
  w32((uint32_t)(0x11fc2930), (ECX));
  /* 11fa24ad mov dword ptr [0x11fc292c], 0 */
  w32((uint32_t)(0x11fc292c), (0x0u));
  /* 11fa24b7 cmp dword ptr [0x11fc2938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa24be je 0x11fa24c9 */
  if (C.zf) goto L_11fa24c9;
  /* 11fa24c0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11fa24c7 jmp 0x11fa24db */
  goto L_11fa24db;
L_11fa24c9:;
  /* 11fa24c9 mov edx, dword ptr [0x11fc293c] */
  EDX = (r32((uint32_t)(0x11fc293c)));
  /* 11fa24cf push edx */
  push32((uint32_t)(EDX));
  /* 11fa24d0 call 0x11fa2f10 */
  push32(0x11fa24d5u); f_11fa2f10();
  /* 11fa24d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa24d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fa24db:;
  /* 11fa24db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa24de mov dword ptr [0x11fc2934], eax */
  w32((uint32_t)(0x11fc2934), (EAX));
  /* 11fa24e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa24e5 push 0x11fa2530 */
  push32((uint32_t)(0x11fa2530u));
  /* 11fa24ea call dword ptr [0x11fc52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52f4))), 0x11fa24f0u);
  /* 11fa24f0 mov ecx, dword ptr [0x11fc2944] */
  ECX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa24f6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11fa24fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa24fe je 0x11fa251c */
  if (C.zf) goto L_11fa251c;
  /* 11fa2500 mov edx, dword ptr [0x11fc2944] */
  EDX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa2506 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa250c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa250e je 0x11fa251c */
  if (C.zf) goto L_11fa251c;
  /* 11fa2510 mov eax, dword ptr [0x11fc2944] */
  EAX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa2515 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11fa2518 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa251a jne 0x11fa2526 */
  if (!C.zf) goto L_11fa2526;
L_11fa251c:;
  /* 11fa251c mov dword ptr [0x11fc2944], 0 */
  w32((uint32_t)(0x11fc2944), (0x0u));
L_11fa2526:;
  /* 11fa2526 mov esp, ebp */
  ESP = (EBP);
  /* 11fa2528 pop ebp */
  EBP = (pop32());
  /* 11fa2529 ret  */
  ESPCHK(0x11fa2470u, _esp0);
  ESP += 4; return;
}

/* FUN_10012530 @ 0x11fa2530 (804 bytes, 220 insns) */
void f_11fa2530(void) {
  FTRACE(0x11fa2530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa2530 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa2531 mov ebp, esp */
  EBP = (ESP);
  /* 11fa2533 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa2536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2539 push eax */
  push32((uint32_t)(EAX));
  /* 11fa253a call 0x11fa2e90 */
  push32(0x11fa253fu); f_11fa2e90();
  /* 11fa253f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2542 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11fa2545 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11fa2547 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11fa254a push ecx */
  push32((uint32_t)(ECX));
  /* 11fa254b mov edx, dword ptr [0x11fc2930] */
  EDX = (r32((uint32_t)(0x11fc2930)));
  /* 11fa2551 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fa2553 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa2555 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa255b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2561 push edx */
  push32((uint32_t)(EDX));
  /* 11fa2562 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa2565 push eax */
  push32((uint32_t)(EAX));
  /* 11fa2566 call dword ptr [0x11fc294c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc294c))), 0x11fa256cu);
  /* 11fa256c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa256e jne 0x11fa2584 */
  if (!C.zf) goto L_11fa2584;
  /* 11fa2570 mov dword ptr [0x11fc2944], 0 */
  w32((uint32_t)(0x11fc2944), (0x0u));
  /* 11fa257a mov eax, 1 */
  EAX = (0x1u);
  /* 11fa257f jmp 0x11fa284e */
  goto L_11fa284e;
L_11fa2584:;
  /* 11fa2584 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11fa2587 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa2588 mov edx, dword ptr [0x11fc2940] */
  EDX = (r32((uint32_t)(0x11fc2940)));
  /* 11fa258e push edx */
  push32((uint32_t)(EDX));
  /* 11fa258f call 0x11fa4ad0 */
  push32(0x11fa2594u); f_11fa4ad0();
  /* 11fa2594 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2597 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa2599 jne 0x11fa26bf */
  if (!C.zf) goto L_11fa26bf;
  /* 11fa259f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11fa25a1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11fa25a4 push eax */
  push32((uint32_t)(EAX));
  /* 11fa25a5 mov ecx, dword ptr [0x11fc2938] */
  ECX = (r32((uint32_t)(0x11fc2938)));
  /* 11fa25ab neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fa25ad sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa25af and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11fa25b5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa25bb push ecx */
  push32((uint32_t)(ECX));
  /* 11fa25bc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa25bf push edx */
  push32((uint32_t)(EDX));
  /* 11fa25c0 call dword ptr [0x11fc294c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc294c))), 0x11fa25c6u);
  /* 11fa25c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa25c8 jne 0x11fa25de */
  if (!C.zf) goto L_11fa25de;
  /* 11fa25ca mov dword ptr [0x11fc2944], 0 */
  w32((uint32_t)(0x11fc2944), (0x0u));
  /* 11fa25d4 mov eax, 1 */
  EAX = (0x1u);
  /* 11fa25d9 jmp 0x11fa284e */
  goto L_11fa284e;
L_11fa25de:;
  /* 11fa25de lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11fa25e1 push eax */
  push32((uint32_t)(EAX));
  /* 11fa25e2 mov ecx, dword ptr [0x11fc293c] */
  ECX = (r32((uint32_t)(0x11fc293c)));
  /* 11fa25e8 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa25e9 call 0x11fa4ad0 */
  push32(0x11fa25eeu); f_11fa4ad0();
  /* 11fa25ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa25f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa25f3 jne 0x11fa2620 */
  if (!C.zf) goto L_11fa2620;
  /* 11fa25f5 mov edx, dword ptr [0x11fc2944] */
  EDX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa25fb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa2601 mov dword ptr [0x11fc2944], edx */
  w32((uint32_t)(0x11fc2944), (EDX));
  /* 11fa2607 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa260a mov dword ptr [0x11fc2948], eax */
  w32((uint32_t)(0x11fc2948), (EAX));
  /* 11fa260f mov ecx, dword ptr [0x11fc2948] */
  ECX = (r32((uint32_t)(0x11fc2948)));
  /* 11fa2615 mov dword ptr [0x11fc292c], ecx */
  w32((uint32_t)(0x11fc292c), (ECX));
  /* 11fa261b jmp 0x11fa26bf */
  goto L_11fa26bf;
L_11fa2620:;
  /* 11fa2620 mov edx, dword ptr [0x11fc2944] */
  EDX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa2626 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa2629 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa262b jne 0x11fa26bf */
  if (!C.zf) goto L_11fa26bf;
  /* 11fa2631 cmp dword ptr [0x11fc2934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2638 je 0x11fa268d */
  if (C.zf) goto L_11fa268d;
  /* 11fa263a mov eax, dword ptr [0x11fc2934] */
  EAX = (r32((uint32_t)(0x11fc2934)));
  /* 11fa263f push eax */
  push32((uint32_t)(EAX));
  /* 11fa2640 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11fa2643 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa2644 mov edx, dword ptr [0x11fc293c] */
  EDX = (r32((uint32_t)(0x11fc293c)));
  /* 11fa264a push edx */
  push32((uint32_t)(EDX));
  /* 11fa264b call 0x11fa4ba0 */
  push32(0x11fa2650u); f_11fa4ba0();
  /* 11fa2650 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2653 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa2655 jne 0x11fa268d */
  if (!C.zf) goto L_11fa268d;
  /* 11fa2657 mov eax, dword ptr [0x11fc2944] */
  EAX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa265c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11fa265e mov dword ptr [0x11fc2944], eax */
  w32((uint32_t)(0x11fc2944), (EAX));
  /* 11fa2663 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa2666 mov dword ptr [0x11fc2948], ecx */
  w32((uint32_t)(0x11fc2948), (ECX));
  /* 11fa266c mov edx, dword ptr [0x11fc293c] */
  EDX = (r32((uint32_t)(0x11fc293c)));
  /* 11fa2672 push edx */
  push32((uint32_t)(EDX));
  /* 11fa2673 call 0x11f99230 */
  push32(0x11fa2678u); f_11f99230();
  /* 11fa2678 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa267b cmp eax, dword ptr [0x11fc2934] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc2934))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2681 jne 0x11fa268b */
  if (!C.zf) goto L_11fa268b;
  /* 11fa2683 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa2686 mov dword ptr [0x11fc292c], eax */
  w32((uint32_t)(0x11fc292c), (EAX));
L_11fa268b:;
  /* 11fa268b jmp 0x11fa26bf */
  goto L_11fa26bf;
L_11fa268d:;
  /* 11fa268d mov ecx, dword ptr [0x11fc2944] */
  ECX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa2693 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fa2696 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa2698 jne 0x11fa26bf */
  if (!C.zf) goto L_11fa26bf;
  /* 11fa269a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa269d push edx */
  push32((uint32_t)(EDX));
  /* 11fa269e call 0x11fa2bd0 */
  push32(0x11fa26a3u); f_11fa2bd0();
  /* 11fa26a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa26a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa26a8 je 0x11fa26bf */
  if (C.zf) goto L_11fa26bf;
  /* 11fa26aa mov eax, dword ptr [0x11fc2944] */
  EAX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa26af or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11fa26b1 mov dword ptr [0x11fc2944], eax */
  w32((uint32_t)(0x11fc2944), (EAX));
  /* 11fa26b6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa26b9 mov dword ptr [0x11fc2948], ecx */
  w32((uint32_t)(0x11fc2948), (ECX));
L_11fa26bf:;
  /* 11fa26bf mov edx, dword ptr [0x11fc2944] */
  EDX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa26c5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa26cb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa26d1 je 0x11fa2841 */
  if (C.zf) goto L_11fa2841;
  /* 11fa26d7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11fa26d9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11fa26dc push eax */
  push32((uint32_t)(EAX));
  /* 11fa26dd mov ecx, dword ptr [0x11fc2938] */
  ECX = (r32((uint32_t)(0x11fc2938)));
  /* 11fa26e3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fa26e5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa26e7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11fa26ed add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa26f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa26f4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa26f7 push edx */
  push32((uint32_t)(EDX));
  /* 11fa26f8 call dword ptr [0x11fc294c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc294c))), 0x11fa26feu);
  /* 11fa26fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa2700 jne 0x11fa2716 */
  if (!C.zf) goto L_11fa2716;
  /* 11fa2702 mov dword ptr [0x11fc2944], 0 */
  w32((uint32_t)(0x11fc2944), (0x0u));
  /* 11fa270c mov eax, 1 */
  EAX = (0x1u);
  /* 11fa2711 jmp 0x11fa284e */
  goto L_11fa284e;
L_11fa2716:;
  /* 11fa2716 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11fa2719 push eax */
  push32((uint32_t)(EAX));
  /* 11fa271a mov ecx, dword ptr [0x11fc293c] */
  ECX = (r32((uint32_t)(0x11fc293c)));
  /* 11fa2720 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa2721 call 0x11fa4ad0 */
  push32(0x11fa2726u); f_11fa4ad0();
  /* 11fa2726 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2729 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa272b jne 0x11fa27e0 */
  if (!C.zf) goto L_11fa27e0;
  /* 11fa2731 mov edx, dword ptr [0x11fc2944] */
  EDX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa2737 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11fa273a mov dword ptr [0x11fc2944], edx */
  w32((uint32_t)(0x11fc2944), (EDX));
  /* 11fa2740 cmp dword ptr [0x11fc2938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2747 je 0x11fa276a */
  if (C.zf) goto L_11fa276a;
  /* 11fa2749 mov eax, dword ptr [0x11fc2944] */
  EAX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa274e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11fa2751 mov dword ptr [0x11fc2944], eax */
  w32((uint32_t)(0x11fc2944), (EAX));
  /* 11fa2756 cmp dword ptr [0x11fc292c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc292c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa275d jne 0x11fa2768 */
  if (!C.zf) goto L_11fa2768;
  /* 11fa275f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa2762 mov dword ptr [0x11fc292c], ecx */
  w32((uint32_t)(0x11fc292c), (ECX));
L_11fa2768:;
  /* 11fa2768 jmp 0x11fa27de */
  goto L_11fa27de;
L_11fa276a:;
  /* 11fa276a cmp dword ptr [0x11fc2934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2771 je 0x11fa27bf */
  if (C.zf) goto L_11fa27bf;
  /* 11fa2773 mov edx, dword ptr [0x11fc293c] */
  EDX = (r32((uint32_t)(0x11fc293c)));
  /* 11fa2779 push edx */
  push32((uint32_t)(EDX));
  /* 11fa277a call 0x11f99230 */
  push32(0x11fa277fu); f_11f99230();
  /* 11fa277f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2782 cmp eax, dword ptr [0x11fc2934] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc2934))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2788 jne 0x11fa27bf */
  if (!C.zf) goto L_11fa27bf;
  /* 11fa278a push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa278c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa278f push eax */
  push32((uint32_t)(EAX));
  /* 11fa2790 call 0x11fa2c20 */
  push32(0x11fa2795u); f_11fa2c20();
  /* 11fa2795 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2798 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa279a je 0x11fa27bd */
  if (C.zf) goto L_11fa27bd;
  /* 11fa279c mov ecx, dword ptr [0x11fc2944] */
  ECX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa27a2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11fa27a5 mov dword ptr [0x11fc2944], ecx */
  w32((uint32_t)(0x11fc2944), (ECX));
  /* 11fa27ab cmp dword ptr [0x11fc292c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc292c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa27b2 jne 0x11fa27bd */
  if (!C.zf) goto L_11fa27bd;
  /* 11fa27b4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa27b7 mov dword ptr [0x11fc292c], edx */
  w32((uint32_t)(0x11fc292c), (EDX));
L_11fa27bd:;
  /* 11fa27bd jmp 0x11fa27de */
  goto L_11fa27de;
L_11fa27bf:;
  /* 11fa27bf mov eax, dword ptr [0x11fc2944] */
  EAX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa27c4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11fa27c7 mov dword ptr [0x11fc2944], eax */
  w32((uint32_t)(0x11fc2944), (EAX));
  /* 11fa27cc cmp dword ptr [0x11fc292c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc292c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa27d3 jne 0x11fa27de */
  if (!C.zf) goto L_11fa27de;
  /* 11fa27d5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa27d8 mov dword ptr [0x11fc292c], ecx */
  w32((uint32_t)(0x11fc292c), (ECX));
L_11fa27de:;
  /* 11fa27de jmp 0x11fa2841 */
  goto L_11fa2841;
L_11fa27e0:;
  /* 11fa27e0 cmp dword ptr [0x11fc2938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa27e7 jne 0x11fa2841 */
  if (!C.zf) goto L_11fa2841;
  /* 11fa27e9 cmp dword ptr [0x11fc2934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa27f0 je 0x11fa2841 */
  if (C.zf) goto L_11fa2841;
  /* 11fa27f2 mov edx, dword ptr [0x11fc2934] */
  EDX = (r32((uint32_t)(0x11fc2934)));
  /* 11fa27f8 push edx */
  push32((uint32_t)(EDX));
  /* 11fa27f9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11fa27fc push eax */
  push32((uint32_t)(EAX));
  /* 11fa27fd mov ecx, dword ptr [0x11fc293c] */
  ECX = (r32((uint32_t)(0x11fc293c)));
  /* 11fa2803 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa2804 call 0x11fa4ba0 */
  push32(0x11fa2809u); f_11fa4ba0();
  /* 11fa2809 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa280c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa280e jne 0x11fa2841 */
  if (!C.zf) goto L_11fa2841;
  /* 11fa2810 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa2812 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa2815 push edx */
  push32((uint32_t)(EDX));
  /* 11fa2816 call 0x11fa2c20 */
  push32(0x11fa281bu); f_11fa2c20();
  /* 11fa281b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa281e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa2820 je 0x11fa2841 */
  if (C.zf) goto L_11fa2841;
  /* 11fa2822 mov eax, dword ptr [0x11fc2944] */
  EAX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa2827 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11fa282a mov dword ptr [0x11fc2944], eax */
  w32((uint32_t)(0x11fc2944), (EAX));
  /* 11fa282f cmp dword ptr [0x11fc292c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc292c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2836 jne 0x11fa2841 */
  if (!C.zf) goto L_11fa2841;
  /* 11fa2838 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa283b mov dword ptr [0x11fc292c], ecx */
  w32((uint32_t)(0x11fc292c), (ECX));
L_11fa2841:;
  /* 11fa2841 mov eax, dword ptr [0x11fc2944] */
  EAX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa2846 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11fa2849 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fa284b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa284d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11fa284e:;
  /* 11fa284e mov esp, ebp */
  ESP = (EBP);
  /* 11fa2850 pop ebp */
  EBP = (pop32());
  /* 11fa2851 ret 4 */
  ESPCHK(0x11fa2530u, _esp0);
  ESP += 8; return;
}

/* FUN_10012860 @ 0x11fa2860 (116 bytes, 33 insns) */
void f_11fa2860(void) {
  FTRACE(0x11fa2860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa2860 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa2861 mov ebp, esp */
  EBP = (ESP);
  /* 11fa2863 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa2864 mov eax, dword ptr [0x11fc293c] */
  EAX = (r32((uint32_t)(0x11fc293c)));
  /* 11fa2869 push eax */
  push32((uint32_t)(EAX));
  /* 11fa286a call 0x11f99230 */
  push32(0x11fa286fu); f_11f99230();
  /* 11fa286f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2872 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa2874 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2877 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11fa287a mov dword ptr [0x11fc2938], ecx */
  w32((uint32_t)(0x11fc2938), (ECX));
  /* 11fa2880 cmp dword ptr [0x11fc2938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2887 je 0x11fa2892 */
  if (C.zf) goto L_11fa2892;
  /* 11fa2889 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11fa2890 jmp 0x11fa28a4 */
  goto L_11fa28a4;
L_11fa2892:;
  /* 11fa2892 mov edx, dword ptr [0x11fc293c] */
  EDX = (r32((uint32_t)(0x11fc293c)));
  /* 11fa2898 push edx */
  push32((uint32_t)(EDX));
  /* 11fa2899 call 0x11fa2f10 */
  push32(0x11fa289eu); f_11fa2f10();
  /* 11fa289e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa28a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fa28a4:;
  /* 11fa28a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa28a7 mov dword ptr [0x11fc2934], eax */
  w32((uint32_t)(0x11fc2934), (EAX));
  /* 11fa28ac push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa28ae push 0x11fa28e0 */
  push32((uint32_t)(0x11fa28e0u));
  /* 11fa28b3 call dword ptr [0x11fc52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52f4))), 0x11fa28b9u);
  /* 11fa28b9 mov ecx, dword ptr [0x11fc2944] */
  ECX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa28bf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11fa28c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa28c4 jne 0x11fa28d0 */
  if (!C.zf) goto L_11fa28d0;
  /* 11fa28c6 mov dword ptr [0x11fc2944], 0 */
  w32((uint32_t)(0x11fc2944), (0x0u));
L_11fa28d0:;
  /* 11fa28d0 mov esp, ebp */
  ESP = (EBP);
  /* 11fa28d2 pop ebp */
  EBP = (pop32());
  /* 11fa28d3 ret  */
  ESPCHK(0x11fa2860u, _esp0);
  ESP += 4; return;
}

/* FUN_100128e0 @ 0x11fa28e0 (287 bytes, 86 insns) */
void f_11fa28e0(void) {
  FTRACE(0x11fa28e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa28e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa28e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa28e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa28e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa28e9 push eax */
  push32((uint32_t)(EAX));
  /* 11fa28ea call 0x11fa2e90 */
  push32(0x11fa28efu); f_11fa2e90();
  /* 11fa28ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa28f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11fa28f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11fa28f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11fa28fa push ecx */
  push32((uint32_t)(ECX));
  /* 11fa28fb mov edx, dword ptr [0x11fc2938] */
  EDX = (r32((uint32_t)(0x11fc2938)));
  /* 11fa2901 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fa2903 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa2905 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa290b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2911 push edx */
  push32((uint32_t)(EDX));
  /* 11fa2912 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa2915 push eax */
  push32((uint32_t)(EAX));
  /* 11fa2916 call dword ptr [0x11fc294c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc294c))), 0x11fa291cu);
  /* 11fa291c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa291e jne 0x11fa2934 */
  if (!C.zf) goto L_11fa2934;
  /* 11fa2920 mov dword ptr [0x11fc2944], 0 */
  w32((uint32_t)(0x11fc2944), (0x0u));
  /* 11fa292a mov eax, 1 */
  EAX = (0x1u);
  /* 11fa292f jmp 0x11fa29f9 */
  goto L_11fa29f9;
L_11fa2934:;
  /* 11fa2934 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11fa2937 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa2938 mov edx, dword ptr [0x11fc293c] */
  EDX = (r32((uint32_t)(0x11fc293c)));
  /* 11fa293e push edx */
  push32((uint32_t)(EDX));
  /* 11fa293f call 0x11fa4ad0 */
  push32(0x11fa2944u); f_11fa4ad0();
  /* 11fa2944 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2947 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa2949 jne 0x11fa2989 */
  if (!C.zf) goto L_11fa2989;
  /* 11fa294b cmp dword ptr [0x11fc2938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2952 jne 0x11fa2966 */
  if (!C.zf) goto L_11fa2966;
  /* 11fa2954 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa2956 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa2959 push eax */
  push32((uint32_t)(EAX));
  /* 11fa295a call 0x11fa2c20 */
  push32(0x11fa295fu); f_11fa2c20();
  /* 11fa295f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2962 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa2964 je 0x11fa2987 */
  if (C.zf) goto L_11fa2987;
L_11fa2966:;
  /* 11fa2966 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa2969 mov dword ptr [0x11fc2948], ecx */
  w32((uint32_t)(0x11fc2948), (ECX));
  /* 11fa296f mov edx, dword ptr [0x11fc2948] */
  EDX = (r32((uint32_t)(0x11fc2948)));
  /* 11fa2975 mov dword ptr [0x11fc292c], edx */
  w32((uint32_t)(0x11fc292c), (EDX));
  /* 11fa297b mov eax, dword ptr [0x11fc2944] */
  EAX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa2980 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11fa2982 mov dword ptr [0x11fc2944], eax */
  w32((uint32_t)(0x11fc2944), (EAX));
L_11fa2987:;
  /* 11fa2987 jmp 0x11fa29ec */
  goto L_11fa29ec;
L_11fa2989:;
  /* 11fa2989 cmp dword ptr [0x11fc2938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2990 jne 0x11fa29ec */
  if (!C.zf) goto L_11fa29ec;
  /* 11fa2992 cmp dword ptr [0x11fc2934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2999 je 0x11fa29ec */
  if (C.zf) goto L_11fa29ec;
  /* 11fa299b mov ecx, dword ptr [0x11fc2934] */
  ECX = (r32((uint32_t)(0x11fc2934)));
  /* 11fa29a1 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa29a2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11fa29a5 push edx */
  push32((uint32_t)(EDX));
  /* 11fa29a6 mov eax, dword ptr [0x11fc293c] */
  EAX = (r32((uint32_t)(0x11fc293c)));
  /* 11fa29ab push eax */
  push32((uint32_t)(EAX));
  /* 11fa29ac call 0x11fa4ba0 */
  push32(0x11fa29b1u); f_11fa4ba0();
  /* 11fa29b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa29b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa29b6 jne 0x11fa29ec */
  if (!C.zf) goto L_11fa29ec;
  /* 11fa29b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa29ba mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa29bd push ecx */
  push32((uint32_t)(ECX));
  /* 11fa29be call 0x11fa2c20 */
  push32(0x11fa29c3u); f_11fa2c20();
  /* 11fa29c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa29c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa29c8 je 0x11fa29ec */
  if (C.zf) goto L_11fa29ec;
  /* 11fa29ca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa29cd mov dword ptr [0x11fc2948], edx */
  w32((uint32_t)(0x11fc2948), (EDX));
  /* 11fa29d3 mov eax, dword ptr [0x11fc2948] */
  EAX = (r32((uint32_t)(0x11fc2948)));
  /* 11fa29d8 mov dword ptr [0x11fc292c], eax */
  w32((uint32_t)(0x11fc292c), (EAX));
  /* 11fa29dd mov ecx, dword ptr [0x11fc2944] */
  ECX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa29e3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11fa29e6 mov dword ptr [0x11fc2944], ecx */
  w32((uint32_t)(0x11fc2944), (ECX));
L_11fa29ec:;
  /* 11fa29ec mov eax, dword ptr [0x11fc2944] */
  EAX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa29f1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11fa29f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fa29f6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa29f8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11fa29f9:;
  /* 11fa29f9 mov esp, ebp */
  ESP = (EBP);
  /* 11fa29fb pop ebp */
  EBP = (pop32());
  /* 11fa29fc ret 4 */
  ESPCHK(0x11fa28e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10012a00 @ 0x11fa2a00 (69 bytes, 20 insns) */
void f_11fa2a00(void) {
  FTRACE(0x11fa2a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa2a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa2a01 mov ebp, esp */
  EBP = (ESP);
  /* 11fa2a03 mov eax, dword ptr [0x11fc2940] */
  EAX = (r32((uint32_t)(0x11fc2940)));
  /* 11fa2a08 push eax */
  push32((uint32_t)(EAX));
  /* 11fa2a09 call 0x11f99230 */
  push32(0x11fa2a0eu); f_11f99230();
  /* 11fa2a0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2a11 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa2a13 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2a16 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11fa2a19 mov dword ptr [0x11fc2930], ecx */
  w32((uint32_t)(0x11fc2930), (ECX));
  /* 11fa2a1f push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa2a21 push 0x11fa2a50 */
  push32((uint32_t)(0x11fa2a50u));
  /* 11fa2a26 call dword ptr [0x11fc52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52f4))), 0x11fa2a2cu);
  /* 11fa2a2c mov edx, dword ptr [0x11fc2944] */
  EDX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa2a32 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa2a35 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa2a37 jne 0x11fa2a43 */
  if (!C.zf) goto L_11fa2a43;
  /* 11fa2a39 mov dword ptr [0x11fc2944], 0 */
  w32((uint32_t)(0x11fc2944), (0x0u));
L_11fa2a43:;
  /* 11fa2a43 pop ebp */
  EBP = (pop32());
  /* 11fa2a44 ret  */
  ESPCHK(0x11fa2a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a50 @ 0x11fa2a50 (172 bytes, 54 insns) */
void f_11fa2a50(void) {
  FTRACE(0x11fa2a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa2a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa2a51 mov ebp, esp */
  EBP = (ESP);
  /* 11fa2a53 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa2a56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2a59 push eax */
  push32((uint32_t)(EAX));
  /* 11fa2a5a call 0x11fa2e90 */
  push32(0x11fa2a5fu); f_11fa2e90();
  /* 11fa2a5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2a62 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11fa2a65 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11fa2a67 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11fa2a6a push ecx */
  push32((uint32_t)(ECX));
  /* 11fa2a6b mov edx, dword ptr [0x11fc2930] */
  EDX = (r32((uint32_t)(0x11fc2930)));
  /* 11fa2a71 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fa2a73 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa2a75 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa2a7b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2a81 push edx */
  push32((uint32_t)(EDX));
  /* 11fa2a82 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa2a85 push eax */
  push32((uint32_t)(EAX));
  /* 11fa2a86 call dword ptr [0x11fc294c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc294c))), 0x11fa2a8cu);
  /* 11fa2a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa2a8e jne 0x11fa2aa1 */
  if (!C.zf) goto L_11fa2aa1;
  /* 11fa2a90 mov dword ptr [0x11fc2944], 0 */
  w32((uint32_t)(0x11fc2944), (0x0u));
  /* 11fa2a9a mov eax, 1 */
  EAX = (0x1u);
  /* 11fa2a9f jmp 0x11fa2af6 */
  goto L_11fa2af6;
L_11fa2aa1:;
  /* 11fa2aa1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11fa2aa4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa2aa5 mov edx, dword ptr [0x11fc2940] */
  EDX = (r32((uint32_t)(0x11fc2940)));
  /* 11fa2aab push edx */
  push32((uint32_t)(EDX));
  /* 11fa2aac call 0x11fa4ad0 */
  push32(0x11fa2ab1u); f_11fa4ad0();
  /* 11fa2ab1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2ab4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa2ab6 jne 0x11fa2ae9 */
  if (!C.zf) goto L_11fa2ae9;
  /* 11fa2ab8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa2abb push eax */
  push32((uint32_t)(EAX));
  /* 11fa2abc call 0x11fa2bd0 */
  push32(0x11fa2ac1u); f_11fa2bd0();
  /* 11fa2ac1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2ac4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa2ac6 je 0x11fa2ae9 */
  if (C.zf) goto L_11fa2ae9;
  /* 11fa2ac8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fa2acb mov dword ptr [0x11fc2948], ecx */
  w32((uint32_t)(0x11fc2948), (ECX));
  /* 11fa2ad1 mov edx, dword ptr [0x11fc2948] */
  EDX = (r32((uint32_t)(0x11fc2948)));
  /* 11fa2ad7 mov dword ptr [0x11fc292c], edx */
  w32((uint32_t)(0x11fc292c), (EDX));
  /* 11fa2add mov eax, dword ptr [0x11fc2944] */
  EAX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa2ae2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11fa2ae4 mov dword ptr [0x11fc2944], eax */
  w32((uint32_t)(0x11fc2944), (EAX));
L_11fa2ae9:;
  /* 11fa2ae9 mov eax, dword ptr [0x11fc2944] */
  EAX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa2aee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11fa2af1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fa2af3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa2af5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11fa2af6:;
  /* 11fa2af6 mov esp, ebp */
  ESP = (EBP);
  /* 11fa2af8 pop ebp */
  EBP = (pop32());
  /* 11fa2af9 ret 4 */
  ESPCHK(0x11fa2a50u, _esp0);
  ESP += 8; return;
}

/* FUN_10012b00 @ 0x11fa2b00 (43 bytes, 11 insns) */
void f_11fa2b00(void) {
  FTRACE(0x11fa2b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa2b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa2b01 mov ebp, esp */
  EBP = (ESP);
  /* 11fa2b03 mov eax, dword ptr [0x11fc2944] */
  EAX = (r32((uint32_t)(0x11fc2944)));
  /* 11fa2b08 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11fa2b0d mov dword ptr [0x11fc2944], eax */
  w32((uint32_t)(0x11fc2944), (EAX));
  /* 11fa2b12 call dword ptr [0x11fc52e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52e4))), 0x11fa2b18u);
  /* 11fa2b18 mov dword ptr [0x11fc2948], eax */
  w32((uint32_t)(0x11fc2948), (EAX));
  /* 11fa2b1d mov ecx, dword ptr [0x11fc2948] */
  ECX = (r32((uint32_t)(0x11fc2948)));
  /* 11fa2b23 mov dword ptr [0x11fc292c], ecx */
  w32((uint32_t)(0x11fc292c), (ECX));
  /* 11fa2b29 pop ebp */
  EBP = (pop32());
  /* 11fa2b2a ret  */
  ESPCHK(0x11fa2b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b30 @ 0x11fa2b30 (155 bytes, 57 insns) */
void f_11fa2b30(void) {
  FTRACE(0x11fa2b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa2b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa2b31 mov ebp, esp */
  EBP = (ESP);
  /* 11fa2b33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa2b36 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2b3a je 0x11fa2b5b */
  if (C.zf) goto L_11fa2b5b;
  /* 11fa2b3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2b3f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa2b42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa2b44 je 0x11fa2b5b */
  if (C.zf) goto L_11fa2b5b;
  /* 11fa2b46 push 0x11fbe904 */
  push32((uint32_t)(0x11fbe904u));
  /* 11fa2b4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2b4e push edx */
  push32((uint32_t)(EDX));
  /* 11fa2b4f call 0x11fa2090 */
  push32(0x11fa2b54u); f_11fa2090();
  /* 11fa2b54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2b57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa2b59 jne 0x11fa2b83 */
  if (!C.zf) goto L_11fa2b83;
L_11fa2b5b:;
  /* 11fa2b5b push 8 */
  push32((uint32_t)(0x8u));
  /* 11fa2b5d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11fa2b60 push eax */
  push32((uint32_t)(EAX));
  /* 11fa2b61 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11fa2b66 mov ecx, dword ptr [0x11fc2948] */
  ECX = (r32((uint32_t)(0x11fc2948)));
  /* 11fa2b6c push ecx */
  push32((uint32_t)(ECX));
  /* 11fa2b6d call dword ptr [0x11fc294c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc294c))), 0x11fa2b73u);
  /* 11fa2b73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa2b75 jne 0x11fa2b7b */
  if (!C.zf) goto L_11fa2b7b;
  /* 11fa2b77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa2b79 jmp 0x11fa2bc7 */
  goto L_11fa2bc7;
L_11fa2b7b:;
  /* 11fa2b7b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11fa2b7e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11fa2b81 jmp 0x11fa2bbb */
  goto L_11fa2bbb;
L_11fa2b83:;
  /* 11fa2b83 push 0x11fbe900 */
  push32((uint32_t)(0x11fbe900u));
  /* 11fa2b88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2b8b push eax */
  push32((uint32_t)(EAX));
  /* 11fa2b8c call 0x11fa2090 */
  push32(0x11fa2b91u); f_11fa2090();
  /* 11fa2b91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2b94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa2b96 jne 0x11fa2bbb */
  if (!C.zf) goto L_11fa2bbb;
  /* 11fa2b98 push 8 */
  push32((uint32_t)(0x8u));
  /* 11fa2b9a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11fa2b9d push ecx */
  push32((uint32_t)(ECX));
  /* 11fa2b9e push 0xb */
  push32((uint32_t)(0xbu));
  /* 11fa2ba0 mov edx, dword ptr [0x11fc2948] */
  EDX = (r32((uint32_t)(0x11fc2948)));
  /* 11fa2ba6 push edx */
  push32((uint32_t)(EDX));
  /* 11fa2ba7 call dword ptr [0x11fc294c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc294c))), 0x11fa2badu);
  /* 11fa2bad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa2baf jne 0x11fa2bb5 */
  if (!C.zf) goto L_11fa2bb5;
  /* 11fa2bb1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa2bb3 jmp 0x11fa2bc7 */
  goto L_11fa2bc7;
L_11fa2bb5:;
  /* 11fa2bb5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11fa2bb8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11fa2bbb:;
  /* 11fa2bbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2bbe push ecx */
  push32((uint32_t)(ECX));
  /* 11fa2bbf call 0x11fa4cb0 */
  push32(0x11fa2bc4u); f_11fa4cb0();
  /* 11fa2bc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa2bc7:;
  /* 11fa2bc7 mov esp, ebp */
  ESP = (EBP);
  /* 11fa2bc9 pop ebp */
  EBP = (pop32());
  /* 11fa2bca ret  */
  ESPCHK(0x11fa2b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012bd0 @ 0x11fa2bd0 (79 bytes, 26 insns) */
void f_11fa2bd0(void) {
  FTRACE(0x11fa2bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa2bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa2bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa2bd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa2bd6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11fa2bda mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11fa2bde mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fa2be5 jmp 0x11fa2bf0 */
  goto L_11fa2bf0;
L_11fa2be7:;
  /* 11fa2be7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa2bea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2bed mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11fa2bf0:;
  /* 11fa2bf0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2bf4 jae 0x11fa2c16 */
  if (!C.cf) goto L_11fa2c16;
  /* 11fa2bf6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa2bf9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fa2bff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa2c02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa2c04 mov cx, word ptr [eax*2 + 0x11fc19d4] */
  CX = (r16((uint32_t)(EAX*2 + 0x11fc19d4)));
  /* 11fa2c0c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2c0e jne 0x11fa2c14 */
  if (!C.zf) goto L_11fa2c14;
  /* 11fa2c10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa2c12 jmp 0x11fa2c1b */
  goto L_11fa2c1b;
L_11fa2c14:;
  /* 11fa2c14 jmp 0x11fa2be7 */
  goto L_11fa2be7;
L_11fa2c16:;
  /* 11fa2c16 mov eax, 1 */
  EAX = (0x1u);
L_11fa2c1b:;
  /* 11fa2c1b mov esp, ebp */
  ESP = (EBP);
  /* 11fa2c1d pop ebp */
  EBP = (pop32());
  /* 11fa2c1e ret  */
  ESPCHK(0x11fa2bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c20 @ 0x11fa2c20 (135 bytes, 48 insns) */
void f_11fa2c20(void) {
  FTRACE(0x11fa2c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa2c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa2c21 mov ebp, esp */
  EBP = (ESP);
  /* 11fa2c23 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa2c26 push esi */
  push32((uint32_t)(ESI));
  /* 11fa2c27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2c2a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa2c2f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa2c34 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa2c39 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11fa2c3c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa2c41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa2c44 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11fa2c46 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11fa2c49 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa2c4a push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa2c4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa2c4f push edx */
  push32((uint32_t)(EDX));
  /* 11fa2c50 call dword ptr [0x11fc294c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc294c))), 0x11fa2c56u);
  /* 11fa2c56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa2c58 jne 0x11fa2c5e */
  if (!C.zf) goto L_11fa2c5e;
  /* 11fa2c5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa2c5c jmp 0x11fa2ca2 */
  goto L_11fa2ca2;
L_11fa2c5e:;
  /* 11fa2c5e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11fa2c61 push eax */
  push32((uint32_t)(EAX));
  /* 11fa2c62 call 0x11fa2e90 */
  push32(0x11fa2c67u); f_11fa2e90();
  /* 11fa2c67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2c6a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2c6d je 0x11fa2c9d */
  if (C.zf) goto L_11fa2c9d;
  /* 11fa2c6f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2c73 je 0x11fa2c9d */
  if (C.zf) goto L_11fa2c9d;
  /* 11fa2c75 mov ecx, dword ptr [0x11fc293c] */
  ECX = (r32((uint32_t)(0x11fc293c)));
  /* 11fa2c7b push ecx */
  push32((uint32_t)(ECX));
  /* 11fa2c7c call 0x11fa2f10 */
  push32(0x11fa2c81u); f_11fa2f10();
  /* 11fa2c81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2c84 mov esi, eax */
  ESI = (EAX);
  /* 11fa2c86 mov edx, dword ptr [0x11fc293c] */
  EDX = (r32((uint32_t)(0x11fc293c)));
  /* 11fa2c8c push edx */
  push32((uint32_t)(EDX));
  /* 11fa2c8d call 0x11f99230 */
  push32(0x11fa2c92u); f_11f99230();
  /* 11fa2c92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2c95 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2c97 jne 0x11fa2c9d */
  if (!C.zf) goto L_11fa2c9d;
  /* 11fa2c99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa2c9b jmp 0x11fa2ca2 */
  goto L_11fa2ca2;
L_11fa2c9d:;
  /* 11fa2c9d mov eax, 1 */
  EAX = (0x1u);
L_11fa2ca2:;
  /* 11fa2ca2 pop esi */
  ESI = (pop32());
  /* 11fa2ca3 mov esp, ebp */
  ESP = (EBP);
  /* 11fa2ca5 pop ebp */
  EBP = (pop32());
  /* 11fa2ca6 ret  */
  ESPCHK(0x11fa2c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cb0 @ 0x11fa2cb0 (77 bytes, 18 insns) */
void f_11fa2cb0(void) {
  FTRACE(0x11fa2cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa2cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa2cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa2cb3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa2cb9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11fa2cc3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11fa2cc9 push eax */
  push32((uint32_t)(EAX));
  /* 11fa2cca call dword ptr [0x11fc52e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52e0))), 0x11fa2cd0u);
  /* 11fa2cd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa2cd2 je 0x11fa2ce9 */
  if (C.zf) goto L_11fa2ce9;
  /* 11fa2cd4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2cdb jne 0x11fa2ce9 */
  if (!C.zf) goto L_11fa2ce9;
  /* 11fa2cdd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11fa2ce7 jmp 0x11fa2cf3 */
  goto L_11fa2cf3;
L_11fa2ce9:;
  /* 11fa2ce9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11fa2cf3:;
  /* 11fa2cf3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11fa2cf9 mov esp, ebp */
  ESP = (EBP);
  /* 11fa2cfb pop ebp */
  EBP = (pop32());
  /* 11fa2cfc ret  */
  ESPCHK(0x11fa2cb0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11fa2d00 (388 bytes, 118 insns) */
void f_11fa2d00(void) {
  FTRACE(0x11fa2d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa2d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa2d01 mov ebp, esp */
  EBP = (ESP);
  /* 11fa2d03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa2d06 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fa2d0d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11fa2d14 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11fa2d1b:;
  /* 11fa2d1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa2d1e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2d21 jg 0x11fa2e68 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa2e68;
  /* 11fa2d27 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa2d2a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2d2d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fa2d2e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa2d30 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fa2d32 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fa2d35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa2d38 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa2d3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2d3e cmp edx, dword ptr [ecx + 0x11fc1530] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11fc1530))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2d44 jne 0x11fa2e3e */
  if (!C.zf) goto L_11fa2e3e;
  /* 11fa2d4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa2d4d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fa2d50 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2d54 ja 0x11fa2d77 */
  if ((!C.cf&&!C.zf)) goto L_11fa2d77;
  /* 11fa2d56 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2d5a je 0x11fa2de9 */
  if (C.zf) goto L_11fa2de9;
  /* 11fa2d60 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2d64 je 0x11fa2d94 */
  if (C.zf) goto L_11fa2d94;
  /* 11fa2d66 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2d6a je 0x11fa2db6 */
  if (C.zf) goto L_11fa2db6;
  /* 11fa2d6c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2d70 je 0x11fa2dd8 */
  if (C.zf) goto L_11fa2dd8;
  /* 11fa2d72 jmp 0x11fa2e08 */
  goto L_11fa2e08;
L_11fa2d77:;
  /* 11fa2d77 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2d7e je 0x11fa2da5 */
  if (C.zf) goto L_11fa2da5;
  /* 11fa2d80 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2d87 je 0x11fa2dc7 */
  if (C.zf) goto L_11fa2dc7;
  /* 11fa2d89 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2d90 je 0x11fa2dfa */
  if (C.zf) goto L_11fa2dfa;
  /* 11fa2d92 jmp 0x11fa2e08 */
  goto L_11fa2e08;
L_11fa2d94:;
  /* 11fa2d94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa2d97 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa2d9a add ecx, 0x11fc1534 */
  { uint32_t _a=(ECX),_b=(0x11fc1534u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2da0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa2da3 jmp 0x11fa2e08 */
  goto L_11fa2e08;
L_11fa2da5:;
  /* 11fa2da5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa2da8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa2dab mov eax, dword ptr [edx + 0x11fc153c] */
  EAX = (r32((uint32_t)(EDX + 0x11fc153c)));
  /* 11fa2db1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fa2db4 jmp 0x11fa2e08 */
  goto L_11fa2e08;
L_11fa2db6:;
  /* 11fa2db6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa2db9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa2dbc add ecx, 0x11fc1540 */
  { uint32_t _a=(ECX),_b=(0x11fc1540u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2dc2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa2dc5 jmp 0x11fa2e08 */
  goto L_11fa2e08;
L_11fa2dc7:;
  /* 11fa2dc7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa2dca imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa2dcd mov eax, dword ptr [edx + 0x11fc1544] */
  EAX = (r32((uint32_t)(EDX + 0x11fc1544)));
  /* 11fa2dd3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fa2dd6 jmp 0x11fa2e08 */
  goto L_11fa2e08;
L_11fa2dd8:;
  /* 11fa2dd8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa2ddb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa2dde add ecx, 0x11fc1548 */
  { uint32_t _a=(ECX),_b=(0x11fc1548u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2de4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa2de7 jmp 0x11fa2e08 */
  goto L_11fa2e08;
L_11fa2de9:;
  /* 11fa2de9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa2dec imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa2def add edx, 0x11fc154c */
  { uint32_t _a=(EDX),_b=(0x11fc154cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2df5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fa2df8 jmp 0x11fa2e08 */
  goto L_11fa2e08;
L_11fa2dfa:;
  /* 11fa2dfa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa2dfd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa2e00 add eax, 0x11fc1554 */
  { uint32_t _a=(EAX),_b=(0x11fc1554u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2e05 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fa2e08:;
  /* 11fa2e08 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2e0c je 0x11fa2e14 */
  if (C.zf) goto L_11fa2e14;
  /* 11fa2e0e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2e12 jge 0x11fa2e16 */
  if ((C.sf==C.of)) goto L_11fa2e16;
L_11fa2e14:;
  /* 11fa2e14 jmp 0x11fa2e68 */
  goto L_11fa2e68;
L_11fa2e16:;
  /* 11fa2e16 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa2e19 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa2e1c push ecx */
  push32((uint32_t)(ECX));
  /* 11fa2e1d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa2e20 push edx */
  push32((uint32_t)(EDX));
  /* 11fa2e21 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa2e24 push eax */
  push32((uint32_t)(EAX));
  /* 11fa2e25 call 0x11f99c20 */
  push32(0x11fa2e2au); f_11f99c20();
  /* 11fa2e2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2e2d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa2e30 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2e33 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11fa2e37 mov eax, 1 */
  EAX = (0x1u);
  /* 11fa2e3c jmp 0x11fa2e7e */
  goto L_11fa2e7e;
L_11fa2e3e:;
  /* 11fa2e3e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa2e41 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa2e44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2e47 cmp eax, dword ptr [edx + 0x11fc1530] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11fc1530))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2e4d jae 0x11fa2e5a */
  if (!C.cf) goto L_11fa2e5a;
  /* 11fa2e4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa2e52 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa2e55 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fa2e58 jmp 0x11fa2e63 */
  goto L_11fa2e63;
L_11fa2e5a:;
  /* 11fa2e5a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa2e5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2e60 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11fa2e63:;
  /* 11fa2e63 jmp 0x11fa2d1b */
  goto L_11fa2d1b;
L_11fa2e68:;
  /* 11fa2e68 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa2e6b push eax */
  push32((uint32_t)(EAX));
  /* 11fa2e6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa2e6f push ecx */
  push32((uint32_t)(ECX));
  /* 11fa2e70 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa2e73 push edx */
  push32((uint32_t)(EDX));
  /* 11fa2e74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2e77 push eax */
  push32((uint32_t)(EAX));
  /* 11fa2e78 call dword ptr [0x11fc52ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52ec))), 0x11fa2e7eu);
L_11fa2e7e:;
  /* 11fa2e7e mov esp, ebp */
  ESP = (EBP);
  /* 11fa2e80 pop ebp */
  EBP = (pop32());
  /* 11fa2e81 ret 0x10 */
  ESPCHK(0x11fa2d00u, _esp0);
  ESP += 20; return;
}

/* FUN_10012e90 @ 0x11fa2e90 (118 bytes, 42 insns) */
void f_11fa2e90(void) {
  FTRACE(0x11fa2e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa2e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa2e91 mov ebp, esp */
  EBP = (ESP);
  /* 11fa2e93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa2e96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fa2e9d:;
  /* 11fa2e9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2ea0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fa2ea2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11fa2ea5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fa2ea9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2eac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2eaf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fa2eb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa2eb4 je 0x11fa2eff */
  if (C.zf) goto L_11fa2eff;
  /* 11fa2eb6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fa2eba cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2ebd jl 0x11fa2ed2 */
  if ((C.sf!=C.of)) goto L_11fa2ed2;
  /* 11fa2ebf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fa2ec3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2ec6 jg 0x11fa2ed2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa2ed2;
  /* 11fa2ec8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fa2ecb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fa2ecd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11fa2ed0 jmp 0x11fa2eec */
  goto L_11fa2eec;
L_11fa2ed2:;
  /* 11fa2ed2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fa2ed6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2ed9 jl 0x11fa2eec */
  if ((C.sf!=C.of)) goto L_11fa2eec;
  /* 11fa2edb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fa2edf cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2ee2 jg 0x11fa2eec */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa2eec;
  /* 11fa2ee4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fa2ee7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fa2ee9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11fa2eec:;
  /* 11fa2eec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa2eef shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11fa2ef2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fa2ef6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11fa2efa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa2efd jmp 0x11fa2e9d */
  goto L_11fa2e9d;
L_11fa2eff:;
  /* 11fa2eff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa2f02 mov esp, ebp */
  ESP = (EBP);
  /* 11fa2f04 pop ebp */
  EBP = (pop32());
  /* 11fa2f05 ret  */
  ESPCHK(0x11fa2e90u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11fa2f10 (101 bytes, 36 insns) */
void f_11fa2f10(void) {
  FTRACE(0x11fa2f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa2f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa2f11 mov ebp, esp */
  EBP = (ESP);
  /* 11fa2f13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa2f16 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fa2f1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2f20 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fa2f22 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11fa2f25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2f28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2f2b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11fa2f2e:;
  /* 11fa2f2e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11fa2f32 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2f35 jl 0x11fa2f40 */
  if ((C.sf!=C.of)) goto L_11fa2f40;
  /* 11fa2f37 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11fa2f3b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2f3e jle 0x11fa2f52 */
  if ((C.zf||C.sf!=C.of)) goto L_11fa2f52;
L_11fa2f40:;
  /* 11fa2f40 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11fa2f44 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2f47 jl 0x11fa2f6e */
  if ((C.sf!=C.of)) goto L_11fa2f6e;
  /* 11fa2f49 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11fa2f4d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2f50 jg 0x11fa2f6e */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa2f6e;
L_11fa2f52:;
  /* 11fa2f52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa2f55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2f58 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa2f5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2f5e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa2f60 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11fa2f63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2f66 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2f69 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11fa2f6c jmp 0x11fa2f2e */
  goto L_11fa2f2e;
L_11fa2f6e:;
  /* 11fa2f6e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa2f71 mov esp, ebp */
  ESP = (EBP);
  /* 11fa2f73 pop ebp */
  EBP = (pop32());
  /* 11fa2f74 ret  */
  ESPCHK(0x11fa2f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f80 @ 0x11fa2f80 (122 bytes, 39 insns) */
void f_11fa2f80(void) {
  FTRACE(0x11fa2f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa2f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa2f81 mov ebp, esp */
  EBP = (ESP);
  /* 11fa2f83 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa2f84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2f87 cmp eax, dword ptr [0x11fc41dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc41dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa2f8d jae 0x11fa2fb1 */
  if (!C.cf) goto L_11fa2fb1;
  /* 11fa2f8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2f92 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11fa2f95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2f98 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11fa2f9b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa2f9e mov eax, dword ptr [ecx*4 + 0x11fc40a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11fc40a0)));
  /* 11fa2fa5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11fa2faa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fa2fad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa2faf jne 0x11fa2fcc */
  if (!C.zf) goto L_11fa2fcc;
L_11fa2fb1:;
  /* 11fa2fb1 call 0x11f9e2d0 */
  push32(0x11fa2fb6u); f_11f9e2d0();
  /* 11fa2fb6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11fa2fbc call 0x11f9e2e0 */
  push32(0x11fa2fc1u); f_11f9e2e0();
  /* 11fa2fc1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11fa2fc7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa2fca jmp 0x11fa2ff6 */
  goto L_11fa2ff6;
L_11fa2fcc:;
  /* 11fa2fcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2fcf push edx */
  push32((uint32_t)(EDX));
  /* 11fa2fd0 call 0x11f9faf0 */
  push32(0x11fa2fd5u); f_11f9faf0();
  /* 11fa2fd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2fd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2fdb push eax */
  push32((uint32_t)(EAX));
  /* 11fa2fdc call 0x11fa3000 */
  push32(0x11fa2fe1u); f_11fa3000();
  /* 11fa2fe1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2fe4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa2fe7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa2fea push ecx */
  push32((uint32_t)(ECX));
  /* 11fa2feb call 0x11f9fb80 */
  push32(0x11fa2ff0u); f_11f9fb80();
  /* 11fa2ff0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa2ff3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11fa2ff6:;
  /* 11fa2ff6 mov esp, ebp */
  ESP = (EBP);
  /* 11fa2ff8 pop ebp */
  EBP = (pop32());
  /* 11fa2ff9 ret  */
  ESPCHK(0x11fa2f80u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11fa3000 (170 bytes, 59 insns) */
void f_11fa3000(void) {
  FTRACE(0x11fa3000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa3000 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa3001 mov ebp, esp */
  EBP = (ESP);
  /* 11fa3003 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3004 push esi */
  push32((uint32_t)(ESI));
  /* 11fa3005 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa3008 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3009 call 0x11f9f970 */
  push32(0x11fa300eu); f_11f9f970();
  /* 11fa300e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3011 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa3014 je 0x11fa3053 */
  if (C.zf) goto L_11fa3053;
  /* 11fa3016 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa301a je 0x11fa3022 */
  if (C.zf) goto L_11fa3022;
  /* 11fa301c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa3020 jne 0x11fa303c */
  if (!C.zf) goto L_11fa303c;
L_11fa3022:;
  /* 11fa3022 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa3024 call 0x11f9f970 */
  push32(0x11fa3029u); f_11f9f970();
  /* 11fa3029 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa302c mov esi, eax */
  ESI = (EAX);
  /* 11fa302e push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa3030 call 0x11f9f970 */
  push32(0x11fa3035u); f_11f9f970();
  /* 11fa3035 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3038 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa303a je 0x11fa3053 */
  if (C.zf) goto L_11fa3053;
L_11fa303c:;
  /* 11fa303c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa303f push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3040 call 0x11f9f970 */
  push32(0x11fa3045u); f_11f9f970();
  /* 11fa3045 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3048 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3049 call dword ptr [0x11fc52e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52e8))), 0x11fa304fu);
  /* 11fa304f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa3051 je 0x11fa305c */
  if (C.zf) goto L_11fa305c;
L_11fa3053:;
  /* 11fa3053 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fa305a jmp 0x11fa3065 */
  goto L_11fa3065;
L_11fa305c:;
  /* 11fa305c call dword ptr [0x11fc53ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53ac))), 0x11fa3062u);
  /* 11fa3062 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fa3065:;
  /* 11fa3065 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa3068 push edx */
  push32((uint32_t)(EDX));
  /* 11fa3069 call 0x11f9f890 */
  push32(0x11fa306eu); f_11f9f890();
  /* 11fa306e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3071 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa3074 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fa3077 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa307a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11fa307d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa3080 mov edx, dword ptr [eax*4 + 0x11fc40a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11fc40a0)));
  /* 11fa3087 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 11fa308c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa3090 je 0x11fa30a3 */
  if (C.zf) goto L_11fa30a3;
  /* 11fa3092 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa3095 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3096 call 0x11f9e230 */
  push32(0x11fa309bu); f_11f9e230();
  /* 11fa309b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa309e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa30a1 jmp 0x11fa30a5 */
  goto L_11fa30a5;
L_11fa30a3:;
  /* 11fa30a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fa30a5:;
  /* 11fa30a5 pop esi */
  ESI = (pop32());
  /* 11fa30a6 mov esp, ebp */
  ESP = (EBP);
  /* 11fa30a8 pop ebp */
  EBP = (pop32());
  /* 11fa30a9 ret  */
  ESPCHK(0x11fa3000u, _esp0);
  ESP += 4; return;
}

/* FUN_100130b0 @ 0x11fa30b0 (146 bytes, 52 insns) */
void f_11fa30b0(void) {
  FTRACE(0x11fa30b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa30b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa30b1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa30b3 push ebx */
  push32((uint32_t)(EBX));
  /* 11fa30b4 push esi */
  push32((uint32_t)(ESI));
  /* 11fa30b5 push edi */
  push32((uint32_t)(EDI));
L_11fa30b6:;
  /* 11fa30b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa30ba jne 0x11fa30da */
  if (!C.zf) goto L_11fa30da;
  /* 11fa30bc push 0x11fbe240 */
  push32((uint32_t)(0x11fbe240u));
  /* 11fa30c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa30c3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11fa30c5 push 0x11fbe908 */
  push32((uint32_t)(0x11fbe908u));
  /* 11fa30ca push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa30cc call 0x11f954c0 */
  push32(0x11fa30d1u); f_11f954c0();
  /* 11fa30d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa30d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa30d7 jne 0x11fa30da */
  if (!C.zf) goto L_11fa30da;
  /* 11fa30d9 int3  */
  x86_unimpl("int3 @ 0x11fa30d9");
L_11fa30da:;
  /* 11fa30da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa30dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa30de jne 0x11fa30b6 */
  if (!C.zf) goto L_11fa30b6;
  /* 11fa30e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa30e3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fa30e6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa30ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa30ee je 0x11fa313d */
  if (C.zf) goto L_11fa313d;
  /* 11fa30f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa30f3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11fa30f6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11fa30f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa30fb je 0x11fa313d */
  if (C.zf) goto L_11fa313d;
  /* 11fa30fd push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa30ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa3102 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fa3105 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3106 call 0x11f96e90 */
  push32(0x11fa310bu); f_11f96e90();
  /* 11fa310b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa310e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa3111 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fa3114 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa311a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa311d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11fa3120 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa3123 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11fa3129 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa312c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11fa3133 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa3136 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11fa313d:;
  /* 11fa313d pop edi */
  EDI = (pop32());
  /* 11fa313e pop esi */
  ESI = (pop32());
  /* 11fa313f pop ebx */
  EBX = (pop32());
  /* 11fa3140 pop ebp */
  EBP = (pop32());
  /* 11fa3141 ret  */
  ESPCHK(0x11fa30b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013150 @ 0x11fa3150 (289 bytes, 97 insns) */
void f_11fa3150(void) {
  FTRACE(0x11fa3150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa3150 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa3151 mov ebp, esp */
  EBP = (ESP);
  /* 11fa3153 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa3156 push esi */
  push32((uint32_t)(ESI));
  /* 11fa3157 mov eax, dword ptr [0x11fc1ca8] */
  EAX = (r32((uint32_t)(0x11fc1ca8)));
  /* 11fa315c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fa315f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fa3166 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fa316d jmp 0x11fa3178 */
  goto L_11fa3178;
L_11fa316f:;
  /* 11fa316f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa3172 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3175 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11fa3178:;
  /* 11fa3178 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa317c jae 0x11fa31b1 */
  if (!C.cf) goto L_11fa31b1;
  /* 11fa317e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa3181 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa3184 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11fa3187 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3188 call 0x11f99230 */
  push32(0x11fa318du); f_11f99230();
  /* 11fa318d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3190 mov esi, eax */
  ESI = (EAX);
  /* 11fa3192 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa3195 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa3198 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11fa319c push ecx */
  push32((uint32_t)(ECX));
  /* 11fa319d call 0x11f99230 */
  push32(0x11fa31a2u); f_11f99230();
  /* 11fa31a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa31a5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa31a8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11fa31ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fa31af jmp 0x11fa316f */
  goto L_11fa316f;
L_11fa31b1:;
  /* 11fa31b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa31b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa31b7 push eax */
  push32((uint32_t)(EAX));
  /* 11fa31b8 call 0x11f963e0 */
  push32(0x11fa31bdu); f_11f963e0();
  /* 11fa31bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa31c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa31c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa31c7 je 0x11fa3269 */
  if (C.zf) goto L_11fa3269;
  /* 11fa31cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa31d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fa31d3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fa31da jmp 0x11fa31e5 */
  goto L_11fa31e5;
L_11fa31dc:;
  /* 11fa31dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa31df add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa31e2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11fa31e5:;
  /* 11fa31e5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa31e9 jae 0x11fa325a */
  if (!C.cf) goto L_11fa325a;
  /* 11fa31eb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa31ee mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11fa31f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa31f4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa31f7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fa31fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa31fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa3200 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11fa3203 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3204 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3207 push edx */
  push32((uint32_t)(EDX));
  /* 11fa3208 call 0x11f993b0 */
  push32(0x11fa320du); f_11f993b0();
  /* 11fa320d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3210 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3211 call 0x11f99230 */
  push32(0x11fa3216u); f_11f99230();
  /* 11fa3216 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3219 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa321c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa321e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fa3221 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3224 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11fa3227 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa322a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa322d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fa3230 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa3233 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa3236 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11fa323a push eax */
  push32((uint32_t)(EAX));
  /* 11fa323b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa323e push ecx */
  push32((uint32_t)(ECX));
  /* 11fa323f call 0x11f993b0 */
  push32(0x11fa3244u); f_11f993b0();
  /* 11fa3244 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3247 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3248 call 0x11f99230 */
  push32(0x11fa324du); f_11f99230();
  /* 11fa324d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3250 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3253 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3255 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fa3258 jmp 0x11fa31dc */
  goto L_11fa31dc;
L_11fa325a:;
  /* 11fa325a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa325d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11fa3260 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3263 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3266 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11fa3269:;
  /* 11fa3269 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa326c pop esi */
  ESI = (pop32());
  /* 11fa326d mov esp, ebp */
  ESP = (EBP);
  /* 11fa326f pop ebp */
  EBP = (pop32());
  /* 11fa3270 ret  */
  ESPCHK(0x11fa3150u, _esp0);
  ESP += 4; return;
}

/* FUN_10013280 @ 0x11fa3280 (291 bytes, 97 insns) */
void f_11fa3280(void) {
  FTRACE(0x11fa3280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa3280 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa3281 mov ebp, esp */
  EBP = (ESP);
  /* 11fa3283 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa3286 push esi */
  push32((uint32_t)(ESI));
  /* 11fa3287 mov eax, dword ptr [0x11fc1ca8] */
  EAX = (r32((uint32_t)(0x11fc1ca8)));
  /* 11fa328c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fa328f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fa3296 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fa329d jmp 0x11fa32a8 */
  goto L_11fa32a8;
L_11fa329f:;
  /* 11fa329f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa32a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa32a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11fa32a8:;
  /* 11fa32a8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa32ac jae 0x11fa32e2 */
  if (!C.cf) goto L_11fa32e2;
  /* 11fa32ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa32b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa32b4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11fa32b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa32b9 call 0x11f99230 */
  push32(0x11fa32beu); f_11f99230();
  /* 11fa32be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa32c1 mov esi, eax */
  ESI = (EAX);
  /* 11fa32c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa32c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa32c9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11fa32cd push ecx */
  push32((uint32_t)(ECX));
  /* 11fa32ce call 0x11f99230 */
  push32(0x11fa32d3u); f_11f99230();
  /* 11fa32d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa32d6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa32d9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11fa32dd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fa32e0 jmp 0x11fa329f */
  goto L_11fa329f;
L_11fa32e2:;
  /* 11fa32e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa32e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa32e8 push eax */
  push32((uint32_t)(EAX));
  /* 11fa32e9 call 0x11f963e0 */
  push32(0x11fa32eeu); f_11f963e0();
  /* 11fa32ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa32f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa32f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa32f8 je 0x11fa339b */
  if (C.zf) goto L_11fa339b;
  /* 11fa32fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa3301 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fa3304 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fa330b jmp 0x11fa3316 */
  goto L_11fa3316;
L_11fa330d:;
  /* 11fa330d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa3310 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3313 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11fa3316:;
  /* 11fa3316 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa331a jae 0x11fa338c */
  if (!C.cf) goto L_11fa338c;
  /* 11fa331c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa331f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11fa3322 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3325 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3328 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fa332b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa332e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa3331 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11fa3335 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3336 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3339 push edx */
  push32((uint32_t)(EDX));
  /* 11fa333a call 0x11f993b0 */
  push32(0x11fa333fu); f_11f993b0();
  /* 11fa333f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3342 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3343 call 0x11f99230 */
  push32(0x11fa3348u); f_11f99230();
  /* 11fa3348 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa334b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa334e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3350 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fa3353 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3356 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11fa3359 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa335c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa335f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fa3362 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa3365 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa3368 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11fa336c push eax */
  push32((uint32_t)(EAX));
  /* 11fa336d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3370 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3371 call 0x11f993b0 */
  push32(0x11fa3376u); f_11f993b0();
  /* 11fa3376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3379 push eax */
  push32((uint32_t)(EAX));
  /* 11fa337a call 0x11f99230 */
  push32(0x11fa337fu); f_11f99230();
  /* 11fa337f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3382 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3385 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3387 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fa338a jmp 0x11fa330d */
  goto L_11fa330d;
L_11fa338c:;
  /* 11fa338c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa338f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11fa3392 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3395 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3398 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11fa339b:;
  /* 11fa339b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa339e pop esi */
  ESI = (pop32());
  /* 11fa339f mov esp, ebp */
  ESP = (EBP);
  /* 11fa33a1 pop ebp */
  EBP = (pop32());
  /* 11fa33a2 ret  */
  ESPCHK(0x11fa3280u, _esp0);
  ESP += 4; return;
}

/* FUN_100133b0 @ 0x11fa33b0 (878 bytes, 273 insns) */
void f_11fa33b0(void) {
  FTRACE(0x11fa33b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa33b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa33b1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa33b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa33b6 push esi */
  push32((uint32_t)(ESI));
  /* 11fa33b7 mov eax, dword ptr [0x11fc1ca8] */
  EAX = (r32((uint32_t)(0x11fc1ca8)));
  /* 11fa33bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fa33bf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fa33c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fa33cd jmp 0x11fa33d8 */
  goto L_11fa33d8;
L_11fa33cf:;
  /* 11fa33cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa33d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa33d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11fa33d8:;
  /* 11fa33d8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa33dc jae 0x11fa3411 */
  if (!C.cf) goto L_11fa3411;
  /* 11fa33de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa33e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa33e4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11fa33e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa33e8 call 0x11f99230 */
  push32(0x11fa33edu); f_11f99230();
  /* 11fa33ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa33f0 mov esi, eax */
  ESI = (EAX);
  /* 11fa33f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa33f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa33f8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11fa33fc push ecx */
  push32((uint32_t)(ECX));
  /* 11fa33fd call 0x11f99230 */
  push32(0x11fa3402u); f_11f99230();
  /* 11fa3402 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3405 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3408 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11fa340c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fa340f jmp 0x11fa33cf */
  goto L_11fa33cf;
L_11fa3411:;
  /* 11fa3411 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fa3418 jmp 0x11fa3423 */
  goto L_11fa3423;
L_11fa341a:;
  /* 11fa341a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa341d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3420 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11fa3423:;
  /* 11fa3423 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa3427 jae 0x11fa345d */
  if (!C.cf) goto L_11fa345d;
  /* 11fa3429 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa342c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa342f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11fa3433 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3434 call 0x11f99230 */
  push32(0x11fa3439u); f_11f99230();
  /* 11fa3439 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa343c mov esi, eax */
  ESI = (EAX);
  /* 11fa343e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa3441 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa3444 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11fa3448 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3449 call 0x11f99230 */
  push32(0x11fa344eu); f_11f99230();
  /* 11fa344e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3451 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3454 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11fa3458 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa345b jmp 0x11fa341a */
  goto L_11fa341a;
L_11fa345d:;
  /* 11fa345d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa3460 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11fa3466 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3467 call 0x11f99230 */
  push32(0x11fa346cu); f_11f99230();
  /* 11fa346c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa346f mov esi, eax */
  ESI = (EAX);
  /* 11fa3471 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa3474 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 11fa347a push edx */
  push32((uint32_t)(EDX));
  /* 11fa347b call 0x11f99230 */
  push32(0x11fa3480u); f_11f99230();
  /* 11fa3480 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3483 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3486 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11fa348a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fa348d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa3490 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11fa3496 push edx */
  push32((uint32_t)(EDX));
  /* 11fa3497 call 0x11f99230 */
  push32(0x11fa349cu); f_11f99230();
  /* 11fa349c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa349f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa34a2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11fa34a6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fa34a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa34ac mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11fa34b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa34b3 call 0x11f99230 */
  push32(0x11fa34b8u); f_11f99230();
  /* 11fa34b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa34bb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa34be lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11fa34c2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fa34c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa34c8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11fa34ce push edx */
  push32((uint32_t)(EDX));
  /* 11fa34cf call 0x11f99230 */
  push32(0x11fa34d4u); f_11f99230();
  /* 11fa34d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa34d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa34da lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11fa34de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fa34e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa34e4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa34e9 push eax */
  push32((uint32_t)(EAX));
  /* 11fa34ea call 0x11f963e0 */
  push32(0x11fa34efu); f_11f963e0();
  /* 11fa34ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa34f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa34f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa34f9 je 0x11fa3716 */
  if (C.zf) goto L_11fa3716;
  /* 11fa34ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa3502 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11fa3505 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa3508 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa350e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fa3511 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11fa3516 mov eax, dword ptr [0x11fc1ca8] */
  EAX = (r32((uint32_t)(0x11fc1ca8)));
  /* 11fa351b push eax */
  push32((uint32_t)(EAX));
  /* 11fa351c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa351f push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3520 call 0x11f9cce0 */
  push32(0x11fa3525u); f_11f9cce0();
  /* 11fa3525 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3528 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fa352f jmp 0x11fa353a */
  goto L_11fa353a;
L_11fa3531:;
  /* 11fa3531 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa3534 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3537 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11fa353a:;
  /* 11fa353a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa353e jae 0x11fa35ae */
  if (!C.cf) goto L_11fa35ae;
  /* 11fa3540 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa3543 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa3546 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3549 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11fa354c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa354f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa3552 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11fa3555 push edx */
  push32((uint32_t)(EDX));
  /* 11fa3556 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3559 push eax */
  push32((uint32_t)(EAX));
  /* 11fa355a call 0x11f993b0 */
  push32(0x11fa355fu); f_11f993b0();
  /* 11fa355f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3562 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3563 call 0x11f99230 */
  push32(0x11fa3568u); f_11f99230();
  /* 11fa3568 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa356b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa356e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11fa3572 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fa3575 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa3578 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa357b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa357e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11fa3582 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa3585 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa3588 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 11fa358c push edx */
  push32((uint32_t)(EDX));
  /* 11fa358d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3590 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3591 call 0x11f993b0 */
  push32(0x11fa3596u); f_11f993b0();
  /* 11fa3596 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3599 push eax */
  push32((uint32_t)(EAX));
  /* 11fa359a call 0x11f99230 */
  push32(0x11fa359fu); f_11f99230();
  /* 11fa359f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa35a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa35a5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11fa35a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fa35ac jmp 0x11fa3531 */
  goto L_11fa3531;
L_11fa35ae:;
  /* 11fa35ae mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fa35b5 jmp 0x11fa35c0 */
  goto L_11fa35c0;
L_11fa35b7:;
  /* 11fa35b7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa35ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa35bd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11fa35c0:;
  /* 11fa35c0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa35c4 jae 0x11fa3636 */
  if (!C.cf) goto L_11fa3636;
  /* 11fa35c6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa35c9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa35cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa35cf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11fa35d3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa35d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa35d9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11fa35dd push eax */
  push32((uint32_t)(EAX));
  /* 11fa35de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa35e1 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa35e2 call 0x11f993b0 */
  push32(0x11fa35e7u); f_11f993b0();
  /* 11fa35e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa35ea push eax */
  push32((uint32_t)(EAX));
  /* 11fa35eb call 0x11f99230 */
  push32(0x11fa35f0u); f_11f99230();
  /* 11fa35f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa35f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa35f6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11fa35fa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fa35fd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa3600 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa3603 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3606 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 11fa360a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa360d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa3610 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11fa3614 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3615 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3618 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3619 call 0x11f993b0 */
  push32(0x11fa361eu); f_11f993b0();
  /* 11fa361e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3621 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3622 call 0x11f99230 */
  push32(0x11fa3627u); f_11f99230();
  /* 11fa3627 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa362a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa362d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11fa3631 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fa3634 jmp 0x11fa35b7 */
  goto L_11fa35b7;
L_11fa3636:;
  /* 11fa3636 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa3639 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa363c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11fa3642 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa3645 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11fa364b push ecx */
  push32((uint32_t)(ECX));
  /* 11fa364c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa364f push edx */
  push32((uint32_t)(EDX));
  /* 11fa3650 call 0x11f993b0 */
  push32(0x11fa3655u); f_11f993b0();
  /* 11fa3655 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3658 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3659 call 0x11f99230 */
  push32(0x11fa365eu); f_11f99230();
  /* 11fa365e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3661 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3664 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11fa3668 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fa366b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa366e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3671 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11fa3677 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa367a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11fa3680 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3681 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3684 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3685 call 0x11f993b0 */
  push32(0x11fa368au); f_11f993b0();
  /* 11fa368a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa368d push eax */
  push32((uint32_t)(EAX));
  /* 11fa368e call 0x11f99230 */
  push32(0x11fa3693u); f_11f99230();
  /* 11fa3693 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3696 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3699 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11fa369d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fa36a0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa36a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa36a6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 11fa36ac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa36af mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11fa36b5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa36b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa36b9 push edx */
  push32((uint32_t)(EDX));
  /* 11fa36ba call 0x11f993b0 */
  push32(0x11fa36bfu); f_11f993b0();
  /* 11fa36bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa36c2 push eax */
  push32((uint32_t)(EAX));
  /* 11fa36c3 call 0x11f99230 */
  push32(0x11fa36c8u); f_11f99230();
  /* 11fa36c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa36cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa36ce lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11fa36d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fa36d5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa36d8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa36db mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11fa36e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa36e4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11fa36ea push eax */
  push32((uint32_t)(EAX));
  /* 11fa36eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa36ee push ecx */
  push32((uint32_t)(ECX));
  /* 11fa36ef call 0x11f993b0 */
  push32(0x11fa36f4u); f_11f993b0();
  /* 11fa36f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa36f7 push eax */
  push32((uint32_t)(EAX));
  /* 11fa36f8 call 0x11f99230 */
  push32(0x11fa36fdu); f_11f99230();
  /* 11fa36fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3700 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3703 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11fa3707 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fa370a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa370d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa3710 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11fa3716:;
  /* 11fa3716 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa3719 pop esi */
  ESI = (pop32());
  /* 11fa371a mov esp, ebp */
  ESP = (EBP);
  /* 11fa371c pop ebp */
  EBP = (pop32());
  /* 11fa371d ret  */
  ESPCHK(0x11fa33b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013720 @ 0x11fa3720 (31 bytes, 15 insns) */
void f_11fa3720(void) {
  FTRACE(0x11fa3720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa3720 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa3721 mov ebp, esp */
  EBP = (ESP);
  /* 11fa3723 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa3725 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3728 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3729 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa372c push ecx */
  push32((uint32_t)(ECX));
  /* 11fa372d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3730 push edx */
  push32((uint32_t)(EDX));
  /* 11fa3731 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa3734 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3735 call 0x11fa3740 */
  push32(0x11fa373au); f_11fa3740();
  /* 11fa373a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa373d pop ebp */
  EBP = (pop32());
  /* 11fa373e ret  */
  ESPCHK(0x11fa3720u, _esp0);
  ESP += 4; return;
}

/* FUN_10013740 @ 0x11fa3740 (393 bytes, 123 insns) */
void f_11fa3740(void) {
  FTRACE(0x11fa3740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa3740 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa3741 mov ebp, esp */
  EBP = (ESP);
  /* 11fa3743 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa3746 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa374a jne 0x11fa3756 */
  if (!C.zf) goto L_11fa3756;
  /* 11fa374c mov eax, dword ptr [0x11fc1ca8] */
  EAX = (r32((uint32_t)(0x11fc1ca8)));
  /* 11fa3751 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fa3754 jmp 0x11fa375c */
  goto L_11fa375c;
L_11fa3756:;
  /* 11fa3756 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa3759 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11fa375c:;
  /* 11fa375c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa375f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fa3762 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3765 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fa3768 push 0x11fc2a4c */
  push32((uint32_t)(0x11fc2a4cu));
  /* 11fa376d call dword ptr [0x11fc539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc539c))), 0x11fa3773u);
  /* 11fa3773 cmp dword ptr [0x11fc2a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa377a je 0x11fa379a */
  if (C.zf) goto L_11fa379a;
  /* 11fa377c push 0x11fc2a4c */
  push32((uint32_t)(0x11fc2a4cu));
  /* 11fa3781 call dword ptr [0x11fc538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc538c))), 0x11fa3787u);
  /* 11fa3787 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fa3789 call 0x11f99e00 */
  push32(0x11fa378eu); f_11f99e00();
  /* 11fa378e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3791 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11fa3798 jmp 0x11fa37a1 */
  goto L_11fa37a1;
L_11fa379a:;
  /* 11fa379a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11fa37a1:;
  /* 11fa37a1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa37a5 jbe 0x11fa3892 */
  if ((C.cf||C.zf)) goto L_11fa3892;
  /* 11fa37ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa37ae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fa37b0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11fa37b3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa37b7 je 0x11fa37c1 */
  if (C.zf) goto L_11fa37c1;
  /* 11fa37b9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa37bd je 0x11fa37c6 */
  if (C.zf) goto L_11fa37c6;
  /* 11fa37bf jmp 0x11fa3820 */
  goto L_11fa3820;
L_11fa37c1:;
  /* 11fa37c1 jmp 0x11fa3892 */
  goto L_11fa3892;
L_11fa37c6:;
  /* 11fa37c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa37c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa37cc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11fa37cf mov dword ptr [0x11fc2a28], 0 */
  w32((uint32_t)(0x11fc2a28), (0x0u));
  /* 11fa37d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa37dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fa37df cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa37e2 jne 0x11fa37f7 */
  if (!C.zf) goto L_11fa37f7;
  /* 11fa37e4 mov dword ptr [0x11fc2a28], 1 */
  w32((uint32_t)(0x11fc2a28), (0x1u));
  /* 11fa37ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa37f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa37f4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11fa37f7:;
  /* 11fa37f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa37fa push ecx */
  push32((uint32_t)(ECX));
  /* 11fa37fb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11fa37fe push edx */
  push32((uint32_t)(EDX));
  /* 11fa37ff lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11fa3802 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3803 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3806 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3807 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa380a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa380c push eax */
  push32((uint32_t)(EAX));
  /* 11fa380d call 0x11fa38d0 */
  push32(0x11fa3812u); f_11fa38d0();
  /* 11fa3812 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3815 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3818 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa381b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11fa381e jmp 0x11fa388d */
  goto L_11fa388d;
L_11fa3820:;
  /* 11fa3820 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3823 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa3825 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa3827 mov ecx, dword ptr [0x11fc0ca8] */
  ECX = (r32((uint32_t)(0x11fc0ca8)));
  /* 11fa382d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa382f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11fa3833 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa3839 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa383b je 0x11fa3868 */
  if (C.zf) goto L_11fa3868;
  /* 11fa383d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa3841 jbe 0x11fa3868 */
  if ((C.cf||C.zf)) goto L_11fa3868;
  /* 11fa3843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa3846 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3849 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fa384b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11fa384d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa3850 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3853 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fa3856 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3859 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa385c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11fa385f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa3862 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa3865 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11fa3868:;
  /* 11fa3868 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa386b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa386e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fa3870 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11fa3872 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa3875 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3878 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fa387b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa387e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3881 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11fa3884 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa3887 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa388a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11fa388d:;
  /* 11fa388d jmp 0x11fa37a1 */
  goto L_11fa37a1;
L_11fa3892:;
  /* 11fa3892 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa3896 je 0x11fa38a4 */
  if (C.zf) goto L_11fa38a4;
  /* 11fa3898 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fa389a call 0x11f99ea0 */
  push32(0x11fa389fu); f_11f99ea0();
  /* 11fa389f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa38a2 jmp 0x11fa38af */
  goto L_11fa38af;
L_11fa38a4:;
  /* 11fa38a4 push 0x11fc2a4c */
  push32((uint32_t)(0x11fc2a4cu));
  /* 11fa38a9 call dword ptr [0x11fc538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc538c))), 0x11fa38afu);
L_11fa38af:;
  /* 11fa38af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa38b3 jbe 0x11fa38c3 */
  if ((C.cf||C.zf)) goto L_11fa38c3;
  /* 11fa38b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa38b8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11fa38bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa38be sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa38c1 jmp 0x11fa38c5 */
  goto L_11fa38c5;
L_11fa38c3:;
  /* 11fa38c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fa38c5:;
  /* 11fa38c5 mov esp, ebp */
  ESP = (EBP);
  /* 11fa38c7 pop ebp */
  EBP = (pop32());
  /* 11fa38c8 ret  */
  ESPCHK(0x11fa3740u, _esp0);
  ESP += 4; return;
}

/* FUN_100138d0 @ 0x11fa38d0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11fa38d0(void) {
  FTRACE(0x11fa38d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa38d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa38d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa38d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa38d6 push esi */
  push32((uint32_t)(ESI));
  /* 11fa38d7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11fa38db mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fa38de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa38e1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa38e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa38e7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa38eb ja 0x11fa3e38 */
  if ((!C.cf&&!C.zf)) goto L_11fa3e38;
  /* 11fa38f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa38f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa38f6 mov dl, byte ptr [eax + 0x11fa3e99] */
  DL = (r8((uint32_t)(EAX + 0x11fa3e99)));
  /* 11fa38fc jmp dword ptr [edx*4 + 0x11fa3e3d] */
  switch (EDX) {
    case 0: goto L_11fa3e16;
    case 1: goto L_11fa3925;
    case 2: goto L_11fa396b;
    case 3: goto L_11fa3ab8;
    case 4: goto L_11fa3ae0;
    case 5: goto L_11fa3b7f;
    case 6: goto L_11fa3beb;
    case 7: goto L_11fa3c14;
    case 8: goto L_11fa3c55;
    case 9: goto L_11fa3d37;
    case 10: goto L_11fa3d9e;
    case 11: goto L_11fa3deb;
    case 12: goto L_11fa3903;
    case 13: goto L_11fa3948;
    case 14: goto L_11fa398e;
    case 15: goto L_11fa3a8e;
    case 16: goto L_11fa3b25;
    case 17: goto L_11fa3b52;
    case 18: goto L_11fa3ba7;
    case 19: goto L_11fa3c2b;
    case 20: goto L_11fa3cd9;
    case 21: goto L_11fa3d68;
    case 22: goto L_11fa3e38;
    default: x86_unimpl("switch@0x11fa38fc out of table"); return;
  }
L_11fa3903:;
  /* 11fa3903 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3906 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3907 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa390a push edx */
  push32((uint32_t)(EDX));
  /* 11fa390b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa390e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11fa3911 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa3914 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11fa3917 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3918 call 0x11fa3ef0 */
  push32(0x11fa391du); f_11fa3ef0();
  /* 11fa391d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3920 jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa3925:;
  /* 11fa3925 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3928 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3929 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa392c push edx */
  push32((uint32_t)(EDX));
  /* 11fa392d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3930 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11fa3933 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa3936 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11fa393a push eax */
  push32((uint32_t)(EAX));
  /* 11fa393b call 0x11fa3ef0 */
  push32(0x11fa3940u); f_11fa3ef0();
  /* 11fa3940 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3943 jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa3948:;
  /* 11fa3948 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa394b push ecx */
  push32((uint32_t)(ECX));
  /* 11fa394c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa394f push edx */
  push32((uint32_t)(EDX));
  /* 11fa3950 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3953 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fa3956 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa3959 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11fa395d push eax */
  push32((uint32_t)(EAX));
  /* 11fa395e call 0x11fa3ef0 */
  push32(0x11fa3963u); f_11fa3ef0();
  /* 11fa3963 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3966 jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa396b:;
  /* 11fa396b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa396e push ecx */
  push32((uint32_t)(ECX));
  /* 11fa396f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3972 push edx */
  push32((uint32_t)(EDX));
  /* 11fa3973 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3976 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11fa3979 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa397c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11fa3980 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3981 call 0x11fa3ef0 */
  push32(0x11fa3986u); f_11fa3ef0();
  /* 11fa3986 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3989 jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa398e:;
  /* 11fa398e cmp dword ptr [0x11fc2a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa3995 je 0x11fa3a16 */
  if (C.zf) goto L_11fa3a16;
  /* 11fa3997 mov dword ptr [0x11fc2a28], 0 */
  w32((uint32_t)(0x11fc2a28), (0x0u));
  /* 11fa39a1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa39a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa39a5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa39a8 push edx */
  push32((uint32_t)(EDX));
  /* 11fa39a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa39ac push eax */
  push32((uint32_t)(EAX));
  /* 11fa39ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa39b0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa39b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa39b4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11fa39ba push eax */
  push32((uint32_t)(EAX));
  /* 11fa39bb call 0x11fa40a0 */
  push32(0x11fa39c0u); f_11fa40a0();
  /* 11fa39c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa39c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa39c6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa39c9 jne 0x11fa39d0 */
  if (!C.zf) goto L_11fa39d0;
  /* 11fa39cb jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa39d0:;
  /* 11fa39d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa39d3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fa39d5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11fa39d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa39db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa39dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa39e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa39e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fa39e5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa39e8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa39ea sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa39ed mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa39f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fa39f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa39f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa39f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa39f9 push edx */
  push32((uint32_t)(EDX));
  /* 11fa39fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa39fd push eax */
  push32((uint32_t)(EAX));
  /* 11fa39fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3a01 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3a02 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa3a05 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11fa3a0b push eax */
  push32((uint32_t)(EAX));
  /* 11fa3a0c call 0x11fa40a0 */
  push32(0x11fa3a11u); f_11fa40a0();
  /* 11fa3a11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3a14 jmp 0x11fa3a89 */
  goto L_11fa3a89;
L_11fa3a16:;
  /* 11fa3a16 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa3a19 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3a1a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3a1d push edx */
  push32((uint32_t)(EDX));
  /* 11fa3a1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3a21 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3a22 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3a25 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3a26 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa3a29 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11fa3a2f push eax */
  push32((uint32_t)(EAX));
  /* 11fa3a30 call 0x11fa40a0 */
  push32(0x11fa3a35u); f_11fa40a0();
  /* 11fa3a35 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3a38 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3a3b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa3a3e jne 0x11fa3a45 */
  if (!C.zf) goto L_11fa3a45;
  /* 11fa3a40 jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa3a45:;
  /* 11fa3a45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3a48 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fa3a4a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11fa3a4d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3a50 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa3a52 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3a55 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3a58 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fa3a5a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3a5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa3a5f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa3a62 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3a65 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fa3a67 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa3a6a push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3a6b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3a6e push edx */
  push32((uint32_t)(EDX));
  /* 11fa3a6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3a72 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3a73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3a76 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3a77 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa3a7a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11fa3a80 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3a81 call 0x11fa40a0 */
  push32(0x11fa3a86u); f_11fa40a0();
  /* 11fa3a86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa3a89:;
  /* 11fa3a89 jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa3a8e:;
  /* 11fa3a8e mov ecx, dword ptr [0x11fc2a28] */
  ECX = (r32((uint32_t)(0x11fc2a28)));
  /* 11fa3a94 mov dword ptr [0x11fc2a38], ecx */
  w32((uint32_t)(0x11fc2a38), (ECX));
  /* 11fa3a9a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3a9d push edx */
  push32((uint32_t)(EDX));
  /* 11fa3a9e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3aa1 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3aa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa3aa4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3aa7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fa3aaa push edx */
  push32((uint32_t)(EDX));
  /* 11fa3aab call 0x11fa3f40 */
  push32(0x11fa3ab0u); f_11fa3f40();
  /* 11fa3ab0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3ab3 jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa3ab8:;
  /* 11fa3ab8 mov eax, dword ptr [0x11fc2a28] */
  EAX = (r32((uint32_t)(0x11fc2a28)));
  /* 11fa3abd mov dword ptr [0x11fc2a38], eax */
  w32((uint32_t)(0x11fc2a38), (EAX));
  /* 11fa3ac2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3ac5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3ac6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3ac9 push edx */
  push32((uint32_t)(EDX));
  /* 11fa3aca push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa3acc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3acf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fa3ad2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3ad3 call 0x11fa3f40 */
  push32(0x11fa3ad8u); f_11fa3f40();
  /* 11fa3ad8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3adb jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa3ae0:;
  /* 11fa3ae0 mov edx, dword ptr [0x11fc2a28] */
  EDX = (r32((uint32_t)(0x11fc2a28)));
  /* 11fa3ae6 mov dword ptr [0x11fc2a38], edx */
  w32((uint32_t)(0x11fc2a38), (EDX));
  /* 11fa3aec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3aef mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fa3af2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fa3af3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11fa3af8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fa3afa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fa3afd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa3b01 jne 0x11fa3b0a */
  if (!C.zf) goto L_11fa3b0a;
  /* 11fa3b03 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11fa3b0a:;
  /* 11fa3b0a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3b0d push edx */
  push32((uint32_t)(EDX));
  /* 11fa3b0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3b11 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3b12 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa3b14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa3b17 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3b18 call 0x11fa3f40 */
  push32(0x11fa3b1du); f_11fa3f40();
  /* 11fa3b1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3b20 jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa3b25:;
  /* 11fa3b25 mov edx, dword ptr [0x11fc2a28] */
  EDX = (r32((uint32_t)(0x11fc2a28)));
  /* 11fa3b2b mov dword ptr [0x11fc2a38], edx */
  w32((uint32_t)(0x11fc2a38), (EDX));
  /* 11fa3b31 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3b34 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3b35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3b38 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3b39 push 3 */
  push32((uint32_t)(0x3u));
  /* 11fa3b3b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3b3e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11fa3b41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3b44 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3b45 call 0x11fa3f40 */
  push32(0x11fa3b4au); f_11fa3f40();
  /* 11fa3b4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3b4d jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa3b52:;
  /* 11fa3b52 mov ecx, dword ptr [0x11fc2a28] */
  ECX = (r32((uint32_t)(0x11fc2a28)));
  /* 11fa3b58 mov dword ptr [0x11fc2a38], ecx */
  w32((uint32_t)(0x11fc2a38), (ECX));
  /* 11fa3b5e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3b61 push edx */
  push32((uint32_t)(EDX));
  /* 11fa3b62 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3b65 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3b66 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa3b68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3b6b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11fa3b6e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3b71 push edx */
  push32((uint32_t)(EDX));
  /* 11fa3b72 call 0x11fa3f40 */
  push32(0x11fa3b77u); f_11fa3f40();
  /* 11fa3b77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3b7a jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa3b7f:;
  /* 11fa3b7f mov eax, dword ptr [0x11fc2a28] */
  EAX = (r32((uint32_t)(0x11fc2a28)));
  /* 11fa3b84 mov dword ptr [0x11fc2a38], eax */
  w32((uint32_t)(0x11fc2a38), (EAX));
  /* 11fa3b89 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3b8c push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3b8d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3b90 push edx */
  push32((uint32_t)(EDX));
  /* 11fa3b91 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa3b93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3b96 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fa3b99 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3b9a call 0x11fa3f40 */
  push32(0x11fa3b9fu); f_11fa3f40();
  /* 11fa3b9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3ba2 jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa3ba7:;
  /* 11fa3ba7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3baa cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa3bae jg 0x11fa3bcc */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa3bcc;
  /* 11fa3bb0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3bb3 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3bb4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3bb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3bb8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa3bbb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11fa3bc1 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3bc2 call 0x11fa3ef0 */
  push32(0x11fa3bc7u); f_11fa3ef0();
  /* 11fa3bc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3bca jmp 0x11fa3be6 */
  goto L_11fa3be6;
L_11fa3bcc:;
  /* 11fa3bcc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3bcf push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3bd0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3bd3 push edx */
  push32((uint32_t)(EDX));
  /* 11fa3bd4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa3bd7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11fa3bdd push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3bde call 0x11fa3ef0 */
  push32(0x11fa3be3u); f_11fa3ef0();
  /* 11fa3be3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa3be6:;
  /* 11fa3be6 jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa3beb:;
  /* 11fa3beb mov edx, dword ptr [0x11fc2a28] */
  EDX = (r32((uint32_t)(0x11fc2a28)));
  /* 11fa3bf1 mov dword ptr [0x11fc2a38], edx */
  w32((uint32_t)(0x11fc2a38), (EDX));
  /* 11fa3bf7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3bfa push eax */
  push32((uint32_t)(EAX));
  /* 11fa3bfb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3bfe push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3bff push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa3c01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3c04 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fa3c06 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3c07 call 0x11fa3f40 */
  push32(0x11fa3c0cu); f_11fa3f40();
  /* 11fa3c0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3c0f jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa3c14:;
  /* 11fa3c14 mov ecx, dword ptr [0x11fc2a28] */
  ECX = (r32((uint32_t)(0x11fc2a28)));
  /* 11fa3c1a mov dword ptr [0x11fc2a38], ecx */
  w32((uint32_t)(0x11fc2a38), (ECX));
  /* 11fa3c20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3c23 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11fa3c26 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fa3c29 jmp 0x11fa3c7d */
  goto L_11fa3c7d;
L_11fa3c2b:;
  /* 11fa3c2b mov ecx, dword ptr [0x11fc2a28] */
  ECX = (r32((uint32_t)(0x11fc2a28)));
  /* 11fa3c31 mov dword ptr [0x11fc2a38], ecx */
  w32((uint32_t)(0x11fc2a38), (ECX));
  /* 11fa3c37 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3c3a push edx */
  push32((uint32_t)(EDX));
  /* 11fa3c3b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3c3e push eax */
  push32((uint32_t)(EAX));
  /* 11fa3c3f push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa3c41 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3c44 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11fa3c47 push edx */
  push32((uint32_t)(EDX));
  /* 11fa3c48 call 0x11fa3f40 */
  push32(0x11fa3c4du); f_11fa3f40();
  /* 11fa3c4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3c50 jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa3c55:;
  /* 11fa3c55 mov eax, dword ptr [0x11fc2a28] */
  EAX = (r32((uint32_t)(0x11fc2a28)));
  /* 11fa3c5a mov dword ptr [0x11fc2a38], eax */
  w32((uint32_t)(0x11fc2a38), (EAX));
  /* 11fa3c5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3c62 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa3c66 jne 0x11fa3c71 */
  if (!C.zf) goto L_11fa3c71;
  /* 11fa3c68 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11fa3c6f jmp 0x11fa3c7d */
  goto L_11fa3c7d;
L_11fa3c71:;
  /* 11fa3c71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3c74 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11fa3c77 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa3c7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fa3c7d:;
  /* 11fa3c7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3c80 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11fa3c83 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa3c86 jge 0x11fa3c91 */
  if ((C.sf==C.of)) goto L_11fa3c91;
  /* 11fa3c88 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fa3c8f jmp 0x11fa3cbe */
  goto L_11fa3cbe;
L_11fa3c91:;
  /* 11fa3c91 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3c94 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fa3c97 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fa3c98 mov ecx, 7 */
  ECX = (0x7u);
  /* 11fa3c9d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fa3c9f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa3ca2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3ca5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11fa3ca8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fa3ca9 mov ecx, 7 */
  ECX = (0x7u);
  /* 11fa3cae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fa3cb0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa3cb3 jl 0x11fa3cbe */
  if ((C.sf!=C.of)) goto L_11fa3cbe;
  /* 11fa3cb5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa3cb8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3cbb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fa3cbe:;
  /* 11fa3cbe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3cc1 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3cc2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3cc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3cc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa3cc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa3ccb push edx */
  push32((uint32_t)(EDX));
  /* 11fa3ccc call 0x11fa3f40 */
  push32(0x11fa3cd1u); f_11fa3f40();
  /* 11fa3cd1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3cd4 jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa3cd9:;
  /* 11fa3cd9 cmp dword ptr [0x11fc2a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa3ce0 je 0x11fa3d10 */
  if (C.zf) goto L_11fa3d10;
  /* 11fa3ce2 mov dword ptr [0x11fc2a28], 0 */
  w32((uint32_t)(0x11fc2a28), (0x0u));
  /* 11fa3cec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa3cef push eax */
  push32((uint32_t)(EAX));
  /* 11fa3cf0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3cf4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3cf7 push edx */
  push32((uint32_t)(EDX));
  /* 11fa3cf8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3cfb push eax */
  push32((uint32_t)(EAX));
  /* 11fa3cfc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa3cff mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11fa3d05 push edx */
  push32((uint32_t)(EDX));
  /* 11fa3d06 call 0x11fa40a0 */
  push32(0x11fa3d0bu); f_11fa40a0();
  /* 11fa3d0b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3d0e jmp 0x11fa3d32 */
  goto L_11fa3d32;
L_11fa3d10:;
  /* 11fa3d10 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa3d13 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3d14 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3d17 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3d18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3d1b push edx */
  push32((uint32_t)(EDX));
  /* 11fa3d1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3d1f push eax */
  push32((uint32_t)(EAX));
  /* 11fa3d20 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa3d23 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11fa3d29 push edx */
  push32((uint32_t)(EDX));
  /* 11fa3d2a call 0x11fa40a0 */
  push32(0x11fa3d2fu); f_11fa40a0();
  /* 11fa3d2f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa3d32:;
  /* 11fa3d32 jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa3d37:;
  /* 11fa3d37 mov dword ptr [0x11fc2a28], 0 */
  w32((uint32_t)(0x11fc2a28), (0x0u));
  /* 11fa3d41 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa3d44 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3d45 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3d48 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3d49 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3d4c push edx */
  push32((uint32_t)(EDX));
  /* 11fa3d4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3d50 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3d51 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa3d54 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11fa3d5a push edx */
  push32((uint32_t)(EDX));
  /* 11fa3d5b call 0x11fa40a0 */
  push32(0x11fa3d60u); f_11fa40a0();
  /* 11fa3d60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3d63 jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa3d68:;
  /* 11fa3d68 mov eax, dword ptr [0x11fc2a28] */
  EAX = (r32((uint32_t)(0x11fc2a28)));
  /* 11fa3d6d mov dword ptr [0x11fc2a38], eax */
  w32((uint32_t)(0x11fc2a38), (EAX));
  /* 11fa3d72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3d75 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11fa3d78 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fa3d79 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11fa3d7e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fa3d80 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fa3d83 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3d86 push edx */
  push32((uint32_t)(EDX));
  /* 11fa3d87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3d8a push eax */
  push32((uint32_t)(EAX));
  /* 11fa3d8b push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa3d8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa3d90 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3d91 call 0x11fa3f40 */
  push32(0x11fa3d96u); f_11fa3f40();
  /* 11fa3d96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3d99 jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa3d9e:;
  /* 11fa3d9e mov edx, dword ptr [0x11fc2a28] */
  EDX = (r32((uint32_t)(0x11fc2a28)));
  /* 11fa3da4 mov dword ptr [0x11fc2a38], edx */
  w32((uint32_t)(0x11fc2a38), (EDX));
  /* 11fa3daa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3dad mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fa3db0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fa3db1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11fa3db6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fa3db8 mov ecx, eax */
  ECX = (EAX);
  /* 11fa3dba add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3dbd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa3dc0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3dc3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fa3dc6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fa3dc7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11fa3dcc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fa3dce add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3dd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fa3dd3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3dd6 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3dd7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3dda push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3ddb push 4 */
  push32((uint32_t)(0x4u));
  /* 11fa3ddd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa3de0 push edx */
  push32((uint32_t)(EDX));
  /* 11fa3de1 call 0x11fa3f40 */
  push32(0x11fa3de6u); f_11fa3f40();
  /* 11fa3de6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3de9 jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa3deb:;
  /* 11fa3deb call 0x11fa4f00 */
  push32(0x11fa3df0u); f_11fa4f00();
  /* 11fa3df0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3df3 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3df4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3df7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3df8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3dfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa3dfd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa3e01 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11fa3e04 mov ecx, dword ptr [eax*4 + 0x11fc1e2c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11fc1e2c)));
  /* 11fa3e0b push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3e0c call 0x11fa3ef0 */
  push32(0x11fa3e11u); f_11fa3ef0();
  /* 11fa3e11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3e14 jmp 0x11fa3e38 */
  goto L_11fa3e38;
L_11fa3e16:;
  /* 11fa3e16 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3e19 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fa3e1b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11fa3e1e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3e21 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa3e23 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3e26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3e29 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fa3e2b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3e2e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa3e30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa3e33 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3e36 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11fa3e38:;
  /* 11fa3e38 pop esi */
  ESI = (pop32());
  /* 11fa3e39 mov esp, ebp */
  ESP = (EBP);
  /* 11fa3e3b pop ebp */
  EBP = (pop32());
  /* 11fa3e3c ret  */
  ESPCHK(0x11fa38d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11fa3ef0 (72 bytes, 30 insns) */
void f_11fa3ef0(void) {
  FTRACE(0x11fa3ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa3ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa3ef1 mov ebp, esp */
  EBP = (ESP);
L_11fa3ef3:;
  /* 11fa3ef3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3ef6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa3ef9 je 0x11fa3f36 */
  if (C.zf) goto L_11fa3f36;
  /* 11fa3efb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa3efe movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fa3f01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa3f03 je 0x11fa3f36 */
  if (C.zf) goto L_11fa3f36;
  /* 11fa3f05 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3f08 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fa3f0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa3f0d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa3f0f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11fa3f11 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3f14 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa3f16 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3f19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3f1c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fa3f1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa3f21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3f24 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11fa3f27 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3f2a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fa3f2c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa3f2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3f32 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fa3f34 jmp 0x11fa3ef3 */
  goto L_11fa3ef3;
L_11fa3f36:;
  /* 11fa3f36 pop ebp */
  EBP = (pop32());
  /* 11fa3f37 ret  */
  ESPCHK(0x11fa3ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f40 @ 0x11fa3f40 (173 bytes, 64 insns) */
void f_11fa3f40(void) {
  FTRACE(0x11fa3f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa3f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa3f41 mov ebp, esp */
  EBP = (ESP);
  /* 11fa3f43 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3f44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fa3f4b cmp dword ptr [0x11fc2a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa3f52 je 0x11fa3f6a */
  if (C.zf) goto L_11fa3f6a;
  /* 11fa3f54 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3f57 push eax */
  push32((uint32_t)(EAX));
  /* 11fa3f58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3f5b push ecx */
  push32((uint32_t)(ECX));
  /* 11fa3f5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa3f5f push edx */
  push32((uint32_t)(EDX));
  /* 11fa3f60 call 0x11fa3ff0 */
  push32(0x11fa3f65u); f_11fa3ff0();
  /* 11fa3f65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3f68 jmp 0x11fa3fe9 */
  goto L_11fa3fe9;
L_11fa3f6a:;
  /* 11fa3f6a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3f6d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3f70 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa3f72 jae 0x11fa3fe0 */
  if (!C.cf) goto L_11fa3fe0;
  /* 11fa3f74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3f77 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa3f7a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11fa3f7d jmp 0x11fa3f88 */
  goto L_11fa3f88;
L_11fa3f7f:;
  /* 11fa3f7f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3f82 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa3f85 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11fa3f88:;
  /* 11fa3f88 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3f8b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3f8e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa3f90 je 0x11fa3fc4 */
  if (C.zf) goto L_11fa3fc4;
  /* 11fa3f92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa3f95 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fa3f96 mov ecx, 0xa */
  ECX = (0xau);
  /* 11fa3f9b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fa3f9d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3fa0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3fa3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fa3fa5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3fa8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 11fa3fab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa3fae cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fa3faf mov ecx, 0xa */
  ECX = (0xau);
  /* 11fa3fb4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fa3fb6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fa3fb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa3fbc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3fbf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fa3fc2 jmp 0x11fa3f7f */
  goto L_11fa3f7f;
L_11fa3fc4:;
  /* 11fa3fc4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3fc7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fa3fc9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa3fcc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa3fcf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11fa3fd1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3fd4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fa3fd6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa3fd9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3fdc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11fa3fde jmp 0x11fa3fe9 */
  goto L_11fa3fe9;
L_11fa3fe0:;
  /* 11fa3fe0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa3fe3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11fa3fe9:;
  /* 11fa3fe9 mov esp, ebp */
  ESP = (EBP);
  /* 11fa3feb pop ebp */
  EBP = (pop32());
  /* 11fa3fec ret  */
  ESPCHK(0x11fa3f40u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11fa3ff0 (172 bytes, 65 insns) */
void f_11fa3ff0(void) {
  FTRACE(0x11fa3ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa3ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa3ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa3ff3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa3ff6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa3ff9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fa3ffb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fa3ffe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4001 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4004 jbe 0x11fa404b */
  if ((C.cf||C.zf)) goto L_11fa404b;
L_11fa4006:;
  /* 11fa4006 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4009 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fa400a mov ecx, 0xa */
  ECX = (0xau);
  /* 11fa400f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fa4011 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4014 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa4017 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11fa4019 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa401c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa401f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fa4022 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4025 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fa4027 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa402a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa402d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fa402f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4032 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fa4033 mov ecx, 0xa */
  ECX = (0xau);
  /* 11fa4038 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fa403a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fa403d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4041 jle 0x11fa404b */
  if ((C.zf||C.sf!=C.of)) goto L_11fa404b;
  /* 11fa4043 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4046 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4049 ja 0x11fa4006 */
  if ((!C.cf&&!C.zf)) goto L_11fa4006;
L_11fa404b:;
  /* 11fa404b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa404e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fa4050 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa4053 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa4056 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa4059 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11fa405b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa405e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa4061 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fa4064:;
  /* 11fa4064 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa4067 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa4069 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11fa406c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa406f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa4072 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa4074 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11fa4076 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa4079 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa407c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fa407f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa4082 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11fa4085 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11fa4087 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa408a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa408d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa4090 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa4093 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4096 jb 0x11fa4064 */
  if (C.cf) goto L_11fa4064;
  /* 11fa4098 mov esp, ebp */
  ESP = (EBP);
  /* 11fa409a pop ebp */
  EBP = (pop32());
  /* 11fa409b ret  */
  ESPCHK(0x11fa3ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100140a0 @ 0x11fa40a0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11fa40a0(void) {
  FTRACE(0x11fa40a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa40a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa40a1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa40a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11fa40a6:;
  /* 11fa40a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa40a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa40ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa40ae je 0x11fa451c */
  if (C.zf) goto L_11fa451c;
  /* 11fa40b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa40b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa40ba je 0x11fa451c */
  if (C.zf) goto L_11fa451c;
  /* 11fa40c0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fa40c4 mov dword ptr [0x11fc2a38], 0 */
  w32((uint32_t)(0x11fc2a38), (0x0u));
  /* 11fa40ce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fa40d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa40d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa40db jmp 0x11fa40e6 */
  goto L_11fa40e6;
L_11fa40dd:;
  /* 11fa40dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa40e0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa40e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11fa40e6:;
  /* 11fa40e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa40e9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fa40ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa40ef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fa40f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa40f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa40f8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fa40fb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa40fd jne 0x11fa4101 */
  if (!C.zf) goto L_11fa4101;
  /* 11fa40ff jmp 0x11fa40dd */
  goto L_11fa40dd;
L_11fa4101:;
  /* 11fa4101 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa4104 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa4107 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fa410a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa410d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa4110 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fa4113 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa4116 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa4119 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fa411c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4120 ja 0x11fa4470 */
  if ((!C.cf&&!C.zf)) goto L_11fa4470;
  /* 11fa4126 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa4129 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa412b mov al, byte ptr [ecx + 0x11fa454c] */
  AL = (r8((uint32_t)(ECX + 0x11fa454c)));
  /* 11fa4131 jmp dword ptr [eax*4 + 0x11fa4520] */
  switch (EAX) {
    case 0: goto L_11fa438f;
    case 1: goto L_11fa4273;
    case 2: goto L_11fa41fe;
    case 3: goto L_11fa4138;
    case 4: goto L_11fa4176;
    case 5: goto L_11fa41d7;
    case 6: goto L_11fa4225;
    case 7: goto L_11fa424c;
    case 8: goto L_11fa42ba;
    case 9: goto L_11fa41b4;
    case 10: goto L_11fa4470;
    default: x86_unimpl("switch@0x11fa4131 out of table"); return;
  }
L_11fa4138:;
  /* 11fa4138 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa413b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11fa413e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa4141 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa4144 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fa4147 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa414b ja 0x11fa4171 */
  if ((!C.cf&&!C.zf)) goto L_11fa4171;
  /* 11fa414d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa4150 jmp dword ptr [ecx*4 + 0x11fa459f] */
  switch (ECX) {
    case 0: goto L_11fa4157;
    case 1: goto L_11fa4161;
    case 2: goto L_11fa4167;
    case 3: goto L_11fa416d;
    case 4: goto L_11fa4195;
    case 5: goto L_11fa419f;
    case 6: goto L_11fa41a5;
    case 7: goto L_11fa41ab;
    default: x86_unimpl("switch@0x11fa4150 out of table"); return;
  }
L_11fa4157:;
  /* 11fa4157 mov dword ptr [0x11fc2a38], 1 */
  w32((uint32_t)(0x11fc2a38), (0x1u));
L_11fa4161:;
  /* 11fa4161 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11fa4165 jmp 0x11fa4171 */
  goto L_11fa4171;
L_11fa4167:;
  /* 11fa4167 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 11fa416b jmp 0x11fa4171 */
  goto L_11fa4171;
L_11fa416d:;
  /* 11fa416d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11fa4171:;
  /* 11fa4171 jmp 0x11fa4470 */
  goto L_11fa4470;
L_11fa4176:;
  /* 11fa4176 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa4179 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11fa417c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fa417f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa4182 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11fa4185 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4189 ja 0x11fa41af */
  if ((!C.cf&&!C.zf)) goto L_11fa41af;
  /* 11fa418b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fa418e jmp dword ptr [ecx*4 + 0x11fa45af] */
  switch (ECX) {
    case 0: goto L_11fa4195;
    case 1: goto L_11fa419f;
    case 2: goto L_11fa41a5;
    case 3: goto L_11fa41ab;
    default: x86_unimpl("switch@0x11fa418e out of table"); return;
  }
L_11fa4195:;
  /* 11fa4195 mov dword ptr [0x11fc2a38], 1 */
  w32((uint32_t)(0x11fc2a38), (0x1u));
L_11fa419f:;
  /* 11fa419f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11fa41a3 jmp 0x11fa41af */
  goto L_11fa41af;
L_11fa41a5:;
  /* 11fa41a5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11fa41a9 jmp 0x11fa41af */
  goto L_11fa41af;
L_11fa41ab:;
  /* 11fa41ab mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_11fa41af:;
  /* 11fa41af jmp 0x11fa4470 */
  goto L_11fa4470;
L_11fa41b4:;
  /* 11fa41b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa41b7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11fa41ba cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa41be je 0x11fa41c8 */
  if (C.zf) goto L_11fa41c8;
  /* 11fa41c0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa41c4 je 0x11fa41ce */
  if (C.zf) goto L_11fa41ce;
  /* 11fa41c6 jmp 0x11fa41d2 */
  goto L_11fa41d2;
L_11fa41c8:;
  /* 11fa41c8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 11fa41cc jmp 0x11fa41d2 */
  goto L_11fa41d2;
L_11fa41ce:;
  /* 11fa41ce mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11fa41d2:;
  /* 11fa41d2 jmp 0x11fa4470 */
  goto L_11fa4470;
L_11fa41d7:;
  /* 11fa41d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa41da mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11fa41dd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa41e1 je 0x11fa41eb */
  if (C.zf) goto L_11fa41eb;
  /* 11fa41e3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa41e7 je 0x11fa41f5 */
  if (C.zf) goto L_11fa41f5;
  /* 11fa41e9 jmp 0x11fa41f9 */
  goto L_11fa41f9;
L_11fa41eb:;
  /* 11fa41eb mov dword ptr [0x11fc2a38], 1 */
  w32((uint32_t)(0x11fc2a38), (0x1u));
L_11fa41f5:;
  /* 11fa41f5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11fa41f9:;
  /* 11fa41f9 jmp 0x11fa4470 */
  goto L_11fa4470;
L_11fa41fe:;
  /* 11fa41fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa4201 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11fa4204 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4208 je 0x11fa4212 */
  if (C.zf) goto L_11fa4212;
  /* 11fa420a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa420e je 0x11fa421c */
  if (C.zf) goto L_11fa421c;
  /* 11fa4210 jmp 0x11fa4220 */
  goto L_11fa4220;
L_11fa4212:;
  /* 11fa4212 mov dword ptr [0x11fc2a38], 1 */
  w32((uint32_t)(0x11fc2a38), (0x1u));
L_11fa421c:;
  /* 11fa421c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11fa4220:;
  /* 11fa4220 jmp 0x11fa4470 */
  goto L_11fa4470;
L_11fa4225:;
  /* 11fa4225 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa4228 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11fa422b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa422f je 0x11fa4239 */
  if (C.zf) goto L_11fa4239;
  /* 11fa4231 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4235 je 0x11fa4243 */
  if (C.zf) goto L_11fa4243;
  /* 11fa4237 jmp 0x11fa4247 */
  goto L_11fa4247;
L_11fa4239:;
  /* 11fa4239 mov dword ptr [0x11fc2a38], 1 */
  w32((uint32_t)(0x11fc2a38), (0x1u));
L_11fa4243:;
  /* 11fa4243 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11fa4247:;
  /* 11fa4247 jmp 0x11fa4470 */
  goto L_11fa4470;
L_11fa424c:;
  /* 11fa424c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa424f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11fa4252 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4256 je 0x11fa4260 */
  if (C.zf) goto L_11fa4260;
  /* 11fa4258 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa425c je 0x11fa426a */
  if (C.zf) goto L_11fa426a;
  /* 11fa425e jmp 0x11fa426e */
  goto L_11fa426e;
L_11fa4260:;
  /* 11fa4260 mov dword ptr [0x11fc2a38], 1 */
  w32((uint32_t)(0x11fc2a38), (0x1u));
L_11fa426a:;
  /* 11fa426a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11fa426e:;
  /* 11fa426e jmp 0x11fa4470 */
  goto L_11fa4470;
L_11fa4273:;
  /* 11fa4273 push 0x11fbea3c */
  push32((uint32_t)(0x11fbea3cu));
  /* 11fa4278 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa427b push ecx */
  push32((uint32_t)(ECX));
  /* 11fa427c call 0x11fa4ad0 */
  push32(0x11fa4281u); f_11fa4ad0();
  /* 11fa4281 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4284 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa4286 jne 0x11fa4293 */
  if (!C.zf) goto L_11fa4293;
  /* 11fa4288 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa428b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa428e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fa4291 jmp 0x11fa42b1 */
  goto L_11fa42b1;
L_11fa4293:;
  /* 11fa4293 push 0x11fbea38 */
  push32((uint32_t)(0x11fbea38u));
  /* 11fa4298 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa429b push eax */
  push32((uint32_t)(EAX));
  /* 11fa429c call 0x11fa4ad0 */
  push32(0x11fa42a1u); f_11fa4ad0();
  /* 11fa42a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa42a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa42a6 jne 0x11fa42b1 */
  if (!C.zf) goto L_11fa42b1;
  /* 11fa42a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa42ab add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa42ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fa42b1:;
  /* 11fa42b1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11fa42b5 jmp 0x11fa4470 */
  goto L_11fa4470;
L_11fa42ba:;
  /* 11fa42ba mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa42bd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa42c1 jg 0x11fa42d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa42d1;
  /* 11fa42c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa42c6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11fa42cc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fa42cf jmp 0x11fa42dd */
  goto L_11fa42dd;
L_11fa42d1:;
  /* 11fa42d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa42d4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11fa42da mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11fa42dd:;
  /* 11fa42dd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa42e1 jle 0x11fa4384 */
  if ((C.zf||C.sf!=C.of)) goto L_11fa4384;
  /* 11fa42e7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa42ea cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa42ed jbe 0x11fa4384 */
  if ((C.cf||C.zf)) goto L_11fa4384;
  /* 11fa42f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa42f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa42f8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa42fa mov ecx, dword ptr [0x11fc0ca8] */
  ECX = (r32((uint32_t)(0x11fc0ca8)));
  /* 11fa4300 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa4302 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11fa4306 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa430c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa430e je 0x11fa4347 */
  if (C.zf) goto L_11fa4347;
  /* 11fa4310 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa4313 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4316 jbe 0x11fa4347 */
  if ((C.cf||C.zf)) goto L_11fa4347;
  /* 11fa4318 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa431b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa431d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa4320 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fa4322 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11fa4324 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4327 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fa4329 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa432c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa432f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fa4331 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa4334 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4337 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11fa433a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa433d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fa433f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa4342 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa4345 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11fa4347:;
  /* 11fa4347 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa434a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fa434c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa434f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa4351 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11fa4353 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4356 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa4358 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa435b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa435e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fa4360 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa4363 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4366 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fa4369 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa436c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fa436e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa4371 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa4374 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fa4376 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa4379 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa437c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fa437f jmp 0x11fa42dd */
  goto L_11fa42dd;
L_11fa4384:;
  /* 11fa4384 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa4387 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fa438a jmp 0x11fa40a6 */
  goto L_11fa40a6;
L_11fa438f:;
  /* 11fa438f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa4392 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fa4395 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa4397 je 0x11fa4462 */
  if (C.zf) goto L_11fa4462;
  /* 11fa439d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa43a0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa43a3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11fa43a6:;
  /* 11fa43a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa43a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa43ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa43ae je 0x11fa4460 */
  if (C.zf) goto L_11fa4460;
  /* 11fa43b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa43b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa43ba je 0x11fa4460 */
  if (C.zf) goto L_11fa4460;
  /* 11fa43c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa43c3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa43c6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa43c9 jne 0x11fa43d9 */
  if (!C.zf) goto L_11fa43d9;
  /* 11fa43cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa43ce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa43d1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11fa43d4 jmp 0x11fa4460 */
  goto L_11fa4460;
L_11fa43d9:;
  /* 11fa43d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa43dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa43de mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fa43e0 mov edx, dword ptr [0x11fc0ca8] */
  EDX = (r32((uint32_t)(0x11fc0ca8)));
  /* 11fa43e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa43e8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11fa43ec and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11fa43f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa43f3 je 0x11fa442c */
  if (C.zf) goto L_11fa442c;
  /* 11fa43f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa43f8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa43fb jbe 0x11fa442c */
  if ((C.cf||C.zf)) goto L_11fa442c;
  /* 11fa43fd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4400 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fa4402 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4405 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fa4407 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11fa4409 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa440c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fa440e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4411 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4414 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11fa4416 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4419 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa441c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fa441f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa4422 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa4424 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa4427 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa442a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11fa442c:;
  /* 11fa442c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa442f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa4431 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4434 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fa4436 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11fa4438 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa443b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fa443d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4440 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4443 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fa4445 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4448 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa444b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11fa444e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa4451 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fa4453 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa4456 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa4459 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11fa445b jmp 0x11fa43a6 */
  goto L_11fa43a6;
L_11fa4460:;
  /* 11fa4460 jmp 0x11fa446b */
  goto L_11fa446b;
L_11fa4462:;
  /* 11fa4462 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4465 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4468 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11fa446b:;
  /* 11fa446b jmp 0x11fa40a6 */
  goto L_11fa40a6;
L_11fa4470:;
  /* 11fa4470 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fa4474 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa4476 je 0x11fa449c */
  if (C.zf) goto L_11fa449c;
  /* 11fa4478 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa447b push edx */
  push32((uint32_t)(EDX));
  /* 11fa447c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa447f push eax */
  push32((uint32_t)(EAX));
  /* 11fa4480 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4483 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa4484 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa4487 push edx */
  push32((uint32_t)(EDX));
  /* 11fa4488 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11fa448b push eax */
  push32((uint32_t)(EAX));
  /* 11fa448c call 0x11fa38d0 */
  push32(0x11fa4491u); f_11fa38d0();
  /* 11fa4491 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4494 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa4497 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11fa449a jmp 0x11fa4517 */
  goto L_11fa4517;
L_11fa449c:;
  /* 11fa449c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa449f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa44a1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa44a3 mov ecx, dword ptr [0x11fc0ca8] */
  ECX = (r32((uint32_t)(0x11fc0ca8)));
  /* 11fa44a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa44ab mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11fa44af and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa44b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa44b7 je 0x11fa44e8 */
  if (C.zf) goto L_11fa44e8;
  /* 11fa44b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa44bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fa44be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa44c1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa44c3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11fa44c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa44c8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa44ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa44cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa44d0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fa44d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa44d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa44d8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11fa44db mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa44de mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fa44e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa44e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa44e6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11fa44e8:;
  /* 11fa44e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa44eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fa44ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa44f0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fa44f2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11fa44f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa44f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fa44f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa44fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa44ff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11fa4501 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4504 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4507 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fa450a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa450d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa450f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa4512 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa4515 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11fa4517:;
  /* 11fa4517 jmp 0x11fa40a6 */
  goto L_11fa40a6;
L_11fa451c:;
  /* 11fa451c mov esp, ebp */
  ESP = (EBP);
  /* 11fa451e pop ebp */
  EBP = (pop32());
  /* 11fa451f ret  */
  ESPCHK(0x11fa40a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100145c0 @ 0x11fa45c0 (650 bytes, 178 insns) */
void f_11fa45c0(void) {
  FTRACE(0x11fa45c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa45c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa45c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa45c3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa45c9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa45cd jne 0x11fa4729 */
  if (!C.zf) goto L_11fa4729;
  /* 11fa45d3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa45d6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11fa45dc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11fa45e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa45e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fa45ec mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11fa45f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa45f8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11fa45fe push edx */
  push32((uint32_t)(EDX));
  /* 11fa45ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa4602 push eax */
  push32((uint32_t)(EAX));
  /* 11fa4603 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4606 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa4607 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa460a push edx */
  push32((uint32_t)(EDX));
  /* 11fa460b call 0x11fa59e0 */
  push32(0x11fa4610u); f_11fa59e0();
  /* 11fa4610 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4613 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fa4616 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa461a jne 0x11fa46af */
  if (!C.zf) goto L_11fa46af;
  /* 11fa4620 call dword ptr [0x11fc53ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc53ac))), 0x11fa4626u);
  /* 11fa4626 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4629 je 0x11fa4630 */
  if (C.zf) goto L_11fa4630;
  /* 11fa462b jmp 0x11fa470d */
  goto L_11fa470d;
L_11fa4630:;
  /* 11fa4630 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa4632 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa4634 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa4636 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4639 push eax */
  push32((uint32_t)(EAX));
  /* 11fa463a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa463d push ecx */
  push32((uint32_t)(ECX));
  /* 11fa463e call 0x11fa59e0 */
  push32(0x11fa4643u); f_11fa59e0();
  /* 11fa4643 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4646 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11fa464c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4653 jne 0x11fa465a */
  if (!C.zf) goto L_11fa465a;
  /* 11fa4655 jmp 0x11fa470d */
  goto L_11fa470d;
L_11fa465a:;
  /* 11fa465a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11fa465c push 0x11fbea44 */
  push32((uint32_t)(0x11fbea44u));
  /* 11fa4661 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa4663 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11fa4669 push edx */
  push32((uint32_t)(EDX));
  /* 11fa466a call 0x11f96400 */
  push32(0x11fa466fu); f_11f96400();
  /* 11fa466f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4672 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fa4675 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4679 jne 0x11fa4680 */
  if (!C.zf) goto L_11fa4680;
  /* 11fa467b jmp 0x11fa470d */
  goto L_11fa470d;
L_11fa4680:;
  /* 11fa4680 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fa4687 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa4689 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11fa468f push eax */
  push32((uint32_t)(EAX));
  /* 11fa4690 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa4693 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa4694 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4697 push edx */
  push32((uint32_t)(EDX));
  /* 11fa4698 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa469b push eax */
  push32((uint32_t)(EAX));
  /* 11fa469c call 0x11fa59e0 */
  push32(0x11fa46a1u); f_11fa59e0();
  /* 11fa46a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa46a4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fa46a7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa46ab jne 0x11fa46af */
  if (!C.zf) goto L_11fa46af;
  /* 11fa46ad jmp 0x11fa470d */
  goto L_11fa470d;
L_11fa46af:;
  /* 11fa46af push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11fa46b1 push 0x11fbea44 */
  push32((uint32_t)(0x11fbea44u));
  /* 11fa46b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa46b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa46bb push ecx */
  push32((uint32_t)(ECX));
  /* 11fa46bc call 0x11f96400 */
  push32(0x11fa46c1u); f_11f96400();
  /* 11fa46c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa46c4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 11fa46ca mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11fa46cc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11fa46d2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa46d5 jne 0x11fa46d9 */
  if (!C.zf) goto L_11fa46d9;
  /* 11fa46d7 jmp 0x11fa470d */
  goto L_11fa470d;
L_11fa46d9:;
  /* 11fa46d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa46dc push ecx */
  push32((uint32_t)(ECX));
  /* 11fa46dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa46e0 push edx */
  push32((uint32_t)(EDX));
  /* 11fa46e1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11fa46e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fa46e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa46ea call 0x11f99c20 */
  push32(0x11fa46efu); f_11f99c20();
  /* 11fa46ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa46f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa46f6 je 0x11fa4706 */
  if (C.zf) goto L_11fa4706;
  /* 11fa46f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa46fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa46fd push edx */
  push32((uint32_t)(EDX));
  /* 11fa46fe call 0x11f96e90 */
  push32(0x11fa4703u); f_11f96e90();
  /* 11fa4703 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa4706:;
  /* 11fa4706 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa4708 jmp 0x11fa4846 */
  goto L_11fa4846;
L_11fa470d:;
  /* 11fa470d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4711 je 0x11fa4721 */
  if (C.zf) goto L_11fa4721;
  /* 11fa4713 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa4715 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa4718 push eax */
  push32((uint32_t)(EAX));
  /* 11fa4719 call 0x11f96e90 */
  push32(0x11fa471eu); f_11f96e90();
  /* 11fa471e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa4721:;
  /* 11fa4721 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa4724 jmp 0x11fa4846 */
  goto L_11fa4846;
L_11fa4729:;
  /* 11fa4729 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa472d jne 0x11fa4843 */
  if (!C.zf) goto L_11fa4843;
  /* 11fa4733 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11fa473d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa4740 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11fa4746 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa4748 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11fa474e push edx */
  push32((uint32_t)(EDX));
  /* 11fa474f push 0x11fc2950 */
  push32((uint32_t)(0x11fc2950u));
  /* 11fa4754 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4757 push eax */
  push32((uint32_t)(EAX));
  /* 11fa4758 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa475b push ecx */
  push32((uint32_t)(ECX));
  /* 11fa475c call 0x11fa5840 */
  push32(0x11fa4761u); f_11fa5840();
  /* 11fa4761 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4764 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa4766 jne 0x11fa4770 */
  if (!C.zf) goto L_11fa4770;
  /* 11fa4768 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa476b jmp 0x11fa4846 */
  goto L_11fa4846;
L_11fa4770:;
  /* 11fa4770 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11fa4776 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11fa4779 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11fa4783 jmp 0x11fa4794 */
  goto L_11fa4794;
L_11fa4785:;
  /* 11fa4785 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fa478b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa478e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11fa4794:;
  /* 11fa4794 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa479b jge 0x11fa483f */
  if ((C.sf==C.of)) goto L_11fa483f;
  /* 11fa47a1 cmp dword ptr [0x11fc0eb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11fc0eb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa47a8 jle 0x11fa47db */
  if ((C.zf||C.sf!=C.of)) goto L_11fa47db;
  /* 11fa47aa push 4 */
  push32((uint32_t)(0x4u));
  /* 11fa47ac mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fa47b2 mov dl, byte ptr [ecx*2 + 0x11fc2950] */
  DL = (r8((uint32_t)(ECX*2 + 0x11fc2950)));
  /* 11fa47b9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11fa47bf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11fa47c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa47ca push eax */
  push32((uint32_t)(EAX));
  /* 11fa47cb call 0x11f9c410 */
  push32(0x11fa47d0u); f_11f9c410();
  /* 11fa47d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa47d3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11fa47d9 jmp 0x11fa480e */
  goto L_11fa480e;
L_11fa47db:;
  /* 11fa47db mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fa47e1 mov dl, byte ptr [ecx*2 + 0x11fc2950] */
  DL = (r8((uint32_t)(ECX*2 + 0x11fc2950)));
  /* 11fa47e8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11fa47ee mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11fa47f4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa47f9 mov ecx, dword ptr [0x11fc0ca8] */
  ECX = (r32((uint32_t)(0x11fc0ca8)));
  /* 11fa47ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa4801 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11fa4805 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa4808 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11fa480e:;
  /* 11fa480e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4815 je 0x11fa4838 */
  if (C.zf) goto L_11fa4838;
  /* 11fa4817 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11fa481d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa4820 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa4823 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11fa482a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11fa482e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11fa4834 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11fa4836 jmp 0x11fa483a */
  goto L_11fa483a;
L_11fa4838:;
  /* 11fa4838 jmp 0x11fa483f */
  goto L_11fa483f;
L_11fa483a:;
  /* 11fa483a jmp 0x11fa4785 */
  goto L_11fa4785;
L_11fa483f:;
  /* 11fa483f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa4841 jmp 0x11fa4846 */
  goto L_11fa4846;
L_11fa4843:;
  /* 11fa4843 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11fa4846:;
  /* 11fa4846 mov esp, ebp */
  ESP = (EBP);
  /* 11fa4848 pop ebp */
  EBP = (pop32());
  /* 11fa4849 ret  */
  ESPCHK(0x11fa45c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014850 @ 0x11fa4850 (10 bytes, 5 insns) */
void f_11fa4850(void) {
  FTRACE(0x11fa4850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa4850 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa4851 mov ebp, esp */
  EBP = (ESP);
  /* 11fa4853 mov eax, dword ptr [0x11fc1d98] */
  EAX = (r32((uint32_t)(0x11fc1d98)));
  /* 11fa4858 pop ebp */
  EBP = (pop32());
  /* 11fa4859 ret  */
  ESPCHK(0x11fa4850u, _esp0);
  ESP += 4; return;
}

/* FUN_10014860 @ 0x11fa4860 (575 bytes, 196 insns) */
void f_11fa4860(void) {
  FTRACE(0x11fa4860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa4860 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa4861 mov ebp, esp */
  EBP = (ESP);
  /* 11fa4863 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fa4865 push 0x11fbea50 */
  push32((uint32_t)(0x11fbea50u));
  /* 11fa486a push 0x11f9f508 */
  push32((uint32_t)(0x11f9f508u));
  /* 11fa486f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11fa4875 push eax */
  push32((uint32_t)(EAX));
  /* 11fa4876 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11fa487d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4880 push ebx */
  push32((uint32_t)(EBX));
  /* 11fa4881 push esi */
  push32((uint32_t)(ESI));
  /* 11fa4882 push edi */
  push32((uint32_t)(EDI));
  /* 11fa4883 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fa4886 cmp dword ptr [0x11fc295c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc295c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa488d jne 0x11fa48de */
  if (!C.zf) goto L_11fa48de;
  /* 11fa488f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11fa4892 push eax */
  push32((uint32_t)(EAX));
  /* 11fa4893 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa4895 push 0x11fbe180 */
  push32((uint32_t)(0x11fbe180u));
  /* 11fa489a push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa489c call dword ptr [0x11fc5314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5314))), 0x11fa48a2u);
  /* 11fa48a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa48a4 je 0x11fa48b2 */
  if (C.zf) goto L_11fa48b2;
  /* 11fa48a6 mov dword ptr [0x11fc295c], 1 */
  w32((uint32_t)(0x11fc295c), (0x1u));
  /* 11fa48b0 jmp 0x11fa48de */
  goto L_11fa48de;
L_11fa48b2:;
  /* 11fa48b2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11fa48b5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa48b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa48b8 push 0x11fbe17c */
  push32((uint32_t)(0x11fbe17cu));
  /* 11fa48bd push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa48bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa48c1 call dword ptr [0x11fc5324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5324))), 0x11fa48c7u);
  /* 11fa48c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa48c9 je 0x11fa48d7 */
  if (C.zf) goto L_11fa48d7;
  /* 11fa48cb mov dword ptr [0x11fc295c], 2 */
  w32((uint32_t)(0x11fc295c), (0x2u));
  /* 11fa48d5 jmp 0x11fa48de */
  goto L_11fa48de;
L_11fa48d7:;
  /* 11fa48d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa48d9 jmp 0x11fa4ab9 */
  goto L_11fa4ab9;
L_11fa48de:;
  /* 11fa48de cmp dword ptr [0x11fc295c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11fc295c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa48e5 jne 0x11fa4902 */
  if (!C.zf) goto L_11fa4902;
  /* 11fa48e7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa48ea push edx */
  push32((uint32_t)(EDX));
  /* 11fa48eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa48ee push eax */
  push32((uint32_t)(EAX));
  /* 11fa48ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa48f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa48f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa48f6 push edx */
  push32((uint32_t)(EDX));
  /* 11fa48f7 call dword ptr [0x11fc5314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5314))), 0x11fa48fdu);
  /* 11fa48fd jmp 0x11fa4ab9 */
  goto L_11fa4ab9;
L_11fa4902:;
  /* 11fa4902 cmp dword ptr [0x11fc295c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11fc295c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4909 jne 0x11fa4ab7 */
  if (!C.zf) goto L_11fa4ab7;
  /* 11fa490f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4913 jne 0x11fa491d */
  if (!C.zf) goto L_11fa491d;
  /* 11fa4915 mov eax, dword ptr [0x11fc28d0] */
  EAX = (r32((uint32_t)(0x11fc28d0)));
  /* 11fa491a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11fa491d:;
  /* 11fa491d push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa491f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa4921 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa4923 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa4925 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4928 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa4929 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa492c push edx */
  push32((uint32_t)(EDX));
  /* 11fa492d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11fa4932 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa4935 push eax */
  push32((uint32_t)(EAX));
  /* 11fa4936 call dword ptr [0x11fc5368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5368))), 0x11fa493cu);
  /* 11fa493c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11fa493f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4943 jne 0x11fa494c */
  if (!C.zf) goto L_11fa494c;
  /* 11fa4945 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa4947 jmp 0x11fa4ab9 */
  goto L_11fa4ab9;
L_11fa494c:;
  /* 11fa494c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fa4953 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fa4956 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4959 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11fa495b call 0x11f995a0 */
  push32(0x11fa4960u); f_11f995a0();
  /* 11fa4960 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11fa4963 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fa4966 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fa4969 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11fa496c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fa496f push edx */
  push32((uint32_t)(EDX));
  /* 11fa4970 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa4972 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fa4975 push eax */
  push32((uint32_t)(EAX));
  /* 11fa4976 call 0x11f9a170 */
  push32(0x11fa497bu); f_11f9a170();
  /* 11fa497b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa497e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fa4985 jmp 0x11fa499e */
  goto L_11fa499e;
  /* 11fa4987 mov eax, 1 */
  EAX = (0x1u);
  /* 11fa498c ret  */
  ESPCHK(0x11fa4860u, _esp0);
  ESP += 4; return;
  /* 11fa498d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa4990 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11fa4997 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11fa499e:;
  /* 11fa499e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa49a2 jne 0x11fa49ab */
  if (!C.zf) goto L_11fa49ab;
  /* 11fa49a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa49a6 jmp 0x11fa4ab9 */
  goto L_11fa4ab9;
L_11fa49ab:;
  /* 11fa49ab push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa49ad push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa49af mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fa49b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa49b3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fa49b6 push edx */
  push32((uint32_t)(EDX));
  /* 11fa49b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa49ba push eax */
  push32((uint32_t)(EAX));
  /* 11fa49bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa49be push ecx */
  push32((uint32_t)(ECX));
  /* 11fa49bf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11fa49c4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa49c7 push edx */
  push32((uint32_t)(EDX));
  /* 11fa49c8 call dword ptr [0x11fc5368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5368))), 0x11fa49ceu);
  /* 11fa49ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa49d0 jne 0x11fa49d9 */
  if (!C.zf) goto L_11fa49d9;
  /* 11fa49d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa49d4 jmp 0x11fa4ab9 */
  goto L_11fa4ab9;
L_11fa49d9:;
  /* 11fa49d9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fa49e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fa49e3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11fa49e7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa49ea and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11fa49ec call 0x11f995a0 */
  push32(0x11fa49f1u); f_11f995a0();
  /* 11fa49f1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11fa49f4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fa49f7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fa49fa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11fa49fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fa4a04 jmp 0x11fa4a1d */
  goto L_11fa4a1d;
  /* 11fa4a06 mov eax, 1 */
  EAX = (0x1u);
  /* 11fa4a0b ret  */
  ESPCHK(0x11fa4860u, _esp0);
  ESP += 4; return;
  /* 11fa4a0c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa4a0f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11fa4a16 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11fa4a1d:;
  /* 11fa4a1d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4a21 jne 0x11fa4a2a */
  if (!C.zf) goto L_11fa4a2a;
  /* 11fa4a23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa4a25 jmp 0x11fa4ab9 */
  goto L_11fa4ab9;
L_11fa4a2a:;
  /* 11fa4a2a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4a2e jne 0x11fa4a39 */
  if (!C.zf) goto L_11fa4a39;
  /* 11fa4a30 mov edx, dword ptr [0x11fc28c0] */
  EDX = (r32((uint32_t)(0x11fc28c0)));
  /* 11fa4a36 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11fa4a39:;
  /* 11fa4a39 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4a3c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fa4a3f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11fa4a45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4a48 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fa4a4b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11fa4a52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fa4a55 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa4a56 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fa4a59 push edx */
  push32((uint32_t)(EDX));
  /* 11fa4a5a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fa4a5d push eax */
  push32((uint32_t)(EAX));
  /* 11fa4a5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4a61 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa4a62 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fa4a65 push edx */
  push32((uint32_t)(EDX));
  /* 11fa4a66 call dword ptr [0x11fc5324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5324))), 0x11fa4a6cu);
  /* 11fa4a6c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fa4a6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4a72 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fa4a75 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa4a77 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11fa4a7c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4a82 je 0x11fa4a98 */
  if (C.zf) goto L_11fa4a98;
  /* 11fa4a84 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4a87 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fa4a8a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa4a8c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11fa4a90 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4a96 je 0x11fa4a9c */
  if (C.zf) goto L_11fa4a9c;
L_11fa4a98:;
  /* 11fa4a98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa4a9a jmp 0x11fa4ab9 */
  goto L_11fa4ab9;
L_11fa4a9c:;
  /* 11fa4a9c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4a9f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fa4aa1 push eax */
  push32((uint32_t)(EAX));
  /* 11fa4aa2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fa4aa5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa4aa6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa4aa9 push edx */
  push32((uint32_t)(EDX));
  /* 11fa4aaa call 0x11f9e2f0 */
  push32(0x11fa4aafu); f_11f9e2f0();
  /* 11fa4aaf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4ab2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fa4ab5 jmp 0x11fa4ab9 */
  goto L_11fa4ab9;
L_11fa4ab7:;
  /* 11fa4ab7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fa4ab9:;
  /* 11fa4ab9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11fa4abc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa4abf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11fa4ac6 pop edi */
  EDI = (pop32());
  /* 11fa4ac7 pop esi */
  ESI = (pop32());
  /* 11fa4ac8 pop ebx */
  EBX = (pop32());
  /* 11fa4ac9 mov esp, ebp */
  ESP = (EBP);
  /* 11fa4acb pop ebp */
  EBP = (pop32());
  /* 11fa4acc ret  */
  ESPCHK(0x11fa4860u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ad0 @ 0x11fa4ad0 (208 bytes, 85 insns) */
void f_11fa4ad0(void) {
  FTRACE(0x11fa4ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa4ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa4ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa4ad3 push edi */
  push32((uint32_t)(EDI));
  /* 11fa4ad4 push esi */
  push32((uint32_t)(ESI));
  /* 11fa4ad5 push ebx */
  push32((uint32_t)(EBX));
  /* 11fa4ad6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa4ad9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4adc lea eax, [0x11fc28b8] */
  EAX = ((uint32_t)(0x11fc28b8));
  /* 11fa4ae2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4ae6 jne 0x11fa4b23 */
  if (!C.zf) goto L_11fa4b23;
  /* 11fa4ae8 mov al, 0xff */
  AL = (0xffu);
  /* 11fa4aea mov edi, edi */
  EDI = (EDI);
L_11fa4aec:;
  /* 11fa4aec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11fa4aee je 0x11fa4b1e */
  if (C.zf) goto L_11fa4b1e;
  /* 11fa4af0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fa4af2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11fa4af3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11fa4af5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11fa4af6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa4af8 je 0x11fa4aec */
  if (C.zf) goto L_11fa4aec;
  /* 11fa4afa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fa4afc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa4afe sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fa4b00 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11fa4b03 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fa4b05 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fa4b07 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11fa4b09 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fa4b0b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa4b0d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fa4b0f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11fa4b12 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fa4b14 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fa4b16 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa4b18 je 0x11fa4aec */
  if (C.zf) goto L_11fa4aec;
  /* 11fa4b1a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11fa4b1c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11fa4b1e:;
  /* 11fa4b1e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11fa4b21 jmp 0x11fa4b9b */
  goto L_11fa4b9b;
L_11fa4b23:;
  /* 11fa4b23 lock inc dword ptr [0x11fc2a4c] */
  x86_unimpl("lock inc @ 0x11fa4b23");
  /* 11fa4b2a cmp dword ptr [0x11fc2a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4b31 jg 0x11fa4b37 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa4b37;
  /* 11fa4b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa4b35 jmp 0x11fa4b4c */
  goto L_11fa4b4c;
L_11fa4b37:;
  /* 11fa4b37 lock dec dword ptr [0x11fc2a4c] */
  x86_unimpl("lock dec @ 0x11fa4b37");
  /* 11fa4b3e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fa4b40 call 0x11f99e00 */
  push32(0x11fa4b45u); f_11f99e00();
  /* 11fa4b45 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11fa4b4c:;
  /* 11fa4b4c mov eax, 0xff */
  EAX = (0xffu);
  /* 11fa4b51 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11fa4b53 nop  */
  /* nop */
L_11fa4b54:;
  /* 11fa4b54 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11fa4b56 je 0x11fa4b7f */
  if (C.zf) goto L_11fa4b7f;
  /* 11fa4b58 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fa4b5a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11fa4b5b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11fa4b5d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11fa4b5e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa4b60 je 0x11fa4b54 */
  if (C.zf) goto L_11fa4b54;
  /* 11fa4b62 push eax */
  push32((uint32_t)(EAX));
  /* 11fa4b63 push ebx */
  push32((uint32_t)(EBX));
  /* 11fa4b64 call 0x11fa5c40 */
  push32(0x11fa4b69u); f_11fa5c40();
  /* 11fa4b69 mov ebx, eax */
  EBX = (EAX);
  /* 11fa4b6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4b6e call 0x11fa5c40 */
  push32(0x11fa4b73u); f_11fa5c40();
  /* 11fa4b73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4b76 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa4b78 je 0x11fa4b54 */
  if (C.zf) goto L_11fa4b54;
  /* 11fa4b7a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa4b7c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11fa4b7f:;
  /* 11fa4b7f mov ebx, eax */
  EBX = (EAX);
  /* 11fa4b81 pop eax */
  EAX = (pop32());
  /* 11fa4b82 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa4b84 jne 0x11fa4b8f */
  if (!C.zf) goto L_11fa4b8f;
  /* 11fa4b86 lock dec dword ptr [0x11fc2a4c] */
  x86_unimpl("lock dec @ 0x11fa4b86");
  /* 11fa4b8d jmp 0x11fa4b99 */
  goto L_11fa4b99;
L_11fa4b8f:;
  /* 11fa4b8f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fa4b91 call 0x11f99ea0 */
  push32(0x11fa4b96u); f_11f99ea0();
  /* 11fa4b96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa4b99:;
  /* 11fa4b99 mov eax, ebx */
  EAX = (EBX);
L_11fa4b9b:;
  /* 11fa4b9b pop ebx */
  EBX = (pop32());
  /* 11fa4b9c pop esi */
  ESI = (pop32());
  /* 11fa4b9d pop edi */
  EDI = (pop32());
  /* 11fa4b9e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fa4b9f ret  */
  ESPCHK(0x11fa4ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ba0 @ 0x11fa4ba0 (257 bytes, 103 insns) */
void f_11fa4ba0(void) {
  FTRACE(0x11fa4ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa4ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa4ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa4ba3 push edi */
  push32((uint32_t)(EDI));
  /* 11fa4ba4 push esi */
  push32((uint32_t)(ESI));
  /* 11fa4ba5 push ebx */
  push32((uint32_t)(EBX));
  /* 11fa4ba6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa4ba9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa4bab je 0x11fa4c9a */
  if (C.zf) goto L_11fa4c9a;
  /* 11fa4bb1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4bb4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa4bb7 lea eax, [0x11fc28b8] */
  EAX = ((uint32_t)(0x11fc28b8));
  /* 11fa4bbd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4bc1 jne 0x11fa4c11 */
  if (!C.zf) goto L_11fa4c11;
  /* 11fa4bc3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11fa4bc5 mov bl, 0x5a */
  BL = (0x5au);
  /* 11fa4bc7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11fa4bc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11fa4bcc:;
  /* 11fa4bcc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11fa4bce or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11fa4bd0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11fa4bd2 je 0x11fa4bf5 */
  if (C.zf) goto L_11fa4bf5;
  /* 11fa4bd4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11fa4bd6 je 0x11fa4bf5 */
  if (C.zf) goto L_11fa4bf5;
  /* 11fa4bd8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11fa4bd9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11fa4bda cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa4bdc jb 0x11fa4be4 */
  if (C.cf) goto L_11fa4be4;
  /* 11fa4bde cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa4be0 ja 0x11fa4be4 */
  if ((!C.cf&&!C.zf)) goto L_11fa4be4;
  /* 11fa4be2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11fa4be4:;
  /* 11fa4be4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa4be6 jb 0x11fa4bee */
  if (C.cf) goto L_11fa4bee;
  /* 11fa4be8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa4bea ja 0x11fa4bee */
  if ((!C.cf&&!C.zf)) goto L_11fa4bee;
  /* 11fa4bec add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11fa4bee:;
  /* 11fa4bee cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa4bf0 jne 0x11fa4bff */
  if (!C.zf) goto L_11fa4bff;
  /* 11fa4bf2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11fa4bf3 jne 0x11fa4bcc */
  if (!C.zf) goto L_11fa4bcc;
L_11fa4bf5:;
  /* 11fa4bf5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa4bf7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa4bf9 je 0x11fa4c9a */
  if (C.zf) goto L_11fa4c9a;
L_11fa4bff:;
  /* 11fa4bff mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11fa4c04 jb 0x11fa4c9a */
  if (C.cf) goto L_11fa4c9a;
  /* 11fa4c0a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fa4c0c jmp 0x11fa4c9a */
  goto L_11fa4c9a;
L_11fa4c11:;
  /* 11fa4c11 lock inc dword ptr [0x11fc2a4c] */
  x86_unimpl("lock inc @ 0x11fa4c11");
  /* 11fa4c18 cmp dword ptr [0x11fc2a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4c1f jg 0x11fa4c25 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa4c25;
  /* 11fa4c21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa4c23 jmp 0x11fa4c3e */
  goto L_11fa4c3e;
L_11fa4c25:;
  /* 11fa4c25 lock dec dword ptr [0x11fc2a4c] */
  x86_unimpl("lock dec @ 0x11fa4c25");
  /* 11fa4c2c mov ebx, ecx */
  EBX = (ECX);
  /* 11fa4c2e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fa4c30 call 0x11f99e00 */
  push32(0x11fa4c35u); f_11f99e00();
  /* 11fa4c35 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11fa4c3c mov ecx, ebx */
  ECX = (EBX);
L_11fa4c3e:;
  /* 11fa4c3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa4c40 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11fa4c42 mov edi, edi */
  EDI = (EDI);
L_11fa4c44:;
  /* 11fa4c44 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fa4c46 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa4c48 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11fa4c4a je 0x11fa4c6f */
  if (C.zf) goto L_11fa4c6f;
  /* 11fa4c4c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11fa4c4e je 0x11fa4c6f */
  if (C.zf) goto L_11fa4c6f;
  /* 11fa4c50 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11fa4c51 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11fa4c52 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa4c53 push eax */
  push32((uint32_t)(EAX));
  /* 11fa4c54 push ebx */
  push32((uint32_t)(EBX));
  /* 11fa4c55 call 0x11fa5c40 */
  push32(0x11fa4c5au); f_11fa5c40();
  /* 11fa4c5a mov ebx, eax */
  EBX = (EAX);
  /* 11fa4c5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4c5f call 0x11fa5c40 */
  push32(0x11fa4c64u); f_11fa5c40();
  /* 11fa4c64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4c67 pop ecx */
  ECX = (pop32());
  /* 11fa4c68 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4c6a jne 0x11fa4c75 */
  if (!C.zf) goto L_11fa4c75;
  /* 11fa4c6c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11fa4c6d jne 0x11fa4c44 */
  if (!C.zf) goto L_11fa4c44;
L_11fa4c6f:;
  /* 11fa4c6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa4c71 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4c73 je 0x11fa4c7e */
  if (C.zf) goto L_11fa4c7e;
L_11fa4c75:;
  /* 11fa4c75 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11fa4c7a jb 0x11fa4c7e */
  if (C.cf) goto L_11fa4c7e;
  /* 11fa4c7c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11fa4c7e:;
  /* 11fa4c7e pop eax */
  EAX = (pop32());
  /* 11fa4c7f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa4c81 jne 0x11fa4c8c */
  if (!C.zf) goto L_11fa4c8c;
  /* 11fa4c83 lock dec dword ptr [0x11fc2a4c] */
  x86_unimpl("lock dec @ 0x11fa4c83");
  /* 11fa4c8a jmp 0x11fa4c9a */
  goto L_11fa4c9a;
L_11fa4c8c:;
  /* 11fa4c8c mov ebx, ecx */
  EBX = (ECX);
  /* 11fa4c8e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fa4c90 call 0x11f99ea0 */
  push32(0x11fa4c95u); f_11f99ea0();
  /* 11fa4c95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4c98 mov ecx, ebx */
  ECX = (EBX);
L_11fa4c9a:;
  /* 11fa4c9a mov eax, ecx */
  EAX = (ECX);
  /* 11fa4c9c pop ebx */
  EBX = (pop32());
  /* 11fa4c9d pop esi */
  ESI = (pop32());
  /* 11fa4c9e pop edi */
  EDI = (pop32());
  /* 11fa4c9f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fa4ca0 ret  */
  ESPCHK(0x11fa4ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014cb0 @ 0x11fa4cb0 (255 bytes, 88 insns) */
void f_11fa4cb0(void) {
  FTRACE(0x11fa4cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa4cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa4cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa4cb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11fa4cb6:;
  /* 11fa4cb6 cmp dword ptr [0x11fc0eb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11fc0eb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4cbd jle 0x11fa4cd6 */
  if ((C.zf||C.sf!=C.of)) goto L_11fa4cd6;
  /* 11fa4cbf push 8 */
  push32((uint32_t)(0x8u));
  /* 11fa4cc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4cc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa4cc6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fa4cc8 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa4cc9 call 0x11f9c410 */
  push32(0x11fa4cceu); f_11f9c410();
  /* 11fa4cce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4cd1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fa4cd4 jmp 0x11fa4cef */
  goto L_11fa4cef;
L_11fa4cd6:;
  /* 11fa4cd6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4cd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa4cdb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa4cdd mov ecx, dword ptr [0x11fc0ca8] */
  ECX = (r32((uint32_t)(0x11fc0ca8)));
  /* 11fa4ce3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa4ce5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11fa4ce9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa4cec mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11fa4cef:;
  /* 11fa4cef cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4cf3 je 0x11fa4d00 */
  if (C.zf) goto L_11fa4d00;
  /* 11fa4cf5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4cf8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4cfb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fa4cfe jmp 0x11fa4cb6 */
  goto L_11fa4cb6;
L_11fa4d00:;
  /* 11fa4d00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4d03 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa4d05 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fa4d07 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fa4d0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4d0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4d10 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fa4d13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa4d16 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa4d19 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4d1d je 0x11fa4d25 */
  if (C.zf) goto L_11fa4d25;
  /* 11fa4d1f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4d23 jne 0x11fa4d38 */
  if (!C.zf) goto L_11fa4d38;
L_11fa4d25:;
  /* 11fa4d25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4d28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa4d2a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa4d2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa4d2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4d32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4d35 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11fa4d38:;
  /* 11fa4d38 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11fa4d3f:;
  /* 11fa4d3f cmp dword ptr [0x11fc0eb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11fc0eb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4d46 jle 0x11fa4d5b */
  if ((C.zf||C.sf!=C.of)) goto L_11fa4d5b;
  /* 11fa4d48 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fa4d4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa4d4d push edx */
  push32((uint32_t)(EDX));
  /* 11fa4d4e call 0x11f9c410 */
  push32(0x11fa4d53u); f_11f9c410();
  /* 11fa4d53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4d56 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fa4d59 jmp 0x11fa4d70 */
  goto L_11fa4d70;
L_11fa4d5b:;
  /* 11fa4d5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa4d5e mov ecx, dword ptr [0x11fc0ca8] */
  ECX = (r32((uint32_t)(0x11fc0ca8)));
  /* 11fa4d64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa4d66 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11fa4d6a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa4d6d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11fa4d70:;
  /* 11fa4d70 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4d74 je 0x11fa4d9b */
  if (C.zf) goto L_11fa4d9b;
  /* 11fa4d76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa4d79 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa4d7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa4d7f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11fa4d83 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fa4d86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4d89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa4d8b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fa4d8d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fa4d90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4d93 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4d96 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11fa4d99 jmp 0x11fa4d3f */
  goto L_11fa4d3f;
L_11fa4d9b:;
  /* 11fa4d9b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4d9f jne 0x11fa4da8 */
  if (!C.zf) goto L_11fa4da8;
  /* 11fa4da1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa4da4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fa4da6 jmp 0x11fa4dab */
  goto L_11fa4dab;
L_11fa4da8:;
  /* 11fa4da8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11fa4dab:;
  /* 11fa4dab mov esp, ebp */
  ESP = (EBP);
  /* 11fa4dad pop ebp */
  EBP = (pop32());
  /* 11fa4dae ret  */
  ESPCHK(0x11fa4cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014db0 @ 0x11fa4db0 (17 bytes, 8 insns) */
void f_11fa4db0(void) {
  FTRACE(0x11fa4db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa4db0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa4db1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa4db3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4db6 push eax */
  push32((uint32_t)(EAX));
  /* 11fa4db7 call 0x11fa4cb0 */
  push32(0x11fa4dbcu); f_11fa4cb0();
  /* 11fa4dbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4dbf pop ebp */
  EBP = (pop32());
  /* 11fa4dc0 ret  */
  ESPCHK(0x11fa4db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014dd0 @ 0x11fa4dd0 (297 bytes, 106 insns) */
void f_11fa4dd0(void) {
  FTRACE(0x11fa4dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa4dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa4dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa4dd3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa4dd6 push esi */
  push32((uint32_t)(ESI));
L_11fa4dd7:;
  /* 11fa4dd7 cmp dword ptr [0x11fc0eb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11fc0eb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4dde jle 0x11fa4df7 */
  if ((C.zf||C.sf!=C.of)) goto L_11fa4df7;
  /* 11fa4de0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11fa4de2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4de5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa4de7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fa4de9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa4dea call 0x11f9c410 */
  push32(0x11fa4defu); f_11f9c410();
  /* 11fa4def add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4df2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fa4df5 jmp 0x11fa4e10 */
  goto L_11fa4e10;
L_11fa4df7:;
  /* 11fa4df7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4dfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa4dfc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa4dfe mov ecx, dword ptr [0x11fc0ca8] */
  ECX = (r32((uint32_t)(0x11fc0ca8)));
  /* 11fa4e04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa4e06 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11fa4e0a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa4e0d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11fa4e10:;
  /* 11fa4e10 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4e14 je 0x11fa4e21 */
  if (C.zf) goto L_11fa4e21;
  /* 11fa4e16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4e19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4e1c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fa4e1f jmp 0x11fa4dd7 */
  goto L_11fa4dd7;
L_11fa4e21:;
  /* 11fa4e21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4e24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa4e26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fa4e28 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fa4e2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4e2e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4e31 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fa4e34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa4e37 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fa4e3a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4e3e je 0x11fa4e46 */
  if (C.zf) goto L_11fa4e46;
  /* 11fa4e40 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4e44 jne 0x11fa4e59 */
  if (!C.zf) goto L_11fa4e59;
L_11fa4e46:;
  /* 11fa4e46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4e49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa4e4b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa4e4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa4e50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4e53 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4e56 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11fa4e59:;
  /* 11fa4e59 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fa4e60 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11fa4e67:;
  /* 11fa4e67 cmp dword ptr [0x11fc0eb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11fc0eb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4e6e jle 0x11fa4e83 */
  if ((C.zf||C.sf!=C.of)) goto L_11fa4e83;
  /* 11fa4e70 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fa4e72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa4e75 push edx */
  push32((uint32_t)(EDX));
  /* 11fa4e76 call 0x11f9c410 */
  push32(0x11fa4e7bu); f_11f9c410();
  /* 11fa4e7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4e7e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fa4e81 jmp 0x11fa4e98 */
  goto L_11fa4e98;
L_11fa4e83:;
  /* 11fa4e83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa4e86 mov ecx, dword ptr [0x11fc0ca8] */
  ECX = (r32((uint32_t)(0x11fc0ca8)));
  /* 11fa4e8c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa4e8e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11fa4e92 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa4e95 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11fa4e98:;
  /* 11fa4e98 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4e9c je 0x11fa4ed9 */
  if (C.zf) goto L_11fa4ed9;
  /* 11fa4e9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa4ea0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11fa4ea2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa4ea5 push eax */
  push32((uint32_t)(EAX));
  /* 11fa4ea6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa4ea9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa4eaa call 0x11fa5d70 */
  push32(0x11fa4eafu); f_11fa5d70();
  /* 11fa4eaf mov ecx, eax */
  ECX = (EAX);
  /* 11fa4eb1 mov esi, edx */
  ESI = (EDX);
  /* 11fa4eb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa4eb6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa4eb9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fa4eba add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4ebc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4ebe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa4ec1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11fa4ec4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4ec7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa4ec9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa4ecb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa4ece mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa4ed1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4ed4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11fa4ed7 jmp 0x11fa4e67 */
  goto L_11fa4e67;
L_11fa4ed9:;
  /* 11fa4ed9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4edd jne 0x11fa4eee */
  if (!C.zf) goto L_11fa4eee;
  /* 11fa4edf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa4ee2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fa4ee4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa4ee7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4eea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fa4eec jmp 0x11fa4ef4 */
  goto L_11fa4ef4;
L_11fa4eee:;
  /* 11fa4eee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa4ef1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11fa4ef4:;
  /* 11fa4ef4 pop esi */
  ESI = (pop32());
  /* 11fa4ef5 mov esp, ebp */
  ESP = (EBP);
  /* 11fa4ef7 pop ebp */
  EBP = (pop32());
  /* 11fa4ef8 ret  */
  ESPCHK(0x11fa4dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f00 @ 0x11fa4f00 (61 bytes, 18 insns) */
void f_11fa4f00(void) {
  FTRACE(0x11fa4f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa4f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa4f01 mov ebp, esp */
  EBP = (ESP);
  /* 11fa4f03 cmp dword ptr [0x11fc2a18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4f0a jne 0x11fa4f3b */
  if (!C.zf) goto L_11fa4f3b;
  /* 11fa4f0c push 0xb */
  push32((uint32_t)(0xbu));
  /* 11fa4f0e call 0x11f99e00 */
  push32(0x11fa4f13u); f_11f99e00();
  /* 11fa4f13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4f16 cmp dword ptr [0x11fc2a18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4f1d jne 0x11fa4f31 */
  if (!C.zf) goto L_11fa4f31;
  /* 11fa4f1f call 0x11fa4f60 */
  push32(0x11fa4f24u); f_11fa4f60();
  /* 11fa4f24 mov eax, dword ptr [0x11fc2a18] */
  EAX = (r32((uint32_t)(0x11fc2a18)));
  /* 11fa4f29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4f2c mov dword ptr [0x11fc2a18], eax */
  w32((uint32_t)(0x11fc2a18), (EAX));
L_11fa4f31:;
  /* 11fa4f31 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11fa4f33 call 0x11f99ea0 */
  push32(0x11fa4f38u); f_11f99ea0();
  /* 11fa4f38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa4f3b:;
  /* 11fa4f3b pop ebp */
  EBP = (pop32());
  /* 11fa4f3c ret  */
  ESPCHK(0x11fa4f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f40 @ 0x11fa4f40 (30 bytes, 11 insns) */
void f_11fa4f40(void) {
  FTRACE(0x11fa4f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa4f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa4f41 mov ebp, esp */
  EBP = (ESP);
  /* 11fa4f43 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11fa4f45 call 0x11f99e00 */
  push32(0x11fa4f4au); f_11f99e00();
  /* 11fa4f4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4f4d call 0x11fa4f60 */
  push32(0x11fa4f52u); f_11fa4f60();
  /* 11fa4f52 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11fa4f54 call 0x11f99ea0 */
  push32(0x11fa4f59u); f_11f99ea0();
  /* 11fa4f59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4f5c pop ebp */
  EBP = (pop32());
  /* 11fa4f5d ret  */
  ESPCHK(0x11fa4f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f60 @ 0x11fa4f60 (939 bytes, 266 insns) */
void f_11fa4f60(void) {
  FTRACE(0x11fa4f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa4f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa4f61 mov ebp, esp */
  EBP = (ESP);
  /* 11fa4f63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa4f66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fa4f6d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11fa4f6f call 0x11f99e00 */
  push32(0x11fa4f74u); f_11f99e00();
  /* 11fa4f74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4f77 mov dword ptr [0x11fc2960], 0 */
  w32((uint32_t)(0x11fc2960), (0x0u));
  /* 11fa4f81 mov dword ptr [0x11fc1e48], 0xffffffff */
  w32((uint32_t)(0x11fc1e48), (0xffffffffu));
  /* 11fa4f8b mov eax, dword ptr [0x11fc1e48] */
  EAX = (r32((uint32_t)(0x11fc1e48)));
  /* 11fa4f90 mov dword ptr [0x11fc1e38], eax */
  w32((uint32_t)(0x11fc1e38), (EAX));
  /* 11fa4f95 push 0x11fbeab0 */
  push32((uint32_t)(0x11fbeab0u));
  /* 11fa4f9a call 0x11fa5de0 */
  push32(0x11fa4f9fu); f_11fa5de0();
  /* 11fa4f9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4fa2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fa4fa5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4fa9 jne 0x11fa50e3 */
  if (!C.zf) goto L_11fa50e3;
  /* 11fa4faf push 0xc */
  push32((uint32_t)(0xcu));
  /* 11fa4fb1 call 0x11f99ea0 */
  push32(0x11fa4fb6u); f_11f99ea0();
  /* 11fa4fb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa4fb9 push 0x11fc2968 */
  push32((uint32_t)(0x11fc2968u));
  /* 11fa4fbe call dword ptr [0x11fc52d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52d8))), 0x11fa4fc4u);
  /* 11fa4fc4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa4fc7 je 0x11fa50de */
  if (C.zf) goto L_11fa50de;
  /* 11fa4fcd mov dword ptr [0x11fc2960], 1 */
  w32((uint32_t)(0x11fc2960), (0x1u));
  /* 11fa4fd7 mov ecx, dword ptr [0x11fc2968] */
  ECX = (r32((uint32_t)(0x11fc2968)));
  /* 11fa4fdd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa4fe0 mov dword ptr [0x11fc1da0], ecx */
  w32((uint32_t)(0x11fc1da0), (ECX));
  /* 11fa4fe6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa4fe8 mov dx, word ptr [0x11fc29ae] */
  DX = (r16((uint32_t)(0x11fc29ae)));
  /* 11fa4fef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa4ff1 je 0x11fa5009 */
  if (C.zf) goto L_11fa5009;
  /* 11fa4ff3 mov eax, dword ptr [0x11fc29bc] */
  EAX = (r32((uint32_t)(0x11fc29bc)));
  /* 11fa4ff8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa4ffb mov ecx, dword ptr [0x11fc1da0] */
  ECX = (r32((uint32_t)(0x11fc1da0)));
  /* 11fa5001 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5003 mov dword ptr [0x11fc1da0], ecx */
  w32((uint32_t)(0x11fc1da0), (ECX));
L_11fa5009:;
  /* 11fa5009 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa500b mov dx, word ptr [0x11fc2a02] */
  DX = (r16((uint32_t)(0x11fc2a02)));
  /* 11fa5012 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa5014 je 0x11fa503e */
  if (C.zf) goto L_11fa503e;
  /* 11fa5016 cmp dword ptr [0x11fc2a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa501d je 0x11fa503e */
  if (C.zf) goto L_11fa503e;
  /* 11fa501f mov dword ptr [0x11fc1da4], 1 */
  w32((uint32_t)(0x11fc1da4), (0x1u));
  /* 11fa5029 mov eax, dword ptr [0x11fc2a10] */
  EAX = (r32((uint32_t)(0x11fc2a10)));
  /* 11fa502e sub eax, dword ptr [0x11fc29bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc29bc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa5034 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa5037 mov dword ptr [0x11fc1da8], eax */
  w32((uint32_t)(0x11fc1da8), (EAX));
  /* 11fa503c jmp 0x11fa5052 */
  goto L_11fa5052;
L_11fa503e:;
  /* 11fa503e mov dword ptr [0x11fc1da4], 0 */
  w32((uint32_t)(0x11fc1da4), (0x0u));
  /* 11fa5048 mov dword ptr [0x11fc1da8], 0 */
  w32((uint32_t)(0x11fc1da8), (0x0u));
L_11fa5052:;
  /* 11fa5052 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11fa5055 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5056 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5058 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11fa505a mov edx, dword ptr [0x11fc1e2c] */
  EDX = (r32((uint32_t)(0x11fc1e2c)));
  /* 11fa5060 push edx */
  push32((uint32_t)(EDX));
  /* 11fa5061 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fa5063 push 0x11fc296c */
  push32((uint32_t)(0x11fc296cu));
  /* 11fa5068 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11fa506d mov eax, dword ptr [0x11fc28d0] */
  EAX = (r32((uint32_t)(0x11fc28d0)));
  /* 11fa5072 push eax */
  push32((uint32_t)(EAX));
  /* 11fa5073 call dword ptr [0x11fc5368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5368))), 0x11fa5079u);
  /* 11fa5079 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa507b je 0x11fa508f */
  if (C.zf) goto L_11fa508f;
  /* 11fa507d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5081 jne 0x11fa508f */
  if (!C.zf) goto L_11fa508f;
  /* 11fa5083 mov ecx, dword ptr [0x11fc1e2c] */
  ECX = (r32((uint32_t)(0x11fc1e2c)));
  /* 11fa5089 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 11fa508d jmp 0x11fa5098 */
  goto L_11fa5098;
L_11fa508f:;
  /* 11fa508f mov edx, dword ptr [0x11fc1e2c] */
  EDX = (r32((uint32_t)(0x11fc1e2c)));
  /* 11fa5095 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11fa5098:;
  /* 11fa5098 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11fa509b push eax */
  push32((uint32_t)(EAX));
  /* 11fa509c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa509e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11fa50a0 mov ecx, dword ptr [0x11fc1e30] */
  ECX = (r32((uint32_t)(0x11fc1e30)));
  /* 11fa50a6 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa50a7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fa50a9 push 0x11fc29c0 */
  push32((uint32_t)(0x11fc29c0u));
  /* 11fa50ae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11fa50b3 mov edx, dword ptr [0x11fc28d0] */
  EDX = (r32((uint32_t)(0x11fc28d0)));
  /* 11fa50b9 push edx */
  push32((uint32_t)(EDX));
  /* 11fa50ba call dword ptr [0x11fc5368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5368))), 0x11fa50c0u);
  /* 11fa50c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa50c2 je 0x11fa50d5 */
  if (C.zf) goto L_11fa50d5;
  /* 11fa50c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa50c8 jne 0x11fa50d5 */
  if (!C.zf) goto L_11fa50d5;
  /* 11fa50ca mov eax, dword ptr [0x11fc1e30] */
  EAX = (r32((uint32_t)(0x11fc1e30)));
  /* 11fa50cf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11fa50d3 jmp 0x11fa50de */
  goto L_11fa50de;
L_11fa50d5:;
  /* 11fa50d5 mov ecx, dword ptr [0x11fc1e30] */
  ECX = (r32((uint32_t)(0x11fc1e30)));
  /* 11fa50db mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11fa50de:;
  /* 11fa50de jmp 0x11fa5307 */
  goto L_11fa5307;
L_11fa50e3:;
  /* 11fa50e3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa50e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fa50e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa50eb je 0x11fa510d */
  if (C.zf) goto L_11fa510d;
  /* 11fa50ed cmp dword ptr [0x11fc2a14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa50f4 je 0x11fa511c */
  if (C.zf) goto L_11fa511c;
  /* 11fa50f6 mov ecx, dword ptr [0x11fc2a14] */
  ECX = (r32((uint32_t)(0x11fc2a14)));
  /* 11fa50fc push ecx */
  push32((uint32_t)(ECX));
  /* 11fa50fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa5100 push edx */
  push32((uint32_t)(EDX));
  /* 11fa5101 call 0x11fa2090 */
  push32(0x11fa5106u); f_11fa2090();
  /* 11fa5106 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa510b jne 0x11fa511c */
  if (!C.zf) goto L_11fa511c;
L_11fa510d:;
  /* 11fa510d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11fa510f call 0x11f99ea0 */
  push32(0x11fa5114u); f_11f99ea0();
  /* 11fa5114 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5117 jmp 0x11fa5307 */
  goto L_11fa5307;
L_11fa511c:;
  /* 11fa511c push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa511e mov eax, dword ptr [0x11fc2a14] */
  EAX = (r32((uint32_t)(0x11fc2a14)));
  /* 11fa5123 push eax */
  push32((uint32_t)(EAX));
  /* 11fa5124 call 0x11f96e90 */
  push32(0x11fa5129u); f_11f96e90();
  /* 11fa5129 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa512c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11fa5131 push 0x11fbeaa8 */
  push32((uint32_t)(0x11fbeaa8u));
  /* 11fa5136 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa5138 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa513b push ecx */
  push32((uint32_t)(ECX));
  /* 11fa513c call 0x11f99230 */
  push32(0x11fa5141u); f_11f99230();
  /* 11fa5141 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5144 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5147 push eax */
  push32((uint32_t)(EAX));
  /* 11fa5148 call 0x11f96400 */
  push32(0x11fa514du); f_11f96400();
  /* 11fa514d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5150 mov dword ptr [0x11fc2a14], eax */
  w32((uint32_t)(0x11fc2a14), (EAX));
  /* 11fa5155 cmp dword ptr [0x11fc2a14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa515c jne 0x11fa516d */
  if (!C.zf) goto L_11fa516d;
  /* 11fa515e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11fa5160 call 0x11f99ea0 */
  push32(0x11fa5165u); f_11f99ea0();
  /* 11fa5165 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5168 jmp 0x11fa5307 */
  goto L_11fa5307;
L_11fa516d:;
  /* 11fa516d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa5170 push edx */
  push32((uint32_t)(EDX));
  /* 11fa5171 mov eax, dword ptr [0x11fc2a14] */
  EAX = (r32((uint32_t)(0x11fc2a14)));
  /* 11fa5176 push eax */
  push32((uint32_t)(EAX));
  /* 11fa5177 call 0x11f993b0 */
  push32(0x11fa517cu); f_11f993b0();
  /* 11fa517c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa517f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11fa5181 call 0x11f99ea0 */
  push32(0x11fa5186u); f_11f99ea0();
  /* 11fa5186 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5189 push 3 */
  push32((uint32_t)(0x3u));
  /* 11fa518b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa518e push ecx */
  push32((uint32_t)(ECX));
  /* 11fa518f mov edx, dword ptr [0x11fc1e2c] */
  EDX = (r32((uint32_t)(0x11fc1e2c)));
  /* 11fa5195 push edx */
  push32((uint32_t)(EDX));
  /* 11fa5196 call 0x11f99c20 */
  push32(0x11fa519bu); f_11f99c20();
  /* 11fa519b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa519e mov eax, dword ptr [0x11fc1e2c] */
  EAX = (r32((uint32_t)(0x11fc1e2c)));
  /* 11fa51a3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11fa51a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa51aa add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa51ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa51b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa51b3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fa51b6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa51b9 jne 0x11fa51cd */
  if (!C.zf) goto L_11fa51cd;
  /* 11fa51bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa51be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa51c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fa51c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa51c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa51ca mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11fa51cd:;
  /* 11fa51cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa51d0 push eax */
  push32((uint32_t)(EAX));
  /* 11fa51d1 call 0x11fa4cb0 */
  push32(0x11fa51d6u); f_11fa4cb0();
  /* 11fa51d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa51d9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa51df mov dword ptr [0x11fc1da0], eax */
  w32((uint32_t)(0x11fc1da0), (EAX));
L_11fa51e4:;
  /* 11fa51e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa51e7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fa51ea cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa51ed je 0x11fa5205 */
  if (C.zf) goto L_11fa5205;
  /* 11fa51ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa51f2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa51f5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa51f8 jl 0x11fa5210 */
  if ((C.sf!=C.of)) goto L_11fa5210;
  /* 11fa51fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa51fd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fa5200 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5203 jg 0x11fa5210 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa5210;
L_11fa5205:;
  /* 11fa5205 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa5208 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa520b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa520e jmp 0x11fa51e4 */
  goto L_11fa51e4;
L_11fa5210:;
  /* 11fa5210 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa5213 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fa5216 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5219 jne 0x11fa52b5 */
  if (!C.zf) goto L_11fa52b5;
  /* 11fa521f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa5222 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5225 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa5228 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa522b push edx */
  push32((uint32_t)(EDX));
  /* 11fa522c call 0x11fa4cb0 */
  push32(0x11fa5231u); f_11fa4cb0();
  /* 11fa5231 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5234 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa5237 mov ecx, dword ptr [0x11fc1da0] */
  ECX = (r32((uint32_t)(0x11fc1da0)));
  /* 11fa523d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa523f mov dword ptr [0x11fc1da0], ecx */
  w32((uint32_t)(0x11fc1da0), (ECX));
L_11fa5245:;
  /* 11fa5245 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa5248 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fa524b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa524e jl 0x11fa5266 */
  if ((C.sf!=C.of)) goto L_11fa5266;
  /* 11fa5250 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa5253 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fa5256 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5259 jg 0x11fa5266 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa5266;
  /* 11fa525b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa525e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5261 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fa5264 jmp 0x11fa5245 */
  goto L_11fa5245;
L_11fa5266:;
  /* 11fa5266 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa5269 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fa526c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa526f jne 0x11fa52b5 */
  if (!C.zf) goto L_11fa52b5;
  /* 11fa5271 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa5274 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5277 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fa527a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa527d push ecx */
  push32((uint32_t)(ECX));
  /* 11fa527e call 0x11fa4cb0 */
  push32(0x11fa5283u); f_11fa4cb0();
  /* 11fa5283 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5286 mov edx, dword ptr [0x11fc1da0] */
  EDX = (r32((uint32_t)(0x11fc1da0)));
  /* 11fa528c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa528e mov dword ptr [0x11fc1da0], edx */
  w32((uint32_t)(0x11fc1da0), (EDX));
L_11fa5294:;
  /* 11fa5294 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa5297 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa529a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa529d jl 0x11fa52b5 */
  if ((C.sf!=C.of)) goto L_11fa52b5;
  /* 11fa529f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa52a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fa52a5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa52a8 jg 0x11fa52b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa52b5;
  /* 11fa52aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa52ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa52b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa52b3 jmp 0x11fa5294 */
  goto L_11fa5294;
L_11fa52b5:;
  /* 11fa52b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa52b9 je 0x11fa52c9 */
  if (C.zf) goto L_11fa52c9;
  /* 11fa52bb mov edx, dword ptr [0x11fc1da0] */
  EDX = (r32((uint32_t)(0x11fc1da0)));
  /* 11fa52c1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fa52c3 mov dword ptr [0x11fc1da0], edx */
  w32((uint32_t)(0x11fc1da0), (EDX));
L_11fa52c9:;
  /* 11fa52c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa52cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fa52cf mov dword ptr [0x11fc1da4], ecx */
  w32((uint32_t)(0x11fc1da4), (ECX));
  /* 11fa52d5 cmp dword ptr [0x11fc1da4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc1da4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa52dc je 0x11fa52fe */
  if (C.zf) goto L_11fa52fe;
  /* 11fa52de push 3 */
  push32((uint32_t)(0x3u));
  /* 11fa52e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa52e3 push edx */
  push32((uint32_t)(EDX));
  /* 11fa52e4 mov eax, dword ptr [0x11fc1e30] */
  EAX = (r32((uint32_t)(0x11fc1e30)));
  /* 11fa52e9 push eax */
  push32((uint32_t)(EAX));
  /* 11fa52ea call 0x11f99c20 */
  push32(0x11fa52efu); f_11f99c20();
  /* 11fa52ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa52f2 mov ecx, dword ptr [0x11fc1e30] */
  ECX = (r32((uint32_t)(0x11fc1e30)));
  /* 11fa52f8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 11fa52fc jmp 0x11fa5307 */
  goto L_11fa5307;
L_11fa52fe:;
  /* 11fa52fe mov edx, dword ptr [0x11fc1e30] */
  EDX = (r32((uint32_t)(0x11fc1e30)));
  /* 11fa5304 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11fa5307:;
  /* 11fa5307 mov esp, ebp */
  ESP = (EBP);
  /* 11fa5309 pop ebp */
  EBP = (pop32());
  /* 11fa530a ret  */
  ESPCHK(0x11fa4f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10015310 @ 0x11fa5310 (46 bytes, 18 insns) */
void f_11fa5310(void) {
  FTRACE(0x11fa5310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa5310 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa5311 mov ebp, esp */
  EBP = (ESP);
  /* 11fa5313 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5314 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11fa5316 call 0x11f99e00 */
  push32(0x11fa531bu); f_11f99e00();
  /* 11fa531b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa531e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5321 push eax */
  push32((uint32_t)(EAX));
  /* 11fa5322 call 0x11fa5340 */
  push32(0x11fa5327u); f_11fa5340();
  /* 11fa5327 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa532a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa532d push 0xb */
  push32((uint32_t)(0xbu));
  /* 11fa532f call 0x11f99ea0 */
  push32(0x11fa5334u); f_11f99ea0();
  /* 11fa5334 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5337 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa533a mov esp, ebp */
  ESP = (EBP);
  /* 11fa533c pop ebp */
  EBP = (pop32());
  /* 11fa533d ret  */
  ESPCHK(0x11fa5310u, _esp0);
  ESP += 4; return;
}

/* FUN_10015340 @ 0x11fa5340 (762 bytes, 246 insns) */
void f_11fa5340(void) {
  FTRACE(0x11fa5340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa5340 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa5341 mov ebp, esp */
  EBP = (ESP);
  /* 11fa5343 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5344 cmp dword ptr [0x11fc1da4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc1da4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa534b jne 0x11fa5354 */
  if (!C.zf) goto L_11fa5354;
  /* 11fa534d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa534f jmp 0x11fa5636 */
  goto L_11fa5636;
L_11fa5354:;
  /* 11fa5354 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5357 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fa535a cmp ecx, dword ptr [0x11fc1e38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11fc1e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5360 jne 0x11fa5374 */
  if (!C.zf) goto L_11fa5374;
  /* 11fa5362 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5365 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fa5368 cmp eax, dword ptr [0x11fc1e48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc1e48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa536e je 0x11fa553b */
  if (C.zf) goto L_11fa553b;
L_11fa5374:;
  /* 11fa5374 cmp dword ptr [0x11fc2960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa537b je 0x11fa54f5 */
  if (C.zf) goto L_11fa54f5;
  /* 11fa5381 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa5383 mov cx, word ptr [0x11fc2a00] */
  CX = (r16((uint32_t)(0x11fc2a00)));
  /* 11fa538a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa538c jne 0x11fa53e9 */
  if (!C.zf) goto L_11fa53e9;
  /* 11fa538e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa5390 mov dx, word ptr [0x11fc2a0e] */
  DX = (r16((uint32_t)(0x11fc2a0e)));
  /* 11fa5397 push edx */
  push32((uint32_t)(EDX));
  /* 11fa5398 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa539a mov ax, word ptr [0x11fc2a0c] */
  AX = (r16((uint32_t)(0x11fc2a0c)));
  /* 11fa53a0 push eax */
  push32((uint32_t)(EAX));
  /* 11fa53a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa53a3 mov cx, word ptr [0x11fc2a0a] */
  CX = (r16((uint32_t)(0x11fc2a0a)));
  /* 11fa53aa push ecx */
  push32((uint32_t)(ECX));
  /* 11fa53ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa53ad mov dx, word ptr [0x11fc2a08] */
  DX = (r16((uint32_t)(0x11fc2a08)));
  /* 11fa53b4 push edx */
  push32((uint32_t)(EDX));
  /* 11fa53b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa53b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa53b9 mov ax, word ptr [0x11fc2a04] */
  AX = (r16((uint32_t)(0x11fc2a04)));
  /* 11fa53bf push eax */
  push32((uint32_t)(EAX));
  /* 11fa53c0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa53c2 mov cx, word ptr [0x11fc2a06] */
  CX = (r16((uint32_t)(0x11fc2a06)));
  /* 11fa53c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa53ca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa53cc mov dx, word ptr [0x11fc2a02] */
  DX = (r16((uint32_t)(0x11fc2a02)));
  /* 11fa53d3 push edx */
  push32((uint32_t)(EDX));
  /* 11fa53d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa53d7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fa53da push ecx */
  push32((uint32_t)(ECX));
  /* 11fa53db push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa53dd push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa53df call 0x11fa5640 */
  push32(0x11fa53e4u); f_11fa5640();
  /* 11fa53e4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa53e7 jmp 0x11fa543a */
  goto L_11fa543a;
L_11fa53e9:;
  /* 11fa53e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa53eb mov dx, word ptr [0x11fc2a0e] */
  DX = (r16((uint32_t)(0x11fc2a0e)));
  /* 11fa53f2 push edx */
  push32((uint32_t)(EDX));
  /* 11fa53f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa53f5 mov ax, word ptr [0x11fc2a0c] */
  AX = (r16((uint32_t)(0x11fc2a0c)));
  /* 11fa53fb push eax */
  push32((uint32_t)(EAX));
  /* 11fa53fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa53fe mov cx, word ptr [0x11fc2a0a] */
  CX = (r16((uint32_t)(0x11fc2a0a)));
  /* 11fa5405 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5406 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa5408 mov dx, word ptr [0x11fc2a08] */
  DX = (r16((uint32_t)(0x11fc2a08)));
  /* 11fa540f push edx */
  push32((uint32_t)(EDX));
  /* 11fa5410 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa5412 mov ax, word ptr [0x11fc2a06] */
  AX = (r16((uint32_t)(0x11fc2a06)));
  /* 11fa5418 push eax */
  push32((uint32_t)(EAX));
  /* 11fa5419 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa541b push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa541d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa541f mov cx, word ptr [0x11fc2a02] */
  CX = (r16((uint32_t)(0x11fc2a02)));
  /* 11fa5426 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5427 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa542a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fa542d push eax */
  push32((uint32_t)(EAX));
  /* 11fa542e push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5430 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa5432 call 0x11fa5640 */
  push32(0x11fa5437u); f_11fa5640();
  /* 11fa5437 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa543a:;
  /* 11fa543a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa543c mov cx, word ptr [0x11fc29ac] */
  CX = (r16((uint32_t)(0x11fc29ac)));
  /* 11fa5443 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa5445 jne 0x11fa54a2 */
  if (!C.zf) goto L_11fa54a2;
  /* 11fa5447 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa5449 mov dx, word ptr [0x11fc29ba] */
  DX = (r16((uint32_t)(0x11fc29ba)));
  /* 11fa5450 push edx */
  push32((uint32_t)(EDX));
  /* 11fa5451 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa5453 mov ax, word ptr [0x11fc29b8] */
  AX = (r16((uint32_t)(0x11fc29b8)));
  /* 11fa5459 push eax */
  push32((uint32_t)(EAX));
  /* 11fa545a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa545c mov cx, word ptr [0x11fc29b6] */
  CX = (r16((uint32_t)(0x11fc29b6)));
  /* 11fa5463 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5464 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa5466 mov dx, word ptr [0x11fc29b4] */
  DX = (r16((uint32_t)(0x11fc29b4)));
  /* 11fa546d push edx */
  push32((uint32_t)(EDX));
  /* 11fa546e push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5470 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa5472 mov ax, word ptr [0x11fc29b0] */
  AX = (r16((uint32_t)(0x11fc29b0)));
  /* 11fa5478 push eax */
  push32((uint32_t)(EAX));
  /* 11fa5479 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa547b mov cx, word ptr [0x11fc29b2] */
  CX = (r16((uint32_t)(0x11fc29b2)));
  /* 11fa5482 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5483 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa5485 mov dx, word ptr [0x11fc29ae] */
  DX = (r16((uint32_t)(0x11fc29ae)));
  /* 11fa548c push edx */
  push32((uint32_t)(EDX));
  /* 11fa548d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5490 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fa5493 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5494 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa5496 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5498 call 0x11fa5640 */
  push32(0x11fa549du); f_11fa5640();
  /* 11fa549d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa54a0 jmp 0x11fa54f3 */
  goto L_11fa54f3;
L_11fa54a2:;
  /* 11fa54a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa54a4 mov dx, word ptr [0x11fc29ba] */
  DX = (r16((uint32_t)(0x11fc29ba)));
  /* 11fa54ab push edx */
  push32((uint32_t)(EDX));
  /* 11fa54ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa54ae mov ax, word ptr [0x11fc29b8] */
  AX = (r16((uint32_t)(0x11fc29b8)));
  /* 11fa54b4 push eax */
  push32((uint32_t)(EAX));
  /* 11fa54b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa54b7 mov cx, word ptr [0x11fc29b6] */
  CX = (r16((uint32_t)(0x11fc29b6)));
  /* 11fa54be push ecx */
  push32((uint32_t)(ECX));
  /* 11fa54bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa54c1 mov dx, word ptr [0x11fc29b4] */
  DX = (r16((uint32_t)(0x11fc29b4)));
  /* 11fa54c8 push edx */
  push32((uint32_t)(EDX));
  /* 11fa54c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa54cb mov ax, word ptr [0x11fc29b2] */
  AX = (r16((uint32_t)(0x11fc29b2)));
  /* 11fa54d1 push eax */
  push32((uint32_t)(EAX));
  /* 11fa54d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa54d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa54d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa54d8 mov cx, word ptr [0x11fc29ae] */
  CX = (r16((uint32_t)(0x11fc29ae)));
  /* 11fa54df push ecx */
  push32((uint32_t)(ECX));
  /* 11fa54e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa54e3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11fa54e6 push eax */
  push32((uint32_t)(EAX));
  /* 11fa54e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa54e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa54eb call 0x11fa5640 */
  push32(0x11fa54f0u); f_11fa5640();
  /* 11fa54f0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa54f3:;
  /* 11fa54f3 jmp 0x11fa553b */
  goto L_11fa553b;
L_11fa54f5:;
  /* 11fa54f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa54f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa54f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa54fb push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa54fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa54ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5501 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa5503 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fa5505 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5508 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11fa550b push edx */
  push32((uint32_t)(EDX));
  /* 11fa550c push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa550e push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa5510 call 0x11fa5640 */
  push32(0x11fa5515u); f_11fa5640();
  /* 11fa5515 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5518 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa551a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa551c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa551e push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa5520 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5522 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5524 push 5 */
  push32((uint32_t)(0x5u));
  /* 11fa5526 push 0xa */
  push32((uint32_t)(0xau));
  /* 11fa5528 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa552b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11fa552e push ecx */
  push32((uint32_t)(ECX));
  /* 11fa552f push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa5531 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5533 call 0x11fa5640 */
  push32(0x11fa5538u); f_11fa5640();
  /* 11fa5538 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa553b:;
  /* 11fa553b mov edx, dword ptr [0x11fc1e3c] */
  EDX = (r32((uint32_t)(0x11fc1e3c)));
  /* 11fa5541 cmp edx, dword ptr [0x11fc1e4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11fc1e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5547 jge 0x11fa5594 */
  if ((C.sf==C.of)) goto L_11fa5594;
  /* 11fa5549 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa554c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fa554f cmp ecx, dword ptr [0x11fc1e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11fc1e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5555 jl 0x11fa5565 */
  if ((C.sf!=C.of)) goto L_11fa5565;
  /* 11fa5557 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa555a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11fa555d cmp eax, dword ptr [0x11fc1e4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc1e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5563 jle 0x11fa556c */
  if ((C.zf||C.sf!=C.of)) goto L_11fa556c;
L_11fa5565:;
  /* 11fa5565 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa5567 jmp 0x11fa5636 */
  goto L_11fa5636;
L_11fa556c:;
  /* 11fa556c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa556f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11fa5572 cmp edx, dword ptr [0x11fc1e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11fc1e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5578 jle 0x11fa5592 */
  if ((C.zf||C.sf!=C.of)) goto L_11fa5592;
  /* 11fa557a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa557d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fa5580 cmp ecx, dword ptr [0x11fc1e4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11fc1e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5586 jge 0x11fa5592 */
  if ((C.sf==C.of)) goto L_11fa5592;
  /* 11fa5588 mov eax, 1 */
  EAX = (0x1u);
  /* 11fa558d jmp 0x11fa5636 */
  goto L_11fa5636;
L_11fa5592:;
  /* 11fa5592 jmp 0x11fa55d7 */
  goto L_11fa55d7;
L_11fa5594:;
  /* 11fa5594 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5597 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11fa559a cmp eax, dword ptr [0x11fc1e4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc1e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa55a0 jl 0x11fa55b0 */
  if ((C.sf!=C.of)) goto L_11fa55b0;
  /* 11fa55a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa55a5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11fa55a8 cmp edx, dword ptr [0x11fc1e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11fc1e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa55ae jle 0x11fa55b7 */
  if ((C.zf||C.sf!=C.of)) goto L_11fa55b7;
L_11fa55b0:;
  /* 11fa55b0 mov eax, 1 */
  EAX = (0x1u);
  /* 11fa55b5 jmp 0x11fa5636 */
  goto L_11fa5636;
L_11fa55b7:;
  /* 11fa55b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa55ba mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11fa55bd cmp ecx, dword ptr [0x11fc1e4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11fc1e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa55c3 jle 0x11fa55d7 */
  if ((C.zf||C.sf!=C.of)) goto L_11fa55d7;
  /* 11fa55c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa55c8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11fa55cb cmp eax, dword ptr [0x11fc1e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc1e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa55d1 jge 0x11fa55d7 */
  if ((C.sf==C.of)) goto L_11fa55d7;
  /* 11fa55d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa55d5 jmp 0x11fa5636 */
  goto L_11fa5636;
L_11fa55d7:;
  /* 11fa55d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa55da mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fa55dd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa55e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa55e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fa55e5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa55e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa55ea mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fa55ed imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa55f3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa55f5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa55fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fa55fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5601 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11fa5604 cmp edx, dword ptr [0x11fc1e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11fc1e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa560a jne 0x11fa5622 */
  if (!C.zf) goto L_11fa5622;
  /* 11fa560c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa560f cmp eax, dword ptr [0x11fc1e40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc1e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5615 jl 0x11fa561e */
  if ((C.sf!=C.of)) goto L_11fa561e;
  /* 11fa5617 mov eax, 1 */
  EAX = (0x1u);
  /* 11fa561c jmp 0x11fa5636 */
  goto L_11fa5636;
L_11fa561e:;
  /* 11fa561e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa5620 jmp 0x11fa5636 */
  goto L_11fa5636;
L_11fa5622:;
  /* 11fa5622 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa5625 cmp ecx, dword ptr [0x11fc1e50] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11fc1e50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa562b jge 0x11fa5634 */
  if ((C.sf==C.of)) goto L_11fa5634;
  /* 11fa562d mov eax, 1 */
  EAX = (0x1u);
  /* 11fa5632 jmp 0x11fa5636 */
  goto L_11fa5636;
L_11fa5634:;
  /* 11fa5634 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fa5636:;
  /* 11fa5636 mov esp, ebp */
  ESP = (EBP);
  /* 11fa5638 pop ebp */
  EBP = (pop32());
  /* 11fa5639 ret  */
  ESPCHK(0x11fa5340u, _esp0);
  ESP += 4; return;
}

/* FUN_10015640 @ 0x11fa5640 (504 bytes, 145 insns) */
void f_11fa5640(void) {
  FTRACE(0x11fa5640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa5640 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa5641 mov ebp, esp */
  EBP = (ESP);
  /* 11fa5643 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa5646 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa564a jne 0x11fa571c */
  if (!C.zf) goto L_11fa571c;
  /* 11fa5650 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa5653 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11fa5656 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa5658 jne 0x11fa5669 */
  if (!C.zf) goto L_11fa5669;
  /* 11fa565a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa565d mov edx, dword ptr [ecx*4 + 0x11fc1e5c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11fc1e5c)));
  /* 11fa5664 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fa5667 jmp 0x11fa5676 */
  goto L_11fa5676;
L_11fa5669:;
  /* 11fa5669 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa566c mov ecx, dword ptr [eax*4 + 0x11fc1e90] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11fc1e90)));
  /* 11fa5673 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11fa5676:;
  /* 11fa5676 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa5679 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa567c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fa567f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa5682 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa5685 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa568b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa568e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5690 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa5693 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa5696 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11fa5699 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11fa569d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fa569e mov ecx, 7 */
  ECX = (0x7u);
  /* 11fa56a3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fa56a5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fa56a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa56ab cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa56ae jge 0x11fa56c9 */
  if ((C.sf==C.of)) goto L_11fa56c9;
  /* 11fa56b0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fa56b3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa56b6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa56b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa56bc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa56bf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa56c2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa56c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa56c7 jmp 0x11fa56dd */
  goto L_11fa56dd;
L_11fa56c9:;
  /* 11fa56c9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fa56cc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa56cf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa56d2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa56d5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa56d8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa56da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fa56dd:;
  /* 11fa56dd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa56e1 jne 0x11fa571a */
  if (!C.zf) goto L_11fa571a;
  /* 11fa56e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa56e6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11fa56e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa56eb jne 0x11fa56fc */
  if (!C.zf) goto L_11fa56fc;
  /* 11fa56ed mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa56f0 mov eax, dword ptr [edx*4 + 0x11fc1e60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11fc1e60)));
  /* 11fa56f7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fa56fa jmp 0x11fa5709 */
  goto L_11fa5709;
L_11fa56fc:;
  /* 11fa56fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa56ff mov edx, dword ptr [ecx*4 + 0x11fc1e94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11fc1e94)));
  /* 11fa5706 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11fa5709:;
  /* 11fa5709 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa570c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa570f jle 0x11fa571a */
  if ((C.zf||C.sf!=C.of)) goto L_11fa571a;
  /* 11fa5711 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa5714 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa5717 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11fa571a:;
  /* 11fa571a jmp 0x11fa5751 */
  goto L_11fa5751;
L_11fa571c:;
  /* 11fa571c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa571f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11fa5722 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa5724 jne 0x11fa5735 */
  if (!C.zf) goto L_11fa5735;
  /* 11fa5726 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa5729 mov ecx, dword ptr [eax*4 + 0x11fc1e5c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11fc1e5c)));
  /* 11fa5730 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fa5733 jmp 0x11fa5742 */
  goto L_11fa5742;
L_11fa5735:;
  /* 11fa5735 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa5738 mov eax, dword ptr [edx*4 + 0x11fc1e90] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11fc1e90)));
  /* 11fa573f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11fa5742:;
  /* 11fa5742 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa5745 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fa5748 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa574b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa574e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11fa5751:;
  /* 11fa5751 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5755 jne 0x11fa5791 */
  if (!C.zf) goto L_11fa5791;
  /* 11fa5757 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa575a mov dword ptr [0x11fc1e3c], eax */
  w32((uint32_t)(0x11fc1e3c), (EAX));
  /* 11fa575f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11fa5762 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa5765 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11fa5768 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa576a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa576d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11fa5770 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5772 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa5778 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11fa577b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa577d mov dword ptr [0x11fc1e40], ecx */
  w32((uint32_t)(0x11fc1e40), (ECX));
  /* 11fa5783 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa5786 mov dword ptr [0x11fc1e38], edx */
  w32((uint32_t)(0x11fc1e38), (EDX));
  /* 11fa578c jmp 0x11fa5834 */
  goto L_11fa5834;
L_11fa5791:;
  /* 11fa5791 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa5794 mov dword ptr [0x11fc1e4c], eax */
  w32((uint32_t)(0x11fc1e4c), (EAX));
  /* 11fa5799 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11fa579c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa579f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11fa57a2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa57a4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa57a7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11fa57aa add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa57ac imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa57b2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11fa57b5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa57b7 mov dword ptr [0x11fc1e50], ecx */
  w32((uint32_t)(0x11fc1e50), (ECX));
  /* 11fa57bd mov edx, dword ptr [0x11fc1da8] */
  EDX = (r32((uint32_t)(0x11fc1da8)));
  /* 11fa57c3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fa57c9 mov eax, dword ptr [0x11fc1e50] */
  EAX = (r32((uint32_t)(0x11fc1e50)));
  /* 11fa57ce add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa57d0 mov dword ptr [0x11fc1e50], eax */
  w32((uint32_t)(0x11fc1e50), (EAX));
  /* 11fa57d5 cmp dword ptr [0x11fc1e50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc1e50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa57dc jge 0x11fa5801 */
  if ((C.sf==C.of)) goto L_11fa5801;
  /* 11fa57de mov ecx, dword ptr [0x11fc1e50] */
  ECX = (r32((uint32_t)(0x11fc1e50)));
  /* 11fa57e4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa57ea mov dword ptr [0x11fc1e50], ecx */
  w32((uint32_t)(0x11fc1e50), (ECX));
  /* 11fa57f0 mov edx, dword ptr [0x11fc1e4c] */
  EDX = (r32((uint32_t)(0x11fc1e4c)));
  /* 11fa57f6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa57f9 mov dword ptr [0x11fc1e4c], edx */
  w32((uint32_t)(0x11fc1e4c), (EDX));
  /* 11fa57ff jmp 0x11fa582b */
  goto L_11fa582b;
L_11fa5801:;
  /* 11fa5801 cmp dword ptr [0x11fc1e50], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11fc1e50))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa580b jl 0x11fa582b */
  if ((C.sf!=C.of)) goto L_11fa582b;
  /* 11fa580d mov eax, dword ptr [0x11fc1e50] */
  EAX = (r32((uint32_t)(0x11fc1e50)));
  /* 11fa5812 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa5817 mov dword ptr [0x11fc1e50], eax */
  w32((uint32_t)(0x11fc1e50), (EAX));
  /* 11fa581c mov ecx, dword ptr [0x11fc1e4c] */
  ECX = (r32((uint32_t)(0x11fc1e4c)));
  /* 11fa5822 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5825 mov dword ptr [0x11fc1e4c], ecx */
  w32((uint32_t)(0x11fc1e4c), (ECX));
L_11fa582b:;
  /* 11fa582b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa582e mov dword ptr [0x11fc1e48], edx */
  w32((uint32_t)(0x11fc1e48), (EDX));
L_11fa5834:;
  /* 11fa5834 mov esp, ebp */
  ESP = (EBP);
  /* 11fa5836 pop ebp */
  EBP = (pop32());
  /* 11fa5837 ret  */
  ESPCHK(0x11fa5640u, _esp0);
  ESP += 4; return;
}

/* FUN_10015840 @ 0x11fa5840 (382 bytes, 135 insns) */
void f_11fa5840(void) {
  FTRACE(0x11fa5840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa5840 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa5841 mov ebp, esp */
  EBP = (ESP);
  /* 11fa5843 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fa5845 push 0x11fbeab8 */
  push32((uint32_t)(0x11fbeab8u));
  /* 11fa584a push 0x11f9f508 */
  push32((uint32_t)(0x11f9f508u));
  /* 11fa584f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11fa5855 push eax */
  push32((uint32_t)(EAX));
  /* 11fa5856 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11fa585d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5860 push ebx */
  push32((uint32_t)(EBX));
  /* 11fa5861 push esi */
  push32((uint32_t)(ESI));
  /* 11fa5862 push edi */
  push32((uint32_t)(EDI));
  /* 11fa5863 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fa5866 cmp dword ptr [0x11fc2a1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa586d jne 0x11fa58b2 */
  if (!C.zf) goto L_11fa58b2;
  /* 11fa586f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5871 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5873 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa5875 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5877 call dword ptr [0x11fc52d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52d4))), 0x11fa587du);
  /* 11fa587d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa587f je 0x11fa588d */
  if (C.zf) goto L_11fa588d;
  /* 11fa5881 mov dword ptr [0x11fc2a1c], 1 */
  w32((uint32_t)(0x11fc2a1c), (0x1u));
  /* 11fa588b jmp 0x11fa58b2 */
  goto L_11fa58b2;
L_11fa588d:;
  /* 11fa588d push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa588f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5891 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa5893 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5895 call dword ptr [0x11fc52ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52ec))), 0x11fa589bu);
  /* 11fa589b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa589d je 0x11fa58ab */
  if (C.zf) goto L_11fa58ab;
  /* 11fa589f mov dword ptr [0x11fc2a1c], 2 */
  w32((uint32_t)(0x11fc2a1c), (0x2u));
  /* 11fa58a9 jmp 0x11fa58b2 */
  goto L_11fa58b2;
L_11fa58ab:;
  /* 11fa58ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa58ad jmp 0x11fa59c1 */
  goto L_11fa59c1;
L_11fa58b2:;
  /* 11fa58b2 cmp dword ptr [0x11fc2a1c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa58b9 jne 0x11fa58d6 */
  if (!C.zf) goto L_11fa58d6;
  /* 11fa58bb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa58be push eax */
  push32((uint32_t)(EAX));
  /* 11fa58bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa58c2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa58c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa58c6 push edx */
  push32((uint32_t)(EDX));
  /* 11fa58c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa58ca push eax */
  push32((uint32_t)(EAX));
  /* 11fa58cb call dword ptr [0x11fc52d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52d4))), 0x11fa58d1u);
  /* 11fa58d1 jmp 0x11fa59c1 */
  goto L_11fa59c1;
L_11fa58d6:;
  /* 11fa58d6 cmp dword ptr [0x11fc2a1c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a1c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa58dd jne 0x11fa59bf */
  if (!C.zf) goto L_11fa59bf;
  /* 11fa58e3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa58e7 jne 0x11fa58f2 */
  if (!C.zf) goto L_11fa58f2;
  /* 11fa58e9 mov ecx, dword ptr [0x11fc28d0] */
  ECX = (r32((uint32_t)(0x11fc28d0)));
  /* 11fa58ef mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11fa58f2:;
  /* 11fa58f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa58f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa58f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa58f9 push edx */
  push32((uint32_t)(EDX));
  /* 11fa58fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa58fd push eax */
  push32((uint32_t)(EAX));
  /* 11fa58fe call dword ptr [0x11fc52ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52ec))), 0x11fa5904u);
  /* 11fa5904 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11fa5907 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa590b jne 0x11fa5914 */
  if (!C.zf) goto L_11fa5914;
  /* 11fa590d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa590f jmp 0x11fa59c1 */
  goto L_11fa59c1;
L_11fa5914:;
  /* 11fa5914 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fa591b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fa591e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5921 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11fa5923 call 0x11f995a0 */
  push32(0x11fa5928u); f_11f995a0();
  /* 11fa5928 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11fa592b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fa592e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fa5931 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11fa5934 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fa593b jmp 0x11fa5954 */
  goto L_11fa5954;
  /* 11fa593d mov eax, 1 */
  EAX = (0x1u);
  /* 11fa5942 ret  */
  ESPCHK(0x11fa5840u, _esp0);
  ESP += 4; return;
  /* 11fa5943 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa5946 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11fa594d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11fa5954:;
  /* 11fa5954 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5958 jne 0x11fa595e */
  if (!C.zf) goto L_11fa595e;
  /* 11fa595a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa595c jmp 0x11fa59c1 */
  goto L_11fa59c1;
L_11fa595e:;
  /* 11fa595e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fa5961 push edx */
  push32((uint32_t)(EDX));
  /* 11fa5962 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fa5965 push eax */
  push32((uint32_t)(EAX));
  /* 11fa5966 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa5969 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa596a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa596d push edx */
  push32((uint32_t)(EDX));
  /* 11fa596e call dword ptr [0x11fc52ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52ec))), 0x11fa5974u);
  /* 11fa5974 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa5976 jne 0x11fa597c */
  if (!C.zf) goto L_11fa597c;
  /* 11fa5978 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa597a jmp 0x11fa59c1 */
  goto L_11fa59c1;
L_11fa597c:;
  /* 11fa597c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5980 jne 0x11fa599d */
  if (!C.zf) goto L_11fa599d;
  /* 11fa5982 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5984 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5986 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fa5988 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fa598b push eax */
  push32((uint32_t)(EAX));
  /* 11fa598c push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa598e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa5991 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5992 call dword ptr [0x11fc531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc531c))), 0x11fa5998u);
  /* 11fa5998 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11fa599b jmp 0x11fa59ba */
  goto L_11fa59ba;
L_11fa599d:;
  /* 11fa599d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa59a0 push edx */
  push32((uint32_t)(EDX));
  /* 11fa59a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa59a4 push eax */
  push32((uint32_t)(EAX));
  /* 11fa59a5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fa59a7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fa59aa push ecx */
  push32((uint32_t)(ECX));
  /* 11fa59ab push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa59ad mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa59b0 push edx */
  push32((uint32_t)(EDX));
  /* 11fa59b1 call dword ptr [0x11fc531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc531c))), 0x11fa59b7u);
  /* 11fa59b7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11fa59ba:;
  /* 11fa59ba mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fa59bd jmp 0x11fa59c1 */
  goto L_11fa59c1;
L_11fa59bf:;
  /* 11fa59bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fa59c1:;
  /* 11fa59c1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11fa59c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa59c7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11fa59ce pop edi */
  EDI = (pop32());
  /* 11fa59cf pop esi */
  ESI = (pop32());
  /* 11fa59d0 pop ebx */
  EBX = (pop32());
  /* 11fa59d1 mov esp, ebp */
  ESP = (EBP);
  /* 11fa59d3 pop ebp */
  EBP = (pop32());
  /* 11fa59d4 ret  */
  ESPCHK(0x11fa5840u, _esp0);
  ESP += 4; return;
}

/* FUN_100159e0 @ 0x11fa59e0 (398 bytes, 140 insns) */
void f_11fa59e0(void) {
  FTRACE(0x11fa59e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa59e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa59e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa59e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fa59e5 push 0x11fbeac8 */
  push32((uint32_t)(0x11fbeac8u));
  /* 11fa59ea push 0x11f9f508 */
  push32((uint32_t)(0x11f9f508u));
  /* 11fa59ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11fa59f5 push eax */
  push32((uint32_t)(EAX));
  /* 11fa59f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11fa59fd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5a00 push ebx */
  push32((uint32_t)(EBX));
  /* 11fa5a01 push esi */
  push32((uint32_t)(ESI));
  /* 11fa5a02 push edi */
  push32((uint32_t)(EDI));
  /* 11fa5a03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fa5a06 cmp dword ptr [0x11fc2a20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5a0d jne 0x11fa5a52 */
  if (!C.zf) goto L_11fa5a52;
  /* 11fa5a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5a11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5a13 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa5a15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5a17 call dword ptr [0x11fc52d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52d4))), 0x11fa5a1du);
  /* 11fa5a1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa5a1f je 0x11fa5a2d */
  if (C.zf) goto L_11fa5a2d;
  /* 11fa5a21 mov dword ptr [0x11fc2a20], 1 */
  w32((uint32_t)(0x11fc2a20), (0x1u));
  /* 11fa5a2b jmp 0x11fa5a52 */
  goto L_11fa5a52;
L_11fa5a2d:;
  /* 11fa5a2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5a31 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa5a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5a35 call dword ptr [0x11fc52ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52ec))), 0x11fa5a3bu);
  /* 11fa5a3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa5a3d je 0x11fa5a4b */
  if (C.zf) goto L_11fa5a4b;
  /* 11fa5a3f mov dword ptr [0x11fc2a20], 2 */
  w32((uint32_t)(0x11fc2a20), (0x2u));
  /* 11fa5a49 jmp 0x11fa5a52 */
  goto L_11fa5a52;
L_11fa5a4b:;
  /* 11fa5a4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa5a4d jmp 0x11fa5b71 */
  goto L_11fa5b71;
L_11fa5a52:;
  /* 11fa5a52 cmp dword ptr [0x11fc2a20], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5a59 jne 0x11fa5a76 */
  if (!C.zf) goto L_11fa5a76;
  /* 11fa5a5b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa5a5e push eax */
  push32((uint32_t)(EAX));
  /* 11fa5a5f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa5a62 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5a63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa5a66 push edx */
  push32((uint32_t)(EDX));
  /* 11fa5a67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5a6a push eax */
  push32((uint32_t)(EAX));
  /* 11fa5a6b call dword ptr [0x11fc52ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52ec))), 0x11fa5a71u);
  /* 11fa5a71 jmp 0x11fa5b71 */
  goto L_11fa5b71;
L_11fa5a76:;
  /* 11fa5a76 cmp dword ptr [0x11fc2a20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5a7d jne 0x11fa5b6f */
  if (!C.zf) goto L_11fa5b6f;
  /* 11fa5a83 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5a87 jne 0x11fa5a92 */
  if (!C.zf) goto L_11fa5a92;
  /* 11fa5a89 mov ecx, dword ptr [0x11fc28d0] */
  ECX = (r32((uint32_t)(0x11fc28d0)));
  /* 11fa5a8f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11fa5a92:;
  /* 11fa5a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5a94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5a96 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa5a99 push edx */
  push32((uint32_t)(EDX));
  /* 11fa5a9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5a9d push eax */
  push32((uint32_t)(EAX));
  /* 11fa5a9e call dword ptr [0x11fc52d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52d4))), 0x11fa5aa4u);
  /* 11fa5aa4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11fa5aa7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5aab jne 0x11fa5ab4 */
  if (!C.zf) goto L_11fa5ab4;
  /* 11fa5aad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa5aaf jmp 0x11fa5b71 */
  goto L_11fa5b71;
L_11fa5ab4:;
  /* 11fa5ab4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fa5abb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fa5abe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fa5ac0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5ac3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11fa5ac5 call 0x11f995a0 */
  push32(0x11fa5acau); f_11f995a0();
  /* 11fa5aca mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11fa5acd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fa5ad0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fa5ad3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11fa5ad6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fa5add jmp 0x11fa5af6 */
  goto L_11fa5af6;
  /* 11fa5adf mov eax, 1 */
  EAX = (0x1u);
  /* 11fa5ae4 ret  */
  ESPCHK(0x11fa59e0u, _esp0);
  ESP += 4; return;
  /* 11fa5ae5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa5ae8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11fa5aef mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11fa5af6:;
  /* 11fa5af6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5afa jne 0x11fa5b00 */
  if (!C.zf) goto L_11fa5b00;
  /* 11fa5afc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa5afe jmp 0x11fa5b71 */
  goto L_11fa5b71;
L_11fa5b00:;
  /* 11fa5b00 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fa5b03 push edx */
  push32((uint32_t)(EDX));
  /* 11fa5b04 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fa5b07 push eax */
  push32((uint32_t)(EAX));
  /* 11fa5b08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa5b0b push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5b0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5b0f push edx */
  push32((uint32_t)(EDX));
  /* 11fa5b10 call dword ptr [0x11fc52d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52d4))), 0x11fa5b16u);
  /* 11fa5b16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa5b18 jne 0x11fa5b1e */
  if (!C.zf) goto L_11fa5b1e;
  /* 11fa5b1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa5b1c jmp 0x11fa5b71 */
  goto L_11fa5b71;
L_11fa5b1e:;
  /* 11fa5b1e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5b22 jne 0x11fa5b46 */
  if (!C.zf) goto L_11fa5b46;
  /* 11fa5b24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5b2c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fa5b2e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fa5b31 push eax */
  push32((uint32_t)(EAX));
  /* 11fa5b32 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11fa5b37 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa5b3a push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5b3b call dword ptr [0x11fc5368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5368))), 0x11fa5b41u);
  /* 11fa5b41 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11fa5b44 jmp 0x11fa5b6a */
  goto L_11fa5b6a;
L_11fa5b46:;
  /* 11fa5b46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5b4a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa5b4d push edx */
  push32((uint32_t)(EDX));
  /* 11fa5b4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa5b51 push eax */
  push32((uint32_t)(EAX));
  /* 11fa5b52 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fa5b54 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fa5b57 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5b58 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11fa5b5d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa5b60 push edx */
  push32((uint32_t)(EDX));
  /* 11fa5b61 call dword ptr [0x11fc5368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5368))), 0x11fa5b67u);
  /* 11fa5b67 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11fa5b6a:;
  /* 11fa5b6a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fa5b6d jmp 0x11fa5b71 */
  goto L_11fa5b71;
L_11fa5b6f:;
  /* 11fa5b6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fa5b71:;
  /* 11fa5b71 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11fa5b74 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa5b77 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11fa5b7e pop edi */
  EDI = (pop32());
  /* 11fa5b7f pop esi */
  ESI = (pop32());
  /* 11fa5b80 pop ebx */
  EBX = (pop32());
  /* 11fa5b81 mov esp, ebp */
  ESP = (EBP);
  /* 11fa5b83 pop ebp */
  EBP = (pop32());
  /* 11fa5b84 ret  */
  ESPCHK(0x11fa59e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b90 @ 0x11fa5b90 (11 bytes, 6 insns) */
void f_11fa5b90(void) {
  FTRACE(0x11fa5b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa5b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa5b91 mov ebp, esp */
  EBP = (ESP);
  /* 11fa5b93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5b96 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5b99 pop ebp */
  EBP = (pop32());
  /* 11fa5b9a ret  */
  ESPCHK(0x11fa5b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ba0 @ 0x11fa5ba0 (147 bytes, 43 insns) */
void f_11fa5ba0(void) {
  FTRACE(0x11fa5ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa5ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa5ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa5ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5ba4 cmp dword ptr [0x11fc28c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc28c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5bab jne 0x11fa5bc7 */
  if (!C.zf) goto L_11fa5bc7;
  /* 11fa5bad cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5bb1 jl 0x11fa5bc2 */
  if ((C.sf!=C.of)) goto L_11fa5bc2;
  /* 11fa5bb3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5bb7 jg 0x11fa5bc2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa5bc2;
  /* 11fa5bb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5bbc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5bbf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11fa5bc2:;
  /* 11fa5bc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5bc5 jmp 0x11fa5c2f */
  goto L_11fa5c2f;
L_11fa5bc7:;
  /* 11fa5bc7 push 0x11fc2a4c */
  push32((uint32_t)(0x11fc2a4cu));
  /* 11fa5bcc call dword ptr [0x11fc539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc539c))), 0x11fa5bd2u);
  /* 11fa5bd2 cmp dword ptr [0x11fc2a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5bd9 je 0x11fa5bf9 */
  if (C.zf) goto L_11fa5bf9;
  /* 11fa5bdb push 0x11fc2a4c */
  push32((uint32_t)(0x11fc2a4cu));
  /* 11fa5be0 call dword ptr [0x11fc538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc538c))), 0x11fa5be6u);
  /* 11fa5be6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fa5be8 call 0x11f99e00 */
  push32(0x11fa5bedu); f_11f99e00();
  /* 11fa5bed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5bf0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fa5bf7 jmp 0x11fa5c00 */
  goto L_11fa5c00;
L_11fa5bf9:;
  /* 11fa5bf9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fa5c00:;
  /* 11fa5c00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5c03 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5c04 call 0x11fa5c40 */
  push32(0x11fa5c09u); f_11fa5c40();
  /* 11fa5c09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5c0c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fa5c0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5c13 je 0x11fa5c21 */
  if (C.zf) goto L_11fa5c21;
  /* 11fa5c15 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fa5c17 call 0x11f99ea0 */
  push32(0x11fa5c1cu); f_11f99ea0();
  /* 11fa5c1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5c1f jmp 0x11fa5c2c */
  goto L_11fa5c2c;
L_11fa5c21:;
  /* 11fa5c21 push 0x11fc2a4c */
  push32((uint32_t)(0x11fc2a4cu));
  /* 11fa5c26 call dword ptr [0x11fc538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc538c))), 0x11fa5c2cu);
L_11fa5c2c:;
  /* 11fa5c2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11fa5c2f:;
  /* 11fa5c2f mov esp, ebp */
  ESP = (EBP);
  /* 11fa5c31 pop ebp */
  EBP = (pop32());
  /* 11fa5c32 ret  */
  ESPCHK(0x11fa5ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c40 @ 0x11fa5c40 (299 bytes, 91 insns) */
void f_11fa5c40(void) {
  FTRACE(0x11fa5c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa5c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa5c41 mov ebp, esp */
  EBP = (ESP);
  /* 11fa5c43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa5c46 cmp dword ptr [0x11fc28c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc28c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5c4d jne 0x11fa5c6c */
  if (!C.zf) goto L_11fa5c6c;
  /* 11fa5c4f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5c53 jl 0x11fa5c64 */
  if ((C.sf!=C.of)) goto L_11fa5c64;
  /* 11fa5c55 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5c59 jg 0x11fa5c64 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa5c64;
  /* 11fa5c5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5c5e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5c61 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11fa5c64:;
  /* 11fa5c64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5c67 jmp 0x11fa5d67 */
  goto L_11fa5d67;
L_11fa5c6c:;
  /* 11fa5c6c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5c73 jge 0x11fa5cb3 */
  if ((C.sf==C.of)) goto L_11fa5cb3;
  /* 11fa5c75 cmp dword ptr [0x11fc0eb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11fc0eb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5c7c jle 0x11fa5c91 */
  if ((C.zf||C.sf!=C.of)) goto L_11fa5c91;
  /* 11fa5c7e push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa5c80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5c83 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5c84 call 0x11f9c410 */
  push32(0x11fa5c89u); f_11f9c410();
  /* 11fa5c89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5c8c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fa5c8f jmp 0x11fa5ca5 */
  goto L_11fa5ca5;
L_11fa5c91:;
  /* 11fa5c91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5c94 mov eax, dword ptr [0x11fc0ca8] */
  EAX = (r32((uint32_t)(0x11fc0ca8)));
  /* 11fa5c99 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa5c9b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11fa5c9f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fa5ca2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11fa5ca5:;
  /* 11fa5ca5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5ca9 jne 0x11fa5cb3 */
  if (!C.zf) goto L_11fa5cb3;
  /* 11fa5cab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5cae jmp 0x11fa5d67 */
  goto L_11fa5d67;
L_11fa5cb3:;
  /* 11fa5cb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5cb6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11fa5cb9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fa5cbf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fa5cc5 mov eax, dword ptr [0x11fc0ca8] */
  EAX = (r32((uint32_t)(0x11fc0ca8)));
  /* 11fa5cca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa5ccc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11fa5cd0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11fa5cd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa5cd8 je 0x11fa5cfc */
  if (C.zf) goto L_11fa5cfc;
  /* 11fa5cda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5cdd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11fa5ce0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fa5ce6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11fa5ce9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11fa5cec mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11fa5cef mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11fa5cf3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11fa5cfa jmp 0x11fa5d0d */
  goto L_11fa5d0d;
L_11fa5cfc:;
  /* 11fa5cfc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11fa5cff mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11fa5d02 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11fa5d06 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11fa5d0d:;
  /* 11fa5d0d push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa5d0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5d11 push 3 */
  push32((uint32_t)(0x3u));
  /* 11fa5d13 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11fa5d16 push edx */
  push32((uint32_t)(EDX));
  /* 11fa5d17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa5d1a push eax */
  push32((uint32_t)(EAX));
  /* 11fa5d1b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11fa5d1e push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5d1f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11fa5d24 mov edx, dword ptr [0x11fc28c0] */
  EDX = (r32((uint32_t)(0x11fc28c0)));
  /* 11fa5d2a push edx */
  push32((uint32_t)(EDX));
  /* 11fa5d2b call 0x11f9e7f0 */
  push32(0x11fa5d30u); f_11f9e7f0();
  /* 11fa5d30 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5d33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa5d36 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5d3a jne 0x11fa5d41 */
  if (!C.zf) goto L_11fa5d41;
  /* 11fa5d3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5d3f jmp 0x11fa5d67 */
  goto L_11fa5d67;
L_11fa5d41:;
  /* 11fa5d41 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5d45 jne 0x11fa5d51 */
  if (!C.zf) goto L_11fa5d51;
  /* 11fa5d47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa5d4a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa5d4f jmp 0x11fa5d67 */
  goto L_11fa5d67;
L_11fa5d51:;
  /* 11fa5d51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa5d54 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa5d59 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11fa5d5c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fa5d62 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11fa5d65 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11fa5d67:;
  /* 11fa5d67 mov esp, ebp */
  ESP = (EBP);
  /* 11fa5d69 pop ebp */
  EBP = (pop32());
  /* 11fa5d6a ret  */
  ESPCHK(0x11fa5c40u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11fa5d70 (52 bytes, 19 insns) */
void f_11fa5d70(void) {
  FTRACE(0x11fa5d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa5d70 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11fa5d74 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11fa5d78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa5d7a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11fa5d7e jne 0x11fa5d89 */
  if (!C.zf) goto L_11fa5d89;
  /* 11fa5d80 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11fa5d84 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11fa5d86 ret 0x10 */
  ESPCHK(0x11fa5d70u, _esp0);
  ESP += 20; return;
L_11fa5d89:;
  /* 11fa5d89 push ebx */
  push32((uint32_t)(EBX));
  /* 11fa5d8a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11fa5d8c mov ebx, eax */
  EBX = (EAX);
  /* 11fa5d8e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11fa5d92 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11fa5d96 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5d98 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11fa5d9c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11fa5d9e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5da0 pop ebx */
  EBX = (pop32());
  /* 11fa5da1 ret 0x10 */
  ESPCHK(0x11fa5d70u, _esp0);
  ESP += 20; return;
}

/* FUN_10015db0 @ 0x11fa5db0 (46 bytes, 18 insns) */
void f_11fa5db0(void) {
  FTRACE(0x11fa5db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa5db0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa5db1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa5db3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5db4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11fa5db6 call 0x11f99e00 */
  push32(0x11fa5dbbu); f_11f99e00();
  /* 11fa5dbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5dbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5dc1 push eax */
  push32((uint32_t)(EAX));
  /* 11fa5dc2 call 0x11fa5de0 */
  push32(0x11fa5dc7u); f_11fa5de0();
  /* 11fa5dc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5dca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa5dcd push 0xc */
  push32((uint32_t)(0xcu));
  /* 11fa5dcf call 0x11f99ea0 */
  push32(0x11fa5dd4u); f_11f99ea0();
  /* 11fa5dd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5dd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa5dda mov esp, ebp */
  ESP = (EBP);
  /* 11fa5ddc pop ebp */
  EBP = (pop32());
  /* 11fa5ddd ret  */
  ESPCHK(0x11fa5db0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11fa5de0 (198 bytes, 69 insns) */
void f_11fa5de0(void) {
  FTRACE(0x11fa5de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa5de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa5de1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa5de3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa5de6 mov eax, dword ptr [0x11fc26e0] */
  EAX = (r32((uint32_t)(0x11fc26e0)));
  /* 11fa5deb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fa5dee cmp dword ptr [0x11fc41e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc41e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5df5 jne 0x11fa5dfe */
  if (!C.zf) goto L_11fa5dfe;
  /* 11fa5df7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa5df9 jmp 0x11fa5ea2 */
  goto L_11fa5ea2;
L_11fa5dfe:;
  /* 11fa5dfe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5e02 jne 0x11fa5e26 */
  if (!C.zf) goto L_11fa5e26;
  /* 11fa5e04 cmp dword ptr [0x11fc26e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc26e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5e0b je 0x11fa5e26 */
  if (C.zf) goto L_11fa5e26;
  /* 11fa5e0d call 0x11fa5f00 */
  push32(0x11fa5e12u); f_11fa5f00();
  /* 11fa5e12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa5e14 je 0x11fa5e1d */
  if (C.zf) goto L_11fa5e1d;
  /* 11fa5e16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa5e18 jmp 0x11fa5ea2 */
  goto L_11fa5ea2;
L_11fa5e1d:;
  /* 11fa5e1d mov ecx, dword ptr [0x11fc26e0] */
  ECX = (r32((uint32_t)(0x11fc26e0)));
  /* 11fa5e23 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11fa5e26:;
  /* 11fa5e26 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5e2a je 0x11fa5ea0 */
  if (C.zf) goto L_11fa5ea0;
  /* 11fa5e2c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5e30 je 0x11fa5ea0 */
  if (C.zf) goto L_11fa5ea0;
  /* 11fa5e32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5e35 push edx */
  push32((uint32_t)(EDX));
  /* 11fa5e36 call 0x11f99230 */
  push32(0x11fa5e3bu); f_11f99230();
  /* 11fa5e3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5e3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fa5e41:;
  /* 11fa5e41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa5e44 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5e47 je 0x11fa5ea0 */
  if (C.zf) goto L_11fa5ea0;
  /* 11fa5e49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa5e4c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa5e4e push edx */
  push32((uint32_t)(EDX));
  /* 11fa5e4f call 0x11f99230 */
  push32(0x11fa5e54u); f_11f99230();
  /* 11fa5e54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5e57 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5e5a jbe 0x11fa5e95 */
  if ((C.cf||C.zf)) goto L_11fa5e95;
  /* 11fa5e5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa5e5f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fa5e61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa5e64 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11fa5e68 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5e6b jne 0x11fa5e95 */
  if (!C.zf) goto L_11fa5e95;
  /* 11fa5e6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa5e70 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5e71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5e74 push edx */
  push32((uint32_t)(EDX));
  /* 11fa5e75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa5e78 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fa5e7a push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5e7b call 0x11fa5eb0 */
  push32(0x11fa5e80u); f_11fa5eb0();
  /* 11fa5e80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5e83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa5e85 jne 0x11fa5e95 */
  if (!C.zf) goto L_11fa5e95;
  /* 11fa5e87 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa5e8a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fa5e8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa5e8f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11fa5e93 jmp 0x11fa5ea2 */
  goto L_11fa5ea2;
L_11fa5e95:;
  /* 11fa5e95 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa5e98 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5e9b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fa5e9e jmp 0x11fa5e41 */
  goto L_11fa5e41;
L_11fa5ea0:;
  /* 11fa5ea0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fa5ea2:;
  /* 11fa5ea2 mov esp, ebp */
  ESP = (EBP);
  /* 11fa5ea4 pop ebp */
  EBP = (pop32());
  /* 11fa5ea5 ret  */
  ESPCHK(0x11fa5de0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11fa5eb0 (79 bytes, 32 insns) */
void f_11fa5eb0(void) {
  FTRACE(0x11fa5eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa5eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa5eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa5eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5eb4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5eb8 jne 0x11fa5ebe */
  if (!C.zf) goto L_11fa5ebe;
  /* 11fa5eba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa5ebc jmp 0x11fa5efb */
  goto L_11fa5efb;
L_11fa5ebe:;
  /* 11fa5ebe mov eax, dword ptr [0x11fc3da4] */
  EAX = (r32((uint32_t)(0x11fc3da4)));
  /* 11fa5ec3 push eax */
  push32((uint32_t)(EAX));
  /* 11fa5ec4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa5ec7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5ec8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa5ecb push edx */
  push32((uint32_t)(EDX));
  /* 11fa5ecc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa5ecf push eax */
  push32((uint32_t)(EAX));
  /* 11fa5ed0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa5ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5ed4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa5ed6 mov edx, dword ptr [0x11fc4044] */
  EDX = (r32((uint32_t)(0x11fc4044)));
  /* 11fa5edc push edx */
  push32((uint32_t)(EDX));
  /* 11fa5edd call 0x11fa5fb0 */
  push32(0x11fa5ee2u); f_11fa5fb0();
  /* 11fa5ee2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5ee5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa5ee8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5eec jne 0x11fa5ef5 */
  if (!C.zf) goto L_11fa5ef5;
  /* 11fa5eee mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11fa5ef3 jmp 0x11fa5efb */
  goto L_11fa5efb;
L_11fa5ef5:;
  /* 11fa5ef5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa5ef8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11fa5efb:;
  /* 11fa5efb mov esp, ebp */
  ESP = (EBP);
  /* 11fa5efd pop ebp */
  EBP = (pop32());
  /* 11fa5efe ret  */
  ESPCHK(0x11fa5eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f00 @ 0x11fa5f00 (174 bytes, 66 insns) */
void f_11fa5f00(void) {
  FTRACE(0x11fa5f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa5f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa5f01 mov ebp, esp */
  EBP = (ESP);
  /* 11fa5f03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa5f06 mov eax, dword ptr [0x11fc26e8] */
  EAX = (r32((uint32_t)(0x11fc26e8)));
  /* 11fa5f0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fa5f0e:;
  /* 11fa5f0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa5f11 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5f14 je 0x11fa5fa8 */
  if (C.zf) goto L_11fa5fa8;
  /* 11fa5f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5f1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5f1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5f20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5f22 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fa5f24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa5f27 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fa5f29 push eax */
  push32((uint32_t)(EAX));
  /* 11fa5f2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5f2c push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa5f2e call dword ptr [0x11fc5368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5368))), 0x11fa5f34u);
  /* 11fa5f34 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fa5f37 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5f3b jne 0x11fa5f42 */
  if (!C.zf) goto L_11fa5f42;
  /* 11fa5f3d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa5f40 jmp 0x11fa5faa */
  goto L_11fa5faa;
L_11fa5f42:;
  /* 11fa5f42 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11fa5f44 push 0x11fbead4 */
  push32((uint32_t)(0x11fbead4u));
  /* 11fa5f49 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa5f4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa5f4e push ecx */
  push32((uint32_t)(ECX));
  /* 11fa5f4f call 0x11f96400 */
  push32(0x11fa5f54u); f_11f96400();
  /* 11fa5f54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5f57 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fa5f5a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5f5e jne 0x11fa5f65 */
  if (!C.zf) goto L_11fa5f65;
  /* 11fa5f60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa5f63 jmp 0x11fa5faa */
  goto L_11fa5faa;
L_11fa5f65:;
  /* 11fa5f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5f67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5f69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa5f6c push edx */
  push32((uint32_t)(EDX));
  /* 11fa5f6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa5f70 push eax */
  push32((uint32_t)(EAX));
  /* 11fa5f71 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fa5f73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa5f76 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa5f78 push edx */
  push32((uint32_t)(EDX));
  /* 11fa5f79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5f7b push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa5f7d call dword ptr [0x11fc5368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5368))), 0x11fa5f83u);
  /* 11fa5f83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa5f85 jne 0x11fa5f8c */
  if (!C.zf) goto L_11fa5f8c;
  /* 11fa5f87 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa5f8a jmp 0x11fa5faa */
  goto L_11fa5faa;
L_11fa5f8c:;
  /* 11fa5f8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5f8e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa5f91 push eax */
  push32((uint32_t)(EAX));
  /* 11fa5f92 call 0x11fa6400 */
  push32(0x11fa5f97u); f_11fa6400();
  /* 11fa5f97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5f9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa5f9d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5fa0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fa5fa3 jmp 0x11fa5f0e */
  goto L_11fa5f0e;
L_11fa5fa8:;
  /* 11fa5fa8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fa5faa:;
  /* 11fa5faa mov esp, ebp */
  ESP = (EBP);
  /* 11fa5fac pop ebp */
  EBP = (pop32());
  /* 11fa5fad ret  */
  ESPCHK(0x11fa5f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10015fb0 @ 0x11fa5fb0 (970 bytes, 340 insns) */
void f_11fa5fb0(void) {
  FTRACE(0x11fa5fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa5fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa5fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa5fb3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fa5fb5 push 0x11fbeb28 */
  push32((uint32_t)(0x11fbeb28u));
  /* 11fa5fba push 0x11f9f508 */
  push32((uint32_t)(0x11f9f508u));
  /* 11fa5fbf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11fa5fc5 push eax */
  push32((uint32_t)(EAX));
  /* 11fa5fc6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11fa5fcd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa5fd0 push ebx */
  push32((uint32_t)(EBX));
  /* 11fa5fd1 push esi */
  push32((uint32_t)(ESI));
  /* 11fa5fd2 push edi */
  push32((uint32_t)(EDI));
  /* 11fa5fd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fa5fd6 cmp dword ptr [0x11fc2a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa5fdd jne 0x11fa6036 */
  if (!C.zf) goto L_11fa6036;
  /* 11fa5fdf push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa5fe1 push 0x11fbe180 */
  push32((uint32_t)(0x11fbe180u));
  /* 11fa5fe6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa5fe8 push 0x11fbe180 */
  push32((uint32_t)(0x11fbe180u));
  /* 11fa5fed push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5fef push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa5ff1 call dword ptr [0x11fc52d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52d0))), 0x11fa5ff7u);
  /* 11fa5ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa5ff9 je 0x11fa6007 */
  if (C.zf) goto L_11fa6007;
  /* 11fa5ffb mov dword ptr [0x11fc2a24], 1 */
  w32((uint32_t)(0x11fc2a24), (0x1u));
  /* 11fa6005 jmp 0x11fa6036 */
  goto L_11fa6036;
L_11fa6007:;
  /* 11fa6007 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa6009 push 0x11fbe17c */
  push32((uint32_t)(0x11fbe17cu));
  /* 11fa600e push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa6010 push 0x11fbe17c */
  push32((uint32_t)(0x11fbe17cu));
  /* 11fa6015 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa6017 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa6019 call dword ptr [0x11fc52dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52dc))), 0x11fa601fu);
  /* 11fa601f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa6021 je 0x11fa602f */
  if (C.zf) goto L_11fa602f;
  /* 11fa6023 mov dword ptr [0x11fc2a24], 2 */
  w32((uint32_t)(0x11fc2a24), (0x2u));
  /* 11fa602d jmp 0x11fa6036 */
  goto L_11fa6036;
L_11fa602f:;
  /* 11fa602f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa6031 jmp 0x11fa6394 */
  goto L_11fa6394;
L_11fa6036:;
  /* 11fa6036 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa603a jle 0x11fa604f */
  if ((C.zf||C.sf!=C.of)) goto L_11fa604f;
  /* 11fa603c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa603f push eax */
  push32((uint32_t)(EAX));
  /* 11fa6040 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa6043 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa6044 call 0x11fa63b0 */
  push32(0x11fa6049u); f_11fa63b0();
  /* 11fa6049 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa604c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11fa604f:;
  /* 11fa604f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6053 jle 0x11fa6068 */
  if ((C.zf||C.sf!=C.of)) goto L_11fa6068;
  /* 11fa6055 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fa6058 push edx */
  push32((uint32_t)(EDX));
  /* 11fa6059 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa605c push eax */
  push32((uint32_t)(EAX));
  /* 11fa605d call 0x11fa63b0 */
  push32(0x11fa6062u); f_11fa63b0();
  /* 11fa6062 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6065 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11fa6068:;
  /* 11fa6068 cmp dword ptr [0x11fc2a24], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa606f jne 0x11fa6094 */
  if (!C.zf) goto L_11fa6094;
  /* 11fa6071 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fa6074 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa6075 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa6078 push edx */
  push32((uint32_t)(EDX));
  /* 11fa6079 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa607c push eax */
  push32((uint32_t)(EAX));
  /* 11fa607d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa6080 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa6081 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa6084 push edx */
  push32((uint32_t)(EDX));
  /* 11fa6085 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa6088 push eax */
  push32((uint32_t)(EAX));
  /* 11fa6089 call dword ptr [0x11fc52dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52dc))), 0x11fa608fu);
  /* 11fa608f jmp 0x11fa6394 */
  goto L_11fa6394;
L_11fa6094:;
  /* 11fa6094 cmp dword ptr [0x11fc2a24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11fc2a24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa609b jne 0x11fa6392 */
  if (!C.zf) goto L_11fa6392;
  /* 11fa60a1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa60a5 jne 0x11fa60b0 */
  if (!C.zf) goto L_11fa60b0;
  /* 11fa60a7 mov ecx, dword ptr [0x11fc28d0] */
  ECX = (r32((uint32_t)(0x11fc28d0)));
  /* 11fa60ad mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11fa60b0:;
  /* 11fa60b0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa60b4 je 0x11fa60c0 */
  if (C.zf) goto L_11fa60c0;
  /* 11fa60b6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa60ba jne 0x11fa623c */
  if (!C.zf) goto L_11fa623c;
L_11fa60c0:;
  /* 11fa60c0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa60c3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa60c6 jne 0x11fa60d2 */
  if (!C.zf) goto L_11fa60d2;
  /* 11fa60c8 mov eax, 2 */
  EAX = (0x2u);
  /* 11fa60cd jmp 0x11fa6394 */
  goto L_11fa6394;
L_11fa60d2:;
  /* 11fa60d2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa60d6 jle 0x11fa60e2 */
  if ((C.zf||C.sf!=C.of)) goto L_11fa60e2;
  /* 11fa60d8 mov eax, 1 */
  EAX = (0x1u);
  /* 11fa60dd jmp 0x11fa6394 */
  goto L_11fa6394;
L_11fa60e2:;
  /* 11fa60e2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa60e6 jle 0x11fa60f2 */
  if ((C.zf||C.sf!=C.of)) goto L_11fa60f2;
  /* 11fa60e8 mov eax, 3 */
  EAX = (0x3u);
  /* 11fa60ed jmp 0x11fa6394 */
  goto L_11fa6394;
L_11fa60f2:;
  /* 11fa60f2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11fa60f5 push eax */
  push32((uint32_t)(EAX));
  /* 11fa60f6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fa60f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa60fa call dword ptr [0x11fc5328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc5328))), 0x11fa6100u);
  /* 11fa6100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa6102 jne 0x11fa610b */
  if (!C.zf) goto L_11fa610b;
  /* 11fa6104 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa6106 jmp 0x11fa6394 */
  goto L_11fa6394;
L_11fa610b:;
  /* 11fa610b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa610f jne 0x11fa6117 */
  if (!C.zf) goto L_11fa6117;
  /* 11fa6111 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6115 je 0x11fa6144 */
  if (C.zf) goto L_11fa6144;
L_11fa6117:;
  /* 11fa6117 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa611b jne 0x11fa6123 */
  if (!C.zf) goto L_11fa6123;
  /* 11fa611d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6121 je 0x11fa6144 */
  if (C.zf) goto L_11fa6144;
L_11fa6123:;
  /* 11fa6123 push 0x11fbeae8 */
  push32((uint32_t)(0x11fbeae8u));
  /* 11fa6128 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa612a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11fa612f push 0x11fbeae0 */
  push32((uint32_t)(0x11fbeae0u));
  /* 11fa6134 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa6136 call 0x11f954c0 */
  push32(0x11fa613bu); f_11f954c0();
  /* 11fa613b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa613e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6141 jne 0x11fa6144 */
  if (!C.zf) goto L_11fa6144;
  /* 11fa6143 int3  */
  x86_unimpl("int3 @ 0x11fa6143");
L_11fa6144:;
  /* 11fa6144 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa6146 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa6148 jne 0x11fa610b */
  if (!C.zf) goto L_11fa610b;
  /* 11fa614a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa614e jle 0x11fa61c3 */
  if ((C.zf||C.sf!=C.of)) goto L_11fa61c3;
  /* 11fa6150 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6154 jae 0x11fa6160 */
  if (!C.cf) goto L_11fa6160;
  /* 11fa6156 mov eax, 3 */
  EAX = (0x3u);
  /* 11fa615b jmp 0x11fa6394 */
  goto L_11fa6394;
L_11fa6160:;
  /* 11fa6160 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11fa6163 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11fa6166 jmp 0x11fa6171 */
  goto L_11fa6171;
L_11fa6168:;
  /* 11fa6168 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fa616b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa616e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11fa6171:;
  /* 11fa6171 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fa6174 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa6176 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa6178 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa617a je 0x11fa61b9 */
  if (C.zf) goto L_11fa61b9;
  /* 11fa617c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fa617f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa6181 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11fa6184 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa6186 je 0x11fa61b9 */
  if (C.zf) goto L_11fa61b9;
  /* 11fa6188 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa618b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa618d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fa618f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fa6192 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa6194 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa6196 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6198 jl 0x11fa61b7 */
  if ((C.sf!=C.of)) goto L_11fa61b7;
  /* 11fa619a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa619d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa619f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fa61a1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fa61a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa61a6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11fa61a9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa61ab jg 0x11fa61b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa61b7;
  /* 11fa61ad mov eax, 2 */
  EAX = (0x2u);
  /* 11fa61b2 jmp 0x11fa6394 */
  goto L_11fa6394;
L_11fa61b7:;
  /* 11fa61b7 jmp 0x11fa6168 */
  goto L_11fa6168;
L_11fa61b9:;
  /* 11fa61b9 mov eax, 3 */
  EAX = (0x3u);
  /* 11fa61be jmp 0x11fa6394 */
  goto L_11fa6394;
L_11fa61c3:;
  /* 11fa61c3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa61c7 jle 0x11fa623c */
  if ((C.zf||C.sf!=C.of)) goto L_11fa623c;
  /* 11fa61c9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa61cd jae 0x11fa61d9 */
  if (!C.cf) goto L_11fa61d9;
  /* 11fa61cf mov eax, 1 */
  EAX = (0x1u);
  /* 11fa61d4 jmp 0x11fa6394 */
  goto L_11fa6394;
L_11fa61d9:;
  /* 11fa61d9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 11fa61dc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11fa61df jmp 0x11fa61ea */
  goto L_11fa61ea;
L_11fa61e1:;
  /* 11fa61e1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fa61e4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa61e7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_11fa61ea:;
  /* 11fa61ea mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fa61ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa61ef mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fa61f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa61f3 je 0x11fa6232 */
  if (C.zf) goto L_11fa6232;
  /* 11fa61f5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fa61f8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa61fa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11fa61fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa61ff je 0x11fa6232 */
  if (C.zf) goto L_11fa6232;
  /* 11fa6201 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa6204 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa6206 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fa6208 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fa620b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa620d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fa620f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6211 jl 0x11fa6230 */
  if ((C.sf!=C.of)) goto L_11fa6230;
  /* 11fa6213 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa6216 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa6218 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fa621a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fa621d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa621f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11fa6222 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6224 jg 0x11fa6230 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fa6230;
  /* 11fa6226 mov eax, 2 */
  EAX = (0x2u);
  /* 11fa622b jmp 0x11fa6394 */
  goto L_11fa6394;
L_11fa6230:;
  /* 11fa6230 jmp 0x11fa61e1 */
  goto L_11fa61e1;
L_11fa6232:;
  /* 11fa6232 mov eax, 1 */
  EAX = (0x1u);
  /* 11fa6237 jmp 0x11fa6394 */
  goto L_11fa6394;
L_11fa623c:;
  /* 11fa623c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa623e push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa6240 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa6243 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa6244 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa6247 push edx */
  push32((uint32_t)(EDX));
  /* 11fa6248 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fa624a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fa624d push eax */
  push32((uint32_t)(EAX));
  /* 11fa624e call dword ptr [0x11fc531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc531c))), 0x11fa6254u);
  /* 11fa6254 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11fa6257 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa625b jne 0x11fa6264 */
  if (!C.zf) goto L_11fa6264;
  /* 11fa625d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa625f jmp 0x11fa6394 */
  goto L_11fa6394;
L_11fa6264:;
  /* 11fa6264 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fa626b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fa626e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fa6270 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6273 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11fa6275 call 0x11f995a0 */
  push32(0x11fa627au); f_11f995a0();
  /* 11fa627a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11fa627d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fa6280 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11fa6283 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11fa6286 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fa628d jmp 0x11fa62a6 */
  goto L_11fa62a6;
  /* 11fa628f mov eax, 1 */
  EAX = (0x1u);
  /* 11fa6294 ret  */
  ESPCHK(0x11fa5fb0u, _esp0);
  ESP += 4; return;
  /* 11fa6295 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa6298 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11fa629f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11fa62a6:;
  /* 11fa62a6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa62aa jne 0x11fa62b3 */
  if (!C.zf) goto L_11fa62b3;
  /* 11fa62ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa62ae jmp 0x11fa6394 */
  goto L_11fa6394;
L_11fa62b3:;
  /* 11fa62b3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fa62b6 push edx */
  push32((uint32_t)(EDX));
  /* 11fa62b7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fa62ba push eax */
  push32((uint32_t)(EAX));
  /* 11fa62bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fa62be push ecx */
  push32((uint32_t)(ECX));
  /* 11fa62bf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fa62c2 push edx */
  push32((uint32_t)(EDX));
  /* 11fa62c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa62c5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fa62c8 push eax */
  push32((uint32_t)(EAX));
  /* 11fa62c9 call dword ptr [0x11fc531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc531c))), 0x11fa62cfu);
  /* 11fa62cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa62d1 jne 0x11fa62da */
  if (!C.zf) goto L_11fa62da;
  /* 11fa62d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa62d5 jmp 0x11fa6394 */
  goto L_11fa6394;
L_11fa62da:;
  /* 11fa62da push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa62dc push 0 */
  push32((uint32_t)(0x0u));
  /* 11fa62de mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fa62e1 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa62e2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa62e5 push edx */
  push32((uint32_t)(EDX));
  /* 11fa62e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11fa62e8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fa62eb push eax */
  push32((uint32_t)(EAX));
  /* 11fa62ec call dword ptr [0x11fc531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc531c))), 0x11fa62f2u);
  /* 11fa62f2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fa62f5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa62f9 jne 0x11fa6302 */
  if (!C.zf) goto L_11fa6302;
  /* 11fa62fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa62fd jmp 0x11fa6394 */
  goto L_11fa6394;
L_11fa6302:;
  /* 11fa6302 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fa6309 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fa630c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fa630e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6311 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11fa6313 call 0x11f995a0 */
  push32(0x11fa6318u); f_11f995a0();
  /* 11fa6318 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 11fa631b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fa631e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11fa6321 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11fa6324 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fa632b jmp 0x11fa6344 */
  goto L_11fa6344;
  /* 11fa632d mov eax, 1 */
  EAX = (0x1u);
  /* 11fa6332 ret  */
  ESPCHK(0x11fa5fb0u, _esp0);
  ESP += 4; return;
  /* 11fa6333 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa6336 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11fa633d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11fa6344:;
  /* 11fa6344 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6348 jne 0x11fa634e */
  if (!C.zf) goto L_11fa634e;
  /* 11fa634a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa634c jmp 0x11fa6394 */
  goto L_11fa6394;
L_11fa634e:;
  /* 11fa634e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fa6351 push edx */
  push32((uint32_t)(EDX));
  /* 11fa6352 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fa6355 push eax */
  push32((uint32_t)(EAX));
  /* 11fa6356 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fa6359 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa635a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fa635d push edx */
  push32((uint32_t)(EDX));
  /* 11fa635e push 1 */
  push32((uint32_t)(0x1u));
  /* 11fa6360 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fa6363 push eax */
  push32((uint32_t)(EAX));
  /* 11fa6364 call dword ptr [0x11fc531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc531c))), 0x11fa636au);
  /* 11fa636a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa636c jne 0x11fa6372 */
  if (!C.zf) goto L_11fa6372;
  /* 11fa636e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa6370 jmp 0x11fa6394 */
  goto L_11fa6394;
L_11fa6372:;
  /* 11fa6372 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fa6375 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa6376 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fa6379 push edx */
  push32((uint32_t)(EDX));
  /* 11fa637a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fa637d push eax */
  push32((uint32_t)(EAX));
  /* 11fa637e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fa6381 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa6382 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa6385 push edx */
  push32((uint32_t)(EDX));
  /* 11fa6386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa6389 push eax */
  push32((uint32_t)(EAX));
  /* 11fa638a call dword ptr [0x11fc52d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52d0))), 0x11fa6390u);
  /* 11fa6390 jmp 0x11fa6394 */
  goto L_11fa6394;
L_11fa6392:;
  /* 11fa6392 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fa6394:;
  /* 11fa6394 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11fa6397 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa639a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11fa63a1 pop edi */
  EDI = (pop32());
  /* 11fa63a2 pop esi */
  ESI = (pop32());
  /* 11fa63a3 pop ebx */
  EBX = (pop32());
  /* 11fa63a4 mov esp, ebp */
  ESP = (EBP);
  /* 11fa63a6 pop ebp */
  EBP = (pop32());
  /* 11fa63a7 ret  */
  ESPCHK(0x11fa5fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100163b0 @ 0x11fa63b0 (80 bytes, 32 insns) */
void f_11fa63b0(void) {
  FTRACE(0x11fa63b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa63b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa63b1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa63b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa63b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa63b9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fa63bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa63bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fa63c2:;
  /* 11fa63c2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa63c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa63c8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa63cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fa63ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa63d0 je 0x11fa63e7 */
  if (C.zf) goto L_11fa63e7;
  /* 11fa63d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa63d5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fa63d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa63da je 0x11fa63e7 */
  if (C.zf) goto L_11fa63e7;
  /* 11fa63dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa63df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa63e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa63e5 jmp 0x11fa63c2 */
  goto L_11fa63c2;
L_11fa63e7:;
  /* 11fa63e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa63ea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fa63ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa63ef jne 0x11fa63f9 */
  if (!C.zf) goto L_11fa63f9;
  /* 11fa63f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa63f4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa63f7 jmp 0x11fa63fc */
  goto L_11fa63fc;
L_11fa63f9:;
  /* 11fa63f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11fa63fc:;
  /* 11fa63fc mov esp, ebp */
  ESP = (EBP);
  /* 11fa63fe pop ebp */
  EBP = (pop32());
  /* 11fa63ff ret  */
  ESPCHK(0x11fa63b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016400 @ 0x11fa6400 (736 bytes, 224 insns) */
void f_11fa6400(void) {
  FTRACE(0x11fa6400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa6400 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa6401 mov ebp, esp */
  EBP = (ESP);
  /* 11fa6403 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa6406 push esi */
  push32((uint32_t)(ESI));
  /* 11fa6407 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa640b je 0x11fa642c */
  if (C.zf) goto L_11fa642c;
  /* 11fa640d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11fa640f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa6412 push eax */
  push32((uint32_t)(EAX));
  /* 11fa6413 call 0x11fa6850 */
  push32(0x11fa6418u); f_11fa6850();
  /* 11fa6418 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa641b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fa641e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6422 je 0x11fa642c */
  if (C.zf) goto L_11fa642c;
  /* 11fa6424 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa6427 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa642a jne 0x11fa6434 */
  if (!C.zf) goto L_11fa6434;
L_11fa642c:;
  /* 11fa642c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa642f jmp 0x11fa66db */
  goto L_11fa66db;
L_11fa6434:;
  /* 11fa6434 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa6437 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11fa643b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fa643d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa643f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11fa6440 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fa6443 mov ecx, dword ptr [0x11fc26e0] */
  ECX = (r32((uint32_t)(0x11fc26e0)));
  /* 11fa6449 cmp ecx, dword ptr [0x11fc26e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11fc26e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa644f jne 0x11fa6465 */
  if (!C.zf) goto L_11fa6465;
  /* 11fa6451 mov edx, dword ptr [0x11fc26e0] */
  EDX = (r32((uint32_t)(0x11fc26e0)));
  /* 11fa6457 push edx */
  push32((uint32_t)(EDX));
  /* 11fa6458 call 0x11fa6760 */
  push32(0x11fa645du); f_11fa6760();
  /* 11fa645d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6460 mov dword ptr [0x11fc26e0], eax */
  w32((uint32_t)(0x11fc26e0), (EAX));
L_11fa6465:;
  /* 11fa6465 cmp dword ptr [0x11fc26e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc26e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa646c jne 0x11fa6525 */
  if (!C.zf) goto L_11fa6525;
  /* 11fa6472 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6476 je 0x11fa6497 */
  if (C.zf) goto L_11fa6497;
  /* 11fa6478 cmp dword ptr [0x11fc26e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc26e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa647f je 0x11fa6497 */
  if (C.zf) goto L_11fa6497;
  /* 11fa6481 call 0x11fa5f00 */
  push32(0x11fa6486u); f_11fa5f00();
  /* 11fa6486 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa6488 je 0x11fa6492 */
  if (C.zf) goto L_11fa6492;
  /* 11fa648a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa648d jmp 0x11fa66db */
  goto L_11fa66db;
L_11fa6492:;
  /* 11fa6492 jmp 0x11fa6525 */
  goto L_11fa6525;
L_11fa6497:;
  /* 11fa6497 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa649b je 0x11fa64a4 */
  if (C.zf) goto L_11fa64a4;
  /* 11fa649d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa649f jmp 0x11fa66db */
  goto L_11fa66db;
L_11fa64a4:;
  /* 11fa64a4 cmp dword ptr [0x11fc26e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc26e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa64ab jne 0x11fa64e4 */
  if (!C.zf) goto L_11fa64e4;
  /* 11fa64ad push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11fa64b2 push 0x11fbeb40 */
  push32((uint32_t)(0x11fbeb40u));
  /* 11fa64b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa64b9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fa64bb call 0x11f96400 */
  push32(0x11fa64c0u); f_11f96400();
  /* 11fa64c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa64c3 mov dword ptr [0x11fc26e0], eax */
  w32((uint32_t)(0x11fc26e0), (EAX));
  /* 11fa64c8 cmp dword ptr [0x11fc26e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc26e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa64cf jne 0x11fa64d9 */
  if (!C.zf) goto L_11fa64d9;
  /* 11fa64d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa64d4 jmp 0x11fa66db */
  goto L_11fa66db;
L_11fa64d9:;
  /* 11fa64d9 mov eax, dword ptr [0x11fc26e0] */
  EAX = (r32((uint32_t)(0x11fc26e0)));
  /* 11fa64de mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11fa64e4:;
  /* 11fa64e4 cmp dword ptr [0x11fc26e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc26e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa64eb jne 0x11fa6525 */
  if (!C.zf) goto L_11fa6525;
  /* 11fa64ed push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11fa64f2 push 0x11fbeb40 */
  push32((uint32_t)(0x11fbeb40u));
  /* 11fa64f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa64f9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fa64fb call 0x11f96400 */
  push32(0x11fa6500u); f_11f96400();
  /* 11fa6500 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6503 mov dword ptr [0x11fc26e8], eax */
  w32((uint32_t)(0x11fc26e8), (EAX));
  /* 11fa6508 cmp dword ptr [0x11fc26e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc26e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa650f jne 0x11fa6519 */
  if (!C.zf) goto L_11fa6519;
  /* 11fa6511 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa6514 jmp 0x11fa66db */
  goto L_11fa66db;
L_11fa6519:;
  /* 11fa6519 mov ecx, dword ptr [0x11fc26e8] */
  ECX = (r32((uint32_t)(0x11fc26e8)));
  /* 11fa651f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11fa6525:;
  /* 11fa6525 mov edx, dword ptr [0x11fc26e0] */
  EDX = (r32((uint32_t)(0x11fc26e0)));
  /* 11fa652b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fa652e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa6531 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa6534 push eax */
  push32((uint32_t)(EAX));
  /* 11fa6535 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa6538 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa6539 call 0x11fa66e0 */
  push32(0x11fa653eu); f_11fa66e0();
  /* 11fa653e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6541 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fa6544 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6548 jl 0x11fa65e1 */
  if ((C.sf!=C.of)) goto L_11fa65e1;
  /* 11fa654e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa6551 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6554 je 0x11fa65e1 */
  if (C.zf) goto L_11fa65e1;
  /* 11fa655a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa655e je 0x11fa65d3 */
  if (C.zf) goto L_11fa65d3;
  /* 11fa6560 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa6562 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa6565 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa6568 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11fa656b push edx */
  push32((uint32_t)(EDX));
  /* 11fa656c call 0x11f96e90 */
  push32(0x11fa6571u); f_11f96e90();
  /* 11fa6571 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6574 jmp 0x11fa657f */
  goto L_11fa657f;
L_11fa6576:;
  /* 11fa6576 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa6579 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa657c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fa657f:;
  /* 11fa657f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa6582 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa6585 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6589 je 0x11fa65a0 */
  if (C.zf) goto L_11fa65a0;
  /* 11fa658b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa658e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa6591 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa6594 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa6597 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 11fa659b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11fa659e jmp 0x11fa6576 */
  goto L_11fa6576;
L_11fa65a0:;
  /* 11fa65a0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11fa65a5 push 0x11fbeb40 */
  push32((uint32_t)(0x11fbeb40u));
  /* 11fa65aa push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa65ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa65af shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11fa65b2 push eax */
  push32((uint32_t)(EAX));
  /* 11fa65b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa65b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa65b7 call 0x11f96890 */
  push32(0x11fa65bcu); f_11f96890();
  /* 11fa65bc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa65bf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fa65c2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa65c6 je 0x11fa65d1 */
  if (C.zf) goto L_11fa65d1;
  /* 11fa65c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa65cb mov dword ptr [0x11fc26e0], edx */
  w32((uint32_t)(0x11fc26e0), (EDX));
L_11fa65d1:;
  /* 11fa65d1 jmp 0x11fa65df */
  goto L_11fa65df;
L_11fa65d3:;
  /* 11fa65d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa65d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa65d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa65dc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_11fa65df:;
  /* 11fa65df jmp 0x11fa6654 */
  goto L_11fa6654;
L_11fa65e1:;
  /* 11fa65e1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa65e5 jne 0x11fa664d */
  if (!C.zf) goto L_11fa664d;
  /* 11fa65e7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa65eb jge 0x11fa65f5 */
  if ((C.sf==C.of)) goto L_11fa65f5;
  /* 11fa65ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa65f0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fa65f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fa65f5:;
  /* 11fa65f5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 11fa65fa push 0x11fbeb40 */
  push32((uint32_t)(0x11fbeb40u));
  /* 11fa65ff push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa6601 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa6604 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 11fa660b push edx */
  push32((uint32_t)(EDX));
  /* 11fa660c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa660f push eax */
  push32((uint32_t)(EAX));
  /* 11fa6610 call 0x11f96890 */
  push32(0x11fa6615u); f_11f96890();
  /* 11fa6615 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6618 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fa661b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa661f jne 0x11fa6629 */
  if (!C.zf) goto L_11fa6629;
  /* 11fa6621 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa6624 jmp 0x11fa66db */
  goto L_11fa66db;
L_11fa6629:;
  /* 11fa6629 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa662c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa662f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa6632 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11fa6635 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa6638 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa663b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11fa6643 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa6646 mov dword ptr [0x11fc26e0], eax */
  w32((uint32_t)(0x11fc26e0), (EAX));
  /* 11fa664b jmp 0x11fa6654 */
  goto L_11fa6654;
L_11fa664d:;
  /* 11fa664d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa664f jmp 0x11fa66db */
  goto L_11fa66db;
L_11fa6654:;
  /* 11fa6654 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6658 je 0x11fa66d9 */
  if (C.zf) goto L_11fa66d9;
  /* 11fa665a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 11fa665f push 0x11fbeb40 */
  push32((uint32_t)(0x11fbeb40u));
  /* 11fa6664 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa6666 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa6669 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa666a call 0x11f99230 */
  push32(0x11fa666fu); f_11f99230();
  /* 11fa666f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6672 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6675 push eax */
  push32((uint32_t)(EAX));
  /* 11fa6676 call 0x11f96400 */
  push32(0x11fa667bu); f_11f96400();
  /* 11fa667b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa667e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fa6681 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6685 je 0x11fa66d9 */
  if (C.zf) goto L_11fa66d9;
  /* 11fa6687 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa668a push edx */
  push32((uint32_t)(EDX));
  /* 11fa668b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa668e push eax */
  push32((uint32_t)(EAX));
  /* 11fa668f call 0x11f993b0 */
  push32(0x11fa6694u); f_11f993b0();
  /* 11fa6694 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6697 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fa669a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa669d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa66a0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa66a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fa66a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa66a8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11fa66ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa66ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa66b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fa66b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fa66b7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fa66b9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa66bb not edx */
  EDX = (~(EDX));
  /* 11fa66bd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11fa66c0 push edx */
  push32((uint32_t)(EDX));
  /* 11fa66c1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa66c4 push eax */
  push32((uint32_t)(EAX));
  /* 11fa66c5 call dword ptr [0x11fc52cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11fc52cc))), 0x11fa66cbu);
  /* 11fa66cb push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa66cd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa66d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa66d1 call 0x11f96e90 */
  push32(0x11fa66d6u); f_11f96e90();
  /* 11fa66d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa66d9:;
  /* 11fa66d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fa66db:;
  /* 11fa66db pop esi */
  ESI = (pop32());
  /* 11fa66dc mov esp, ebp */
  ESP = (EBP);
  /* 11fa66de pop ebp */
  EBP = (pop32());
  /* 11fa66df ret  */
  ESPCHK(0x11fa6400u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11fa66e0 (124 bytes, 47 insns) */
void f_11fa66e0(void) {
  FTRACE(0x11fa66e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa66e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa66e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fa66e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa66e4 mov eax, dword ptr [0x11fc26e0] */
  EAX = (r32((uint32_t)(0x11fc26e0)));
  /* 11fa66e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fa66ec jmp 0x11fa66f7 */
  goto L_11fa66f7;
L_11fa66ee:;
  /* 11fa66ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa66f1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa66f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fa66f7:;
  /* 11fa66f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa66fa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa66fd je 0x11fa674a */
  if (C.zf) goto L_11fa674a;
  /* 11fa66ff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa6702 push eax */
  push32((uint32_t)(EAX));
  /* 11fa6703 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa6706 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa6708 push edx */
  push32((uint32_t)(EDX));
  /* 11fa6709 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa670c push eax */
  push32((uint32_t)(EAX));
  /* 11fa670d call 0x11fa5eb0 */
  push32(0x11fa6712u); f_11fa5eb0();
  /* 11fa6712 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6715 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fa6717 jne 0x11fa6748 */
  if (!C.zf) goto L_11fa6748;
  /* 11fa6719 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa671c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa671e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa6721 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11fa6725 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6728 je 0x11fa673a */
  if (C.zf) goto L_11fa673a;
  /* 11fa672a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa672d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fa672f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa6732 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11fa6736 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa6738 jne 0x11fa6748 */
  if (!C.zf) goto L_11fa6748;
L_11fa673a:;
  /* 11fa673a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa673d sub eax, dword ptr [0x11fc26e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc26e0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa6743 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11fa6746 jmp 0x11fa6758 */
  goto L_11fa6758;
L_11fa6748:;
  /* 11fa6748 jmp 0x11fa66ee */
  goto L_11fa66ee;
L_11fa674a:;
  /* 11fa674a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa674d sub eax, dword ptr [0x11fc26e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11fc26e0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa6753 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11fa6756 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11fa6758:;
  /* 11fa6758 mov esp, ebp */
  ESP = (EBP);
  /* 11fa675a pop ebp */
  EBP = (pop32());
  /* 11fa675b ret  */
  ESPCHK(0x11fa66e0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11fa6760 (238 bytes, 80 insns) */
void f_11fa6760(void) {
  FTRACE(0x11fa6760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa6760 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa6761 mov ebp, esp */
  EBP = (ESP);
  /* 11fa6763 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa6766 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fa676d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa6770 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fa6773 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6777 jne 0x11fa6780 */
  if (!C.zf) goto L_11fa6780;
  /* 11fa6779 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa677b jmp 0x11fa684a */
  goto L_11fa684a;
L_11fa6780:;
  /* 11fa6780 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa6783 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa6785 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa6788 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa678b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fa678e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa6790 je 0x11fa679d */
  if (C.zf) goto L_11fa679d;
  /* 11fa6792 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa6795 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6798 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fa679b jmp 0x11fa6780 */
  goto L_11fa6780;
L_11fa679d:;
  /* 11fa679d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11fa67a2 push 0x11fbeb40 */
  push32((uint32_t)(0x11fbeb40u));
  /* 11fa67a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa67a9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fa67ac lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11fa67b3 push eax */
  push32((uint32_t)(EAX));
  /* 11fa67b4 call 0x11f96400 */
  push32(0x11fa67b9u); f_11f96400();
  /* 11fa67b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa67bc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fa67bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa67c2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fa67c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa67c9 jne 0x11fa67d5 */
  if (!C.zf) goto L_11fa67d5;
  /* 11fa67cb push 9 */
  push32((uint32_t)(0x9u));
  /* 11fa67cd call 0x11f95370 */
  push32(0x11fa67d2u); f_11f95370();
  /* 11fa67d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa67d5:;
  /* 11fa67d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa67d8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11fa67db:;
  /* 11fa67db mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa67de cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa67e1 je 0x11fa683e */
  if (C.zf) goto L_11fa683e;
  /* 11fa67e3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11fa67e8 push 0x11fbeb40 */
  push32((uint32_t)(0x11fbeb40u));
  /* 11fa67ed push 2 */
  push32((uint32_t)(0x2u));
  /* 11fa67ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa67f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fa67f4 push edx */
  push32((uint32_t)(EDX));
  /* 11fa67f5 call 0x11f99230 */
  push32(0x11fa67fau); f_11f99230();
  /* 11fa67fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa67fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6800 push eax */
  push32((uint32_t)(EAX));
  /* 11fa6801 call 0x11f96400 */
  push32(0x11fa6806u); f_11f96400();
  /* 11fa6806 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6809 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa680c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fa680e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa6811 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6814 je 0x11fa682a */
  if (C.zf) goto L_11fa682a;
  /* 11fa6816 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa6819 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fa681b push ecx */
  push32((uint32_t)(ECX));
  /* 11fa681c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa681f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fa6821 push eax */
  push32((uint32_t)(EAX));
  /* 11fa6822 call 0x11f993b0 */
  push32(0x11fa6827u); f_11f993b0();
  /* 11fa6827 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fa682a:;
  /* 11fa682a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fa682d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6830 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fa6833 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa6836 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6839 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fa683c jmp 0x11fa67db */
  goto L_11fa67db;
L_11fa683e:;
  /* 11fa683e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fa6841 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11fa6847 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11fa684a:;
  /* 11fa684a mov esp, ebp */
  ESP = (EBP);
  /* 11fa684c pop ebp */
  EBP = (pop32());
  /* 11fa684d ret  */
  ESPCHK(0x11fa6760u, _esp0);
  ESP += 4; return;
}

/* FUN_10016850 @ 0x11fa6850 (237 bytes, 81 insns) */
void f_11fa6850(void) {
  FTRACE(0x11fa6850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa6850 push ebp */
  push32((uint32_t)(EBP));
  /* 11fa6851 mov ebp, esp */
  EBP = (ESP);
  /* 11fa6853 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa6854 cmp dword ptr [0x11fc3e2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11fc3e2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa685b jne 0x11fa6872 */
  if (!C.zf) goto L_11fa6872;
  /* 11fa685d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fa6860 push eax */
  push32((uint32_t)(EAX));
  /* 11fa6861 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa6864 push ecx */
  push32((uint32_t)(ECX));
  /* 11fa6865 call 0x11fa6950 */
  push32(0x11fa686au); f_11fa6950();
  /* 11fa686a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa686d jmp 0x11fa6939 */
  goto L_11fa6939;
L_11fa6872:;
  /* 11fa6872 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11fa6874 call 0x11f99e00 */
  push32(0x11fa6879u); f_11f99e00();
  /* 11fa6879 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa687c jmp 0x11fa6887 */
  goto L_11fa6887;
L_11fa687e:;
  /* 11fa687e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa6881 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6884 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11fa6887:;
  /* 11fa6887 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa688a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11fa688e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11fa6892 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa6895 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fa689b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fa689d je 0x11fa691b */
  if (C.zf) goto L_11fa691b;
  /* 11fa689f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa68a2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa68a7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa68a9 mov cl, byte ptr [eax + 0x11fc3f41] */
  CL = (r8((uint32_t)(EAX + 0x11fc3f41)));
  /* 11fa68af and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11fa68b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa68b4 je 0x11fa6906 */
  if (C.zf) goto L_11fa6906;
  /* 11fa68b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa68b9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa68bc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11fa68bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa68c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa68c4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fa68c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fa68c8 jne 0x11fa68d8 */
  if (!C.zf) goto L_11fa68d8;
  /* 11fa68ca push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11fa68cc call 0x11f99ea0 */
  push32(0x11fa68d1u); f_11f99ea0();
  /* 11fa68d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa68d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa68d6 jmp 0x11fa6939 */
  goto L_11fa6939;
L_11fa68d8:;
  /* 11fa68d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa68db and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fa68e1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11fa68e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa68e7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa68e9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fa68eb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11fa68ed cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa68f0 jne 0x11fa6904 */
  if (!C.zf) goto L_11fa6904;
  /* 11fa68f2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11fa68f4 call 0x11f99ea0 */
  push32(0x11fa68f9u); f_11f99ea0();
  /* 11fa68f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa68fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa68ff sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fa6902 jmp 0x11fa6939 */
  goto L_11fa6939;
L_11fa6904:;
  /* 11fa6904 jmp 0x11fa6916 */
  goto L_11fa6916;
L_11fa6906:;
  /* 11fa6906 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa6909 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fa690f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6912 jne 0x11fa6916 */
  if (!C.zf) goto L_11fa6916;
  /* 11fa6914 jmp 0x11fa691b */
  goto L_11fa691b;
L_11fa6916:;
  /* 11fa6916 jmp 0x11fa687e */
  goto L_11fa687e;
L_11fa691b:;
  /* 11fa691b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11fa691d call 0x11f99ea0 */
  push32(0x11fa6922u); f_11f99ea0();
  /* 11fa6922 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6925 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fa6928 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa692d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fa6930 jne 0x11fa6937 */
  if (!C.zf) goto L_11fa6937;
  /* 11fa6932 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fa6935 jmp 0x11fa6939 */
  goto L_11fa6939;
L_11fa6937:;
  /* 11fa6937 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fa6939:;
  /* 11fa6939 mov esp, ebp */
  ESP = (EBP);
  /* 11fa693b pop ebp */
  EBP = (pop32());
  /* 11fa693c ret  */
  ESPCHK(0x11fa6850u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11fa6950 (193 bytes, 87 insns) */
void f_11fa6950(void) {
  FTRACE(0x11fa6950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa6950 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa6952 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11fa6956 push ebx */
  push32((uint32_t)(EBX));
  /* 11fa6957 mov ebx, eax */
  EBX = (EAX);
  /* 11fa6959 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11fa695c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11fa6960 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11fa6966 je 0x11fa697b */
  if (C.zf) goto L_11fa697b;
L_11fa6968:;
  /* 11fa6968 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11fa696a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11fa696b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa696d je 0x11fa6940 */
  if (C.zf) { jmp_ind(0x11fa6940u); return; }
  /* 11fa696f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11fa6971 je 0x11fa69c4 */
  if (C.zf) goto L_11fa69c4;
  /* 11fa6973 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11fa6979 jne 0x11fa6968 */
  if (!C.zf) goto L_11fa6968;
L_11fa697b:;
  /* 11fa697b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11fa697d push edi */
  push32((uint32_t)(EDI));
  /* 11fa697e mov eax, ebx */
  EAX = (EBX);
  /* 11fa6980 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11fa6983 push esi */
  push32((uint32_t)(ESI));
  /* 11fa6984 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11fa6986:;
  /* 11fa6986 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11fa6988 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11fa698d mov eax, ecx */
  EAX = (ECX);
  /* 11fa698f mov esi, edi */
  ESI = (EDI);
  /* 11fa6991 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11fa6993 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6995 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa6997 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fa699a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fa699d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11fa699f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11fa69a1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fa69a4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11fa69aa jne 0x11fa69c8 */
  if (!C.zf) goto L_11fa69c8;
  /* 11fa69ac and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11fa69b1 je 0x11fa6986 */
  if (C.zf) goto L_11fa6986;
  /* 11fa69b3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11fa69b8 jne 0x11fa69c2 */
  if (!C.zf) goto L_11fa69c2;
  /* 11fa69ba and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11fa69c0 jne 0x11fa6986 */
  if (!C.zf) goto L_11fa6986;
L_11fa69c2:;
  /* 11fa69c2 pop esi */
  ESI = (pop32());
  /* 11fa69c3 pop edi */
  EDI = (pop32());
L_11fa69c4:;
  /* 11fa69c4 pop ebx */
  EBX = (pop32());
  /* 11fa69c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fa69c7 ret  */
  ESPCHK(0x11fa6950u, _esp0);
  ESP += 4; return;
L_11fa69c8:;
  /* 11fa69c8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11fa69cb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa69cd je 0x11fa6a05 */
  if (C.zf) goto L_11fa6a05;
  /* 11fa69cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11fa69d1 je 0x11fa69c2 */
  if (C.zf) goto L_11fa69c2;
  /* 11fa69d3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa69d5 je 0x11fa69fe */
  if (C.zf) goto L_11fa69fe;
  /* 11fa69d7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11fa69d9 je 0x11fa69c2 */
  if (C.zf) goto L_11fa69c2;
  /* 11fa69db shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11fa69de cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa69e0 je 0x11fa69f7 */
  if (C.zf) goto L_11fa69f7;
  /* 11fa69e2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11fa69e4 je 0x11fa69c2 */
  if (C.zf) goto L_11fa69c2;
  /* 11fa69e6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fa69e8 je 0x11fa69f0 */
  if (C.zf) goto L_11fa69f0;
  /* 11fa69ea test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11fa69ec je 0x11fa69c2 */
  if (C.zf) goto L_11fa69c2;
  /* 11fa69ee jmp 0x11fa6986 */
  goto L_11fa6986;
L_11fa69f0:;
  /* 11fa69f0 pop esi */
  ESI = (pop32());
  /* 11fa69f1 pop edi */
  EDI = (pop32());
  /* 11fa69f2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11fa69f5 pop ebx */
  EBX = (pop32());
  /* 11fa69f6 ret  */
  ESPCHK(0x11fa6950u, _esp0);
  ESP += 4; return;
L_11fa69f7:;
  /* 11fa69f7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11fa69fa pop esi */
  ESI = (pop32());
  /* 11fa69fb pop edi */
  EDI = (pop32());
  /* 11fa69fc pop ebx */
  EBX = (pop32());
  /* 11fa69fd ret  */
  ESPCHK(0x11fa6950u, _esp0);
  ESP += 4; return;
L_11fa69fe:;
  /* 11fa69fe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11fa6a01 pop esi */
  ESI = (pop32());
  /* 11fa6a02 pop edi */
  EDI = (pop32());
  /* 11fa6a03 pop ebx */
  EBX = (pop32());
  /* 11fa6a04 ret  */
  ESPCHK(0x11fa6950u, _esp0);
  ESP += 4; return;
L_11fa6a05:;
  /* 11fa6a05 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11fa6a08 pop esi */
  ESI = (pop32());
  /* 11fa6a09 pop edi */
  EDI = (pop32());
  /* 11fa6a0a pop ebx */
  EBX = (pop32());
  /* 11fa6a0b ret  */
  ESPCHK(0x11fa6950u, _esp0);
  ESP += 4; return;
  /* 11fa6a0c jmp dword ptr [0x11fc5378] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11fc5378)))); return;
}

/* RtlUnwind @ 0x11fa6b5c (6 bytes, 1 insns) */
void f_11fa6b5c(void) {
  FTRACE(0x11fa6b5cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fa6b5c jmp dword ptr [0x11fc5304] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11fc5304)))); return;
}

