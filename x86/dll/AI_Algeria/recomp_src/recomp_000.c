#include "recomp.h"

/* FUN_10001000 @ 0x10001000 (85 bytes, 29 insns) */
void f_10001000(void) {
  FTRACE(0x10001000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10001000 mov eax, dword ptr [0x1000bce0] */
  EAX = (r32((uint32_t)(0x1000bce0)));
  /* 10001005 push esi */
  push32((uint32_t)(ESI));
  /* 10001006 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10001009 jg 0x10001053 */
  if ((!C.zf&&C.sf==C.of)) goto L_10001053;
  /* 1000100b push 0x1000bb38 */
  push32((uint32_t)(0x1000bb38u));
  /* 10001010 call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10001016u);
  /* 10001016 mov ecx, eax */
  ECX = (EAX);
  /* 10001018 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 1000101d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1000101f sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 10001022 mov eax, edx */
  EAX = (EDX);
  /* 10001024 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001027 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1000102a add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000102c mov esi, edx */
  ESI = (EDX);
  /* 1000102e je 0x10001053 */
  if (C.zf) goto L_10001053;
  /* 10001030 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001032 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001034 push esi */
  push32((uint32_t)(ESI));
  /* 10001035 push 0x1000bb70 */
  push32((uint32_t)(0x1000bb70u));
  /* 1000103a call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001040u);
  /* 10001040 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001042 push 0xa */
  push32((uint32_t)(0xau));
  /* 10001044 push esi */
  push32((uint32_t)(ESI));
  /* 10001045 push 0x1000bb20 */
  push32((uint32_t)(0x1000bb20u));
  /* 1000104a call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001050u);
  /* 10001050 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001053:;
  /* 10001053 pop esi */
  ESI = (pop32());
  /* 10001054 ret  */
  ESPCHK(0x10001000u, _esp0);
  ESP += 4; return;
}

/* InitAI @ 0x10001060 (2756 bytes, 707 insns) */
void f_10001060(void) {
  FTRACE(0x10001060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10001060 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 10001065 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001067 je 0x10001164 */
  if (C.zf) goto L_10001164;
  /* 1000106d push 0x1000a77c */
  push32((uint32_t)(0x1000a77cu));
  /* 10001072 push 0x1000bb38 */
  push32((uint32_t)(0x1000bb38u));
  /* 10001077 call eax */
  call_ind((uint32_t)(EAX), 0x10001079u);
  /* 10001079 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 1000107e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001081 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001083 je 0x10001164 */
  if (C.zf) goto L_10001164;
  /* 10001089 push 0x1000a768 */
  push32((uint32_t)(0x1000a768u));
  /* 1000108e push 0x1000bdf0 */
  push32((uint32_t)(0x1000bdf0u));
  /* 10001093 call eax */
  call_ind((uint32_t)(EAX), 0x10001095u);
  /* 10001095 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 1000109a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000109d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000109f je 0x10001164 */
  if (C.zf) goto L_10001164;
  /* 100010a5 push 0x1000a754 */
  push32((uint32_t)(0x1000a754u));
  /* 100010aa push 0x1000bd88 */
  push32((uint32_t)(0x1000bd88u));
  /* 100010af call eax */
  call_ind((uint32_t)(EAX), 0x100010b1u);
  /* 100010b1 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 100010b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100010b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100010bb je 0x10001164 */
  if (C.zf) goto L_10001164;
  /* 100010c1 push 0x1000a740 */
  push32((uint32_t)(0x1000a740u));
  /* 100010c6 push 0x1000bde8 */
  push32((uint32_t)(0x1000bde8u));
  /* 100010cb call eax */
  call_ind((uint32_t)(EAX), 0x100010cdu);
  /* 100010cd mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 100010d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100010d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100010d7 je 0x10001164 */
  if (C.zf) goto L_10001164;
  /* 100010dd push 0x1000a72c */
  push32((uint32_t)(0x1000a72cu));
  /* 100010e2 push 0x1000be48 */
  push32((uint32_t)(0x1000be48u));
  /* 100010e7 call eax */
  call_ind((uint32_t)(EAX), 0x100010e9u);
  /* 100010e9 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 100010ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100010f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100010f3 je 0x10001164 */
  if (C.zf) goto L_10001164;
  /* 100010f5 push 0x1000a720 */
  push32((uint32_t)(0x1000a720u));
  /* 100010fa push 0x1000bf40 */
  push32((uint32_t)(0x1000bf40u));
  /* 100010ff call eax */
  call_ind((uint32_t)(EAX), 0x10001101u);
  /* 10001101 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 10001106 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000110b je 0x10001164 */
  if (C.zf) goto L_10001164;
  /* 1000110d push 0x1000a714 */
  push32((uint32_t)(0x1000a714u));
  /* 10001112 push 0x1000bf28 */
  push32((uint32_t)(0x1000bf28u));
  /* 10001117 call eax */
  call_ind((uint32_t)(EAX), 0x10001119u);
  /* 10001119 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 1000111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001121 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001123 je 0x10001164 */
  if (C.zf) goto L_10001164;
  /* 10001125 push 0x1000a708 */
  push32((uint32_t)(0x1000a708u));
  /* 1000112a push 0x1000bb30 */
  push32((uint32_t)(0x1000bb30u));
  /* 1000112f call eax */
  call_ind((uint32_t)(EAX), 0x10001131u);
  /* 10001131 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 10001136 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000113b je 0x10001164 */
  if (C.zf) goto L_10001164;
  /* 1000113d push 0x1000a6f8 */
  push32((uint32_t)(0x1000a6f8u));
  /* 10001142 push 0x1000bca8 */
  push32((uint32_t)(0x1000bca8u));
  /* 10001147 call eax */
  call_ind((uint32_t)(EAX), 0x10001149u);
  /* 10001149 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 1000114e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001151 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001153 je 0x10001164 */
  if (C.zf) goto L_10001164;
  /* 10001155 push 0x1000a6ec */
  push32((uint32_t)(0x1000a6ecu));
  /* 1000115a push 0x1000be58 */
  push32((uint32_t)(0x1000be58u));
  /* 1000115f call eax */
  call_ind((uint32_t)(EAX), 0x10001161u);
  /* 10001161 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001164:;
  /* 10001164 push 0x1000a77c */
  push32((uint32_t)(0x1000a77cu));
  /* 10001169 call 0x10003210 */
  push32(0x1000116eu); f_10003210();
  /* 1000116e mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 10001173 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001178 je 0x100011d6 */
  if (C.zf) goto L_100011d6;
  /* 1000117a push 0x1000a72c */
  push32((uint32_t)(0x1000a72cu));
  /* 1000117f push 0x1000be90 */
  push32((uint32_t)(0x1000be90u));
  /* 10001184 call eax */
  call_ind((uint32_t)(EAX), 0x10001186u);
  /* 10001186 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 1000118b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000118e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001190 je 0x100011d6 */
  if (C.zf) goto L_100011d6;
  /* 10001192 push 0x1000a6d4 */
  push32((uint32_t)(0x1000a6d4u));
  /* 10001197 push 0x1000bed8 */
  push32((uint32_t)(0x1000bed8u));
  /* 1000119c call eax */
  call_ind((uint32_t)(EAX), 0x1000119eu);
  /* 1000119e mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 100011a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100011a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100011a8 je 0x100011d6 */
  if (C.zf) goto L_100011d6;
  /* 100011aa push 0x1000a6c0 */
  push32((uint32_t)(0x1000a6c0u));
  /* 100011af push 0x1000bb70 */
  push32((uint32_t)(0x1000bb70u));
  /* 100011b4 call eax */
  call_ind((uint32_t)(EAX), 0x100011b6u);
  /* 100011b6 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 100011bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100011be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100011c0 je 0x100011d6 */
  if (C.zf) goto L_100011d6;
  /* 100011c2 push 0x1000a6a8 */
  push32((uint32_t)(0x1000a6a8u));
  /* 100011c7 push 0x1000bb20 */
  push32((uint32_t)(0x1000bb20u));
  /* 100011cc call eax */
  call_ind((uint32_t)(EAX), 0x100011ceu);
  /* 100011ce mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 100011d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100011d6:;
  /* 100011d6 mov ecx, dword ptr [0x1000bf64] */
  ECX = (r32((uint32_t)(0x1000bf64)));
  /* 100011dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100011de je 0x1000121a */
  if (C.zf) goto L_1000121a;
  /* 100011e0 push 0x1000a690 */
  push32((uint32_t)(0x1000a690u));
  /* 100011e5 push 0x1000be78 */
  push32((uint32_t)(0x1000be78u));
  /* 100011ea call ecx */
  call_ind((uint32_t)(ECX), 0x100011ecu);
  /* 100011ec mov ecx, dword ptr [0x1000bf64] */
  ECX = (r32((uint32_t)(0x1000bf64)));
  /* 100011f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100011f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100011f7 je 0x10001215 */
  if (C.zf) goto L_10001215;
  /* 100011f9 push 0x1000a678 */
  push32((uint32_t)(0x1000a678u));
  /* 100011fe push 0x1000bcf8 */
  push32((uint32_t)(0x1000bcf8u));
  /* 10001203 call ecx */
  call_ind((uint32_t)(ECX), 0x10001205u);
  /* 10001205 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 1000120a mov ecx, dword ptr [0x1000bf64] */
  ECX = (r32((uint32_t)(0x1000bf64)));
  /* 10001210 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001213 jmp 0x1000121a */
  goto L_1000121a;
L_10001215:;
  /* 10001215 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
L_1000121a:;
  /* 1000121a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000121c je 0x100013c7 */
  if (C.zf) goto L_100013c7;
  /* 10001222 push 0x1000a664 */
  push32((uint32_t)(0x1000a664u));
  /* 10001227 push 0x1000bcf0 */
  push32((uint32_t)(0x1000bcf0u));
  /* 1000122c call eax */
  call_ind((uint32_t)(EAX), 0x1000122eu);
  /* 1000122e mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 10001233 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001236 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001238 je 0x100013c1 */
  if (C.zf) goto L_100013c1;
  /* 1000123e push 0x1000a654 */
  push32((uint32_t)(0x1000a654u));
  /* 10001243 push 0x1000bd08 */
  push32((uint32_t)(0x1000bd08u));
  /* 10001248 call eax */
  call_ind((uint32_t)(EAX), 0x1000124au);
  /* 1000124a mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 1000124f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001252 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001254 je 0x100013c1 */
  if (C.zf) goto L_100013c1;
  /* 1000125a push 0x1000a640 */
  push32((uint32_t)(0x1000a640u));
  /* 1000125f push 0x1000be70 */
  push32((uint32_t)(0x1000be70u));
  /* 10001264 call eax */
  call_ind((uint32_t)(EAX), 0x10001266u);
  /* 10001266 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 1000126b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000126e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001270 je 0x100013c1 */
  if (C.zf) goto L_100013c1;
  /* 10001276 push 0x1000a634 */
  push32((uint32_t)(0x1000a634u));
  /* 1000127b push 0x1000bd00 */
  push32((uint32_t)(0x1000bd00u));
  /* 10001280 call eax */
  call_ind((uint32_t)(EAX), 0x10001282u);
  /* 10001282 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 10001287 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000128a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000128c je 0x100013c1 */
  if (C.zf) goto L_100013c1;
  /* 10001292 push 0x1000a628 */
  push32((uint32_t)(0x1000a628u));
  /* 10001297 push 0x1000bcd8 */
  push32((uint32_t)(0x1000bcd8u));
  /* 1000129c call eax */
  call_ind((uint32_t)(EAX), 0x1000129eu);
  /* 1000129e mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 100012a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100012a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100012a8 je 0x100013c1 */
  if (C.zf) goto L_100013c1;
  /* 100012ae push 0x1000a614 */
  push32((uint32_t)(0x1000a614u));
  /* 100012b3 push 0x1000bd90 */
  push32((uint32_t)(0x1000bd90u));
  /* 100012b8 call eax */
  call_ind((uint32_t)(EAX), 0x100012bau);
  /* 100012ba mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 100012bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100012c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100012c4 je 0x100013c1 */
  if (C.zf) goto L_100013c1;
  /* 100012ca push 0x1000a5fc */
  push32((uint32_t)(0x1000a5fcu));
  /* 100012cf push 0x1000bd10 */
  push32((uint32_t)(0x1000bd10u));
  /* 100012d4 call eax */
  call_ind((uint32_t)(EAX), 0x100012d6u);
  /* 100012d6 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 100012db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100012de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100012e0 je 0x100013c1 */
  if (C.zf) goto L_100013c1;
  /* 100012e6 push 0x1000a5e8 */
  push32((uint32_t)(0x1000a5e8u));
  /* 100012eb push 0x1000bb00 */
  push32((uint32_t)(0x1000bb00u));
  /* 100012f0 call eax */
  call_ind((uint32_t)(EAX), 0x100012f2u);
  /* 100012f2 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 100012f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100012fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100012fc je 0x100013c1 */
  if (C.zf) goto L_100013c1;
  /* 10001302 push 0x1000a5d8 */
  push32((uint32_t)(0x1000a5d8u));
  /* 10001307 push 0x1000bc80 */
  push32((uint32_t)(0x1000bc80u));
  /* 1000130c call eax */
  call_ind((uint32_t)(EAX), 0x1000130eu);
  /* 1000130e mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 10001313 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001316 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001318 je 0x100013c1 */
  if (C.zf) goto L_100013c1;
  /* 1000131e push 0x1000a5c4 */
  push32((uint32_t)(0x1000a5c4u));
  /* 10001323 push 0x1000be50 */
  push32((uint32_t)(0x1000be50u));
  /* 10001328 call eax */
  call_ind((uint32_t)(EAX), 0x1000132au);
  /* 1000132a mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 1000132f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001332 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001334 je 0x100013c1 */
  if (C.zf) goto L_100013c1;
  /* 1000133a push 0x1000a5b0 */
  push32((uint32_t)(0x1000a5b0u));
  /* 1000133f push 0x1000bda0 */
  push32((uint32_t)(0x1000bda0u));
  /* 10001344 call eax */
  call_ind((uint32_t)(EAX), 0x10001346u);
  /* 10001346 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 1000134b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000134e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001350 je 0x100013c1 */
  if (C.zf) goto L_100013c1;
  /* 10001352 push 0x1000a5a4 */
  push32((uint32_t)(0x1000a5a4u));
  /* 10001357 push 0x1000bec8 */
  push32((uint32_t)(0x1000bec8u));
  /* 1000135c call eax */
  call_ind((uint32_t)(EAX), 0x1000135eu);
  /* 1000135e mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 10001363 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001366 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001368 je 0x100013c1 */
  if (C.zf) goto L_100013c1;
  /* 1000136a push 0x1000a598 */
  push32((uint32_t)(0x1000a598u));
  /* 1000136f push 0x1000bce8 */
  push32((uint32_t)(0x1000bce8u));
  /* 10001374 call eax */
  call_ind((uint32_t)(EAX), 0x10001376u);
  /* 10001376 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 1000137b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000137e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001380 je 0x100013c1 */
  if (C.zf) goto L_100013c1;
  /* 10001382 push 0x1000a588 */
  push32((uint32_t)(0x1000a588u));
  /* 10001387 push 0x1000bc98 */
  push32((uint32_t)(0x1000bc98u));
  /* 1000138c call eax */
  call_ind((uint32_t)(EAX), 0x1000138eu);
  /* 1000138e mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 10001393 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001396 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001398 je 0x100013c1 */
  if (C.zf) goto L_100013c1;
  /* 1000139a push 0x1000a57c */
  push32((uint32_t)(0x1000a57cu));
  /* 1000139f push 0x1000bcc0 */
  push32((uint32_t)(0x1000bcc0u));
  /* 100013a4 call eax */
  call_ind((uint32_t)(EAX), 0x100013a6u);
  /* 100013a6 mov eax, dword ptr [0x1000bf60] */
  EAX = (r32((uint32_t)(0x1000bf60)));
  /* 100013ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100013ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100013b0 je 0x100013c1 */
  if (C.zf) goto L_100013c1;
  /* 100013b2 push 0x1000a570 */
  push32((uint32_t)(0x1000a570u));
  /* 100013b7 push 0x1000bf38 */
  push32((uint32_t)(0x1000bf38u));
  /* 100013bc call eax */
  call_ind((uint32_t)(EAX), 0x100013beu);
  /* 100013be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100013c1:;
  /* 100013c1 mov ecx, dword ptr [0x1000bf64] */
  ECX = (r32((uint32_t)(0x1000bf64)));
L_100013c7:;
  /* 100013c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100013c9 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100013cf push 0x1000a568 */
  push32((uint32_t)(0x1000a568u));
  /* 100013d4 push 0x1000bed0 */
  push32((uint32_t)(0x1000bed0u));
  /* 100013d9 call ecx */
  call_ind((uint32_t)(ECX), 0x100013dbu);
  /* 100013db mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100013e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100013e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100013e5 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100013eb push 0x1000a560 */
  push32((uint32_t)(0x1000a560u));
  /* 100013f0 push 0x1000bcd0 */
  push32((uint32_t)(0x1000bcd0u));
  /* 100013f5 call eax */
  call_ind((uint32_t)(EAX), 0x100013f7u);
  /* 100013f7 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100013fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100013ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001401 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001407 push 0x1000a548 */
  push32((uint32_t)(0x1000a548u));
  /* 1000140c push 0x1000bf30 */
  push32((uint32_t)(0x1000bf30u));
  /* 10001411 call eax */
  call_ind((uint32_t)(EAX), 0x10001413u);
  /* 10001413 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001418 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000141b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000141d je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001423 push 0x1000a540 */
  push32((uint32_t)(0x1000a540u));
  /* 10001428 push 0x1000bb28 */
  push32((uint32_t)(0x1000bb28u));
  /* 1000142d call eax */
  call_ind((uint32_t)(EAX), 0x1000142fu);
  /* 1000142f mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001434 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001437 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001439 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 1000143f push 0x1000a528 */
  push32((uint32_t)(0x1000a528u));
  /* 10001444 push 0x1000bf08 */
  push32((uint32_t)(0x1000bf08u));
  /* 10001449 call eax */
  call_ind((uint32_t)(EAX), 0x1000144bu);
  /* 1000144b mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001450 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001453 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001455 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 1000145b push 0x1000a50c */
  push32((uint32_t)(0x1000a50cu));
  /* 10001460 push 0x1000bf10 */
  push32((uint32_t)(0x1000bf10u));
  /* 10001465 call eax */
  call_ind((uint32_t)(EAX), 0x10001467u);
  /* 10001467 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 1000146c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000146f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001471 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001477 push 0x1000a4f0 */
  push32((uint32_t)(0x1000a4f0u));
  /* 1000147c push 0x1000bef8 */
  push32((uint32_t)(0x1000bef8u));
  /* 10001481 call eax */
  call_ind((uint32_t)(EAX), 0x10001483u);
  /* 10001483 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001488 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000148b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000148d je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001493 push 0x1000a4d4 */
  push32((uint32_t)(0x1000a4d4u));
  /* 10001498 push 0x1000bf00 */
  push32((uint32_t)(0x1000bf00u));
  /* 1000149d call eax */
  call_ind((uint32_t)(EAX), 0x1000149fu);
  /* 1000149f mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100014a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100014a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100014a9 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100014af push 0x1000a4b8 */
  push32((uint32_t)(0x1000a4b8u));
  /* 100014b4 push 0x1000bf18 */
  push32((uint32_t)(0x1000bf18u));
  /* 100014b9 call eax */
  call_ind((uint32_t)(EAX), 0x100014bbu);
  /* 100014bb mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100014c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100014c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100014c5 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100014cb push 0x1000a4a0 */
  push32((uint32_t)(0x1000a4a0u));
  /* 100014d0 push 0x1000bea8 */
  push32((uint32_t)(0x1000bea8u));
  /* 100014d5 call eax */
  call_ind((uint32_t)(EAX), 0x100014d7u);
  /* 100014d7 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100014dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100014df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100014e1 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100014e7 push 0x1000a484 */
  push32((uint32_t)(0x1000a484u));
  /* 100014ec push 0x1000be98 */
  push32((uint32_t)(0x1000be98u));
  /* 100014f1 call eax */
  call_ind((uint32_t)(EAX), 0x100014f3u);
  /* 100014f3 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100014f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100014fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100014fd je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001503 push 0x1000a468 */
  push32((uint32_t)(0x1000a468u));
  /* 10001508 push 0x1000bea0 */
  push32((uint32_t)(0x1000bea0u));
  /* 1000150d call eax */
  call_ind((uint32_t)(EAX), 0x1000150fu);
  /* 1000150f mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001514 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001517 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001519 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 1000151f push 0x1000a44c */
  push32((uint32_t)(0x1000a44cu));
  /* 10001524 push 0x1000beb0 */
  push32((uint32_t)(0x1000beb0u));
  /* 10001529 call eax */
  call_ind((uint32_t)(EAX), 0x1000152bu);
  /* 1000152b mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001530 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001533 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001535 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 1000153b push 0x1000a430 */
  push32((uint32_t)(0x1000a430u));
  /* 10001540 push 0x1000beb8 */
  push32((uint32_t)(0x1000beb8u));
  /* 10001545 call eax */
  call_ind((uint32_t)(EAX), 0x10001547u);
  /* 10001547 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 1000154c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000154f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001551 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001557 push 0x1000a418 */
  push32((uint32_t)(0x1000a418u));
  /* 1000155c push 0x1000bee0 */
  push32((uint32_t)(0x1000bee0u));
  /* 10001561 call eax */
  call_ind((uint32_t)(EAX), 0x10001563u);
  /* 10001563 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001568 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000156b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000156d je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001573 push 0x1000a400 */
  push32((uint32_t)(0x1000a400u));
  /* 10001578 push 0x1000bee8 */
  push32((uint32_t)(0x1000bee8u));
  /* 1000157d call eax */
  call_ind((uint32_t)(EAX), 0x1000157fu);
  /* 1000157f mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001584 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001587 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001589 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 1000158f push 0x1000a3e8 */
  push32((uint32_t)(0x1000a3e8u));
  /* 10001594 push 0x1000bef0 */
  push32((uint32_t)(0x1000bef0u));
  /* 10001599 call eax */
  call_ind((uint32_t)(EAX), 0x1000159bu);
  /* 1000159b mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100015a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100015a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100015a5 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100015ab push 0x1000a3d0 */
  push32((uint32_t)(0x1000a3d0u));
  /* 100015b0 push 0x1000be18 */
  push32((uint32_t)(0x1000be18u));
  /* 100015b5 call eax */
  call_ind((uint32_t)(EAX), 0x100015b7u);
  /* 100015b7 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100015bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100015bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100015c1 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100015c7 push 0x1000a3b8 */
  push32((uint32_t)(0x1000a3b8u));
  /* 100015cc push 0x1000be20 */
  push32((uint32_t)(0x1000be20u));
  /* 100015d1 call eax */
  call_ind((uint32_t)(EAX), 0x100015d3u);
  /* 100015d3 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100015d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100015db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100015dd je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100015e3 push 0x1000a3a0 */
  push32((uint32_t)(0x1000a3a0u));
  /* 100015e8 push 0x1000be30 */
  push32((uint32_t)(0x1000be30u));
  /* 100015ed call eax */
  call_ind((uint32_t)(EAX), 0x100015efu);
  /* 100015ef mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100015f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100015f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100015f9 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100015ff push 0x1000a38c */
  push32((uint32_t)(0x1000a38cu));
  /* 10001604 push 0x1000bd40 */
  push32((uint32_t)(0x1000bd40u));
  /* 10001609 call eax */
  call_ind((uint32_t)(EAX), 0x1000160bu);
  /* 1000160b mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001610 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001613 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001615 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 1000161b push 0x1000a378 */
  push32((uint32_t)(0x1000a378u));
  /* 10001620 push 0x1000bd38 */
  push32((uint32_t)(0x1000bd38u));
  /* 10001625 call eax */
  call_ind((uint32_t)(EAX), 0x10001627u);
  /* 10001627 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 1000162c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000162f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001631 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001637 push 0x1000a364 */
  push32((uint32_t)(0x1000a364u));
  /* 1000163c push 0x1000bd30 */
  push32((uint32_t)(0x1000bd30u));
  /* 10001641 call eax */
  call_ind((uint32_t)(EAX), 0x10001643u);
  /* 10001643 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001648 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000164b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000164d je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001653 push 0x1000a350 */
  push32((uint32_t)(0x1000a350u));
  /* 10001658 push 0x1000bd28 */
  push32((uint32_t)(0x1000bd28u));
  /* 1000165d call eax */
  call_ind((uint32_t)(EAX), 0x1000165fu);
  /* 1000165f mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001664 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001669 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 1000166f push 0x1000a33c */
  push32((uint32_t)(0x1000a33cu));
  /* 10001674 push 0x1000bd20 */
  push32((uint32_t)(0x1000bd20u));
  /* 10001679 call eax */
  call_ind((uint32_t)(EAX), 0x1000167bu);
  /* 1000167b mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001680 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001683 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001685 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 1000168b push 0x1000a328 */
  push32((uint32_t)(0x1000a328u));
  /* 10001690 push 0x1000bd18 */
  push32((uint32_t)(0x1000bd18u));
  /* 10001695 call eax */
  call_ind((uint32_t)(EAX), 0x10001697u);
  /* 10001697 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 1000169c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000169f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100016a1 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100016a7 push 0x1000a314 */
  push32((uint32_t)(0x1000a314u));
  /* 100016ac push 0x1000bdd0 */
  push32((uint32_t)(0x1000bdd0u));
  /* 100016b1 call eax */
  call_ind((uint32_t)(EAX), 0x100016b3u);
  /* 100016b3 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100016b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100016bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100016bd je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100016c3 push 0x1000a300 */
  push32((uint32_t)(0x1000a300u));
  /* 100016c8 push 0x1000bdc8 */
  push32((uint32_t)(0x1000bdc8u));
  /* 100016cd call eax */
  call_ind((uint32_t)(EAX), 0x100016cfu);
  /* 100016cf mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100016d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100016d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100016d9 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100016df push 0x1000a2ec */
  push32((uint32_t)(0x1000a2ecu));
  /* 100016e4 push 0x1000bdc0 */
  push32((uint32_t)(0x1000bdc0u));
  /* 100016e9 call eax */
  call_ind((uint32_t)(EAX), 0x100016ebu);
  /* 100016eb mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100016f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100016f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100016f5 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100016fb push 0x1000a2d8 */
  push32((uint32_t)(0x1000a2d8u));
  /* 10001700 push 0x1000bdb8 */
  push32((uint32_t)(0x1000bdb8u));
  /* 10001705 call eax */
  call_ind((uint32_t)(EAX), 0x10001707u);
  /* 10001707 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 1000170c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000170f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001711 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001717 push 0x1000a2c4 */
  push32((uint32_t)(0x1000a2c4u));
  /* 1000171c push 0x1000bda8 */
  push32((uint32_t)(0x1000bda8u));
  /* 10001721 call eax */
  call_ind((uint32_t)(EAX), 0x10001723u);
  /* 10001723 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001728 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000172b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000172d je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001733 push 0x1000a2b0 */
  push32((uint32_t)(0x1000a2b0u));
  /* 10001738 push 0x1000bde0 */
  push32((uint32_t)(0x1000bde0u));
  /* 1000173d call eax */
  call_ind((uint32_t)(EAX), 0x1000173fu);
  /* 1000173f mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001744 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001749 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 1000174f push 0x1000a2a0 */
  push32((uint32_t)(0x1000a2a0u));
  /* 10001754 push 0x1000be38 */
  push32((uint32_t)(0x1000be38u));
  /* 10001759 call eax */
  call_ind((uint32_t)(EAX), 0x1000175bu);
  /* 1000175b mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001760 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001763 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001765 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 1000176b push 0x1000a28c */
  push32((uint32_t)(0x1000a28cu));
  /* 10001770 push 0x1000be28 */
  push32((uint32_t)(0x1000be28u));
  /* 10001775 call eax */
  call_ind((uint32_t)(EAX), 0x10001777u);
  /* 10001777 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 1000177c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000177f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001781 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001787 push 0x1000a278 */
  push32((uint32_t)(0x1000a278u));
  /* 1000178c push 0x1000be00 */
  push32((uint32_t)(0x1000be00u));
  /* 10001791 call eax */
  call_ind((uint32_t)(EAX), 0x10001793u);
  /* 10001793 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001798 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000179b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000179d je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100017a3 push 0x1000a264 */
  push32((uint32_t)(0x1000a264u));
  /* 100017a8 push 0x1000bdf8 */
  push32((uint32_t)(0x1000bdf8u));
  /* 100017ad call eax */
  call_ind((uint32_t)(EAX), 0x100017afu);
  /* 100017af mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100017b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100017b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100017b9 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100017bf push 0x1000a250 */
  push32((uint32_t)(0x1000a250u));
  /* 100017c4 push 0x1000be08 */
  push32((uint32_t)(0x1000be08u));
  /* 100017c9 call eax */
  call_ind((uint32_t)(EAX), 0x100017cbu);
  /* 100017cb mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100017d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100017d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100017d5 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100017db push 0x1000a23c */
  push32((uint32_t)(0x1000a23cu));
  /* 100017e0 push 0x1000bd68 */
  push32((uint32_t)(0x1000bd68u));
  /* 100017e5 call eax */
  call_ind((uint32_t)(EAX), 0x100017e7u);
  /* 100017e7 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100017ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100017ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100017f1 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100017f7 push 0x1000a228 */
  push32((uint32_t)(0x1000a228u));
  /* 100017fc push 0x1000bd70 */
  push32((uint32_t)(0x1000bd70u));
  /* 10001801 call eax */
  call_ind((uint32_t)(EAX), 0x10001803u);
  /* 10001803 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001808 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000180b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000180d je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001813 push 0x1000a214 */
  push32((uint32_t)(0x1000a214u));
  /* 10001818 push 0x1000bd78 */
  push32((uint32_t)(0x1000bd78u));
  /* 1000181d call eax */
  call_ind((uint32_t)(EAX), 0x1000181fu);
  /* 1000181f mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001824 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001827 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001829 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 1000182f push 0x1000a200 */
  push32((uint32_t)(0x1000a200u));
  /* 10001834 push 0x1000bd80 */
  push32((uint32_t)(0x1000bd80u));
  /* 10001839 call eax */
  call_ind((uint32_t)(EAX), 0x1000183bu);
  /* 1000183b mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001840 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001843 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001845 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 1000184b push 0x1000a1f8 */
  push32((uint32_t)(0x1000a1f8u));
  /* 10001850 push 0x1000be10 */
  push32((uint32_t)(0x1000be10u));
  /* 10001855 call eax */
  call_ind((uint32_t)(EAX), 0x10001857u);
  /* 10001857 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 1000185c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000185f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001861 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001867 push 0x1000a1f0 */
  push32((uint32_t)(0x1000a1f0u));
  /* 1000186c push 0x1000bd60 */
  push32((uint32_t)(0x1000bd60u));
  /* 10001871 call eax */
  call_ind((uint32_t)(EAX), 0x10001873u);
  /* 10001873 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001878 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000187b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000187d je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001883 push 0x1000a1e8 */
  push32((uint32_t)(0x1000a1e8u));
  /* 10001888 push 0x1000bd48 */
  push32((uint32_t)(0x1000bd48u));
  /* 1000188d call eax */
  call_ind((uint32_t)(EAX), 0x1000188fu);
  /* 1000188f mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001894 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001897 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001899 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 1000189f push 0x1000a1e0 */
  push32((uint32_t)(0x1000a1e0u));
  /* 100018a4 push 0x1000bd50 */
  push32((uint32_t)(0x1000bd50u));
  /* 100018a9 call eax */
  call_ind((uint32_t)(EAX), 0x100018abu);
  /* 100018ab mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100018b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100018b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100018b5 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100018bb push 0x1000a1d8 */
  push32((uint32_t)(0x1000a1d8u));
  /* 100018c0 push 0x1000bd58 */
  push32((uint32_t)(0x1000bd58u));
  /* 100018c5 call eax */
  call_ind((uint32_t)(EAX), 0x100018c7u);
  /* 100018c7 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100018cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100018cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100018d1 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100018d7 push 0x1000a1d0 */
  push32((uint32_t)(0x1000a1d0u));
  /* 100018dc push 0x1000be88 */
  push32((uint32_t)(0x1000be88u));
  /* 100018e1 call eax */
  call_ind((uint32_t)(EAX), 0x100018e3u);
  /* 100018e3 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100018e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100018eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100018ed je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100018f3 push 0x1000a1c8 */
  push32((uint32_t)(0x1000a1c8u));
  /* 100018f8 push 0x1000bdb0 */
  push32((uint32_t)(0x1000bdb0u));
  /* 100018fd call eax */
  call_ind((uint32_t)(EAX), 0x100018ffu);
  /* 100018ff mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001904 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001907 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001909 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 1000190f push 0x1000a1c0 */
  push32((uint32_t)(0x1000a1c0u));
  /* 10001914 push 0x1000bdd8 */
  push32((uint32_t)(0x1000bdd8u));
  /* 10001919 call eax */
  call_ind((uint32_t)(EAX), 0x1000191bu);
  /* 1000191b mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001920 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001925 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 1000192b push 0x1000a1b8 */
  push32((uint32_t)(0x1000a1b8u));
  /* 10001930 push 0x1000bcb8 */
  push32((uint32_t)(0x1000bcb8u));
  /* 10001935 call eax */
  call_ind((uint32_t)(EAX), 0x10001937u);
  /* 10001937 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 1000193c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000193f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001941 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001947 push 0x1000a1b0 */
  push32((uint32_t)(0x1000a1b0u));
  /* 1000194c push 0x1000bba8 */
  push32((uint32_t)(0x1000bba8u));
  /* 10001951 call eax */
  call_ind((uint32_t)(EAX), 0x10001953u);
  /* 10001953 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001958 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000195b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000195d je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001963 push 0x1000a1a8 */
  push32((uint32_t)(0x1000a1a8u));
  /* 10001968 push 0x1000bd98 */
  push32((uint32_t)(0x1000bd98u));
  /* 1000196d call eax */
  call_ind((uint32_t)(EAX), 0x1000196fu);
  /* 1000196f mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001974 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001977 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001979 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 1000197f push 0x1000a1a0 */
  push32((uint32_t)(0x1000a1a0u));
  /* 10001984 push 0x1000bcc8 */
  push32((uint32_t)(0x1000bcc8u));
  /* 10001989 call eax */
  call_ind((uint32_t)(EAX), 0x1000198bu);
  /* 1000198b mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001990 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001993 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001995 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 1000199b push 0x1000a198 */
  push32((uint32_t)(0x1000a198u));
  /* 100019a0 push 0x1000be60 */
  push32((uint32_t)(0x1000be60u));
  /* 100019a5 call eax */
  call_ind((uint32_t)(EAX), 0x100019a7u);
  /* 100019a7 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100019ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100019af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100019b1 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100019b7 push 0x1000a190 */
  push32((uint32_t)(0x1000a190u));
  /* 100019bc push 0x1000be68 */
  push32((uint32_t)(0x1000be68u));
  /* 100019c1 call eax */
  call_ind((uint32_t)(EAX), 0x100019c3u);
  /* 100019c3 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100019c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100019cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100019cd je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100019d3 push 0x1000a188 */
  push32((uint32_t)(0x1000a188u));
  /* 100019d8 push 0x1000bc78 */
  push32((uint32_t)(0x1000bc78u));
  /* 100019dd call eax */
  call_ind((uint32_t)(EAX), 0x100019dfu);
  /* 100019df mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100019e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100019e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100019e9 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 100019eb push 0x1000a180 */
  push32((uint32_t)(0x1000a180u));
  /* 100019f0 push 0x1000bc88 */
  push32((uint32_t)(0x1000bc88u));
  /* 100019f5 call eax */
  call_ind((uint32_t)(EAX), 0x100019f7u);
  /* 100019f7 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 100019fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100019ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001a01 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001a03 push 0x1000a178 */
  push32((uint32_t)(0x1000a178u));
  /* 10001a08 push 0x1000bb10 */
  push32((uint32_t)(0x1000bb10u));
  /* 10001a0d call eax */
  call_ind((uint32_t)(EAX), 0x10001a0fu);
  /* 10001a0f mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001a14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001a17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001a19 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001a1b push 0x1000a170 */
  push32((uint32_t)(0x1000a170u));
  /* 10001a20 push 0x1000bb08 */
  push32((uint32_t)(0x1000bb08u));
  /* 10001a25 call eax */
  call_ind((uint32_t)(EAX), 0x10001a27u);
  /* 10001a27 mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001a2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001a2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001a31 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001a33 push 0x1000a168 */
  push32((uint32_t)(0x1000a168u));
  /* 10001a38 push 0x1000bca0 */
  push32((uint32_t)(0x1000bca0u));
  /* 10001a3d call eax */
  call_ind((uint32_t)(EAX), 0x10001a3fu);
  /* 10001a3f mov eax, dword ptr [0x1000bf64] */
  EAX = (r32((uint32_t)(0x1000bf64)));
  /* 10001a44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001a47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001a49 je 0x10001a5a */
  if (C.zf) goto L_10001a5a;
  /* 10001a4b push 0x1000a160 */
  push32((uint32_t)(0x1000a160u));
  /* 10001a50 push 0x1000bcb0 */
  push32((uint32_t)(0x1000bcb0u));
  /* 10001a55 call eax */
  call_ind((uint32_t)(EAX), 0x10001a57u);
  /* 10001a57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001a5a:;
  /* 10001a5a push 4 */
  push32((uint32_t)(0x4u));
  /* 10001a5c push 4 */
  push32((uint32_t)(0x4u));
  /* 10001a5e push 9 */
  push32((uint32_t)(0x9u));
  /* 10001a60 call dword ptr [0x1000c07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c07c))), 0x10001a66u);
  /* 10001a66 push 6 */
  push32((uint32_t)(0x6u));
  /* 10001a68 call dword ptr [0x1000c088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c088))), 0x10001a6eu);
  /* 10001a6e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10001a70 push 0x1000a14c */
  push32((uint32_t)(0x1000a14cu));
  /* 10001a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10001a77 call dword ptr [0x1000c08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c08c))), 0x10001a7du);
  /* 10001a7d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001a7f push 0x1000a138 */
  push32((uint32_t)(0x1000a138u));
  /* 10001a84 push 1 */
  push32((uint32_t)(0x1u));
  /* 10001a86 call dword ptr [0x1000c08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c08c))), 0x10001a8cu);
  /* 10001a8c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001a8e push 0x1000a124 */
  push32((uint32_t)(0x1000a124u));
  /* 10001a93 push 2 */
  push32((uint32_t)(0x2u));
  /* 10001a95 call dword ptr [0x1000c08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c08c))), 0x10001a9bu);
  /* 10001a9b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001a9d push 0x1000a110 */
  push32((uint32_t)(0x1000a110u));
  /* 10001aa2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10001aa4 call dword ptr [0x1000c08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c08c))), 0x10001aaau);
  /* 10001aaa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001aad push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001aaf push 0x1000a0fc */
  push32((uint32_t)(0x1000a0fcu));
  /* 10001ab4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10001ab6 call dword ptr [0x1000c08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c08c))), 0x10001abcu);
  /* 10001abc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001abe push 0x1000a0e8 */
  push32((uint32_t)(0x1000a0e8u));
  /* 10001ac3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10001ac5 call dword ptr [0x1000c08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c08c))), 0x10001acbu);
  /* 10001acb push 0x1000a768 */
  push32((uint32_t)(0x1000a768u));
  /* 10001ad0 call dword ptr [0x1000c0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0c0))), 0x10001ad6u);
  /* 10001ad6 push 0x1000a0dc */
  push32((uint32_t)(0x1000a0dcu));
  /* 10001adb call dword ptr [0x1000c0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0bc))), 0x10001ae1u);
  /* 10001ae1 push 0x1000a0cc */
  push32((uint32_t)(0x1000a0ccu));
  /* 10001ae6 call dword ptr [0x1000c0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0c4))), 0x10001aecu);
  /* 10001aec push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10001af1 call dword ptr [0x1000c090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c090))), 0x10001af7u);
  /* 10001af7 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10001afc call dword ptr [0x1000c094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c094))), 0x10001b02u);
  /* 10001b02 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 10001b07 call dword ptr [0x1000c098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c098))), 0x10001b0du);
  /* 10001b0d push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10001b12 call dword ptr [0x1000c09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c09c))), 0x10001b18u);
  /* 10001b18 push 5 */
  push32((uint32_t)(0x5u));
  /* 10001b1a call dword ptr [0x1000c0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a0))), 0x10001b20u);
  /* 10001b20 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001b23 ret  */
  ESPCHK(0x10001060u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b30 @ 0x10001b30 (260 bytes, 71 insns) */
void f_10001b30(void) {
  FTRACE(0x10001b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10001b30 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001b32 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10001b34 push 0x1000bf08 */
  push32((uint32_t)(0x1000bf08u));
  /* 10001b39 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001b3fu);
  /* 10001b3f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001b41 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10001b43 push 0x1000bf10 */
  push32((uint32_t)(0x1000bf10u));
  /* 10001b48 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001b4eu);
  /* 10001b4e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001b50 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10001b52 push 0x1000bef8 */
  push32((uint32_t)(0x1000bef8u));
  /* 10001b57 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001b5du);
  /* 10001b5d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001b5f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10001b61 push 0x1000bf00 */
  push32((uint32_t)(0x1000bf00u));
  /* 10001b66 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001b6cu);
  /* 10001b6c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001b6e push 0xa */
  push32((uint32_t)(0xau));
  /* 10001b70 push 0x1000bf18 */
  push32((uint32_t)(0x1000bf18u));
  /* 10001b75 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001b7bu);
  /* 10001b7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001b7d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10001b7f push 0x1000bea8 */
  push32((uint32_t)(0x1000bea8u));
  /* 10001b84 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001b8au);
  /* 10001b8a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001b8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001b8f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10001b91 push 0x1000be98 */
  push32((uint32_t)(0x1000be98u));
  /* 10001b96 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001b9cu);
  /* 10001b9c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001b9e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10001ba0 push 0x1000bea0 */
  push32((uint32_t)(0x1000bea0u));
  /* 10001ba5 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001babu);
  /* 10001bab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001bad push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10001baf push 0x1000beb0 */
  push32((uint32_t)(0x1000beb0u));
  /* 10001bb4 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001bbau);
  /* 10001bba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001bbc push 0xa */
  push32((uint32_t)(0xau));
  /* 10001bbe push 0x1000beb8 */
  push32((uint32_t)(0x1000beb8u));
  /* 10001bc3 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001bc9u);
  /* 10001bc9 mov eax, dword ptr [0x1000bce0] */
  EAX = (r32((uint32_t)(0x1000bce0)));
  /* 10001bce add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001bd1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10001bd4 jne 0x10001c33 */
  if (!C.zf) goto L_10001c33;
  /* 10001bd6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001bd8 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001bda push 0x1000bee0 */
  push32((uint32_t)(0x1000bee0u));
  /* 10001bdf call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001be5u);
  /* 10001be5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001be7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001be9 push 0x1000bee8 */
  push32((uint32_t)(0x1000bee8u));
  /* 10001bee call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001bf4u);
  /* 10001bf4 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001bf6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001bf8 push 0x1000bef0 */
  push32((uint32_t)(0x1000bef0u));
  /* 10001bfd call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001c03u);
  /* 10001c03 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001c05 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001c07 push 0x1000be18 */
  push32((uint32_t)(0x1000be18u));
  /* 10001c0c call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001c12u);
  /* 10001c12 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001c14 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001c16 push 0x1000be20 */
  push32((uint32_t)(0x1000be20u));
  /* 10001c1b call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001c21u);
  /* 10001c21 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001c23 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001c25 push 0x1000be30 */
  push32((uint32_t)(0x1000be30u));
  /* 10001c2a call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001c30u);
  /* 10001c30 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001c33:;
  /* 10001c33 ret  */
  ESPCHK(0x10001b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c40 @ 0x10001c40 (94 bytes, 26 insns) */
void f_10001c40(void) {
  FTRACE(0x10001c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10001c40 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001c42 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001c44 push 0x1000bee0 */
  push32((uint32_t)(0x1000bee0u));
  /* 10001c49 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001c4fu);
  /* 10001c4f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001c51 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001c53 push 0x1000bee8 */
  push32((uint32_t)(0x1000bee8u));
  /* 10001c58 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001c5eu);
  /* 10001c5e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001c60 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001c62 push 0x1000bef0 */
  push32((uint32_t)(0x1000bef0u));
  /* 10001c67 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001c6du);
  /* 10001c6d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001c6f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001c71 push 0x1000be18 */
  push32((uint32_t)(0x1000be18u));
  /* 10001c76 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001c7cu);
  /* 10001c7c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001c7e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001c80 push 0x1000be20 */
  push32((uint32_t)(0x1000be20u));
  /* 10001c85 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001c8bu);
  /* 10001c8b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001c8d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001c8f push 0x1000be30 */
  push32((uint32_t)(0x1000be30u));
  /* 10001c94 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001c9au);
  /* 10001c9a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001c9d ret  */
  ESPCHK(0x10001c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ca0 @ 0x10001ca0 (136 bytes, 37 insns) */
void f_10001ca0(void) {
  FTRACE(0x10001ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10001ca0 cmp dword ptr [0x1000bce0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1000bce0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10001ca7 jne 0x10001ce8 */
  if (!C.zf) goto L_10001ce8;
  /* 10001ca9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001cab push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001cad push 0x1000be38 */
  push32((uint32_t)(0x1000be38u));
  /* 10001cb2 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001cb8u);
  /* 10001cb8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001cba push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001cbc push 0x1000be28 */
  push32((uint32_t)(0x1000be28u));
  /* 10001cc1 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001cc7u);
  /* 10001cc7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001cc9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001ccb push 0x1000be00 */
  push32((uint32_t)(0x1000be00u));
  /* 10001cd0 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001cd6u);
  /* 10001cd6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001cd8 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001cda push 0x1000bdf8 */
  push32((uint32_t)(0x1000bdf8u));
  /* 10001cdf call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001ce5u);
  /* 10001ce5 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001ce8:;
  /* 10001ce8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001cea push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001cec push 0x1000bd68 */
  push32((uint32_t)(0x1000bd68u));
  /* 10001cf1 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001cf7u);
  /* 10001cf7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001cf9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001cfb push 0x1000bd70 */
  push32((uint32_t)(0x1000bd70u));
  /* 10001d00 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001d06u);
  /* 10001d06 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001d08 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001d0a push 0x1000bd78 */
  push32((uint32_t)(0x1000bd78u));
  /* 10001d0f call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001d15u);
  /* 10001d15 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001d17 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001d19 push 0x1000bd80 */
  push32((uint32_t)(0x1000bd80u));
  /* 10001d1e call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10001d24u);
  /* 10001d24 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001d27 ret  */
  ESPCHK(0x10001ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d30 @ 0x10001d30 (2415 bytes, 686 insns) */
void f_10001d30(void) {
  FTRACE(0x10001d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10001d30 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10001d33 push ebx */
  push32((uint32_t)(EBX));
  /* 10001d34 push ebp */
  push32((uint32_t)(EBP));
  /* 10001d35 push esi */
  push32((uint32_t)(ESI));
  /* 10001d36 push edi */
  push32((uint32_t)(EDI));
  /* 10001d37 push 0x1000a030 */
  push32((uint32_t)(0x1000a030u));
  /* 10001d3c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10001d3e call dword ptr [0x1000c074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c074))), 0x10001d44u);
  /* 10001d44 push 3 */
  push32((uint32_t)(0x3u));
  /* 10001d46 call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10001d4cu);
  /* 10001d4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10001d4e mov edi, eax */
  EDI = (EAX);
  /* 10001d50 call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10001d56u);
  /* 10001d56 push 2 */
  push32((uint32_t)(0x2u));
  /* 10001d58 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 10001d5c call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10001d62u);
  /* 10001d62 mov ebx, 1 */
  EBX = (0x1u);
  /* 10001d67 mov esi, eax */
  ESI = (EAX);
  /* 10001d69 push ebx */
  push32((uint32_t)(EBX));
  /* 10001d6a mov dword ptr [esp + 0x30], esi */
  w32((uint32_t)(ESP + 0x30), (ESI));
  /* 10001d6e call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10001d74u);
  /* 10001d74 push 5 */
  push32((uint32_t)(0x5u));
  /* 10001d76 mov ebp, eax */
  EBP = (EAX);
  /* 10001d78 call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10001d7eu);
  /* 10001d7e push 4 */
  push32((uint32_t)(0x4u));
  /* 10001d80 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10001d84 call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10001d8au);
  /* 10001d8a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001d8c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001d8e push ebx */
  push32((uint32_t)(EBX));
  /* 10001d8f push 0x1000bd08 */
  push32((uint32_t)(0x1000bd08u));
  /* 10001d94 mov dword ptr [esp + 0x4c], eax */
  w32((uint32_t)(ESP + 0x4c), (EAX));
  /* 10001d98 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001d9eu);
  /* 10001d9e push 0x1000bd08 */
  push32((uint32_t)(0x1000bd08u));
  /* 10001da3 call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10001da9u);
  /* 10001da9 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001dac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001dae je 0x10002016 */
  if (C.zf) goto L_10002016;
  /* 10001db4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001db6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001db8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10001dba push 0x1000bcf0 */
  push32((uint32_t)(0x1000bcf0u));
  /* 10001dbf call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001dc5u);
  /* 10001dc5 push 0x1000bcf0 */
  push32((uint32_t)(0x1000bcf0u));
  /* 10001dca call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10001dd0u);
  /* 10001dd0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001dd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001dd5 je 0x10002016 */
  if (C.zf) goto L_10002016;
  /* 10001ddb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001ddd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001ddf push ebx */
  push32((uint32_t)(EBX));
  /* 10001de0 push 0x1000be50 */
  push32((uint32_t)(0x1000be50u));
  /* 10001de5 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001debu);
  /* 10001deb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001ded push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001def push ebx */
  push32((uint32_t)(EBX));
  /* 10001df0 push 0x1000be70 */
  push32((uint32_t)(0x1000be70u));
  /* 10001df5 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001dfbu);
  /* 10001dfb push 0x1000bcd8 */
  push32((uint32_t)(0x1000bcd8u));
  /* 10001e00 call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10001e06u);
  /* 10001e06 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001e09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001e0b je 0x10001e71 */
  if (C.zf) goto L_10001e71;
  /* 10001e0d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001e0f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001e11 push 2 */
  push32((uint32_t)(0x2u));
  /* 10001e13 push 0x1000be70 */
  push32((uint32_t)(0x1000be70u));
  /* 10001e18 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001e1eu);
  /* 10001e1e push 0x1000bcf0 */
  push32((uint32_t)(0x1000bcf0u));
  /* 10001e23 call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10001e29u);
  /* 10001e29 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001e2c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10001e2e jle 0x10001e71 */
  if ((C.zf||C.sf!=C.of)) goto L_10001e71;
  /* 10001e30 cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10001e36 jle 0x10001e4c */
  if ((C.zf||C.sf!=C.of)) goto L_10001e4c;
  /* 10001e38 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001e3a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001e3c push 3 */
  push32((uint32_t)(0x3u));
  /* 10001e3e push 0x1000be70 */
  push32((uint32_t)(0x1000be70u));
  /* 10001e43 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001e49u);
  /* 10001e49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001e4c:;
  /* 10001e4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001e4e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001e50 push 4 */
  push32((uint32_t)(0x4u));
  /* 10001e52 push 0x1000be70 */
  push32((uint32_t)(0x1000be70u));
  /* 10001e57 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001e5du);
  /* 10001e5d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001e5f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10001e61 push 5 */
  push32((uint32_t)(0x5u));
  /* 10001e63 push 0x1000be70 */
  push32((uint32_t)(0x1000be70u));
  /* 10001e68 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001e6eu);
  /* 10001e6e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001e71:;
  /* 10001e71 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001e73 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001e75 push ebx */
  push32((uint32_t)(EBX));
  /* 10001e76 push 0x1000bd00 */
  push32((uint32_t)(0x1000bd00u));
  /* 10001e7b call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001e81u);
  /* 10001e81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001e84 call dword ptr [0x1000c0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0d0))), 0x10001e8au);
  /* 10001e8a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10001e8c je 0x10001ef5 */
  if (C.zf) goto L_10001ef5;
  /* 10001e8e cmp edi, 0x4b0 */
  { uint32_t _a=(EDI),_b=(0x4b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10001e94 jle 0x10001ef5 */
  if ((C.zf||C.sf!=C.of)) goto L_10001ef5;
  /* 10001e96 push 2 */
  push32((uint32_t)(0x2u));
  /* 10001e98 push 0xa */
  push32((uint32_t)(0xau));
  /* 10001e9a push 3 */
  push32((uint32_t)(0x3u));
  /* 10001e9c push 0x1000bd00 */
  push32((uint32_t)(0x1000bd00u));
  /* 10001ea1 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001ea7u);
  /* 10001ea7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001eaa cmp edi, 0x7d0 */
  { uint32_t _a=(EDI),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10001eb0 jle 0x10001ef5 */
  if ((C.zf||C.sf!=C.of)) goto L_10001ef5;
  /* 10001eb2 push ebx */
  push32((uint32_t)(EBX));
  /* 10001eb3 push 0xa */
  push32((uint32_t)(0xau));
  /* 10001eb5 push 5 */
  push32((uint32_t)(0x5u));
  /* 10001eb7 push 0x1000bd00 */
  push32((uint32_t)(0x1000bd00u));
  /* 10001ebc call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001ec2u);
  /* 10001ec2 push ebx */
  push32((uint32_t)(EBX));
  /* 10001ec3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10001ec5 push 6 */
  push32((uint32_t)(0x6u));
  /* 10001ec7 push 0x1000bd00 */
  push32((uint32_t)(0x1000bd00u));
  /* 10001ecc call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001ed2u);
  /* 10001ed2 push ebx */
  push32((uint32_t)(EBX));
  /* 10001ed3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10001ed5 push 7 */
  push32((uint32_t)(0x7u));
  /* 10001ed7 push 0x1000bd00 */
  push32((uint32_t)(0x1000bd00u));
  /* 10001edc call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001ee2u);
  /* 10001ee2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001ee4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001ee6 push ebx */
  push32((uint32_t)(EBX));
  /* 10001ee7 push 0x1000bc80 */
  push32((uint32_t)(0x1000bc80u));
  /* 10001eec call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001ef2u);
  /* 10001ef2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001ef5:;
  /* 10001ef5 push 0x1000bcd8 */
  push32((uint32_t)(0x1000bcd8u));
  /* 10001efa call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10001f00u);
  /* 10001f00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001f03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001f05 je 0x10001f73 */
  if (C.zf) goto L_10001f73;
  /* 10001f07 push 0x1000be70 */
  push32((uint32_t)(0x1000be70u));
  /* 10001f0c call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10001f12u);
  /* 10001f12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001f15 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10001f17 jle 0x10001f73 */
  if ((C.zf||C.sf!=C.of)) goto L_10001f73;
  /* 10001f19 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001f1b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001f1d push 2 */
  push32((uint32_t)(0x2u));
  /* 10001f1f push 0x1000bd90 */
  push32((uint32_t)(0x1000bd90u));
  /* 10001f24 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001f2au);
  /* 10001f2a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001f2c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10001f2e push 3 */
  push32((uint32_t)(0x3u));
  /* 10001f30 push 0x1000bd90 */
  push32((uint32_t)(0x1000bd90u));
  /* 10001f35 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001f3bu);
  /* 10001f3b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001f3d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10001f3f push 4 */
  push32((uint32_t)(0x4u));
  /* 10001f41 push 0x1000bd90 */
  push32((uint32_t)(0x1000bd90u));
  /* 10001f46 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001f4cu);
  /* 10001f4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001f4e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10001f50 push 5 */
  push32((uint32_t)(0x5u));
  /* 10001f52 push 0x1000bd90 */
  push32((uint32_t)(0x1000bd90u));
  /* 10001f57 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001f5du);
  /* 10001f5d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001f60 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001f62 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001f64 push ebx */
  push32((uint32_t)(EBX));
  /* 10001f65 push 0x1000bb00 */
  push32((uint32_t)(0x1000bb00u));
  /* 10001f6a call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001f70u);
  /* 10001f70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001f73:;
  /* 10001f73 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10001f75 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10001f77 push ebx */
  push32((uint32_t)(EBX));
  /* 10001f78 push 0x1000bcd8 */
  push32((uint32_t)(0x1000bcd8u));
  /* 10001f7d call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001f83u);
  /* 10001f83 push 0x1000bec8 */
  push32((uint32_t)(0x1000bec8u));
  /* 10001f88 call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10001f8eu);
  /* 10001f8e push 0x1000bec8 */
  push32((uint32_t)(0x1000bec8u));
  /* 10001f93 mov esi, eax */
  ESI = (EAX);
  /* 10001f95 call dword ptr [0x1000c0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0ac))), 0x10001f9bu);
  /* 10001f9b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001f9e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10001fa0 jne 0x10001fd9 */
  if (!C.zf) goto L_10001fd9;
  /* 10001fa2 push 0x1000bd90 */
  push32((uint32_t)(0x1000bd90u));
  /* 10001fa7 call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10001fadu);
  /* 10001fad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001fb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001fb2 je 0x10001fd9 */
  if (C.zf) goto L_10001fd9;
  /* 10001fb4 push 0xa */
  push32((uint32_t)(0xau));
  /* 10001fb6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10001fb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10001fba push 0x1000bec8 */
  push32((uint32_t)(0x1000bec8u));
  /* 10001fbf call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001fc5u);
  /* 10001fc5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10001fc7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10001fc9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10001fcb push 0x1000bec8 */
  push32((uint32_t)(0x1000bec8u));
  /* 10001fd0 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001fd6u);
  /* 10001fd6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001fd9:;
  /* 10001fd9 push 0x1000be70 */
  push32((uint32_t)(0x1000be70u));
  /* 10001fde call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10001fe4u);
  /* 10001fe4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10001fe7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10001fe9 je 0x10001fff */
  if (C.zf) goto L_10001fff;
  /* 10001feb push 0xa */
  push32((uint32_t)(0xau));
  /* 10001fed push 0xa */
  push32((uint32_t)(0xau));
  /* 10001fef push 2 */
  push32((uint32_t)(0x2u));
  /* 10001ff1 push 0x1000bd08 */
  push32((uint32_t)(0x1000bd08u));
  /* 10001ff6 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10001ffcu);
  /* 10001ffc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10001fff:;
  /* 10001fff push 0xa */
  push32((uint32_t)(0xau));
  /* 10002001 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10002003 push ebx */
  push32((uint32_t)(EBX));
  /* 10002004 push 0x1000bd10 */
  push32((uint32_t)(0x1000bd10u));
  /* 10002009 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x1000200fu);
  /* 1000200f mov esi, dword ptr [esp + 0x28] */
  ESI = (r32((uint32_t)(ESP + 0x28)));
  /* 10002013 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002016:;
  /* 10002016 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002018 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000201a push 0x1000bf30 */
  push32((uint32_t)(0x1000bf30u));
  /* 1000201f call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002025u);
  /* 10002025 push 0x1000bf30 */
  push32((uint32_t)(0x1000bf30u));
  /* 1000202a call dword ptr [0x1000c0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0b8))), 0x10002030u);
  /* 10002030 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002033 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10002035 je 0x1000215f */
  if (C.zf) goto L_1000215f;
  /* 1000203b cmp edi, 0x2bc */
  { uint32_t _a=(EDI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002041 jle 0x100020d0 */
  if ((C.zf||C.sf!=C.of)) goto L_100020d0;
  /* 10002047 cmp dword ptr [0x1000bce0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1000bce0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000204d jne 0x100020a5 */
  if (!C.zf) goto L_100020a5;
  /* 1000204f push 0x1000bd88 */
  push32((uint32_t)(0x1000bd88u));
  /* 10002054 call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x1000205au);
  /* 1000205a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000205d cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002060 jge 0x10002086 */
  if ((C.sf==C.of)) goto L_10002086;
  /* 10002062 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10002064 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10002066 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 1000206b push 0x1000bb38 */
  push32((uint32_t)(0x1000bb38u));
  /* 10002070 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002076u);
  /* 10002076 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002078 push 0xa */
  push32((uint32_t)(0xau));
  /* 1000207a push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 1000207f push 0x1000bd88 */
  push32((uint32_t)(0x1000bd88u));
  /* 10002084 jmp 0x100020c7 */
  goto L_100020c7;
L_10002086:;
  /* 10002086 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10002088 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1000208a push 0x320 */
  push32((uint32_t)(0x320u));
  /* 1000208f push 0x1000be48 */
  push32((uint32_t)(0x1000be48u));
  /* 10002094 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x1000209au);
  /* 1000209a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000209c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1000209e push 0x320 */
  push32((uint32_t)(0x320u));
  /* 100020a3 jmp 0x100020c2 */
  goto L_100020c2;
L_100020a5:;
  /* 100020a5 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 100020a7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100020a9 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 100020ae push 0x1000be48 */
  push32((uint32_t)(0x1000be48u));
  /* 100020b3 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x100020b9u);
  /* 100020b9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100020bb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100020bd push 0x190 */
  push32((uint32_t)(0x190u));
L_100020c2:;
  /* 100020c2 push 0x1000bb38 */
  push32((uint32_t)(0x1000bb38u));
L_100020c7:;
  /* 100020c7 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x100020cdu);
  /* 100020cd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100020d0:;
  /* 100020d0 cmp edi, 0xfa */
  { uint32_t _a=(EDI),_b=(0xfau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100020d6 jle 0x100020ef */
  if ((C.zf||C.sf!=C.of)) goto L_100020ef;
  /* 100020d8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100020da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100020dc push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100020e1 push 0x1000bdf0 */
  push32((uint32_t)(0x1000bdf0u));
  /* 100020e6 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x100020ecu);
  /* 100020ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100020ef:;
  /* 100020ef cmp edi, 0x12c */
  { uint32_t _a=(EDI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100020f5 jle 0x1000213e */
  if ((C.zf||C.sf!=C.of)) goto L_1000213e;
  /* 100020f7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100020f9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100020fb push 0x190 */
  push32((uint32_t)(0x190u));
  /* 10002100 push 0x1000bf40 */
  push32((uint32_t)(0x1000bf40u));
  /* 10002105 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x1000210bu);
  /* 1000210b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000210d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1000210f push 0x190 */
  push32((uint32_t)(0x190u));
  /* 10002114 push 0x1000bf40 */
  push32((uint32_t)(0x1000bf40u));
  /* 10002119 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x1000211fu);
  /* 1000211f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002122 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002128 jle 0x1000213e */
  if ((C.zf||C.sf!=C.of)) goto L_1000213e;
  /* 1000212a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000212c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000212e push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10002130 push 0x1000bde8 */
  push32((uint32_t)(0x1000bde8u));
  /* 10002135 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x1000213bu);
  /* 1000213b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000213e:;
  /* 1000213e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002140 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10002142 push 0x1000bd60 */
  push32((uint32_t)(0x1000bd60u));
  /* 10002147 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x1000214du);
  /* 1000214d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000214f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10002151 push 0x1000bb28 */
  push32((uint32_t)(0x1000bb28u));
  /* 10002156 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x1000215cu);
  /* 1000215c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000215f:;
  /* 1000215f cmp dword ptr [0x1000bce0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1000bce0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002165 jne 0x1000217f */
  if (!C.zf) goto L_1000217f;
  /* 10002167 push 0x1000bdf0 */
  push32((uint32_t)(0x1000bdf0u));
  /* 1000216c call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10002172u);
  /* 10002172 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002175 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002178 jle 0x1000217f */
  if ((C.zf||C.sf!=C.of)) goto L_1000217f;
  /* 1000217a call 0x10001c40 */
  push32(0x1000217fu); f_10001c40();
L_1000217f:;
  /* 1000217f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002181 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002183 push 0x1000be10 */
  push32((uint32_t)(0x1000be10u));
  /* 10002188 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x1000218eu);
  /* 1000218e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002190 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10002192 push 0x1000be88 */
  push32((uint32_t)(0x1000be88u));
  /* 10002197 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x1000219du);
  /* 1000219d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000219f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100021a1 push 0x1000bdb0 */
  push32((uint32_t)(0x1000bdb0u));
  /* 100021a6 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100021acu);
  /* 100021ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100021ae push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100021b0 push 0x1000bd58 */
  push32((uint32_t)(0x1000bd58u));
  /* 100021b5 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100021bbu);
  /* 100021bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100021bd push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100021bf push 0x1000bd60 */
  push32((uint32_t)(0x1000bd60u));
  /* 100021c4 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100021cau);
  /* 100021ca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100021cc push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100021ce push 0x1000bd48 */
  push32((uint32_t)(0x1000bd48u));
  /* 100021d3 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100021d9u);
  /* 100021d9 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100021dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100021de push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100021e0 push 0x1000bd50 */
  push32((uint32_t)(0x1000bd50u));
  /* 100021e5 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100021ebu);
  /* 100021eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100021ed push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100021ef push 0x1000bba8 */
  push32((uint32_t)(0x1000bba8u));
  /* 100021f4 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100021fau);
  /* 100021fa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100021fc push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100021fe push 0x1000bcd0 */
  push32((uint32_t)(0x1000bcd0u));
  /* 10002203 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002209u);
  /* 10002209 push 0x1000be10 */
  push32((uint32_t)(0x1000be10u));
  /* 1000220e call dword ptr [0x1000c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0b4))), 0x10002214u);
  /* 10002214 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002217 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10002219 je 0x100023c1 */
  if (C.zf) goto L_100023c1;
  /* 1000221f cmp dword ptr [0x1000bce0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1000bce0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002225 jne 0x1000223b */
  if (!C.zf) goto L_1000223b;
  /* 10002227 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002229 push 0xa */
  push32((uint32_t)(0xau));
  /* 1000222b push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1000222d push 0x1000bca8 */
  push32((uint32_t)(0x1000bca8u));
  /* 10002232 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002238u);
  /* 10002238 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000223b:;
  /* 1000223b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000223d push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1000223f push 0x1000bdd8 */
  push32((uint32_t)(0x1000bdd8u));
  /* 10002244 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x1000224au);
  /* 1000224a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000224c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1000224e push 0x1000bd98 */
  push32((uint32_t)(0x1000bd98u));
  /* 10002253 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002259u);
  /* 10002259 push 0x1000bd98 */
  push32((uint32_t)(0x1000bd98u));
  /* 1000225e call dword ptr [0x1000c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0b4))), 0x10002264u);
  /* 10002264 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002267 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10002269 je 0x1000228e */
  if (C.zf) goto L_1000228e;
  /* 1000226b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1000226d push 0xa */
  push32((uint32_t)(0xau));
  /* 1000226f push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10002271 push 0x1000be58 */
  push32((uint32_t)(0x1000be58u));
  /* 10002276 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x1000227cu);
  /* 1000227c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000227e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10002280 push 0x1000bc78 */
  push32((uint32_t)(0x1000bc78u));
  /* 10002285 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x1000228bu);
  /* 1000228b add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000228e:;
  /* 1000228e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002290 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10002292 push 0x1000bb10 */
  push32((uint32_t)(0x1000bb10u));
  /* 10002297 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x1000229du);
  /* 1000229d call 0x10001ca0 */
  push32(0x100022a2u); f_10001ca0();
  /* 100022a2 push 0x1000bd80 */
  push32((uint32_t)(0x1000bd80u));
  /* 100022a7 call dword ptr [0x1000c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0b4))), 0x100022adu);
  /* 100022ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100022b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100022b2 je 0x100022c8 */
  if (C.zf) goto L_100022c8;
  /* 100022b4 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100022b6 push 0xa */
  push32((uint32_t)(0xau));
  /* 100022b8 push 0xa */
  push32((uint32_t)(0xau));
  /* 100022ba push 0x1000bb30 */
  push32((uint32_t)(0x1000bb30u));
  /* 100022bf call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x100022c5u);
  /* 100022c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100022c8:;
  /* 100022c8 push 0x1000bdf8 */
  push32((uint32_t)(0x1000bdf8u));
  /* 100022cd call dword ptr [0x1000c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0b4))), 0x100022d3u);
  /* 100022d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100022d6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100022d8 je 0x100022ee */
  if (C.zf) goto L_100022ee;
  /* 100022da push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100022dc push 0xa */
  push32((uint32_t)(0xau));
  /* 100022de push 0xc */
  push32((uint32_t)(0xcu));
  /* 100022e0 push 0x1000bf28 */
  push32((uint32_t)(0x1000bf28u));
  /* 100022e5 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x100022ebu);
  /* 100022eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100022ee:;
  /* 100022ee push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100022f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 100022f2 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 100022f4 push 0x1000bca8 */
  push32((uint32_t)(0x1000bca8u));
  /* 100022f9 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x100022ffu);
  /* 100022ff call 0x10001b30 */
  push32(0x10002304u); f_10001b30();
  /* 10002304 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002306 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002308 push 0x1000bd40 */
  push32((uint32_t)(0x1000bd40u));
  /* 1000230d call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002313u);
  /* 10002313 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002315 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002317 push 0x1000bd38 */
  push32((uint32_t)(0x1000bd38u));
  /* 1000231c call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002322u);
  /* 10002322 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002324 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002326 push 0x1000bd30 */
  push32((uint32_t)(0x1000bd30u));
  /* 1000232b call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002331u);
  /* 10002331 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002333 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002335 push 0x1000bd28 */
  push32((uint32_t)(0x1000bd28u));
  /* 1000233a call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002340u);
  /* 10002340 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002343 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002345 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002347 push 0x1000bd20 */
  push32((uint32_t)(0x1000bd20u));
  /* 1000234c call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002352u);
  /* 10002352 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002354 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002356 push 0x1000bd18 */
  push32((uint32_t)(0x1000bd18u));
  /* 1000235b call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002361u);
  /* 10002361 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002363 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002365 push 0x1000bdd0 */
  push32((uint32_t)(0x1000bdd0u));
  /* 1000236a call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002370u);
  /* 10002370 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002372 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002374 push 0x1000bdc8 */
  push32((uint32_t)(0x1000bdc8u));
  /* 10002379 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x1000237fu);
  /* 1000237f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002381 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002383 push 0x1000bdc0 */
  push32((uint32_t)(0x1000bdc0u));
  /* 10002388 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x1000238eu);
  /* 1000238e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002390 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002392 push 0x1000bdb8 */
  push32((uint32_t)(0x1000bdb8u));
  /* 10002397 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x1000239du);
  /* 1000239d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100023a0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100023a2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100023a4 push 0x1000bda8 */
  push32((uint32_t)(0x1000bda8u));
  /* 100023a9 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100023afu);
  /* 100023af push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100023b1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100023b3 push 0x1000bde0 */
  push32((uint32_t)(0x1000bde0u));
  /* 100023b8 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100023beu);
  /* 100023be add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100023c1:;
  /* 100023c1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100023c3 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100023c5 push 3 */
  push32((uint32_t)(0x3u));
  /* 100023c7 push 0x1000be58 */
  push32((uint32_t)(0x1000be58u));
  /* 100023cc call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x100023d2u);
  /* 100023d2 mov eax, dword ptr [0x1000bce0] */
  EAX = (r32((uint32_t)(0x1000bce0)));
  /* 100023d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100023da cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100023dc je 0x1000243b */
  if (C.zf) goto L_1000243b;
  /* 100023de push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100023e0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100023e2 push 3 */
  push32((uint32_t)(0x3u));
  /* 100023e4 push 0x1000bc98 */
  push32((uint32_t)(0x1000bc98u));
  /* 100023e9 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x100023efu);
  /* 100023ef push 0xa */
  push32((uint32_t)(0xau));
  /* 100023f1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 100023f3 push 6 */
  push32((uint32_t)(0x6u));
  /* 100023f5 push 0x1000bcc0 */
  push32((uint32_t)(0x1000bcc0u));
  /* 100023fa call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002400u);
  /* 10002400 push 0xa */
  push32((uint32_t)(0xau));
  /* 10002402 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10002404 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10002406 push 0x1000bcc0 */
  push32((uint32_t)(0x1000bcc0u));
  /* 1000240b call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002411u);
  /* 10002411 push 0xa */
  push32((uint32_t)(0xau));
  /* 10002413 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002415 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10002417 push 0x1000bcc0 */
  push32((uint32_t)(0x1000bcc0u));
  /* 1000241c call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002422u);
  /* 10002422 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002425 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10002427 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10002429 push 6 */
  push32((uint32_t)(0x6u));
  /* 1000242b push 0x1000bce8 */
  push32((uint32_t)(0x1000bce8u));
  /* 10002430 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002436u);
  /* 10002436 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002439 jmp 0x10002471 */
  goto L_10002471;
L_1000243b:;
  /* 1000243b push 0xa */
  push32((uint32_t)(0xau));
  /* 1000243d push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1000243f push 6 */
  push32((uint32_t)(0x6u));
  /* 10002441 push 0x1000bcc0 */
  push32((uint32_t)(0x1000bcc0u));
  /* 10002446 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x1000244cu);
  /* 1000244c push 0xa */
  push32((uint32_t)(0xau));
  /* 1000244e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10002450 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10002452 push 0x1000bcc0 */
  push32((uint32_t)(0x1000bcc0u));
  /* 10002457 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x1000245du);
  /* 1000245d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1000245f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10002461 push 6 */
  push32((uint32_t)(0x6u));
  /* 10002463 push 0x1000bce8 */
  push32((uint32_t)(0x1000bce8u));
  /* 10002468 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x1000246eu);
  /* 1000246e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002471:;
  /* 10002471 push 0x1000bc80 */
  push32((uint32_t)(0x1000bc80u));
  /* 10002476 call dword ptr [0x1000c0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0ac))), 0x1000247cu);
  /* 1000247c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000247f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002481 je 0x10002565 */
  if (C.zf) goto L_10002565;
  /* 10002487 cmp esi, 0x186a0 */
  { uint32_t _a=(ESI),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000248d jle 0x1000249f */
  if ((C.zf||C.sf!=C.of)) goto L_1000249f;
  /* 1000248f push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 10002494 push ebx */
  push32((uint32_t)(EBX));
  /* 10002495 push 2 */
  push32((uint32_t)(0x2u));
  /* 10002497 call 0x100031c0 */
  push32(0x1000249cu); f_100031c0();
  /* 1000249c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000249f:;
  /* 1000249f cmp dword ptr [esp + 0x10], 0xf4240 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0xf4240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100024a7 jle 0x100024b9 */
  if ((C.zf||C.sf!=C.of)) goto L_100024b9;
  /* 100024a9 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 100024ae push ebx */
  push32((uint32_t)(EBX));
  /* 100024af push 0 */
  push32((uint32_t)(0x0u));
  /* 100024b1 call 0x100031c0 */
  push32(0x100024b6u); f_100031c0();
  /* 100024b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100024b9:;
  /* 100024b9 cmp edi, 0x12c */
  { uint32_t _a=(EDI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100024bf jge 0x10002516 */
  if ((C.sf==C.of)) goto L_10002516;
  /* 100024c1 cmp dword ptr [esp + 0x14], 0x2ee0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100024c9 jle 0x100024d6 */
  if ((C.zf||C.sf!=C.of)) goto L_100024d6;
  /* 100024cb push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100024d0 push 3 */
  push32((uint32_t)(0x3u));
  /* 100024d2 push 5 */
  push32((uint32_t)(0x5u));
  /* 100024d4 jmp 0x1000250e */
  goto L_1000250e;
L_100024d6:;
  /* 100024d6 cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100024dc jle 0x100024e8 */
  if ((C.zf||C.sf!=C.of)) goto L_100024e8;
  /* 100024de push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 100024e3 push 3 */
  push32((uint32_t)(0x3u));
  /* 100024e5 push ebx */
  push32((uint32_t)(EBX));
  /* 100024e6 jmp 0x1000250e */
  goto L_1000250e;
L_100024e8:;
  /* 100024e8 cmp esi, 0x5dc */
  { uint32_t _a=(ESI),_b=(0x5dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100024ee jle 0x100024fb */
  if ((C.zf||C.sf!=C.of)) goto L_100024fb;
  /* 100024f0 push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 100024f5 push 3 */
  push32((uint32_t)(0x3u));
  /* 100024f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 100024f9 jmp 0x1000250e */
  goto L_1000250e;
L_100024fb:;
  /* 100024fb cmp dword ptr [esp + 0x10], 0x5dc */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x5dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002503 jle 0x10002516 */
  if ((C.zf||C.sf!=C.of)) goto L_10002516;
  /* 10002505 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1000250a push 3 */
  push32((uint32_t)(0x3u));
  /* 1000250c push 0 */
  push32((uint32_t)(0x0u));
L_1000250e:;
  /* 1000250e call 0x100031c0 */
  push32(0x10002513u); f_100031c0();
  /* 10002513 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002516:;
  /* 10002516 push 0x1000be88 */
  push32((uint32_t)(0x1000be88u));
  /* 1000251b call dword ptr [0x1000c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0b4))), 0x10002521u);
  /* 10002521 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002524 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10002526 jne 0x10002565 */
  if (!C.zf) goto L_10002565;
  /* 10002528 cmp ebp, 0x320 */
  { uint32_t _a=(EBP),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000252e jle 0x10002565 */
  if ((C.zf||C.sf!=C.of)) goto L_10002565;
  /* 10002530 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10002534 mov esi, 0x2328 */
  ESI = (0x2328u);
  /* 10002539 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000253b jle 0x1000254e */
  if ((C.zf||C.sf!=C.of)) goto L_1000254e;
  /* 1000253d push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10002542 push 3 */
  push32((uint32_t)(0x3u));
  /* 10002544 push 5 */
  push32((uint32_t)(0x5u));
  /* 10002546 call 0x100031c0 */
  push32(0x1000254bu); f_100031c0();
  /* 1000254b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000254e:;
  /* 1000254e cmp dword ptr [esp + 0x1c], esi */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x1c))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002552 jle 0x10002565 */
  if ((C.zf||C.sf!=C.of)) goto L_10002565;
  /* 10002554 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10002559 push 3 */
  push32((uint32_t)(0x3u));
  /* 1000255b push 4 */
  push32((uint32_t)(0x4u));
  /* 1000255d call 0x100031c0 */
  push32(0x10002562u); f_100031c0();
  /* 10002562 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002565:;
  /* 10002565 call dword ptr [0x1000c0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0d0))), 0x1000256bu);
  /* 1000256b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000256d je 0x100025bc */
  if (C.zf) goto L_100025bc;
  /* 1000256f push 0x1000bdf0 */
  push32((uint32_t)(0x1000bdf0u));
  /* 10002574 call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x1000257au);
  /* 1000257a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000257d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002580 jge 0x10002592 */
  if ((C.sf==C.of)) goto L_10002592;
  /* 10002582 cmp edi, 0x7d0 */
  { uint32_t _a=(EDI),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002588 jge 0x10002592 */
  if ((C.sf==C.of)) goto L_10002592;
  /* 1000258a push 2 */
  push32((uint32_t)(0x2u));
  /* 1000258c push 5 */
  push32((uint32_t)(0x5u));
  /* 1000258e push 0xa */
  push32((uint32_t)(0xau));
  /* 10002590 jmp 0x100025c2 */
  goto L_100025c2;
L_10002592:;
  /* 10002592 push 0x1000bd50 */
  push32((uint32_t)(0x1000bd50u));
  /* 10002597 call dword ptr [0x1000c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0b4))), 0x1000259du);
  /* 1000259d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100025a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100025a2 je 0x100025b4 */
  if (C.zf) goto L_100025b4;
  /* 100025a4 cmp edi, 0x3a98 */
  { uint32_t _a=(EDI),_b=(0x3a98u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100025aa jl 0x100025b4 */
  if ((C.sf!=C.of)) goto L_100025b4;
  /* 100025ac push 4 */
  push32((uint32_t)(0x4u));
  /* 100025ae push 6 */
  push32((uint32_t)(0x6u));
  /* 100025b0 push 0xa */
  push32((uint32_t)(0xau));
  /* 100025b2 jmp 0x100025c2 */
  goto L_100025c2;
L_100025b4:;
  /* 100025b4 push 4 */
  push32((uint32_t)(0x4u));
  /* 100025b6 push 4 */
  push32((uint32_t)(0x4u));
  /* 100025b8 push 0xa */
  push32((uint32_t)(0xau));
  /* 100025ba jmp 0x100025c2 */
  goto L_100025c2;
L_100025bc:;
  /* 100025bc push 5 */
  push32((uint32_t)(0x5u));
  /* 100025be push 5 */
  push32((uint32_t)(0x5u));
  /* 100025c0 push 0 */
  push32((uint32_t)(0x0u));
L_100025c2:;
  /* 100025c2 call dword ptr [0x1000c07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c07c))), 0x100025c8u);
  /* 100025c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100025cb push 0x1000bba8 */
  push32((uint32_t)(0x1000bba8u));
  /* 100025d0 call dword ptr [0x1000c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0b4))), 0x100025d6u);
  /* 100025d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100025d9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100025db pop edi */
  EDI = (pop32());
  /* 100025dc pop esi */
  ESI = (pop32());
  /* 100025dd pop ebp */
  EBP = (pop32());
  /* 100025de pop ebx */
  EBX = (pop32());
  /* 100025df je 0x10002687 */
  if (C.zf) goto L_10002687;
  /* 100025e5 push 3 */
  push32((uint32_t)(0x3u));
  /* 100025e7 push 7 */
  push32((uint32_t)(0x7u));
  /* 100025e9 push 6 */
  push32((uint32_t)(0x6u));
  /* 100025eb call dword ptr [0x1000c07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c07c))), 0x100025f1u);
  /* 100025f1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100025f3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 100025f5 push 7 */
  push32((uint32_t)(0x7u));
  /* 100025f7 push 0x1000bce8 */
  push32((uint32_t)(0x1000bce8u));
  /* 100025fc call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002602u);
  /* 10002602 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002604 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10002606 push 0x1000be60 */
  push32((uint32_t)(0x1000be60u));
  /* 1000260b call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002611u);
  /* 10002611 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002613 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10002615 push 0x1000be68 */
  push32((uint32_t)(0x1000be68u));
  /* 1000261a call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002620u);
  /* 10002620 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002622 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10002624 push 0x1000bcc8 */
  push32((uint32_t)(0x1000bcc8u));
  /* 10002629 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x1000262fu);
  /* 1000262f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002632 push 0x1000bcc8 */
  push32((uint32_t)(0x1000bcc8u));
  /* 10002637 call dword ptr [0x1000c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0b4))), 0x1000263du);
  /* 1000263d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002640 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10002642 je 0x1000269b */
  if (C.zf) goto L_1000269b;
  /* 10002644 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002646 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10002648 push 0x1000bc88 */
  push32((uint32_t)(0x1000bc88u));
  /* 1000264d call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002653u);
  /* 10002653 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002655 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10002657 push 0x1000bcb0 */
  push32((uint32_t)(0x1000bcb0u));
  /* 1000265c call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002662u);
  /* 10002662 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002664 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10002666 push 0x1000bb08 */
  push32((uint32_t)(0x1000bb08u));
  /* 1000266b call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002671u);
  /* 10002671 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002673 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10002675 push 0x1000bca0 */
  push32((uint32_t)(0x1000bca0u));
  /* 1000267a call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002680u);
  /* 10002680 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002683 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002686 ret  */
  ESPCHK(0x10001d30u, _esp0);
  ESP += 4; return;
L_10002687:;
  /* 10002687 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002689 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000268b push 3 */
  push32((uint32_t)(0x3u));
  /* 1000268d push 0x1000bce8 */
  push32((uint32_t)(0x1000bce8u));
  /* 10002692 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002698u);
  /* 10002698 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000269b:;
  /* 1000269b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000269e ret  */
  ESPCHK(0x10001d30u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a0 @ 0x100026a0 (200 bytes, 55 insns) */
void f_100026a0(void) {
  FTRACE(0x100026a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100026a0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100026a2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100026a4 push 0x1000bf08 */
  push32((uint32_t)(0x1000bf08u));
  /* 100026a9 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100026afu);
  /* 100026af push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100026b1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100026b3 push 0x1000bf10 */
  push32((uint32_t)(0x1000bf10u));
  /* 100026b8 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100026beu);
  /* 100026be push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100026c0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100026c2 push 0x1000bef8 */
  push32((uint32_t)(0x1000bef8u));
  /* 100026c7 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100026cdu);
  /* 100026cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100026cf push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100026d1 push 0x1000bf00 */
  push32((uint32_t)(0x1000bf00u));
  /* 100026d6 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100026dcu);
  /* 100026dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100026de push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100026e0 push 0x1000bf18 */
  push32((uint32_t)(0x1000bf18u));
  /* 100026e5 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100026ebu);
  /* 100026eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100026ed push 0x5a */
  push32((uint32_t)(0x5au));
  /* 100026ef push 0x1000bea8 */
  push32((uint32_t)(0x1000bea8u));
  /* 100026f4 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100026fau);
  /* 100026fa add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100026fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100026ff push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10002701 push 0x1000be98 */
  push32((uint32_t)(0x1000be98u));
  /* 10002706 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x1000270cu);
  /* 1000270c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000270e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10002710 push 0x1000bea0 */
  push32((uint32_t)(0x1000bea0u));
  /* 10002715 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x1000271bu);
  /* 1000271b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000271d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1000271f push 0x1000beb0 */
  push32((uint32_t)(0x1000beb0u));
  /* 10002724 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x1000272au);
  /* 1000272a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000272c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1000272e push 0x1000beb8 */
  push32((uint32_t)(0x1000beb8u));
  /* 10002733 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002739u);
  /* 10002739 mov eax, dword ptr [0x1000bce0] */
  EAX = (r32((uint32_t)(0x1000bce0)));
  /* 1000273e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002741 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002744 jne 0x10002767 */
  if (!C.zf) goto L_10002767;
  /* 10002746 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002748 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1000274a push 0x1000bcf8 */
  push32((uint32_t)(0x1000bcf8u));
  /* 1000274f call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002755u);
  /* 10002755 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002757 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10002759 push 0x1000be78 */
  push32((uint32_t)(0x1000be78u));
  /* 1000275e call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002764u);
  /* 10002764 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002767:;
  /* 10002767 ret  */
  ESPCHK(0x100026a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002770 @ 0x10002770 (1 bytes, 1 insns) */
void f_10002770(void) {
  FTRACE(0x10002770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002770 ret  */
  ESPCHK(0x10002770u, _esp0);
  ESP += 4; return;
}

/* FUN_10002780 @ 0x10002780 (127 bytes, 35 insns) */
void f_10002780(void) {
  FTRACE(0x10002780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002780 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002782 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002784 push 0x1000be38 */
  push32((uint32_t)(0x1000be38u));
  /* 10002789 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x1000278fu);
  /* 1000278f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002791 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002793 push 0x1000be28 */
  push32((uint32_t)(0x1000be28u));
  /* 10002798 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x1000279eu);
  /* 1000279e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100027a0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100027a2 push 0x1000be00 */
  push32((uint32_t)(0x1000be00u));
  /* 100027a7 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100027adu);
  /* 100027ad push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100027af push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100027b1 push 0x1000bdf8 */
  push32((uint32_t)(0x1000bdf8u));
  /* 100027b6 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100027bcu);
  /* 100027bc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100027be push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100027c0 push 0x1000bd68 */
  push32((uint32_t)(0x1000bd68u));
  /* 100027c5 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100027cbu);
  /* 100027cb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100027cd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100027cf push 0x1000bd70 */
  push32((uint32_t)(0x1000bd70u));
  /* 100027d4 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100027dau);
  /* 100027da add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100027dd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100027df push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100027e1 push 0x1000bd78 */
  push32((uint32_t)(0x1000bd78u));
  /* 100027e6 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100027ecu);
  /* 100027ec push 0x32 */
  push32((uint32_t)(0x32u));
  /* 100027ee push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 100027f0 push 0x1000bd80 */
  push32((uint32_t)(0x1000bd80u));
  /* 100027f5 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x100027fbu);
  /* 100027fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100027fe ret  */
  ESPCHK(0x10002780u, _esp0);
  ESP += 4; return;
}

/* FUN_10002800 @ 0x10002800 (2482 bytes, 687 insns) */
void f_10002800(void) {
  FTRACE(0x10002800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10002800 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10002803 push ebx */
  push32((uint32_t)(EBX));
  /* 10002804 push esi */
  push32((uint32_t)(ESI));
  /* 10002805 push edi */
  push32((uint32_t)(EDI));
  /* 10002806 push 0x1000a030 */
  push32((uint32_t)(0x1000a030u));
  /* 1000280b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1000280d call dword ptr [0x1000c074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c074))), 0x10002813u);
  /* 10002813 push 3 */
  push32((uint32_t)(0x3u));
  /* 10002815 call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x1000281bu);
  /* 1000281b mov edi, eax */
  EDI = (EAX);
  /* 1000281d push 0 */
  push32((uint32_t)(0x0u));
  /* 1000281f mov dword ptr [esp + 0x20], edi */
  w32((uint32_t)(ESP + 0x20), (EDI));
  /* 10002823 call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10002829u);
  /* 10002829 push 2 */
  push32((uint32_t)(0x2u));
  /* 1000282b call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10002831u);
  /* 10002831 push 1 */
  push32((uint32_t)(0x1u));
  /* 10002833 call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10002839u);
  /* 10002839 push 5 */
  push32((uint32_t)(0x5u));
  /* 1000283b mov ebx, eax */
  EBX = (EAX);
  /* 1000283d call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10002843u);
  /* 10002843 push 4 */
  push32((uint32_t)(0x4u));
  /* 10002845 call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x1000284bu);
  /* 1000284b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000284d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000284f push 1 */
  push32((uint32_t)(0x1u));
  /* 10002851 push 0x1000bd08 */
  push32((uint32_t)(0x1000bd08u));
  /* 10002856 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x1000285cu);
  /* 1000285c push 0x1000bd08 */
  push32((uint32_t)(0x1000bd08u));
  /* 10002861 call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10002867u);
  /* 10002867 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000286a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000286c je 0x10002af6 */
  if (C.zf) goto L_10002af6;
  /* 10002872 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002874 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002876 push 2 */
  push32((uint32_t)(0x2u));
  /* 10002878 push 0x1000bcf0 */
  push32((uint32_t)(0x1000bcf0u));
  /* 1000287d call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002883u);
  /* 10002883 push 0x1000bcf0 */
  push32((uint32_t)(0x1000bcf0u));
  /* 10002888 call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x1000288eu);
  /* 1000288e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002891 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002893 je 0x10002af6 */
  if (C.zf) goto L_10002af6;
  /* 10002899 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000289b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000289d push 1 */
  push32((uint32_t)(0x1u));
  /* 1000289f push 0x1000be50 */
  push32((uint32_t)(0x1000be50u));
  /* 100028a4 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x100028aau);
  /* 100028aa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100028ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100028ae push 1 */
  push32((uint32_t)(0x1u));
  /* 100028b0 push 0x1000be70 */
  push32((uint32_t)(0x1000be70u));
  /* 100028b5 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x100028bbu);
  /* 100028bb push 0x1000bcd8 */
  push32((uint32_t)(0x1000bcd8u));
  /* 100028c0 call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x100028c6u);
  /* 100028c6 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100028c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100028cb je 0x10002932 */
  if (C.zf) goto L_10002932;
  /* 100028cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100028cf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100028d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 100028d3 push 0x1000be70 */
  push32((uint32_t)(0x1000be70u));
  /* 100028d8 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x100028deu);
  /* 100028de push 0x1000bcf0 */
  push32((uint32_t)(0x1000bcf0u));
  /* 100028e3 call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x100028e9u);
  /* 100028e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100028ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100028ef jle 0x10002932 */
  if ((C.zf||C.sf!=C.of)) goto L_10002932;
  /* 100028f1 cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100028f7 jle 0x1000290d */
  if ((C.zf||C.sf!=C.of)) goto L_1000290d;
  /* 100028f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100028fb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100028fd push 3 */
  push32((uint32_t)(0x3u));
  /* 100028ff push 0x1000be70 */
  push32((uint32_t)(0x1000be70u));
  /* 10002904 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x1000290au);
  /* 1000290a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000290d:;
  /* 1000290d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1000290f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10002911 push 4 */
  push32((uint32_t)(0x4u));
  /* 10002913 push 0x1000be70 */
  push32((uint32_t)(0x1000be70u));
  /* 10002918 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x1000291eu);
  /* 1000291e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002920 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10002922 push 5 */
  push32((uint32_t)(0x5u));
  /* 10002924 push 0x1000be70 */
  push32((uint32_t)(0x1000be70u));
  /* 10002929 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x1000292fu);
  /* 1000292f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002932:;
  /* 10002932 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002934 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002936 push 1 */
  push32((uint32_t)(0x1u));
  /* 10002938 push 0x1000bd00 */
  push32((uint32_t)(0x1000bd00u));
  /* 1000293d call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002943u);
  /* 10002943 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002946 call dword ptr [0x1000c0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0d0))), 0x1000294cu);
  /* 1000294c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000294e je 0x100029d5 */
  if (C.zf) goto L_100029d5;
  /* 10002954 cmp edi, 0x4b0 */
  { uint32_t _a=(EDI),_b=(0x4b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000295a jle 0x100029d5 */
  if ((C.zf||C.sf!=C.of)) goto L_100029d5;
  /* 1000295c push 2 */
  push32((uint32_t)(0x2u));
  /* 1000295e push 0xa */
  push32((uint32_t)(0xau));
  /* 10002960 push 3 */
  push32((uint32_t)(0x3u));
  /* 10002962 push 0x1000bd00 */
  push32((uint32_t)(0x1000bd00u));
  /* 10002967 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x1000296du);
  /* 1000296d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002970 cmp edi, 0x7d0 */
  { uint32_t _a=(EDI),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002976 jle 0x100029ae */
  if ((C.zf||C.sf!=C.of)) goto L_100029ae;
  /* 10002978 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000297a push 0xa */
  push32((uint32_t)(0xau));
  /* 1000297c push 5 */
  push32((uint32_t)(0x5u));
  /* 1000297e push 0x1000bd00 */
  push32((uint32_t)(0x1000bd00u));
  /* 10002983 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002989u);
  /* 10002989 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000298b push 3 */
  push32((uint32_t)(0x3u));
  /* 1000298d push 6 */
  push32((uint32_t)(0x6u));
  /* 1000298f push 0x1000bd00 */
  push32((uint32_t)(0x1000bd00u));
  /* 10002994 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x1000299au);
  /* 1000299a push 1 */
  push32((uint32_t)(0x1u));
  /* 1000299c push 2 */
  push32((uint32_t)(0x2u));
  /* 1000299e push 7 */
  push32((uint32_t)(0x7u));
  /* 100029a0 push 0x1000bd00 */
  push32((uint32_t)(0x1000bd00u));
  /* 100029a5 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x100029abu);
  /* 100029ab add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100029ae:;
  /* 100029ae push 0x1000bdf0 */
  push32((uint32_t)(0x1000bdf0u));
  /* 100029b3 call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x100029b9u);
  /* 100029b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100029bc cmp eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100029bf jle 0x100029d5 */
  if ((C.zf||C.sf!=C.of)) goto L_100029d5;
  /* 100029c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100029c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100029c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100029c7 push 0x1000bc80 */
  push32((uint32_t)(0x1000bc80u));
  /* 100029cc call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x100029d2u);
  /* 100029d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100029d5:;
  /* 100029d5 push 0x1000bcd8 */
  push32((uint32_t)(0x1000bcd8u));
  /* 100029da call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x100029e0u);
  /* 100029e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100029e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100029e5 je 0x10002a55 */
  if (C.zf) goto L_10002a55;
  /* 100029e7 push 0x1000be70 */
  push32((uint32_t)(0x1000be70u));
  /* 100029ec call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x100029f2u);
  /* 100029f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100029f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100029f8 jle 0x10002a55 */
  if ((C.zf||C.sf!=C.of)) goto L_10002a55;
  /* 100029fa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100029fc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 100029fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10002a00 push 0x1000bd90 */
  push32((uint32_t)(0x1000bd90u));
  /* 10002a05 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002a0bu);
  /* 10002a0b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002a0d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10002a0f push 3 */
  push32((uint32_t)(0x3u));
  /* 10002a11 push 0x1000bd90 */
  push32((uint32_t)(0x1000bd90u));
  /* 10002a16 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002a1cu);
  /* 10002a1c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002a1e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10002a20 push 4 */
  push32((uint32_t)(0x4u));
  /* 10002a22 push 0x1000bd90 */
  push32((uint32_t)(0x1000bd90u));
  /* 10002a27 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002a2du);
  /* 10002a2d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002a2f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10002a31 push 5 */
  push32((uint32_t)(0x5u));
  /* 10002a33 push 0x1000bd90 */
  push32((uint32_t)(0x1000bd90u));
  /* 10002a38 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002a3eu);
  /* 10002a3e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002a41 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002a43 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002a45 push 1 */
  push32((uint32_t)(0x1u));
  /* 10002a47 push 0x1000bb00 */
  push32((uint32_t)(0x1000bb00u));
  /* 10002a4c call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002a52u);
  /* 10002a52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002a55:;
  /* 10002a55 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002a57 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10002a59 push 1 */
  push32((uint32_t)(0x1u));
  /* 10002a5b push 0x1000bcd8 */
  push32((uint32_t)(0x1000bcd8u));
  /* 10002a60 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002a66u);
  /* 10002a66 push 0x1000bec8 */
  push32((uint32_t)(0x1000bec8u));
  /* 10002a6b call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10002a71u);
  /* 10002a71 push 0x1000bec8 */
  push32((uint32_t)(0x1000bec8u));
  /* 10002a76 mov esi, eax */
  ESI = (EAX);
  /* 10002a78 call dword ptr [0x1000c0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0ac))), 0x10002a7eu);
  /* 10002a7e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002a81 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002a83 jne 0x10002abc */
  if (!C.zf) goto L_10002abc;
  /* 10002a85 push 0x1000bd90 */
  push32((uint32_t)(0x1000bd90u));
  /* 10002a8a call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10002a90u);
  /* 10002a90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002a93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002a95 je 0x10002abc */
  if (C.zf) goto L_10002abc;
  /* 10002a97 push 0xa */
  push32((uint32_t)(0xau));
  /* 10002a99 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002a9b push 2 */
  push32((uint32_t)(0x2u));
  /* 10002a9d push 0x1000bec8 */
  push32((uint32_t)(0x1000bec8u));
  /* 10002aa2 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002aa8u);
  /* 10002aa8 push 0xa */
  push32((uint32_t)(0xau));
  /* 10002aaa push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10002aac push 3 */
  push32((uint32_t)(0x3u));
  /* 10002aae push 0x1000bec8 */
  push32((uint32_t)(0x1000bec8u));
  /* 10002ab3 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002ab9u);
  /* 10002ab9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002abc:;
  /* 10002abc push 0x1000be70 */
  push32((uint32_t)(0x1000be70u));
  /* 10002ac1 call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10002ac7u);
  /* 10002ac7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002aca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002acc je 0x10002ae2 */
  if (C.zf) goto L_10002ae2;
  /* 10002ace push 0xa */
  push32((uint32_t)(0xau));
  /* 10002ad0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10002ad2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10002ad4 push 0x1000bd08 */
  push32((uint32_t)(0x1000bd08u));
  /* 10002ad9 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002adfu);
  /* 10002adf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002ae2:;
  /* 10002ae2 push 0xa */
  push32((uint32_t)(0xau));
  /* 10002ae4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10002ae6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10002ae8 push 0x1000bd10 */
  push32((uint32_t)(0x1000bd10u));
  /* 10002aed call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002af3u);
  /* 10002af3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002af6:;
  /* 10002af6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002af8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002afa push 0x1000bf30 */
  push32((uint32_t)(0x1000bf30u));
  /* 10002aff call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002b05u);
  /* 10002b05 push 0x1000bf30 */
  push32((uint32_t)(0x1000bf30u));
  /* 10002b0a call dword ptr [0x1000c0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0b8))), 0x10002b10u);
  /* 10002b10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002b13 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10002b15 je 0x10002c4f */
  if (C.zf) goto L_10002c4f;
  /* 10002b1b cmp edi, 0x2bc */
  { uint32_t _a=(EDI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002b21 jle 0x10002bc0 */
  if ((C.zf||C.sf!=C.of)) goto L_10002bc0;
  /* 10002b27 push 0x1000be90 */
  push32((uint32_t)(0x1000be90u));
  /* 10002b2c call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10002b32u);
  /* 10002b32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002b35 cmp eax, 0x1a4 */
  { uint32_t _a=(EAX),_b=(0x1a4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002b3a jge 0x10002b69 */
  if ((C.sf==C.of)) goto L_10002b69;
  /* 10002b3c push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10002b3e push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10002b40 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 10002b45 push 0x1000bb38 */
  push32((uint32_t)(0x1000bb38u));
  /* 10002b4a call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002b50u);
  /* 10002b50 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002b52 push 5 */
  push32((uint32_t)(0x5u));
  /* 10002b54 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 10002b59 push 0x1000be90 */
  push32((uint32_t)(0x1000be90u));
  /* 10002b5e call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002b64u);
  /* 10002b64 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002b67 jmp 0x10002bc0 */
  goto L_10002bc0;
L_10002b69:;
  /* 10002b69 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002b6b push 5 */
  push32((uint32_t)(0x5u));
  /* 10002b6d push 0x258 */
  push32((uint32_t)(0x258u));
  /* 10002b72 push 0x1000be90 */
  push32((uint32_t)(0x1000be90u));
  /* 10002b77 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002b7du);
  /* 10002b7d push 0x1000bb38 */
  push32((uint32_t)(0x1000bb38u));
  /* 10002b82 call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10002b88u);
  /* 10002b88 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002b8b cmp eax, 0xfa */
  { uint32_t _a=(EAX),_b=(0xfau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002b90 jle 0x10002ba9 */
  if ((C.zf||C.sf!=C.of)) goto L_10002ba9;
  /* 10002b92 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10002b94 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10002b96 push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10002b9b push 0x1000be48 */
  push32((uint32_t)(0x1000be48u));
  /* 10002ba0 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002ba6u);
  /* 10002ba6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002ba9:;
  /* 10002ba9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002bab push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10002bad push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10002bb2 push 0x1000bb38 */
  push32((uint32_t)(0x1000bb38u));
  /* 10002bb7 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002bbdu);
  /* 10002bbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002bc0:;
  /* 10002bc0 cmp edi, 0xfa */
  { uint32_t _a=(EDI),_b=(0xfau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002bc6 jle 0x10002bdf */
  if ((C.zf||C.sf!=C.of)) goto L_10002bdf;
  /* 10002bc8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002bca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002bcc push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10002bd1 push 0x1000bdf0 */
  push32((uint32_t)(0x1000bdf0u));
  /* 10002bd6 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002bdcu);
  /* 10002bdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002bdf:;
  /* 10002bdf cmp edi, 0x12c */
  { uint32_t _a=(EDI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002be5 jle 0x10002c2e */
  if ((C.zf||C.sf!=C.of)) goto L_10002c2e;
  /* 10002be7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002be9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10002beb push 0x190 */
  push32((uint32_t)(0x190u));
  /* 10002bf0 push 0x1000bf40 */
  push32((uint32_t)(0x1000bf40u));
  /* 10002bf5 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002bfbu);
  /* 10002bfb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002bfd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10002bff push 0x190 */
  push32((uint32_t)(0x190u));
  /* 10002c04 push 0x1000bf40 */
  push32((uint32_t)(0x1000bf40u));
  /* 10002c09 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002c0fu);
  /* 10002c0f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002c12 cmp ebx, 0x5dc */
  { uint32_t _a=(EBX),_b=(0x5dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002c18 jle 0x10002c2e */
  if ((C.zf||C.sf!=C.of)) goto L_10002c2e;
  /* 10002c1a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002c1c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002c1e push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10002c20 push 0x1000bde8 */
  push32((uint32_t)(0x1000bde8u));
  /* 10002c25 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002c2bu);
  /* 10002c2b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002c2e:;
  /* 10002c2e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002c30 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10002c32 push 0x1000bd60 */
  push32((uint32_t)(0x1000bd60u));
  /* 10002c37 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002c3du);
  /* 10002c3d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002c3f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10002c41 push 0x1000bb28 */
  push32((uint32_t)(0x1000bb28u));
  /* 10002c46 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002c4cu);
  /* 10002c4c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002c4f:;
  /* 10002c4f push 0x1000bdf0 */
  push32((uint32_t)(0x1000bdf0u));
  /* 10002c54 call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10002c5au);
  /* 10002c5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002c5d cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002c60 jle 0x10002c67 */
  if ((C.zf||C.sf!=C.of)) goto L_10002c67;
  /* 10002c62 call 0x10002770 */
  push32(0x10002c67u); f_10002770();
L_10002c67:;
  /* 10002c67 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002c69 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002c6b push 0x1000be10 */
  push32((uint32_t)(0x1000be10u));
  /* 10002c70 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002c76u);
  /* 10002c76 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002c78 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10002c7a push 0x1000be88 */
  push32((uint32_t)(0x1000be88u));
  /* 10002c7f call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002c85u);
  /* 10002c85 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002c87 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10002c89 push 0x1000bdb0 */
  push32((uint32_t)(0x1000bdb0u));
  /* 10002c8e call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002c94u);
  /* 10002c94 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002c96 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10002c98 push 0x1000bd58 */
  push32((uint32_t)(0x1000bd58u));
  /* 10002c9d call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002ca3u);
  /* 10002ca3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002ca5 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10002ca7 push 0x1000bd60 */
  push32((uint32_t)(0x1000bd60u));
  /* 10002cac call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002cb2u);
  /* 10002cb2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002cb4 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10002cb6 push 0x1000bd48 */
  push32((uint32_t)(0x1000bd48u));
  /* 10002cbb call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002cc1u);
  /* 10002cc1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002cc4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002cc6 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10002cc8 push 0x1000bd50 */
  push32((uint32_t)(0x1000bd50u));
  /* 10002ccd call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002cd3u);
  /* 10002cd3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002cd5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002cd7 push 0x1000bba8 */
  push32((uint32_t)(0x1000bba8u));
  /* 10002cdc call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002ce2u);
  /* 10002ce2 push 0x1000be10 */
  push32((uint32_t)(0x1000be10u));
  /* 10002ce7 call dword ptr [0x1000c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0b4))), 0x10002cedu);
  /* 10002ced add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002cf0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10002cf2 je 0x10002e43 */
  if (C.zf) goto L_10002e43;
  /* 10002cf8 cmp dword ptr [0x1000bce0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1000bce0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002cff jne 0x10002d15 */
  if (!C.zf) goto L_10002d15;
  /* 10002d01 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002d03 push 0xa */
  push32((uint32_t)(0xau));
  /* 10002d05 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10002d07 push 0x1000bca8 */
  push32((uint32_t)(0x1000bca8u));
  /* 10002d0c call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002d12u);
  /* 10002d12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002d15:;
  /* 10002d15 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10002d17 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10002d19 push 0x1000bb10 */
  push32((uint32_t)(0x1000bb10u));
  /* 10002d1e call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002d24u);
  /* 10002d24 call 0x10002780 */
  push32(0x10002d29u); f_10002780();
  /* 10002d29 push 0x1000bd80 */
  push32((uint32_t)(0x1000bd80u));
  /* 10002d2e call dword ptr [0x1000c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0b4))), 0x10002d34u);
  /* 10002d34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002d37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10002d39 je 0x10002d4f */
  if (C.zf) goto L_10002d4f;
  /* 10002d3b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002d3d push 0xa */
  push32((uint32_t)(0xau));
  /* 10002d3f push 0xa */
  push32((uint32_t)(0xau));
  /* 10002d41 push 0x1000bb30 */
  push32((uint32_t)(0x1000bb30u));
  /* 10002d46 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002d4cu);
  /* 10002d4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002d4f:;
  /* 10002d4f push 0x1000bdf8 */
  push32((uint32_t)(0x1000bdf8u));
  /* 10002d54 call dword ptr [0x1000c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0b4))), 0x10002d5au);
  /* 10002d5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002d5d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10002d5f je 0x10002d75 */
  if (C.zf) goto L_10002d75;
  /* 10002d61 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002d63 push 0xa */
  push32((uint32_t)(0xau));
  /* 10002d65 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10002d67 push 0x1000bf28 */
  push32((uint32_t)(0x1000bf28u));
  /* 10002d6c call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002d72u);
  /* 10002d72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002d75:;
  /* 10002d75 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002d77 push 0xa */
  push32((uint32_t)(0xau));
  /* 10002d79 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002d7b push 0x1000bca8 */
  push32((uint32_t)(0x1000bca8u));
  /* 10002d80 call dword ptr [0x1000c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c06c))), 0x10002d86u);
  /* 10002d86 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002d88 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002d8a push 0x1000bd40 */
  push32((uint32_t)(0x1000bd40u));
  /* 10002d8f call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002d95u);
  /* 10002d95 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002d97 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002d99 push 0x1000bd38 */
  push32((uint32_t)(0x1000bd38u));
  /* 10002d9e call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002da4u);
  /* 10002da4 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002da6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002da8 push 0x1000bd30 */
  push32((uint32_t)(0x1000bd30u));
  /* 10002dad call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002db3u);
  /* 10002db3 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002db5 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002db7 push 0x1000bd28 */
  push32((uint32_t)(0x1000bd28u));
  /* 10002dbc call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002dc2u);
  /* 10002dc2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002dc5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002dc7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002dc9 push 0x1000bd20 */
  push32((uint32_t)(0x1000bd20u));
  /* 10002dce call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002dd4u);
  /* 10002dd4 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002dd6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002dd8 push 0x1000bd18 */
  push32((uint32_t)(0x1000bd18u));
  /* 10002ddd call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002de3u);
  /* 10002de3 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002de5 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002de7 push 0x1000bdd0 */
  push32((uint32_t)(0x1000bdd0u));
  /* 10002dec call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002df2u);
  /* 10002df2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002df4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002df6 push 0x1000bdc8 */
  push32((uint32_t)(0x1000bdc8u));
  /* 10002dfb call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002e01u);
  /* 10002e01 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002e03 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002e05 push 0x1000bdc0 */
  push32((uint32_t)(0x1000bdc0u));
  /* 10002e0a call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002e10u);
  /* 10002e10 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002e12 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002e14 push 0x1000bdb8 */
  push32((uint32_t)(0x1000bdb8u));
  /* 10002e19 call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002e1fu);
  /* 10002e1f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002e22 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002e24 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002e26 push 0x1000bda8 */
  push32((uint32_t)(0x1000bda8u));
  /* 10002e2b call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002e31u);
  /* 10002e31 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10002e33 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10002e35 push 0x1000bde0 */
  push32((uint32_t)(0x1000bde0u));
  /* 10002e3a call dword ptr [0x1000c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c070))), 0x10002e40u);
  /* 10002e40 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002e43:;
  /* 10002e43 push 0x1000bdf0 */
  push32((uint32_t)(0x1000bdf0u));
  /* 10002e48 call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10002e4eu);
  /* 10002e4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002e51 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002e54 jle 0x10002e5b */
  if ((C.zf||C.sf!=C.of)) goto L_10002e5b;
  /* 10002e56 call 0x100026a0 */
  push32(0x10002e5bu); f_100026a0();
L_10002e5b:;
  /* 10002e5b push 0x1000bc80 */
  push32((uint32_t)(0x1000bc80u));
  /* 10002e60 call dword ptr [0x1000c0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0ac))), 0x10002e66u);
  /* 10002e66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002e69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002e6b je 0x100031ab */
  if (C.zf) goto L_100031ab;
  /* 10002e71 push ebp */
  push32((uint32_t)(EBP));
  /* 10002e72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10002e74 call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10002e7au);
  /* 10002e7a push 2 */
  push32((uint32_t)(0x2u));
  /* 10002e7c mov edi, eax */
  EDI = (EAX);
  /* 10002e7e call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10002e84u);
  /* 10002e84 push 4 */
  push32((uint32_t)(0x4u));
  /* 10002e86 mov esi, eax */
  ESI = (EAX);
  /* 10002e88 call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10002e8eu);
  /* 10002e8e push 5 */
  push32((uint32_t)(0x5u));
  /* 10002e90 mov ebp, eax */
  EBP = (EAX);
  /* 10002e92 call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10002e98u);
  /* 10002e98 push 1 */
  push32((uint32_t)(0x1u));
  /* 10002e9a mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 10002e9e call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10002ea4u);
  /* 10002ea4 mov ebx, eax */
  EBX = (EAX);
  /* 10002ea6 mov eax, dword ptr [esp + 0x28] */
  EAX = (r32((uint32_t)(ESP + 0x28)));
  /* 10002eaa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002ead cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002eb2 jge 0x10002f45 */
  if ((C.sf==C.of)) goto L_10002f45;
  /* 10002eb8 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002ebe jle 0x10002ecb */
  if ((C.zf||C.sf!=C.of)) goto L_10002ecb;
  /* 10002ec0 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10002ec5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10002ec7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10002ec9 jmp 0x10002f3d */
  goto L_10002f3d;
L_10002ecb:;
  /* 10002ecb cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002ed1 jle 0x10002ede */
  if ((C.zf||C.sf!=C.of)) goto L_10002ede;
  /* 10002ed3 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10002ed8 push 3 */
  push32((uint32_t)(0x3u));
  /* 10002eda push 2 */
  push32((uint32_t)(0x2u));
  /* 10002edc jmp 0x10002f3d */
  goto L_10002f3d;
L_10002ede:;
  /* 10002ede cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002ee4 jle 0x10002ef1 */
  if ((C.zf||C.sf!=C.of)) goto L_10002ef1;
  /* 10002ee6 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10002eeb push 3 */
  push32((uint32_t)(0x3u));
  /* 10002eed push 0 */
  push32((uint32_t)(0x0u));
  /* 10002eef jmp 0x10002f3d */
  goto L_10002f3d;
L_10002ef1:;
  /* 10002ef1 cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002ef7 jle 0x10002f04 */
  if ((C.zf||C.sf!=C.of)) goto L_10002f04;
  /* 10002ef9 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10002efe push 3 */
  push32((uint32_t)(0x3u));
  /* 10002f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10002f02 jmp 0x10002f3d */
  goto L_10002f3d;
L_10002f04:;
  /* 10002f04 cmp dword ptr [esp + 0x10], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002f0c jle 0x10002f19 */
  if ((C.zf||C.sf!=C.of)) goto L_10002f19;
  /* 10002f0e push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10002f13 push 3 */
  push32((uint32_t)(0x3u));
  /* 10002f15 push 5 */
  push32((uint32_t)(0x5u));
  /* 10002f17 jmp 0x10002f3d */
  goto L_10002f3d;
L_10002f19:;
  /* 10002f19 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002f1f jle 0x10002f2c */
  if ((C.zf||C.sf!=C.of)) goto L_10002f2c;
  /* 10002f21 push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10002f26 push 3 */
  push32((uint32_t)(0x3u));
  /* 10002f28 push 4 */
  push32((uint32_t)(0x4u));
  /* 10002f2a jmp 0x10002f3d */
  goto L_10002f3d;
L_10002f2c:;
  /* 10002f2c cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002f32 jle 0x10002f45 */
  if ((C.zf||C.sf!=C.of)) goto L_10002f45;
  /* 10002f34 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10002f39 push 3 */
  push32((uint32_t)(0x3u));
  /* 10002f3b push 1 */
  push32((uint32_t)(0x1u));
L_10002f3d:;
  /* 10002f3d call 0x100031c0 */
  push32(0x10002f42u); f_100031c0();
  /* 10002f42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002f45:;
  /* 10002f45 push 0x1000bcd8 */
  push32((uint32_t)(0x1000bcd8u));
  /* 10002f4a call dword ptr [0x1000c0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0ac))), 0x10002f50u);
  /* 10002f50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002f53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002f55 je 0x10002fa5 */
  if (C.zf) goto L_10002fa5;
  /* 10002f57 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002f5d jle 0x10002fa5 */
  if ((C.zf||C.sf!=C.of)) goto L_10002fa5;
  /* 10002f5f push 0x1000be88 */
  push32((uint32_t)(0x1000be88u));
  /* 10002f64 call dword ptr [0x1000c0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0b8))), 0x10002f6au);
  /* 10002f6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002f6d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10002f6f jne 0x10002fa5 */
  if (!C.zf) goto L_10002fa5;
  /* 10002f71 cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002f77 jle 0x10002f8a */
  if ((C.zf||C.sf!=C.of)) goto L_10002f8a;
  /* 10002f79 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10002f7e push 3 */
  push32((uint32_t)(0x3u));
  /* 10002f80 push 4 */
  push32((uint32_t)(0x4u));
  /* 10002f82 call 0x100031c0 */
  push32(0x10002f87u); f_100031c0();
  /* 10002f87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002f8a:;
  /* 10002f8a cmp dword ptr [esp + 0x10], 0xfa0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002f92 jle 0x10002fa5 */
  if ((C.zf||C.sf!=C.of)) goto L_10002fa5;
  /* 10002f94 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10002f99 push 3 */
  push32((uint32_t)(0x3u));
  /* 10002f9b push 5 */
  push32((uint32_t)(0x5u));
  /* 10002f9d call 0x100031c0 */
  push32(0x10002fa2u); f_100031c0();
  /* 10002fa2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002fa5:;
  /* 10002fa5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10002fa7 call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10002fadu);
  /* 10002fad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002fb0 cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002fb5 pop ebp */
  EBP = (pop32());
  /* 10002fb6 jle 0x10002fc9 */
  if ((C.zf||C.sf!=C.of)) goto L_10002fc9;
  /* 10002fb8 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 10002fbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10002fbf push 2 */
  push32((uint32_t)(0x2u));
  /* 10002fc1 call 0x100031c0 */
  push32(0x10002fc6u); f_100031c0();
  /* 10002fc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002fc9:;
  /* 10002fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10002fcb call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10002fd1u);
  /* 10002fd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002fd4 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10002fd9 jle 0x10002fec */
  if ((C.zf||C.sf!=C.of)) goto L_10002fec;
  /* 10002fdb push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 10002fe0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10002fe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10002fe4 call 0x100031c0 */
  push32(0x10002fe9u); f_100031c0();
  /* 10002fe9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10002fec:;
  /* 10002fec push 0x1000be50 */
  push32((uint32_t)(0x1000be50u));
  /* 10002ff1 call dword ptr [0x1000c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a8))), 0x10002ff7u);
  /* 10002ff7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10002ffa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10002ffc je 0x10003183 */
  if (C.zf) goto L_10003183;
  /* 10003002 push 0x1000be10 */
  push32((uint32_t)(0x1000be10u));
  /* 10003007 call dword ptr [0x1000c0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0b8))), 0x1000300du);
  /* 1000300d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003010 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10003012 jne 0x10003183 */
  if (!C.zf) goto L_10003183;
  /* 10003018 push 5 */
  push32((uint32_t)(0x5u));
  /* 1000301a call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10003020u);
  /* 10003020 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003023 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003028 jle 0x100030e3 */
  if ((C.zf||C.sf!=C.of)) goto L_100030e3;
  /* 1000302e push 0 */
  push32((uint32_t)(0x0u));
  /* 10003030 call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10003036u);
  /* 10003036 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003039 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000303b je 0x100030e3 */
  if (C.zf) goto L_100030e3;
  /* 10003041 push 1 */
  push32((uint32_t)(0x1u));
  /* 10003043 call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10003049u);
  /* 10003049 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000304c cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003051 jge 0x100030e3 */
  if ((C.sf==C.of)) goto L_100030e3;
  /* 10003057 push 5 */
  push32((uint32_t)(0x5u));
  /* 10003059 call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x1000305fu);
  /* 1000305f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003062 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003067 jle 0x1000307a */
  if ((C.zf||C.sf!=C.of)) goto L_1000307a;
  /* 10003069 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1000306e push 1 */
  push32((uint32_t)(0x1u));
  /* 10003070 push 5 */
  push32((uint32_t)(0x5u));
  /* 10003072 call 0x100031c0 */
  push32(0x10003077u); f_100031c0();
  /* 10003077 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000307a:;
  /* 1000307a push 4 */
  push32((uint32_t)(0x4u));
  /* 1000307c call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10003082u);
  /* 10003082 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003085 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000308a jle 0x1000309d */
  if ((C.zf||C.sf!=C.of)) goto L_1000309d;
  /* 1000308c push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10003091 push 1 */
  push32((uint32_t)(0x1u));
  /* 10003093 push 4 */
  push32((uint32_t)(0x4u));
  /* 10003095 call 0x100031c0 */
  push32(0x1000309au); f_100031c0();
  /* 1000309a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000309d:;
  /* 1000309d push 2 */
  push32((uint32_t)(0x2u));
  /* 1000309f call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x100030a5u);
  /* 100030a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100030a8 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100030ad jle 0x100030c0 */
  if ((C.zf||C.sf!=C.of)) goto L_100030c0;
  /* 100030af push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 100030b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100030b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 100030b8 call 0x100031c0 */
  push32(0x100030bdu); f_100031c0();
  /* 100030bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100030c0:;
  /* 100030c0 push 3 */
  push32((uint32_t)(0x3u));
  /* 100030c2 call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x100030c8u);
  /* 100030c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100030cb cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100030d0 jle 0x100030e3 */
  if ((C.zf||C.sf!=C.of)) goto L_100030e3;
  /* 100030d2 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 100030d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100030d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 100030db call 0x100031c0 */
  push32(0x100030e0u); f_100031c0();
  /* 100030e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100030e3:;
  /* 100030e3 push 5 */
  push32((uint32_t)(0x5u));
  /* 100030e5 call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x100030ebu);
  /* 100030eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100030ee cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100030f3 jle 0x10003183 */
  if ((C.zf||C.sf!=C.of)) goto L_10003183;
  /* 100030f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 100030fb call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10003101u);
  /* 10003101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10003106 je 0x10003183 */
  if (C.zf) goto L_10003183;
  /* 10003108 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000310a call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10003110u);
  /* 10003110 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003113 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003118 jle 0x10003183 */
  if ((C.zf||C.sf!=C.of)) goto L_10003183;
  /* 1000311a push 5 */
  push32((uint32_t)(0x5u));
  /* 1000311c call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10003122u);
  /* 10003122 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003125 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000312a jle 0x1000313d */
  if ((C.zf||C.sf!=C.of)) goto L_1000313d;
  /* 1000312c push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10003131 push 4 */
  push32((uint32_t)(0x4u));
  /* 10003133 push 5 */
  push32((uint32_t)(0x5u));
  /* 10003135 call 0x100031c0 */
  push32(0x1000313au); f_100031c0();
  /* 1000313a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000313d:;
  /* 1000313d push 2 */
  push32((uint32_t)(0x2u));
  /* 1000313f call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10003145u);
  /* 10003145 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003148 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000314d jle 0x10003160 */
  if ((C.zf||C.sf!=C.of)) goto L_10003160;
  /* 1000314f push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 10003154 push 4 */
  push32((uint32_t)(0x4u));
  /* 10003156 push 2 */
  push32((uint32_t)(0x2u));
  /* 10003158 call 0x100031c0 */
  push32(0x1000315du); f_100031c0();
  /* 1000315d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003160:;
  /* 10003160 push 3 */
  push32((uint32_t)(0x3u));
  /* 10003162 call dword ptr [0x1000c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0a4))), 0x10003168u);
  /* 10003168 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000316b cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003170 jle 0x10003183 */
  if ((C.zf||C.sf!=C.of)) goto L_10003183;
  /* 10003172 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10003177 push 4 */
  push32((uint32_t)(0x4u));
  /* 10003179 push 3 */
  push32((uint32_t)(0x3u));
  /* 1000317b call 0x100031c0 */
  push32(0x10003180u); f_100031c0();
  /* 10003180 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003183:;
  /* 10003183 push 1 */
  push32((uint32_t)(0x1u));
  /* 10003185 call 0x10003240 */
  push32(0x1000318au); f_10003240();
  /* 1000318a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000318d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000318f jne 0x100031ab */
  if (!C.zf) goto L_100031ab;
  /* 10003191 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10003196 push 3 */
  push32((uint32_t)(0x3u));
  /* 10003198 push 5 */
  push32((uint32_t)(0x5u));
  /* 1000319a call 0x100031c0 */
  push32(0x1000319fu); f_100031c0();
  /* 1000319f push 1 */
  push32((uint32_t)(0x1u));
  /* 100031a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 100031a3 call 0x10003220 */
  push32(0x100031a8u); f_10003220();
  /* 100031a8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100031ab:;
  /* 100031ab pop edi */
  EDI = (pop32());
  /* 100031ac pop esi */
  ESI = (pop32());
  /* 100031ad pop ebx */
  EBX = (pop32());
  /* 100031ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100031b1 ret  */
  ESPCHK(0x10002800u, _esp0);
  ESP += 4; return;
}

/* FUN_100031c0 @ 0x100031c0 (25 bytes, 9 insns) */
void f_100031c0(void) {
  FTRACE(0x100031c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100031c0 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 100031c4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100031c8 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 100031cc push eax */
  push32((uint32_t)(EAX));
  /* 100031cd push ecx */
  push32((uint32_t)(ECX));
  /* 100031ce push edx */
  push32((uint32_t)(EDX));
  /* 100031cf call dword ptr [0x1000c084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c084))), 0x100031d5u);
  /* 100031d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100031d8 ret  */
  ESPCHK(0x100031c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100031e0 @ 0x100031e0 (6 bytes, 1 insns) */
void f_100031e0(void) {
  FTRACE(0x100031e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100031e0 jmp dword ptr [0x1000c0d4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1000c0d4)))); return;
}

/* FUN_100031f0 @ 0x100031f0 (6 bytes, 1 insns) */
void f_100031f0(void) {
  FTRACE(0x100031f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100031f0 jmp dword ptr [0x1000c0d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1000c0d8)))); return;
}

/* FUN_10003200 @ 0x10003200 (6 bytes, 1 insns) */
void f_10003200(void) {
  FTRACE(0x10003200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10003200 jmp dword ptr [0x1000c0e0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1000c0e0)))); return;
}

/* FUN_10003210 @ 0x10003210 (13 bytes, 5 insns) */
void f_10003210(void) {
  FTRACE(0x10003210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10003210 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10003214 push eax */
  push32((uint32_t)(EAX));
  /* 10003215 call dword ptr [0x1000c0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c0e4))), 0x1000321bu);
  /* 1000321b pop ecx */
  ECX = (pop32());
  /* 1000321c ret  */
  ESPCHK(0x10003210u, _esp0);
  ESP += 4; return;
}

/* FUN_10003220 @ 0x10003220 (20 bytes, 7 insns) */
void f_10003220(void) {
  FTRACE(0x10003220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10003220 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10003224 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10003228 push eax */
  push32((uint32_t)(EAX));
  /* 10003229 push ecx */
  push32((uint32_t)(ECX));
  /* 1000322a call dword ptr [0x1000be80] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000be80))), 0x10003230u);
  /* 10003230 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003233 ret  */
  ESPCHK(0x10003220u, _esp0);
  ESP += 4; return;
}

/* FUN_10003240 @ 0x10003240 (15 bytes, 5 insns) */
void f_10003240(void) {
  FTRACE(0x10003240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10003240 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10003244 push eax */
  push32((uint32_t)(EAX));
  /* 10003245 call dword ptr [0x1000bec0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000bec0))), 0x1000324bu);
  /* 1000324b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000324e ret  */
  ESPCHK(0x10003240u, _esp0);
  ESP += 4; return;
}

/* FUN_10003250 @ 0x10003250 (82 bytes, 28 insns) */
void f_10003250(void) {
  FTRACE(0x10003250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10003250 mov eax, dword ptr [0x1000bf48] */
  EAX = (r32((uint32_t)(0x1000bf48)));
  /* 10003255 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000325b push esi */
  push32((uint32_t)(ESI));
  /* 1000325c push edi */
  push32((uint32_t)(EDI));
  /* 1000325d mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 10003264 push edi */
  push32((uint32_t)(EDI));
  /* 10003265 push eax */
  push32((uint32_t)(EAX));
  /* 10003266 call dword ptr [0x10009084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009084))), 0x1000326cu);
  /* 1000326c mov esi, eax */
  ESI = (EAX);
  /* 1000326e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10003270 jne 0x10003297 */
  if (!C.zf) goto L_10003297;
  /* 10003272 push edi */
  push32((uint32_t)(EDI));
  /* 10003273 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 10003277 push 0x1000a7a0 */
  push32((uint32_t)(0x1000a7a0u));
  /* 1000327c push ecx */
  push32((uint32_t)(ECX));
  /* 1000327d call 0x10003a00 */
  push32(0x10003282u); f_10003a00();
  /* 10003282 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003285 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 10003289 push esi */
  push32((uint32_t)(ESI));
  /* 1000328a push 0x1000a790 */
  push32((uint32_t)(0x1000a790u));
  /* 1000328f push edx */
  push32((uint32_t)(EDX));
  /* 10003290 push esi */
  push32((uint32_t)(ESI));
  /* 10003291 call dword ptr [0x100090d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090d4))), 0x10003297u);
L_10003297:;
  /* 10003297 mov eax, esi */
  EAX = (ESI);
  /* 10003299 pop edi */
  EDI = (pop32());
  /* 1000329a pop esi */
  ESI = (pop32());
  /* 1000329b add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100032a1 ret  */
  ESPCHK(0x10003250u, _esp0);
  ESP += 4; return;
}

/* FUN_100032b0 @ 0x100032b0 (1711 bytes, 349 insns) */
void f_100032b0(void) {
  FTRACE(0x100032b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100032b0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100032b4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100032b5 jne 0x10003957 */
  if (!C.zf) goto L_10003957;
  /* 100032bb push 0x1000ae50 */
  push32((uint32_t)(0x1000ae50u));
  /* 100032c0 call dword ptr [0x10009004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009004))), 0x100032c6u);
  /* 100032c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100032c8 mov dword ptr [0x1000bf48], eax */
  w32((uint32_t)(0x1000bf48), (EAX));
  /* 100032cd jne 0x100032e9 */
  if (!C.zf) goto L_100032e9;
  /* 100032cf push eax */
  push32((uint32_t)(EAX));
  /* 100032d0 push 0x1000ae48 */
  push32((uint32_t)(0x1000ae48u));
  /* 100032d5 push 0x1000ae30 */
  push32((uint32_t)(0x1000ae30u));
  /* 100032da push eax */
  push32((uint32_t)(EAX));
  /* 100032db call dword ptr [0x100090d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090d4))), 0x100032e1u);
  /* 100032e1 mov eax, 1 */
  EAX = (0x1u);
  /* 100032e6 ret 0xc */
  ESPCHK(0x100032b0u, _esp0);
  ESP += 16; return;
L_100032e9:;
  /* 100032e9 push 0x1000ae20 */
  push32((uint32_t)(0x1000ae20u));
  /* 100032ee call 0x10003250 */
  push32(0x100032f3u); f_10003250();
  /* 100032f3 push 0x1000ae10 */
  push32((uint32_t)(0x1000ae10u));
  /* 100032f8 mov dword ptr [0x1000bf4c], eax */
  w32((uint32_t)(0x1000bf4c), (EAX));
  /* 100032fd call 0x10003250 */
  push32(0x10003302u); f_10003250();
  /* 10003302 push 0x1000ae00 */
  push32((uint32_t)(0x1000ae00u));
  /* 10003307 mov dword ptr [0x1000bf50], eax */
  w32((uint32_t)(0x1000bf50), (EAX));
  /* 1000330c call 0x10003250 */
  push32(0x10003311u); f_10003250();
  /* 10003311 push 0x1000adf4 */
  push32((uint32_t)(0x1000adf4u));
  /* 10003316 mov dword ptr [0x1000bf54], eax */
  w32((uint32_t)(0x1000bf54), (EAX));
  /* 1000331b call 0x10003250 */
  push32(0x10003320u); f_10003250();
  /* 10003320 push 0x1000ade4 */
  push32((uint32_t)(0x1000ade4u));
  /* 10003325 mov dword ptr [0x1000bf58], eax */
  w32((uint32_t)(0x1000bf58), (EAX));
  /* 1000332a call 0x10003250 */
  push32(0x1000332fu); f_10003250();
  /* 1000332f push 0x1000add0 */
  push32((uint32_t)(0x1000add0u));
  /* 10003334 mov dword ptr [0x1000bf5c], eax */
  w32((uint32_t)(0x1000bf5c), (EAX));
  /* 10003339 call 0x10003250 */
  push32(0x1000333eu); f_10003250();
  /* 1000333e push 0x1000adc0 */
  push32((uint32_t)(0x1000adc0u));
  /* 10003343 mov dword ptr [0x1000bf60], eax */
  w32((uint32_t)(0x1000bf60), (EAX));
  /* 10003348 call 0x10003250 */
  push32(0x1000334du); f_10003250();
  /* 1000334d push 0x1000adb0 */
  push32((uint32_t)(0x1000adb0u));
  /* 10003352 mov dword ptr [0x1000bf64], eax */
  w32((uint32_t)(0x1000bf64), (EAX));
  /* 10003357 call 0x10003250 */
  push32(0x1000335cu); f_10003250();
  /* 1000335c push 0x1000ad9c */
  push32((uint32_t)(0x1000ad9cu));
  /* 10003361 mov dword ptr [0x1000bf68], eax */
  w32((uint32_t)(0x1000bf68), (EAX));
  /* 10003366 call 0x10003250 */
  push32(0x1000336bu); f_10003250();
  /* 1000336b push 0x1000ad88 */
  push32((uint32_t)(0x1000ad88u));
  /* 10003370 mov dword ptr [0x1000bf6c], eax */
  w32((uint32_t)(0x1000bf6c), (EAX));
  /* 10003375 call 0x10003250 */
  push32(0x1000337au); f_10003250();
  /* 1000337a push 0x1000ad78 */
  push32((uint32_t)(0x1000ad78u));
  /* 1000337f mov dword ptr [0x1000bf70], eax */
  w32((uint32_t)(0x1000bf70), (EAX));
  /* 10003384 call 0x10003250 */
  push32(0x10003389u); f_10003250();
  /* 10003389 push 0x1000ad68 */
  push32((uint32_t)(0x1000ad68u));
  /* 1000338e mov dword ptr [0x1000bf74], eax */
  w32((uint32_t)(0x1000bf74), (EAX));
  /* 10003393 call 0x10003250 */
  push32(0x10003398u); f_10003250();
  /* 10003398 push 0x1000ad58 */
  push32((uint32_t)(0x1000ad58u));
  /* 1000339d mov dword ptr [0x1000bf78], eax */
  w32((uint32_t)(0x1000bf78), (EAX));
  /* 100033a2 call 0x10003250 */
  push32(0x100033a7u); f_10003250();
  /* 100033a7 push 0x1000ad48 */
  push32((uint32_t)(0x1000ad48u));
  /* 100033ac mov dword ptr [0x1000bf7c], eax */
  w32((uint32_t)(0x1000bf7c), (EAX));
  /* 100033b1 call 0x10003250 */
  push32(0x100033b6u); f_10003250();
  /* 100033b6 push 0x1000ad38 */
  push32((uint32_t)(0x1000ad38u));
  /* 100033bb mov dword ptr [0x1000bf80], eax */
  w32((uint32_t)(0x1000bf80), (EAX));
  /* 100033c0 call 0x10003250 */
  push32(0x100033c5u); f_10003250();
  /* 100033c5 push 0x1000ad28 */
  push32((uint32_t)(0x1000ad28u));
  /* 100033ca mov dword ptr [0x1000bf84], eax */
  w32((uint32_t)(0x1000bf84), (EAX));
  /* 100033cf call 0x10003250 */
  push32(0x100033d4u); f_10003250();
  /* 100033d4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100033d7 mov dword ptr [0x1000bf88], eax */
  w32((uint32_t)(0x1000bf88), (EAX));
  /* 100033dc push 0x1000ad18 */
  push32((uint32_t)(0x1000ad18u));
  /* 100033e1 call 0x10003250 */
  push32(0x100033e6u); f_10003250();
  /* 100033e6 push 0x1000ad08 */
  push32((uint32_t)(0x1000ad08u));
  /* 100033eb mov dword ptr [0x1000bf8c], eax */
  w32((uint32_t)(0x1000bf8c), (EAX));
  /* 100033f0 call 0x10003250 */
  push32(0x100033f5u); f_10003250();
  /* 100033f5 push 0x1000acf4 */
  push32((uint32_t)(0x1000acf4u));
  /* 100033fa mov dword ptr [0x1000bf90], eax */
  w32((uint32_t)(0x1000bf90), (EAX));
  /* 100033ff call 0x10003250 */
  push32(0x10003404u); f_10003250();
  /* 10003404 push 0x1000acec */
  push32((uint32_t)(0x1000acecu));
  /* 10003409 mov dword ptr [0x1000bf94], eax */
  w32((uint32_t)(0x1000bf94), (EAX));
  /* 1000340e call 0x10003250 */
  push32(0x10003413u); f_10003250();
  /* 10003413 push 0x1000acdc */
  push32((uint32_t)(0x1000acdcu));
  /* 10003418 mov dword ptr [0x1000bf98], eax */
  w32((uint32_t)(0x1000bf98), (EAX));
  /* 1000341d call 0x10003250 */
  push32(0x10003422u); f_10003250();
  /* 10003422 push 0x1000accc */
  push32((uint32_t)(0x1000acccu));
  /* 10003427 mov dword ptr [0x1000bf9c], eax */
  w32((uint32_t)(0x1000bf9c), (EAX));
  /* 1000342c call 0x10003250 */
  push32(0x10003431u); f_10003250();
  /* 10003431 push 0x1000acc0 */
  push32((uint32_t)(0x1000acc0u));
  /* 10003436 mov dword ptr [0x1000bfa0], eax */
  w32((uint32_t)(0x1000bfa0), (EAX));
  /* 1000343b call 0x10003250 */
  push32(0x10003440u); f_10003250();
  /* 10003440 push 0x1000acb0 */
  push32((uint32_t)(0x1000acb0u));
  /* 10003445 mov dword ptr [0x1000bfa4], eax */
  w32((uint32_t)(0x1000bfa4), (EAX));
  /* 1000344a call 0x10003250 */
  push32(0x1000344fu); f_10003250();
  /* 1000344f push 0x1000aca8 */
  push32((uint32_t)(0x1000aca8u));
  /* 10003454 mov dword ptr [0x1000bfa8], eax */
  w32((uint32_t)(0x1000bfa8), (EAX));
  /* 10003459 call 0x10003250 */
  push32(0x1000345eu); f_10003250();
  /* 1000345e push 0x1000ac98 */
  push32((uint32_t)(0x1000ac98u));
  /* 10003463 mov dword ptr [0x1000bfc0], eax */
  w32((uint32_t)(0x1000bfc0), (EAX));
  /* 10003468 call 0x10003250 */
  push32(0x1000346du); f_10003250();
  /* 1000346d push 0x1000ac88 */
  push32((uint32_t)(0x1000ac88u));
  /* 10003472 mov dword ptr [0x1000bfc4], eax */
  w32((uint32_t)(0x1000bfc4), (EAX));
  /* 10003477 call 0x10003250 */
  push32(0x1000347cu); f_10003250();
  /* 1000347c push 0x1000ac7c */
  push32((uint32_t)(0x1000ac7cu));
  /* 10003481 mov dword ptr [0x1000bfc8], eax */
  w32((uint32_t)(0x1000bfc8), (EAX));
  /* 10003486 call 0x10003250 */
  push32(0x1000348bu); f_10003250();
  /* 1000348b push 0x1000ac6c */
  push32((uint32_t)(0x1000ac6cu));
  /* 10003490 mov dword ptr [0x1000bfcc], eax */
  w32((uint32_t)(0x1000bfcc), (EAX));
  /* 10003495 call 0x10003250 */
  push32(0x1000349au); f_10003250();
  /* 1000349a push 0x1000ac60 */
  push32((uint32_t)(0x1000ac60u));
  /* 1000349f mov dword ptr [0x1000bfd0], eax */
  w32((uint32_t)(0x1000bfd0), (EAX));
  /* 100034a4 call 0x10003250 */
  push32(0x100034a9u); f_10003250();
  /* 100034a9 push 0x1000ac50 */
  push32((uint32_t)(0x1000ac50u));
  /* 100034ae mov dword ptr [0x1000bfec], eax */
  w32((uint32_t)(0x1000bfec), (EAX));
  /* 100034b3 call 0x10003250 */
  push32(0x100034b8u); f_10003250();
  /* 100034b8 push 0x1000ac48 */
  push32((uint32_t)(0x1000ac48u));
  /* 100034bd mov dword ptr [0x1000bfd4], eax */
  w32((uint32_t)(0x1000bfd4), (EAX));
  /* 100034c2 call 0x10003250 */
  push32(0x100034c7u); f_10003250();
  /* 100034c7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100034ca mov dword ptr [0x1000bfd8], eax */
  w32((uint32_t)(0x1000bfd8), (EAX));
  /* 100034cf push 0x1000ac38 */
  push32((uint32_t)(0x1000ac38u));
  /* 100034d4 call 0x10003250 */
  push32(0x100034d9u); f_10003250();
  /* 100034d9 push 0x1000ac28 */
  push32((uint32_t)(0x1000ac28u));
  /* 100034de mov dword ptr [0x1000bfdc], eax */
  w32((uint32_t)(0x1000bfdc), (EAX));
  /* 100034e3 call 0x10003250 */
  push32(0x100034e8u); f_10003250();
  /* 100034e8 push 0x1000ac18 */
  push32((uint32_t)(0x1000ac18u));
  /* 100034ed mov dword ptr [0x1000bfe0], eax */
  w32((uint32_t)(0x1000bfe0), (EAX));
  /* 100034f2 call 0x10003250 */
  push32(0x100034f7u); f_10003250();
  /* 100034f7 push 0x1000ac0c */
  push32((uint32_t)(0x1000ac0cu));
  /* 100034fc mov dword ptr [0x1000bfe4], eax */
  w32((uint32_t)(0x1000bfe4), (EAX));
  /* 10003501 call 0x10003250 */
  push32(0x10003506u); f_10003250();
  /* 10003506 push 0x1000ac04 */
  push32((uint32_t)(0x1000ac04u));
  /* 1000350b mov dword ptr [0x1000bfe8], eax */
  w32((uint32_t)(0x1000bfe8), (EAX));
  /* 10003510 call 0x10003250 */
  push32(0x10003515u); f_10003250();
  /* 10003515 push 0x1000abf4 */
  push32((uint32_t)(0x1000abf4u));
  /* 1000351a mov dword ptr [0x1000bff0], eax */
  w32((uint32_t)(0x1000bff0), (EAX));
  /* 1000351f call 0x10003250 */
  push32(0x10003524u); f_10003250();
  /* 10003524 push 0x1000abe4 */
  push32((uint32_t)(0x1000abe4u));
  /* 10003529 mov dword ptr [0x1000bff4], eax */
  w32((uint32_t)(0x1000bff4), (EAX));
  /* 1000352e call 0x10003250 */
  push32(0x10003533u); f_10003250();
  /* 10003533 push 0x1000abd4 */
  push32((uint32_t)(0x1000abd4u));
  /* 10003538 mov dword ptr [0x1000bff8], eax */
  w32((uint32_t)(0x1000bff8), (EAX));
  /* 1000353d call 0x10003250 */
  push32(0x10003542u); f_10003250();
  /* 10003542 push 0x1000abc4 */
  push32((uint32_t)(0x1000abc4u));
  /* 10003547 mov dword ptr [0x1000bffc], eax */
  w32((uint32_t)(0x1000bffc), (EAX));
  /* 1000354c call 0x10003250 */
  push32(0x10003551u); f_10003250();
  /* 10003551 push 0x1000abb8 */
  push32((uint32_t)(0x1000abb8u));
  /* 10003556 mov dword ptr [0x1000c000], eax */
  w32((uint32_t)(0x1000c000), (EAX));
  /* 1000355b call 0x10003250 */
  push32(0x10003560u); f_10003250();
  /* 10003560 push 0x1000abac */
  push32((uint32_t)(0x1000abacu));
  /* 10003565 mov dword ptr [0x1000c004], eax */
  w32((uint32_t)(0x1000c004), (EAX));
  /* 1000356a call 0x10003250 */
  push32(0x1000356fu); f_10003250();
  /* 1000356f push 0x1000ab9c */
  push32((uint32_t)(0x1000ab9cu));
  /* 10003574 mov dword ptr [0x1000c008], eax */
  w32((uint32_t)(0x1000c008), (EAX));
  /* 10003579 call 0x10003250 */
  push32(0x1000357eu); f_10003250();
  /* 1000357e push 0x1000ab90 */
  push32((uint32_t)(0x1000ab90u));
  /* 10003583 mov dword ptr [0x1000c00c], eax */
  w32((uint32_t)(0x1000c00c), (EAX));
  /* 10003588 call 0x10003250 */
  push32(0x1000358du); f_10003250();
  /* 1000358d push 0x1000ab84 */
  push32((uint32_t)(0x1000ab84u));
  /* 10003592 mov dword ptr [0x1000c010], eax */
  w32((uint32_t)(0x1000c010), (EAX));
  /* 10003597 call 0x10003250 */
  push32(0x1000359cu); f_10003250();
  /* 1000359c push 0x1000ab78 */
  push32((uint32_t)(0x1000ab78u));
  /* 100035a1 mov dword ptr [0x1000c014], eax */
  w32((uint32_t)(0x1000c014), (EAX));
  /* 100035a6 call 0x10003250 */
  push32(0x100035abu); f_10003250();
  /* 100035ab push 0x1000ab6c */
  push32((uint32_t)(0x1000ab6cu));
  /* 100035b0 mov dword ptr [0x1000be40], eax */
  w32((uint32_t)(0x1000be40), (EAX));
  /* 100035b5 call 0x10003250 */
  push32(0x100035bau); f_10003250();
  /* 100035ba add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100035bd mov dword ptr [0x1000c018], eax */
  w32((uint32_t)(0x1000c018), (EAX));
  /* 100035c2 push 0x1000ab60 */
  push32((uint32_t)(0x1000ab60u));
  /* 100035c7 call 0x10003250 */
  push32(0x100035ccu); f_10003250();
  /* 100035cc push 0x1000ab54 */
  push32((uint32_t)(0x1000ab54u));
  /* 100035d1 mov dword ptr [0x1000c01c], eax */
  w32((uint32_t)(0x1000c01c), (EAX));
  /* 100035d6 call 0x10003250 */
  push32(0x100035dbu); f_10003250();
  /* 100035db push 0x1000ab44 */
  push32((uint32_t)(0x1000ab44u));
  /* 100035e0 mov dword ptr [0x1000c020], eax */
  w32((uint32_t)(0x1000c020), (EAX));
  /* 100035e5 call 0x10003250 */
  push32(0x100035eau); f_10003250();
  /* 100035ea push 0x1000ab38 */
  push32((uint32_t)(0x1000ab38u));
  /* 100035ef mov dword ptr [0x1000c024], eax */
  w32((uint32_t)(0x1000c024), (EAX));
  /* 100035f4 call 0x10003250 */
  push32(0x100035f9u); f_10003250();
  /* 100035f9 push 0x1000ab2c */
  push32((uint32_t)(0x1000ab2cu));
  /* 100035fe mov dword ptr [0x1000c028], eax */
  w32((uint32_t)(0x1000c028), (EAX));
  /* 10003603 call 0x10003250 */
  push32(0x10003608u); f_10003250();
  /* 10003608 mov dword ptr [0x1000c02c], eax */
  w32((uint32_t)(0x1000c02c), (EAX));
  /* 1000360d push 0x1000ab1c */
  push32((uint32_t)(0x1000ab1cu));
  /* 10003612 call 0x10003250 */
  push32(0x10003617u); f_10003250();
  /* 10003617 push 0x1000ab0c */
  push32((uint32_t)(0x1000ab0cu));
  /* 1000361c mov dword ptr [0x1000c030], eax */
  w32((uint32_t)(0x1000c030), (EAX));
  /* 10003621 call 0x10003250 */
  push32(0x10003626u); f_10003250();
  /* 10003626 push 0x1000ab00 */
  push32((uint32_t)(0x1000ab00u));
  /* 1000362b mov dword ptr [0x1000c034], eax */
  w32((uint32_t)(0x1000c034), (EAX));
  /* 10003630 call 0x10003250 */
  push32(0x10003635u); f_10003250();
  /* 10003635 push 0x1000aaf8 */
  push32((uint32_t)(0x1000aaf8u));
  /* 1000363a mov dword ptr [0x1000c038], eax */
  w32((uint32_t)(0x1000c038), (EAX));
  /* 1000363f call 0x10003250 */
  push32(0x10003644u); f_10003250();
  /* 10003644 push 0x1000aae8 */
  push32((uint32_t)(0x1000aae8u));
  /* 10003649 mov dword ptr [0x1000c03c], eax */
  w32((uint32_t)(0x1000c03c), (EAX));
  /* 1000364e call 0x10003250 */
  push32(0x10003653u); f_10003250();
  /* 10003653 push 0x1000aae0 */
  push32((uint32_t)(0x1000aae0u));
  /* 10003658 mov dword ptr [0x1000c040], eax */
  w32((uint32_t)(0x1000c040), (EAX));
  /* 1000365d call 0x10003250 */
  push32(0x10003662u); f_10003250();
  /* 10003662 push 0x1000aad4 */
  push32((uint32_t)(0x1000aad4u));
  /* 10003667 mov dword ptr [0x1000c044], eax */
  w32((uint32_t)(0x1000c044), (EAX));
  /* 1000366c call 0x10003250 */
  push32(0x10003671u); f_10003250();
  /* 10003671 push 0x1000aacc */
  push32((uint32_t)(0x1000aaccu));
  /* 10003676 mov dword ptr [0x1000c048], eax */
  w32((uint32_t)(0x1000c048), (EAX));
  /* 1000367b call 0x10003250 */
  push32(0x10003680u); f_10003250();
  /* 10003680 push 0x1000aab8 */
  push32((uint32_t)(0x1000aab8u));
  /* 10003685 mov dword ptr [0x1000c04c], eax */
  w32((uint32_t)(0x1000c04c), (EAX));
  /* 1000368a call 0x10003250 */
  push32(0x1000368fu); f_10003250();
  /* 1000368f push 0x1000aaac */
  push32((uint32_t)(0x1000aaacu));
  /* 10003694 mov dword ptr [0x1000bb18], eax */
  w32((uint32_t)(0x1000bb18), (EAX));
  /* 10003699 call 0x10003250 */
  push32(0x1000369eu); f_10003250();
  /* 1000369e push 0x1000aaa0 */
  push32((uint32_t)(0x1000aaa0u));
  /* 100036a3 mov dword ptr [0x1000c058], eax */
  w32((uint32_t)(0x1000c058), (EAX));
  /* 100036a8 call 0x10003250 */
  push32(0x100036adu); f_10003250();
  /* 100036ad add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100036b0 mov dword ptr [0x1000c054], eax */
  w32((uint32_t)(0x1000c054), (EAX));
  /* 100036b5 push 0x1000aa8c */
  push32((uint32_t)(0x1000aa8cu));
  /* 100036ba call 0x10003250 */
  push32(0x100036bfu); f_10003250();
  /* 100036bf push 0x1000aa7c */
  push32((uint32_t)(0x1000aa7cu));
  /* 100036c4 mov dword ptr [0x1000c05c], eax */
  w32((uint32_t)(0x1000c05c), (EAX));
  /* 100036c9 call 0x10003250 */
  push32(0x100036ceu); f_10003250();
  /* 100036ce push 0x1000aa6c */
  push32((uint32_t)(0x1000aa6cu));
  /* 100036d3 mov dword ptr [0x1000c060], eax */
  w32((uint32_t)(0x1000c060), (EAX));
  /* 100036d8 call 0x10003250 */
  push32(0x100036ddu); f_10003250();
  /* 100036dd push 0x1000aa5c */
  push32((uint32_t)(0x1000aa5cu));
  /* 100036e2 mov dword ptr [0x1000c064], eax */
  w32((uint32_t)(0x1000c064), (EAX));
  /* 100036e7 call 0x10003250 */
  push32(0x100036ecu); f_10003250();
  /* 100036ec push 0x1000aa50 */
  push32((uint32_t)(0x1000aa50u));
  /* 100036f1 mov dword ptr [0x1000bfb0], eax */
  w32((uint32_t)(0x1000bfb0), (EAX));
  /* 100036f6 call 0x10003250 */
  push32(0x100036fbu); f_10003250();
  /* 100036fb push 0x1000aa40 */
  push32((uint32_t)(0x1000aa40u));
  /* 10003700 mov dword ptr [0x1000bfac], eax */
  w32((uint32_t)(0x1000bfac), (EAX));
  /* 10003705 call 0x10003250 */
  push32(0x1000370au); f_10003250();
  /* 1000370a push 0x1000aa2c */
  push32((uint32_t)(0x1000aa2cu));
  /* 1000370f mov dword ptr [0x1000bfb4], eax */
  w32((uint32_t)(0x1000bfb4), (EAX));
  /* 10003714 call 0x10003250 */
  push32(0x10003719u); f_10003250();
  /* 10003719 push 0x1000aa14 */
  push32((uint32_t)(0x1000aa14u));
  /* 1000371e mov dword ptr [0x1000bfb8], eax */
  w32((uint32_t)(0x1000bfb8), (EAX));
  /* 10003723 call 0x10003250 */
  push32(0x10003728u); f_10003250();
  /* 10003728 push 0x1000aa04 */
  push32((uint32_t)(0x1000aa04u));
  /* 1000372d mov dword ptr [0x1000bfbc], eax */
  w32((uint32_t)(0x1000bfbc), (EAX));
  /* 10003732 call 0x10003250 */
  push32(0x10003737u); f_10003250();
  /* 10003737 push 0x1000a9ec */
  push32((uint32_t)(0x1000a9ecu));
  /* 1000373c mov dword ptr [0x1000c080], eax */
  w32((uint32_t)(0x1000c080), (EAX));
  /* 10003741 call 0x10003250 */
  push32(0x10003746u); f_10003250();
  /* 10003746 push 0x1000a9dc */
  push32((uint32_t)(0x1000a9dcu));
  /* 1000374b mov dword ptr [0x1000c0b0], eax */
  w32((uint32_t)(0x1000c0b0), (EAX));
  /* 10003750 call 0x10003250 */
  push32(0x10003755u); f_10003250();
  /* 10003755 push 0x1000a9d4 */
  push32((uint32_t)(0x1000a9d4u));
  /* 1000375a mov dword ptr [0x1000c078], eax */
  w32((uint32_t)(0x1000c078), (EAX));
  /* 1000375f call 0x10003250 */
  push32(0x10003764u); f_10003250();
  /* 10003764 push 0x1000a9c4 */
  push32((uint32_t)(0x1000a9c4u));
  /* 10003769 mov dword ptr [0x1000c084], eax */
  w32((uint32_t)(0x1000c084), (EAX));
  /* 1000376e call 0x10003250 */
  push32(0x10003773u); f_10003250();
  /* 10003773 push 0x1000a9b8 */
  push32((uint32_t)(0x1000a9b8u));
  /* 10003778 mov dword ptr [0x1000c0c8], eax */
  w32((uint32_t)(0x1000c0c8), (EAX));
  /* 1000377d call 0x10003250 */
  push32(0x10003782u); f_10003250();
  /* 10003782 push 0x1000a9b0 */
  push32((uint32_t)(0x1000a9b0u));
  /* 10003787 mov dword ptr [0x1000c068], eax */
  w32((uint32_t)(0x1000c068), (EAX));
  /* 1000378c call 0x10003250 */
  push32(0x10003791u); f_10003250();
  /* 10003791 push 0x1000a9a4 */
  push32((uint32_t)(0x1000a9a4u));
  /* 10003796 mov dword ptr [0x1000c06c], eax */
  w32((uint32_t)(0x1000c06c), (EAX));
  /* 1000379b call 0x10003250 */
  push32(0x100037a0u); f_10003250();
  /* 100037a0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100037a3 mov dword ptr [0x1000c070], eax */
  w32((uint32_t)(0x1000c070), (EAX));
  /* 100037a8 push 0x1000a994 */
  push32((uint32_t)(0x1000a994u));
  /* 100037ad call 0x10003250 */
  push32(0x100037b2u); f_10003250();
  /* 100037b2 push 0x1000a980 */
  push32((uint32_t)(0x1000a980u));
  /* 100037b7 mov dword ptr [0x1000c074], eax */
  w32((uint32_t)(0x1000c074), (EAX));
  /* 100037bc call 0x10003250 */
  push32(0x100037c1u); f_10003250();
  /* 100037c1 push 0x1000a964 */
  push32((uint32_t)(0x1000a964u));
  /* 100037c6 mov dword ptr [0x1000c07c], eax */
  w32((uint32_t)(0x1000c07c), (EAX));
  /* 100037cb call 0x10003250 */
  push32(0x100037d0u); f_10003250();
  /* 100037d0 push 0x1000a950 */
  push32((uint32_t)(0x1000a950u));
  /* 100037d5 mov dword ptr [0x1000c088], eax */
  w32((uint32_t)(0x1000c088), (EAX));
  /* 100037da call 0x10003250 */
  push32(0x100037dfu); f_10003250();
  /* 100037df push 0x1000a944 */
  push32((uint32_t)(0x1000a944u));
  /* 100037e4 mov dword ptr [0x1000c08c], eax */
  w32((uint32_t)(0x1000c08c), (EAX));
  /* 100037e9 call 0x10003250 */
  push32(0x100037eeu); f_10003250();
  /* 100037ee push 0x1000a934 */
  push32((uint32_t)(0x1000a934u));
  /* 100037f3 mov dword ptr [0x1000c0bc], eax */
  w32((uint32_t)(0x1000c0bc), (EAX));
  /* 100037f8 call 0x10003250 */
  push32(0x100037fdu); f_10003250();
  /* 100037fd push 0x1000a928 */
  push32((uint32_t)(0x1000a928u));
  /* 10003802 mov dword ptr [0x1000c0c0], eax */
  w32((uint32_t)(0x1000c0c0), (EAX));
  /* 10003807 call 0x10003250 */
  push32(0x1000380cu); f_10003250();
  /* 1000380c push 0x1000a91c */
  push32((uint32_t)(0x1000a91cu));
  /* 10003811 mov dword ptr [0x1000c0c4], eax */
  w32((uint32_t)(0x1000c0c4), (EAX));
  /* 10003816 call 0x10003250 */
  push32(0x1000381bu); f_10003250();
  /* 1000381b push 0x1000a904 */
  push32((uint32_t)(0x1000a904u));
  /* 10003820 mov dword ptr [0x1000c0cc], eax */
  w32((uint32_t)(0x1000c0cc), (EAX));
  /* 10003825 call 0x10003250 */
  push32(0x1000382au); f_10003250();
  /* 1000382a push 0x1000a8e8 */
  push32((uint32_t)(0x1000a8e8u));
  /* 1000382f mov dword ptr [0x1000c090], eax */
  w32((uint32_t)(0x1000c090), (EAX));
  /* 10003834 call 0x10003250 */
  push32(0x10003839u); f_10003250();
  /* 10003839 push 0x1000a8cc */
  push32((uint32_t)(0x1000a8ccu));
  /* 1000383e mov dword ptr [0x1000c094], eax */
  w32((uint32_t)(0x1000c094), (EAX));
  /* 10003843 call 0x10003250 */
  push32(0x10003848u); f_10003250();
  /* 10003848 push 0x1000a8b4 */
  push32((uint32_t)(0x1000a8b4u));
  /* 1000384d mov dword ptr [0x1000c098], eax */
  w32((uint32_t)(0x1000c098), (EAX));
  /* 10003852 call 0x10003250 */
  push32(0x10003857u); f_10003250();
  /* 10003857 push 0x1000a89c */
  push32((uint32_t)(0x1000a89cu));
  /* 1000385c mov dword ptr [0x1000c09c], eax */
  w32((uint32_t)(0x1000c09c), (EAX));
  /* 10003861 call 0x10003250 */
  push32(0x10003866u); f_10003250();
  /* 10003866 push 0x1000a890 */
  push32((uint32_t)(0x1000a890u));
  /* 1000386b mov dword ptr [0x1000c0a0], eax */
  w32((uint32_t)(0x1000c0a0), (EAX));
  /* 10003870 call 0x10003250 */
  push32(0x10003875u); f_10003250();
  /* 10003875 push 0x1000a884 */
  push32((uint32_t)(0x1000a884u));
  /* 1000387a mov dword ptr [0x1000c0a4], eax */
  w32((uint32_t)(0x1000c0a4), (EAX));
  /* 1000387f call 0x10003250 */
  push32(0x10003884u); f_10003250();
  /* 10003884 push 0x1000a874 */
  push32((uint32_t)(0x1000a874u));
  /* 10003889 mov dword ptr [0x1000c0a8], eax */
  w32((uint32_t)(0x1000c0a8), (EAX));
  /* 1000388e call 0x10003250 */
  push32(0x10003893u); f_10003250();
  /* 10003893 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003896 mov dword ptr [0x1000c0ac], eax */
  w32((uint32_t)(0x1000c0ac), (EAX));
  /* 1000389b push 0x1000a868 */
  push32((uint32_t)(0x1000a868u));
  /* 100038a0 call 0x10003250 */
  push32(0x100038a5u); f_10003250();
  /* 100038a5 push 0x1000a85c */
  push32((uint32_t)(0x1000a85cu));
  /* 100038aa mov dword ptr [0x1000c0b4], eax */
  w32((uint32_t)(0x1000c0b4), (EAX));
  /* 100038af call 0x10003250 */
  push32(0x100038b4u); f_10003250();
  /* 100038b4 push 0x1000a850 */
  push32((uint32_t)(0x1000a850u));
  /* 100038b9 mov dword ptr [0x1000c0b8], eax */
  w32((uint32_t)(0x1000c0b8), (EAX));
  /* 100038be call 0x10003250 */
  push32(0x100038c3u); f_10003250();
  /* 100038c3 push 0x1000a840 */
  push32((uint32_t)(0x1000a840u));
  /* 100038c8 mov dword ptr [0x1000c0d0], eax */
  w32((uint32_t)(0x1000c0d0), (EAX));
  /* 100038cd call 0x10003250 */
  push32(0x100038d2u); f_10003250();
  /* 100038d2 push 0x1000a834 */
  push32((uint32_t)(0x1000a834u));
  /* 100038d7 mov dword ptr [0x1000c0d4], eax */
  w32((uint32_t)(0x1000c0d4), (EAX));
  /* 100038dc call 0x10003250 */
  push32(0x100038e1u); f_10003250();
  /* 100038e1 push 0x1000a828 */
  push32((uint32_t)(0x1000a828u));
  /* 100038e6 mov dword ptr [0x1000c0d8], eax */
  w32((uint32_t)(0x1000c0d8), (EAX));
  /* 100038eb call 0x10003250 */
  push32(0x100038f0u); f_10003250();
  /* 100038f0 push 0x1000a81c */
  push32((uint32_t)(0x1000a81cu));
  /* 100038f5 mov dword ptr [0x1000c0dc], eax */
  w32((uint32_t)(0x1000c0dc), (EAX));
  /* 100038fa call 0x10003250 */
  push32(0x100038ffu); f_10003250();
  /* 100038ff push 0x1000a80c */
  push32((uint32_t)(0x1000a80cu));
  /* 10003904 mov dword ptr [0x1000c0e0], eax */
  w32((uint32_t)(0x1000c0e0), (EAX));
  /* 10003909 call 0x10003250 */
  push32(0x1000390eu); f_10003250();
  /* 1000390e push 0x1000a7fc */
  push32((uint32_t)(0x1000a7fcu));
  /* 10003913 mov dword ptr [0x1000c0e4], eax */
  w32((uint32_t)(0x1000c0e4), (EAX));
  /* 10003918 call 0x10003250 */
  push32(0x1000391du); f_10003250();
  /* 1000391d push 0x1000a7e8 */
  push32((uint32_t)(0x1000a7e8u));
  /* 10003922 mov dword ptr [0x1000c0ec], eax */
  w32((uint32_t)(0x1000c0ec), (EAX));
  /* 10003927 call 0x10003250 */
  push32(0x1000392cu); f_10003250();
  /* 1000392c mov dword ptr [0x1000c0e8], eax */
  w32((uint32_t)(0x1000c0e8), (EAX));
  /* 10003931 push 0x1000a7d8 */
  push32((uint32_t)(0x1000a7d8u));
  /* 10003936 call 0x10003250 */
  push32(0x1000393bu); f_10003250();
  /* 1000393b push 0x1000a7c8 */
  push32((uint32_t)(0x1000a7c8u));
  /* 10003940 mov dword ptr [0x1000bec0], eax */
  w32((uint32_t)(0x1000bec0), (EAX));
  /* 10003945 call 0x10003250 */
  push32(0x1000394au); f_10003250();
  /* 1000394a add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000394d mov dword ptr [0x1000be80], eax */
  w32((uint32_t)(0x1000be80), (EAX));
  /* 10003952 call 0x100039f0 */
  push32(0x10003957u); f_100039f0();
L_10003957:;
  /* 10003957 mov eax, 1 */
  EAX = (0x1u);
  /* 1000395c ret 0xc */
  ESPCHK(0x100032b0u, _esp0);
  ESP += 16; return;
}

/* ProcessAI @ 0x10003960 (135 bytes, 30 insns) */
void f_10003960(void) {
  FTRACE(0x10003960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10003960 call 0x10003200 */
  push32(0x10003965u); f_10003200();
  /* 10003965 mov dword ptr [0x1000bce0], eax */
  w32((uint32_t)(0x1000bce0), (EAX));
  /* 1000396a call 0x100031e0 */
  push32(0x1000396fu); f_100031e0();
  /* 1000396f mov dword ptr [0x1000bf20], eax */
  w32((uint32_t)(0x1000bf20), (EAX));
  /* 10003974 mov eax, dword ptr [0x1000c0f4] */
  EAX = (r32((uint32_t)(0x1000c0f4)));
  /* 10003979 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000397c je 0x100039a8 */
  if (C.zf) goto L_100039a8;
  /* 1000397e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000397f je 0x10003992 */
  if (C.zf) goto L_10003992;
  /* 10003981 mov eax, 0x64 */
  EAX = (0x64u);
  /* 10003986 mov dword ptr [0x1000c0f4], eax */
  w32((uint32_t)(0x1000c0f4), (EAX));
  /* 1000398b mov dword ptr [0x1000a0c8], eax */
  w32((uint32_t)(0x1000a0c8), (EAX));
  /* 10003990 jmp 0x100039bc */
  goto L_100039bc;
L_10003992:;
  /* 10003992 mov dword ptr [0x1000c0f4], 0x1e */
  w32((uint32_t)(0x1000c0f4), (0x1eu));
  /* 1000399c mov dword ptr [0x1000a0c8], 0x32 */
  w32((uint32_t)(0x1000a0c8), (0x32u));
  /* 100039a6 jmp 0x100039bc */
  goto L_100039bc;
L_100039a8:;
  /* 100039a8 mov dword ptr [0x1000c0f4], 0xa */
  w32((uint32_t)(0x1000c0f4), (0xau));
  /* 100039b2 mov dword ptr [0x1000a0c8], 0x1e */
  w32((uint32_t)(0x1000a0c8), (0x1eu));
L_100039bc:;
  /* 100039bc call 0x100031f0 */
  push32(0x100039c1u); f_100031f0();
  /* 100039c1 mov dword ptr [0x1000bc90], eax */
  w32((uint32_t)(0x1000bc90), (EAX));
  /* 100039c6 mov eax, dword ptr [0x1000bce0] */
  EAX = (r32((uint32_t)(0x1000bce0)));
  /* 100039cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100039cd je 0x100039dd */
  if (C.zf) goto L_100039dd;
  /* 100039cf jle 0x100039e2 */
  if ((C.zf||C.sf!=C.of)) goto L_100039e2;
  /* 100039d1 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100039d4 jg 0x100039e2 */
  if ((!C.zf&&C.sf==C.of)) goto L_100039e2;
  /* 100039d6 call 0x10001d30 */
  push32(0x100039dbu); f_10001d30();
  /* 100039db jmp 0x100039e2 */
  goto L_100039e2;
L_100039dd:;
  /* 100039dd call 0x10002800 */
  push32(0x100039e2u); f_10002800();
L_100039e2:;
  /* 100039e2 jmp 0x10001000 */
  f_10001000(); return;
}

/* OnInit @ 0x100039f0 (5 bytes, 1 insns) */
void f_100039f0(void) {
  FTRACE(0x100039f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100039f0 jmp 0x10001060 */
  f_10001060(); return;
}

/* FUN_10003a00 @ 0x10003a00 (82 bytes, 32 insns) */
void f_10003a00(void) {
  FTRACE(0x10003a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10003a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10003a01 mov ebp, esp */
  EBP = (ESP);
  /* 10003a03 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10003a06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10003a09 push esi */
  push32((uint32_t)(ESI));
  /* 10003a0a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10003a0d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10003a10 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10003a13 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 10003a1a push eax */
  push32((uint32_t)(EAX));
  /* 10003a1b lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10003a1e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10003a21 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 10003a28 push eax */
  push32((uint32_t)(EAX));
  /* 10003a29 call 0x10003d13 */
  push32(0x10003a2eu); f_10003d13();
  /* 10003a2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003a31 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 10003a34 mov esi, eax */
  ESI = (EAX);
  /* 10003a36 js 0x10003a40 */
  if (C.sf) goto L_10003a40;
  /* 10003a38 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10003a3b and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10003a3e jmp 0x10003a4d */
  goto L_10003a4d;
L_10003a40:;
  /* 10003a40 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10003a43 push eax */
  push32((uint32_t)(EAX));
  /* 10003a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10003a46 call 0x10003bfb */
  push32(0x10003a4bu); f_10003bfb();
  /* 10003a4b pop ecx */
  ECX = (pop32());
  /* 10003a4c pop ecx */
  ECX = (pop32());
L_10003a4d:;
  /* 10003a4d mov eax, esi */
  EAX = (ESI);
  /* 10003a4f pop esi */
  ESI = (pop32());
  /* 10003a50 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10003a51 ret  */
  ESPCHK(0x10003a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a52 @ 0x10003a52 (217 bytes, 57 insns) */
void f_10003a52(void) {
  FTRACE(0x10003a52u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10003a52 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10003a56 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003a59 jne 0x10003ae7 */
  if (!C.zf) goto L_10003ae7;
  /* 10003a5f call dword ptr [0x10009014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009014))), 0x10003a65u);
  /* 10003a65 push 1 */
  push32((uint32_t)(0x1u));
  /* 10003a67 mov dword ptr [0x1000c118], eax */
  w32((uint32_t)(0x1000c118), (EAX));
  /* 10003a6c call 0x10004e0f */
  push32(0x10003a71u); f_10004e0f();
  /* 10003a71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10003a73 pop ecx */
  ECX = (pop32());
  /* 10003a74 je 0x10003ab2 */
  if (C.zf) goto L_10003ab2;
  /* 10003a76 mov eax, dword ptr [0x1000c118] */
  EAX = (r32((uint32_t)(0x1000c118)));
  /* 10003a7b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10003a7d mov cl, byte ptr [0x1000c119] */
  CL = (r8((uint32_t)(0x1000c119)));
  /* 10003a83 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10003a88 shr dword ptr [0x1000c118], 0x10 */
  w32((uint32_t)(0x1000c118), (sh_shr((uint32_t)(r32((uint32_t)(0x1000c118))), (0x10u)&0x1f, 32)));
  /* 10003a8f mov dword ptr [0x1000c120], eax */
  w32((uint32_t)(0x1000c120), (EAX));
  /* 10003a94 mov dword ptr [0x1000c124], ecx */
  w32((uint32_t)(0x1000c124), (ECX));
  /* 10003a9a shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10003a9d add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10003a9f mov dword ptr [0x1000c11c], eax */
  w32((uint32_t)(0x1000c11c), (EAX));
  /* 10003aa4 call 0x1000463b */
  push32(0x10003aa9u); f_1000463b();
  /* 10003aa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10003aab jne 0x10003ab6 */
  if (!C.zf) goto L_10003ab6;
  /* 10003aad call 0x10004e4b */
  push32(0x10003ab2u); f_10004e4b();
L_10003ab2:;
  /* 10003ab2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10003ab4 jmp 0x10003b28 */
  goto L_10003b28;
L_10003ab6:;
  /* 10003ab6 call dword ptr [0x10009010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009010))), 0x10003abcu);
  /* 10003abc mov dword ptr [0x1000d7f8], eax */
  w32((uint32_t)(0x1000d7f8), (EAX));
  /* 10003ac1 call 0x10004cdd */
  push32(0x10003ac6u); f_10004cdd();
  /* 10003ac6 mov dword ptr [0x1000c104], eax */
  w32((uint32_t)(0x1000c104), (EAX));
  /* 10003acb call 0x100047c7 */
  push32(0x10003ad0u); f_100047c7();
  /* 10003ad0 call 0x10004a90 */
  push32(0x10003ad5u); f_10004a90();
  /* 10003ad5 call 0x100049d7 */
  push32(0x10003adau); f_100049d7();
  /* 10003ada call 0x1000451d */
  push32(0x10003adfu); f_1000451d();
  /* 10003adf inc dword ptr [0x1000c100] */
  { uint32_t _r=(r32((uint32_t)(0x1000c100)))+1; w32((uint32_t)(0x1000c100), (_r)); fl_inc(_r,32); }
  /* 10003ae5 jmp 0x10003b25 */
  goto L_10003b25;
L_10003ae7:;
  /* 10003ae7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10003ae9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003aeb jne 0x10003b19 */
  if (!C.zf) goto L_10003b19;
  /* 10003aed cmp dword ptr [0x1000c100], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1000c100))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003af3 jle 0x10003ab2 */
  if ((C.zf||C.sf!=C.of)) goto L_10003ab2;
  /* 10003af5 dec dword ptr [0x1000c100] */
  { uint32_t _r=(r32((uint32_t)(0x1000c100)))-1; w32((uint32_t)(0x1000c100), (_r)); fl_dec(_r,32); }
  /* 10003afb cmp dword ptr [0x1000c150], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1000c150))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003b01 jne 0x10003b08 */
  if (!C.zf) goto L_10003b08;
  /* 10003b03 call 0x1000455b */
  push32(0x10003b08u); f_1000455b();
L_10003b08:;
  /* 10003b08 call 0x10004983 */
  push32(0x10003b0du); f_10004983();
  /* 10003b0d call 0x1000468f */
  push32(0x10003b12u); f_1000468f();
  /* 10003b12 call 0x10004e4b */
  push32(0x10003b17u); f_10004e4b();
  /* 10003b17 jmp 0x10003b25 */
  goto L_10003b25;
L_10003b19:;
  /* 10003b19 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003b1c jne 0x10003b25 */
  if (!C.zf) goto L_10003b25;
  /* 10003b1e push ecx */
  push32((uint32_t)(ECX));
  /* 10003b1f call 0x10004727 */
  push32(0x10003b24u); f_10004727();
  /* 10003b24 pop ecx */
  ECX = (pop32());
L_10003b25:;
  /* 10003b25 push 1 */
  push32((uint32_t)(0x1u));
  /* 10003b27 pop eax */
  EAX = (pop32());
L_10003b28:;
  /* 10003b28 ret 0xc */
  ESPCHK(0x10003a52u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10003b2b (157 bytes, 73 insns) */
void f_10003b2b(void) {
  FTRACE(0x10003b2bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10003b2b push ebp */
  push32((uint32_t)(EBP));
  /* 10003b2c mov ebp, esp */
  EBP = (ESP);
  /* 10003b2e push ebx */
  push32((uint32_t)(EBX));
  /* 10003b2f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10003b32 push esi */
  push32((uint32_t)(ESI));
  /* 10003b33 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10003b36 push edi */
  push32((uint32_t)(EDI));
  /* 10003b37 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10003b3a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10003b3c jne 0x10003b47 */
  if (!C.zf) goto L_10003b47;
  /* 10003b3e cmp dword ptr [0x1000c100], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1000c100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003b45 jmp 0x10003b6d */
  goto L_10003b6d;
L_10003b47:;
  /* 10003b47 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003b4a je 0x10003b51 */
  if (C.zf) goto L_10003b51;
  /* 10003b4c cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003b4f jne 0x10003b73 */
  if (!C.zf) goto L_10003b73;
L_10003b51:;
  /* 10003b51 mov eax, dword ptr [0x1000d7fc] */
  EAX = (r32((uint32_t)(0x1000d7fc)));
  /* 10003b56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10003b58 je 0x10003b63 */
  if (C.zf) goto L_10003b63;
  /* 10003b5a push edi */
  push32((uint32_t)(EDI));
  /* 10003b5b push esi */
  push32((uint32_t)(ESI));
  /* 10003b5c push ebx */
  push32((uint32_t)(EBX));
  /* 10003b5d call eax */
  call_ind((uint32_t)(EAX), 0x10003b5fu);
  /* 10003b5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10003b61 je 0x10003b6f */
  if (C.zf) goto L_10003b6f;
L_10003b63:;
  /* 10003b63 push edi */
  push32((uint32_t)(EDI));
  /* 10003b64 push esi */
  push32((uint32_t)(ESI));
  /* 10003b65 push ebx */
  push32((uint32_t)(EBX));
  /* 10003b66 call 0x10003a52 */
  push32(0x10003b6bu); f_10003a52();
  /* 10003b6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10003b6d:;
  /* 10003b6d jne 0x10003b73 */
  if (!C.zf) goto L_10003b73;
L_10003b6f:;
  /* 10003b6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10003b71 jmp 0x10003bc1 */
  goto L_10003bc1;
L_10003b73:;
  /* 10003b73 push edi */
  push32((uint32_t)(EDI));
  /* 10003b74 push esi */
  push32((uint32_t)(ESI));
  /* 10003b75 push ebx */
  push32((uint32_t)(EBX));
  /* 10003b76 call 0x100032b0 */
  push32(0x10003b7bu); f_100032b0();
  /* 10003b7b cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003b7e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10003b81 jne 0x10003b8f */
  if (!C.zf) goto L_10003b8f;
  /* 10003b83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10003b85 jne 0x10003bbe */
  if (!C.zf) goto L_10003bbe;
  /* 10003b87 push edi */
  push32((uint32_t)(EDI));
  /* 10003b88 push eax */
  push32((uint32_t)(EAX));
  /* 10003b89 push ebx */
  push32((uint32_t)(EBX));
  /* 10003b8a call 0x10003a52 */
  push32(0x10003b8fu); f_10003a52();
L_10003b8f:;
  /* 10003b8f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10003b91 je 0x10003b98 */
  if (C.zf) goto L_10003b98;
  /* 10003b93 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003b96 jne 0x10003bbe */
  if (!C.zf) goto L_10003bbe;
L_10003b98:;
  /* 10003b98 push edi */
  push32((uint32_t)(EDI));
  /* 10003b99 push esi */
  push32((uint32_t)(ESI));
  /* 10003b9a push ebx */
  push32((uint32_t)(EBX));
  /* 10003b9b call 0x10003a52 */
  push32(0x10003ba0u); f_10003a52();
  /* 10003ba0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10003ba2 jne 0x10003ba7 */
  if (!C.zf) goto L_10003ba7;
  /* 10003ba4 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10003ba7:;
  /* 10003ba7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003bab je 0x10003bbe */
  if (C.zf) goto L_10003bbe;
  /* 10003bad mov eax, dword ptr [0x1000d7fc] */
  EAX = (r32((uint32_t)(0x1000d7fc)));
  /* 10003bb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10003bb4 je 0x10003bbe */
  if (C.zf) goto L_10003bbe;
  /* 10003bb6 push edi */
  push32((uint32_t)(EDI));
  /* 10003bb7 push esi */
  push32((uint32_t)(ESI));
  /* 10003bb8 push ebx */
  push32((uint32_t)(EBX));
  /* 10003bb9 call eax */
  call_ind((uint32_t)(EAX), 0x10003bbbu);
  /* 10003bbb mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10003bbe:;
  /* 10003bbe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10003bc1:;
  /* 10003bc1 pop edi */
  EDI = (pop32());
  /* 10003bc2 pop esi */
  ESI = (pop32());
  /* 10003bc3 pop ebx */
  EBX = (pop32());
  /* 10003bc4 pop ebp */
  EBP = (pop32());
  /* 10003bc5 ret 0xc */
  ESPCHK(0x10003b2bu, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10003bc8 (48 bytes, 15 insns) */
void f_10003bc8(void) {
  FTRACE(0x10003bc8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10003bc8 mov eax, dword ptr [0x1000c10c] */
  EAX = (r32((uint32_t)(0x1000c10c)));
  /* 10003bcd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003bd0 je 0x10003bdf */
  if (C.zf) goto L_10003bdf;
  /* 10003bd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10003bd4 jne 0x10003be4 */
  if (!C.zf) goto L_10003be4;
  /* 10003bd6 cmp dword ptr [0x1000c110], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1000c110))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003bdd jne 0x10003be4 */
  if (!C.zf) goto L_10003be4;
L_10003bdf:;
  /* 10003bdf call 0x10004ec0 */
  push32(0x10003be4u); f_10004ec0();
L_10003be4:;
  /* 10003be4 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10003be8 call 0x10004ef9 */
  push32(0x10003bedu); f_10004ef9();
  /* 10003bed push 0xff */
  push32((uint32_t)(0xffu));
  /* 10003bf2 call dword ptr [0x1000ae5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000ae5c))), 0x10003bf8u);
  /* 10003bf8 pop ecx */
  ECX = (pop32());
  /* 10003bf9 pop ecx */
  ECX = (pop32());
  /* 10003bfa ret  */
  ESPCHK(0x10003bc8u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bfb @ 0x10003bfb (280 bytes, 106 insns) */
void f_10003bfb(void) {
  FTRACE(0x10003bfbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10003bfb push ebp */
  push32((uint32_t)(EBP));
  /* 10003bfc mov ebp, esp */
  EBP = (ESP);
  /* 10003bfe push ebx */
  push32((uint32_t)(EBX));
  /* 10003bff push esi */
  push32((uint32_t)(ESI));
  /* 10003c00 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10003c03 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10003c06 mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 10003c09 test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 10003c0b je 0x10003d07 */
  if (C.zf) goto L_10003d07;
  /* 10003c11 test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 10003c13 jne 0x10003d07 */
  if (!C.zf) goto L_10003d07;
  /* 10003c19 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10003c1b je 0x10003c33 */
  if (C.zf) goto L_10003c33;
  /* 10003c1d and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10003c21 test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 10003c23 je 0x10003d07 */
  if (C.zf) goto L_10003d07;
  /* 10003c29 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 10003c2c and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10003c2e mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 10003c30 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_10003c33:;
  /* 10003c33 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10003c36 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10003c3a and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10003c3e and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 10003c40 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10003c42 test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 10003c46 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10003c49 jne 0x10003c6d */
  if (!C.zf) goto L_10003c6d;
  /* 10003c4b cmp esi, 0x1000af48 */
  { uint32_t _a=(ESI),_b=(0x1000af48u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003c51 je 0x10003c5b */
  if (C.zf) goto L_10003c5b;
  /* 10003c53 cmp esi, 0x1000af68 */
  { uint32_t _a=(ESI),_b=(0x1000af68u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003c59 jne 0x10003c66 */
  if (!C.zf) goto L_10003c66;
L_10003c5b:;
  /* 10003c5b push ebx */
  push32((uint32_t)(EBX));
  /* 10003c5c call 0x10005358 */
  push32(0x10003c61u); f_10005358();
  /* 10003c61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10003c63 pop ecx */
  ECX = (pop32());
  /* 10003c64 jne 0x10003c6d */
  if (!C.zf) goto L_10003c6d;
L_10003c66:;
  /* 10003c66 push esi */
  push32((uint32_t)(ESI));
  /* 10003c67 call 0x10005314 */
  push32(0x10003c6cu); f_10005314();
  /* 10003c6c pop ecx */
  ECX = (pop32());
L_10003c6d:;
  /* 10003c6d test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 10003c73 push edi */
  push32((uint32_t)(EDI));
  /* 10003c74 je 0x10003cdd */
  if (C.zf) goto L_10003cdd;
  /* 10003c76 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 10003c79 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 10003c7b sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10003c7d lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10003c80 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 10003c82 mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 10003c85 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10003c86 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10003c88 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 10003c8b jle 0x10003c9d */
  if ((C.zf||C.sf!=C.of)) goto L_10003c9d;
  /* 10003c8d push edi */
  push32((uint32_t)(EDI));
  /* 10003c8e push eax */
  push32((uint32_t)(EAX));
  /* 10003c8f push ebx */
  push32((uint32_t)(EBX));
  /* 10003c90 call 0x10005124 */
  push32(0x10003c95u); f_10005124();
  /* 10003c95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003c98 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10003c9b jmp 0x10003cd3 */
  goto L_10003cd3;
L_10003c9d:;
  /* 10003c9d cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003ca0 je 0x10003cbb */
  if (C.zf) goto L_10003cbb;
  /* 10003ca2 mov ecx, ebx */
  ECX = (EBX);
  /* 10003ca4 mov eax, ebx */
  EAX = (EBX);
  /* 10003ca6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10003ca9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10003cac mov ecx, dword ptr [ecx*4 + 0x1000d6e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1000d6e0)));
  /* 10003cb3 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10003cb6 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10003cb9 jmp 0x10003cc0 */
  goto L_10003cc0;
L_10003cbb:;
  /* 10003cbb mov eax, 0x1000ae70 */
  EAX = (0x1000ae70u);
L_10003cc0:;
  /* 10003cc0 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10003cc4 je 0x10003cd3 */
  if (C.zf) goto L_10003cd3;
  /* 10003cc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10003cc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10003cca push ebx */
  push32((uint32_t)(EBX));
  /* 10003ccb call 0x1000504c */
  push32(0x10003cd0u); f_1000504c();
  /* 10003cd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10003cd3:;
  /* 10003cd3 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 10003cd6 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10003cd9 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10003cdb jmp 0x10003cf1 */
  goto L_10003cf1;
L_10003cdd:;
  /* 10003cdd push 1 */
  push32((uint32_t)(0x1u));
  /* 10003cdf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10003ce2 pop edi */
  EDI = (pop32());
  /* 10003ce3 push edi */
  push32((uint32_t)(EDI));
  /* 10003ce4 push eax */
  push32((uint32_t)(EAX));
  /* 10003ce5 push ebx */
  push32((uint32_t)(EBX));
  /* 10003ce6 call 0x10005124 */
  push32(0x10003cebu); f_10005124();
  /* 10003ceb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003cee mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10003cf1:;
  /* 10003cf1 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003cf4 pop edi */
  EDI = (pop32());
  /* 10003cf5 je 0x10003cfd */
  if (C.zf) goto L_10003cfd;
  /* 10003cf7 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 10003cfb jmp 0x10003d0c */
  goto L_10003d0c;
L_10003cfd:;
  /* 10003cfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10003d00 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10003d05 jmp 0x10003d0f */
  goto L_10003d0f;
L_10003d07:;
  /* 10003d07 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10003d09 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_10003d0c:;
  /* 10003d0c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10003d0f:;
  /* 10003d0f pop esi */
  ESI = (pop32());
  /* 10003d10 pop ebx */
  EBX = (pop32());
  /* 10003d11 pop ebp */
  EBP = (pop32());
  /* 10003d12 ret  */
  ESPCHK(0x10003bfbu, _esp0);
  ESP += 4; return;
}

/* FUN_10003d13 @ 0x10003d13 (1825 bytes, 595 insns) [1 switch table(s)] */
void f_10003d13(void) {
  FTRACE(0x10003d13u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10003d13 push ebp */
  push32((uint32_t)(EBP));
  /* 10003d14 mov ebp, esp */
  EBP = (ESP);
  /* 10003d16 sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10003d1c push ebx */
  push32((uint32_t)(EBX));
  /* 10003d1d push esi */
  push32((uint32_t)(ESI));
  /* 10003d1e push edi */
  push32((uint32_t)(EDI));
  /* 10003d1f mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10003d22 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10003d24 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10003d26 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10003d27 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10003d29 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10003d2c mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 10003d2f mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 10003d32 je 0x1000442c */
  if (C.zf) goto L_1000442c;
  /* 10003d38 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10003d3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10003d3d jmp 0x10003d47 */
  goto L_10003d47;
L_10003d3f:;
  /* 10003d3f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10003d42 mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 10003d45 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_10003d47:;
  /* 10003d47 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003d4a jl 0x1000442c */
  if ((C.sf!=C.of)) goto L_1000442c;
  /* 10003d50 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10003d53 jl 0x10003d68 */
  if ((C.sf!=C.of)) goto L_10003d68;
  /* 10003d55 cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10003d58 jg 0x10003d68 */
  if ((!C.zf&&C.sf==C.of)) goto L_10003d68;
  /* 10003d5a movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10003d5d mov al, byte ptr [eax + 0x100090c0] */
  AL = (r8((uint32_t)(EAX + 0x100090c0)));
  /* 10003d63 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10003d66 jmp 0x10003d6a */
  goto L_10003d6a;
L_10003d68:;
  /* 10003d68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10003d6a:;
  /* 10003d6a movsx eax, byte ptr [esi + eax*8 + 0x100090e0] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x100090e0))));
  /* 10003d72 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10003d75 cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003d78 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10003d7b ja 0x1000441b */
  if ((!C.cf&&!C.zf)) goto L_1000441b;
  /* 10003d81 jmp dword ptr [eax*4 + 0x10004434] */
  switch (EAX) {
    case 0: goto L_10003eb2;
    case 1: goto L_10003d88;
    case 2: goto L_10003da3;
    case 3: goto L_10003def;
    case 4: goto L_10003e26;
    case 5: goto L_10003e2e;
    case 6: goto L_10003e63;
    case 7: goto L_10003ef6;
    default: x86_unimpl("switch@0x10003d81 out of table"); return;
  }
L_10003d88:;
  /* 10003d88 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10003d8c mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10003d8f mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10003d92 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10003d95 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10003d98 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10003d9b mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10003d9e jmp 0x1000441b */
  goto L_1000441b;
L_10003da3:;
  /* 10003da3 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10003da6 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10003da9 je 0x10003de6 */
  if (C.zf) goto L_10003de6;
  /* 10003dab sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10003dae je 0x10003ddd */
  if (C.zf) goto L_10003ddd;
  /* 10003db0 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10003db3 je 0x10003dd4 */
  if (C.zf) goto L_10003dd4;
  /* 10003db5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10003db6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10003db7 je 0x10003dcb */
  if (C.zf) goto L_10003dcb;
  /* 10003db9 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10003dbc jne 0x1000441b */
  if (!C.zf) goto L_1000441b;
  /* 10003dc2 or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10003dc6 jmp 0x1000441b */
  goto L_1000441b;
L_10003dcb:;
  /* 10003dcb or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10003dcf jmp 0x1000441b */
  goto L_1000441b;
L_10003dd4:;
  /* 10003dd4 or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10003dd8 jmp 0x1000441b */
  goto L_1000441b;
L_10003ddd:;
  /* 10003ddd or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 10003de1 jmp 0x1000441b */
  goto L_1000441b;
L_10003de6:;
  /* 10003de6 or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10003dea jmp 0x1000441b */
  goto L_1000441b;
L_10003def:;
  /* 10003def cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10003df2 jne 0x10003e17 */
  if (!C.zf) goto L_10003e17;
  /* 10003df4 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10003df7 push eax */
  push32((uint32_t)(EAX));
  /* 10003df8 call 0x100044f2 */
  push32(0x10003dfdu); f_100044f2();
  /* 10003dfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10003dff pop ecx */
  ECX = (pop32());
  /* 10003e00 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10003e03 jge 0x1000441b */
  if ((C.sf==C.of)) goto L_1000441b;
  /* 10003e09 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10003e0d neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10003e0f:;
  /* 10003e0f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10003e12 jmp 0x1000441b */
  goto L_1000441b;
L_10003e17:;
  /* 10003e17 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10003e1a movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10003e1d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10003e20 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 10003e24 jmp 0x10003e0f */
  goto L_10003e0f;
L_10003e26:;
  /* 10003e26 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10003e29 jmp 0x1000441b */
  goto L_1000441b;
L_10003e2e:;
  /* 10003e2e cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10003e31 jne 0x10003e51 */
  if (!C.zf) goto L_10003e51;
  /* 10003e33 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10003e36 push eax */
  push32((uint32_t)(EAX));
  /* 10003e37 call 0x100044f2 */
  push32(0x10003e3cu); f_100044f2();
  /* 10003e3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10003e3e pop ecx */
  ECX = (pop32());
  /* 10003e3f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10003e42 jge 0x1000441b */
  if ((C.sf==C.of)) goto L_1000441b;
  /* 10003e48 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10003e4c jmp 0x1000441b */
  goto L_1000441b;
L_10003e51:;
  /* 10003e51 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10003e54 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10003e57 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 10003e5b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10003e5e jmp 0x1000441b */
  goto L_1000441b;
L_10003e63:;
  /* 10003e63 cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10003e66 je 0x10003e96 */
  if (C.zf) goto L_10003e96;
  /* 10003e68 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10003e6b je 0x10003e8d */
  if (C.zf) goto L_10003e8d;
  /* 10003e6d cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10003e70 je 0x10003e84 */
  if (C.zf) goto L_10003e84;
  /* 10003e72 cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10003e75 jne 0x1000441b */
  if (!C.zf) goto L_1000441b;
  /* 10003e7b or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10003e7f jmp 0x1000441b */
  goto L_1000441b;
L_10003e84:;
  /* 10003e84 or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10003e88 jmp 0x1000441b */
  goto L_1000441b;
L_10003e8d:;
  /* 10003e8d or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10003e91 jmp 0x1000441b */
  goto L_1000441b;
L_10003e96:;
  /* 10003e96 cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10003e99 jne 0x10003eaf */
  if (!C.zf) goto L_10003eaf;
  /* 10003e9b cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10003e9f jne 0x10003eaf */
  if (!C.zf) goto L_10003eaf;
  /* 10003ea1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10003ea2 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10003ea3 or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10003ea7 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 10003eaa jmp 0x1000441b */
  goto L_1000441b;
L_10003eaf:;
  /* 10003eaf mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10003eb2:;
  /* 10003eb2 mov ecx, dword ptr [0x1000b1c8] */
  ECX = (r32((uint32_t)(0x1000b1c8)));
  /* 10003eb8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10003ebb movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 10003ebe test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 10003ec3 je 0x10003ede */
  if (C.zf) goto L_10003ede;
  /* 10003ec5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10003ec8 push eax */
  push32((uint32_t)(EAX));
  /* 10003ec9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10003ecc movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10003ecf push eax */
  push32((uint32_t)(EAX));
  /* 10003ed0 call 0x10004454 */
  push32(0x10003ed5u); f_10004454();
  /* 10003ed5 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10003ed7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003eda inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10003edb mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10003ede:;
  /* 10003ede lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10003ee1 push eax */
  push32((uint32_t)(EAX));
  /* 10003ee2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10003ee5 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10003ee8 push eax */
  push32((uint32_t)(EAX));
  /* 10003ee9 call 0x10004454 */
  push32(0x10003eeeu); f_10004454();
  /* 10003eee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003ef1 jmp 0x1000441b */
  goto L_1000441b;
L_10003ef6:;
  /* 10003ef6 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10003ef9 cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003efc jg 0x1000411e */
  if ((!C.zf&&C.sf==C.of)) goto L_1000411e;
  /* 10003f02 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003f05 jge 0x10003fa1 */
  if ((C.sf==C.of)) goto L_10003fa1;
  /* 10003f0b cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003f0e jg 0x10003fff */
  if ((!C.zf&&C.sf==C.of)) goto L_10003fff;
  /* 10003f14 je 0x10004192 */
  if (C.zf) goto L_10004192;
  /* 10003f1a sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10003f1d je 0x10003fc2 */
  if (C.zf) goto L_10003fc2;
  /* 10003f23 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10003f24 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10003f25 je 0x10003f97 */
  if (C.zf) goto L_10003f97;
  /* 10003f27 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10003f28 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10003f29 je 0x10003f97 */
  if (C.zf) goto L_10003f97;
  /* 10003f2b sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10003f2e jne 0x1000431d */
  if (!C.zf) goto L_1000431d;
  /* 10003f34 test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 10003f3a jne 0x10003f40 */
  if (!C.zf) goto L_10003f40;
  /* 10003f3c or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_10003f40:;
  /* 10003f40 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10003f43 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003f46 jne 0x10003f4d */
  if (!C.zf) goto L_10003f4d;
  /* 10003f48 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_10003f4d:;
  /* 10003f4d lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10003f50 push eax */
  push32((uint32_t)(EAX));
  /* 10003f51 call 0x100044f2 */
  push32(0x10003f56u); f_100044f2();
  /* 10003f56 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 10003f5c pop ecx */
  ECX = (pop32());
  /* 10003f5d mov ecx, eax */
  ECX = (EAX);
  /* 10003f5f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10003f62 je 0x10004166 */
  if (C.zf) goto L_10004166;
  /* 10003f68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10003f6a jne 0x10003f75 */
  if (!C.zf) goto L_10003f75;
  /* 10003f6c mov ecx, dword ptr [0x1000ae64] */
  ECX = (r32((uint32_t)(0x1000ae64)));
  /* 10003f72 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10003f75:;
  /* 10003f75 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10003f7c mov eax, ecx */
  EAX = (ECX);
L_10003f7e:;
  /* 10003f7e mov edx, esi */
  EDX = (ESI);
  /* 10003f80 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10003f81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10003f83 je 0x1000415d */
  if (C.zf) goto L_1000415d;
  /* 10003f89 cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10003f8d je 0x1000415d */
  if (C.zf) goto L_1000415d;
  /* 10003f93 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10003f94 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10003f95 jmp 0x10003f7e */
  goto L_10003f7e;
L_10003f97:;
  /* 10003f97 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 10003f9e add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_10003fa1:;
  /* 10003fa1 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10003fa5 lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 10003fab cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10003fad mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10003fb0 jge 0x10004085 */
  if ((C.sf==C.of)) goto L_10004085;
  /* 10003fb6 mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 10003fbd jmp 0x10004093 */
  goto L_10004093;
L_10003fc2:;
  /* 10003fc2 test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 10003fc8 jne 0x10003fce */
  if (!C.zf) goto L_10003fce;
  /* 10003fca or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_10003fce:;
  /* 10003fce test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 10003fd4 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10003fd7 push eax */
  push32((uint32_t)(EAX));
  /* 10003fd8 je 0x10004015 */
  if (C.zf) goto L_10004015;
  /* 10003fda call 0x1000450f */
  push32(0x10003fdfu); f_1000450f();
  /* 10003fdf push eax */
  push32((uint32_t)(EAX));
  /* 10003fe0 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10003fe6 push eax */
  push32((uint32_t)(EAX));
  /* 10003fe7 call 0x1000556b */
  push32(0x10003fecu); f_1000556b();
  /* 10003fec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10003fef mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10003ff2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10003ff4 jge 0x10004028 */
  if ((C.sf==C.of)) goto L_10004028;
  /* 10003ff6 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 10003ffd jmp 0x10004028 */
  goto L_10004028;
L_10003fff:;
  /* 10003fff sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10004002 je 0x10004036 */
  if (C.zf) goto L_10004036;
  /* 10004004 sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10004007 je 0x10003fce */
  if (C.zf) goto L_10003fce;
  /* 10004009 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000400a je 0x100041f8 */
  if (C.zf) goto L_100041f8;
  /* 10004010 jmp 0x1000431d */
  goto L_1000431d;
L_10004015:;
  /* 10004015 call 0x100044f2 */
  push32(0x1000401au); f_100044f2();
  /* 1000401a pop ecx */
  ECX = (pop32());
  /* 1000401b mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 10004021 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10004028:;
  /* 10004028 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 1000402e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10004031 jmp 0x1000431d */
  goto L_1000431d;
L_10004036:;
  /* 10004036 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10004039 push eax */
  push32((uint32_t)(EAX));
  /* 1000403a call 0x100044f2 */
  push32(0x1000403fu); f_100044f2();
  /* 1000403f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004041 pop ecx */
  ECX = (pop32());
  /* 10004042 je 0x10004077 */
  if (C.zf) goto L_10004077;
  /* 10004044 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10004047 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10004049 je 0x10004077 */
  if (C.zf) goto L_10004077;
  /* 1000404b test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 1000404f je 0x10004068 */
  if (C.zf) goto L_10004068;
  /* 10004051 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 10004054 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10004056 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10004059 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1000405c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10004063 jmp 0x1000431d */
  goto L_1000431d;
L_10004068:;
  /* 10004068 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 1000406c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1000406f movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 10004072 jmp 0x1000431a */
  goto L_1000431a;
L_10004077:;
  /* 10004077 mov eax, dword ptr [0x1000ae60] */
  EAX = (r32((uint32_t)(0x1000ae60)));
  /* 1000407c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1000407f push eax */
  push32((uint32_t)(EAX));
  /* 10004080 jmp 0x10004113 */
  goto L_10004113;
L_10004085:;
  /* 10004085 jne 0x10004093 */
  if (!C.zf) goto L_10004093;
  /* 10004087 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000408a jne 0x10004093 */
  if (!C.zf) goto L_10004093;
  /* 1000408c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10004093:;
  /* 10004093 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10004096 push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 10004099 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000409c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1000409f push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 100040a2 mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 100040a5 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 100040a8 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 100040ab mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 100040ae movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100040b1 push eax */
  push32((uint32_t)(EAX));
  /* 100040b2 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100040b8 push eax */
  push32((uint32_t)(EAX));
  /* 100040b9 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 100040bc push eax */
  push32((uint32_t)(EAX));
  /* 100040bd call dword ptr [0x1000b1b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000b1b0))), 0x100040c3u);
  /* 100040c3 mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 100040c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100040c9 and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 100040cf je 0x100040e5 */
  if (C.zf) goto L_100040e5;
  /* 100040d1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100040d5 jne 0x100040e5 */
  if (!C.zf) goto L_100040e5;
  /* 100040d7 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100040dd push eax */
  push32((uint32_t)(EAX));
  /* 100040de call dword ptr [0x1000b1bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000b1bc))), 0x100040e4u);
  /* 100040e4 pop ecx */
  ECX = (pop32());
L_100040e5:;
  /* 100040e5 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100040e8 jne 0x100040fc */
  if (!C.zf) goto L_100040fc;
  /* 100040ea test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100040ec jne 0x100040fc */
  if (!C.zf) goto L_100040fc;
  /* 100040ee lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 100040f4 push eax */
  push32((uint32_t)(EAX));
  /* 100040f5 call dword ptr [0x1000b1b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000b1b4))), 0x100040fbu);
  /* 100040fb pop ecx */
  ECX = (pop32());
L_100040fc:;
  /* 100040fc cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004103 jne 0x10004112 */
  if (!C.zf) goto L_10004112;
  /* 10004105 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10004109 lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 1000410f mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_10004112:;
  /* 10004112 push edi */
  push32((uint32_t)(EDI));
L_10004113:;
  /* 10004113 call 0x100054f0 */
  push32(0x10004118u); f_100054f0();
  /* 10004118 pop ecx */
  ECX = (pop32());
  /* 10004119 jmp 0x1000431a */
  goto L_1000431a;
L_1000411e:;
  /* 1000411e sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10004121 je 0x100041f8 */
  if (C.zf) goto L_100041f8;
  /* 10004127 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000412a je 0x100041ce */
  if (C.zf) goto L_100041ce;
  /* 10004130 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10004131 je 0x100041bb */
  if (C.zf) goto L_100041bb;
  /* 10004137 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10004138 je 0x1000418b */
  if (C.zf) goto L_1000418b;
  /* 1000413a sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000413d je 0x10003f40 */
  if (C.zf) goto L_10003f40;
  /* 10004143 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10004144 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10004145 je 0x100041fc */
  if (C.zf) goto L_100041fc;
  /* 1000414b sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000414e jne 0x1000431d */
  if (!C.zf) goto L_1000431d;
  /* 10004154 mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 1000415b jmp 0x10004199 */
  goto L_10004199;
L_1000415d:;
  /* 1000415d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000415f sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10004161 jmp 0x1000431a */
  goto L_1000431a;
L_10004166:;
  /* 10004166 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10004168 jne 0x10004173 */
  if (!C.zf) goto L_10004173;
  /* 1000416a mov ecx, dword ptr [0x1000ae60] */
  ECX = (r32((uint32_t)(0x1000ae60)));
  /* 10004170 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10004173:;
  /* 10004173 mov eax, ecx */
  EAX = (ECX);
L_10004175:;
  /* 10004175 mov edx, esi */
  EDX = (ESI);
  /* 10004177 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10004178 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1000417a je 0x10004184 */
  if (C.zf) goto L_10004184;
  /* 1000417c cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000417f je 0x10004184 */
  if (C.zf) goto L_10004184;
  /* 10004181 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10004182 jmp 0x10004175 */
  goto L_10004175;
L_10004184:;
  /* 10004184 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10004186 jmp 0x1000431a */
  goto L_1000431a;
L_1000418b:;
  /* 1000418b mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_10004192:;
  /* 10004192 mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_10004199:;
  /* 10004199 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 1000419d mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 100041a4 je 0x10004203 */
  if (C.zf) goto L_10004203;
  /* 100041a6 mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 100041a9 mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 100041ad add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100041af mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 100041b6 mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 100041b9 jmp 0x10004203 */
  goto L_10004203;
L_100041bb:;
  /* 100041bb test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 100041bf mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 100041c6 je 0x10004203 */
  if (C.zf) goto L_10004203;
  /* 100041c8 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100041cc jmp 0x10004203 */
  goto L_10004203;
L_100041ce:;
  /* 100041ce lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 100041d1 push eax */
  push32((uint32_t)(EAX));
  /* 100041d2 call 0x100044f2 */
  push32(0x100041d7u); f_100044f2();
  /* 100041d7 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100041db pop ecx */
  ECX = (pop32());
  /* 100041dc je 0x100041e7 */
  if (C.zf) goto L_100041e7;
  /* 100041de mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 100041e2 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 100041e5 jmp 0x100041ec */
  goto L_100041ec;
L_100041e7:;
  /* 100041e7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 100041ea mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_100041ec:;
  /* 100041ec mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 100041f3 jmp 0x1000441b */
  goto L_1000441b;
L_100041f8:;
  /* 100041f8 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_100041fc:;
  /* 100041fc mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_10004203:;
  /* 10004203 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 10004207 je 0x10004215 */
  if (C.zf) goto L_10004215;
  /* 10004209 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1000420c push eax */
  push32((uint32_t)(EAX));
  /* 1000420d call 0x100044ff */
  push32(0x10004212u); f_100044ff();
  /* 10004212 pop ecx */
  ECX = (pop32());
  /* 10004213 jmp 0x10004256 */
  goto L_10004256;
L_10004215:;
  /* 10004215 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10004219 je 0x1000423c */
  if (C.zf) goto L_1000423c;
  /* 1000421b test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 1000421f lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10004222 push eax */
  push32((uint32_t)(EAX));
  /* 10004223 je 0x10004231 */
  if (C.zf) goto L_10004231;
  /* 10004225 call 0x100044f2 */
  push32(0x1000422au); f_100044f2();
  /* 1000422a pop ecx */
  ECX = (pop32());
  /* 1000422b movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_1000422e:;
  /* 1000422e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1000422f jmp 0x10004256 */
  goto L_10004256;
L_10004231:;
  /* 10004231 call 0x100044f2 */
  push32(0x10004236u); f_100044f2();
  /* 10004236 pop ecx */
  ECX = (pop32());
  /* 10004237 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 1000423a jmp 0x1000422e */
  goto L_1000422e;
L_1000423c:;
  /* 1000423c test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10004240 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10004243 push eax */
  push32((uint32_t)(EAX));
  /* 10004244 je 0x1000424e */
  if (C.zf) goto L_1000424e;
  /* 10004246 call 0x100044f2 */
  push32(0x1000424bu); f_100044f2();
  /* 1000424b pop ecx */
  ECX = (pop32());
  /* 1000424c jmp 0x1000422e */
  goto L_1000422e;
L_1000424e:;
  /* 1000424e call 0x100044f2 */
  push32(0x10004253u); f_100044f2();
  /* 10004253 pop ecx */
  ECX = (pop32());
  /* 10004254 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_10004256:;
  /* 10004256 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 1000425a je 0x10004277 */
  if (C.zf) goto L_10004277;
  /* 1000425c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1000425e jg 0x10004277 */
  if ((!C.zf&&C.sf==C.of)) goto L_10004277;
  /* 10004260 jl 0x10004266 */
  if ((C.sf!=C.of)) goto L_10004266;
  /* 10004262 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004264 jae 0x10004277 */
  if (!C.cf) goto L_10004277;
L_10004266:;
  /* 10004266 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10004268 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000426b mov esi, eax */
  ESI = (EAX);
  /* 1000426d neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1000426f or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10004273 mov edi, edx */
  EDI = (EDX);
  /* 10004275 jmp 0x1000427b */
  goto L_1000427b;
L_10004277:;
  /* 10004277 mov esi, eax */
  ESI = (EAX);
  /* 10004279 mov edi, edx */
  EDI = (EDX);
L_1000427b:;
  /* 1000427b test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 1000427f jne 0x10004284 */
  if (!C.zf) goto L_10004284;
  /* 10004281 and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_10004284:;
  /* 10004284 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004288 jge 0x10004293 */
  if ((C.sf==C.of)) goto L_10004293;
  /* 1000428a mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10004291 jmp 0x10004297 */
  goto L_10004297;
L_10004293:;
  /* 10004293 and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10004297:;
  /* 10004297 mov eax, esi */
  EAX = (ESI);
  /* 10004299 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1000429b jne 0x100042a1 */
  if (!C.zf) goto L_100042a1;
  /* 1000429d and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_100042a1:;
  /* 100042a1 lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 100042a4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_100042a7:;
  /* 100042a7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 100042aa dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 100042ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100042af jg 0x100042b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_100042b7;
  /* 100042b1 mov eax, esi */
  EAX = (ESI);
  /* 100042b3 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 100042b5 je 0x100042f2 */
  if (C.zf) goto L_100042f2;
L_100042b7:;
  /* 100042b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100042ba cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100042bb push edx */
  push32((uint32_t)(EDX));
  /* 100042bc push eax */
  push32((uint32_t)(EAX));
  /* 100042bd push edi */
  push32((uint32_t)(EDI));
  /* 100042be push esi */
  push32((uint32_t)(ESI));
  /* 100042bf mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 100042c2 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 100042c5 call 0x100056a0 */
  push32(0x100042cau); f_100056a0();
  /* 100042ca push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 100042cd mov ebx, eax */
  EBX = (EAX);
  /* 100042cf add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100042d2 push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 100042d5 push edi */
  push32((uint32_t)(EDI));
  /* 100042d6 push esi */
  push32((uint32_t)(ESI));
  /* 100042d7 call 0x10005630 */
  push32(0x100042dcu); f_10005630();
  /* 100042dc cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100042df mov esi, eax */
  ESI = (EAX);
  /* 100042e1 mov edi, edx */
  EDI = (EDX);
  /* 100042e3 jle 0x100042e8 */
  if ((C.zf||C.sf!=C.of)) goto L_100042e8;
  /* 100042e5 add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_100042e8:;
  /* 100042e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100042eb dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 100042ee mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 100042f0 jmp 0x100042a7 */
  goto L_100042a7;
L_100042f2:;
  /* 100042f2 lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 100042f5 sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100042f8 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 100042fb test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 100042ff mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10004302 je 0x1000431d */
  if (C.zf) goto L_1000431d;
  /* 10004304 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10004307 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000430a jne 0x10004310 */
  if (!C.zf) goto L_10004310;
  /* 1000430c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000430e jne 0x1000431d */
  if (!C.zf) goto L_1000431d;
L_10004310:;
  /* 10004310 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 10004313 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10004314 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10004317 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_1000431a:;
  /* 1000431a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1000431d:;
  /* 1000431d cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004321 jne 0x1000441b */
  if (!C.zf) goto L_1000441b;
  /* 10004327 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000432a test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 1000432d je 0x10004355 */
  if (C.zf) goto L_10004355;
  /* 1000432f test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 10004332 je 0x1000433a */
  if (C.zf) goto L_1000433a;
  /* 10004334 mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 10004338 jmp 0x1000434e */
  goto L_1000434e;
L_1000433a:;
  /* 1000433a test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 1000433d je 0x10004345 */
  if (C.zf) goto L_10004345;
  /* 1000433f mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 10004343 jmp 0x1000434e */
  goto L_1000434e;
L_10004345:;
  /* 10004345 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10004348 je 0x10004355 */
  if (C.zf) goto L_10004355;
  /* 1000434a mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_1000434e:;
  /* 1000434e mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_10004355:;
  /* 10004355 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 10004358 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000435b sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000435e test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 10004361 jne 0x10004375 */
  if (!C.zf) goto L_10004375;
  /* 10004363 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10004366 push eax */
  push32((uint32_t)(EAX));
  /* 10004367 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1000436a push esi */
  push32((uint32_t)(ESI));
  /* 1000436b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1000436d call 0x10004489 */
  push32(0x10004372u); f_10004489();
  /* 10004372 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004375:;
  /* 10004375 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10004378 push eax */
  push32((uint32_t)(EAX));
  /* 10004379 lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 1000437c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1000437f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10004382 push eax */
  push32((uint32_t)(EAX));
  /* 10004383 call 0x100044ba */
  push32(0x10004388u); f_100044ba();
  /* 10004388 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000438b test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 1000438e je 0x100043a7 */
  if (C.zf) goto L_100043a7;
  /* 10004390 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 10004393 jne 0x100043a7 */
  if (!C.zf) goto L_100043a7;
  /* 10004395 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10004398 push eax */
  push32((uint32_t)(EAX));
  /* 10004399 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1000439c push esi */
  push32((uint32_t)(ESI));
  /* 1000439d push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1000439f call 0x10004489 */
  push32(0x100043a4u); f_10004489();
  /* 100043a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100043a7:;
  /* 100043a7 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100043ab je 0x100043ee */
  if (C.zf) goto L_100043ee;
  /* 100043ad cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100043b1 jle 0x100043ee */
  if ((C.zf||C.sf!=C.of)) goto L_100043ee;
  /* 100043b3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100043b6 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 100043b9 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_100043bc:;
  /* 100043bc mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 100043bf inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100043c0 push eax */
  push32((uint32_t)(EAX));
  /* 100043c1 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 100043c4 push eax */
  push32((uint32_t)(EAX));
  /* 100043c5 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100043c6 call 0x1000556b */
  push32(0x100043cbu); f_1000556b();
  /* 100043cb pop ecx */
  ECX = (pop32());
  /* 100043cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100043ce pop ecx */
  ECX = (pop32());
  /* 100043cf jle 0x10004403 */
  if ((C.zf||C.sf!=C.of)) goto L_10004403;
  /* 100043d1 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 100043d4 push ecx */
  push32((uint32_t)(ECX));
  /* 100043d5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100043d8 push eax */
  push32((uint32_t)(EAX));
  /* 100043d9 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 100043dc push eax */
  push32((uint32_t)(EAX));
  /* 100043dd call 0x100044ba */
  push32(0x100043e2u); f_100044ba();
  /* 100043e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100043e5 mov eax, edi */
  EAX = (EDI);
  /* 100043e7 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100043e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100043ea jne 0x100043bc */
  if (!C.zf) goto L_100043bc;
  /* 100043ec jmp 0x10004403 */
  goto L_10004403;
L_100043ee:;
  /* 100043ee lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100043f1 push eax */
  push32((uint32_t)(EAX));
  /* 100043f2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100043f5 push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 100043f8 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 100043fb call 0x100044ba */
  push32(0x10004400u); f_100044ba();
  /* 10004400 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004403:;
  /* 10004403 test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 10004407 je 0x1000441b */
  if (C.zf) goto L_1000441b;
  /* 10004409 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1000440c push eax */
  push32((uint32_t)(EAX));
  /* 1000440d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10004410 push esi */
  push32((uint32_t)(ESI));
  /* 10004411 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10004413 call 0x10004489 */
  push32(0x10004418u); f_10004489();
  /* 10004418 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1000441b:;
  /* 1000441b mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1000441e mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10004420 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10004421 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10004423 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 10004426 jne 0x10003d3f */
  if (!C.zf) goto L_10003d3f;
L_1000442c:;
  /* 1000442c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1000442f pop edi */
  EDI = (pop32());
  /* 10004430 pop esi */
  ESI = (pop32());
  /* 10004431 pop ebx */
  EBX = (pop32());
  /* 10004432 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10004433 ret  */
  ESPCHK(0x10003d13u, _esp0);
  ESP += 4; return;
}

/* FUN_10004454 @ 0x10004454 (53 bytes, 25 insns) */
void f_10004454(void) {
  FTRACE(0x10004454u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10004454 push ebp */
  push32((uint32_t)(EBP));
  /* 10004455 mov ebp, esp */
  EBP = (ESP);
  /* 10004457 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000445a dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 1000445d js 0x1000446d */
  if (C.sf) goto L_1000446d;
  /* 1000445f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10004461 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10004464 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10004466 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10004468 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1000446b jmp 0x10004478 */
  goto L_10004478;
L_1000446d:;
  /* 1000446d push ecx */
  push32((uint32_t)(ECX));
  /* 1000446e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10004471 call 0x10003bfb */
  push32(0x10004476u); f_10003bfb();
  /* 10004476 pop ecx */
  ECX = (pop32());
  /* 10004477 pop ecx */
  ECX = (pop32());
L_10004478:;
  /* 10004478 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000447b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1000447e jne 0x10004485 */
  if (!C.zf) goto L_10004485;
  /* 10004480 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10004483 pop ebp */
  EBP = (pop32());
  /* 10004484 ret  */
  ESPCHK(0x10004454u, _esp0);
  ESP += 4; return;
L_10004485:;
  /* 10004485 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10004487 pop ebp */
  EBP = (pop32());
  /* 10004488 ret  */
  ESPCHK(0x10004454u, _esp0);
  ESP += 4; return;
}

/* FUN_10004489 @ 0x10004489 (49 bytes, 22 insns) */
void f_10004489(void) {
  FTRACE(0x10004489u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10004489 push esi */
  push32((uint32_t)(ESI));
  /* 1000448a push edi */
  push32((uint32_t)(EDI));
  /* 1000448b mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1000448f mov eax, edi */
  EAX = (EDI);
  /* 10004491 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10004492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004494 jle 0x100044b7 */
  if ((C.zf||C.sf!=C.of)) goto L_100044b7;
  /* 10004496 mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_1000449a:;
  /* 1000449a push esi */
  push32((uint32_t)(ESI));
  /* 1000449b push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1000449f push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 100044a3 call 0x10004454 */
  push32(0x100044a8u); f_10004454();
  /* 100044a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100044ab cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100044ae je 0x100044b7 */
  if (C.zf) goto L_100044b7;
  /* 100044b0 mov eax, edi */
  EAX = (EDI);
  /* 100044b2 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100044b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100044b5 jg 0x1000449a */
  if ((!C.zf&&C.sf==C.of)) goto L_1000449a;
L_100044b7:;
  /* 100044b7 pop edi */
  EDI = (pop32());
  /* 100044b8 pop esi */
  ESI = (pop32());
  /* 100044b9 ret  */
  ESPCHK(0x10004489u, _esp0);
  ESP += 4; return;
}

/* FUN_100044ba @ 0x100044ba (56 bytes, 27 insns) */
void f_100044ba(void) {
  FTRACE(0x100044bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100044ba push ebx */
  push32((uint32_t)(EBX));
  /* 100044bb mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 100044bf mov eax, ebx */
  EAX = (EBX);
  /* 100044c1 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100044c2 push esi */
  push32((uint32_t)(ESI));
  /* 100044c3 push edi */
  push32((uint32_t)(EDI));
  /* 100044c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100044c6 jle 0x100044ee */
  if ((C.zf||C.sf!=C.of)) goto L_100044ee;
  /* 100044c8 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 100044cc mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_100044d0:;
  /* 100044d0 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 100044d3 push edi */
  push32((uint32_t)(EDI));
  /* 100044d4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100044d5 push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 100044d9 push eax */
  push32((uint32_t)(EAX));
  /* 100044da call 0x10004454 */
  push32(0x100044dfu); f_10004454();
  /* 100044df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100044e2 cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100044e5 je 0x100044ee */
  if (C.zf) goto L_100044ee;
  /* 100044e7 mov eax, ebx */
  EAX = (EBX);
  /* 100044e9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100044ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100044ec jg 0x100044d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_100044d0;
L_100044ee:;
  /* 100044ee pop edi */
  EDI = (pop32());
  /* 100044ef pop esi */
  ESI = (pop32());
  /* 100044f0 pop ebx */
  EBX = (pop32());
  /* 100044f1 ret  */
  ESPCHK(0x100044bau, _esp0);
  ESP += 4; return;
}

/* FUN_100044f2 @ 0x100044f2 (13 bytes, 5 insns) */
void f_100044f2(void) {
  FTRACE(0x100044f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100044f2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100044f6 add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100044f9 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 100044fb mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 100044fe ret  */
  ESPCHK(0x100044f2u, _esp0);
  ESP += 4; return;
}

/* FUN_100044ff @ 0x100044ff (16 bytes, 6 insns) */
void f_100044ff(void) {
  FTRACE(0x100044ffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100044ff mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10004503 add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10004506 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10004508 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 1000450b mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1000450e ret  */
  ESPCHK(0x100044ffu, _esp0);
  ESP += 4; return;
}

/* FUN_1000450f @ 0x1000450f (14 bytes, 5 insns) */
void f_1000450f(void) {
  FTRACE(0x1000450fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000450f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10004513 add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10004516 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10004518 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 1000451c ret  */
  ESPCHK(0x1000450fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000451d @ 0x1000451d (45 bytes, 12 insns) */
void f_1000451d(void) {
  FTRACE(0x1000451du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000451d mov eax, dword ptr [0x1000d7f4] */
  EAX = (r32((uint32_t)(0x1000d7f4)));
  /* 10004522 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004524 je 0x10004528 */
  if (C.zf) goto L_10004528;
  /* 10004526 call eax */
  call_ind((uint32_t)(EAX), 0x10004528u);
L_10004528:;
  /* 10004528 push 0x1000a014 */
  push32((uint32_t)(0x1000a014u));
  /* 1000452d push 0x1000a008 */
  push32((uint32_t)(0x1000a008u));
  /* 10004532 call 0x10004621 */
  push32(0x10004537u); f_10004621();
  /* 10004537 push 0x1000a004 */
  push32((uint32_t)(0x1000a004u));
  /* 1000453c push 0x1000a000 */
  push32((uint32_t)(0x1000a000u));
  /* 10004541 call 0x10004621 */
  push32(0x10004546u); f_10004621();
  /* 10004546 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004549 ret  */
  ESPCHK(0x1000451du, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x1000454a (17 bytes, 6 insns) */
void f_1000454a(void) {
  FTRACE(0x1000454au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000454a push 0 */
  push32((uint32_t)(0x0u));
  /* 1000454c push 1 */
  push32((uint32_t)(0x1u));
  /* 1000454e push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10004552 call 0x1000456a */
  push32(0x10004557u); f_1000456a();
  /* 10004557 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000455a ret  */
  ESPCHK(0x1000454au, _esp0);
  ESP += 4; return;
}

/* FUN_1000455b @ 0x1000455b (15 bytes, 6 insns) */
void f_1000455b(void) {
  FTRACE(0x1000455bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000455b push 1 */
  push32((uint32_t)(0x1u));
  /* 1000455d push 0 */
  push32((uint32_t)(0x0u));
  /* 1000455f push 0 */
  push32((uint32_t)(0x0u));
  /* 10004561 call 0x1000456a */
  push32(0x10004566u); f_1000456a();
  /* 10004566 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004569 ret  */
  ESPCHK(0x1000455bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000456a @ 0x1000456a (163 bytes, 53 insns) */
void f_1000456a(void) {
  FTRACE(0x1000456au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000456a push edi */
  push32((uint32_t)(EDI));
  /* 1000456b call 0x1000460f */
  push32(0x10004570u); f_1000460f();
  /* 10004570 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004572 pop edi */
  EDI = (pop32());
  /* 10004573 cmp dword ptr [0x1000c154], edi */
  { uint32_t _a=(r32((uint32_t)(0x1000c154))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004579 jne 0x1000458c */
  if (!C.zf) goto L_1000458c;
  /* 1000457b push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1000457f call dword ptr [0x10009020] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009020))), 0x10004585u);
  /* 10004585 push eax */
  push32((uint32_t)(EAX));
  /* 10004586 call dword ptr [0x1000901c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000901c))), 0x1000458cu);
L_1000458c:;
  /* 1000458c cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004591 push ebx */
  push32((uint32_t)(EBX));
  /* 10004592 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10004596 mov dword ptr [0x1000c150], edi */
  w32((uint32_t)(0x1000c150), (EDI));
  /* 1000459c mov byte ptr [0x1000c14c], bl */
  w8((uint32_t)(0x1000c14c), (BL));
  /* 100045a2 jne 0x100045e0 */
  if (!C.zf) goto L_100045e0;
  /* 100045a4 mov eax, dword ptr [0x1000d7f0] */
  EAX = (r32((uint32_t)(0x1000d7f0)));
  /* 100045a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100045ab je 0x100045cf */
  if (C.zf) goto L_100045cf;
  /* 100045ad mov ecx, dword ptr [0x1000d7ec] */
  ECX = (r32((uint32_t)(0x1000d7ec)));
  /* 100045b3 push esi */
  push32((uint32_t)(ESI));
  /* 100045b4 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 100045b7 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100045b9 jb 0x100045ce */
  if (C.cf) goto L_100045ce;
L_100045bb:;
  /* 100045bb mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100045bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100045bf je 0x100045c3 */
  if (C.zf) goto L_100045c3;
  /* 100045c1 call eax */
  call_ind((uint32_t)(EAX), 0x100045c3u);
L_100045c3:;
  /* 100045c3 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100045c6 cmp esi, dword ptr [0x1000d7f0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1000d7f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100045cc jae 0x100045bb */
  if (!C.cf) goto L_100045bb;
L_100045ce:;
  /* 100045ce pop esi */
  ESI = (pop32());
L_100045cf:;
  /* 100045cf push 0x1000a020 */
  push32((uint32_t)(0x1000a020u));
  /* 100045d4 push 0x1000a018 */
  push32((uint32_t)(0x1000a018u));
  /* 100045d9 call 0x10004621 */
  push32(0x100045deu); f_10004621();
  /* 100045de pop ecx */
  ECX = (pop32());
  /* 100045df pop ecx */
  ECX = (pop32());
L_100045e0:;
  /* 100045e0 push 0x1000a028 */
  push32((uint32_t)(0x1000a028u));
  /* 100045e5 push 0x1000a024 */
  push32((uint32_t)(0x1000a024u));
  /* 100045ea call 0x10004621 */
  push32(0x100045efu); f_10004621();
  /* 100045ef pop ecx */
  ECX = (pop32());
  /* 100045f0 pop ecx */
  ECX = (pop32());
  /* 100045f1 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100045f3 pop ebx */
  EBX = (pop32());
  /* 100045f4 je 0x100045fd */
  if (C.zf) goto L_100045fd;
  /* 100045f6 call 0x10004618 */
  push32(0x100045fbu); f_10004618();
  /* 100045fb pop edi */
  EDI = (pop32());
  /* 100045fc ret  */
  ESPCHK(0x1000456au, _esp0);
  ESP += 4; return;
L_100045fd:;
  /* 100045fd push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10004601 mov dword ptr [0x1000c154], edi */
  w32((uint32_t)(0x1000c154), (EDI));
  /* 10004607 call dword ptr [0x10009018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009018))), 0x1000460du);
  /* 1000460d pop edi */
  EDI = (pop32());
  /* 1000460e ret  */
  ESPCHK(0x1000456au, _esp0);
  ESP += 4; return;
}

/* FUN_1000460f @ 0x1000460f (9 bytes, 4 insns) */
void f_1000460f(void) {
  FTRACE(0x1000460fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000460f push 0xd */
  push32((uint32_t)(0xdu));
  /* 10004611 call 0x100057aa */
  push32(0x10004616u); f_100057aa();
  /* 10004616 pop ecx */
  ECX = (pop32());
  /* 10004617 ret  */
  ESPCHK(0x1000460fu, _esp0);
  ESP += 4; return;
}

/* FUN_10004618 @ 0x10004618 (9 bytes, 4 insns) */
void f_10004618(void) {
  FTRACE(0x10004618u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10004618 push 0xd */
  push32((uint32_t)(0xdu));
  /* 1000461a call 0x1000580b */
  push32(0x1000461fu); f_1000580b();
  /* 1000461f pop ecx */
  ECX = (pop32());
  /* 10004620 ret  */
  ESPCHK(0x10004618u, _esp0);
  ESP += 4; return;
}

/* FUN_10004621 @ 0x10004621 (26 bytes, 12 insns) */
void f_10004621(void) {
  FTRACE(0x10004621u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10004621 push esi */
  push32((uint32_t)(ESI));
  /* 10004622 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10004626:;
  /* 10004626 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000462a jae 0x10004639 */
  if (!C.cf) goto L_10004639;
  /* 1000462c mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1000462e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004630 je 0x10004634 */
  if (C.zf) goto L_10004634;
  /* 10004632 call eax */
  call_ind((uint32_t)(EAX), 0x10004634u);
L_10004634:;
  /* 10004634 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10004637 jmp 0x10004626 */
  goto L_10004626;
L_10004639:;
  /* 10004639 pop esi */
  ESI = (pop32());
  /* 1000463a ret  */
  ESPCHK(0x10004621u, _esp0);
  ESP += 4; return;
}

/* FUN_1000463b @ 0x1000463b (84 bytes, 32 insns) */
void f_1000463b(void) {
  FTRACE(0x1000463bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000463b push esi */
  push32((uint32_t)(ESI));
  /* 1000463c call 0x10005715 */
  push32(0x10004641u); f_10005715();
  /* 10004641 call dword ptr [0x1000902c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000902c))), 0x10004647u);
  /* 10004647 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000464a mov dword ptr [0x1000ae68], eax */
  w32((uint32_t)(0x1000ae68), (EAX));
  /* 1000464f je 0x1000468b */
  if (C.zf) goto L_1000468b;
  /* 10004651 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10004653 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004655 call 0x10005820 */
  push32(0x1000465au); f_10005820();
  /* 1000465a mov esi, eax */
  ESI = (EAX);
  /* 1000465c pop ecx */
  ECX = (pop32());
  /* 1000465d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1000465f pop ecx */
  ECX = (pop32());
  /* 10004660 je 0x1000468b */
  if (C.zf) goto L_1000468b;
  /* 10004662 push esi */
  push32((uint32_t)(ESI));
  /* 10004663 push dword ptr [0x1000ae68] */
  push32((uint32_t)(r32((uint32_t)(0x1000ae68))));
  /* 10004669 call dword ptr [0x10009028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009028))), 0x1000466fu);
  /* 1000466f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004671 je 0x1000468b */
  if (C.zf) goto L_1000468b;
  /* 10004673 push esi */
  push32((uint32_t)(ESI));
  /* 10004674 call 0x100046ad */
  push32(0x10004679u); f_100046ad();
  /* 10004679 pop ecx */
  ECX = (pop32());
  /* 1000467a call dword ptr [0x10009024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009024))), 0x10004680u);
  /* 10004680 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10004684 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004686 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10004688 pop eax */
  EAX = (pop32());
  /* 10004689 pop esi */
  ESI = (pop32());
  /* 1000468a ret  */
  ESPCHK(0x1000463bu, _esp0);
  ESP += 4; return;
L_1000468b:;
  /* 1000468b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1000468d pop esi */
  ESI = (pop32());
  /* 1000468e ret  */
  ESPCHK(0x1000463bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000468f @ 0x1000468f (30 bytes, 8 insns) */
void f_1000468f(void) {
  FTRACE(0x1000468fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000468f call 0x1000573e */
  push32(0x10004694u); f_1000573e();
  /* 10004694 mov eax, dword ptr [0x1000ae68] */
  EAX = (r32((uint32_t)(0x1000ae68)));
  /* 10004699 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000469c je 0x100046ac */
  if (C.zf) goto L_100046ac;
  /* 1000469e push eax */
  push32((uint32_t)(EAX));
  /* 1000469f call dword ptr [0x10009030] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009030))), 0x100046a5u);
  /* 100046a5 or dword ptr [0x1000ae68], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x1000ae68)))|(0xffffffffu); w32((uint32_t)(0x1000ae68), (_r)); fl_logic(_r,32); }
L_100046ac:;
  /* 100046ac ret  */
  ESPCHK(0x1000468fu, _esp0);
  ESP += 4; return;
}

/* FUN_100046ad @ 0x100046ad (19 bytes, 4 insns) */
void f_100046ad(void) {
  FTRACE(0x100046adu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100046ad mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100046b1 mov dword ptr [eax + 0x50], 0x1000b4a0 */
  w32((uint32_t)(EAX + 0x50), (0x1000b4a0u));
  /* 100046b8 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 100046bf ret  */
  ESPCHK(0x100046adu, _esp0);
  ESP += 4; return;
}

/* FUN_100046c0 @ 0x100046c0 (103 bytes, 38 insns) */
void f_100046c0(void) {
  FTRACE(0x100046c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100046c0 push esi */
  push32((uint32_t)(ESI));
  /* 100046c1 push edi */
  push32((uint32_t)(EDI));
  /* 100046c2 call dword ptr [0x1000903c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000903c))), 0x100046c8u);
  /* 100046c8 push dword ptr [0x1000ae68] */
  push32((uint32_t)(r32((uint32_t)(0x1000ae68))));
  /* 100046ce mov edi, eax */
  EDI = (EAX);
  /* 100046d0 call dword ptr [0x10009038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009038))), 0x100046d6u);
  /* 100046d6 mov esi, eax */
  ESI = (EAX);
  /* 100046d8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100046da jne 0x1000471b */
  if (!C.zf) goto L_1000471b;
  /* 100046dc push 0x74 */
  push32((uint32_t)(0x74u));
  /* 100046de push 1 */
  push32((uint32_t)(0x1u));
  /* 100046e0 call 0x10005820 */
  push32(0x100046e5u); f_10005820();
  /* 100046e5 mov esi, eax */
  ESI = (EAX);
  /* 100046e7 pop ecx */
  ECX = (pop32());
  /* 100046e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100046ea pop ecx */
  ECX = (pop32());
  /* 100046eb je 0x10004713 */
  if (C.zf) goto L_10004713;
  /* 100046ed push esi */
  push32((uint32_t)(ESI));
  /* 100046ee push dword ptr [0x1000ae68] */
  push32((uint32_t)(r32((uint32_t)(0x1000ae68))));
  /* 100046f4 call dword ptr [0x10009028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009028))), 0x100046fau);
  /* 100046fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100046fc je 0x10004713 */
  if (C.zf) goto L_10004713;
  /* 100046fe push esi */
  push32((uint32_t)(ESI));
  /* 100046ff call 0x100046ad */
  push32(0x10004704u); f_100046ad();
  /* 10004704 pop ecx */
  ECX = (pop32());
  /* 10004705 call dword ptr [0x10009024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009024))), 0x1000470bu);
  /* 1000470b or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1000470f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10004711 jmp 0x1000471b */
  goto L_1000471b;
L_10004713:;
  /* 10004713 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10004715 call 0x10003bc8 */
  push32(0x1000471au); f_10003bc8();
  /* 1000471a pop ecx */
  ECX = (pop32());
L_1000471b:;
  /* 1000471b push edi */
  push32((uint32_t)(EDI));
  /* 1000471c call dword ptr [0x10009034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009034))), 0x10004722u);
  /* 10004722 mov eax, esi */
  EAX = (ESI);
  /* 10004724 pop edi */
  EDI = (pop32());
  /* 10004725 pop esi */
  ESI = (pop32());
  /* 10004726 ret  */
  ESPCHK(0x100046c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004727 @ 0x10004727 (160 bytes, 62 insns) */
void f_10004727(void) {
  FTRACE(0x10004727u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10004727 mov eax, dword ptr [0x1000ae68] */
  EAX = (r32((uint32_t)(0x1000ae68)));
  /* 1000472c cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000472f je 0x100047c6 */
  if (C.zf) goto L_100047c6;
  /* 10004735 push esi */
  push32((uint32_t)(ESI));
  /* 10004736 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1000473a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1000473c jne 0x1000474b */
  if (!C.zf) goto L_1000474b;
  /* 1000473e push eax */
  push32((uint32_t)(EAX));
  /* 1000473f call dword ptr [0x10009038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009038))), 0x10004745u);
  /* 10004745 mov esi, eax */
  ESI = (EAX);
  /* 10004747 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10004749 je 0x100047b7 */
  if (C.zf) goto L_100047b7;
L_1000474b:;
  /* 1000474b mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 1000474e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004750 je 0x10004759 */
  if (C.zf) goto L_10004759;
  /* 10004752 push eax */
  push32((uint32_t)(EAX));
  /* 10004753 call 0x100058ad */
  push32(0x10004758u); f_100058ad();
  /* 10004758 pop ecx */
  ECX = (pop32());
L_10004759:;
  /* 10004759 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 1000475c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000475e je 0x10004767 */
  if (C.zf) goto L_10004767;
  /* 10004760 push eax */
  push32((uint32_t)(EAX));
  /* 10004761 call 0x100058ad */
  push32(0x10004766u); f_100058ad();
  /* 10004766 pop ecx */
  ECX = (pop32());
L_10004767:;
  /* 10004767 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 1000476a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000476c je 0x10004775 */
  if (C.zf) goto L_10004775;
  /* 1000476e push eax */
  push32((uint32_t)(EAX));
  /* 1000476f call 0x100058ad */
  push32(0x10004774u); f_100058ad();
  /* 10004774 pop ecx */
  ECX = (pop32());
L_10004775:;
  /* 10004775 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10004778 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000477a je 0x10004783 */
  if (C.zf) goto L_10004783;
  /* 1000477c push eax */
  push32((uint32_t)(EAX));
  /* 1000477d call 0x100058ad */
  push32(0x10004782u); f_100058ad();
  /* 10004782 pop ecx */
  ECX = (pop32());
L_10004783:;
  /* 10004783 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 10004786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004788 je 0x10004791 */
  if (C.zf) goto L_10004791;
  /* 1000478a push eax */
  push32((uint32_t)(EAX));
  /* 1000478b call 0x100058ad */
  push32(0x10004790u); f_100058ad();
  /* 10004790 pop ecx */
  ECX = (pop32());
L_10004791:;
  /* 10004791 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 10004794 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004796 je 0x1000479f */
  if (C.zf) goto L_1000479f;
  /* 10004798 push eax */
  push32((uint32_t)(EAX));
  /* 10004799 call 0x100058ad */
  push32(0x1000479eu); f_100058ad();
  /* 1000479e pop ecx */
  ECX = (pop32());
L_1000479f:;
  /* 1000479f mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 100047a2 cmp eax, 0x1000b4a0 */
  { uint32_t _a=(EAX),_b=(0x1000b4a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100047a7 je 0x100047b0 */
  if (C.zf) goto L_100047b0;
  /* 100047a9 push eax */
  push32((uint32_t)(EAX));
  /* 100047aa call 0x100058ad */
  push32(0x100047afu); f_100058ad();
  /* 100047af pop ecx */
  ECX = (pop32());
L_100047b0:;
  /* 100047b0 push esi */
  push32((uint32_t)(ESI));
  /* 100047b1 call 0x100058ad */
  push32(0x100047b6u); f_100058ad();
  /* 100047b6 pop ecx */
  ECX = (pop32());
L_100047b7:;
  /* 100047b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100047b9 push dword ptr [0x1000ae68] */
  push32((uint32_t)(r32((uint32_t)(0x1000ae68))));
  /* 100047bf call dword ptr [0x10009028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009028))), 0x100047c5u);
  /* 100047c5 pop esi */
  ESI = (pop32());
L_100047c6:;
  /* 100047c6 ret  */
  ESPCHK(0x10004727u, _esp0);
  ESP += 4; return;
}

/* FUN_100047c7 @ 0x100047c7 (444 bytes, 150 insns) */
void f_100047c7(void) {
  FTRACE(0x100047c7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100047c7 push ebp */
  push32((uint32_t)(EBP));
  /* 100047c8 mov ebp, esp */
  EBP = (ESP);
  /* 100047ca sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100047cd push ebx */
  push32((uint32_t)(EBX));
  /* 100047ce push esi */
  push32((uint32_t)(ESI));
  /* 100047cf push edi */
  push32((uint32_t)(EDI));
  /* 100047d0 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 100047d5 call 0x100058f5 */
  push32(0x100047dau); f_100058f5();
  /* 100047da mov esi, eax */
  ESI = (EAX);
  /* 100047dc pop ecx */
  ECX = (pop32());
  /* 100047dd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100047df jne 0x100047e9 */
  if (!C.zf) goto L_100047e9;
  /* 100047e1 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 100047e3 call 0x10003bc8 */
  push32(0x100047e8u); f_10003bc8();
  /* 100047e8 pop ecx */
  ECX = (pop32());
L_100047e9:;
  /* 100047e9 mov dword ptr [0x1000d6e0], esi */
  w32((uint32_t)(0x1000d6e0), (ESI));
  /* 100047ef mov dword ptr [0x1000d7e0], 0x20 */
  w32((uint32_t)(0x1000d7e0), (0x20u));
  /* 100047f9 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_100047ff:;
  /* 100047ff cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004801 jae 0x10004821 */
  if (!C.cf) goto L_10004821;
  /* 10004803 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10004807 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1000480a and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1000480e mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 10004812 mov eax, dword ptr [0x1000d6e0] */
  EAX = (r32((uint32_t)(0x1000d6e0)));
  /* 10004817 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000481a add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000481f jmp 0x100047ff */
  goto L_100047ff;
L_10004821:;
  /* 10004821 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10004824 push eax */
  push32((uint32_t)(EAX));
  /* 10004825 call dword ptr [0x1000904c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000904c))), 0x1000482bu);
  /* 1000482b cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10004830 je 0x10004907 */
  if (C.zf) goto L_10004907;
  /* 10004836 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10004839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000483b je 0x10004907 */
  if (C.zf) goto L_10004907;
  /* 10004841 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 10004843 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 10004846 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 10004849 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1000484c mov eax, 0x800 */
  EAX = (0x800u);
  /* 10004851 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004853 jl 0x10004857 */
  if ((C.sf!=C.of)) goto L_10004857;
  /* 10004855 mov edi, eax */
  EDI = (EAX);
L_10004857:;
  /* 10004857 cmp dword ptr [0x1000d7e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x1000d7e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000485d jge 0x100048b5 */
  if ((C.sf==C.of)) goto L_100048b5;
  /* 1000485f mov esi, 0x1000d6e4 */
  ESI = (0x1000d6e4u);
L_10004864:;
  /* 10004864 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10004869 call 0x100058f5 */
  push32(0x1000486eu); f_100058f5();
  /* 1000486e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004870 pop ecx */
  ECX = (pop32());
  /* 10004871 je 0x100048af */
  if (C.zf) goto L_100048af;
  /* 10004873 add dword ptr [0x1000d7e0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x1000d7e0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x1000d7e0), (_r)); fl_add(_a,_b,_r,32); }
  /* 1000487a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1000487c lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_10004882:;
  /* 10004882 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004884 jae 0x100048a2 */
  if (!C.cf) goto L_100048a2;
  /* 10004886 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 1000488a or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1000488d and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10004891 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 10004895 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10004897 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000489a add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100048a0 jmp 0x10004882 */
  goto L_10004882;
L_100048a2:;
  /* 100048a2 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100048a5 cmp dword ptr [0x1000d7e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x1000d7e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100048ab jl 0x10004864 */
  if ((C.sf!=C.of)) goto L_10004864;
  /* 100048ad jmp 0x100048b5 */
  goto L_100048b5;
L_100048af:;
  /* 100048af mov edi, dword ptr [0x1000d7e0] */
  EDI = (r32((uint32_t)(0x1000d7e0)));
L_100048b5:;
  /* 100048b5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100048b7 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100048b9 jle 0x10004907 */
  if ((C.zf||C.sf!=C.of)) goto L_10004907;
L_100048bb:;
  /* 100048bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100048be mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 100048c0 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100048c3 je 0x100048fd */
  if (C.zf) goto L_100048fd;
  /* 100048c5 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 100048c7 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 100048c9 je 0x100048fd */
  if (C.zf) goto L_100048fd;
  /* 100048cb test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 100048cd jne 0x100048da */
  if (!C.zf) goto L_100048da;
  /* 100048cf push ecx */
  push32((uint32_t)(ECX));
  /* 100048d0 call dword ptr [0x10009048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009048))), 0x100048d6u);
  /* 100048d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100048d8 je 0x100048fd */
  if (C.zf) goto L_100048fd;
L_100048da:;
  /* 100048da mov ecx, esi */
  ECX = (ESI);
  /* 100048dc mov eax, esi */
  EAX = (ESI);
  /* 100048de sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100048e1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100048e4 mov ecx, dword ptr [ecx*4 + 0x1000d6e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1000d6e0)));
  /* 100048eb lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100048ee lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 100048f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100048f4 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 100048f6 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100048f8 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 100048fa mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_100048fd:;
  /* 100048fd add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10004901 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10004902 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10004903 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004905 jl 0x100048bb */
  if ((C.sf!=C.of)) goto L_100048bb;
L_10004907:;
  /* 10004907 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10004909:;
  /* 10004909 mov ecx, dword ptr [0x1000d6e0] */
  ECX = (r32((uint32_t)(0x1000d6e0)));
  /* 1000490f lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 10004912 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004916 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10004919 jne 0x10004968 */
  if (!C.zf) goto L_10004968;
  /* 1000491b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1000491d mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 10004921 jne 0x10004928 */
  if (!C.zf) goto L_10004928;
  /* 10004923 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10004925 pop eax */
  EAX = (pop32());
  /* 10004926 jmp 0x10004932 */
  goto L_10004932;
L_10004928:;
  /* 10004928 mov eax, ebx */
  EAX = (EBX);
  /* 1000492a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1000492b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1000492d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000492f add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10004932:;
  /* 10004932 push eax */
  push32((uint32_t)(EAX));
  /* 10004933 call dword ptr [0x10009044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009044))), 0x10004939u);
  /* 10004939 mov edi, eax */
  EDI = (EAX);
  /* 1000493b cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000493e je 0x10004957 */
  if (C.zf) goto L_10004957;
  /* 10004940 push edi */
  push32((uint32_t)(EDI));
  /* 10004941 call dword ptr [0x10009048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009048))), 0x10004947u);
  /* 10004947 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004949 je 0x10004957 */
  if (C.zf) goto L_10004957;
  /* 1000494b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10004950 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10004952 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004955 jne 0x1000495d */
  if (!C.zf) goto L_1000495d;
L_10004957:;
  /* 10004957 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1000495b jmp 0x1000496c */
  goto L_1000496c;
L_1000495d:;
  /* 1000495d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004960 jne 0x1000496c */
  if (!C.zf) goto L_1000496c;
  /* 10004962 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10004966 jmp 0x1000496c */
  goto L_1000496c;
L_10004968:;
  /* 10004968 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_1000496c:;
  /* 1000496c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1000496d cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004970 jl 0x10004909 */
  if ((C.sf!=C.of)) goto L_10004909;
  /* 10004972 push dword ptr [0x1000d7e0] */
  push32((uint32_t)(r32((uint32_t)(0x1000d7e0))));
  /* 10004978 call dword ptr [0x10009040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009040))), 0x1000497eu);
  /* 1000497e pop edi */
  EDI = (pop32());
  /* 1000497f pop esi */
  ESI = (pop32());
  /* 10004980 pop ebx */
  EBX = (pop32());
  /* 10004981 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10004982 ret  */
  ESPCHK(0x100047c7u, _esp0);
  ESP += 4; return;
}

/* FUN_10004983 @ 0x10004983 (84 bytes, 33 insns) */
void f_10004983(void) {
  FTRACE(0x10004983u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10004983 push ebx */
  push32((uint32_t)(EBX));
  /* 10004984 push esi */
  push32((uint32_t)(ESI));
  /* 10004985 push edi */
  push32((uint32_t)(EDI));
  /* 10004986 mov esi, 0x1000d6e0 */
  ESI = (0x1000d6e0u);
L_1000498b:;
  /* 1000498b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1000498d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000498f je 0x100049c8 */
  if (C.zf) goto L_100049c8;
  /* 10004991 mov edi, eax */
  EDI = (EAX);
  /* 10004993 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10004998 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000499a jae 0x100049bd */
  if (!C.cf) goto L_100049bd;
  /* 1000499c lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_1000499f:;
  /* 1000499f cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100049a3 je 0x100049ac */
  if (C.zf) goto L_100049ac;
  /* 100049a5 push ebx */
  push32((uint32_t)(EBX));
  /* 100049a6 call dword ptr [0x10009050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009050))), 0x100049acu);
L_100049ac:;
  /* 100049ac mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100049ae add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100049b1 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100049b6 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100049b9 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100049bb jb 0x1000499f */
  if (C.cf) goto L_1000499f;
L_100049bd:;
  /* 100049bd push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100049bf call 0x100058ad */
  push32(0x100049c4u); f_100058ad();
  /* 100049c4 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 100049c7 pop ecx */
  ECX = (pop32());
L_100049c8:;
  /* 100049c8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100049cb cmp esi, 0x1000d7e0 */
  { uint32_t _a=(ESI),_b=(0x1000d7e0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100049d1 jl 0x1000498b */
  if ((C.sf!=C.of)) goto L_1000498b;
  /* 100049d3 pop edi */
  EDI = (pop32());
  /* 100049d4 pop esi */
  ESI = (pop32());
  /* 100049d5 pop ebx */
  EBX = (pop32());
  /* 100049d6 ret  */
  ESPCHK(0x10004983u, _esp0);
  ESP += 4; return;
}

/* FUN_100049d7 @ 0x100049d7 (185 bytes, 71 insns) */
void f_100049d7(void) {
  FTRACE(0x100049d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100049d7 push ebx */
  push32((uint32_t)(EBX));
  /* 100049d8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100049da cmp dword ptr [0x1000d7e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1000d7e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100049e0 push esi */
  push32((uint32_t)(ESI));
  /* 100049e1 push edi */
  push32((uint32_t)(EDI));
  /* 100049e2 jne 0x100049e9 */
  if (!C.zf) goto L_100049e9;
  /* 100049e4 call 0x10005e58 */
  push32(0x100049e9u); f_10005e58();
L_100049e9:;
  /* 100049e9 mov esi, dword ptr [0x1000c104] */
  ESI = (r32((uint32_t)(0x1000c104)));
  /* 100049ef xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_100049f1:;
  /* 100049f1 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100049f3 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100049f5 je 0x10004a09 */
  if (C.zf) goto L_10004a09;
  /* 100049f7 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100049f9 je 0x100049fc */
  if (C.zf) goto L_100049fc;
  /* 100049fb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_100049fc:;
  /* 100049fc push esi */
  push32((uint32_t)(ESI));
  /* 100049fd call 0x100054f0 */
  push32(0x10004a02u); f_100054f0();
  /* 10004a02 pop ecx */
  ECX = (pop32());
  /* 10004a03 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 10004a07 jmp 0x100049f1 */
  goto L_100049f1;
L_10004a09:;
  /* 10004a09 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10004a10 push eax */
  push32((uint32_t)(EAX));
  /* 10004a11 call 0x100058f5 */
  push32(0x10004a16u); f_100058f5();
  /* 10004a16 mov esi, eax */
  ESI = (EAX);
  /* 10004a18 pop ecx */
  ECX = (pop32());
  /* 10004a19 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004a1b mov dword ptr [0x1000c134], esi */
  w32((uint32_t)(0x1000c134), (ESI));
  /* 10004a21 jne 0x10004a2b */
  if (!C.zf) goto L_10004a2b;
  /* 10004a23 push 9 */
  push32((uint32_t)(0x9u));
  /* 10004a25 call 0x10003bc8 */
  push32(0x10004a2au); f_10003bc8();
  /* 10004a2a pop ecx */
  ECX = (pop32());
L_10004a2b:;
  /* 10004a2b mov edi, dword ptr [0x1000c104] */
  EDI = (r32((uint32_t)(0x1000c104)));
  /* 10004a31 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004a33 je 0x10004a6e */
  if (C.zf) goto L_10004a6e;
  /* 10004a35 push ebp */
  push32((uint32_t)(EBP));
L_10004a36:;
  /* 10004a36 push edi */
  push32((uint32_t)(EDI));
  /* 10004a37 call 0x100054f0 */
  push32(0x10004a3cu); f_100054f0();
  /* 10004a3c mov ebp, eax */
  EBP = (EAX);
  /* 10004a3e pop ecx */
  ECX = (pop32());
  /* 10004a3f inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10004a40 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004a43 je 0x10004a67 */
  if (C.zf) goto L_10004a67;
  /* 10004a45 push ebp */
  push32((uint32_t)(EBP));
  /* 10004a46 call 0x100058f5 */
  push32(0x10004a4bu); f_100058f5();
  /* 10004a4b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004a4d pop ecx */
  ECX = (pop32());
  /* 10004a4e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10004a50 jne 0x10004a5a */
  if (!C.zf) goto L_10004a5a;
  /* 10004a52 push 9 */
  push32((uint32_t)(0x9u));
  /* 10004a54 call 0x10003bc8 */
  push32(0x10004a59u); f_10003bc8();
  /* 10004a59 pop ecx */
  ECX = (pop32());
L_10004a5a:;
  /* 10004a5a push edi */
  push32((uint32_t)(EDI));
  /* 10004a5b push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10004a5d call 0x10005990 */
  push32(0x10004a62u); f_10005990();
  /* 10004a62 pop ecx */
  ECX = (pop32());
  /* 10004a63 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10004a66 pop ecx */
  ECX = (pop32());
L_10004a67:;
  /* 10004a67 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10004a69 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004a6b jne 0x10004a36 */
  if (!C.zf) goto L_10004a36;
  /* 10004a6d pop ebp */
  EBP = (pop32());
L_10004a6e:;
  /* 10004a6e push dword ptr [0x1000c104] */
  push32((uint32_t)(r32((uint32_t)(0x1000c104))));
  /* 10004a74 call 0x100058ad */
  push32(0x10004a79u); f_100058ad();
  /* 10004a79 pop ecx */
  ECX = (pop32());
  /* 10004a7a mov dword ptr [0x1000c104], ebx */
  w32((uint32_t)(0x1000c104), (EBX));
  /* 10004a80 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 10004a82 pop edi */
  EDI = (pop32());
  /* 10004a83 pop esi */
  ESI = (pop32());
  /* 10004a84 mov dword ptr [0x1000d7e4], 1 */
  w32((uint32_t)(0x1000d7e4), (0x1u));
  /* 10004a8e pop ebx */
  EBX = (pop32());
  /* 10004a8f ret  */
  ESPCHK(0x100049d7u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a90 @ 0x10004a90 (153 bytes, 62 insns) */
void f_10004a90(void) {
  FTRACE(0x10004a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10004a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10004a91 mov ebp, esp */
  EBP = (ESP);
  /* 10004a93 push ecx */
  push32((uint32_t)(ECX));
  /* 10004a94 push ecx */
  push32((uint32_t)(ECX));
  /* 10004a95 push ebx */
  push32((uint32_t)(EBX));
  /* 10004a96 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10004a98 cmp dword ptr [0x1000d7e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1000d7e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004a9e push esi */
  push32((uint32_t)(ESI));
  /* 10004a9f push edi */
  push32((uint32_t)(EDI));
  /* 10004aa0 jne 0x10004aa7 */
  if (!C.zf) goto L_10004aa7;
  /* 10004aa2 call 0x10005e58 */
  push32(0x10004aa7u); f_10005e58();
L_10004aa7:;
  /* 10004aa7 mov esi, 0x1000c158 */
  ESI = (0x1000c158u);
  /* 10004aac push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10004ab1 push esi */
  push32((uint32_t)(ESI));
  /* 10004ab2 push ebx */
  push32((uint32_t)(EBX));
  /* 10004ab3 call dword ptr [0x10009054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009054))), 0x10004ab9u);
  /* 10004ab9 mov eax, dword ptr [0x1000d7f8] */
  EAX = (r32((uint32_t)(0x1000d7f8)));
  /* 10004abe mov dword ptr [0x1000c144], esi */
  w32((uint32_t)(0x1000c144), (ESI));
  /* 10004ac4 mov edi, esi */
  EDI = (ESI);
  /* 10004ac6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004ac8 je 0x10004acc */
  if (C.zf) goto L_10004acc;
  /* 10004aca mov edi, eax */
  EDI = (EAX);
L_10004acc:;
  /* 10004acc lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10004acf push eax */
  push32((uint32_t)(EAX));
  /* 10004ad0 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10004ad3 push eax */
  push32((uint32_t)(EAX));
  /* 10004ad4 push ebx */
  push32((uint32_t)(EBX));
  /* 10004ad5 push ebx */
  push32((uint32_t)(EBX));
  /* 10004ad6 push edi */
  push32((uint32_t)(EDI));
  /* 10004ad7 call 0x10004b29 */
  push32(0x10004adcu); f_10004b29();
  /* 10004adc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10004adf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10004ae2 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 10004ae5 push eax */
  push32((uint32_t)(EAX));
  /* 10004ae6 call 0x100058f5 */
  push32(0x10004aebu); f_100058f5();
  /* 10004aeb mov esi, eax */
  ESI = (EAX);
  /* 10004aed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004af0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004af2 jne 0x10004afc */
  if (!C.zf) goto L_10004afc;
  /* 10004af4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10004af6 call 0x10003bc8 */
  push32(0x10004afbu); f_10003bc8();
  /* 10004afb pop ecx */
  ECX = (pop32());
L_10004afc:;
  /* 10004afc lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10004aff push eax */
  push32((uint32_t)(EAX));
  /* 10004b00 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10004b03 push eax */
  push32((uint32_t)(EAX));
  /* 10004b04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10004b07 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10004b0a push eax */
  push32((uint32_t)(EAX));
  /* 10004b0b push esi */
  push32((uint32_t)(ESI));
  /* 10004b0c push edi */
  push32((uint32_t)(EDI));
  /* 10004b0d call 0x10004b29 */
  push32(0x10004b12u); f_10004b29();
  /* 10004b12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10004b15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10004b18 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10004b19 mov dword ptr [0x1000c12c], esi */
  w32((uint32_t)(0x1000c12c), (ESI));
  /* 10004b1f pop edi */
  EDI = (pop32());
  /* 10004b20 pop esi */
  ESI = (pop32());
  /* 10004b21 mov dword ptr [0x1000c128], eax */
  w32((uint32_t)(0x1000c128), (EAX));
  /* 10004b26 pop ebx */
  EBX = (pop32());
  /* 10004b27 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10004b28 ret  */
  ESPCHK(0x10004a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b29 @ 0x10004b29 (436 bytes, 187 insns) */
void f_10004b29(void) {
  FTRACE(0x10004b29u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10004b29 push ebp */
  push32((uint32_t)(EBP));
  /* 10004b2a mov ebp, esp */
  EBP = (ESP);
  /* 10004b2c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10004b2f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10004b32 push ebx */
  push32((uint32_t)(EBX));
  /* 10004b33 push esi */
  push32((uint32_t)(ESI));
  /* 10004b34 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10004b37 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10004b3a push edi */
  push32((uint32_t)(EDI));
  /* 10004b3b mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10004b3e mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 10004b44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10004b47 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10004b49 je 0x10004b53 */
  if (C.zf) goto L_10004b53;
  /* 10004b4b mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10004b4d add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10004b50 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10004b53:;
  /* 10004b53 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004b56 jne 0x10004b9c */
  if (!C.zf) goto L_10004b9c;
L_10004b58:;
  /* 10004b58 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10004b5b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10004b5c cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004b5f je 0x10004b8a */
  if (C.zf) goto L_10004b8a;
  /* 10004b61 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10004b63 je 0x10004b8a */
  if (C.zf) goto L_10004b8a;
  /* 10004b65 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10004b68 test byte ptr [edx + 0x1000c5a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x1000c5a1)))&(0x4u); fl_logic(_r,8); }
  /* 10004b6f je 0x10004b7d */
  if (C.zf) goto L_10004b7d;
  /* 10004b71 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10004b73 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10004b75 je 0x10004b7d */
  if (C.zf) goto L_10004b7d;
  /* 10004b77 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10004b79 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10004b7b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10004b7c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10004b7d:;
  /* 10004b7d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10004b7f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10004b81 je 0x10004b58 */
  if (C.zf) goto L_10004b58;
  /* 10004b83 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10004b85 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10004b87 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10004b88 jmp 0x10004b58 */
  goto L_10004b58;
L_10004b8a:;
  /* 10004b8a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10004b8c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10004b8e je 0x10004b94 */
  if (C.zf) goto L_10004b94;
  /* 10004b90 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10004b93 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10004b94:;
  /* 10004b94 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004b97 jne 0x10004bdf */
  if (!C.zf) goto L_10004bdf;
  /* 10004b99 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10004b9a jmp 0x10004bdf */
  goto L_10004bdf;
L_10004b9c:;
  /* 10004b9c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10004b9e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10004ba0 je 0x10004ba7 */
  if (C.zf) goto L_10004ba7;
  /* 10004ba2 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10004ba4 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10004ba6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10004ba7:;
  /* 10004ba7 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10004ba9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10004baa movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10004bad test byte ptr [ebx + 0x1000c5a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x1000c5a1)))&(0x4u); fl_logic(_r,8); }
  /* 10004bb4 je 0x10004bc2 */
  if (C.zf) goto L_10004bc2;
  /* 10004bb6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10004bb8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10004bba je 0x10004bc1 */
  if (C.zf) goto L_10004bc1;
  /* 10004bbc mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10004bbe mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10004bc0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10004bc1:;
  /* 10004bc1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10004bc2:;
  /* 10004bc2 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004bc5 je 0x10004bd0 */
  if (C.zf) goto L_10004bd0;
  /* 10004bc7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10004bc9 je 0x10004bd4 */
  if (C.zf) goto L_10004bd4;
  /* 10004bcb cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004bce jne 0x10004b9c */
  if (!C.zf) goto L_10004b9c;
L_10004bd0:;
  /* 10004bd0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10004bd2 jne 0x10004bd7 */
  if (!C.zf) goto L_10004bd7;
L_10004bd4:;
  /* 10004bd4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10004bd5 jmp 0x10004bdf */
  goto L_10004bdf;
L_10004bd7:;
  /* 10004bd7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10004bd9 je 0x10004bdf */
  if (C.zf) goto L_10004bdf;
  /* 10004bdb and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10004bdf:;
  /* 10004bdf and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_10004be3:;
  /* 10004be3 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004be6 je 0x10004ccc */
  if (C.zf) goto L_10004ccc;
L_10004bec:;
  /* 10004bec mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10004bee cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004bf1 je 0x10004bf8 */
  if (C.zf) goto L_10004bf8;
  /* 10004bf3 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004bf6 jne 0x10004bfb */
  if (!C.zf) goto L_10004bfb;
L_10004bf8:;
  /* 10004bf8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10004bf9 jmp 0x10004bec */
  goto L_10004bec;
L_10004bfb:;
  /* 10004bfb cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004bfe je 0x10004ccc */
  if (C.zf) goto L_10004ccc;
  /* 10004c04 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10004c06 je 0x10004c10 */
  if (C.zf) goto L_10004c10;
  /* 10004c08 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10004c0a add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10004c0d mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10004c10:;
  /* 10004c10 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10004c13 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_10004c15:;
  /* 10004c15 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 10004c1c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10004c1e:;
  /* 10004c1e cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004c21 jne 0x10004c27 */
  if (!C.zf) goto L_10004c27;
  /* 10004c23 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10004c24 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10004c25 jmp 0x10004c1e */
  goto L_10004c1e;
L_10004c27:;
  /* 10004c27 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004c2a jne 0x10004c58 */
  if (!C.zf) goto L_10004c58;
  /* 10004c2c test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10004c2f jne 0x10004c56 */
  if (!C.zf) goto L_10004c56;
  /* 10004c31 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10004c33 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004c36 je 0x10004c45 */
  if (C.zf) goto L_10004c45;
  /* 10004c38 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004c3c lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10004c3f jne 0x10004c45 */
  if (!C.zf) goto L_10004c45;
  /* 10004c41 mov eax, edx */
  EAX = (EDX);
  /* 10004c43 jmp 0x10004c48 */
  goto L_10004c48;
L_10004c45:;
  /* 10004c45 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_10004c48:;
  /* 10004c48 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10004c4b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10004c4d cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004c50 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10004c53 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10004c56:;
  /* 10004c56 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_10004c58:;
  /* 10004c58 mov edx, ebx */
  EDX = (EBX);
  /* 10004c5a dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10004c5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10004c5d je 0x10004c6d */
  if (C.zf) goto L_10004c6d;
  /* 10004c5f inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10004c60:;
  /* 10004c60 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10004c62 je 0x10004c68 */
  if (C.zf) goto L_10004c68;
  /* 10004c64 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 10004c67 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10004c68:;
  /* 10004c68 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10004c6a dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10004c6b jne 0x10004c60 */
  if (!C.zf) goto L_10004c60;
L_10004c6d:;
  /* 10004c6d mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10004c6f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10004c71 je 0x10004cbd */
  if (C.zf) goto L_10004cbd;
  /* 10004c73 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004c77 jne 0x10004c83 */
  if (!C.zf) goto L_10004c83;
  /* 10004c79 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004c7c je 0x10004cbd */
  if (C.zf) goto L_10004cbd;
  /* 10004c7e cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004c81 je 0x10004cbd */
  if (C.zf) goto L_10004cbd;
L_10004c83:;
  /* 10004c83 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004c87 je 0x10004cb7 */
  if (C.zf) goto L_10004cb7;
  /* 10004c89 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10004c8b je 0x10004ca6 */
  if (C.zf) goto L_10004ca6;
  /* 10004c8d movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10004c90 test byte ptr [ebx + 0x1000c5a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x1000c5a1)))&(0x4u); fl_logic(_r,8); }
  /* 10004c97 je 0x10004c9f */
  if (C.zf) goto L_10004c9f;
  /* 10004c99 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10004c9b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10004c9c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10004c9d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10004c9f:;
  /* 10004c9f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10004ca1 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10004ca3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10004ca4 jmp 0x10004cb5 */
  goto L_10004cb5;
L_10004ca6:;
  /* 10004ca6 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10004ca9 test byte ptr [edx + 0x1000c5a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x1000c5a1)))&(0x4u); fl_logic(_r,8); }
  /* 10004cb0 je 0x10004cb5 */
  if (C.zf) goto L_10004cb5;
  /* 10004cb2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10004cb3 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10004cb5:;
  /* 10004cb5 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10004cb7:;
  /* 10004cb7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10004cb8 jmp 0x10004c15 */
  goto L_10004c15;
L_10004cbd:;
  /* 10004cbd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10004cbf je 0x10004cc5 */
  if (C.zf) goto L_10004cc5;
  /* 10004cc1 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10004cc4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10004cc5:;
  /* 10004cc5 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10004cc7 jmp 0x10004be3 */
  goto L_10004be3;
L_10004ccc:;
  /* 10004ccc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10004cce je 0x10004cd3 */
  if (C.zf) goto L_10004cd3;
  /* 10004cd0 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10004cd3:;
  /* 10004cd3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10004cd6 pop edi */
  EDI = (pop32());
  /* 10004cd7 pop esi */
  ESI = (pop32());
  /* 10004cd8 pop ebx */
  EBX = (pop32());
  /* 10004cd9 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10004cdb pop ebp */
  EBP = (pop32());
  /* 10004cdc ret  */
  ESPCHK(0x10004b29u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cdd @ 0x10004cdd (306 bytes, 132 insns) */
void f_10004cdd(void) {
  FTRACE(0x10004cddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10004cdd push ecx */
  push32((uint32_t)(ECX));
  /* 10004cde push ecx */
  push32((uint32_t)(ECX));
  /* 10004cdf mov eax, dword ptr [0x1000c25c] */
  EAX = (r32((uint32_t)(0x1000c25c)));
  /* 10004ce4 push ebx */
  push32((uint32_t)(EBX));
  /* 10004ce5 push ebp */
  push32((uint32_t)(EBP));
  /* 10004ce6 mov ebp, dword ptr [0x10009068] */
  EBP = (r32((uint32_t)(0x10009068)));
  /* 10004cec push esi */
  push32((uint32_t)(ESI));
  /* 10004ced push edi */
  push32((uint32_t)(EDI));
  /* 10004cee xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10004cf0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10004cf2 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10004cf4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004cf6 jne 0x10004d2b */
  if (!C.zf) goto L_10004d2b;
  /* 10004cf8 call ebp */
  call_ind((uint32_t)(EBP), 0x10004cfau);
  /* 10004cfa mov esi, eax */
  ESI = (EAX);
  /* 10004cfc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004cfe je 0x10004d0c */
  if (C.zf) goto L_10004d0c;
  /* 10004d00 mov dword ptr [0x1000c25c], 1 */
  w32((uint32_t)(0x1000c25c), (0x1u));
  /* 10004d0a jmp 0x10004d34 */
  goto L_10004d34;
L_10004d0c:;
  /* 10004d0c call dword ptr [0x10009064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009064))), 0x10004d12u);
  /* 10004d12 mov edi, eax */
  EDI = (EAX);
  /* 10004d14 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004d16 je 0x10004e06 */
  if (C.zf) goto L_10004e06;
  /* 10004d1c mov dword ptr [0x1000c25c], 2 */
  w32((uint32_t)(0x1000c25c), (0x2u));
  /* 10004d26 jmp 0x10004dba */
  goto L_10004dba;
L_10004d2b:;
  /* 10004d2b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004d2e jne 0x10004db5 */
  if (!C.zf) goto L_10004db5;
L_10004d34:;
  /* 10004d34 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004d36 jne 0x10004d44 */
  if (!C.zf) goto L_10004d44;
  /* 10004d38 call ebp */
  call_ind((uint32_t)(EBP), 0x10004d3au);
  /* 10004d3a mov esi, eax */
  ESI = (EAX);
  /* 10004d3c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004d3e je 0x10004e06 */
  if (C.zf) goto L_10004e06;
L_10004d44:;
  /* 10004d44 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10004d47 mov eax, esi */
  EAX = (ESI);
  /* 10004d49 je 0x10004d59 */
  if (C.zf) goto L_10004d59;
L_10004d4b:;
  /* 10004d4b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10004d4c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10004d4d cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10004d50 jne 0x10004d4b */
  if (!C.zf) goto L_10004d4b;
  /* 10004d52 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10004d53 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10004d54 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10004d57 jne 0x10004d4b */
  if (!C.zf) goto L_10004d4b;
L_10004d59:;
  /* 10004d59 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10004d5b mov edi, dword ptr [0x10009060] */
  EDI = (r32((uint32_t)(0x10009060)));
  /* 10004d61 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10004d63 push ebx */
  push32((uint32_t)(EBX));
  /* 10004d64 push ebx */
  push32((uint32_t)(EBX));
  /* 10004d65 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10004d66 push ebx */
  push32((uint32_t)(EBX));
  /* 10004d67 push ebx */
  push32((uint32_t)(EBX));
  /* 10004d68 push eax */
  push32((uint32_t)(EAX));
  /* 10004d69 push esi */
  push32((uint32_t)(ESI));
  /* 10004d6a push ebx */
  push32((uint32_t)(EBX));
  /* 10004d6b push ebx */
  push32((uint32_t)(EBX));
  /* 10004d6c mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10004d70 call edi */
  call_ind((uint32_t)(EDI), 0x10004d72u);
  /* 10004d72 mov ebp, eax */
  EBP = (EAX);
  /* 10004d74 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004d76 je 0x10004daa */
  if (C.zf) goto L_10004daa;
  /* 10004d78 push ebp */
  push32((uint32_t)(EBP));
  /* 10004d79 call 0x100058f5 */
  push32(0x10004d7eu); f_100058f5();
  /* 10004d7e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004d80 pop ecx */
  ECX = (pop32());
  /* 10004d81 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10004d85 je 0x10004daa */
  if (C.zf) goto L_10004daa;
  /* 10004d87 push ebx */
  push32((uint32_t)(EBX));
  /* 10004d88 push ebx */
  push32((uint32_t)(EBX));
  /* 10004d89 push ebp */
  push32((uint32_t)(EBP));
  /* 10004d8a push eax */
  push32((uint32_t)(EAX));
  /* 10004d8b push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10004d8f push esi */
  push32((uint32_t)(ESI));
  /* 10004d90 push ebx */
  push32((uint32_t)(EBX));
  /* 10004d91 push ebx */
  push32((uint32_t)(EBX));
  /* 10004d92 call edi */
  call_ind((uint32_t)(EDI), 0x10004d94u);
  /* 10004d94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004d96 jne 0x10004da6 */
  if (!C.zf) goto L_10004da6;
  /* 10004d98 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10004d9c call 0x100058ad */
  push32(0x10004da1u); f_100058ad();
  /* 10004da1 pop ecx */
  ECX = (pop32());
  /* 10004da2 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_10004da6:;
  /* 10004da6 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10004daa:;
  /* 10004daa push esi */
  push32((uint32_t)(ESI));
  /* 10004dab call dword ptr [0x1000905c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000905c))), 0x10004db1u);
  /* 10004db1 mov eax, ebx */
  EAX = (EBX);
  /* 10004db3 jmp 0x10004e08 */
  goto L_10004e08;
L_10004db5:;
  /* 10004db5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004db8 jne 0x10004e06 */
  if (!C.zf) goto L_10004e06;
L_10004dba:;
  /* 10004dba cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004dbc jne 0x10004dca */
  if (!C.zf) goto L_10004dca;
  /* 10004dbe call dword ptr [0x10009064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009064))), 0x10004dc4u);
  /* 10004dc4 mov edi, eax */
  EDI = (EAX);
  /* 10004dc6 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004dc8 je 0x10004e06 */
  if (C.zf) goto L_10004e06;
L_10004dca:;
  /* 10004dca cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004dcc mov eax, edi */
  EAX = (EDI);
  /* 10004dce je 0x10004dda */
  if (C.zf) goto L_10004dda;
L_10004dd0:;
  /* 10004dd0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10004dd1 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004dd3 jne 0x10004dd0 */
  if (!C.zf) goto L_10004dd0;
  /* 10004dd5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10004dd6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10004dd8 jne 0x10004dd0 */
  if (!C.zf) goto L_10004dd0;
L_10004dda:;
  /* 10004dda sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10004ddc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10004ddd mov ebp, eax */
  EBP = (EAX);
  /* 10004ddf push ebp */
  push32((uint32_t)(EBP));
  /* 10004de0 call 0x100058f5 */
  push32(0x10004de5u); f_100058f5();
  /* 10004de5 mov esi, eax */
  ESI = (EAX);
  /* 10004de7 pop ecx */
  ECX = (pop32());
  /* 10004de8 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004dea jne 0x10004df0 */
  if (!C.zf) goto L_10004df0;
  /* 10004dec xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10004dee jmp 0x10004dfb */
  goto L_10004dfb;
L_10004df0:;
  /* 10004df0 push ebp */
  push32((uint32_t)(EBP));
  /* 10004df1 push edi */
  push32((uint32_t)(EDI));
  /* 10004df2 push esi */
  push32((uint32_t)(ESI));
  /* 10004df3 call 0x10005e80 */
  push32(0x10004df8u); f_10005e80();
  /* 10004df8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004dfb:;
  /* 10004dfb push edi */
  push32((uint32_t)(EDI));
  /* 10004dfc call dword ptr [0x10009058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009058))), 0x10004e02u);
  /* 10004e02 mov eax, esi */
  EAX = (ESI);
  /* 10004e04 jmp 0x10004e08 */
  goto L_10004e08;
L_10004e06:;
  /* 10004e06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10004e08:;
  /* 10004e08 pop edi */
  EDI = (pop32());
  /* 10004e09 pop esi */
  ESI = (pop32());
  /* 10004e0a pop ebp */
  EBP = (pop32());
  /* 10004e0b pop ebx */
  EBX = (pop32());
  /* 10004e0c pop ecx */
  ECX = (pop32());
  /* 10004e0d pop ecx */
  ECX = (pop32());
  /* 10004e0e ret  */
  ESPCHK(0x10004cddu, _esp0);
  ESP += 4; return;
}

/* FUN_10004e0f @ 0x10004e0f (60 bytes, 20 insns) */
void f_10004e0f(void) {
  FTRACE(0x10004e0fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10004e0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10004e11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10004e13 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004e17 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10004e1c sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10004e1f push eax */
  push32((uint32_t)(EAX));
  /* 10004e20 call dword ptr [0x10009070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009070))), 0x10004e26u);
  /* 10004e26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004e28 mov dword ptr [0x1000d6c4], eax */
  w32((uint32_t)(0x1000d6c4), (EAX));
  /* 10004e2d je 0x10004e44 */
  if (C.zf) goto L_10004e44;
  /* 10004e2f call 0x100061b5 */
  push32(0x10004e34u); f_100061b5();
  /* 10004e34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004e36 jne 0x10004e47 */
  if (!C.zf) goto L_10004e47;
  /* 10004e38 push dword ptr [0x1000d6c4] */
  push32((uint32_t)(r32((uint32_t)(0x1000d6c4))));
  /* 10004e3e call dword ptr [0x1000906c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000906c))), 0x10004e44u);
L_10004e44:;
  /* 10004e44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10004e46 ret  */
  ESPCHK(0x10004e0fu, _esp0);
  ESP += 4; return;
L_10004e47:;
  /* 10004e47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10004e49 pop eax */
  EAX = (pop32());
  /* 10004e4a ret  */
  ESPCHK(0x10004e0fu, _esp0);
  ESP += 4; return;
}

/* FUN_10004e4b @ 0x10004e4b (117 bytes, 38 insns) */
void f_10004e4b(void) {
  FTRACE(0x10004e4bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10004e4b push ebx */
  push32((uint32_t)(EBX));
  /* 10004e4c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10004e4e cmp dword ptr [0x1000c468], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1000c468))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004e54 push ebp */
  push32((uint32_t)(EBP));
  /* 10004e55 mov ebp, dword ptr [0x10009078] */
  EBP = (r32((uint32_t)(0x10009078)));
  /* 10004e5b jle 0x10004ea1 */
  if ((C.zf||C.sf!=C.of)) goto L_10004ea1;
  /* 10004e5d mov eax, dword ptr [0x1000c46c] */
  EAX = (r32((uint32_t)(0x1000c46c)));
  /* 10004e62 push esi */
  push32((uint32_t)(ESI));
  /* 10004e63 push edi */
  push32((uint32_t)(EDI));
  /* 10004e64 mov edi, dword ptr [0x10009074] */
  EDI = (r32((uint32_t)(0x10009074)));
  /* 10004e6a lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10004e6d:;
  /* 10004e6d push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10004e72 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10004e77 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10004e79 call edi */
  call_ind((uint32_t)(EDI), 0x10004e7bu);
  /* 10004e7b push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10004e80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10004e82 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10004e84 call edi */
  call_ind((uint32_t)(EDI), 0x10004e86u);
  /* 10004e86 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 10004e89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10004e8b push dword ptr [0x1000d6c4] */
  push32((uint32_t)(r32((uint32_t)(0x1000d6c4))));
  /* 10004e91 call ebp */
  call_ind((uint32_t)(EBP), 0x10004e93u);
  /* 10004e93 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10004e96 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10004e97 cmp ebx, dword ptr [0x1000c468] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1000c468))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004e9d jl 0x10004e6d */
  if ((C.sf!=C.of)) goto L_10004e6d;
  /* 10004e9f pop edi */
  EDI = (pop32());
  /* 10004ea0 pop esi */
  ESI = (pop32());
L_10004ea1:;
  /* 10004ea1 push dword ptr [0x1000c46c] */
  push32((uint32_t)(r32((uint32_t)(0x1000c46c))));
  /* 10004ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10004ea9 push dword ptr [0x1000d6c4] */
  push32((uint32_t)(r32((uint32_t)(0x1000d6c4))));
  /* 10004eaf call ebp */
  call_ind((uint32_t)(EBP), 0x10004eb1u);
  /* 10004eb1 push dword ptr [0x1000d6c4] */
  push32((uint32_t)(r32((uint32_t)(0x1000d6c4))));
  /* 10004eb7 call dword ptr [0x1000906c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000906c))), 0x10004ebdu);
  /* 10004ebd pop ebp */
  EBP = (pop32());
  /* 10004ebe pop ebx */
  EBX = (pop32());
  /* 10004ebf ret  */
  ESPCHK(0x10004e4bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004ec0 @ 0x10004ec0 (57 bytes, 18 insns) */
void f_10004ec0(void) {
  FTRACE(0x10004ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10004ec0 mov eax, dword ptr [0x1000c10c] */
  EAX = (r32((uint32_t)(0x1000c10c)));
  /* 10004ec5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004ec8 je 0x10004ed7 */
  if (C.zf) goto L_10004ed7;
  /* 10004eca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004ecc jne 0x10004ef8 */
  if (!C.zf) goto L_10004ef8;
  /* 10004ece cmp dword ptr [0x1000c110], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1000c110))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004ed5 jne 0x10004ef8 */
  if (!C.zf) goto L_10004ef8;
L_10004ed7:;
  /* 10004ed7 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10004edc call 0x10004ef9 */
  push32(0x10004ee1u); f_10004ef9();
  /* 10004ee1 mov eax, dword ptr [0x1000c260] */
  EAX = (r32((uint32_t)(0x1000c260)));
  /* 10004ee6 pop ecx */
  ECX = (pop32());
  /* 10004ee7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004ee9 je 0x10004eed */
  if (C.zf) goto L_10004eed;
  /* 10004eeb call eax */
  call_ind((uint32_t)(EAX), 0x10004eedu);
L_10004eed:;
  /* 10004eed push 0xff */
  push32((uint32_t)(0xffu));
  /* 10004ef2 call 0x10004ef9 */
  push32(0x10004ef7u); f_10004ef9();
  /* 10004ef7 pop ecx */
  ECX = (pop32());
L_10004ef8:;
  /* 10004ef8 ret  */
  ESPCHK(0x10004ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ef9 @ 0x10004ef9 (339 bytes, 100 insns) */
void f_10004ef9(void) {
  FTRACE(0x10004ef9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10004ef9 push ebp */
  push32((uint32_t)(EBP));
  /* 10004efa mov ebp, esp */
  EBP = (ESP);
  /* 10004efc sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10004f02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10004f05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10004f07 mov eax, 0x1000ae98 */
  EAX = (0x1000ae98u);
L_10004f0c:;
  /* 10004f0c cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004f0e je 0x10004f1b */
  if (C.zf) goto L_10004f1b;
  /* 10004f10 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10004f13 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10004f14 cmp eax, 0x1000af28 */
  { uint32_t _a=(EAX),_b=(0x1000af28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004f19 jl 0x10004f0c */
  if ((C.sf!=C.of)) goto L_10004f0c;
L_10004f1b:;
  /* 10004f1b push esi */
  push32((uint32_t)(ESI));
  /* 10004f1c mov esi, ecx */
  ESI = (ECX);
  /* 10004f1e shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10004f21 cmp edx, dword ptr [esi + 0x1000ae98] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x1000ae98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004f27 jne 0x10005049 */
  if (!C.zf) goto L_10005049;
  /* 10004f2d mov eax, dword ptr [0x1000c10c] */
  EAX = (r32((uint32_t)(0x1000c10c)));
  /* 10004f32 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004f35 je 0x10005023 */
  if (C.zf) goto L_10005023;
  /* 10004f3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004f3d jne 0x10004f4c */
  if (!C.zf) goto L_10004f4c;
  /* 10004f3f cmp dword ptr [0x1000c110], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1000c110))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004f46 je 0x10005023 */
  if (C.zf) goto L_10005023;
L_10004f4c:;
  /* 10004f4c cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004f52 je 0x10005049 */
  if (C.zf) goto L_10005049;
  /* 10004f58 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10004f5e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10004f63 push eax */
  push32((uint32_t)(EAX));
  /* 10004f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10004f66 call dword ptr [0x10009054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009054))), 0x10004f6cu);
  /* 10004f6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10004f6e jne 0x10004f83 */
  if (!C.zf) goto L_10004f83;
  /* 10004f70 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10004f76 push 0x1000942c */
  push32((uint32_t)(0x1000942cu));
  /* 10004f7b push eax */
  push32((uint32_t)(EAX));
  /* 10004f7c call 0x10005990 */
  push32(0x10004f81u); f_10005990();
  /* 10004f81 pop ecx */
  ECX = (pop32());
  /* 10004f82 pop ecx */
  ECX = (pop32());
L_10004f83:;
  /* 10004f83 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10004f89 push edi */
  push32((uint32_t)(EDI));
  /* 10004f8a push eax */
  push32((uint32_t)(EAX));
  /* 10004f8b lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10004f91 call 0x100054f0 */
  push32(0x10004f96u); f_100054f0();
  /* 10004f96 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10004f97 pop ecx */
  ECX = (pop32());
  /* 10004f98 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10004f9b jbe 0x10004fc6 */
  if ((C.cf||C.zf)) goto L_10004fc6;
  /* 10004f9d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10004fa3 push eax */
  push32((uint32_t)(EAX));
  /* 10004fa4 call 0x100054f0 */
  push32(0x10004fa9u); f_100054f0();
  /* 10004fa9 mov edi, eax */
  EDI = (EAX);
  /* 10004fab lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10004fb1 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10004fb4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10004fb6 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10004fb8 push 0x10009428 */
  push32((uint32_t)(0x10009428u));
  /* 10004fbd push edi */
  push32((uint32_t)(EDI));
  /* 10004fbe call 0x10006a90 */
  push32(0x10004fc3u); f_10006a90();
  /* 10004fc3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10004fc6:;
  /* 10004fc6 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10004fcc push 0x1000940c */
  push32((uint32_t)(0x1000940cu));
  /* 10004fd1 push eax */
  push32((uint32_t)(EAX));
  /* 10004fd2 call 0x10005990 */
  push32(0x10004fd7u); f_10005990();
  /* 10004fd7 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10004fdd push edi */
  push32((uint32_t)(EDI));
  /* 10004fde push eax */
  push32((uint32_t)(EAX));
  /* 10004fdf call 0x100059a0 */
  push32(0x10004fe4u); f_100059a0();
  /* 10004fe4 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10004fea push 0x10009408 */
  push32((uint32_t)(0x10009408u));
  /* 10004fef push eax */
  push32((uint32_t)(EAX));
  /* 10004ff0 call 0x100059a0 */
  push32(0x10004ff5u); f_100059a0();
  /* 10004ff5 push dword ptr [esi + 0x1000ae9c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1000ae9c))));
  /* 10004ffb lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10005001 push eax */
  push32((uint32_t)(EAX));
  /* 10005002 call 0x100059a0 */
  push32(0x10005007u); f_100059a0();
  /* 10005007 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 1000500c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10005012 push 0x100093e0 */
  push32((uint32_t)(0x100093e0u));
  /* 10005017 push eax */
  push32((uint32_t)(EAX));
  /* 10005018 call 0x100069fe */
  push32(0x1000501du); f_100069fe();
  /* 1000501d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005020 pop edi */
  EDI = (pop32());
  /* 10005021 jmp 0x10005049 */
  goto L_10005049;
L_10005023:;
  /* 10005023 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10005026 lea esi, [esi + 0x1000ae9c] */
  ESI = ((uint32_t)(ESI + 0x1000ae9c));
  /* 1000502c push 0 */
  push32((uint32_t)(0x0u));
  /* 1000502e push eax */
  push32((uint32_t)(EAX));
  /* 1000502f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10005031 call 0x100054f0 */
  push32(0x10005036u); f_100054f0();
  /* 10005036 pop ecx */
  ECX = (pop32());
  /* 10005037 push eax */
  push32((uint32_t)(EAX));
  /* 10005038 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1000503a push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1000503c call dword ptr [0x10009044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009044))), 0x10005042u);
  /* 10005042 push eax */
  push32((uint32_t)(EAX));
  /* 10005043 call dword ptr [0x1000907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000907c))), 0x10005049u);
L_10005049:;
  /* 10005049 pop esi */
  ESI = (pop32());
  /* 1000504a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000504b ret  */
  ESPCHK(0x10004ef9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000504c @ 0x1000504c (101 bytes, 34 insns) */
void f_1000504c(void) {
  FTRACE(0x1000504cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000504c push esi */
  push32((uint32_t)(ESI));
  /* 1000504d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10005051 cmp esi, dword ptr [0x1000d7e0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1000d7e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005057 jae 0x10005099 */
  if (!C.cf) goto L_10005099;
  /* 10005059 mov ecx, esi */
  ECX = (ESI);
  /* 1000505b mov eax, esi */
  EAX = (ESI);
  /* 1000505d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10005060 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10005063 mov ecx, dword ptr [ecx*4 + 0x1000d6e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1000d6e0)));
  /* 1000506a lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1000506d test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10005072 je 0x10005099 */
  if (C.zf) goto L_10005099;
  /* 10005074 push edi */
  push32((uint32_t)(EDI));
  /* 10005075 push esi */
  push32((uint32_t)(ESI));
  /* 10005076 call 0x10006cd4 */
  push32(0x1000507bu); f_10006cd4();
  /* 1000507b push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1000507f push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10005083 push esi */
  push32((uint32_t)(ESI));
  /* 10005084 call 0x100050b1 */
  push32(0x10005089u); f_100050b1();
  /* 10005089 push esi */
  push32((uint32_t)(ESI));
  /* 1000508a mov edi, eax */
  EDI = (EAX);
  /* 1000508c call 0x10006d33 */
  push32(0x10005091u); f_10006d33();
  /* 10005091 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005094 mov eax, edi */
  EAX = (EDI);
  /* 10005096 pop edi */
  EDI = (pop32());
  /* 10005097 pop esi */
  ESI = (pop32());
  /* 10005098 ret  */
  ESPCHK(0x1000504cu, _esp0);
  ESP += 4; return;
L_10005099:;
  /* 10005099 call 0x10006c01 */
  push32(0x1000509eu); f_10006c01();
  /* 1000509e mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100050a4 call 0x10006c0a */
  push32(0x100050a9u); f_10006c0a();
  /* 100050a9 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100050ac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100050af pop esi */
  ESI = (pop32());
  /* 100050b0 ret  */
  ESPCHK(0x1000504cu, _esp0);
  ESP += 4; return;
}

/* FUN_100050b1 @ 0x100050b1 (115 bytes, 41 insns) */
void f_100050b1(void) {
  FTRACE(0x100050b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100050b1 push esi */
  push32((uint32_t)(ESI));
  /* 100050b2 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100050b6 push edi */
  push32((uint32_t)(EDI));
  /* 100050b7 push esi */
  push32((uint32_t)(ESI));
  /* 100050b8 call 0x10006c92 */
  push32(0x100050bdu); f_10006c92();
  /* 100050bd cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100050c0 pop ecx */
  ECX = (pop32());
  /* 100050c1 jne 0x100050d0 */
  if (!C.zf) goto L_100050d0;
  /* 100050c3 call 0x10006c01 */
  push32(0x100050c8u); f_10006c01();
  /* 100050c8 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100050ce jmp 0x100050fd */
  goto L_100050fd;
L_100050d0:;
  /* 100050d0 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 100050d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 100050d6 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100050da push eax */
  push32((uint32_t)(EAX));
  /* 100050db call dword ptr [0x10009080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009080))), 0x100050e1u);
  /* 100050e1 mov edi, eax */
  EDI = (EAX);
  /* 100050e3 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100050e6 jne 0x100050f0 */
  if (!C.zf) goto L_100050f0;
  /* 100050e8 call dword ptr [0x1000903c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000903c))), 0x100050eeu);
  /* 100050ee jmp 0x100050f2 */
  goto L_100050f2;
L_100050f0:;
  /* 100050f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100050f2:;
  /* 100050f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100050f4 je 0x10005102 */
  if (C.zf) goto L_10005102;
  /* 100050f6 push eax */
  push32((uint32_t)(EAX));
  /* 100050f7 call 0x10006b8e */
  push32(0x100050fcu); f_10006b8e();
  /* 100050fc pop ecx */
  ECX = (pop32());
L_100050fd:;
  /* 100050fd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10005100 jmp 0x10005121 */
  goto L_10005121;
L_10005102:;
  /* 10005102 mov ecx, esi */
  ECX = (ESI);
  /* 10005104 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 10005107 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1000510a mov eax, esi */
  EAX = (ESI);
  /* 1000510c mov ecx, dword ptr [ecx*4 + 0x1000d6e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1000d6e0)));
  /* 10005113 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10005116 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 1000511b lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 1000511f mov eax, edi */
  EAX = (EDI);
L_10005121:;
  /* 10005121 pop edi */
  EDI = (pop32());
  /* 10005122 pop esi */
  ESI = (pop32());
  /* 10005123 ret  */
  ESPCHK(0x100050b1u, _esp0);
  ESP += 4; return;
}

/* FUN_10005124 @ 0x10005124 (101 bytes, 34 insns) */
void f_10005124(void) {
  FTRACE(0x10005124u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005124 push esi */
  push32((uint32_t)(ESI));
  /* 10005125 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10005129 cmp esi, dword ptr [0x1000d7e0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1000d7e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000512f jae 0x10005171 */
  if (!C.cf) goto L_10005171;
  /* 10005131 mov ecx, esi */
  ECX = (ESI);
  /* 10005133 mov eax, esi */
  EAX = (ESI);
  /* 10005135 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10005138 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1000513b mov ecx, dword ptr [ecx*4 + 0x1000d6e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1000d6e0)));
  /* 10005142 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10005145 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1000514a je 0x10005171 */
  if (C.zf) goto L_10005171;
  /* 1000514c push edi */
  push32((uint32_t)(EDI));
  /* 1000514d push esi */
  push32((uint32_t)(ESI));
  /* 1000514e call 0x10006cd4 */
  push32(0x10005153u); f_10006cd4();
  /* 10005153 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10005157 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1000515b push esi */
  push32((uint32_t)(ESI));
  /* 1000515c call 0x10005189 */
  push32(0x10005161u); f_10005189();
  /* 10005161 push esi */
  push32((uint32_t)(ESI));
  /* 10005162 mov edi, eax */
  EDI = (EAX);
  /* 10005164 call 0x10006d33 */
  push32(0x10005169u); f_10006d33();
  /* 10005169 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000516c mov eax, edi */
  EAX = (EDI);
  /* 1000516e pop edi */
  EDI = (pop32());
  /* 1000516f pop esi */
  ESI = (pop32());
  /* 10005170 ret  */
  ESPCHK(0x10005124u, _esp0);
  ESP += 4; return;
L_10005171:;
  /* 10005171 call 0x10006c01 */
  push32(0x10005176u); f_10006c01();
  /* 10005176 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1000517c call 0x10006c0a */
  push32(0x10005181u); f_10006c0a();
  /* 10005181 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10005184 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10005187 pop esi */
  ESI = (pop32());
  /* 10005188 ret  */
  ESPCHK(0x10005124u, _esp0);
  ESP += 4; return;
}

/* FUN_10005189 @ 0x10005189 (395 bytes, 135 insns) */
void f_10005189(void) {
  FTRACE(0x10005189u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005189 push ebp */
  push32((uint32_t)(EBP));
  /* 1000518a mov ebp, esp */
  EBP = (ESP);
  /* 1000518c sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10005192 push ebx */
  push32((uint32_t)(EBX));
  /* 10005193 push esi */
  push32((uint32_t)(ESI));
  /* 10005194 push edi */
  push32((uint32_t)(EDI));
  /* 10005195 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10005197 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000519a mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 1000519d mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 100051a0 jne 0x100051a9 */
  if (!C.zf) goto L_100051a9;
L_100051a2:;
  /* 100051a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100051a4 jmp 0x1000530f */
  goto L_1000530f;
L_100051a9:;
  /* 100051a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100051ac sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100051af lea ebx, [eax*4 + 0x1000d6e0] */
  EBX = ((uint32_t)(EAX*4 + 0x1000d6e0));
  /* 100051b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100051b9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100051bc lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 100051bf mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100051c1 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100051c4 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 100051c9 je 0x100051d9 */
  if (C.zf) goto L_100051d9;
  /* 100051cb push 2 */
  push32((uint32_t)(0x2u));
  /* 100051cd push edi */
  push32((uint32_t)(EDI));
  /* 100051ce push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100051d1 call 0x100050b1 */
  push32(0x100051d6u); f_100050b1();
  /* 100051d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100051d9:;
  /* 100051d9 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100051db add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100051dd test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 100051e1 je 0x100052a8 */
  if (C.zf) goto L_100052a8;
  /* 100051e7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100051ea cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100051ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100051f0 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 100051f3 jbe 0x100052e3 */
  if ((C.cf||C.zf)) goto L_100052e3;
L_100051f9:;
  /* 100051f9 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_100051ff:;
  /* 100051ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10005202 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10005205 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005208 jae 0x10005233 */
  if (!C.cf) goto L_10005233;
  /* 1000520a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000520d inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10005210 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 10005212 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10005215 jne 0x1000521e */
  if (!C.zf) goto L_1000521e;
  /* 10005217 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 1000521a mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1000521d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1000521e:;
  /* 1000521e mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10005220 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10005221 mov ecx, eax */
  ECX = (EAX);
  /* 10005223 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10005229 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000522b cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005231 jl 0x100051ff */
  if ((C.sf!=C.of)) goto L_100051ff;
L_10005233:;
  /* 10005233 mov edi, eax */
  EDI = (EAX);
  /* 10005235 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1000523b sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000523d lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10005240 push 0 */
  push32((uint32_t)(0x0u));
  /* 10005242 push eax */
  push32((uint32_t)(EAX));
  /* 10005243 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10005249 push edi */
  push32((uint32_t)(EDI));
  /* 1000524a push eax */
  push32((uint32_t)(EAX));
  /* 1000524b mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1000524d push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 10005250 call dword ptr [0x1000907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000907c))), 0x10005256u);
  /* 10005256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005258 je 0x1000529d */
  if (C.zf) goto L_1000529d;
  /* 1000525a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1000525d add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10005260 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005262 jl 0x1000526f */
  if ((C.sf!=C.of)) goto L_1000526f;
  /* 10005264 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10005267 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000526a cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000526d jb 0x100051f9 */
  if (C.cf) goto L_100051f9;
L_1000526f:;
  /* 1000526f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10005271:;
  /* 10005271 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10005274 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005276 jne 0x1000530c */
  if (!C.zf) goto L_1000530c;
  /* 1000527c cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000527f je 0x100052e3 */
  if (C.zf) goto L_100052e3;
  /* 10005281 push 5 */
  push32((uint32_t)(0x5u));
  /* 10005283 pop esi */
  ESI = (pop32());
  /* 10005284 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005287 jne 0x100052d5 */
  if (!C.zf) goto L_100052d5;
  /* 10005289 call 0x10006c01 */
  push32(0x1000528eu); f_10006c01();
  /* 1000528e mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10005294 call 0x10006c0a */
  push32(0x10005299u); f_10006c0a();
  /* 10005299 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1000529b jmp 0x100052de */
  goto L_100052de;
L_1000529d:;
  /* 1000529d call dword ptr [0x1000903c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000903c))), 0x100052a3u);
  /* 100052a3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 100052a6 jmp 0x1000526f */
  goto L_1000526f;
L_100052a8:;
  /* 100052a8 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 100052ab push edi */
  push32((uint32_t)(EDI));
  /* 100052ac push ecx */
  push32((uint32_t)(ECX));
  /* 100052ad push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100052b0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100052b3 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 100052b5 call dword ptr [0x1000907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000907c))), 0x100052bbu);
  /* 100052bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100052bd je 0x100052ca */
  if (C.zf) goto L_100052ca;
  /* 100052bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100052c2 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 100052c5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100052c8 jmp 0x10005271 */
  goto L_10005271;
L_100052ca:;
  /* 100052ca call dword ptr [0x1000903c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000903c))), 0x100052d0u);
  /* 100052d0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 100052d3 jmp 0x10005271 */
  goto L_10005271;
L_100052d5:;
  /* 100052d5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100052d8 call 0x10006b8e */
  push32(0x100052ddu); f_10006b8e();
  /* 100052dd pop ecx */
  ECX = (pop32());
L_100052de:;
  /* 100052de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100052e1 jmp 0x1000530f */
  goto L_1000530f;
L_100052e3:;
  /* 100052e3 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100052e5 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 100052ea je 0x100052f8 */
  if (C.zf) goto L_100052f8;
  /* 100052ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100052ef cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100052f2 je 0x100051a2 */
  if (C.zf) goto L_100051a2;
L_100052f8:;
  /* 100052f8 call 0x10006c01 */
  push32(0x100052fdu); f_10006c01();
  /* 100052fd mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10005303 call 0x10006c0a */
  push32(0x10005308u); f_10006c0a();
  /* 10005308 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 1000530a jmp 0x100052de */
  goto L_100052de;
L_1000530c:;
  /* 1000530c sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1000530f:;
  /* 1000530f pop edi */
  EDI = (pop32());
  /* 10005310 pop esi */
  ESI = (pop32());
  /* 10005311 pop ebx */
  EBX = (pop32());
  /* 10005312 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10005313 ret  */
  ESPCHK(0x10005189u, _esp0);
  ESP += 4; return;
}

/* FUN_10005314 @ 0x10005314 (68 bytes, 19 insns) */
void f_10005314(void) {
  FTRACE(0x10005314u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005314 inc dword ptr [0x1000c264] */
  { uint32_t _r=(r32((uint32_t)(0x1000c264)))+1; w32((uint32_t)(0x1000c264), (_r)); fl_inc(_r,32); }
  /* 1000531a push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1000531f call 0x100058f5 */
  push32(0x10005324u); f_100058f5();
  /* 10005324 pop ecx */
  ECX = (pop32());
  /* 10005325 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10005329 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000532b mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1000532e je 0x1000533d */
  if (C.zf) goto L_1000533d;
  /* 10005330 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10005334 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 1000533b jmp 0x1000534e */
  goto L_1000534e;
L_1000533d:;
  /* 1000533d or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10005341 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 10005344 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10005347 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_1000534e:;
  /* 1000534e mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10005351 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10005355 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10005357 ret  */
  ESPCHK(0x10005314u, _esp0);
  ESP += 4; return;
}

/* FUN_10005358 @ 0x10005358 (41 bytes, 13 insns) */
void f_10005358(void) {
  FTRACE(0x10005358u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005358 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000535c cmp eax, dword ptr [0x1000d7e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1000d7e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005362 jb 0x10005367 */
  if (C.cf) goto L_10005367;
  /* 10005364 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10005366 ret  */
  ESPCHK(0x10005358u, _esp0);
  ESP += 4; return;
L_10005367:;
  /* 10005367 mov ecx, eax */
  ECX = (EAX);
  /* 10005369 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1000536c sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1000536f lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10005372 mov ecx, dword ptr [ecx*4 + 0x1000d6e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1000d6e0)));
  /* 10005379 mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1000537d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10005380 ret  */
  ESPCHK(0x10005358u, _esp0);
  ESP += 4; return;
}

/* FUN_1000543d @ 0x1000543d (47 bytes, 17 insns) */
void f_1000543d(void) {
  FTRACE(0x1000543du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000543d mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10005441 mov ecx, 0x1000af28 */
  ECX = (0x1000af28u);
  /* 10005446 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005448 jb 0x10005461 */
  if (C.cf) goto L_10005461;
  /* 1000544a cmp eax, 0x1000b188 */
  { uint32_t _a=(EAX),_b=(0x1000b188u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000544f ja 0x10005461 */
  if ((!C.cf&&!C.zf)) goto L_10005461;
  /* 10005451 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10005453 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10005456 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10005459 push eax */
  push32((uint32_t)(EAX));
  /* 1000545a call 0x100057aa */
  push32(0x1000545fu); f_100057aa();
  /* 1000545f pop ecx */
  ECX = (pop32());
  /* 10005460 ret  */
  ESPCHK(0x1000543du, _esp0);
  ESP += 4; return;
L_10005461:;
  /* 10005461 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10005464 push eax */
  push32((uint32_t)(EAX));
  /* 10005465 call dword ptr [0x10009000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009000))), 0x1000546bu);
  /* 1000546b ret  */
  ESPCHK(0x1000543du, _esp0);
  ESP += 4; return;
}

/* FUN_1000546c @ 0x1000546c (35 bytes, 13 insns) */
void f_1000546c(void) {
  FTRACE(0x1000546cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000546c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10005470 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005473 jge 0x10005480 */
  if ((C.sf==C.of)) goto L_10005480;
  /* 10005475 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10005478 push eax */
  push32((uint32_t)(EAX));
  /* 10005479 call 0x100057aa */
  push32(0x1000547eu); f_100057aa();
  /* 1000547e pop ecx */
  ECX = (pop32());
  /* 1000547f ret  */
  ESPCHK(0x1000546cu, _esp0);
  ESP += 4; return;
L_10005480:;
  /* 10005480 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10005484 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10005487 push eax */
  push32((uint32_t)(EAX));
  /* 10005488 call dword ptr [0x10009000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009000))), 0x1000548eu);
  /* 1000548e ret  */
  ESPCHK(0x1000546cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000548f @ 0x1000548f (47 bytes, 17 insns) */
void f_1000548f(void) {
  FTRACE(0x1000548fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000548f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10005493 mov ecx, 0x1000af28 */
  ECX = (0x1000af28u);
  /* 10005498 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000549a jb 0x100054b3 */
  if (C.cf) goto L_100054b3;
  /* 1000549c cmp eax, 0x1000b188 */
  { uint32_t _a=(EAX),_b=(0x1000b188u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100054a1 ja 0x100054b3 */
  if ((!C.cf&&!C.zf)) goto L_100054b3;
  /* 100054a3 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100054a5 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100054a8 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100054ab push eax */
  push32((uint32_t)(EAX));
  /* 100054ac call 0x1000580b */
  push32(0x100054b1u); f_1000580b();
  /* 100054b1 pop ecx */
  ECX = (pop32());
  /* 100054b2 ret  */
  ESPCHK(0x1000548fu, _esp0);
  ESP += 4; return;
L_100054b3:;
  /* 100054b3 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100054b6 push eax */
  push32((uint32_t)(EAX));
  /* 100054b7 call dword ptr [0x1000900c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000900c))), 0x100054bdu);
  /* 100054bd ret  */
  ESPCHK(0x1000548fu, _esp0);
  ESP += 4; return;
}

/* FUN_100054be @ 0x100054be (35 bytes, 13 insns) */
void f_100054be(void) {
  FTRACE(0x100054beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100054be mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100054c2 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100054c5 jge 0x100054d2 */
  if ((C.sf==C.of)) goto L_100054d2;
  /* 100054c7 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100054ca push eax */
  push32((uint32_t)(EAX));
  /* 100054cb call 0x1000580b */
  push32(0x100054d0u); f_1000580b();
  /* 100054d0 pop ecx */
  ECX = (pop32());
  /* 100054d1 ret  */
  ESPCHK(0x100054beu, _esp0);
  ESP += 4; return;
L_100054d2:;
  /* 100054d2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100054d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100054d9 push eax */
  push32((uint32_t)(EAX));
  /* 100054da call dword ptr [0x1000900c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000900c))), 0x100054e0u);
  /* 100054e0 ret  */
  ESPCHK(0x100054beu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x100054f0 (123 bytes, 44 insns) */
void f_100054f0(void) {
  FTRACE(0x100054f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100054f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100054f4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100054fa je 0x10005510 */
  if (C.zf) goto L_10005510;
L_100054fc:;
  /* 100054fc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 100054fe inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100054ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10005501 je 0x10005543 */
  if (C.zf) goto L_10005543;
  /* 10005503 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10005509 jne 0x100054fc */
  if (!C.zf) goto L_100054fc;
  /* 1000550b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10005510:;
  /* 10005510 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10005512 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10005517 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10005519 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1000551c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1000551e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10005521 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10005526 je 0x10005510 */
  if (C.zf) goto L_10005510;
  /* 10005528 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1000552b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1000552d je 0x10005561 */
  if (C.zf) goto L_10005561;
  /* 1000552f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10005531 je 0x10005557 */
  if (C.zf) goto L_10005557;
  /* 10005533 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10005538 je 0x1000554d */
  if (C.zf) goto L_1000554d;
  /* 1000553a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1000553f je 0x10005543 */
  if (C.zf) goto L_10005543;
  /* 10005541 jmp 0x10005510 */
  goto L_10005510;
L_10005543:;
  /* 10005543 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10005546 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000554a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000554c ret  */
  ESPCHK(0x100054f0u, _esp0);
  ESP += 4; return;
L_1000554d:;
  /* 1000554d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10005550 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10005554 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10005556 ret  */
  ESPCHK(0x100054f0u, _esp0);
  ESP += 4; return;
L_10005557:;
  /* 10005557 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1000555a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000555e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10005560 ret  */
  ESPCHK(0x100054f0u, _esp0);
  ESP += 4; return;
L_10005561:;
  /* 10005561 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10005564 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10005568 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000556a ret  */
  ESPCHK(0x100054f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000556b @ 0x1000556b (89 bytes, 39 insns) */
void f_1000556b(void) {
  FTRACE(0x1000556bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000556b push ebp */
  push32((uint32_t)(EBP));
  /* 1000556c mov ebp, esp */
  EBP = (ESP);
  /* 1000556e push ebx */
  push32((uint32_t)(EBX));
  /* 1000556f push esi */
  push32((uint32_t)(ESI));
  /* 10005570 mov esi, 0x1000c454 */
  ESI = (0x1000c454u);
  /* 10005575 push edi */
  push32((uint32_t)(EDI));
  /* 10005576 push esi */
  push32((uint32_t)(ESI));
  /* 10005577 call dword ptr [0x10009088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009088))), 0x1000557du);
  /* 1000557d mov edi, dword ptr [0x10009008] */
  EDI = (r32((uint32_t)(0x10009008)));
  /* 10005583 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10005585 cmp dword ptr [0x1000c450], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1000c450))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000558b je 0x1000559b */
  if (C.zf) goto L_1000559b;
  /* 1000558d push esi */
  push32((uint32_t)(ESI));
  /* 1000558e call edi */
  call_ind((uint32_t)(EDI), 0x10005590u);
  /* 10005590 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10005592 call 0x100057aa */
  push32(0x10005597u); f_100057aa();
  /* 10005597 pop ecx */
  ECX = (pop32());
  /* 10005598 push 1 */
  push32((uint32_t)(0x1u));
  /* 1000559a pop ebx */
  EBX = (pop32());
L_1000559b:;
  /* 1000559b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1000559e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100055a1 call 0x100055c4 */
  push32(0x100055a6u); f_100055c4();
  /* 100055a6 pop ecx */
  ECX = (pop32());
  /* 100055a7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100055aa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100055ac pop ecx */
  ECX = (pop32());
  /* 100055ad je 0x100055b9 */
  if (C.zf) goto L_100055b9;
  /* 100055af push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100055b1 call 0x1000580b */
  push32(0x100055b6u); f_1000580b();
  /* 100055b6 pop ecx */
  ECX = (pop32());
  /* 100055b7 jmp 0x100055bc */
  goto L_100055bc;
L_100055b9:;
  /* 100055b9 push esi */
  push32((uint32_t)(ESI));
  /* 100055ba call edi */
  call_ind((uint32_t)(EDI), 0x100055bcu);
L_100055bc:;
  /* 100055bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100055bf pop edi */
  EDI = (pop32());
  /* 100055c0 pop esi */
  ESI = (pop32());
  /* 100055c1 pop ebx */
  EBX = (pop32());
  /* 100055c2 pop ebp */
  EBP = (pop32());
  /* 100055c3 ret  */
  ESPCHK(0x1000556bu, _esp0);
  ESP += 4; return;
}

/* FUN_100055c4 @ 0x100055c4 (105 bytes, 38 insns) */
void f_100055c4(void) {
  FTRACE(0x100055c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100055c4 push ebp */
  push32((uint32_t)(EBP));
  /* 100055c5 mov ebp, esp */
  EBP = (ESP);
  /* 100055c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100055ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100055cc jne 0x100055d0 */
  if (!C.zf) goto L_100055d0;
  /* 100055ce pop ebp */
  EBP = (pop32());
  /* 100055cf ret  */
  ESPCHK(0x100055c4u, _esp0);
  ESP += 4; return;
L_100055d0:;
  /* 100055d0 cmp dword ptr [0x1000c2ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1000c2ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100055d7 jne 0x100055eb */
  if (!C.zf) goto L_100055eb;
  /* 100055d9 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 100055dd cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100055e2 ja 0x1000561d */
  if ((!C.cf&&!C.zf)) goto L_1000561d;
  /* 100055e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100055e6 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 100055e8 pop eax */
  EAX = (pop32());
  /* 100055e9 pop ebp */
  EBP = (pop32());
  /* 100055ea ret  */
  ESPCHK(0x100055c4u, _esp0);
  ESP += 4; return;
L_100055eb:;
  /* 100055eb lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 100055ee and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 100055f2 push ecx */
  push32((uint32_t)(ECX));
  /* 100055f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 100055f5 push dword ptr [0x1000b8b4] */
  push32((uint32_t)(r32((uint32_t)(0x1000b8b4))));
  /* 100055fb push eax */
  push32((uint32_t)(EAX));
  /* 100055fc lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 100055ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10005601 push eax */
  push32((uint32_t)(EAX));
  /* 10005602 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10005607 push dword ptr [0x1000c2fc] */
  push32((uint32_t)(r32((uint32_t)(0x1000c2fc))));
  /* 1000560d call dword ptr [0x10009060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009060))), 0x10005613u);
  /* 10005613 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005615 je 0x1000561d */
  if (C.zf) goto L_1000561d;
  /* 10005617 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000561b je 0x1000562b */
  if (C.zf) goto L_1000562b;
L_1000561d:;
  /* 1000561d call 0x10006c01 */
  push32(0x10005622u); f_10006c01();
  /* 10005622 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10005628 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1000562b:;
  /* 1000562b pop ebp */
  EBP = (pop32());
  /* 1000562c ret  */
  ESPCHK(0x100055c4u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10005630 (104 bytes, 43 insns) */
void f_10005630(void) {
  FTRACE(0x10005630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005630 push ebx */
  push32((uint32_t)(EBX));
  /* 10005631 push esi */
  push32((uint32_t)(ESI));
  /* 10005632 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10005636 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10005638 jne 0x10005652 */
  if (!C.zf) goto L_10005652;
  /* 1000563a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1000563e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10005642 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10005644 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10005646 mov ebx, eax */
  EBX = (EAX);
  /* 10005648 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1000564c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1000564e mov edx, ebx */
  EDX = (EBX);
  /* 10005650 jmp 0x10005693 */
  goto L_10005693;
L_10005652:;
  /* 10005652 mov ecx, eax */
  ECX = (EAX);
  /* 10005654 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10005658 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1000565c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10005660:;
  /* 10005660 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10005662 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10005664 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10005666 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10005668 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1000566a jne 0x10005660 */
  if (!C.zf) goto L_10005660;
  /* 1000566c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1000566e mov esi, eax */
  ESI = (EAX);
  /* 10005670 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10005674 mov ecx, eax */
  ECX = (EAX);
  /* 10005676 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1000567a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1000567c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000567e jb 0x1000568e */
  if (C.cf) goto L_1000568e;
  /* 10005680 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005684 ja 0x1000568e */
  if ((!C.cf&&!C.zf)) goto L_1000568e;
  /* 10005686 jb 0x1000568f */
  if (C.cf) goto L_1000568f;
  /* 10005688 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000568c jbe 0x1000568f */
  if ((C.cf||C.zf)) goto L_1000568f;
L_1000568e:;
  /* 1000568e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1000568f:;
  /* 1000568f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10005691 mov eax, esi */
  EAX = (ESI);
L_10005693:;
  /* 10005693 pop esi */
  ESI = (pop32());
  /* 10005694 pop ebx */
  EBX = (pop32());
  /* 10005695 ret 0x10 */
  ESPCHK(0x10005630u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x100056a0 (117 bytes, 44 insns) */
void f_100056a0(void) {
  FTRACE(0x100056a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100056a0 push ebx */
  push32((uint32_t)(EBX));
  /* 100056a1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100056a5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100056a7 jne 0x100056c1 */
  if (!C.zf) goto L_100056c1;
  /* 100056a9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 100056ad mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 100056b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100056b3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100056b5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100056b9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100056bb mov eax, edx */
  EAX = (EDX);
  /* 100056bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100056bf jmp 0x10005711 */
  goto L_10005711;
L_100056c1:;
  /* 100056c1 mov ecx, eax */
  ECX = (EAX);
  /* 100056c3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 100056c7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 100056cb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_100056cf:;
  /* 100056cf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100056d1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 100056d3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 100056d5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 100056d7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100056d9 jne 0x100056cf */
  if (!C.zf) goto L_100056cf;
  /* 100056db div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100056dd mov ecx, eax */
  ECX = (EAX);
  /* 100056df mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100056e3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 100056e4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 100056e8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100056ea jb 0x100056fa */
  if (C.cf) goto L_100056fa;
  /* 100056ec cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100056f0 ja 0x100056fa */
  if ((!C.cf&&!C.zf)) goto L_100056fa;
  /* 100056f2 jb 0x10005702 */
  if (C.cf) goto L_10005702;
  /* 100056f4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100056f8 jbe 0x10005702 */
  if ((C.cf||C.zf)) goto L_10005702;
L_100056fa:;
  /* 100056fa sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100056fe sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10005702:;
  /* 10005702 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10005706 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000570a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1000570c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1000570e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10005711:;
  /* 10005711 pop ebx */
  EBX = (pop32());
  /* 10005712 ret 0x10 */
  ESPCHK(0x100056a0u, _esp0);
  ESP += 20; return;
}

/* FUN_10005715 @ 0x10005715 (41 bytes, 12 insns) */
void f_10005715(void) {
  FTRACE(0x10005715u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005715 push esi */
  push32((uint32_t)(ESI));
  /* 10005716 mov esi, dword ptr [0x1000908c] */
  ESI = (r32((uint32_t)(0x1000908c)));
  /* 1000571c push dword ptr [0x1000b424] */
  push32((uint32_t)(r32((uint32_t)(0x1000b424))));
  /* 10005722 call esi */
  call_ind((uint32_t)(ESI), 0x10005724u);
  /* 10005724 push dword ptr [0x1000b414] */
  push32((uint32_t)(r32((uint32_t)(0x1000b414))));
  /* 1000572a call esi */
  call_ind((uint32_t)(ESI), 0x1000572cu);
  /* 1000572c push dword ptr [0x1000b404] */
  push32((uint32_t)(r32((uint32_t)(0x1000b404))));
  /* 10005732 call esi */
  call_ind((uint32_t)(ESI), 0x10005734u);
  /* 10005734 push dword ptr [0x1000b3e4] */
  push32((uint32_t)(r32((uint32_t)(0x1000b3e4))));
  /* 1000573a call esi */
  call_ind((uint32_t)(ESI), 0x1000573cu);
  /* 1000573c pop esi */
  ESI = (pop32());
  /* 1000573d ret  */
  ESPCHK(0x10005715u, _esp0);
  ESP += 4; return;
}

/* FUN_1000573e @ 0x1000573e (108 bytes, 34 insns) */
void f_1000573e(void) {
  FTRACE(0x1000573eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000573e push esi */
  push32((uint32_t)(ESI));
  /* 1000573f push edi */
  push32((uint32_t)(EDI));
  /* 10005740 mov edi, dword ptr [0x10009050] */
  EDI = (r32((uint32_t)(0x10009050)));
  /* 10005746 mov esi, 0x1000b3e0 */
  ESI = (0x1000b3e0u);
L_1000574b:;
  /* 1000574b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1000574d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000574f je 0x1000577c */
  if (C.zf) goto L_1000577c;
  /* 10005751 cmp esi, 0x1000b424 */
  { uint32_t _a=(ESI),_b=(0x1000b424u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005757 je 0x1000577c */
  if (C.zf) goto L_1000577c;
  /* 10005759 cmp esi, 0x1000b414 */
  { uint32_t _a=(ESI),_b=(0x1000b414u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000575f je 0x1000577c */
  if (C.zf) goto L_1000577c;
  /* 10005761 cmp esi, 0x1000b404 */
  { uint32_t _a=(ESI),_b=(0x1000b404u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005767 je 0x1000577c */
  if (C.zf) goto L_1000577c;
  /* 10005769 cmp esi, 0x1000b3e4 */
  { uint32_t _a=(ESI),_b=(0x1000b3e4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000576f je 0x1000577c */
  if (C.zf) goto L_1000577c;
  /* 10005771 push eax */
  push32((uint32_t)(EAX));
  /* 10005772 call edi */
  call_ind((uint32_t)(EDI), 0x10005774u);
  /* 10005774 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10005776 call 0x100058ad */
  push32(0x1000577bu); f_100058ad();
  /* 1000577b pop ecx */
  ECX = (pop32());
L_1000577c:;
  /* 1000577c add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000577f cmp esi, 0x1000b4a0 */
  { uint32_t _a=(ESI),_b=(0x1000b4a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005785 jl 0x1000574b */
  if ((C.sf!=C.of)) goto L_1000574b;
  /* 10005787 push dword ptr [0x1000b404] */
  push32((uint32_t)(r32((uint32_t)(0x1000b404))));
  /* 1000578d call edi */
  call_ind((uint32_t)(EDI), 0x1000578fu);
  /* 1000578f push dword ptr [0x1000b414] */
  push32((uint32_t)(r32((uint32_t)(0x1000b414))));
  /* 10005795 call edi */
  call_ind((uint32_t)(EDI), 0x10005797u);
  /* 10005797 push dword ptr [0x1000b424] */
  push32((uint32_t)(r32((uint32_t)(0x1000b424))));
  /* 1000579d call edi */
  call_ind((uint32_t)(EDI), 0x1000579fu);
  /* 1000579f push dword ptr [0x1000b3e4] */
  push32((uint32_t)(r32((uint32_t)(0x1000b3e4))));
  /* 100057a5 call edi */
  call_ind((uint32_t)(EDI), 0x100057a7u);
  /* 100057a7 pop edi */
  EDI = (pop32());
  /* 100057a8 pop esi */
  ESI = (pop32());
  /* 100057a9 ret  */
  ESPCHK(0x1000573eu, _esp0);
  ESP += 4; return;
}

/* FUN_100057aa @ 0x100057aa (97 bytes, 37 insns) */
void f_100057aa(void) {
  FTRACE(0x100057aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100057aa push ebp */
  push32((uint32_t)(EBP));
  /* 100057ab mov ebp, esp */
  EBP = (ESP);
  /* 100057ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100057b0 push esi */
  push32((uint32_t)(ESI));
  /* 100057b1 cmp dword ptr [eax*4 + 0x1000b3e0], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1000b3e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100057b9 lea esi, [eax*4 + 0x1000b3e0] */
  ESI = ((uint32_t)(EAX*4 + 0x1000b3e0));
  /* 100057c0 jne 0x10005800 */
  if (!C.zf) goto L_10005800;
  /* 100057c2 push edi */
  push32((uint32_t)(EDI));
  /* 100057c3 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 100057c5 call 0x100058f5 */
  push32(0x100057cau); f_100058f5();
  /* 100057ca mov edi, eax */
  EDI = (EAX);
  /* 100057cc pop ecx */
  ECX = (pop32());
  /* 100057cd test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100057cf jne 0x100057d9 */
  if (!C.zf) goto L_100057d9;
  /* 100057d1 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100057d3 call 0x10003bc8 */
  push32(0x100057d8u); f_10003bc8();
  /* 100057d8 pop ecx */
  ECX = (pop32());
L_100057d9:;
  /* 100057d9 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100057db call 0x100057aa */
  push32(0x100057e0u); f_100057aa();
  /* 100057e0 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100057e3 pop ecx */
  ECX = (pop32());
  /* 100057e4 push edi */
  push32((uint32_t)(EDI));
  /* 100057e5 jne 0x100057f1 */
  if (!C.zf) goto L_100057f1;
  /* 100057e7 call dword ptr [0x1000908c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000908c))), 0x100057edu);
  /* 100057ed mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 100057ef jmp 0x100057f7 */
  goto L_100057f7;
L_100057f1:;
  /* 100057f1 call 0x100058ad */
  push32(0x100057f6u); f_100058ad();
  /* 100057f6 pop ecx */
  ECX = (pop32());
L_100057f7:;
  /* 100057f7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100057f9 call 0x1000580b */
  push32(0x100057feu); f_1000580b();
  /* 100057fe pop ecx */
  ECX = (pop32());
  /* 100057ff pop edi */
  EDI = (pop32());
L_10005800:;
  /* 10005800 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10005802 call dword ptr [0x10009000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009000))), 0x10005808u);
  /* 10005808 pop esi */
  ESI = (pop32());
  /* 10005809 pop ebp */
  EBP = (pop32());
  /* 1000580a ret  */
  ESPCHK(0x100057aau, _esp0);
  ESP += 4; return;
}

/* FUN_1000580b @ 0x1000580b (21 bytes, 7 insns) */
void f_1000580b(void) {
  FTRACE(0x1000580bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000580b push ebp */
  push32((uint32_t)(EBP));
  /* 1000580c mov ebp, esp */
  EBP = (ESP);
  /* 1000580e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10005811 push dword ptr [eax*4 + 0x1000b3e0] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x1000b3e0))));
  /* 10005818 call dword ptr [0x1000900c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000900c))), 0x1000581eu);
  /* 1000581e pop ebp */
  EBP = (pop32());
  /* 1000581f ret  */
  ESPCHK(0x1000580bu, _esp0);
  ESP += 4; return;
}

/* FUN_10005820 @ 0x10005820 (141 bytes, 56 insns) */
void f_10005820(void) {
  FTRACE(0x10005820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005820 push ebx */
  push32((uint32_t)(EBX));
  /* 10005821 push esi */
  push32((uint32_t)(ESI));
  /* 10005822 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10005826 push edi */
  push32((uint32_t)(EDI));
  /* 10005827 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1000582c cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000582f mov ebx, esi */
  EBX = (ESI);
  /* 10005831 ja 0x10005840 */
  if ((!C.cf&&!C.zf)) goto L_10005840;
  /* 10005833 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10005835 jne 0x1000583a */
  if (!C.zf) goto L_1000583a;
  /* 10005837 push 1 */
  push32((uint32_t)(0x1u));
  /* 10005839 pop esi */
  ESI = (pop32());
L_1000583a:;
  /* 1000583a add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000583d and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_10005840:;
  /* 10005840 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10005842 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005845 ja 0x10005881 */
  if ((!C.cf&&!C.zf)) goto L_10005881;
  /* 10005847 cmp ebx, dword ptr [0x1000b630] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1000b630))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000584d ja 0x1000586c */
  if ((!C.cf&&!C.zf)) goto L_1000586c;
  /* 1000584f push 9 */
  push32((uint32_t)(0x9u));
  /* 10005851 call 0x100057aa */
  push32(0x10005856u); f_100057aa();
  /* 10005856 push ebx */
  push32((uint32_t)(EBX));
  /* 10005857 call 0x10006549 */
  push32(0x1000585cu); f_10006549();
  /* 1000585c push 9 */
  push32((uint32_t)(0x9u));
  /* 1000585e mov edi, eax */
  EDI = (EAX);
  /* 10005860 call 0x1000580b */
  push32(0x10005865u); f_1000580b();
  /* 10005865 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005868 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1000586a jne 0x10005897 */
  if (!C.zf) goto L_10005897;
L_1000586c:;
  /* 1000586c push esi */
  push32((uint32_t)(ESI));
  /* 1000586d push 8 */
  push32((uint32_t)(0x8u));
  /* 1000586f push dword ptr [0x1000d6c4] */
  push32((uint32_t)(r32((uint32_t)(0x1000d6c4))));
  /* 10005875 call dword ptr [0x10009090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009090))), 0x1000587bu);
  /* 1000587b mov edi, eax */
  EDI = (EAX);
  /* 1000587d test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1000587f jne 0x100058a3 */
  if (!C.zf) goto L_100058a3;
L_10005881:;
  /* 10005881 cmp dword ptr [0x1000c308], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1000c308))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005888 je 0x100058a3 */
  if (C.zf) goto L_100058a3;
  /* 1000588a push esi */
  push32((uint32_t)(ESI));
  /* 1000588b call 0x10006f78 */
  push32(0x10005890u); f_10006f78();
  /* 10005890 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005892 pop ecx */
  ECX = (pop32());
  /* 10005893 je 0x100058a9 */
  if (C.zf) goto L_100058a9;
  /* 10005895 jmp 0x10005840 */
  goto L_10005840;
L_10005897:;
  /* 10005897 push ebx */
  push32((uint32_t)(EBX));
  /* 10005898 push 0 */
  push32((uint32_t)(0x0u));
  /* 1000589a push edi */
  push32((uint32_t)(EDI));
  /* 1000589b call 0x10006f20 */
  push32(0x100058a0u); f_10006f20();
  /* 100058a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100058a3:;
  /* 100058a3 mov eax, edi */
  EAX = (EDI);
L_100058a5:;
  /* 100058a5 pop edi */
  EDI = (pop32());
  /* 100058a6 pop esi */
  ESI = (pop32());
  /* 100058a7 pop ebx */
  EBX = (pop32());
  /* 100058a8 ret  */
  ESPCHK(0x10005820u, _esp0);
  ESP += 4; return;
L_100058a9:;
  /* 100058a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100058ab jmp 0x100058a5 */
  goto L_100058a5;
}

/* FUN_100058ad @ 0x100058ad (72 bytes, 29 insns) */
void f_100058ad(void) {
  FTRACE(0x100058adu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100058ad push esi */
  push32((uint32_t)(ESI));
  /* 100058ae mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100058b2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100058b4 je 0x100058f3 */
  if (C.zf) goto L_100058f3;
  /* 100058b6 push 9 */
  push32((uint32_t)(0x9u));
  /* 100058b8 call 0x100057aa */
  push32(0x100058bdu); f_100057aa();
  /* 100058bd push esi */
  push32((uint32_t)(ESI));
  /* 100058be call 0x100061f3 */
  push32(0x100058c3u); f_100061f3();
  /* 100058c3 pop ecx */
  ECX = (pop32());
  /* 100058c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100058c6 pop ecx */
  ECX = (pop32());
  /* 100058c7 je 0x100058dc */
  if (C.zf) goto L_100058dc;
  /* 100058c9 push esi */
  push32((uint32_t)(ESI));
  /* 100058ca push eax */
  push32((uint32_t)(EAX));
  /* 100058cb call 0x1000621e */
  push32(0x100058d0u); f_1000621e();
  /* 100058d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 100058d2 call 0x1000580b */
  push32(0x100058d7u); f_1000580b();
  /* 100058d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100058da pop esi */
  ESI = (pop32());
  /* 100058db ret  */
  ESPCHK(0x100058adu, _esp0);
  ESP += 4; return;
L_100058dc:;
  /* 100058dc push 9 */
  push32((uint32_t)(0x9u));
  /* 100058de call 0x1000580b */
  push32(0x100058e3u); f_1000580b();
  /* 100058e3 pop ecx */
  ECX = (pop32());
  /* 100058e4 push esi */
  push32((uint32_t)(ESI));
  /* 100058e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100058e7 push dword ptr [0x1000d6c4] */
  push32((uint32_t)(r32((uint32_t)(0x1000d6c4))));
  /* 100058ed call dword ptr [0x10009078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009078))), 0x100058f3u);
L_100058f3:;
  /* 100058f3 pop esi */
  ESI = (pop32());
  /* 100058f4 ret  */
  ESPCHK(0x100058adu, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x100058f5 (18 bytes, 6 insns) */
void f_100058f5(void) {
  FTRACE(0x100058f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100058f5 push dword ptr [0x1000c308] */
  push32((uint32_t)(r32((uint32_t)(0x1000c308))));
  /* 100058fb push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 100058ff call 0x10005907 */
  push32(0x10005904u); f_10005907();
  /* 10005904 pop ecx */
  ECX = (pop32());
  /* 10005905 pop ecx */
  ECX = (pop32());
  /* 10005906 ret  */
  ESPCHK(0x100058f5u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10005907 (44 bytes, 16 insns) */
void f_10005907(void) {
  FTRACE(0x10005907u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005907 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000590c ja 0x10005930 */
  if ((!C.cf&&!C.zf)) goto L_10005930;
L_1000590e:;
  /* 1000590e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10005912 call 0x10005933 */
  push32(0x10005917u); f_10005933();
  /* 10005917 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10005919 pop ecx */
  ECX = (pop32());
  /* 1000591a jne 0x10005932 */
  if (!C.zf) goto L_10005932;
  /* 1000591c cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005920 je 0x10005932 */
  if (C.zf) goto L_10005932;
  /* 10005922 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10005926 call 0x10006f78 */
  push32(0x1000592bu); f_10006f78();
  /* 1000592b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000592d pop ecx */
  ECX = (pop32());
  /* 1000592e jne 0x1000590e */
  if (!C.zf) goto L_1000590e;
L_10005930:;
  /* 10005930 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10005932:;
  /* 10005932 ret  */
  ESPCHK(0x10005907u, _esp0);
  ESP += 4; return;
}

/* FUN_10005933 @ 0x10005933 (78 bytes, 30 insns) */
void f_10005933(void) {
  FTRACE(0x10005933u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005933 push esi */
  push32((uint32_t)(ESI));
  /* 10005934 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10005938 cmp esi, dword ptr [0x1000b630] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1000b630))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000593e push edi */
  push32((uint32_t)(EDI));
  /* 1000593f ja 0x10005962 */
  if ((!C.cf&&!C.zf)) goto L_10005962;
  /* 10005941 push 9 */
  push32((uint32_t)(0x9u));
  /* 10005943 call 0x100057aa */
  push32(0x10005948u); f_100057aa();
  /* 10005948 push esi */
  push32((uint32_t)(ESI));
  /* 10005949 call 0x10006549 */
  push32(0x1000594eu); f_10006549();
  /* 1000594e push 9 */
  push32((uint32_t)(0x9u));
  /* 10005950 mov edi, eax */
  EDI = (EAX);
  /* 10005952 call 0x1000580b */
  push32(0x10005957u); f_1000580b();
  /* 10005957 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000595a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1000595c je 0x10005962 */
  if (C.zf) goto L_10005962;
  /* 1000595e mov eax, edi */
  EAX = (EDI);
  /* 10005960 jmp 0x1000597e */
  goto L_1000597e;
L_10005962:;
  /* 10005962 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10005964 jne 0x10005969 */
  if (!C.zf) goto L_10005969;
  /* 10005966 push 1 */
  push32((uint32_t)(0x1u));
  /* 10005968 pop esi */
  ESI = (pop32());
L_10005969:;
  /* 10005969 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000596c and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1000596f push esi */
  push32((uint32_t)(ESI));
  /* 10005970 push 0 */
  push32((uint32_t)(0x0u));
  /* 10005972 push dword ptr [0x1000d6c4] */
  push32((uint32_t)(r32((uint32_t)(0x1000d6c4))));
  /* 10005978 call dword ptr [0x10009090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009090))), 0x1000597eu);
L_1000597e:;
  /* 1000597e pop edi */
  EDI = (pop32());
  /* 1000597f pop esi */
  ESI = (pop32());
  /* 10005980 ret  */
  ESPCHK(0x10005933u, _esp0);
  ESP += 4; return;
}

/* FUN_10005990 @ 0x10005990 (7 bytes, 3 insns) */
void f_10005990(void) {
  FTRACE(0x10005990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005990 push edi */
  push32((uint32_t)(EDI));
  /* 10005991 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10005995 jmp 0x10005a01 */
  jmp_ind(0x10005a01u); return;
}

/* FUN_100059a0 @ 0x100059a0 (224 bytes, 84 insns) */
void f_100059a0(void) {
  FTRACE(0x100059a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100059a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100059a4 push edi */
  push32((uint32_t)(EDI));
  /* 100059a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100059ab je 0x100059bc */
  if (C.zf) goto L_100059bc;
L_100059ad:;
  /* 100059ad mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 100059af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100059b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100059b2 je 0x100059ef */
  if (C.zf) goto L_100059ef;
  /* 100059b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100059ba jne 0x100059ad */
  if (!C.zf) goto L_100059ad;
L_100059bc:;
  /* 100059bc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 100059be mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 100059c3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100059c5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100059c8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 100059ca add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100059cd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 100059d2 je 0x100059bc */
  if (C.zf) goto L_100059bc;
  /* 100059d4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 100059d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100059d9 je 0x100059fe */
  if (C.zf) goto L_100059fe;
  /* 100059db test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 100059dd je 0x100059f9 */
  if (C.zf) goto L_100059f9;
  /* 100059df test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 100059e4 je 0x100059f4 */
  if (C.zf) goto L_100059f4;
  /* 100059e6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 100059eb je 0x100059ef */
  if (C.zf) goto L_100059ef;
  /* 100059ed jmp 0x100059bc */
  goto L_100059bc;
L_100059ef:;
  /* 100059ef lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 100059f2 jmp 0x10005a01 */
  goto L_10005a01;
L_100059f4:;
  /* 100059f4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 100059f7 jmp 0x10005a01 */
  goto L_10005a01;
L_100059f9:;
  /* 100059f9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 100059fc jmp 0x10005a01 */
  goto L_10005a01;
L_100059fe:;
  /* 100059fe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10005a01:;
  /* 10005a01 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10005a05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10005a0b je 0x10005a26 */
  if (C.zf) goto L_10005a26;
L_10005a0d:;
  /* 10005a0d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10005a0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10005a10 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10005a12 je 0x10005a78 */
  if (C.zf) goto L_10005a78;
  /* 10005a14 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10005a16 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10005a17 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10005a1d jne 0x10005a0d */
  if (!C.zf) goto L_10005a0d;
  /* 10005a1f jmp 0x10005a26 */
  goto L_10005a26;
L_10005a21:;
  /* 10005a21 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10005a23 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10005a26:;
  /* 10005a26 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10005a2b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10005a2d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10005a2f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10005a32 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10005a34 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10005a36 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10005a39 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10005a3e je 0x10005a21 */
  if (C.zf) goto L_10005a21;
  /* 10005a40 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10005a42 je 0x10005a78 */
  if (C.zf) goto L_10005a78;
  /* 10005a44 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10005a46 je 0x10005a6f */
  if (C.zf) goto L_10005a6f;
  /* 10005a48 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10005a4e je 0x10005a62 */
  if (C.zf) goto L_10005a62;
  /* 10005a50 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10005a56 je 0x10005a5a */
  if (C.zf) goto L_10005a5a;
  /* 10005a58 jmp 0x10005a21 */
  goto L_10005a21;
L_10005a5a:;
  /* 10005a5a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10005a5c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10005a60 pop edi */
  EDI = (pop32());
  /* 10005a61 ret  */
  ESPCHK(0x100059a0u, _esp0);
  ESP += 4; return;
L_10005a62:;
  /* 10005a62 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10005a65 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10005a69 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10005a6d pop edi */
  EDI = (pop32());
  /* 10005a6e ret  */
  ESPCHK(0x100059a0u, _esp0);
  ESP += 4; return;
L_10005a6f:;
  /* 10005a6f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10005a72 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10005a76 pop edi */
  EDI = (pop32());
  /* 10005a77 ret  */
  ESPCHK(0x100059a0u, _esp0);
  ESP += 4; return;
L_10005a78:;
  /* 10005a78 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10005a7a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10005a7e pop edi */
  EDI = (pop32());
  /* 10005a7f ret  */
  ESPCHK(0x100059a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a80 @ 0x10005a80 (429 bytes, 143 insns) */
void f_10005a80(void) {
  FTRACE(0x10005a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10005a81 mov ebp, esp */
  EBP = (ESP);
  /* 10005a83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10005a86 push ebx */
  push32((uint32_t)(EBX));
  /* 10005a87 push esi */
  push32((uint32_t)(ESI));
  /* 10005a88 push edi */
  push32((uint32_t)(EDI));
  /* 10005a89 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10005a8b call 0x100057aa */
  push32(0x10005a90u); f_100057aa();
  /* 10005a90 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10005a93 call 0x10005c2d */
  push32(0x10005a98u); f_10005c2d();
  /* 10005a98 mov ebx, eax */
  EBX = (EAX);
  /* 10005a9a pop ecx */
  ECX = (pop32());
  /* 10005a9b cmp ebx, dword ptr [0x1000c470] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1000c470))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005aa1 pop ecx */
  ECX = (pop32());
  /* 10005aa2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10005aa5 jne 0x10005aae */
  if (!C.zf) goto L_10005aae;
L_10005aa7:;
  /* 10005aa7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10005aa9 jmp 0x10005c1e */
  goto L_10005c1e;
L_10005aae:;
  /* 10005aae test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10005ab0 je 0x10005c0c */
  if (C.zf) goto L_10005c0c;
  /* 10005ab6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10005ab8 mov eax, 0x1000b538 */
  EAX = (0x1000b538u);
L_10005abd:;
  /* 10005abd cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005abf je 0x10005b35 */
  if (C.zf) goto L_10005b35;
  /* 10005ac1 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10005ac4 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10005ac5 cmp eax, 0x1000b628 */
  { uint32_t _a=(EAX),_b=(0x1000b628u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005aca jl 0x10005abd */
  if ((C.sf!=C.of)) goto L_10005abd;
  /* 10005acc lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10005acf push eax */
  push32((uint32_t)(EAX));
  /* 10005ad0 push ebx */
  push32((uint32_t)(EBX));
  /* 10005ad1 call dword ptr [0x10009094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009094))), 0x10005ad7u);
  /* 10005ad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10005ad9 pop esi */
  ESI = (pop32());
  /* 10005ada cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005adc jne 0x10005c03 */
  if (!C.zf) goto L_10005c03;
  /* 10005ae2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10005ae4 and dword ptr [0x1000c6a4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1000c6a4)))&(0x0u); w32((uint32_t)(0x1000c6a4), (_r)); fl_logic(_r,32); }
  /* 10005aeb pop ecx */
  ECX = (pop32());
  /* 10005aec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10005aee mov edi, 0x1000c5a0 */
  EDI = (0x1000c5a0u);
  /* 10005af3 cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005af6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10005af8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10005af9 mov dword ptr [0x1000c470], ebx */
  w32((uint32_t)(0x1000c470), (EBX));
  /* 10005aff jbe 0x10005bf0 */
  if ((C.cf||C.zf)) goto L_10005bf0;
  /* 10005b05 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10005b09 je 0x10005bcb */
  if (C.zf) goto L_10005bcb;
  /* 10005b0f lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_10005b12:;
  /* 10005b12 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10005b14 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10005b16 je 0x10005bcb */
  if (C.zf) goto L_10005bcb;
  /* 10005b1c movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 10005b20 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_10005b23:;
  /* 10005b23 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005b25 ja 0x10005bbf */
  if ((!C.cf&&!C.zf)) goto L_10005bbf;
  /* 10005b2b or byte ptr [eax + 0x1000c5a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1000c5a1)))|(0x4u); w8((uint32_t)(EAX + 0x1000c5a1), (_r)); fl_logic(_r,8); }
  /* 10005b32 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10005b33 jmp 0x10005b23 */
  goto L_10005b23;
L_10005b35:;
  /* 10005b35 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10005b39 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10005b3b pop ecx */
  ECX = (pop32());
  /* 10005b3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10005b3e mov edi, 0x1000c5a0 */
  EDI = (0x1000c5a0u);
  /* 10005b43 lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 10005b46 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10005b48 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10005b4b stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10005b4c lea ebx, [esi + 0x1000b548] */
  EBX = ((uint32_t)(ESI + 0x1000b548));
L_10005b52:;
  /* 10005b52 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10005b55 mov ecx, ebx */
  ECX = (EBX);
  /* 10005b57 je 0x10005b85 */
  if (C.zf) goto L_10005b85;
L_10005b59:;
  /* 10005b59 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10005b5c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10005b5e je 0x10005b85 */
  if (C.zf) goto L_10005b85;
  /* 10005b60 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 10005b63 movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10005b66 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005b68 ja 0x10005b7e */
  if ((!C.cf&&!C.zf)) goto L_10005b7e;
  /* 10005b6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10005b6d mov dl, byte ptr [edx + 0x1000b530] */
  DL = (r8((uint32_t)(EDX + 0x1000b530)));
L_10005b73:;
  /* 10005b73 or byte ptr [eax + 0x1000c5a1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1000c5a1)))|(DL); w8((uint32_t)(EAX + 0x1000c5a1), (_r)); fl_logic(_r,8); }
  /* 10005b79 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10005b7a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005b7c jbe 0x10005b73 */
  if ((C.cf||C.zf)) goto L_10005b73;
L_10005b7e:;
  /* 10005b7e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10005b7f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10005b80 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10005b83 jne 0x10005b59 */
  if (!C.zf) goto L_10005b59;
L_10005b85:;
  /* 10005b85 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10005b88 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10005b8b cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005b8f jb 0x10005b52 */
  if (C.cf) goto L_10005b52;
  /* 10005b91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10005b94 mov dword ptr [0x1000c48c], 1 */
  w32((uint32_t)(0x1000c48c), (0x1u));
  /* 10005b9e push eax */
  push32((uint32_t)(EAX));
  /* 10005b9f mov dword ptr [0x1000c470], eax */
  w32((uint32_t)(0x1000c470), (EAX));
  /* 10005ba4 call 0x10005c77 */
  push32(0x10005ba9u); f_10005c77();
  /* 10005ba9 lea esi, [esi + 0x1000b53c] */
  ESI = ((uint32_t)(ESI + 0x1000b53c));
  /* 10005baf mov edi, 0x1000c480 */
  EDI = (0x1000c480u);
  /* 10005bb4 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10005bb5 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10005bb6 pop ecx */
  ECX = (pop32());
  /* 10005bb7 mov dword ptr [0x1000c6a4], eax */
  w32((uint32_t)(0x1000c6a4), (EAX));
  /* 10005bbc movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10005bbd jmp 0x10005c11 */
  goto L_10005c11;
L_10005bbf:;
  /* 10005bbf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10005bc0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10005bc1 cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10005bc5 jne 0x10005b12 */
  if (!C.zf) goto L_10005b12;
L_10005bcb:;
  /* 10005bcb mov eax, esi */
  EAX = (ESI);
L_10005bcd:;
  /* 10005bcd or byte ptr [eax + 0x1000c5a1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1000c5a1)))|(0x8u); w8((uint32_t)(EAX + 0x1000c5a1), (_r)); fl_logic(_r,8); }
  /* 10005bd4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10005bd5 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005bda jb 0x10005bcd */
  if (C.cf) goto L_10005bcd;
  /* 10005bdc push ebx */
  push32((uint32_t)(EBX));
  /* 10005bdd call 0x10005c77 */
  push32(0x10005be2u); f_10005c77();
  /* 10005be2 pop ecx */
  ECX = (pop32());
  /* 10005be3 mov dword ptr [0x1000c6a4], eax */
  w32((uint32_t)(0x1000c6a4), (EAX));
  /* 10005be8 mov dword ptr [0x1000c48c], esi */
  w32((uint32_t)(0x1000c48c), (ESI));
  /* 10005bee jmp 0x10005bf7 */
  goto L_10005bf7;
L_10005bf0:;
  /* 10005bf0 and dword ptr [0x1000c48c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1000c48c)))&(0x0u); w32((uint32_t)(0x1000c48c), (_r)); fl_logic(_r,32); }
L_10005bf7:;
  /* 10005bf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10005bf9 mov edi, 0x1000c480 */
  EDI = (0x1000c480u);
  /* 10005bfe stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10005bff stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10005c00 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10005c01 jmp 0x10005c11 */
  goto L_10005c11;
L_10005c03:;
  /* 10005c03 cmp dword ptr [0x1000c2c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1000c2c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005c0a je 0x10005c1b */
  if (C.zf) goto L_10005c1b;
L_10005c0c:;
  /* 10005c0c call 0x10005caa */
  push32(0x10005c11u); f_10005caa();
L_10005c11:;
  /* 10005c11 call 0x10005cd3 */
  push32(0x10005c16u); f_10005cd3();
  /* 10005c16 jmp 0x10005aa7 */
  goto L_10005aa7;
L_10005c1b:;
  /* 10005c1b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10005c1e:;
  /* 10005c1e push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10005c20 call 0x1000580b */
  push32(0x10005c25u); f_1000580b();
  /* 10005c25 pop ecx */
  ECX = (pop32());
  /* 10005c26 mov eax, esi */
  EAX = (ESI);
  /* 10005c28 pop edi */
  EDI = (pop32());
  /* 10005c29 pop esi */
  ESI = (pop32());
  /* 10005c2a pop ebx */
  EBX = (pop32());
  /* 10005c2b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10005c2c ret  */
  ESPCHK(0x10005a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c2d @ 0x10005c2d (74 bytes, 15 insns) */
void f_10005c2d(void) {
  FTRACE(0x10005c2du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005c2d mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10005c31 and dword ptr [0x1000c2c8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1000c2c8)))&(0x0u); w32((uint32_t)(0x1000c2c8), (_r)); fl_logic(_r,32); }
  /* 10005c38 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005c3b jne 0x10005c4d */
  if (!C.zf) goto L_10005c4d;
  /* 10005c3d mov dword ptr [0x1000c2c8], 1 */
  w32((uint32_t)(0x1000c2c8), (0x1u));
  /* 10005c47 jmp dword ptr [0x1000909c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1000909c)))); return;
L_10005c4d:;
  /* 10005c4d cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005c50 jne 0x10005c62 */
  if (!C.zf) goto L_10005c62;
  /* 10005c52 mov dword ptr [0x1000c2c8], 1 */
  w32((uint32_t)(0x1000c2c8), (0x1u));
  /* 10005c5c jmp dword ptr [0x10009098] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10009098)))); return;
L_10005c62:;
  /* 10005c62 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005c65 jne 0x10005c76 */
  if (!C.zf) goto L_10005c76;
  /* 10005c67 mov eax, dword ptr [0x1000c2fc] */
  EAX = (r32((uint32_t)(0x1000c2fc)));
  /* 10005c6c mov dword ptr [0x1000c2c8], 1 */
  w32((uint32_t)(0x1000c2c8), (0x1u));
L_10005c76:;
  /* 10005c76 ret  */
  ESPCHK(0x10005c2du, _esp0);
  ESP += 4; return;
}

/* FUN_10005c77 @ 0x10005c77 (51 bytes, 19 insns) */
void f_10005c77(void) {
  FTRACE(0x10005c77u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005c77 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10005c7b sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10005c80 je 0x10005ca4 */
  if (C.zf) goto L_10005ca4;
  /* 10005c82 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10005c85 je 0x10005c9e */
  if (C.zf) goto L_10005c9e;
  /* 10005c87 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10005c8a je 0x10005c98 */
  if (C.zf) goto L_10005c98;
  /* 10005c8c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10005c8d je 0x10005c92 */
  if (C.zf) goto L_10005c92;
  /* 10005c8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10005c91 ret  */
  ESPCHK(0x10005c77u, _esp0);
  ESP += 4; return;
L_10005c92:;
  /* 10005c92 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10005c97 ret  */
  ESPCHK(0x10005c77u, _esp0);
  ESP += 4; return;
L_10005c98:;
  /* 10005c98 mov eax, 0x412 */
  EAX = (0x412u);
  /* 10005c9d ret  */
  ESPCHK(0x10005c77u, _esp0);
  ESP += 4; return;
L_10005c9e:;
  /* 10005c9e mov eax, 0x804 */
  EAX = (0x804u);
  /* 10005ca3 ret  */
  ESPCHK(0x10005c77u, _esp0);
  ESP += 4; return;
L_10005ca4:;
  /* 10005ca4 mov eax, 0x411 */
  EAX = (0x411u);
  /* 10005ca9 ret  */
  ESPCHK(0x10005c77u, _esp0);
  ESP += 4; return;
}

/* FUN_10005caa @ 0x10005caa (41 bytes, 17 insns) */
void f_10005caa(void) {
  FTRACE(0x10005caau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005caa push edi */
  push32((uint32_t)(EDI));
  /* 10005cab push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10005cad pop ecx */
  ECX = (pop32());
  /* 10005cae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10005cb0 mov edi, 0x1000c5a0 */
  EDI = (0x1000c5a0u);
  /* 10005cb5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10005cb7 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10005cb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10005cba mov edi, 0x1000c480 */
  EDI = (0x1000c480u);
  /* 10005cbf mov dword ptr [0x1000c470], eax */
  w32((uint32_t)(0x1000c470), (EAX));
  /* 10005cc4 mov dword ptr [0x1000c48c], eax */
  w32((uint32_t)(0x1000c48c), (EAX));
  /* 10005cc9 mov dword ptr [0x1000c6a4], eax */
  w32((uint32_t)(0x1000c6a4), (EAX));
  /* 10005cce stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10005ccf stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10005cd0 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10005cd1 pop edi */
  EDI = (pop32());
  /* 10005cd2 ret  */
  ESPCHK(0x10005caau, _esp0);
  ESP += 4; return;
}

/* FUN_10005cd3 @ 0x10005cd3 (389 bytes, 124 insns) */
void f_10005cd3(void) {
  FTRACE(0x10005cd3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005cd3 push ebp */
  push32((uint32_t)(EBP));
  /* 10005cd4 mov ebp, esp */
  EBP = (ESP);
  /* 10005cd6 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10005cdc lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10005cdf push esi */
  push32((uint32_t)(ESI));
  /* 10005ce0 push eax */
  push32((uint32_t)(EAX));
  /* 10005ce1 push dword ptr [0x1000c470] */
  push32((uint32_t)(r32((uint32_t)(0x1000c470))));
  /* 10005ce7 call dword ptr [0x10009094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009094))), 0x10005cedu);
  /* 10005ced cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005cf0 jne 0x10005e0c */
  if (!C.zf) goto L_10005e0c;
  /* 10005cf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10005cf8 mov esi, 0x100 */
  ESI = (0x100u);
L_10005cfd:;
  /* 10005cfd mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 10005d04 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10005d05 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005d07 jb 0x10005cfd */
  if (C.cf) goto L_10005cfd;
  /* 10005d09 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 10005d0c mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 10005d13 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10005d15 je 0x10005d4e */
  if (C.zf) goto L_10005d4e;
  /* 10005d17 push ebx */
  push32((uint32_t)(EBX));
  /* 10005d18 push edi */
  push32((uint32_t)(EDI));
  /* 10005d19 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_10005d1c:;
  /* 10005d1c movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 10005d1f movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10005d22 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005d24 ja 0x10005d43 */
  if ((!C.cf&&!C.zf)) goto L_10005d43;
  /* 10005d26 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10005d28 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 10005d2f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10005d30 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 10005d35 mov ebx, ecx */
  EBX = (ECX);
  /* 10005d37 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10005d3a rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10005d3c mov ecx, ebx */
  ECX = (EBX);
  /* 10005d3e and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10005d41 rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_10005d43:;
  /* 10005d43 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10005d44 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10005d45 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 10005d48 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10005d4a jne 0x10005d1c */
  if (!C.zf) goto L_10005d1c;
  /* 10005d4c pop edi */
  EDI = (pop32());
  /* 10005d4d pop ebx */
  EBX = (pop32());
L_10005d4e:;
  /* 10005d4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10005d50 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 10005d56 push dword ptr [0x1000c6a4] */
  push32((uint32_t)(r32((uint32_t)(0x1000c6a4))));
  /* 10005d5c push dword ptr [0x1000c470] */
  push32((uint32_t)(r32((uint32_t)(0x1000c470))));
  /* 10005d62 push eax */
  push32((uint32_t)(EAX));
  /* 10005d63 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10005d69 push esi */
  push32((uint32_t)(ESI));
  /* 10005d6a push eax */
  push32((uint32_t)(EAX));
  /* 10005d6b push 1 */
  push32((uint32_t)(0x1u));
  /* 10005d6d call 0x100071e2 */
  push32(0x10005d72u); f_100071e2();
  /* 10005d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10005d74 lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 10005d7a push dword ptr [0x1000c470] */
  push32((uint32_t)(r32((uint32_t)(0x1000c470))));
  /* 10005d80 push esi */
  push32((uint32_t)(ESI));
  /* 10005d81 push eax */
  push32((uint32_t)(EAX));
  /* 10005d82 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10005d88 push esi */
  push32((uint32_t)(ESI));
  /* 10005d89 push eax */
  push32((uint32_t)(EAX));
  /* 10005d8a push esi */
  push32((uint32_t)(ESI));
  /* 10005d8b push dword ptr [0x1000c6a4] */
  push32((uint32_t)(r32((uint32_t)(0x1000c6a4))));
  /* 10005d91 call 0x10006f93 */
  push32(0x10005d96u); f_10006f93();
  /* 10005d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10005d98 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 10005d9e push dword ptr [0x1000c470] */
  push32((uint32_t)(r32((uint32_t)(0x1000c470))));
  /* 10005da4 push esi */
  push32((uint32_t)(ESI));
  /* 10005da5 push eax */
  push32((uint32_t)(EAX));
  /* 10005da6 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10005dac push esi */
  push32((uint32_t)(ESI));
  /* 10005dad push eax */
  push32((uint32_t)(EAX));
  /* 10005dae push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10005db3 push dword ptr [0x1000c6a4] */
  push32((uint32_t)(r32((uint32_t)(0x1000c6a4))));
  /* 10005db9 call 0x10006f93 */
  push32(0x10005dbeu); f_10006f93();
  /* 10005dbe add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10005dc1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10005dc3 lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_10005dc9:;
  /* 10005dc9 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10005dcc test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 10005dcf je 0x10005de7 */
  if (C.zf) goto L_10005de7;
  /* 10005dd1 or byte ptr [eax + 0x1000c5a1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1000c5a1)))|(0x10u); w8((uint32_t)(EAX + 0x1000c5a1), (_r)); fl_logic(_r,8); }
  /* 10005dd8 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_10005ddf:;
  /* 10005ddf mov byte ptr [eax + 0x1000c4a0], dl */
  w8((uint32_t)(EAX + 0x1000c4a0), (DL));
  /* 10005de5 jmp 0x10005e03 */
  goto L_10005e03;
L_10005de7:;
  /* 10005de7 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 10005dea je 0x10005dfc */
  if (C.zf) goto L_10005dfc;
  /* 10005dec or byte ptr [eax + 0x1000c5a1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1000c5a1)))|(0x20u); w8((uint32_t)(EAX + 0x1000c5a1), (_r)); fl_logic(_r,8); }
  /* 10005df3 mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 10005dfa jmp 0x10005ddf */
  goto L_10005ddf;
L_10005dfc:;
  /* 10005dfc and byte ptr [eax + 0x1000c4a0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1000c4a0)))&(0x0u); w8((uint32_t)(EAX + 0x1000c4a0), (_r)); fl_logic(_r,8); }
L_10005e03:;
  /* 10005e03 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10005e04 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10005e05 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10005e06 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005e08 jb 0x10005dc9 */
  if (C.cf) goto L_10005dc9;
  /* 10005e0a jmp 0x10005e55 */
  goto L_10005e55;
L_10005e0c:;
  /* 10005e0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10005e0e mov esi, 0x100 */
  ESI = (0x100u);
L_10005e13:;
  /* 10005e13 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005e16 jb 0x10005e31 */
  if (C.cf) goto L_10005e31;
  /* 10005e18 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005e1b ja 0x10005e31 */
  if ((!C.cf&&!C.zf)) goto L_10005e31;
  /* 10005e1d or byte ptr [eax + 0x1000c5a1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1000c5a1)))|(0x10u); w8((uint32_t)(EAX + 0x1000c5a1), (_r)); fl_logic(_r,8); }
  /* 10005e24 mov cl, al */
  CL = (AL);
  /* 10005e26 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_10005e29:;
  /* 10005e29 mov byte ptr [eax + 0x1000c4a0], cl */
  w8((uint32_t)(EAX + 0x1000c4a0), (CL));
  /* 10005e2f jmp 0x10005e50 */
  goto L_10005e50;
L_10005e31:;
  /* 10005e31 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005e34 jb 0x10005e49 */
  if (C.cf) goto L_10005e49;
  /* 10005e36 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005e39 ja 0x10005e49 */
  if ((!C.cf&&!C.zf)) goto L_10005e49;
  /* 10005e3b or byte ptr [eax + 0x1000c5a1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1000c5a1)))|(0x20u); w8((uint32_t)(EAX + 0x1000c5a1), (_r)); fl_logic(_r,8); }
  /* 10005e42 mov cl, al */
  CL = (AL);
  /* 10005e44 sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10005e47 jmp 0x10005e29 */
  goto L_10005e29;
L_10005e49:;
  /* 10005e49 and byte ptr [eax + 0x1000c4a0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1000c4a0)))&(0x0u); w8((uint32_t)(EAX + 0x1000c4a0), (_r)); fl_logic(_r,8); }
L_10005e50:;
  /* 10005e50 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10005e51 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005e53 jb 0x10005e13 */
  if (C.cf) goto L_10005e13;
L_10005e55:;
  /* 10005e55 pop esi */
  ESI = (pop32());
  /* 10005e56 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10005e57 ret  */
  ESPCHK(0x10005cd3u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e58 @ 0x10005e58 (28 bytes, 7 insns) */
void f_10005e58(void) {
  FTRACE(0x10005e58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005e58 cmp dword ptr [0x1000d7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1000d7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005e5f jne 0x10005e73 */
  if (!C.zf) goto L_10005e73;
  /* 10005e61 push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10005e63 call 0x10005a80 */
  push32(0x10005e68u); f_10005a80();
  /* 10005e68 pop ecx */
  ECX = (pop32());
  /* 10005e69 mov dword ptr [0x1000d7e8], 1 */
  w32((uint32_t)(0x1000d7e8), (0x1u));
L_10005e73:;
  /* 10005e73 ret  */
  ESPCHK(0x10005e58u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e80 @ 0x10005e80 (664 bytes, 266 insns) [15 switch table(s)] */
void f_10005e80(void) {
  FTRACE(0x10005e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10005e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10005e81 mov ebp, esp */
  EBP = (ESP);
  /* 10005e83 push edi */
  push32((uint32_t)(EDI));
  /* 10005e84 push esi */
  push32((uint32_t)(ESI));
  /* 10005e85 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10005e88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10005e8b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10005e8e mov eax, ecx */
  EAX = (ECX);
  /* 10005e90 mov edx, ecx */
  EDX = (ECX);
  /* 10005e92 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10005e94 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005e96 jbe 0x10005ea0 */
  if ((C.cf||C.zf)) goto L_10005ea0;
  /* 10005e98 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005e9a jb 0x10006018 */
  if (C.cf) goto L_10006018;
L_10005ea0:;
  /* 10005ea0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10005ea6 jne 0x10005ebc */
  if (!C.zf) goto L_10005ebc;
  /* 10005ea8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10005eab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10005eae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005eb1 jb 0x10005edc */
  if (C.cf) goto L_10005edc;
  /* 10005eb3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10005eb5 jmp dword ptr [edx*4 + 0x10005fc8] */
  switch (EDX) {
    case 0: goto L_10005fd8;
    case 1: goto L_10005fe0;
    case 2: goto L_10005fec;
    case 3: goto L_10006000;
    default: x86_unimpl("switch@0x10005eb5 out of table"); return;
  }
L_10005ebc:;
  /* 10005ebc mov eax, edi */
  EAX = (EDI);
  /* 10005ebe mov edx, 3 */
  EDX = (0x3u);
  /* 10005ec3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10005ec6 jb 0x10005ed4 */
  if (C.cf) goto L_10005ed4;
  /* 10005ec8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10005ecb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10005ecd jmp dword ptr [eax*4 + 0x10005ee0] */
  switch (EAX) {
    case 1: goto L_10005ef0;
    case 2: goto L_10005f1c;
    case 3: goto L_10005f40;
    default: x86_unimpl("switch@0x10005ecd out of table"); return;
  }
L_10005ed4:;
  /* 10005ed4 jmp dword ptr [ecx*4 + 0x10005fd8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10005fd8)))); return;
  /* 10005edb nop  */
  /* nop */
L_10005edc:;
  /* 10005edc jmp dword ptr [ecx*4 + 0x10005f5c] */
  switch (ECX) {
    case 0: goto L_10005fbf;
    case 1: goto L_10005fac;
    case 2: goto L_10005fa4;
    case 3: goto L_10005f9c;
    case 4: goto L_10005f94;
    case 5: goto L_10005f8c;
    case 6: goto L_10005f84;
    case 7: goto L_10005f7c;
    default: x86_unimpl("switch@0x10005edc out of table"); return;
  }
  /* 10005ee3 nop  */
  /* nop */
L_10005ef0:;
  /* 10005ef0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10005ef2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10005ef4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10005ef6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10005ef9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10005efc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10005eff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10005f02 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10005f05 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10005f08 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10005f0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005f0e jb 0x10005edc */
  if (C.cf) goto L_10005edc;
  /* 10005f10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10005f12 jmp dword ptr [edx*4 + 0x10005fc8] */
  switch (EDX) {
    case 0: goto L_10005fd8;
    case 1: goto L_10005fe0;
    case 2: goto L_10005fec;
    case 3: goto L_10006000;
    default: x86_unimpl("switch@0x10005f12 out of table"); return;
  }
  /* 10005f19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10005f1c:;
  /* 10005f1c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10005f1e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10005f20 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10005f22 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10005f25 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10005f28 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10005f2b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10005f2e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10005f31 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005f34 jb 0x10005edc */
  if (C.cf) goto L_10005edc;
  /* 10005f36 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10005f38 jmp dword ptr [edx*4 + 0x10005fc8] */
  switch (EDX) {
    case 0: goto L_10005fd8;
    case 1: goto L_10005fe0;
    case 2: goto L_10005fec;
    case 3: goto L_10006000;
    default: x86_unimpl("switch@0x10005f38 out of table"); return;
  }
  /* 10005f3f nop  */
  /* nop */
L_10005f40:;
  /* 10005f40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10005f42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10005f44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10005f46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10005f47 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10005f4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10005f4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10005f4e jb 0x10005edc */
  if (C.cf) goto L_10005edc;
  /* 10005f50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10005f52 jmp dword ptr [edx*4 + 0x10005fc8] */
  switch (EDX) {
    case 0: goto L_10005fd8;
    case 1: goto L_10005fe0;
    case 2: goto L_10005fec;
    case 3: goto L_10006000;
    default: x86_unimpl("switch@0x10005f52 out of table"); return;
  }
  /* 10005f59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10005f7c:;
  /* 10005f7c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10005f80 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10005f84:;
  /* 10005f84 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10005f88 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10005f8c:;
  /* 10005f8c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10005f90 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10005f94:;
  /* 10005f94 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10005f98 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10005f9c:;
  /* 10005f9c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10005fa0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10005fa4:;
  /* 10005fa4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10005fa8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10005fac:;
  /* 10005fac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10005fb0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10005fb4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10005fbb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10005fbd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10005fbf:;
  /* 10005fbf jmp dword ptr [edx*4 + 0x10005fc8] */
  switch (EDX) {
    case 0: goto L_10005fd8;
    case 1: goto L_10005fe0;
    case 2: goto L_10005fec;
    case 3: goto L_10006000;
    default: x86_unimpl("switch@0x10005fbf out of table"); return;
  }
  /* 10005fc6 mov edi, edi */
  EDI = (EDI);
L_10005fd8:;
  /* 10005fd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10005fdb pop esi */
  ESI = (pop32());
  /* 10005fdc pop edi */
  EDI = (pop32());
  /* 10005fdd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10005fde ret  */
  ESPCHK(0x10005e80u, _esp0);
  ESP += 4; return;
  /* 10005fdf nop  */
  /* nop */
L_10005fe0:;
  /* 10005fe0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10005fe2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10005fe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10005fe7 pop esi */
  ESI = (pop32());
  /* 10005fe8 pop edi */
  EDI = (pop32());
  /* 10005fe9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10005fea ret  */
  ESPCHK(0x10005e80u, _esp0);
  ESP += 4; return;
  /* 10005feb nop  */
  /* nop */
L_10005fec:;
  /* 10005fec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10005fee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10005ff0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10005ff3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10005ff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10005ff9 pop esi */
  ESI = (pop32());
  /* 10005ffa pop edi */
  EDI = (pop32());
  /* 10005ffb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10005ffc ret  */
  ESPCHK(0x10005e80u, _esp0);
  ESP += 4; return;
  /* 10005ffd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10006000:;
  /* 10006000 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10006002 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10006004 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10006007 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1000600a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1000600d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10006010 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10006013 pop esi */
  ESI = (pop32());
  /* 10006014 pop edi */
  EDI = (pop32());
  /* 10006015 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10006016 ret  */
  ESPCHK(0x10005e80u, _esp0);
  ESP += 4; return;
  /* 10006017 nop  */
  /* nop */
L_10006018:;
  /* 10006018 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1000601c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10006020 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10006026 jne 0x1000604c */
  if (!C.zf) goto L_1000604c;
  /* 10006028 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1000602b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1000602e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006031 jb 0x10006040 */
  if (C.cf) goto L_10006040;
  /* 10006033 std  */
  C.df=1;
  /* 10006034 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10006036 cld  */
  C.df=0;
  /* 10006037 jmp dword ptr [edx*4 + 0x10006160] */
  switch (EDX) {
    case 0: goto L_10006170;
    case 1: goto L_10006178;
    case 2: goto L_10006188;
    case 3: goto L_1000619c;
    default: x86_unimpl("switch@0x10006037 out of table"); return;
  }
  /* 1000603e mov edi, edi */
  EDI = (EDI);
L_10006040:;
  /* 10006040 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10006042 jmp dword ptr [ecx*4 + 0x10006110] */
  switch (ECX) {
    case 0: goto L_10006157;
    default: x86_unimpl("switch@0x10006042 out of table"); return;
  }
  /* 10006049 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1000604c:;
  /* 1000604c mov eax, edi */
  EAX = (EDI);
  /* 1000604e mov edx, 3 */
  EDX = (0x3u);
  /* 10006053 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006056 jb 0x10006064 */
  if (C.cf) goto L_10006064;
  /* 10006058 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1000605b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000605d jmp dword ptr [eax*4 + 0x10006068] */
  switch (EAX) {
    case 1: goto L_10006078;
    case 2: goto L_10006098;
    case 3: goto L_100060c0;
    default: x86_unimpl("switch@0x1000605d out of table"); return;
  }
L_10006064:;
  /* 10006064 jmp dword ptr [ecx*4 + 0x10006160] */
  switch (ECX) {
    case 0: goto L_10006170;
    case 1: goto L_10006178;
    case 2: goto L_10006188;
    case 3: goto L_1000619c;
    default: x86_unimpl("switch@0x10006064 out of table"); return;
  }
  /* 1000606b nop  */
  /* nop */
L_10006078:;
  /* 10006078 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1000607b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1000607d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10006080 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10006081 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10006084 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10006085 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006088 jb 0x10006040 */
  if (C.cf) goto L_10006040;
  /* 1000608a std  */
  C.df=1;
  /* 1000608b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1000608d cld  */
  C.df=0;
  /* 1000608e jmp dword ptr [edx*4 + 0x10006160] */
  switch (EDX) {
    case 0: goto L_10006170;
    case 1: goto L_10006178;
    case 2: goto L_10006188;
    case 3: goto L_1000619c;
    default: x86_unimpl("switch@0x1000608e out of table"); return;
  }
  /* 10006095 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10006098:;
  /* 10006098 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1000609b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1000609d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100060a0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100060a3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100060a6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100060a9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100060ac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100060af cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100060b2 jb 0x10006040 */
  if (C.cf) goto L_10006040;
  /* 100060b4 std  */
  C.df=1;
  /* 100060b5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100060b7 cld  */
  C.df=0;
  /* 100060b8 jmp dword ptr [edx*4 + 0x10006160] */
  switch (EDX) {
    case 0: goto L_10006170;
    case 1: goto L_10006178;
    case 2: goto L_10006188;
    case 3: goto L_1000619c;
    default: x86_unimpl("switch@0x100060b8 out of table"); return;
  }
  /* 100060bf nop  */
  /* nop */
L_100060c0:;
  /* 100060c0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100060c3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100060c5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100060c8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100060cb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100060ce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100060d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100060d4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100060d7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100060da sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100060dd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100060e0 jb 0x10006040 */
  if (C.cf) goto L_10006040;
  /* 100060e6 std  */
  C.df=1;
  /* 100060e7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100060e9 cld  */
  C.df=0;
  /* 100060ea jmp dword ptr [edx*4 + 0x10006160] */
  switch (EDX) {
    case 0: goto L_10006170;
    case 1: goto L_10006178;
    case 2: goto L_10006188;
    case 3: goto L_1000619c;
    default: x86_unimpl("switch@0x100060ea out of table"); return;
  }
  /* 100060f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 100060f4 adc al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100060f6 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 100060f8 sbb al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100060fa add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 100060fc and al, 0x61 */
  { uint32_t _r=(AL)&(0x61u); AL = (_r); fl_logic(_r,8); }
  /* 100060fe add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10006100 sub al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10006102 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10006104 xor al, 0x61 */
  { uint32_t _r=(AL)^(0x61u); AL = (_r); fl_logic(_r,8); }
  /* 10006106 add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10006108 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1000610a add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1000610c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1000610d popal  */
  x86_unimpl("popal @ 0x1000610d");
  /* 1000610e add byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10006114 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10006118 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1000611c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10006120 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10006124 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10006128 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1000612c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10006130 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10006134 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10006138 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1000613c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10006140 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10006144 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10006148 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1000614c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10006153 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10006155 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10006157:;
  /* 10006157 jmp dword ptr [edx*4 + 0x10006160] */
  switch (EDX) {
    case 0: goto L_10006170;
    case 1: goto L_10006178;
    case 2: goto L_10006188;
    case 3: goto L_1000619c;
    default: x86_unimpl("switch@0x10006157 out of table"); return;
  }
  /* 1000615e mov edi, edi */
  EDI = (EDI);
L_10006170:;
  /* 10006170 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10006173 pop esi */
  ESI = (pop32());
  /* 10006174 pop edi */
  EDI = (pop32());
  /* 10006175 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10006176 ret  */
  ESPCHK(0x10005e80u, _esp0);
  ESP += 4; return;
  /* 10006177 nop  */
  /* nop */
L_10006178:;
  /* 10006178 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1000617b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1000617e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10006181 pop esi */
  ESI = (pop32());
  /* 10006182 pop edi */
  EDI = (pop32());
  /* 10006183 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10006184 ret  */
  ESPCHK(0x10005e80u, _esp0);
  ESP += 4; return;
  /* 10006185 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10006188:;
  /* 10006188 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1000618b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1000618e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10006191 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10006194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10006197 pop esi */
  ESI = (pop32());
  /* 10006198 pop edi */
  EDI = (pop32());
  /* 10006199 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000619a ret  */
  ESPCHK(0x10005e80u, _esp0);
  ESP += 4; return;
  /* 1000619b nop  */
  /* nop */
L_1000619c:;
  /* 1000619c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1000619f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100061a2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100061a5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100061a8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100061ab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100061ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100061b1 pop esi */
  ESI = (pop32());
  /* 100061b2 pop edi */
  EDI = (pop32());
  /* 100061b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100061b4 ret  */
  ESPCHK(0x10005e80u, _esp0);
  ESP += 4; return;
}

/* FUN_100061b5 @ 0x100061b5 (62 bytes, 15 insns) */
void f_100061b5(void) {
  FTRACE(0x100061b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100061b5 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 100061ba push 0 */
  push32((uint32_t)(0x0u));
  /* 100061bc push dword ptr [0x1000d6c4] */
  push32((uint32_t)(r32((uint32_t)(0x1000d6c4))));
  /* 100061c2 call dword ptr [0x10009090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009090))), 0x100061c8u);
  /* 100061c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100061ca mov dword ptr [0x1000c46c], eax */
  w32((uint32_t)(0x1000c46c), (EAX));
  /* 100061cf jne 0x100061d2 */
  if (!C.zf) goto L_100061d2;
  /* 100061d1 ret  */
  ESPCHK(0x100061b5u, _esp0);
  ESP += 4; return;
L_100061d2:;
  /* 100061d2 and dword ptr [0x1000c464], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1000c464)))&(0x0u); w32((uint32_t)(0x1000c464), (_r)); fl_logic(_r,32); }
  /* 100061d9 and dword ptr [0x1000c468], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1000c468)))&(0x0u); w32((uint32_t)(0x1000c468), (_r)); fl_logic(_r,32); }
  /* 100061e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100061e2 mov dword ptr [0x1000c460], eax */
  w32((uint32_t)(0x1000c460), (EAX));
  /* 100061e7 mov dword ptr [0x1000c458], 0x10 */
  w32((uint32_t)(0x1000c458), (0x10u));
  /* 100061f1 pop eax */
  EAX = (pop32());
  /* 100061f2 ret  */
  ESPCHK(0x100061b5u, _esp0);
  ESP += 4; return;
}

/* FUN_100061f3 @ 0x100061f3 (43 bytes, 14 insns) */
void f_100061f3(void) {
  FTRACE(0x100061f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100061f3 mov eax, dword ptr [0x1000c468] */
  EAX = (r32((uint32_t)(0x1000c468)));
  /* 100061f8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100061fb mov eax, dword ptr [0x1000c46c] */
  EAX = (r32((uint32_t)(0x1000c46c)));
  /* 10006200 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_10006203:;
  /* 10006203 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006205 jae 0x1000621b */
  if (!C.cf) goto L_1000621b;
  /* 10006207 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1000620b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000620e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006214 jb 0x1000621d */
  if (C.cf) goto L_1000621d;
  /* 10006216 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10006219 jmp 0x10006203 */
  goto L_10006203;
L_1000621b:;
  /* 1000621b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1000621d:;
  /* 1000621d ret  */
  ESPCHK(0x100061f3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000621e @ 0x1000621e (811 bytes, 264 insns) */
void f_1000621e(void) {
  FTRACE(0x1000621eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000621e push ebp */
  push32((uint32_t)(EBP));
  /* 1000621f mov ebp, esp */
  EBP = (ESP);
  /* 10006221 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10006224 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10006227 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000622a push ebx */
  push32((uint32_t)(EBX));
  /* 1000622b push esi */
  push32((uint32_t)(ESI));
  /* 1000622c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1000622f mov esi, edx */
  ESI = (EDX);
  /* 10006231 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10006234 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 10006237 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000623a push edi */
  push32((uint32_t)(EDI));
  /* 1000623b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 1000623e mov ecx, esi */
  ECX = (ESI);
  /* 10006240 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 10006243 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10006249 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1000624a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1000624d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10006254 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10006257 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1000625a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 1000625d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 10006260 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10006263 jne 0x100062e4 */
  if (!C.zf) goto L_100062e4;
  /* 10006265 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10006268 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1000626a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1000626b pop edi */
  EDI = (pop32());
  /* 1000626c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1000626f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006271 jbe 0x10006276 */
  if ((C.cf||C.zf)) goto L_10006276;
  /* 10006273 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10006276:;
  /* 10006276 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 1000627a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000627e jne 0x100062c8 */
  if (!C.zf) goto L_100062c8;
  /* 10006280 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10006283 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006286 jae 0x100062a4 */
  if (!C.cf) goto L_100062a4;
  /* 10006288 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1000628d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1000628f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10006293 not edi */
  EDI = (~(EDI));
  /* 10006295 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10006299 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1000629b jne 0x100062c8 */
  if (!C.zf) goto L_100062c8;
  /* 1000629d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100062a0 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 100062a2 jmp 0x100062c8 */
  goto L_100062c8;
L_100062a4:;
  /* 100062a4 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100062a7 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 100062ac shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 100062ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100062b1 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 100062b5 not edi */
  EDI = (~(EDI));
  /* 100062b7 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 100062be dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 100062c0 jne 0x100062c8 */
  if (!C.zf) goto L_100062c8;
  /* 100062c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100062c5 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_100062c8:;
  /* 100062c8 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 100062cc mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 100062d0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 100062d3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 100062d7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 100062db add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100062de mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 100062e1 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_100062e4:;
  /* 100062e4 mov edi, ebx */
  EDI = (EBX);
  /* 100062e6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 100062e9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100062ea cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100062ed jbe 0x100062f2 */
  if ((C.cf||C.zf)) goto L_100062f2;
  /* 100062ef push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 100062f1 pop edi */
  EDI = (pop32());
L_100062f2:;
  /* 100062f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100062f5 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 100062f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 100062fb jne 0x100063a1 */
  if (!C.zf) goto L_100063a1;
  /* 10006301 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10006304 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10006307 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1000630a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1000630c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1000630f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10006310 pop edx */
  EDX = (pop32());
  /* 10006311 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006313 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10006316 jbe 0x1000631d */
  if ((C.cf||C.zf)) goto L_1000631d;
  /* 10006318 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1000631b mov ecx, edx */
  ECX = (EDX);
L_1000631d:;
  /* 1000631d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10006320 mov edi, ebx */
  EDI = (EBX);
  /* 10006322 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10006325 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10006328 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10006329 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000632b jbe 0x1000632f */
  if ((C.cf||C.zf)) goto L_1000632f;
  /* 1000632d mov edi, edx */
  EDI = (EDX);
L_1000632f:;
  /* 1000632f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006331 je 0x1000639e */
  if (C.zf) goto L_1000639e;
  /* 10006333 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10006336 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10006339 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000633c jne 0x10006386 */
  if (!C.zf) goto L_10006386;
  /* 1000633e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10006341 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006344 jae 0x10006362 */
  if (!C.cf) goto L_10006362;
  /* 10006346 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1000634b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1000634d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10006351 not edx */
  EDX = (~(EDX));
  /* 10006353 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10006357 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10006359 jne 0x10006386 */
  if (!C.zf) goto L_10006386;
  /* 1000635b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000635e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10006360 jmp 0x10006386 */
  goto L_10006386;
L_10006362:;
  /* 10006362 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10006365 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1000636a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1000636c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1000636f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10006373 not edx */
  EDX = (~(EDX));
  /* 10006375 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1000637c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1000637e jne 0x10006386 */
  if (!C.zf) goto L_10006386;
  /* 10006380 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10006383 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10006386:;
  /* 10006386 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10006389 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1000638c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1000638f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10006392 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10006395 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10006398 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1000639b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1000639e:;
  /* 1000639e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_100063a1:;
  /* 100063a1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100063a5 jne 0x100063b0 */
  if (!C.zf) goto L_100063b0;
  /* 100063a7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100063aa je 0x10006439 */
  if (C.zf) goto L_10006439;
L_100063b0:;
  /* 100063b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 100063b3 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 100063b6 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 100063b9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 100063bc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 100063bf lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 100063c2 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 100063c5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 100063c8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 100063cb mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 100063ce mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 100063d1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100063d4 jne 0x10006439 */
  if (!C.zf) goto L_10006439;
  /* 100063d6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 100063da cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100063dd mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 100063e0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 100063e2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 100063e6 jae 0x1000640d */
  if (!C.cf) goto L_1000640d;
  /* 100063e8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100063ec jne 0x100063fc */
  if (!C.zf) goto L_100063fc;
  /* 100063ee mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100063f3 mov ecx, edi */
  ECX = (EDI);
  /* 100063f5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100063f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100063fa or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_100063fc:;
  /* 100063fc mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10006401 mov ecx, edi */
  ECX = (EDI);
  /* 10006403 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10006405 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 10006409 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1000640b jmp 0x10006436 */
  goto L_10006436;
L_1000640d:;
  /* 1000640d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10006411 jne 0x10006423 */
  if (!C.zf) goto L_10006423;
  /* 10006413 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10006416 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1000641b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1000641d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10006420 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10006423:;
  /* 10006423 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10006426 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1000642b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1000642d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 10006434 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_10006436:;
  /* 10006436 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_10006439:;
  /* 10006439 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1000643c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 1000643e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 10006442 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 10006444 jne 0x10006544 */
  if (!C.zf) goto L_10006544;
  /* 1000644a mov eax, dword ptr [0x1000c464] */
  EAX = (r32((uint32_t)(0x1000c464)));
  /* 1000644f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006451 je 0x10006536 */
  if (C.zf) goto L_10006536;
  /* 10006457 mov ecx, dword ptr [0x1000c45c] */
  ECX = (r32((uint32_t)(0x1000c45c)));
  /* 1000645d mov edi, dword ptr [0x10009074] */
  EDI = (r32((uint32_t)(0x10009074)));
  /* 10006463 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10006466 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10006469 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 1000646e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10006473 push ebx */
  push32((uint32_t)(EBX));
  /* 10006474 push ecx */
  push32((uint32_t)(ECX));
  /* 10006475 call edi */
  call_ind((uint32_t)(EDI), 0x10006477u);
  /* 10006477 mov ecx, dword ptr [0x1000c45c] */
  ECX = (r32((uint32_t)(0x1000c45c)));
  /* 1000647d mov eax, dword ptr [0x1000c464] */
  EAX = (r32((uint32_t)(0x1000c464)));
  /* 10006482 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10006487 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10006489 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1000648c mov eax, dword ptr [0x1000c464] */
  EAX = (r32((uint32_t)(0x1000c464)));
  /* 10006491 mov ecx, dword ptr [0x1000c45c] */
  ECX = (r32((uint32_t)(0x1000c45c)));
  /* 10006497 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1000649a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 100064a2 mov eax, dword ptr [0x1000c464] */
  EAX = (r32((uint32_t)(0x1000c464)));
  /* 100064a7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 100064aa dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 100064ad mov eax, dword ptr [0x1000c464] */
  EAX = (r32((uint32_t)(0x1000c464)));
  /* 100064b2 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 100064b5 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100064b9 jne 0x100064c4 */
  if (!C.zf) goto L_100064c4;
  /* 100064bb and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 100064bf mov eax, dword ptr [0x1000c464] */
  EAX = (r32((uint32_t)(0x1000c464)));
L_100064c4:;
  /* 100064c4 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100064c8 jne 0x10006536 */
  if (!C.zf) goto L_10006536;
  /* 100064ca push ebx */
  push32((uint32_t)(EBX));
  /* 100064cb push 0 */
  push32((uint32_t)(0x0u));
  /* 100064cd push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 100064d0 call edi */
  call_ind((uint32_t)(EDI), 0x100064d2u);
  /* 100064d2 mov eax, dword ptr [0x1000c464] */
  EAX = (r32((uint32_t)(0x1000c464)));
  /* 100064d7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 100064da push 0 */
  push32((uint32_t)(0x0u));
  /* 100064dc push dword ptr [0x1000d6c4] */
  push32((uint32_t)(r32((uint32_t)(0x1000d6c4))));
  /* 100064e2 call dword ptr [0x10009078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009078))), 0x100064e8u);
  /* 100064e8 mov eax, dword ptr [0x1000c468] */
  EAX = (r32((uint32_t)(0x1000c468)));
  /* 100064ed mov edx, dword ptr [0x1000c46c] */
  EDX = (r32((uint32_t)(0x1000c46c)));
  /* 100064f3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100064f6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 100064f9 mov ecx, eax */
  ECX = (EAX);
  /* 100064fb mov eax, dword ptr [0x1000c464] */
  EAX = (r32((uint32_t)(0x1000c464)));
  /* 10006500 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10006502 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10006506 push ecx */
  push32((uint32_t)(ECX));
  /* 10006507 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1000650a push ecx */
  push32((uint32_t)(ECX));
  /* 1000650b push eax */
  push32((uint32_t)(EAX));
  /* 1000650c call 0x10007330 */
  push32(0x10006511u); f_10007330();
  /* 10006511 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10006514 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006517 dec dword ptr [0x1000c468] */
  { uint32_t _r=(r32((uint32_t)(0x1000c468)))-1; w32((uint32_t)(0x1000c468), (_r)); fl_dec(_r,32); }
  /* 1000651d cmp eax, dword ptr [0x1000c464] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1000c464))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006523 jbe 0x10006528 */
  if ((C.cf||C.zf)) goto L_10006528;
  /* 10006525 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10006528:;
  /* 10006528 mov ecx, dword ptr [0x1000c46c] */
  ECX = (r32((uint32_t)(0x1000c46c)));
  /* 1000652e mov dword ptr [0x1000c460], ecx */
  w32((uint32_t)(0x1000c460), (ECX));
  /* 10006534 jmp 0x10006539 */
  goto L_10006539;
L_10006536:;
  /* 10006536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10006539:;
  /* 10006539 mov dword ptr [0x1000c464], eax */
  w32((uint32_t)(0x1000c464), (EAX));
  /* 1000653e mov dword ptr [0x1000c45c], esi */
  w32((uint32_t)(0x1000c45c), (ESI));
L_10006544:;
  /* 10006544 pop edi */
  EDI = (pop32());
  /* 10006545 pop esi */
  ESI = (pop32());
  /* 10006546 pop ebx */
  EBX = (pop32());
  /* 10006547 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10006548 ret  */
  ESPCHK(0x1000621eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006549 @ 0x10006549 (777 bytes, 275 insns) */
void f_10006549(void) {
  FTRACE(0x10006549u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006549 push ebp */
  push32((uint32_t)(EBP));
  /* 1000654a mov ebp, esp */
  EBP = (ESP);
  /* 1000654c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000654f mov eax, dword ptr [0x1000c468] */
  EAX = (r32((uint32_t)(0x1000c468)));
  /* 10006554 mov edx, dword ptr [0x1000c46c] */
  EDX = (r32((uint32_t)(0x1000c46c)));
  /* 1000655a push ebx */
  push32((uint32_t)(EBX));
  /* 1000655b push esi */
  push32((uint32_t)(ESI));
  /* 1000655c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1000655f push edi */
  push32((uint32_t)(EDI));
  /* 10006560 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10006563 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10006566 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10006569 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1000656c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1000656f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10006572 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10006575 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10006576 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006579 jge 0x10006589 */
  if ((C.sf==C.of)) goto L_10006589;
  /* 1000657b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1000657e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10006580 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10006584 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10006587 jmp 0x10006599 */
  goto L_10006599;
L_10006589:;
  /* 10006589 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000658c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1000658f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10006591 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10006593 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10006596 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10006599:;
  /* 10006599 mov eax, dword ptr [0x1000c460] */
  EAX = (r32((uint32_t)(0x1000c460)));
  /* 1000659e mov ebx, eax */
  EBX = (EAX);
  /* 100065a0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100065a2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100065a5 jae 0x100065c0 */
  if (!C.cf) goto L_100065c0;
L_100065a7:;
  /* 100065a7 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 100065aa mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 100065ac and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 100065af and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 100065b1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100065b3 jne 0x100065c0 */
  if (!C.zf) goto L_100065c0;
  /* 100065b5 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100065b8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100065bb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100065be jb 0x100065a7 */
  if (C.cf) goto L_100065a7;
L_100065c0:;
  /* 100065c0 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100065c3 jne 0x1000663e */
  if (!C.zf) goto L_1000663e;
  /* 100065c5 mov ebx, edx */
  EBX = (EDX);
L_100065c7:;
  /* 100065c7 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100065c9 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100065cc jae 0x100065e3 */
  if (!C.cf) goto L_100065e3;
  /* 100065ce mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 100065d1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 100065d3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 100065d6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 100065d8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100065da jne 0x100065e1 */
  if (!C.zf) goto L_100065e1;
  /* 100065dc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100065df jmp 0x100065c7 */
  goto L_100065c7;
L_100065e1:;
  /* 100065e1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100065e3:;
  /* 100065e3 jne 0x1000663e */
  if (!C.zf) goto L_1000663e;
L_100065e5:;
  /* 100065e5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100065e8 jae 0x100065fb */
  if (!C.cf) goto L_100065fb;
  /* 100065ea cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100065ee jne 0x100065f8 */
  if (!C.zf) goto L_100065f8;
  /* 100065f0 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100065f3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100065f6 jmp 0x100065e5 */
  goto L_100065e5;
L_100065f8:;
  /* 100065f8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100065fb:;
  /* 100065fb jne 0x10006623 */
  if (!C.zf) goto L_10006623;
  /* 100065fd mov ebx, edx */
  EBX = (EDX);
L_100065ff:;
  /* 100065ff cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006601 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10006604 jae 0x10006613 */
  if (!C.cf) goto L_10006613;
  /* 10006606 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000660a jne 0x10006611 */
  if (!C.zf) goto L_10006611;
  /* 1000660c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000660f jmp 0x100065ff */
  goto L_100065ff;
L_10006611:;
  /* 10006611 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10006613:;
  /* 10006613 jne 0x10006623 */
  if (!C.zf) goto L_10006623;
  /* 10006615 call 0x10006852 */
  push32(0x1000661au); f_10006852();
  /* 1000661a mov ebx, eax */
  EBX = (EAX);
  /* 1000661c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1000661e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10006621 je 0x10006637 */
  if (C.zf) goto L_10006637;
L_10006623:;
  /* 10006623 push ebx */
  push32((uint32_t)(EBX));
  /* 10006624 call 0x10006903 */
  push32(0x10006629u); f_10006903();
  /* 10006629 pop ecx */
  ECX = (pop32());
  /* 1000662a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1000662d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1000662f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10006632 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006635 jne 0x1000663e */
  if (!C.zf) goto L_1000663e;
L_10006637:;
  /* 10006637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10006639 jmp 0x1000684d */
  goto L_1000684d;
L_1000663e:;
  /* 1000663e mov dword ptr [0x1000c460], ebx */
  w32((uint32_t)(0x1000c460), (EBX));
  /* 10006644 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10006647 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10006649 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000664c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1000664f je 0x10006665 */
  if (C.zf) goto L_10006665;
  /* 10006651 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10006658 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1000665c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1000665f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10006661 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10006663 jne 0x1000669c */
  if (!C.zf) goto L_1000669c;
L_10006665:;
  /* 10006665 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1000666b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1000666e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10006671 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10006674 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10006678 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1000667b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1000667d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10006680 jne 0x10006699 */
  if (!C.zf) goto L_10006699;
L_10006682:;
  /* 10006682 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 10006688 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1000668b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1000668e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10006691 mov edi, esi */
  EDI = (ESI);
  /* 10006693 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 10006695 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 10006697 je 0x10006682 */
  if (C.zf) goto L_10006682;
L_10006699:;
  /* 10006699 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1000669c:;
  /* 1000669c mov ecx, edx */
  ECX = (EDX);
  /* 1000669e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100066a0 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100066a6 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 100066ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 100066b0 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 100066b4 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 100066b6 jne 0x100066c5 */
  if (!C.zf) goto L_100066c5;
  /* 100066b8 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 100066bf push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100066c1 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 100066c4 pop edi */
  EDI = (pop32());
L_100066c5:;
  /* 100066c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100066c7 jl 0x100066ce */
  if ((C.sf!=C.of)) goto L_100066ce;
  /* 100066c9 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100066cb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100066cc jmp 0x100066c5 */
  goto L_100066c5;
L_100066ce:;
  /* 100066ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 100066d1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 100066d5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 100066d7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100066da mov esi, ecx */
  ESI = (ECX);
  /* 100066dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100066df sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 100066e2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100066e3 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100066e6 jle 0x100066eb */
  if ((C.zf||C.sf!=C.of)) goto L_100066eb;
  /* 100066e8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 100066ea pop esi */
  ESI = (pop32());
L_100066eb:;
  /* 100066eb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100066ed je 0x10006800 */
  if (C.zf) goto L_10006800;
  /* 100066f3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 100066f6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100066f9 jne 0x1000675c */
  if (!C.zf) goto L_1000675c;
  /* 100066fb cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100066fe jge 0x1000672b */
  if ((C.sf==C.of)) goto L_1000672b;
  /* 10006700 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10006705 mov ecx, edi */
  ECX = (EDI);
  /* 10006707 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10006709 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1000670c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10006710 not ebx */
  EBX = (~(EBX));
  /* 10006712 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10006715 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 10006719 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1000671d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1000671f jne 0x10006759 */
  if (!C.zf) goto L_10006759;
  /* 10006721 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10006724 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10006727 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 10006729 jmp 0x1000675c */
  goto L_1000675c;
L_1000672b:;
  /* 1000672b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1000672e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10006733 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10006735 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10006738 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1000673c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10006743 not ebx */
  EBX = (~(EBX));
  /* 10006745 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10006747 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10006749 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1000674c jne 0x10006759 */
  if (!C.zf) goto L_10006759;
  /* 1000674e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10006751 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10006754 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10006757 jmp 0x1000675c */
  goto L_1000675c;
L_10006759:;
  /* 10006759 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1000675c:;
  /* 1000675c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 1000675f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 10006762 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006766 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10006769 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1000676c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1000676f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10006772 je 0x1000680c */
  if (C.zf) goto L_1000680c;
  /* 10006778 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1000677b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1000677f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 10006782 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 10006785 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10006788 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1000678b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1000678e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10006791 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10006794 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006797 jne 0x100067fd */
  if (!C.zf) goto L_100067fd;
  /* 10006799 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1000679d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100067a0 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 100067a3 jge 0x100067ce */
  if ((C.sf==C.of)) goto L_100067ce;
  /* 100067a5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 100067a7 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100067ab mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 100067af jne 0x100067bc */
  if (!C.zf) goto L_100067bc;
  /* 100067b1 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 100067b6 mov ecx, esi */
  ECX = (ESI);
  /* 100067b8 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 100067ba or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_100067bc:;
  /* 100067bc mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 100067c1 mov ecx, esi */
  ECX = (ESI);
  /* 100067c3 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 100067c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100067c8 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 100067cc jmp 0x100067fd */
  goto L_100067fd;
L_100067ce:;
  /* 100067ce inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 100067d0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100067d4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 100067d8 jne 0x100067e7 */
  if (!C.zf) goto L_100067e7;
  /* 100067da lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 100067dd mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 100067e2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 100067e4 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_100067e7:;
  /* 100067e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100067ea lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 100067f1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 100067f4 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 100067f9 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100067fb or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_100067fd:;
  /* 100067fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10006800:;
  /* 10006800 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10006802 je 0x1000680f */
  if (C.zf) goto L_1000680f;
  /* 10006804 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10006806 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1000680a jmp 0x1000680f */
  goto L_1000680f;
L_1000680c:;
  /* 1000680c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1000680f:;
  /* 1000680f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10006812 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10006814 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10006817 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10006819 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1000681d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10006820 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10006822 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10006824 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 10006827 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10006829 jne 0x10006845 */
  if (!C.zf) goto L_10006845;
  /* 1000682b cmp ebx, dword ptr [0x1000c464] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1000c464))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006831 jne 0x10006845 */
  if (!C.zf) goto L_10006845;
  /* 10006833 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10006836 cmp ecx, dword ptr [0x1000c45c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1000c45c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000683c jne 0x10006845 */
  if (!C.zf) goto L_10006845;
  /* 1000683e and dword ptr [0x1000c464], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1000c464)))&(0x0u); w32((uint32_t)(0x1000c464), (_r)); fl_logic(_r,32); }
L_10006845:;
  /* 10006845 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10006848 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1000684a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1000684d:;
  /* 1000684d pop edi */
  EDI = (pop32());
  /* 1000684e pop esi */
  ESI = (pop32());
  /* 1000684f pop ebx */
  EBX = (pop32());
  /* 10006850 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10006851 ret  */
  ESPCHK(0x10006549u, _esp0);
  ESP += 4; return;
}

/* FUN_10006852 @ 0x10006852 (177 bytes, 53 insns) */
void f_10006852(void) {
  FTRACE(0x10006852u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006852 mov eax, dword ptr [0x1000c468] */
  EAX = (r32((uint32_t)(0x1000c468)));
  /* 10006857 mov ecx, dword ptr [0x1000c458] */
  ECX = (r32((uint32_t)(0x1000c458)));
  /* 1000685d push esi */
  push32((uint32_t)(ESI));
  /* 1000685e push edi */
  push32((uint32_t)(EDI));
  /* 1000685f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10006861 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006863 jne 0x10006895 */
  if (!C.zf) goto L_10006895;
  /* 10006865 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 10006869 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1000686c push eax */
  push32((uint32_t)(EAX));
  /* 1000686d push dword ptr [0x1000c46c] */
  push32((uint32_t)(r32((uint32_t)(0x1000c46c))));
  /* 10006873 push edi */
  push32((uint32_t)(EDI));
  /* 10006874 push dword ptr [0x1000d6c4] */
  push32((uint32_t)(r32((uint32_t)(0x1000d6c4))));
  /* 1000687a call dword ptr [0x100090a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090a4))), 0x10006880u);
  /* 10006880 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006882 je 0x100068e5 */
  if (C.zf) goto L_100068e5;
  /* 10006884 add dword ptr [0x1000c458], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x1000c458))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x1000c458), (_r)); fl_add(_a,_b,_r,32); }
  /* 1000688b mov dword ptr [0x1000c46c], eax */
  w32((uint32_t)(0x1000c46c), (EAX));
  /* 10006890 mov eax, dword ptr [0x1000c468] */
  EAX = (r32((uint32_t)(0x1000c468)));
L_10006895:;
  /* 10006895 mov ecx, dword ptr [0x1000c46c] */
  ECX = (r32((uint32_t)(0x1000c46c)));
  /* 1000689b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 100068a0 push 8 */
  push32((uint32_t)(0x8u));
  /* 100068a2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100068a5 push dword ptr [0x1000d6c4] */
  push32((uint32_t)(r32((uint32_t)(0x1000d6c4))));
  /* 100068ab lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 100068ae call dword ptr [0x10009090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009090))), 0x100068b4u);
  /* 100068b4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100068b6 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 100068b9 je 0x100068e5 */
  if (C.zf) goto L_100068e5;
  /* 100068bb push 4 */
  push32((uint32_t)(0x4u));
  /* 100068bd push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 100068c2 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 100068c7 push edi */
  push32((uint32_t)(EDI));
  /* 100068c8 call dword ptr [0x100090a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090a0))), 0x100068ceu);
  /* 100068ce cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100068d0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 100068d3 jne 0x100068e9 */
  if (!C.zf) goto L_100068e9;
  /* 100068d5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 100068d8 push edi */
  push32((uint32_t)(EDI));
  /* 100068d9 push dword ptr [0x1000d6c4] */
  push32((uint32_t)(r32((uint32_t)(0x1000d6c4))));
  /* 100068df call dword ptr [0x10009078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009078))), 0x100068e5u);
L_100068e5:;
  /* 100068e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100068e7 jmp 0x10006900 */
  goto L_10006900;
L_100068e9:;
  /* 100068e9 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 100068ed mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 100068ef mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 100068f2 inc dword ptr [0x1000c468] */
  { uint32_t _r=(r32((uint32_t)(0x1000c468)))+1; w32((uint32_t)(0x1000c468), (_r)); fl_inc(_r,32); }
  /* 100068f8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 100068fb or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100068fe mov eax, esi */
  EAX = (ESI);
L_10006900:;
  /* 10006900 pop edi */
  EDI = (pop32());
  /* 10006901 pop esi */
  ESI = (pop32());
  /* 10006902 ret  */
  ESPCHK(0x10006852u, _esp0);
  ESP += 4; return;
}

/* FUN_10006903 @ 0x10006903 (251 bytes, 85 insns) */
void f_10006903(void) {
  FTRACE(0x10006903u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006903 push ebp */
  push32((uint32_t)(EBP));
  /* 10006904 mov ebp, esp */
  EBP = (ESP);
  /* 10006906 push ecx */
  push32((uint32_t)(ECX));
  /* 10006907 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000690a push ebx */
  push32((uint32_t)(EBX));
  /* 1000690b push esi */
  push32((uint32_t)(ESI));
  /* 1000690c push edi */
  push32((uint32_t)(EDI));
  /* 1000690d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 10006910 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10006913 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10006915:;
  /* 10006915 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006917 jl 0x1000691e */
  if ((C.sf!=C.of)) goto L_1000691e;
  /* 10006919 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1000691b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1000691c jmp 0x10006915 */
  goto L_10006915;
L_1000691e:;
  /* 1000691e mov eax, ebx */
  EAX = (EBX);
  /* 10006920 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10006922 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10006928 pop edx */
  EDX = (pop32());
  /* 10006929 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 10006930 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10006933:;
  /* 10006933 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 10006936 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 10006939 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000693c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1000693d jne 0x10006933 */
  if (!C.zf) goto L_10006933;
  /* 1000693f mov edi, ebx */
  EDI = (EBX);
  /* 10006941 push 4 */
  push32((uint32_t)(0x4u));
  /* 10006943 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 10006946 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10006949 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1000694e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10006953 push edi */
  push32((uint32_t)(EDI));
  /* 10006954 call dword ptr [0x100090a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090a0))), 0x1000695au);
  /* 1000695a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000695c jne 0x10006966 */
  if (!C.zf) goto L_10006966;
  /* 1000695e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10006961 jmp 0x100069f9 */
  goto L_100069f9;
L_10006966:;
  /* 10006966 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1000696c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000696e ja 0x100069ac */
  if ((!C.cf&&!C.zf)) goto L_100069ac;
  /* 10006970 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_10006973:;
  /* 10006973 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 10006977 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1000697e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 10006984 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1000698b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1000698d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10006993 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10006996 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 100069a0 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100069a5 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 100069a8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100069aa jbe 0x10006973 */
  if ((C.cf||C.zf)) goto L_10006973;
L_100069ac:;
  /* 100069ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100069af lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 100069b2 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100069b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 100069b9 pop edi */
  EDI = (pop32());
  /* 100069ba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100069bd mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 100069c0 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 100069c3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 100069c6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 100069c9 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 100069ce mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 100069d5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 100069d8 mov cl, al */
  CL = (AL);
  /* 100069da inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 100069dc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100069de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100069e1 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 100069e4 jne 0x100069e9 */
  if (!C.zf) goto L_100069e9;
  /* 100069e6 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_100069e9:;
  /* 100069e9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 100069ee mov ecx, ebx */
  ECX = (EBX);
  /* 100069f0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100069f2 not edx */
  EDX = (~(EDX));
  /* 100069f4 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 100069f7 mov eax, ebx */
  EAX = (EBX);
L_100069f9:;
  /* 100069f9 pop edi */
  EDI = (pop32());
  /* 100069fa pop esi */
  ESI = (pop32());
  /* 100069fb pop ebx */
  EBX = (pop32());
  /* 100069fc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100069fd ret  */
  ESPCHK(0x10006903u, _esp0);
  ESP += 4; return;
}

/* FUN_100069fe @ 0x100069fe (137 bytes, 50 insns) */
void f_100069fe(void) {
  FTRACE(0x100069feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100069fe push ebx */
  push32((uint32_t)(EBX));
  /* 100069ff xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10006a01 cmp dword ptr [0x1000c2cc], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1000c2cc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006a07 push esi */
  push32((uint32_t)(ESI));
  /* 10006a08 push edi */
  push32((uint32_t)(EDI));
  /* 10006a09 jne 0x10006a4d */
  if (!C.zf) goto L_10006a4d;
  /* 10006a0b push 0x10009474 */
  push32((uint32_t)(0x10009474u));
  /* 10006a10 call dword ptr [0x100090a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090a8))), 0x10006a16u);
  /* 10006a16 mov edi, eax */
  EDI = (EAX);
  /* 10006a18 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006a1a je 0x10006a83 */
  if (C.zf) goto L_10006a83;
  /* 10006a1c mov esi, dword ptr [0x10009084] */
  ESI = (r32((uint32_t)(0x10009084)));
  /* 10006a22 push 0x10009468 */
  push32((uint32_t)(0x10009468u));
  /* 10006a27 push edi */
  push32((uint32_t)(EDI));
  /* 10006a28 call esi */
  call_ind((uint32_t)(ESI), 0x10006a2au);
  /* 10006a2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006a2c mov dword ptr [0x1000c2cc], eax */
  w32((uint32_t)(0x1000c2cc), (EAX));
  /* 10006a31 je 0x10006a83 */
  if (C.zf) goto L_10006a83;
  /* 10006a33 push 0x10009458 */
  push32((uint32_t)(0x10009458u));
  /* 10006a38 push edi */
  push32((uint32_t)(EDI));
  /* 10006a39 call esi */
  call_ind((uint32_t)(ESI), 0x10006a3bu);
  /* 10006a3b push 0x10009444 */
  push32((uint32_t)(0x10009444u));
  /* 10006a40 push edi */
  push32((uint32_t)(EDI));
  /* 10006a41 mov dword ptr [0x1000c2d0], eax */
  w32((uint32_t)(0x1000c2d0), (EAX));
  /* 10006a46 call esi */
  call_ind((uint32_t)(ESI), 0x10006a48u);
  /* 10006a48 mov dword ptr [0x1000c2d4], eax */
  w32((uint32_t)(0x1000c2d4), (EAX));
L_10006a4d:;
  /* 10006a4d mov eax, dword ptr [0x1000c2d0] */
  EAX = (r32((uint32_t)(0x1000c2d0)));
  /* 10006a52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006a54 je 0x10006a6c */
  if (C.zf) goto L_10006a6c;
  /* 10006a56 call eax */
  call_ind((uint32_t)(EAX), 0x10006a58u);
  /* 10006a58 mov ebx, eax */
  EBX = (EAX);
  /* 10006a5a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10006a5c je 0x10006a6c */
  if (C.zf) goto L_10006a6c;
  /* 10006a5e mov eax, dword ptr [0x1000c2d4] */
  EAX = (r32((uint32_t)(0x1000c2d4)));
  /* 10006a63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006a65 je 0x10006a6c */
  if (C.zf) goto L_10006a6c;
  /* 10006a67 push ebx */
  push32((uint32_t)(EBX));
  /* 10006a68 call eax */
  call_ind((uint32_t)(EAX), 0x10006a6au);
  /* 10006a6a mov ebx, eax */
  EBX = (EAX);
L_10006a6c:;
  /* 10006a6c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10006a70 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10006a74 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10006a78 push ebx */
  push32((uint32_t)(EBX));
  /* 10006a79 call dword ptr [0x1000c2cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000c2cc))), 0x10006a7fu);
L_10006a7f:;
  /* 10006a7f pop edi */
  EDI = (pop32());
  /* 10006a80 pop esi */
  ESI = (pop32());
  /* 10006a81 pop ebx */
  EBX = (pop32());
  /* 10006a82 ret  */
  ESPCHK(0x100069feu, _esp0);
  ESP += 4; return;
L_10006a83:;
  /* 10006a83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10006a85 jmp 0x10006a7f */
  goto L_10006a7f;
}

/* _strncpy @ 0x10006a90 (254 bytes, 109 insns) */
void f_10006a90(void) {
  FTRACE(0x10006a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006a90 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10006a94 push edi */
  push32((uint32_t)(EDI));
  /* 10006a95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10006a97 je 0x10006b13 */
  if (C.zf) goto L_10006b13;
  /* 10006a99 push esi */
  push32((uint32_t)(ESI));
  /* 10006a9a push ebx */
  push32((uint32_t)(EBX));
  /* 10006a9b mov ebx, ecx */
  EBX = (ECX);
  /* 10006a9d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10006aa1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10006aa7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10006aab jne 0x10006ab4 */
  if (!C.zf) goto L_10006ab4;
  /* 10006aad shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10006ab0 jne 0x10006b21 */
  if (!C.zf) goto L_10006b21;
  /* 10006ab2 jmp 0x10006ad5 */
  goto L_10006ad5;
L_10006ab4:;
  /* 10006ab4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10006ab6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10006ab7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10006ab9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10006aba dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10006abb je 0x10006ae2 */
  if (C.zf) goto L_10006ae2;
  /* 10006abd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10006abf je 0x10006aea */
  if (C.zf) goto L_10006aea;
  /* 10006ac1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10006ac7 jne 0x10006ab4 */
  if (!C.zf) goto L_10006ab4;
  /* 10006ac9 mov ebx, ecx */
  EBX = (ECX);
  /* 10006acb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10006ace jne 0x10006b21 */
  if (!C.zf) goto L_10006b21;
L_10006ad0:;
  /* 10006ad0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10006ad3 je 0x10006ae2 */
  if (C.zf) goto L_10006ae2;
L_10006ad5:;
  /* 10006ad5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10006ad7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10006ad8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10006ada inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10006adb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10006add je 0x10006b0e */
  if (C.zf) goto L_10006b0e;
  /* 10006adf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10006ae0 jne 0x10006ad5 */
  if (!C.zf) goto L_10006ad5;
L_10006ae2:;
  /* 10006ae2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10006ae6 pop ebx */
  EBX = (pop32());
  /* 10006ae7 pop esi */
  ESI = (pop32());
  /* 10006ae8 pop edi */
  EDI = (pop32());
  /* 10006ae9 ret  */
  ESPCHK(0x10006a90u, _esp0);
  ESP += 4; return;
L_10006aea:;
  /* 10006aea test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10006af0 je 0x10006b04 */
  if (C.zf) goto L_10006b04;
L_10006af2:;
  /* 10006af2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10006af4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10006af5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10006af6 je 0x10006b86 */
  if (C.zf) goto L_10006b86;
  /* 10006afc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10006b02 jne 0x10006af2 */
  if (!C.zf) goto L_10006af2;
L_10006b04:;
  /* 10006b04 mov ebx, ecx */
  EBX = (ECX);
  /* 10006b06 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10006b09 jne 0x10006b77 */
  if (!C.zf) goto L_10006b77;
L_10006b0b:;
  /* 10006b0b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10006b0d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10006b0e:;
  /* 10006b0e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10006b0f jne 0x10006b0b */
  if (!C.zf) goto L_10006b0b;
  /* 10006b11 pop ebx */
  EBX = (pop32());
  /* 10006b12 pop esi */
  ESI = (pop32());
L_10006b13:;
  /* 10006b13 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10006b17 pop edi */
  EDI = (pop32());
  /* 10006b18 ret  */
  ESPCHK(0x10006a90u, _esp0);
  ESP += 4; return;
L_10006b19:;
  /* 10006b19 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10006b1b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10006b1e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10006b1f je 0x10006ad0 */
  if (C.zf) goto L_10006ad0;
L_10006b21:;
  /* 10006b21 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10006b26 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10006b28 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10006b2a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10006b2d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10006b2f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10006b31 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10006b34 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10006b39 je 0x10006b19 */
  if (C.zf) goto L_10006b19;
  /* 10006b3b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10006b3d je 0x10006b6b */
  if (C.zf) goto L_10006b6b;
  /* 10006b3f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10006b41 je 0x10006b61 */
  if (C.zf) goto L_10006b61;
  /* 10006b43 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10006b49 je 0x10006b57 */
  if (C.zf) goto L_10006b57;
  /* 10006b4b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10006b51 jne 0x10006b19 */
  if (!C.zf) goto L_10006b19;
  /* 10006b53 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10006b55 jmp 0x10006b6f */
  goto L_10006b6f;
L_10006b57:;
  /* 10006b57 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10006b5d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10006b5f jmp 0x10006b6f */
  goto L_10006b6f;
L_10006b61:;
  /* 10006b61 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10006b67 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10006b69 jmp 0x10006b6f */
  goto L_10006b6f;
L_10006b6b:;
  /* 10006b6b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10006b6d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10006b6f:;
  /* 10006b6f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10006b72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10006b74 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10006b75 je 0x10006b81 */
  if (C.zf) goto L_10006b81;
L_10006b77:;
  /* 10006b77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10006b79:;
  /* 10006b79 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10006b7b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10006b7e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10006b7f jne 0x10006b79 */
  if (!C.zf) goto L_10006b79;
L_10006b81:;
  /* 10006b81 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10006b84 jne 0x10006b0b */
  if (!C.zf) goto L_10006b0b;
L_10006b86:;
  /* 10006b86 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10006b8a pop ebx */
  EBX = (pop32());
  /* 10006b8b pop esi */
  ESI = (pop32());
  /* 10006b8c pop edi */
  EDI = (pop32());
  /* 10006b8d ret  */
  ESPCHK(0x10006a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b8e @ 0x10006b8e (115 bytes, 37 insns) */
void f_10006b8e(void) {
  FTRACE(0x10006b8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006b8e push esi */
  push32((uint32_t)(ESI));
  /* 10006b8f call 0x10006c0a */
  push32(0x10006b94u); f_10006c0a();
  /* 10006b94 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10006b98 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10006b9a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10006b9c mov eax, 0x1000b640 */
  EAX = (0x1000b640u);
L_10006ba1:;
  /* 10006ba1 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006ba3 je 0x10006bc7 */
  if (C.zf) goto L_10006bc7;
  /* 10006ba5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10006ba8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10006ba9 cmp eax, 0x1000b7a8 */
  { uint32_t _a=(EAX),_b=(0x1000b7a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006bae jl 0x10006ba1 */
  if ((C.sf!=C.of)) goto L_10006ba1;
  /* 10006bb0 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006bb3 jb 0x10006bd7 */
  if (C.cf) goto L_10006bd7;
  /* 10006bb5 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006bb8 ja 0x10006bd7 */
  if ((!C.cf&&!C.zf)) goto L_10006bd7;
  /* 10006bba call 0x10006c01 */
  push32(0x10006bbfu); f_10006c01();
  /* 10006bbf mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10006bc5 pop esi */
  ESI = (pop32());
  /* 10006bc6 ret  */
  ESPCHK(0x10006b8eu, _esp0);
  ESP += 4; return;
L_10006bc7:;
  /* 10006bc7 call 0x10006c01 */
  push32(0x10006bccu); f_10006c01();
  /* 10006bcc mov ecx, dword ptr [esi*8 + 0x1000b644] */
  ECX = (r32((uint32_t)(ESI*8 + 0x1000b644)));
  /* 10006bd3 pop esi */
  ESI = (pop32());
  /* 10006bd4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10006bd6 ret  */
  ESPCHK(0x10006b8eu, _esp0);
  ESP += 4; return;
L_10006bd7:;
  /* 10006bd7 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006bdd jb 0x10006bf4 */
  if (C.cf) goto L_10006bf4;
  /* 10006bdf cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006be5 ja 0x10006bf4 */
  if ((!C.cf&&!C.zf)) goto L_10006bf4;
  /* 10006be7 call 0x10006c01 */
  push32(0x10006becu); f_10006c01();
  /* 10006bec mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10006bf2 pop esi */
  ESI = (pop32());
  /* 10006bf3 ret  */
  ESPCHK(0x10006b8eu, _esp0);
  ESP += 4; return;
L_10006bf4:;
  /* 10006bf4 call 0x10006c01 */
  push32(0x10006bf9u); f_10006c01();
  /* 10006bf9 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10006bff pop esi */
  ESI = (pop32());
  /* 10006c00 ret  */
  ESPCHK(0x10006b8eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006c01 @ 0x10006c01 (9 bytes, 3 insns) */
void f_10006c01(void) {
  FTRACE(0x10006c01u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006c01 call 0x100046c0 */
  push32(0x10006c06u); f_100046c0();
  /* 10006c06 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10006c09 ret  */
  ESPCHK(0x10006c01u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c0a @ 0x10006c0a (9 bytes, 3 insns) */
void f_10006c0a(void) {
  FTRACE(0x10006c0au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006c0a call 0x100046c0 */
  push32(0x10006c0fu); f_100046c0();
  /* 10006c0f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10006c12 ret  */
  ESPCHK(0x10006c0au, _esp0);
  ESP += 4; return;
}

/* FUN_10006c13 @ 0x10006c13 (127 bytes, 48 insns) */
void f_10006c13(void) {
  FTRACE(0x10006c13u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006c13 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10006c17 push esi */
  push32((uint32_t)(ESI));
  /* 10006c18 cmp ecx, dword ptr [0x1000d7e0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1000d7e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006c1e push edi */
  push32((uint32_t)(EDI));
  /* 10006c1f jae 0x10006c79 */
  if (!C.cf) goto L_10006c79;
  /* 10006c21 mov eax, ecx */
  EAX = (ECX);
  /* 10006c23 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10006c26 lea edi, [eax*4 + 0x1000d6e0] */
  EDI = ((uint32_t)(EAX*4 + 0x1000d6e0));
  /* 10006c2d mov eax, ecx */
  EAX = (ECX);
  /* 10006c2f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10006c32 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10006c35 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10006c37 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10006c3a add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10006c3c test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10006c40 je 0x10006c79 */
  if (C.zf) goto L_10006c79;
  /* 10006c42 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006c45 je 0x10006c79 */
  if (C.zf) goto L_10006c79;
  /* 10006c47 cmp dword ptr [0x1000c110], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1000c110))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006c4e jne 0x10006c6f */
  if (!C.zf) goto L_10006c6f;
  /* 10006c50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10006c52 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10006c54 je 0x10006c66 */
  if (C.zf) goto L_10006c66;
  /* 10006c56 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10006c57 je 0x10006c61 */
  if (C.zf) goto L_10006c61;
  /* 10006c59 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10006c5a jne 0x10006c6f */
  if (!C.zf) goto L_10006c6f;
  /* 10006c5c push eax */
  push32((uint32_t)(EAX));
  /* 10006c5d push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10006c5f jmp 0x10006c69 */
  goto L_10006c69;
L_10006c61:;
  /* 10006c61 push eax */
  push32((uint32_t)(EAX));
  /* 10006c62 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10006c64 jmp 0x10006c69 */
  goto L_10006c69;
L_10006c66:;
  /* 10006c66 push eax */
  push32((uint32_t)(EAX));
  /* 10006c67 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_10006c69:;
  /* 10006c69 call dword ptr [0x100090ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090ac))), 0x10006c6fu);
L_10006c6f:;
  /* 10006c6f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10006c71 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 10006c75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10006c77 jmp 0x10006c8f */
  goto L_10006c8f;
L_10006c79:;
  /* 10006c79 call 0x10006c01 */
  push32(0x10006c7eu); f_10006c01();
  /* 10006c7e mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10006c84 call 0x10006c0a */
  push32(0x10006c89u); f_10006c0a();
  /* 10006c89 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10006c8c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10006c8f:;
  /* 10006c8f pop edi */
  EDI = (pop32());
  /* 10006c90 pop esi */
  ESI = (pop32());
  /* 10006c91 ret  */
  ESPCHK(0x10006c13u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c92 @ 0x10006c92 (66 bytes, 19 insns) */
void f_10006c92(void) {
  FTRACE(0x10006c92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006c92 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10006c96 cmp eax, dword ptr [0x1000d7e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1000d7e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006c9c jae 0x10006cbd */
  if (!C.cf) goto L_10006cbd;
  /* 10006c9e mov ecx, eax */
  ECX = (EAX);
  /* 10006ca0 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10006ca3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10006ca6 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10006ca9 mov ecx, dword ptr [ecx*4 + 0x1000d6e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1000d6e0)));
  /* 10006cb0 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10006cb5 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10006cb8 je 0x10006cbd */
  if (C.zf) goto L_10006cbd;
  /* 10006cba mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10006cbc ret  */
  ESPCHK(0x10006c92u, _esp0);
  ESP += 4; return;
L_10006cbd:;
  /* 10006cbd call 0x10006c01 */
  push32(0x10006cc2u); f_10006c01();
  /* 10006cc2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10006cc8 call 0x10006c0a */
  push32(0x10006ccdu); f_10006c0a();
  /* 10006ccd and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10006cd0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10006cd3 ret  */
  ESPCHK(0x10006c92u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cd4 @ 0x10006cd4 (95 bytes, 34 insns) */
void f_10006cd4(void) {
  FTRACE(0x10006cd4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006cd4 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10006cd8 push ebx */
  push32((uint32_t)(EBX));
  /* 10006cd9 mov ecx, eax */
  ECX = (EAX);
  /* 10006cdb and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10006cde sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10006ce1 push esi */
  push32((uint32_t)(ESI));
  /* 10006ce2 push edi */
  push32((uint32_t)(EDI));
  /* 10006ce3 mov esi, dword ptr [ecx*4 + 0x1000d6e0] */
  ESI = (r32((uint32_t)(ECX*4 + 0x1000d6e0)));
  /* 10006cea lea ebx, [ecx*4 + 0x1000d6e0] */
  EBX = ((uint32_t)(ECX*4 + 0x1000d6e0));
  /* 10006cf1 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 10006cf4 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 10006cf7 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10006cf9 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006cfd jne 0x10006d22 */
  if (!C.zf) goto L_10006d22;
  /* 10006cff push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10006d01 call 0x100057aa */
  push32(0x10006d06u); f_100057aa();
  /* 10006d06 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006d0a pop ecx */
  ECX = (pop32());
  /* 10006d0b jne 0x10006d1a */
  if (!C.zf) goto L_10006d1a;
  /* 10006d0d lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 10006d10 push eax */
  push32((uint32_t)(EAX));
  /* 10006d11 call dword ptr [0x1000908c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000908c))), 0x10006d17u);
  /* 10006d17 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_10006d1a:;
  /* 10006d1a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10006d1c call 0x1000580b */
  push32(0x10006d21u); f_1000580b();
  /* 10006d21 pop ecx */
  ECX = (pop32());
L_10006d22:;
  /* 10006d22 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10006d24 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 10006d28 push eax */
  push32((uint32_t)(EAX));
  /* 10006d29 call dword ptr [0x10009000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009000))), 0x10006d2fu);
  /* 10006d2f pop edi */
  EDI = (pop32());
  /* 10006d30 pop esi */
  ESI = (pop32());
  /* 10006d31 pop ebx */
  EBX = (pop32());
  /* 10006d32 ret  */
  ESPCHK(0x10006cd4u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d33 @ 0x10006d33 (34 bytes, 10 insns) */
void f_10006d33(void) {
  FTRACE(0x10006d33u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006d33 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10006d37 mov ecx, eax */
  ECX = (EAX);
  /* 10006d39 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10006d3c sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10006d3f lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10006d42 mov ecx, dword ptr [ecx*4 + 0x1000d6e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1000d6e0)));
  /* 10006d49 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 10006d4d push eax */
  push32((uint32_t)(EAX));
  /* 10006d4e call dword ptr [0x1000900c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000900c))), 0x10006d54u);
  /* 10006d54 ret  */
  ESPCHK(0x10006d33u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dd6 @ 0x10006dd6 (46 bytes, 22 insns) */
void f_10006dd6(void) {
  FTRACE(0x10006dd6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006dd6 push esi */
  push32((uint32_t)(ESI));
  /* 10006dd7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10006ddb push esi */
  push32((uint32_t)(ESI));
  /* 10006ddc call 0x10006e04 */
  push32(0x10006de1u); f_10006e04();
  /* 10006de1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006de3 pop ecx */
  ECX = (pop32());
  /* 10006de4 je 0x10006deb */
  if (C.zf) goto L_10006deb;
  /* 10006de6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10006de9 pop esi */
  ESI = (pop32());
  /* 10006dea ret  */
  ESPCHK(0x10006dd6u, _esp0);
  ESP += 4; return;
L_10006deb:;
  /* 10006deb test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 10006def je 0x10006e00 */
  if (C.zf) goto L_10006e00;
  /* 10006df1 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10006df4 call 0x100076e2 */
  push32(0x10006df9u); f_100076e2();
  /* 10006df9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10006dfb pop ecx */
  ECX = (pop32());
  /* 10006dfc pop esi */
  ESI = (pop32());
  /* 10006dfd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10006dff ret  */
  ESPCHK(0x10006dd6u, _esp0);
  ESP += 4; return;
L_10006e00:;
  /* 10006e00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10006e02 pop esi */
  ESI = (pop32());
  /* 10006e03 ret  */
  ESPCHK(0x10006dd6u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e04 @ 0x10006e04 (92 bytes, 40 insns) */
void f_10006e04(void) {
  FTRACE(0x10006e04u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006e04 push ebx */
  push32((uint32_t)(EBX));
  /* 10006e05 push esi */
  push32((uint32_t)(ESI));
  /* 10006e06 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10006e0a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10006e0c push edi */
  push32((uint32_t)(EDI));
  /* 10006e0d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10006e10 mov ecx, eax */
  ECX = (EAX);
  /* 10006e12 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10006e15 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10006e18 jne 0x10006e51 */
  if (!C.zf) goto L_10006e51;
  /* 10006e1a test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 10006e1e je 0x10006e51 */
  if (C.zf) goto L_10006e51;
  /* 10006e20 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 10006e23 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 10006e25 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10006e27 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10006e29 jle 0x10006e51 */
  if ((C.zf||C.sf!=C.of)) goto L_10006e51;
  /* 10006e2b push edi */
  push32((uint32_t)(EDI));
  /* 10006e2c push eax */
  push32((uint32_t)(EAX));
  /* 10006e2d push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10006e30 call 0x10005124 */
  push32(0x10006e35u); f_10005124();
  /* 10006e35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10006e38 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006e3a jne 0x10006e4a */
  if (!C.zf) goto L_10006e4a;
  /* 10006e3c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10006e3f test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 10006e41 je 0x10006e51 */
  if (C.zf) goto L_10006e51;
  /* 10006e43 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 10006e45 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10006e48 jmp 0x10006e51 */
  goto L_10006e51;
L_10006e4a:;
  /* 10006e4a or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 10006e4e or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_10006e51:;
  /* 10006e51 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 10006e54 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10006e58 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10006e5a pop edi */
  EDI = (pop32());
  /* 10006e5b mov eax, ebx */
  EAX = (EBX);
  /* 10006e5d pop esi */
  ESI = (pop32());
  /* 10006e5e pop ebx */
  EBX = (pop32());
  /* 10006e5f ret  */
  ESPCHK(0x10006e04u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e69 @ 0x10006e69 (164 bytes, 66 insns) */
void f_10006e69(void) {
  FTRACE(0x10006e69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006e69 push ebx */
  push32((uint32_t)(EBX));
  /* 10006e6a push esi */
  push32((uint32_t)(ESI));
  /* 10006e6b push edi */
  push32((uint32_t)(EDI));
  /* 10006e6c push 2 */
  push32((uint32_t)(0x2u));
  /* 10006e6e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10006e70 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10006e72 call 0x100057aa */
  push32(0x10006e77u); f_100057aa();
  /* 10006e77 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10006e79 pop ecx */
  ECX = (pop32());
  /* 10006e7a cmp dword ptr [0x1000d6c0], esi */
  { uint32_t _a=(r32((uint32_t)(0x1000d6c0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006e80 jle 0x10006ef6 */
  if ((C.zf||C.sf!=C.of)) goto L_10006ef6;
L_10006e82:;
  /* 10006e82 mov eax, dword ptr [0x1000c6a8] */
  EAX = (r32((uint32_t)(0x1000c6a8)));
  /* 10006e87 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 10006e8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006e8c je 0x10006eed */
  if (C.zf) goto L_10006eed;
  /* 10006e8e test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 10006e92 je 0x10006eed */
  if (C.zf) goto L_10006eed;
  /* 10006e94 push eax */
  push32((uint32_t)(EAX));
  /* 10006e95 push esi */
  push32((uint32_t)(ESI));
  /* 10006e96 call 0x1000546c */
  push32(0x10006e9bu); f_1000546c();
  /* 10006e9b mov eax, dword ptr [0x1000c6a8] */
  EAX = (r32((uint32_t)(0x1000c6a8)));
  /* 10006ea0 pop ecx */
  ECX = (pop32());
  /* 10006ea1 pop ecx */
  ECX = (pop32());
  /* 10006ea2 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 10006ea5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10006ea8 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 10006eab je 0x10006edd */
  if (C.zf) goto L_10006edd;
  /* 10006ead cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006eb2 jne 0x10006ec3 */
  if (!C.zf) goto L_10006ec3;
  /* 10006eb4 push eax */
  push32((uint32_t)(EAX));
  /* 10006eb5 call 0x10006dd6 */
  push32(0x10006ebau); f_10006dd6();
  /* 10006eba cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006ebd pop ecx */
  ECX = (pop32());
  /* 10006ebe je 0x10006edd */
  if (C.zf) goto L_10006edd;
  /* 10006ec0 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10006ec1 jmp 0x10006edd */
  goto L_10006edd;
L_10006ec3:;
  /* 10006ec3 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006ec8 jne 0x10006edd */
  if (!C.zf) goto L_10006edd;
  /* 10006eca test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 10006ecd je 0x10006edd */
  if (C.zf) goto L_10006edd;
  /* 10006ecf push eax */
  push32((uint32_t)(EAX));
  /* 10006ed0 call 0x10006dd6 */
  push32(0x10006ed5u); f_10006dd6();
  /* 10006ed5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006ed8 pop ecx */
  ECX = (pop32());
  /* 10006ed9 jne 0x10006edd */
  if (!C.zf) goto L_10006edd;
  /* 10006edb or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_10006edd:;
  /* 10006edd mov eax, dword ptr [0x1000c6a8] */
  EAX = (r32((uint32_t)(0x1000c6a8)));
  /* 10006ee2 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 10006ee5 push esi */
  push32((uint32_t)(ESI));
  /* 10006ee6 call 0x100054be */
  push32(0x10006eebu); f_100054be();
  /* 10006eeb pop ecx */
  ECX = (pop32());
  /* 10006eec pop ecx */
  ECX = (pop32());
L_10006eed:;
  /* 10006eed inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10006eee cmp esi, dword ptr [0x1000d6c0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1000d6c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006ef4 jl 0x10006e82 */
  if ((C.sf!=C.of)) goto L_10006e82;
L_10006ef6:;
  /* 10006ef6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10006ef8 call 0x1000580b */
  push32(0x10006efdu); f_1000580b();
  /* 10006efd cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006f02 pop ecx */
  ECX = (pop32());
  /* 10006f03 mov eax, ebx */
  EAX = (EBX);
  /* 10006f05 je 0x10006f09 */
  if (C.zf) goto L_10006f09;
  /* 10006f07 mov eax, edi */
  EAX = (EDI);
L_10006f09:;
  /* 10006f09 pop edi */
  EDI = (pop32());
  /* 10006f0a pop esi */
  ESI = (pop32());
  /* 10006f0b pop ebx */
  EBX = (pop32());
  /* 10006f0c ret  */
  ESPCHK(0x10006e69u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10006f0d (9 bytes, 4 insns) */
void f_10006f0d(void) {
  FTRACE(0x10006f0du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006f0d push 2 */
  push32((uint32_t)(0x2u));
  /* 10006f0f call 0x10003bc8 */
  push32(0x10006f14u); f_10003bc8();
  /* 10006f14 pop ecx */
  ECX = (pop32());
  /* 10006f15 ret  */
  ESPCHK(0x10006f0du, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10006f20 (88 bytes, 40 insns) */
void f_10006f20(void) {
  FTRACE(0x10006f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006f20 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10006f24 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10006f28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10006f2a je 0x10006f73 */
  if (C.zf) goto L_10006f73;
  /* 10006f2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10006f2e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10006f32 push edi */
  push32((uint32_t)(EDI));
  /* 10006f33 mov edi, ecx */
  EDI = (ECX);
  /* 10006f35 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006f38 jb 0x10006f67 */
  if (C.cf) goto L_10006f67;
  /* 10006f3a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10006f3c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10006f3f je 0x10006f49 */
  if (C.zf) goto L_10006f49;
  /* 10006f41 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10006f43:;
  /* 10006f43 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10006f45 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10006f46 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10006f47 jne 0x10006f43 */
  if (!C.zf) goto L_10006f43;
L_10006f49:;
  /* 10006f49 mov ecx, eax */
  ECX = (EAX);
  /* 10006f4b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10006f4e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10006f50 mov ecx, eax */
  ECX = (EAX);
  /* 10006f52 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10006f55 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10006f57 mov ecx, edx */
  ECX = (EDX);
  /* 10006f59 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10006f5c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10006f5f je 0x10006f67 */
  if (C.zf) goto L_10006f67;
  /* 10006f61 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10006f63 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10006f65 je 0x10006f6d */
  if (C.zf) goto L_10006f6d;
L_10006f67:;
  /* 10006f67 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10006f69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10006f6a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10006f6b jne 0x10006f67 */
  if (!C.zf) goto L_10006f67;
L_10006f6d:;
  /* 10006f6d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10006f71 pop edi */
  EDI = (pop32());
  /* 10006f72 ret  */
  ESPCHK(0x10006f20u, _esp0);
  ESP += 4; return;
L_10006f73:;
  /* 10006f73 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10006f77 ret  */
  ESPCHK(0x10006f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f78 @ 0x10006f78 (27 bytes, 13 insns) */
void f_10006f78(void) {
  FTRACE(0x10006f78u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006f78 mov eax, dword ptr [0x1000c304] */
  EAX = (r32((uint32_t)(0x1000c304)));
  /* 10006f7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006f7f je 0x10006f90 */
  if (C.zf) goto L_10006f90;
  /* 10006f81 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10006f85 call eax */
  call_ind((uint32_t)(EAX), 0x10006f87u);
  /* 10006f87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006f89 pop ecx */
  ECX = (pop32());
  /* 10006f8a je 0x10006f90 */
  if (C.zf) goto L_10006f90;
  /* 10006f8c push 1 */
  push32((uint32_t)(0x1u));
  /* 10006f8e pop eax */
  EAX = (pop32());
  /* 10006f8f ret  */
  ESPCHK(0x10006f78u, _esp0);
  ESP += 4; return;
L_10006f90:;
  /* 10006f90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10006f92 ret  */
  ESPCHK(0x10006f78u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f93 @ 0x10006f93 (511 bytes, 193 insns) */
void f_10006f93(void) {
  FTRACE(0x10006f93u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10006f93 push ebp */
  push32((uint32_t)(EBP));
  /* 10006f94 mov ebp, esp */
  EBP = (ESP);
  /* 10006f96 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10006f98 push 0x10009488 */
  push32((uint32_t)(0x10009488u));
  /* 10006f9d push 0x100079c4 */
  push32((uint32_t)(0x100079c4u));
  /* 10006fa2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10006fa8 push eax */
  push32((uint32_t)(EAX));
  /* 10006fa9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10006fb0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10006fb3 push ebx */
  push32((uint32_t)(EBX));
  /* 10006fb4 push esi */
  push32((uint32_t)(ESI));
  /* 10006fb5 push edi */
  push32((uint32_t)(EDI));
  /* 10006fb6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10006fb9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10006fbb cmp dword ptr [0x1000c30c], edi */
  { uint32_t _a=(r32((uint32_t)(0x1000c30c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10006fc1 jne 0x10007009 */
  if (!C.zf) goto L_10007009;
  /* 10006fc3 push edi */
  push32((uint32_t)(EDI));
  /* 10006fc4 push edi */
  push32((uint32_t)(EDI));
  /* 10006fc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10006fc7 pop ebx */
  EBX = (pop32());
  /* 10006fc8 push ebx */
  push32((uint32_t)(EBX));
  /* 10006fc9 push 0x10009484 */
  push32((uint32_t)(0x10009484u));
  /* 10006fce mov esi, 0x100 */
  ESI = (0x100u);
  /* 10006fd3 push esi */
  push32((uint32_t)(ESI));
  /* 10006fd4 push edi */
  push32((uint32_t)(EDI));
  /* 10006fd5 call dword ptr [0x100090b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090b8))), 0x10006fdbu);
  /* 10006fdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006fdd je 0x10006fe7 */
  if (C.zf) goto L_10006fe7;
  /* 10006fdf mov dword ptr [0x1000c30c], ebx */
  w32((uint32_t)(0x1000c30c), (EBX));
  /* 10006fe5 jmp 0x10007009 */
  goto L_10007009;
L_10006fe7:;
  /* 10006fe7 push edi */
  push32((uint32_t)(EDI));
  /* 10006fe8 push edi */
  push32((uint32_t)(EDI));
  /* 10006fe9 push ebx */
  push32((uint32_t)(EBX));
  /* 10006fea push 0x10009480 */
  push32((uint32_t)(0x10009480u));
  /* 10006fef push esi */
  push32((uint32_t)(ESI));
  /* 10006ff0 push edi */
  push32((uint32_t)(EDI));
  /* 10006ff1 call dword ptr [0x100090b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090b4))), 0x10006ff7u);
  /* 10006ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10006ff9 je 0x10007121 */
  if (C.zf) goto L_10007121;
  /* 10006fff mov dword ptr [0x1000c30c], 2 */
  w32((uint32_t)(0x1000c30c), (0x2u));
L_10007009:;
  /* 10007009 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000700c jle 0x1000701e */
  if ((C.zf||C.sf!=C.of)) goto L_1000701e;
  /* 1000700e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10007011 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10007014 call 0x100071b7 */
  push32(0x10007019u); f_100071b7();
  /* 10007019 pop ecx */
  ECX = (pop32());
  /* 1000701a pop ecx */
  ECX = (pop32());
  /* 1000701b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1000701e:;
  /* 1000701e mov eax, dword ptr [0x1000c30c] */
  EAX = (r32((uint32_t)(0x1000c30c)));
  /* 10007023 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007026 jne 0x10007045 */
  if (!C.zf) goto L_10007045;
  /* 10007028 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1000702b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1000702e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10007031 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10007034 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10007037 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1000703a call dword ptr [0x100090b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090b4))), 0x10007040u);
  /* 10007040 jmp 0x10007123 */
  goto L_10007123;
L_10007045:;
  /* 10007045 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007048 jne 0x10007121 */
  if (!C.zf) goto L_10007121;
  /* 1000704e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007051 jne 0x1000705b */
  if (!C.zf) goto L_1000705b;
  /* 10007053 mov eax, dword ptr [0x1000c2fc] */
  EAX = (r32((uint32_t)(0x1000c2fc)));
  /* 10007058 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1000705b:;
  /* 1000705b push edi */
  push32((uint32_t)(EDI));
  /* 1000705c push edi */
  push32((uint32_t)(EDI));
  /* 1000705d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10007060 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10007063 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10007066 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10007068 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000706a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1000706d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1000706e push eax */
  push32((uint32_t)(EAX));
  /* 1000706f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10007072 call dword ptr [0x100090b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090b0))), 0x10007078u);
  /* 10007078 mov ebx, eax */
  EBX = (EAX);
  /* 1000707a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1000707d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000707f je 0x10007121 */
  if (C.zf) goto L_10007121;
  /* 10007085 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10007088 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1000708b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000708e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10007090 call 0x10007aa0 */
  push32(0x10007095u); f_10007aa0();
  /* 10007095 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10007098 mov eax, esp */
  EAX = (ESP);
  /* 1000709a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1000709d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100070a1 jmp 0x100070b6 */
  goto L_100070b6;
  /* 100070a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100070a5 pop eax */
  EAX = (pop32());
  /* 100070a6 ret  */
  ESPCHK(0x10006f93u, _esp0);
  ESP += 4; return;
  /* 100070a7 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 100070aa xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100070ac mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 100070af or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100070b3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_100070b6:;
  /* 100070b6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100070b9 je 0x10007121 */
  if (C.zf) goto L_10007121;
  /* 100070bb push ebx */
  push32((uint32_t)(EBX));
  /* 100070bc push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 100070bf push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100070c2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100070c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100070c7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 100070ca call dword ptr [0x100090b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090b0))), 0x100070d0u);
  /* 100070d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100070d2 je 0x10007121 */
  if (C.zf) goto L_10007121;
  /* 100070d4 push edi */
  push32((uint32_t)(EDI));
  /* 100070d5 push edi */
  push32((uint32_t)(EDI));
  /* 100070d6 push ebx */
  push32((uint32_t)(EBX));
  /* 100070d7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 100070da push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100070dd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100070e0 call dword ptr [0x100090b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090b8))), 0x100070e6u);
  /* 100070e6 mov esi, eax */
  ESI = (EAX);
  /* 100070e8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 100070eb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100070ed je 0x10007121 */
  if (C.zf) goto L_10007121;
  /* 100070ef test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 100070f3 je 0x10007135 */
  if (C.zf) goto L_10007135;
  /* 100070f5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100070f8 je 0x100071b0 */
  if (C.zf) goto L_100071b0;
  /* 100070fe cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007101 jg 0x10007121 */
  if ((!C.zf&&C.sf==C.of)) goto L_10007121;
  /* 10007103 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10007106 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10007109 push ebx */
  push32((uint32_t)(EBX));
  /* 1000710a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1000710d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10007110 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10007113 call dword ptr [0x100090b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090b8))), 0x10007119u);
  /* 10007119 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1000711b jne 0x100071b0 */
  if (!C.zf) goto L_100071b0;
L_10007121:;
  /* 10007121 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10007123:;
  /* 10007123 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10007126 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10007129 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10007130 pop edi */
  EDI = (pop32());
  /* 10007131 pop esi */
  ESI = (pop32());
  /* 10007132 pop ebx */
  EBX = (pop32());
  /* 10007133 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10007134 ret  */
  ESPCHK(0x10006f93u, _esp0);
  ESP += 4; return;
L_10007135:;
  /* 10007135 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1000713c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1000713f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10007142 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10007144 call 0x10007aa0 */
  push32(0x10007149u); f_10007aa0();
  /* 10007149 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1000714c mov ebx, esp */
  EBX = (ESP);
  /* 1000714e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 10007151 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10007155 jmp 0x10007169 */
  goto L_10007169;
  /* 10007157 push 1 */
  push32((uint32_t)(0x1u));
  /* 10007159 pop eax */
  EAX = (pop32());
  /* 1000715a ret  */
  ESPCHK(0x10006f93u, _esp0);
  ESP += 4; return;
  /* 1000715b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1000715e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10007160 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10007162 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10007166 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_10007169:;
  /* 10007169 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000716b je 0x10007121 */
  if (C.zf) goto L_10007121;
  /* 1000716d push esi */
  push32((uint32_t)(ESI));
  /* 1000716e push ebx */
  push32((uint32_t)(EBX));
  /* 1000716f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10007172 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10007175 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10007178 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1000717b call dword ptr [0x100090b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090b8))), 0x10007181u);
  /* 10007181 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007183 je 0x10007121 */
  if (C.zf) goto L_10007121;
  /* 10007185 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007188 push edi */
  push32((uint32_t)(EDI));
  /* 10007189 push edi */
  push32((uint32_t)(EDI));
  /* 1000718a jne 0x10007190 */
  if (!C.zf) goto L_10007190;
  /* 1000718c push edi */
  push32((uint32_t)(EDI));
  /* 1000718d push edi */
  push32((uint32_t)(EDI));
  /* 1000718e jmp 0x10007196 */
  goto L_10007196;
L_10007190:;
  /* 10007190 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10007193 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_10007196:;
  /* 10007196 push esi */
  push32((uint32_t)(ESI));
  /* 10007197 push ebx */
  push32((uint32_t)(EBX));
  /* 10007198 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1000719d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 100071a0 call dword ptr [0x10009060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10009060))), 0x100071a6u);
  /* 100071a6 mov esi, eax */
  ESI = (EAX);
  /* 100071a8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100071aa je 0x10007121 */
  if (C.zf) goto L_10007121;
L_100071b0:;
  /* 100071b0 mov eax, esi */
  EAX = (ESI);
  /* 100071b2 jmp 0x10007123 */
  goto L_10007123;
}

/* FUN_100071b7 @ 0x100071b7 (43 bytes, 20 insns) */
void f_100071b7(void) {
  FTRACE(0x100071b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100071b7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 100071bb mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100071bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100071c1 push esi */
  push32((uint32_t)(ESI));
  /* 100071c2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 100071c5 je 0x100071d4 */
  if (C.zf) goto L_100071d4;
L_100071c7:;
  /* 100071c7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100071ca je 0x100071d4 */
  if (C.zf) goto L_100071d4;
  /* 100071cc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100071cd mov esi, ecx */
  ESI = (ECX);
  /* 100071cf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100071d0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100071d2 jne 0x100071c7 */
  if (!C.zf) goto L_100071c7;
L_100071d4:;
  /* 100071d4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100071d7 pop esi */
  ESI = (pop32());
  /* 100071d8 jne 0x100071df */
  if (!C.zf) goto L_100071df;
  /* 100071da sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100071de ret  */
  ESPCHK(0x100071b7u, _esp0);
  ESP += 4; return;
L_100071df:;
  /* 100071df mov eax, edx */
  EAX = (EDX);
  /* 100071e1 ret  */
  ESPCHK(0x100071b7u, _esp0);
  ESP += 4; return;
}

/* FUN_100071e2 @ 0x100071e2 (318 bytes, 123 insns) */
void f_100071e2(void) {
  FTRACE(0x100071e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100071e2 push ebp */
  push32((uint32_t)(EBP));
  /* 100071e3 mov ebp, esp */
  EBP = (ESP);
  /* 100071e5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 100071e7 push 0x100094a0 */
  push32((uint32_t)(0x100094a0u));
  /* 100071ec push 0x100079c4 */
  push32((uint32_t)(0x100079c4u));
  /* 100071f1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 100071f7 push eax */
  push32((uint32_t)(EAX));
  /* 100071f8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 100071ff sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007202 push ebx */
  push32((uint32_t)(EBX));
  /* 10007203 push esi */
  push32((uint32_t)(ESI));
  /* 10007204 push edi */
  push32((uint32_t)(EDI));
  /* 10007205 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10007208 mov eax, dword ptr [0x1000c310] */
  EAX = (r32((uint32_t)(0x1000c310)));
  /* 1000720d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1000720f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007211 jne 0x10007251 */
  if (!C.zf) goto L_10007251;
  /* 10007213 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10007216 push eax */
  push32((uint32_t)(EAX));
  /* 10007217 push 1 */
  push32((uint32_t)(0x1u));
  /* 10007219 pop esi */
  ESI = (pop32());
  /* 1000721a push esi */
  push32((uint32_t)(ESI));
  /* 1000721b push 0x10009484 */
  push32((uint32_t)(0x10009484u));
  /* 10007220 push esi */
  push32((uint32_t)(ESI));
  /* 10007221 call dword ptr [0x100090c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090c0))), 0x10007227u);
  /* 10007227 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007229 je 0x1000722f */
  if (C.zf) goto L_1000722f;
  /* 1000722b mov eax, esi */
  EAX = (ESI);
  /* 1000722d jmp 0x1000724c */
  goto L_1000724c;
L_1000722f:;
  /* 1000722f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10007232 push eax */
  push32((uint32_t)(EAX));
  /* 10007233 push esi */
  push32((uint32_t)(ESI));
  /* 10007234 push 0x10009480 */
  push32((uint32_t)(0x10009480u));
  /* 10007239 push esi */
  push32((uint32_t)(ESI));
  /* 1000723a push ebx */
  push32((uint32_t)(EBX));
  /* 1000723b call dword ptr [0x100090bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090bc))), 0x10007241u);
  /* 10007241 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007243 je 0x10007317 */
  if (C.zf) goto L_10007317;
  /* 10007249 push 2 */
  push32((uint32_t)(0x2u));
  /* 1000724b pop eax */
  EAX = (pop32());
L_1000724c:;
  /* 1000724c mov dword ptr [0x1000c310], eax */
  w32((uint32_t)(0x1000c310), (EAX));
L_10007251:;
  /* 10007251 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007254 jne 0x1000727a */
  if (!C.zf) goto L_1000727a;
  /* 10007256 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10007259 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000725b jne 0x10007262 */
  if (!C.zf) goto L_10007262;
  /* 1000725d mov eax, dword ptr [0x1000c2ec] */
  EAX = (r32((uint32_t)(0x1000c2ec)));
L_10007262:;
  /* 10007262 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10007265 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10007268 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1000726b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1000726e push eax */
  push32((uint32_t)(EAX));
  /* 1000726f call dword ptr [0x100090bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090bc))), 0x10007275u);
  /* 10007275 jmp 0x10007319 */
  goto L_10007319;
L_1000727a:;
  /* 1000727a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000727d jne 0x10007317 */
  if (!C.zf) goto L_10007317;
  /* 10007283 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007286 jne 0x10007290 */
  if (!C.zf) goto L_10007290;
  /* 10007288 mov eax, dword ptr [0x1000c2fc] */
  EAX = (r32((uint32_t)(0x1000c2fc)));
  /* 1000728d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10007290:;
  /* 10007290 push ebx */
  push32((uint32_t)(EBX));
  /* 10007291 push ebx */
  push32((uint32_t)(EBX));
  /* 10007292 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10007295 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10007298 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1000729b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1000729d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000729f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 100072a2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100072a3 push eax */
  push32((uint32_t)(EAX));
  /* 100072a4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100072a7 call dword ptr [0x100090b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090b0))), 0x100072adu);
  /* 100072ad mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100072b0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100072b2 je 0x10007317 */
  if (C.zf) goto L_10007317;
  /* 100072b4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 100072b7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 100072ba mov eax, edi */
  EAX = (EDI);
  /* 100072bc add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100072bf and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 100072c1 call 0x10007aa0 */
  push32(0x100072c6u); f_10007aa0();
  /* 100072c6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 100072c9 mov esi, esp */
  ESI = (ESP);
  /* 100072cb mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 100072ce push edi */
  push32((uint32_t)(EDI));
  /* 100072cf push ebx */
  push32((uint32_t)(EBX));
  /* 100072d0 push esi */
  push32((uint32_t)(ESI));
  /* 100072d1 call 0x10006f20 */
  push32(0x100072d6u); f_10006f20();
  /* 100072d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100072d9 jmp 0x100072e6 */
  goto L_100072e6;
  /* 100072db push 1 */
  push32((uint32_t)(0x1u));
  /* 100072dd pop eax */
  EAX = (pop32());
  /* 100072de ret  */
  ESPCHK(0x100071e2u, _esp0);
  ESP += 4; return;
  /* 100072df mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 100072e2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100072e4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100072e6:;
  /* 100072e6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100072ea cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100072ec je 0x10007317 */
  if (C.zf) goto L_10007317;
  /* 100072ee push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 100072f1 push esi */
  push32((uint32_t)(ESI));
  /* 100072f2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100072f5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100072f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100072fa push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100072fd call dword ptr [0x100090b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090b0))), 0x10007303u);
  /* 10007303 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007305 je 0x10007317 */
  if (C.zf) goto L_10007317;
  /* 10007307 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1000730a push eax */
  push32((uint32_t)(EAX));
  /* 1000730b push esi */
  push32((uint32_t)(ESI));
  /* 1000730c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1000730f call dword ptr [0x100090c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090c0))), 0x10007315u);
  /* 10007315 jmp 0x10007319 */
  goto L_10007319;
L_10007317:;
  /* 10007317 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10007319:;
  /* 10007319 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1000731c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1000731f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10007326 pop edi */
  EDI = (pop32());
  /* 10007327 pop esi */
  ESI = (pop32());
  /* 10007328 pop ebx */
  EBX = (pop32());
  /* 10007329 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000732a ret  */
  ESPCHK(0x100071e2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007330 @ 0x10007330 (664 bytes, 264 insns) [15 switch table(s)] */
void f_10007330(void) {
  FTRACE(0x10007330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007330 push ebp */
  push32((uint32_t)(EBP));
  /* 10007331 mov ebp, esp */
  EBP = (ESP);
  /* 10007333 push edi */
  push32((uint32_t)(EDI));
  /* 10007334 push esi */
  push32((uint32_t)(ESI));
  /* 10007335 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10007338 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1000733b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1000733e mov eax, ecx */
  EAX = (ECX);
  /* 10007340 mov edx, ecx */
  EDX = (ECX);
  /* 10007342 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10007344 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007346 jbe 0x10007350 */
  if ((C.cf||C.zf)) goto L_10007350;
  /* 10007348 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000734a jb 0x100074c8 */
  if (C.cf) goto L_100074c8;
L_10007350:;
  /* 10007350 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10007356 jne 0x1000736c */
  if (!C.zf) goto L_1000736c;
  /* 10007358 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1000735b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1000735e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007361 jb 0x1000738c */
  if (C.cf) goto L_1000738c;
  /* 10007363 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10007365 jmp dword ptr [edx*4 + 0x10007478] */
  switch (EDX) {
    case 0: goto L_10007488;
    case 1: goto L_10007490;
    case 2: goto L_1000749c;
    case 3: goto L_100074b0;
    default: x86_unimpl("switch@0x10007365 out of table"); return;
  }
L_1000736c:;
  /* 1000736c mov eax, edi */
  EAX = (EDI);
  /* 1000736e mov edx, 3 */
  EDX = (0x3u);
  /* 10007373 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007376 jb 0x10007384 */
  if (C.cf) goto L_10007384;
  /* 10007378 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1000737b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000737d jmp dword ptr [eax*4 + 0x10007390] */
  switch (EAX) {
    case 1: goto L_100073a0;
    case 2: goto L_100073cc;
    case 3: goto L_100073f0;
    default: x86_unimpl("switch@0x1000737d out of table"); return;
  }
L_10007384:;
  /* 10007384 jmp dword ptr [ecx*4 + 0x10007488] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10007488)))); return;
  /* 1000738b nop  */
  /* nop */
L_1000738c:;
  /* 1000738c jmp dword ptr [ecx*4 + 0x1000740c] */
  switch (ECX) {
    case 0: goto L_1000746f;
    case 1: goto L_1000745c;
    case 2: goto L_10007454;
    case 3: goto L_1000744c;
    case 4: goto L_10007444;
    case 5: goto L_1000743c;
    case 6: goto L_10007434;
    case 7: goto L_1000742c;
    default: x86_unimpl("switch@0x1000738c out of table"); return;
  }
  /* 10007393 nop  */
  /* nop */
L_100073a0:;
  /* 100073a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100073a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100073a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100073a6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100073a9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100073ac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100073af shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100073b2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100073b5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100073b8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100073bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100073be jb 0x1000738c */
  if (C.cf) goto L_1000738c;
  /* 100073c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100073c2 jmp dword ptr [edx*4 + 0x10007478] */
  switch (EDX) {
    case 0: goto L_10007488;
    case 1: goto L_10007490;
    case 2: goto L_1000749c;
    case 3: goto L_100074b0;
    default: x86_unimpl("switch@0x100073c2 out of table"); return;
  }
  /* 100073c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100073cc:;
  /* 100073cc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100073ce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100073d0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100073d2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100073d5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100073d8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100073db add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100073de add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100073e1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100073e4 jb 0x1000738c */
  if (C.cf) goto L_1000738c;
  /* 100073e6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100073e8 jmp dword ptr [edx*4 + 0x10007478] */
  switch (EDX) {
    case 0: goto L_10007488;
    case 1: goto L_10007490;
    case 2: goto L_1000749c;
    case 3: goto L_100074b0;
    default: x86_unimpl("switch@0x100073e8 out of table"); return;
  }
  /* 100073ef nop  */
  /* nop */
L_100073f0:;
  /* 100073f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100073f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100073f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100073f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100073f7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100073fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100073fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100073fe jb 0x1000738c */
  if (C.cf) goto L_1000738c;
  /* 10007400 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10007402 jmp dword ptr [edx*4 + 0x10007478] */
  switch (EDX) {
    case 0: goto L_10007488;
    case 1: goto L_10007490;
    case 2: goto L_1000749c;
    case 3: goto L_100074b0;
    default: x86_unimpl("switch@0x10007402 out of table"); return;
  }
  /* 10007409 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1000742c:;
  /* 1000742c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10007430 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10007434:;
  /* 10007434 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10007438 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1000743c:;
  /* 1000743c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10007440 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10007444:;
  /* 10007444 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10007448 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1000744c:;
  /* 1000744c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10007450 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10007454:;
  /* 10007454 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10007458 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1000745c:;
  /* 1000745c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10007460 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10007464 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1000746b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1000746d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1000746f:;
  /* 1000746f jmp dword ptr [edx*4 + 0x10007478] */
  switch (EDX) {
    case 0: goto L_10007488;
    case 1: goto L_10007490;
    case 2: goto L_1000749c;
    case 3: goto L_100074b0;
    default: x86_unimpl("switch@0x1000746f out of table"); return;
  }
  /* 10007476 mov edi, edi */
  EDI = (EDI);
L_10007488:;
  /* 10007488 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1000748b pop esi */
  ESI = (pop32());
  /* 1000748c pop edi */
  EDI = (pop32());
  /* 1000748d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000748e ret  */
  ESPCHK(0x10007330u, _esp0);
  ESP += 4; return;
  /* 1000748f nop  */
  /* nop */
L_10007490:;
  /* 10007490 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10007492 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10007494 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10007497 pop esi */
  ESI = (pop32());
  /* 10007498 pop edi */
  EDI = (pop32());
  /* 10007499 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000749a ret  */
  ESPCHK(0x10007330u, _esp0);
  ESP += 4; return;
  /* 1000749b nop  */
  /* nop */
L_1000749c:;
  /* 1000749c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000749e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100074a0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100074a3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100074a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100074a9 pop esi */
  ESI = (pop32());
  /* 100074aa pop edi */
  EDI = (pop32());
  /* 100074ab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100074ac ret  */
  ESPCHK(0x10007330u, _esp0);
  ESP += 4; return;
  /* 100074ad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100074b0:;
  /* 100074b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100074b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100074b4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100074b7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100074ba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100074bd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100074c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100074c3 pop esi */
  ESI = (pop32());
  /* 100074c4 pop edi */
  EDI = (pop32());
  /* 100074c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100074c6 ret  */
  ESPCHK(0x10007330u, _esp0);
  ESP += 4; return;
  /* 100074c7 nop  */
  /* nop */
L_100074c8:;
  /* 100074c8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 100074cc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 100074d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 100074d6 jne 0x100074fc */
  if (!C.zf) goto L_100074fc;
  /* 100074d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100074db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 100074de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100074e1 jb 0x100074f0 */
  if (C.cf) goto L_100074f0;
  /* 100074e3 std  */
  C.df=1;
  /* 100074e4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100074e6 cld  */
  C.df=0;
  /* 100074e7 jmp dword ptr [edx*4 + 0x10007610] */
  switch (EDX) {
    case 0: goto L_10007620;
    case 1: goto L_10007628;
    case 2: goto L_10007638;
    case 3: goto L_1000764c;
    default: x86_unimpl("switch@0x100074e7 out of table"); return;
  }
  /* 100074ee mov edi, edi */
  EDI = (EDI);
L_100074f0:;
  /* 100074f0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100074f2 jmp dword ptr [ecx*4 + 0x100075c0] */
  switch (ECX) {
    case 0: goto L_10007607;
    default: x86_unimpl("switch@0x100074f2 out of table"); return;
  }
  /* 100074f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100074fc:;
  /* 100074fc mov eax, edi */
  EAX = (EDI);
  /* 100074fe mov edx, 3 */
  EDX = (0x3u);
  /* 10007503 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007506 jb 0x10007514 */
  if (C.cf) goto L_10007514;
  /* 10007508 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1000750b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000750d jmp dword ptr [eax*4 + 0x10007518] */
  switch (EAX) {
    case 1: goto L_10007528;
    case 2: goto L_10007548;
    case 3: goto L_10007570;
    default: x86_unimpl("switch@0x1000750d out of table"); return;
  }
L_10007514:;
  /* 10007514 jmp dword ptr [ecx*4 + 0x10007610] */
  switch (ECX) {
    case 0: goto L_10007620;
    case 1: goto L_10007628;
    case 2: goto L_10007638;
    case 3: goto L_1000764c;
    default: x86_unimpl("switch@0x10007514 out of table"); return;
  }
  /* 1000751b nop  */
  /* nop */
L_10007528:;
  /* 10007528 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1000752b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1000752d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10007530 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10007531 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10007534 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10007535 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007538 jb 0x100074f0 */
  if (C.cf) goto L_100074f0;
  /* 1000753a std  */
  C.df=1;
  /* 1000753b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1000753d cld  */
  C.df=0;
  /* 1000753e jmp dword ptr [edx*4 + 0x10007610] */
  switch (EDX) {
    case 0: goto L_10007620;
    case 1: goto L_10007628;
    case 2: goto L_10007638;
    case 3: goto L_1000764c;
    default: x86_unimpl("switch@0x1000753e out of table"); return;
  }
  /* 10007545 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10007548:;
  /* 10007548 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1000754b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1000754d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10007550 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10007553 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10007556 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10007559 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000755c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000755f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007562 jb 0x100074f0 */
  if (C.cf) goto L_100074f0;
  /* 10007564 std  */
  C.df=1;
  /* 10007565 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10007567 cld  */
  C.df=0;
  /* 10007568 jmp dword ptr [edx*4 + 0x10007610] */
  switch (EDX) {
    case 0: goto L_10007620;
    case 1: goto L_10007628;
    case 2: goto L_10007638;
    case 3: goto L_1000764c;
    default: x86_unimpl("switch@0x10007568 out of table"); return;
  }
  /* 1000756f nop  */
  /* nop */
L_10007570:;
  /* 10007570 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10007573 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10007575 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10007578 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1000757b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1000757e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10007581 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10007584 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10007587 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000758a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1000758d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007590 jb 0x100074f0 */
  if (C.cf) goto L_100074f0;
  /* 10007596 std  */
  C.df=1;
  /* 10007597 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10007599 cld  */
  C.df=0;
  /* 1000759a jmp dword ptr [edx*4 + 0x10007610] */
  switch (EDX) {
    case 0: goto L_10007620;
    case 1: goto L_10007628;
    case 2: goto L_10007638;
    case 3: goto L_1000764c;
    default: x86_unimpl("switch@0x1000759a out of table"); return;
  }
  /* 100075a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 100075a4 les esi, ptr [ebp] */
  x86_unimpl("les @ 0x100075a4");
  /* 100075a7 adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 100075a9 jne 0x100075ab */
  if (!C.zf) goto L_100075ab;
L_100075ab:;
  /* 100075ab adc ah, dl */
  { uint32_t _a=(AH),_b=(DL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 100075ad jne 0x100075af */
  if (!C.zf) goto L_100075af;
L_100075af:;
  /* 100075af adc ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 100075b1 jne 0x100075b3 */
  if (!C.zf) goto L_100075b3;
L_100075b3:;
  /* 100075b3 adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 100075b5 jne 0x100075b7 */
  if (!C.zf) goto L_100075b7;
L_100075b7:;
  /* 100075b7 adc ah, ch */
  { uint32_t _a=(AH),_b=(C.c.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 100075b9 jne 0x100075bb */
  if (!C.zf) goto L_100075bb;
L_100075bb:;
  /* 100075bb adc ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 100075bd jne 0x100075bf */
  if (!C.zf) goto L_100075bf;
  /* 100075c4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 100075c8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 100075cc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 100075d0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 100075d4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 100075d8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 100075dc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 100075e0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 100075e4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 100075e8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 100075ec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 100075f0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 100075f4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 100075f8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 100075fc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10007603 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10007605 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10007607:;
  /* 10007607 jmp dword ptr [edx*4 + 0x10007610] */
  switch (EDX) {
    case 0: goto L_10007620;
    case 1: goto L_10007628;
    case 2: goto L_10007638;
    case 3: goto L_1000764c;
    default: x86_unimpl("switch@0x10007607 out of table"); return;
  }
  /* 1000760e mov edi, edi */
  EDI = (EDI);
L_10007620:;
  /* 10007620 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10007623 pop esi */
  ESI = (pop32());
  /* 10007624 pop edi */
  EDI = (pop32());
  /* 10007625 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10007626 ret  */
  ESPCHK(0x10007330u, _esp0);
  ESP += 4; return;
  /* 10007627 nop  */
  /* nop */
L_10007628:;
  /* 10007628 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1000762b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1000762e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10007631 pop esi */
  ESI = (pop32());
  /* 10007632 pop edi */
  EDI = (pop32());
  /* 10007633 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10007634 ret  */
  ESPCHK(0x10007330u, _esp0);
  ESP += 4; return;
  /* 10007635 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10007638:;
  /* 10007638 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1000763b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1000763e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10007641 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10007644 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10007647 pop esi */
  ESI = (pop32());
  /* 10007648 pop edi */
  EDI = (pop32());
  /* 10007649 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000764a ret  */
  ESPCHK(0x10007330u, _esp0);
  ESP += 4; return;
  /* 1000764b nop  */
  /* nop */
L_1000764c:;
  /* 1000764c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1000764f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10007652 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10007655 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10007658 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1000765b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1000765e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10007661 pop esi */
  ESI = (pop32());
  /* 10007662 pop edi */
  EDI = (pop32());
  /* 10007663 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10007664 ret  */
  ESPCHK(0x10007330u, _esp0);
  ESP += 4; return;
L_100075bf: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x100075bf (unresolved jump table)"); return;
}

/* FUN_10007665 @ 0x10007665 (49 bytes, 20 insns) */
void f_10007665(void) {
  FTRACE(0x10007665u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007665 push esi */
  push32((uint32_t)(ESI));
  /* 10007666 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1000766a push edi */
  push32((uint32_t)(EDI));
  /* 1000766b or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1000766e test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 10007672 je 0x1000767a */
  if (C.zf) goto L_1000767a;
  /* 10007674 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 10007678 jmp 0x10007691 */
  goto L_10007691;
L_1000767a:;
  /* 1000767a push esi */
  push32((uint32_t)(ESI));
  /* 1000767b call 0x1000543d */
  push32(0x10007680u); f_1000543d();
  /* 10007680 push esi */
  push32((uint32_t)(ESI));
  /* 10007681 call 0x10007696 */
  push32(0x10007686u); f_10007696();
  /* 10007686 push esi */
  push32((uint32_t)(ESI));
  /* 10007687 mov edi, eax */
  EDI = (EAX);
  /* 10007689 call 0x1000548f */
  push32(0x1000768eu); f_1000548f();
  /* 1000768e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10007691:;
  /* 10007691 mov eax, edi */
  EAX = (EDI);
  /* 10007693 pop edi */
  EDI = (pop32());
  /* 10007694 pop esi */
  ESI = (pop32());
  /* 10007695 ret  */
  ESPCHK(0x10007665u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x10007696 (76 bytes, 30 insns) */
void f_10007696(void) {
  FTRACE(0x10007696u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007696 push esi */
  push32((uint32_t)(ESI));
  /* 10007697 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1000769b push edi */
  push32((uint32_t)(EDI));
  /* 1000769c or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1000769f test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 100076a3 je 0x100076d9 */
  if (C.zf) goto L_100076d9;
  /* 100076a5 push esi */
  push32((uint32_t)(ESI));
  /* 100076a6 call 0x10006e04 */
  push32(0x100076abu); f_10006e04();
  /* 100076ab push esi */
  push32((uint32_t)(ESI));
  /* 100076ac mov edi, eax */
  EDI = (EAX);
  /* 100076ae call 0x10007baf */
  push32(0x100076b3u); f_10007baf();
  /* 100076b3 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 100076b6 call 0x10007acf */
  push32(0x100076bbu); f_10007acf();
  /* 100076bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100076be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100076c0 jge 0x100076c7 */
  if ((C.sf==C.of)) goto L_100076c7;
  /* 100076c2 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 100076c5 jmp 0x100076d9 */
  goto L_100076d9;
L_100076c7:;
  /* 100076c7 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 100076ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100076cc je 0x100076d9 */
  if (C.zf) goto L_100076d9;
  /* 100076ce push eax */
  push32((uint32_t)(EAX));
  /* 100076cf call 0x100058ad */
  push32(0x100076d4u); f_100058ad();
  /* 100076d4 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 100076d8 pop ecx */
  ECX = (pop32());
L_100076d9:;
  /* 100076d9 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 100076dd mov eax, edi */
  EAX = (EDI);
  /* 100076df pop edi */
  EDI = (pop32());
  /* 100076e0 pop esi */
  ESI = (pop32());
  /* 100076e1 ret  */
  ESPCHK(0x10007696u, _esp0);
  ESP += 4; return;
}

/* FUN_100076e2 @ 0x100076e2 (147 bytes, 52 insns) */
void f_100076e2(void) {
  FTRACE(0x100076e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100076e2 push ebx */
  push32((uint32_t)(EBX));
  /* 100076e3 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 100076e7 cmp ebx, dword ptr [0x1000d7e0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1000d7e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100076ed push esi */
  push32((uint32_t)(ESI));
  /* 100076ee push edi */
  push32((uint32_t)(EDI));
  /* 100076ef jae 0x10007763 */
  if (!C.cf) goto L_10007763;
  /* 100076f1 mov eax, ebx */
  EAX = (EBX);
  /* 100076f3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100076f6 lea edi, [eax*4 + 0x1000d6e0] */
  EDI = ((uint32_t)(EAX*4 + 0x1000d6e0));
  /* 100076fd mov eax, ebx */
  EAX = (EBX);
  /* 100076ff and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10007702 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10007705 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10007707 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1000770a test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1000770f je 0x10007763 */
  if (C.zf) goto L_10007763;
  /* 10007711 push ebx */
  push32((uint32_t)(EBX));
  /* 10007712 call 0x10006cd4 */
  push32(0x10007717u); f_10006cd4();
  /* 10007717 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10007719 pop ecx */
  ECX = (pop32());
  /* 1000771a test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1000771f je 0x1000774a */
  if (C.zf) goto L_1000774a;
  /* 10007721 push ebx */
  push32((uint32_t)(EBX));
  /* 10007722 call 0x10006c92 */
  push32(0x10007727u); f_10006c92();
  /* 10007727 pop ecx */
  ECX = (pop32());
  /* 10007728 push eax */
  push32((uint32_t)(EAX));
  /* 10007729 call dword ptr [0x100090c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090c4))), 0x1000772fu);
  /* 1000772f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007731 jne 0x1000773d */
  if (!C.zf) goto L_1000773d;
  /* 10007733 call dword ptr [0x1000903c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000903c))), 0x10007739u);
  /* 10007739 mov esi, eax */
  ESI = (EAX);
  /* 1000773b jmp 0x1000773f */
  goto L_1000773f;
L_1000773d:;
  /* 1000773d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1000773f:;
  /* 1000773f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10007741 je 0x10007758 */
  if (C.zf) goto L_10007758;
  /* 10007743 call 0x10006c0a */
  push32(0x10007748u); f_10006c0a();
  /* 10007748 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1000774a:;
  /* 1000774a call 0x10006c01 */
  push32(0x1000774fu); f_10006c01();
  /* 1000774f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10007755 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10007758:;
  /* 10007758 push ebx */
  push32((uint32_t)(EBX));
  /* 10007759 call 0x10006d33 */
  push32(0x1000775eu); f_10006d33();
  /* 1000775e pop ecx */
  ECX = (pop32());
  /* 1000775f mov eax, esi */
  EAX = (ESI);
  /* 10007761 jmp 0x10007771 */
  goto L_10007771;
L_10007763:;
  /* 10007763 call 0x10006c01 */
  push32(0x10007768u); f_10006c01();
  /* 10007768 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1000776e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10007771:;
  /* 10007771 pop edi */
  EDI = (pop32());
  /* 10007772 pop esi */
  ESI = (pop32());
  /* 10007773 pop ebx */
  EBX = (pop32());
  /* 10007774 ret  */
  ESPCHK(0x100076e2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007810 @ 0x10007810 (62 bytes, 35 insns) */
void f_10007810(void) {
  FTRACE(0x10007810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007810 push ebp */
  push32((uint32_t)(EBP));
  /* 10007811 mov ebp, esp */
  EBP = (ESP);
  /* 10007813 push esi */
  push32((uint32_t)(ESI));
  /* 10007814 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10007816 push eax */
  push32((uint32_t)(EAX));
  /* 10007817 push eax */
  push32((uint32_t)(EAX));
  /* 10007818 push eax */
  push32((uint32_t)(EAX));
  /* 10007819 push eax */
  push32((uint32_t)(EAX));
  /* 1000781a push eax */
  push32((uint32_t)(EAX));
  /* 1000781b push eax */
  push32((uint32_t)(EAX));
  /* 1000781c push eax */
  push32((uint32_t)(EAX));
  /* 1000781d push eax */
  push32((uint32_t)(EAX));
  /* 1000781e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10007821 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10007824:;
  /* 10007824 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10007826 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10007828 je 0x10007831 */
  if (C.zf) goto L_10007831;
  /* 1000782a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1000782b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1000782b");
  /* 1000782f jmp 0x10007824 */
  goto L_10007824;
L_10007831:;
  /* 10007831 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10007834 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10007837 nop  */
  /* nop */
L_10007838:;
  /* 10007838 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10007839 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1000783b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1000783d je 0x10007846 */
  if (C.zf) goto L_10007846;
  /* 1000783f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10007840 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10007840");
  /* 10007844 jae 0x10007838 */
  if (!C.cf) goto L_10007838;
L_10007846:;
  /* 10007846 mov eax, ecx */
  EAX = (ECX);
  /* 10007848 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1000784b pop esi */
  ESI = (pop32());
  /* 1000784c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1000784d ret  */
  ESPCHK(0x10007810u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10007850 (56 bytes, 31 insns) */
void f_10007850(void) {
  FTRACE(0x10007850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007850 push ebp */
  push32((uint32_t)(EBP));
  /* 10007851 mov ebp, esp */
  EBP = (ESP);
  /* 10007853 push edi */
  push32((uint32_t)(EDI));
  /* 10007854 push esi */
  push32((uint32_t)(ESI));
  /* 10007855 push ebx */
  push32((uint32_t)(EBX));
  /* 10007856 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10007859 jecxz 0x10007881 */
  x86_unimpl("jecxz @ 0x10007859");
  /* 1000785b mov ebx, ecx */
  EBX = (ECX);
  /* 1000785d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10007860 mov esi, edi */
  ESI = (EDI);
  /* 10007862 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10007864 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10007866 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10007868 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1000786a mov edi, esi */
  EDI = (ESI);
  /* 1000786c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1000786f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10007871 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10007874 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10007876 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007879 ja 0x1000787f */
  if ((!C.cf&&!C.zf)) goto L_1000787f;
  /* 1000787b je 0x10007881 */
  if (C.zf) goto L_10007881;
  /* 1000787d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1000787e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1000787f:;
  /* 1000787f not ecx */
  ECX = (~(ECX));
L_10007881:;
  /* 10007881 mov eax, ecx */
  EAX = (ECX);
  /* 10007883 pop ebx */
  EBX = (pop32());
  /* 10007884 pop esi */
  ESI = (pop32());
  /* 10007885 pop edi */
  EDI = (pop32());
  /* 10007886 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10007887 ret  */
  ESPCHK(0x10007850u, _esp0);
  ESP += 4; return;
}

/* FUN_10007890 @ 0x10007890 (58 bytes, 32 insns) */
void f_10007890(void) {
  FTRACE(0x10007890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007890 push ebp */
  push32((uint32_t)(EBP));
  /* 10007891 mov ebp, esp */
  EBP = (ESP);
  /* 10007893 push esi */
  push32((uint32_t)(ESI));
  /* 10007894 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10007896 push eax */
  push32((uint32_t)(EAX));
  /* 10007897 push eax */
  push32((uint32_t)(EAX));
  /* 10007898 push eax */
  push32((uint32_t)(EAX));
  /* 10007899 push eax */
  push32((uint32_t)(EAX));
  /* 1000789a push eax */
  push32((uint32_t)(EAX));
  /* 1000789b push eax */
  push32((uint32_t)(EAX));
  /* 1000789c push eax */
  push32((uint32_t)(EAX));
  /* 1000789d push eax */
  push32((uint32_t)(EAX));
  /* 1000789e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 100078a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100078a4:;
  /* 100078a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 100078a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100078a8 je 0x100078b1 */
  if (C.zf) goto L_100078b1;
  /* 100078aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100078ab bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x100078ab");
  /* 100078af jmp 0x100078a4 */
  goto L_100078a4;
L_100078b1:;
  /* 100078b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_100078b4:;
  /* 100078b4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100078b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100078b8 je 0x100078c4 */
  if (C.zf) goto L_100078c4;
  /* 100078ba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100078bb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x100078bb");
  /* 100078bf jae 0x100078b4 */
  if (!C.cf) goto L_100078b4;
  /* 100078c1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_100078c4:;
  /* 100078c4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100078c7 pop esi */
  ESI = (pop32());
  /* 100078c8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100078c9 ret  */
  ESPCHK(0x10007890u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x100078cc (32 bytes, 18 insns) */
void f_100078cc(void) {
  FTRACE(0x100078ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100078cc push ebp */
  push32((uint32_t)(EBP));
  /* 100078cd mov ebp, esp */
  EBP = (ESP);
  /* 100078cf push ebx */
  push32((uint32_t)(EBX));
  /* 100078d0 push esi */
  push32((uint32_t)(ESI));
  /* 100078d1 push edi */
  push32((uint32_t)(EDI));
  /* 100078d2 push ebp */
  push32((uint32_t)(EBP));
  /* 100078d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 100078d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 100078d7 push 0x100078e4 */
  push32((uint32_t)(0x100078e4u));
  /* 100078dc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100078df call 0x1000800c */
  push32(0x100078e4u); f_1000800c();
  /* 100078e4 pop ebp */
  EBP = (pop32());
  /* 100078e5 pop edi */
  EDI = (pop32());
  /* 100078e6 pop esi */
  ESI = (pop32());
  /* 100078e7 pop ebx */
  EBX = (pop32());
  /* 100078e8 mov esp, ebp */
  ESP = (EBP);
  /* 100078ea pop ebp */
  EBP = (pop32());
  /* 100078eb ret  */
  ESPCHK(0x100078ccu, _esp0);
  ESP += 4; return;
}

