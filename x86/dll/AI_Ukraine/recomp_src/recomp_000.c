#include "recomp.h"

/* InitAI @ 0x10201000 (2374 bytes, 602 insns) */
void f_10201000(void) {
  FTRACE(0x10201000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10201000 mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 10201005 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201007 je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 1020100d push 0x102096bc */
  push32((uint32_t)(0x102096bcu));
  /* 10201012 push 0x1020aa48 */
  push32((uint32_t)(0x1020aa48u));
  /* 10201017 call eax */
  call_ind((uint32_t)(EAX), 0x10201019u);
  /* 10201019 mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 1020101e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201021 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201023 je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 10201029 push 0x102096a8 */
  push32((uint32_t)(0x102096a8u));
  /* 1020102e push 0x1020acf0 */
  push32((uint32_t)(0x1020acf0u));
  /* 10201033 call eax */
  call_ind((uint32_t)(EAX), 0x10201035u);
  /* 10201035 mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 1020103a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020103d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020103f je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 10201045 push 0x10209694 */
  push32((uint32_t)(0x10209694u));
  /* 1020104a push 0x1020acc8 */
  push32((uint32_t)(0x1020acc8u));
  /* 1020104f call eax */
  call_ind((uint32_t)(EAX), 0x10201051u);
  /* 10201051 mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 10201056 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201059 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020105b je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 10201061 push 0x10209680 */
  push32((uint32_t)(0x10209680u));
  /* 10201066 push 0x1020ade0 */
  push32((uint32_t)(0x1020ade0u));
  /* 1020106b call eax */
  call_ind((uint32_t)(EAX), 0x1020106du);
  /* 1020106d mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 10201072 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201075 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201077 je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 1020107d push 0x10209674 */
  push32((uint32_t)(0x10209674u));
  /* 10201082 push 0x1020add0 */
  push32((uint32_t)(0x1020add0u));
  /* 10201087 call eax */
  call_ind((uint32_t)(EAX), 0x10201089u);
  /* 10201089 mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 1020108e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201091 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201093 je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 10201099 push 0x10209668 */
  push32((uint32_t)(0x10209668u));
  /* 1020109e push 0x1020aa40 */
  push32((uint32_t)(0x1020aa40u));
  /* 102010a3 call eax */
  call_ind((uint32_t)(EAX), 0x102010a5u);
  /* 102010a5 mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 102010aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102010ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102010af je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 102010b5 push 0x10209658 */
  push32((uint32_t)(0x10209658u));
  /* 102010ba push 0x1020aba8 */
  push32((uint32_t)(0x1020aba8u));
  /* 102010bf call eax */
  call_ind((uint32_t)(EAX), 0x102010c1u);
  /* 102010c1 mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 102010c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102010c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102010cb je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 102010d1 push 0x1020964c */
  push32((uint32_t)(0x1020964cu));
  /* 102010d6 push 0x1020ad38 */
  push32((uint32_t)(0x1020ad38u));
  /* 102010db call eax */
  call_ind((uint32_t)(EAX), 0x102010ddu);
  /* 102010dd mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 102010e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102010e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102010e7 je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 102010ed push 0x1020963c */
  push32((uint32_t)(0x1020963cu));
  /* 102010f2 push 0x1020abd8 */
  push32((uint32_t)(0x1020abd8u));
  /* 102010f7 call eax */
  call_ind((uint32_t)(EAX), 0x102010f9u);
  /* 102010f9 mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 102010fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201101 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201103 je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 10201109 push 0x1020962c */
  push32((uint32_t)(0x1020962cu));
  /* 1020110e push 0x1020abe8 */
  push32((uint32_t)(0x1020abe8u));
  /* 10201113 call eax */
  call_ind((uint32_t)(EAX), 0x10201115u);
  /* 10201115 mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 1020111a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020111d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020111f je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 10201125 push 0x10209614 */
  push32((uint32_t)(0x10209614u));
  /* 1020112a push 0x1020ad60 */
  push32((uint32_t)(0x1020ad60u));
  /* 1020112f call eax */
  call_ind((uint32_t)(EAX), 0x10201131u);
  /* 10201131 mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 10201136 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020113b je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 10201141 push 0x10209608 */
  push32((uint32_t)(0x10209608u));
  /* 10201146 push 0x1020abe0 */
  push32((uint32_t)(0x1020abe0u));
  /* 1020114b call eax */
  call_ind((uint32_t)(EAX), 0x1020114du);
  /* 1020114d mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 10201152 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201155 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201157 je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 1020115d push 0x102095f8 */
  push32((uint32_t)(0x102095f8u));
  /* 10201162 push 0x1020abc0 */
  push32((uint32_t)(0x1020abc0u));
  /* 10201167 call eax */
  call_ind((uint32_t)(EAX), 0x10201169u);
  /* 10201169 mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 1020116e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201171 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201173 je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 10201179 push 0x102095e4 */
  push32((uint32_t)(0x102095e4u));
  /* 1020117e push 0x1020ac68 */
  push32((uint32_t)(0x1020ac68u));
  /* 10201183 call eax */
  call_ind((uint32_t)(EAX), 0x10201185u);
  /* 10201185 mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 1020118a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020118d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020118f je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 10201195 push 0x102095d0 */
  push32((uint32_t)(0x102095d0u));
  /* 1020119a push 0x1020abf0 */
  push32((uint32_t)(0x1020abf0u));
  /* 1020119f call eax */
  call_ind((uint32_t)(EAX), 0x102011a1u);
  /* 102011a1 mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 102011a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102011a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102011ab je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 102011b1 push 0x102095b8 */
  push32((uint32_t)(0x102095b8u));
  /* 102011b6 push 0x1020aa20 */
  push32((uint32_t)(0x1020aa20u));
  /* 102011bb call eax */
  call_ind((uint32_t)(EAX), 0x102011bdu);
  /* 102011bd mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 102011c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102011c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102011c7 je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 102011cd push 0x102095ac */
  push32((uint32_t)(0x102095acu));
  /* 102011d2 push 0x1020ab88 */
  push32((uint32_t)(0x1020ab88u));
  /* 102011d7 call eax */
  call_ind((uint32_t)(EAX), 0x102011d9u);
  /* 102011d9 mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 102011de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102011e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102011e3 je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 102011e5 push 0x1020959c */
  push32((uint32_t)(0x1020959cu));
  /* 102011ea push 0x1020ad30 */
  push32((uint32_t)(0x1020ad30u));
  /* 102011ef call eax */
  call_ind((uint32_t)(EAX), 0x102011f1u);
  /* 102011f1 mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 102011f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102011f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102011fb je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 102011fd push 0x1020958c */
  push32((uint32_t)(0x1020958cu));
  /* 10201202 push 0x1020ac78 */
  push32((uint32_t)(0x1020ac78u));
  /* 10201207 call eax */
  call_ind((uint32_t)(EAX), 0x10201209u);
  /* 10201209 mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 1020120e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201211 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201213 je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 10201215 push 0x10209580 */
  push32((uint32_t)(0x10209580u));
  /* 1020121a push 0x1020ad98 */
  push32((uint32_t)(0x1020ad98u));
  /* 1020121f call eax */
  call_ind((uint32_t)(EAX), 0x10201221u);
  /* 10201221 mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 10201226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201229 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020122b je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 1020122d push 0x10209574 */
  push32((uint32_t)(0x10209574u));
  /* 10201232 push 0x1020abd0 */
  push32((uint32_t)(0x1020abd0u));
  /* 10201237 call eax */
  call_ind((uint32_t)(EAX), 0x10201239u);
  /* 10201239 mov eax, dword ptr [0x1020ae00] */
  EAX = (r32((uint32_t)(0x1020ae00)));
  /* 1020123e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201241 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201243 je 0x10201254 */
  if (C.zf) goto L_10201254;
  /* 10201245 push 0x10209564 */
  push32((uint32_t)(0x10209564u));
  /* 1020124a push 0x1020aba0 */
  push32((uint32_t)(0x1020aba0u));
  /* 1020124f call eax */
  call_ind((uint32_t)(EAX), 0x10201251u);
  /* 10201251 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10201254:;
  /* 10201254 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 10201259 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020125b je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201261 push 0x1020954c */
  push32((uint32_t)(0x1020954cu));
  /* 10201266 push 0x1020add8 */
  push32((uint32_t)(0x1020add8u));
  /* 1020126b call eax */
  call_ind((uint32_t)(EAX), 0x1020126du);
  /* 1020126d mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 10201272 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201275 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201277 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 1020127d push 0x10209534 */
  push32((uint32_t)(0x10209534u));
  /* 10201282 push 0x1020ac80 */
  push32((uint32_t)(0x1020ac80u));
  /* 10201287 call eax */
  call_ind((uint32_t)(EAX), 0x10201289u);
  /* 10201289 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 1020128e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201291 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201293 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201299 push 0x1020952c */
  push32((uint32_t)(0x1020952cu));
  /* 1020129e push 0x1020aa38 */
  push32((uint32_t)(0x1020aa38u));
  /* 102012a3 call eax */
  call_ind((uint32_t)(EAX), 0x102012a5u);
  /* 102012a5 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102012aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102012ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102012af je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102012b5 push 0x10209510 */
  push32((uint32_t)(0x10209510u));
  /* 102012ba push 0x1020adb0 */
  push32((uint32_t)(0x1020adb0u));
  /* 102012bf call eax */
  call_ind((uint32_t)(EAX), 0x102012c1u);
  /* 102012c1 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102012c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102012c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102012cb je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102012d1 push 0x102094f4 */
  push32((uint32_t)(0x102094f4u));
  /* 102012d6 push 0x1020adb8 */
  push32((uint32_t)(0x1020adb8u));
  /* 102012db call eax */
  call_ind((uint32_t)(EAX), 0x102012ddu);
  /* 102012dd mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102012e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102012e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102012e7 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102012ed push 0x102094d8 */
  push32((uint32_t)(0x102094d8u));
  /* 102012f2 push 0x1020ada0 */
  push32((uint32_t)(0x1020ada0u));
  /* 102012f7 call eax */
  call_ind((uint32_t)(EAX), 0x102012f9u);
  /* 102012f9 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102012fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201303 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201309 push 0x102094bc */
  push32((uint32_t)(0x102094bcu));
  /* 1020130e push 0x1020ada8 */
  push32((uint32_t)(0x1020ada8u));
  /* 10201313 call eax */
  call_ind((uint32_t)(EAX), 0x10201315u);
  /* 10201315 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 1020131a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020131d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020131f je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201325 push 0x102094a0 */
  push32((uint32_t)(0x102094a0u));
  /* 1020132a push 0x1020adc0 */
  push32((uint32_t)(0x1020adc0u));
  /* 1020132f call eax */
  call_ind((uint32_t)(EAX), 0x10201331u);
  /* 10201331 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 10201336 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201339 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020133b je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201341 push 0x10209484 */
  push32((uint32_t)(0x10209484u));
  /* 10201346 push 0x1020ad80 */
  push32((uint32_t)(0x1020ad80u));
  /* 1020134b call eax */
  call_ind((uint32_t)(EAX), 0x1020134du);
  /* 1020134d mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 10201352 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201355 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201357 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 1020135d push 0x10209468 */
  push32((uint32_t)(0x10209468u));
  /* 10201362 push 0x1020ad70 */
  push32((uint32_t)(0x1020ad70u));
  /* 10201367 call eax */
  call_ind((uint32_t)(EAX), 0x10201369u);
  /* 10201369 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 1020136e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201373 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201379 push 0x1020944c */
  push32((uint32_t)(0x1020944cu));
  /* 1020137e push 0x1020ad78 */
  push32((uint32_t)(0x1020ad78u));
  /* 10201383 call eax */
  call_ind((uint32_t)(EAX), 0x10201385u);
  /* 10201385 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 1020138a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020138d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020138f je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201395 push 0x10209430 */
  push32((uint32_t)(0x10209430u));
  /* 1020139a push 0x1020ad88 */
  push32((uint32_t)(0x1020ad88u));
  /* 1020139f call eax */
  call_ind((uint32_t)(EAX), 0x102013a1u);
  /* 102013a1 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102013a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102013a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102013ab je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102013b1 push 0x10209414 */
  push32((uint32_t)(0x10209414u));
  /* 102013b6 push 0x1020ad90 */
  push32((uint32_t)(0x1020ad90u));
  /* 102013bb call eax */
  call_ind((uint32_t)(EAX), 0x102013bdu);
  /* 102013bd mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102013c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102013c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102013c7 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102013cd push 0x102093fc */
  push32((uint32_t)(0x102093fcu));
  /* 102013d2 push 0x1020ac20 */
  push32((uint32_t)(0x1020ac20u));
  /* 102013d7 call eax */
  call_ind((uint32_t)(EAX), 0x102013d9u);
  /* 102013d9 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102013de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102013e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102013e3 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102013e9 push 0x102093e0 */
  push32((uint32_t)(0x102093e0u));
  /* 102013ee push 0x1020ac18 */
  push32((uint32_t)(0x1020ac18u));
  /* 102013f3 call eax */
  call_ind((uint32_t)(EAX), 0x102013f5u);
  /* 102013f5 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102013fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102013fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102013ff je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201405 push 0x102093c4 */
  push32((uint32_t)(0x102093c4u));
  /* 1020140a push 0x1020ac10 */
  push32((uint32_t)(0x1020ac10u));
  /* 1020140f call eax */
  call_ind((uint32_t)(EAX), 0x10201411u);
  /* 10201411 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 10201416 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201419 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020141b je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201421 push 0x102093a8 */
  push32((uint32_t)(0x102093a8u));
  /* 10201426 push 0x1020ac08 */
  push32((uint32_t)(0x1020ac08u));
  /* 1020142b call eax */
  call_ind((uint32_t)(EAX), 0x1020142du);
  /* 1020142d mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 10201432 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201435 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201437 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 1020143d push 0x1020938c */
  push32((uint32_t)(0x1020938cu));
  /* 10201442 push 0x1020ac00 */
  push32((uint32_t)(0x1020ac00u));
  /* 10201447 call eax */
  call_ind((uint32_t)(EAX), 0x10201449u);
  /* 10201449 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 1020144e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201451 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201453 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201459 push 0x10209370 */
  push32((uint32_t)(0x10209370u));
  /* 1020145e push 0x1020abf8 */
  push32((uint32_t)(0x1020abf8u));
  /* 10201463 call eax */
  call_ind((uint32_t)(EAX), 0x10201465u);
  /* 10201465 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 1020146a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020146d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020146f je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201475 push 0x10209358 */
  push32((uint32_t)(0x10209358u));
  /* 1020147a push 0x1020acb0 */
  push32((uint32_t)(0x1020acb0u));
  /* 1020147f call eax */
  call_ind((uint32_t)(EAX), 0x10201481u);
  /* 10201481 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 10201486 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201489 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020148b je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201491 push 0x1020933c */
  push32((uint32_t)(0x1020933cu));
  /* 10201496 push 0x1020aca8 */
  push32((uint32_t)(0x1020aca8u));
  /* 1020149b call eax */
  call_ind((uint32_t)(EAX), 0x1020149du);
  /* 1020149d mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102014a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102014a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102014a7 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102014ad push 0x10209320 */
  push32((uint32_t)(0x10209320u));
  /* 102014b2 push 0x1020aca0 */
  push32((uint32_t)(0x1020aca0u));
  /* 102014b7 call eax */
  call_ind((uint32_t)(EAX), 0x102014b9u);
  /* 102014b9 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102014be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102014c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102014c3 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102014c9 push 0x10209304 */
  push32((uint32_t)(0x10209304u));
  /* 102014ce push 0x1020ac98 */
  push32((uint32_t)(0x1020ac98u));
  /* 102014d3 call eax */
  call_ind((uint32_t)(EAX), 0x102014d5u);
  /* 102014d5 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102014da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102014dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102014df je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102014e5 push 0x102092e8 */
  push32((uint32_t)(0x102092e8u));
  /* 102014ea push 0x1020ac88 */
  push32((uint32_t)(0x1020ac88u));
  /* 102014ef call eax */
  call_ind((uint32_t)(EAX), 0x102014f1u);
  /* 102014f1 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102014f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102014f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102014fb je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201501 push 0x102092cc */
  push32((uint32_t)(0x102092ccu));
  /* 10201506 push 0x1020acc0 */
  push32((uint32_t)(0x1020acc0u));
  /* 1020150b call eax */
  call_ind((uint32_t)(EAX), 0x1020150du);
  /* 1020150d mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 10201512 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201515 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201517 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 1020151d push 0x102092bc */
  push32((uint32_t)(0x102092bcu));
  /* 10201522 push 0x1020ad20 */
  push32((uint32_t)(0x1020ad20u));
  /* 10201527 call eax */
  call_ind((uint32_t)(EAX), 0x10201529u);
  /* 10201529 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 1020152e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201531 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201533 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201539 push 0x102092a8 */
  push32((uint32_t)(0x102092a8u));
  /* 1020153e push 0x1020ad18 */
  push32((uint32_t)(0x1020ad18u));
  /* 10201543 call eax */
  call_ind((uint32_t)(EAX), 0x10201545u);
  /* 10201545 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 1020154a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020154d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020154f je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201555 push 0x10209294 */
  push32((uint32_t)(0x10209294u));
  /* 1020155a push 0x1020ad00 */
  push32((uint32_t)(0x1020ad00u));
  /* 1020155f call eax */
  call_ind((uint32_t)(EAX), 0x10201561u);
  /* 10201561 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 10201566 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020156b je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201571 push 0x10209280 */
  push32((uint32_t)(0x10209280u));
  /* 10201576 push 0x1020acf8 */
  push32((uint32_t)(0x1020acf8u));
  /* 1020157b call eax */
  call_ind((uint32_t)(EAX), 0x1020157du);
  /* 1020157d mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 10201582 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201585 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201587 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 1020158d push 0x1020926c */
  push32((uint32_t)(0x1020926cu));
  /* 10201592 push 0x1020ad08 */
  push32((uint32_t)(0x1020ad08u));
  /* 10201597 call eax */
  call_ind((uint32_t)(EAX), 0x10201599u);
  /* 10201599 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 1020159e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102015a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102015a3 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102015a9 push 0x10209258 */
  push32((uint32_t)(0x10209258u));
  /* 102015ae push 0x1020ac48 */
  push32((uint32_t)(0x1020ac48u));
  /* 102015b3 call eax */
  call_ind((uint32_t)(EAX), 0x102015b5u);
  /* 102015b5 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102015ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102015bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102015bf je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102015c5 push 0x10209244 */
  push32((uint32_t)(0x10209244u));
  /* 102015ca push 0x1020ac50 */
  push32((uint32_t)(0x1020ac50u));
  /* 102015cf call eax */
  call_ind((uint32_t)(EAX), 0x102015d1u);
  /* 102015d1 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102015d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102015d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102015db je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102015e1 push 0x10209230 */
  push32((uint32_t)(0x10209230u));
  /* 102015e6 push 0x1020ac58 */
  push32((uint32_t)(0x1020ac58u));
  /* 102015eb call eax */
  call_ind((uint32_t)(EAX), 0x102015edu);
  /* 102015ed mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102015f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102015f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102015f7 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102015fd push 0x1020921c */
  push32((uint32_t)(0x1020921cu));
  /* 10201602 push 0x1020ac60 */
  push32((uint32_t)(0x1020ac60u));
  /* 10201607 call eax */
  call_ind((uint32_t)(EAX), 0x10201609u);
  /* 10201609 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 1020160e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201611 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201613 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201619 push 0x10209214 */
  push32((uint32_t)(0x10209214u));
  /* 1020161e push 0x1020ad10 */
  push32((uint32_t)(0x1020ad10u));
  /* 10201623 call eax */
  call_ind((uint32_t)(EAX), 0x10201625u);
  /* 10201625 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 1020162a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020162d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020162f je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201635 push 0x1020920c */
  push32((uint32_t)(0x1020920cu));
  /* 1020163a push 0x1020ac40 */
  push32((uint32_t)(0x1020ac40u));
  /* 1020163f call eax */
  call_ind((uint32_t)(EAX), 0x10201641u);
  /* 10201641 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 10201646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201649 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020164b je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201651 push 0x10209204 */
  push32((uint32_t)(0x10209204u));
  /* 10201656 push 0x1020ac28 */
  push32((uint32_t)(0x1020ac28u));
  /* 1020165b call eax */
  call_ind((uint32_t)(EAX), 0x1020165du);
  /* 1020165d mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 10201662 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201665 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201667 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 1020166d push 0x102091fc */
  push32((uint32_t)(0x102091fcu));
  /* 10201672 push 0x1020ac30 */
  push32((uint32_t)(0x1020ac30u));
  /* 10201677 call eax */
  call_ind((uint32_t)(EAX), 0x10201679u);
  /* 10201679 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 1020167e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201681 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201683 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201689 push 0x102091f4 */
  push32((uint32_t)(0x102091f4u));
  /* 1020168e push 0x1020ac38 */
  push32((uint32_t)(0x1020ac38u));
  /* 10201693 call eax */
  call_ind((uint32_t)(EAX), 0x10201695u);
  /* 10201695 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 1020169a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020169d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020169f je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102016a5 push 0x102091ec */
  push32((uint32_t)(0x102091ecu));
  /* 102016aa push 0x1020ad68 */
  push32((uint32_t)(0x1020ad68u));
  /* 102016af call eax */
  call_ind((uint32_t)(EAX), 0x102016b1u);
  /* 102016b1 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102016b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102016b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102016bb je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102016c1 push 0x102091e4 */
  push32((uint32_t)(0x102091e4u));
  /* 102016c6 push 0x1020ac90 */
  push32((uint32_t)(0x1020ac90u));
  /* 102016cb call eax */
  call_ind((uint32_t)(EAX), 0x102016cdu);
  /* 102016cd mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102016d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102016d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102016d7 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102016dd push 0x102091dc */
  push32((uint32_t)(0x102091dcu));
  /* 102016e2 push 0x1020acb8 */
  push32((uint32_t)(0x1020acb8u));
  /* 102016e7 call eax */
  call_ind((uint32_t)(EAX), 0x102016e9u);
  /* 102016e9 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102016ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102016f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102016f3 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102016f9 push 0x102091d4 */
  push32((uint32_t)(0x102091d4u));
  /* 102016fe push 0x1020ad50 */
  push32((uint32_t)(0x1020ad50u));
  /* 10201703 call eax */
  call_ind((uint32_t)(EAX), 0x10201705u);
  /* 10201705 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 1020170a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020170d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020170f je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201715 push 0x102091cc */
  push32((uint32_t)(0x102091ccu));
  /* 1020171a push 0x1020ad58 */
  push32((uint32_t)(0x1020ad58u));
  /* 1020171f call eax */
  call_ind((uint32_t)(EAX), 0x10201721u);
  /* 10201721 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 10201726 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201729 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020172b je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201731 push 0x102091c4 */
  push32((uint32_t)(0x102091c4u));
  /* 10201736 push 0x1020acd0 */
  push32((uint32_t)(0x1020acd0u));
  /* 1020173b call eax */
  call_ind((uint32_t)(EAX), 0x1020173du);
  /* 1020173d mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 10201742 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201745 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201747 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 1020174d push 0x102091bc */
  push32((uint32_t)(0x102091bcu));
  /* 10201752 push 0x1020ace0 */
  push32((uint32_t)(0x1020ace0u));
  /* 10201757 call eax */
  call_ind((uint32_t)(EAX), 0x10201759u);
  /* 10201759 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 1020175e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201761 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201763 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201769 push 0x102091b4 */
  push32((uint32_t)(0x102091b4u));
  /* 1020176e push 0x1020ace8 */
  push32((uint32_t)(0x1020ace8u));
  /* 10201773 call eax */
  call_ind((uint32_t)(EAX), 0x10201775u);
  /* 10201775 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 1020177a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020177d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020177f je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201785 push 0x102091ac */
  push32((uint32_t)(0x102091acu));
  /* 1020178a push 0x1020acd8 */
  push32((uint32_t)(0x1020acd8u));
  /* 1020178f call eax */
  call_ind((uint32_t)(EAX), 0x10201791u);
  /* 10201791 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 10201796 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201799 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020179b je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102017a1 push 0x102091a4 */
  push32((uint32_t)(0x102091a4u));
  /* 102017a6 push 0x1020abb0 */
  push32((uint32_t)(0x1020abb0u));
  /* 102017ab call eax */
  call_ind((uint32_t)(EAX), 0x102017adu);
  /* 102017ad mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102017b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102017b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102017b7 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102017bd push 0x1020919c */
  push32((uint32_t)(0x1020919cu));
  /* 102017c2 push 0x1020aab0 */
  push32((uint32_t)(0x1020aab0u));
  /* 102017c7 call eax */
  call_ind((uint32_t)(EAX), 0x102017c9u);
  /* 102017c9 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102017ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102017d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102017d3 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102017d9 push 0x10209194 */
  push32((uint32_t)(0x10209194u));
  /* 102017de push 0x1020ac70 */
  push32((uint32_t)(0x1020ac70u));
  /* 102017e3 call eax */
  call_ind((uint32_t)(EAX), 0x102017e5u);
  /* 102017e5 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 102017ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102017ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102017ef je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 102017f5 push 0x1020918c */
  push32((uint32_t)(0x1020918cu));
  /* 102017fa push 0x1020abb8 */
  push32((uint32_t)(0x1020abb8u));
  /* 102017ff call eax */
  call_ind((uint32_t)(EAX), 0x10201801u);
  /* 10201801 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 10201806 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020180b je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 1020180d push 0x10209184 */
  push32((uint32_t)(0x10209184u));
  /* 10201812 push 0x1020ad40 */
  push32((uint32_t)(0x1020ad40u));
  /* 10201817 call eax */
  call_ind((uint32_t)(EAX), 0x10201819u);
  /* 10201819 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 1020181e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201821 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201823 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201825 push 0x1020917c */
  push32((uint32_t)(0x1020917cu));
  /* 1020182a push 0x1020ad48 */
  push32((uint32_t)(0x1020ad48u));
  /* 1020182f call eax */
  call_ind((uint32_t)(EAX), 0x10201831u);
  /* 10201831 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 10201836 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020183b je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 1020183d push 0x10209174 */
  push32((uint32_t)(0x10209174u));
  /* 10201842 push 0x1020ab80 */
  push32((uint32_t)(0x1020ab80u));
  /* 10201847 call eax */
  call_ind((uint32_t)(EAX), 0x10201849u);
  /* 10201849 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 1020184e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201851 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201853 je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 10201855 push 0x1020916c */
  push32((uint32_t)(0x1020916cu));
  /* 1020185a push 0x1020ab90 */
  push32((uint32_t)(0x1020ab90u));
  /* 1020185f call eax */
  call_ind((uint32_t)(EAX), 0x10201861u);
  /* 10201861 mov eax, dword ptr [0x1020ae04] */
  EAX = (r32((uint32_t)(0x1020ae04)));
  /* 10201866 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201869 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020186b je 0x1020187c */
  if (C.zf) goto L_1020187c;
  /* 1020186d push 0x10209164 */
  push32((uint32_t)(0x10209164u));
  /* 10201872 push 0x1020aa28 */
  push32((uint32_t)(0x1020aa28u));
  /* 10201877 call eax */
  call_ind((uint32_t)(EAX), 0x10201879u);
  /* 10201879 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1020187c:;
  /* 1020187c push 4 */
  push32((uint32_t)(0x4u));
  /* 1020187e push 4 */
  push32((uint32_t)(0x4u));
  /* 10201880 push 9 */
  push32((uint32_t)(0x9u));
  /* 10201882 call dword ptr [0x1020af1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af1c))), 0x10201888u);
  /* 10201888 push 6 */
  push32((uint32_t)(0x6u));
  /* 1020188a call dword ptr [0x1020af28] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af28))), 0x10201890u);
  /* 10201890 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10201892 push 0x10209150 */
  push32((uint32_t)(0x10209150u));
  /* 10201897 push 0 */
  push32((uint32_t)(0x0u));
  /* 10201899 call dword ptr [0x1020af2c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af2c))), 0x1020189fu);
  /* 1020189f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102018a1 push 0x1020913c */
  push32((uint32_t)(0x1020913cu));
  /* 102018a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102018a8 call dword ptr [0x1020af2c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af2c))), 0x102018aeu);
  /* 102018ae push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102018b0 push 0x10209128 */
  push32((uint32_t)(0x10209128u));
  /* 102018b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 102018b7 call dword ptr [0x1020af2c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af2c))), 0x102018bdu);
  /* 102018bd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102018bf push 0x10209114 */
  push32((uint32_t)(0x10209114u));
  /* 102018c4 push 3 */
  push32((uint32_t)(0x3u));
  /* 102018c6 call dword ptr [0x1020af2c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af2c))), 0x102018ccu);
  /* 102018cc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102018cf push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102018d1 push 0x10209100 */
  push32((uint32_t)(0x10209100u));
  /* 102018d6 push 4 */
  push32((uint32_t)(0x4u));
  /* 102018d8 call dword ptr [0x1020af2c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af2c))), 0x102018deu);
  /* 102018de push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102018e0 push 0x102090ec */
  push32((uint32_t)(0x102090ecu));
  /* 102018e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 102018e7 call dword ptr [0x1020af2c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af2c))), 0x102018edu);
  /* 102018ed push 0x102096a8 */
  push32((uint32_t)(0x102096a8u));
  /* 102018f2 call dword ptr [0x1020af60] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af60))), 0x102018f8u);
  /* 102018f8 push 0x102090e0 */
  push32((uint32_t)(0x102090e0u));
  /* 102018fd call dword ptr [0x1020af5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af5c))), 0x10201903u);
  /* 10201903 push 0x102090cc */
  push32((uint32_t)(0x102090ccu));
  /* 10201908 call dword ptr [0x1020af64] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af64))), 0x1020190eu);
  /* 1020190e push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10201913 call dword ptr [0x1020af30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af30))), 0x10201919u);
  /* 10201919 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1020191e call dword ptr [0x1020af34] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af34))), 0x10201924u);
  /* 10201924 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 10201929 call dword ptr [0x1020af38] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af38))), 0x1020192fu);
  /* 1020192f push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10201934 call dword ptr [0x1020af3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af3c))), 0x1020193au);
  /* 1020193a push 5 */
  push32((uint32_t)(0x5u));
  /* 1020193c call dword ptr [0x1020af40] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af40))), 0x10201942u);
  /* 10201942 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201945 ret  */
  ESPCHK(0x10201000u, _esp0);
  ESP += 4; return;
}

/* FUN_10001950 @ 0x10201950 (157 bytes, 43 insns) */
void f_10201950(void) {
  FTRACE(0x10201950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10201950 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201952 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10201954 push 0x1020adb0 */
  push32((uint32_t)(0x1020adb0u));
  /* 10201959 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020195fu);
  /* 1020195f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201961 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10201963 push 0x1020adb8 */
  push32((uint32_t)(0x1020adb8u));
  /* 10201968 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020196eu);
  /* 1020196e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201970 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10201972 push 0x1020ada0 */
  push32((uint32_t)(0x1020ada0u));
  /* 10201977 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020197du);
  /* 1020197d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020197f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10201981 push 0x1020ada8 */
  push32((uint32_t)(0x1020ada8u));
  /* 10201986 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020198cu);
  /* 1020198c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020198e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10201990 push 0x1020adc0 */
  push32((uint32_t)(0x1020adc0u));
  /* 10201995 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020199bu);
  /* 1020199b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020199d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1020199f push 0x1020ad80 */
  push32((uint32_t)(0x1020ad80u));
  /* 102019a4 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102019aau);
  /* 102019aa add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102019ad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102019af push 0xa */
  push32((uint32_t)(0xau));
  /* 102019b1 push 0x1020ad70 */
  push32((uint32_t)(0x1020ad70u));
  /* 102019b6 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102019bcu);
  /* 102019bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102019be push 0xa */
  push32((uint32_t)(0xau));
  /* 102019c0 push 0x1020ad78 */
  push32((uint32_t)(0x1020ad78u));
  /* 102019c5 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102019cbu);
  /* 102019cb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102019cd push 0xa */
  push32((uint32_t)(0xau));
  /* 102019cf push 0x1020ad88 */
  push32((uint32_t)(0x1020ad88u));
  /* 102019d4 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102019dau);
  /* 102019da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102019dc push 0xa */
  push32((uint32_t)(0xau));
  /* 102019de push 0x1020ad90 */
  push32((uint32_t)(0x1020ad90u));
  /* 102019e3 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102019e9u);
  /* 102019e9 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102019ec ret  */
  ESPCHK(0x10201950u, _esp0);
  ESP += 4; return;
}

/* FUN_100019f0 @ 0x102019f0 (1888 bytes, 535 insns) */
void f_102019f0(void) {
  FTRACE(0x102019f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102019f0 push ecx */
  push32((uint32_t)(ECX));
  /* 102019f1 push ebx */
  push32((uint32_t)(EBX));
  /* 102019f2 push ebp */
  push32((uint32_t)(EBP));
  /* 102019f3 push edi */
  push32((uint32_t)(EDI));
  /* 102019f4 push 0x10209030 */
  push32((uint32_t)(0x10209030u));
  /* 102019f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 102019fb call dword ptr [0x1020af14] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af14))), 0x10201a01u);
  /* 10201a01 push 3 */
  push32((uint32_t)(0x3u));
  /* 10201a03 call dword ptr [0x1020af44] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af44))), 0x10201a09u);
  /* 10201a09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10201a0b mov ebx, eax */
  EBX = (EAX);
  /* 10201a0d call dword ptr [0x1020af44] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af44))), 0x10201a13u);
  /* 10201a13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10201a15 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 10201a19 call dword ptr [0x1020af44] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af44))), 0x10201a1fu);
  /* 10201a1f push 1 */
  push32((uint32_t)(0x1u));
  /* 10201a21 mov ebp, eax */
  EBP = (EAX);
  /* 10201a23 call dword ptr [0x1020af44] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af44))), 0x10201a29u);
  /* 10201a29 push 5 */
  push32((uint32_t)(0x5u));
  /* 10201a2b mov edi, eax */
  EDI = (EAX);
  /* 10201a2d call dword ptr [0x1020af44] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af44))), 0x10201a33u);
  /* 10201a33 push 4 */
  push32((uint32_t)(0x4u));
  /* 10201a35 call dword ptr [0x1020af44] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af44))), 0x10201a3bu);
  /* 10201a3b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201a3d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201a3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10201a41 push 0x1020abe8 */
  push32((uint32_t)(0x1020abe8u));
  /* 10201a46 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201a4cu);
  /* 10201a4c push 0x1020abe8 */
  push32((uint32_t)(0x1020abe8u));
  /* 10201a51 call dword ptr [0x1020af48] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af48))), 0x10201a57u);
  /* 10201a57 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201a5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201a5c je 0x10201c0d */
  if (C.zf) goto L_10201c0d;
  /* 10201a62 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201a64 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201a66 push 2 */
  push32((uint32_t)(0x2u));
  /* 10201a68 push 0x1020abd8 */
  push32((uint32_t)(0x1020abd8u));
  /* 10201a6d call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201a73u);
  /* 10201a73 push 0x1020abd8 */
  push32((uint32_t)(0x1020abd8u));
  /* 10201a78 call dword ptr [0x1020af48] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af48))), 0x10201a7eu);
  /* 10201a7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201a81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201a83 je 0x10201c0d */
  if (C.zf) goto L_10201c0d;
  /* 10201a89 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201a8b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201a8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10201a8f push 0x1020ad30 */
  push32((uint32_t)(0x1020ad30u));
  /* 10201a94 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201a9au);
  /* 10201a9a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201a9c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201a9e push 2 */
  push32((uint32_t)(0x2u));
  /* 10201aa0 push 0x1020ad60 */
  push32((uint32_t)(0x1020ad60u));
  /* 10201aa5 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201aabu);
  /* 10201aab push 0x1020abd8 */
  push32((uint32_t)(0x1020abd8u));
  /* 10201ab0 call dword ptr [0x1020af48] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af48))), 0x10201ab6u);
  /* 10201ab6 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201ab9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10201abc jle 0x10201aff */
  if ((C.zf||C.sf!=C.of)) goto L_10201aff;
  /* 10201abe cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10201ac4 jle 0x10201ada */
  if ((C.zf||C.sf!=C.of)) goto L_10201ada;
  /* 10201ac6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201ac8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201aca push 3 */
  push32((uint32_t)(0x3u));
  /* 10201acc push 0x1020ad60 */
  push32((uint32_t)(0x1020ad60u));
  /* 10201ad1 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201ad7u);
  /* 10201ad7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10201ada:;
  /* 10201ada push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201adc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201ade push 4 */
  push32((uint32_t)(0x4u));
  /* 10201ae0 push 0x1020ad60 */
  push32((uint32_t)(0x1020ad60u));
  /* 10201ae5 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201aebu);
  /* 10201aeb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201aed push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10201aef push 5 */
  push32((uint32_t)(0x5u));
  /* 10201af1 push 0x1020ad60 */
  push32((uint32_t)(0x1020ad60u));
  /* 10201af6 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201afcu);
  /* 10201afc add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10201aff:;
  /* 10201aff push esi */
  push32((uint32_t)(ESI));
  /* 10201b00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201b02 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201b04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10201b06 push 0x1020abe0 */
  push32((uint32_t)(0x1020abe0u));
  /* 10201b0b call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201b11u);
  /* 10201b11 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201b13 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201b15 push 1 */
  push32((uint32_t)(0x1u));
  /* 10201b17 push 0x1020ab88 */
  push32((uint32_t)(0x1020ab88u));
  /* 10201b1c call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201b22u);
  /* 10201b22 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201b24 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201b26 push 2 */
  push32((uint32_t)(0x2u));
  /* 10201b28 push 0x1020ac68 */
  push32((uint32_t)(0x1020ac68u));
  /* 10201b2d call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201b33u);
  /* 10201b33 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201b35 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10201b37 push 3 */
  push32((uint32_t)(0x3u));
  /* 10201b39 push 0x1020ac68 */
  push32((uint32_t)(0x1020ac68u));
  /* 10201b3e call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201b44u);
  /* 10201b44 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201b47 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201b49 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10201b4b push 4 */
  push32((uint32_t)(0x4u));
  /* 10201b4d push 0x1020ac68 */
  push32((uint32_t)(0x1020ac68u));
  /* 10201b52 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201b58u);
  /* 10201b58 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201b5a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10201b5c push 5 */
  push32((uint32_t)(0x5u));
  /* 10201b5e push 0x1020ac68 */
  push32((uint32_t)(0x1020ac68u));
  /* 10201b63 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201b69u);
  /* 10201b69 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201b6b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201b6d push 1 */
  push32((uint32_t)(0x1u));
  /* 10201b6f push 0x1020aa20 */
  push32((uint32_t)(0x1020aa20u));
  /* 10201b74 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201b7au);
  /* 10201b7a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201b7c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10201b7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10201b80 push 0x1020abc0 */
  push32((uint32_t)(0x1020abc0u));
  /* 10201b85 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201b8bu);
  /* 10201b8b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201b8e push 0x1020ad98 */
  push32((uint32_t)(0x1020ad98u));
  /* 10201b93 call dword ptr [0x1020af48] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af48))), 0x10201b99u);
  /* 10201b99 push 0x1020ad98 */
  push32((uint32_t)(0x1020ad98u));
  /* 10201b9e mov esi, eax */
  ESI = (EAX);
  /* 10201ba0 call dword ptr [0x1020af4c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af4c))), 0x10201ba6u);
  /* 10201ba6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201ba9 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10201bab pop esi */
  ESI = (pop32());
  /* 10201bac jne 0x10201bd3 */
  if (!C.zf) goto L_10201bd3;
  /* 10201bae push 0xa */
  push32((uint32_t)(0xau));
  /* 10201bb0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201bb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10201bb4 push 0x1020ad98 */
  push32((uint32_t)(0x1020ad98u));
  /* 10201bb9 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201bbfu);
  /* 10201bbf push 0xa */
  push32((uint32_t)(0xau));
  /* 10201bc1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10201bc3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10201bc5 push 0x1020ad98 */
  push32((uint32_t)(0x1020ad98u));
  /* 10201bca call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201bd0u);
  /* 10201bd0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10201bd3:;
  /* 10201bd3 push 0x1020ad60 */
  push32((uint32_t)(0x1020ad60u));
  /* 10201bd8 call dword ptr [0x1020af48] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af48))), 0x10201bdeu);
  /* 10201bde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201be1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201be3 je 0x10201bf9 */
  if (C.zf) goto L_10201bf9;
  /* 10201be5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10201be7 push 0xa */
  push32((uint32_t)(0xau));
  /* 10201be9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10201beb push 0x1020abe8 */
  push32((uint32_t)(0x1020abe8u));
  /* 10201bf0 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201bf6u);
  /* 10201bf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10201bf9:;
  /* 10201bf9 push 0xa */
  push32((uint32_t)(0xau));
  /* 10201bfb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10201bfd push 1 */
  push32((uint32_t)(0x1u));
  /* 10201bff push 0x1020abf0 */
  push32((uint32_t)(0x1020abf0u));
  /* 10201c04 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201c0au);
  /* 10201c0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10201c0d:;
  /* 10201c0d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201c0f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201c11 push 0x1020add8 */
  push32((uint32_t)(0x1020add8u));
  /* 10201c16 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201c1cu);
  /* 10201c1c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201c1e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10201c20 push 0x1020ac80 */
  push32((uint32_t)(0x1020ac80u));
  /* 10201c25 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201c2bu);
  /* 10201c2b push 0x1020add8 */
  push32((uint32_t)(0x1020add8u));
  /* 10201c30 call dword ptr [0x1020af58] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af58))), 0x10201c36u);
  /* 10201c36 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201c39 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10201c3b je 0x10201d2c */
  if (C.zf) goto L_10201d2c;
  /* 10201c41 cmp ebx, 0x2bc */
  { uint32_t _a=(EBX),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10201c47 jle 0x10201c60 */
  if ((C.zf||C.sf!=C.of)) goto L_10201c60;
  /* 10201c49 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201c4b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10201c4d push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10201c52 push 0x1020aa48 */
  push32((uint32_t)(0x1020aa48u));
  /* 10201c57 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201c5du);
  /* 10201c5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10201c60:;
  /* 10201c60 cmp ebx, 0xc8 */
  { uint32_t _a=(EBX),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10201c66 jle 0x10201c7f */
  if ((C.zf||C.sf!=C.of)) goto L_10201c7f;
  /* 10201c68 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201c6a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201c6c push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10201c71 push 0x1020acf0 */
  push32((uint32_t)(0x1020acf0u));
  /* 10201c76 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201c7cu);
  /* 10201c7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10201c7f:;
  /* 10201c7f cmp ebx, 0x12c */
  { uint32_t _a=(EBX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10201c85 jle 0x10201d0b */
  if ((C.zf||C.sf!=C.of)) goto L_10201d0b;
  /* 10201c8b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201c8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201c8f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10201c94 push 0x1020acf0 */
  push32((uint32_t)(0x1020acf0u));
  /* 10201c99 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201c9fu);
  /* 10201c9f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201ca1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10201ca3 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 10201ca8 push 0x1020ade0 */
  push32((uint32_t)(0x1020ade0u));
  /* 10201cad call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201cb3u);
  /* 10201cb3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201cb5 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10201cb7 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 10201cbc push 0x1020ade0 */
  push32((uint32_t)(0x1020ade0u));
  /* 10201cc1 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201cc7u);
  /* 10201cc7 mov eax, dword ptr [0x1020abc8] */
  EAX = (r32((uint32_t)(0x1020abc8)));
  /* 10201ccc add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201ccf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201cd1 jne 0x10201cef */
  if (!C.zf) goto L_10201cef;
  /* 10201cd3 cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10201cd9 jle 0x10201d0b */
  if ((C.zf||C.sf!=C.of)) goto L_10201d0b;
  /* 10201cdb push 0x1020aba0 */
  push32((uint32_t)(0x1020aba0u));
  /* 10201ce0 call dword ptr [0x1020af48] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af48))), 0x10201ce6u);
  /* 10201ce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201ce9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10201ceb je 0x10201d0b */
  if (C.zf) goto L_10201d0b;
  /* 10201ced jmp 0x10201cf7 */
  goto L_10201cf7;
L_10201cef:;
  /* 10201cef cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10201cf5 jle 0x10201d0b */
  if ((C.zf||C.sf!=C.of)) goto L_10201d0b;
L_10201cf7:;
  /* 10201cf7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201cf9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201cfb push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10201cfd push 0x1020acc8 */
  push32((uint32_t)(0x1020acc8u));
  /* 10201d02 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201d08u);
  /* 10201d08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10201d0b:;
  /* 10201d0b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201d0d push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10201d0f push 0x1020ac40 */
  push32((uint32_t)(0x1020ac40u));
  /* 10201d14 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201d1au);
  /* 10201d1a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201d1c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10201d1e push 0x1020aa38 */
  push32((uint32_t)(0x1020aa38u));
  /* 10201d23 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201d29u);
  /* 10201d29 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10201d2c:;
  /* 10201d2c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201d2e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201d30 push 0x1020ad10 */
  push32((uint32_t)(0x1020ad10u));
  /* 10201d35 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201d3bu);
  /* 10201d3b push 0x1020ac80 */
  push32((uint32_t)(0x1020ac80u));
  /* 10201d40 call dword ptr [0x1020af54] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af54))), 0x10201d46u);
  /* 10201d46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201d49 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10201d4b je 0x10201d6e */
  if (C.zf) goto L_10201d6e;
  /* 10201d4d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201d4f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10201d51 push 0x1020ad68 */
  push32((uint32_t)(0x1020ad68u));
  /* 10201d56 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201d5cu);
  /* 10201d5c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201d5e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10201d60 push 0x1020ac90 */
  push32((uint32_t)(0x1020ac90u));
  /* 10201d65 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201d6bu);
  /* 10201d6b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10201d6e:;
  /* 10201d6e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201d70 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10201d72 push 0x1020ac38 */
  push32((uint32_t)(0x1020ac38u));
  /* 10201d77 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201d7du);
  /* 10201d7d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201d7f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201d81 push 0x1020aab0 */
  push32((uint32_t)(0x1020aab0u));
  /* 10201d86 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201d8cu);
  /* 10201d8c push 0x1020ad10 */
  push32((uint32_t)(0x1020ad10u));
  /* 10201d91 call dword ptr [0x1020af54] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af54))), 0x10201d97u);
  /* 10201d97 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201d9a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10201d9c je 0x10202002 */
  if (C.zf) goto L_10202002;
  /* 10201da2 cmp dword ptr [0x1020abc8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1020abc8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10201da9 jne 0x10201dbf */
  if (!C.zf) goto L_10201dbf;
  /* 10201dab push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201dad push 0xa */
  push32((uint32_t)(0xau));
  /* 10201daf push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10201db1 push 0x1020aba8 */
  push32((uint32_t)(0x1020aba8u));
  /* 10201db6 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201dbcu);
  /* 10201dbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10201dbf:;
  /* 10201dbf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201dc1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10201dc3 push 0x1020acb8 */
  push32((uint32_t)(0x1020acb8u));
  /* 10201dc8 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201dceu);
  /* 10201dce push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201dd0 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10201dd2 push 0x1020ac70 */
  push32((uint32_t)(0x1020ac70u));
  /* 10201dd7 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201dddu);
  /* 10201ddd push 0x1020ac70 */
  push32((uint32_t)(0x1020ac70u));
  /* 10201de2 call dword ptr [0x1020af54] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af54))), 0x10201de8u);
  /* 10201de8 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201deb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10201ded je 0x10201e3f */
  if (C.zf) goto L_10201e3f;
  /* 10201def push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201df1 push 0xa */
  push32((uint32_t)(0xau));
  /* 10201df3 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10201df5 push 0x1020ad38 */
  push32((uint32_t)(0x1020ad38u));
  /* 10201dfa call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201e00u);
  /* 10201e00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201e02 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10201e04 push 0x1020ab80 */
  push32((uint32_t)(0x1020ab80u));
  /* 10201e09 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201e0fu);
  /* 10201e0f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201e11 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10201e13 push 0x1020ac40 */
  push32((uint32_t)(0x1020ac40u));
  /* 10201e18 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201e1eu);
  /* 10201e1e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201e20 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10201e22 push 0x1020ac28 */
  push32((uint32_t)(0x1020ac28u));
  /* 10201e27 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201e2du);
  /* 10201e2d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201e2f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10201e31 push 0x1020ac30 */
  push32((uint32_t)(0x1020ac30u));
  /* 10201e36 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201e3cu);
  /* 10201e3c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10201e3f:;
  /* 10201e3f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201e41 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10201e43 push 0x1020ad50 */
  push32((uint32_t)(0x1020ad50u));
  /* 10201e48 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201e4eu);
  /* 10201e4e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201e50 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10201e52 push 0x1020ad58 */
  push32((uint32_t)(0x1020ad58u));
  /* 10201e57 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201e5du);
  /* 10201e5d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10201e5f push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10201e61 push 0x1020aa28 */
  push32((uint32_t)(0x1020aa28u));
  /* 10201e66 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201e6cu);
  /* 10201e6c call 0x102021f0 */
  push32(0x10201e71u); f_102021f0();
  /* 10201e71 push 0x1020ac60 */
  push32((uint32_t)(0x1020ac60u));
  /* 10201e76 call dword ptr [0x1020af54] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af54))), 0x10201e7cu);
  /* 10201e7c add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201e7f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10201e81 je 0x10201e97 */
  if (C.zf) goto L_10201e97;
  /* 10201e83 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201e85 push 0xa */
  push32((uint32_t)(0xau));
  /* 10201e87 push 0xa */
  push32((uint32_t)(0xau));
  /* 10201e89 push 0x1020aa40 */
  push32((uint32_t)(0x1020aa40u));
  /* 10201e8e call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201e94u);
  /* 10201e94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10201e97:;
  /* 10201e97 push 0x1020acf8 */
  push32((uint32_t)(0x1020acf8u));
  /* 10201e9c call dword ptr [0x1020af54] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af54))), 0x10201ea2u);
  /* 10201ea2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201ea5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10201ea7 je 0x10201ee1 */
  if (C.zf) goto L_10201ee1;
  /* 10201ea9 cmp edi, 0x1f40 */
  { uint32_t _a=(EDI),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10201eaf jle 0x10201ec5 */
  if ((C.zf||C.sf!=C.of)) goto L_10201ec5;
  /* 10201eb1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201eb3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10201eb5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10201eb7 push 0x1020add0 */
  push32((uint32_t)(0x1020add0u));
  /* 10201ebc call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201ec2u);
  /* 10201ec2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10201ec5:;
  /* 10201ec5 cmp edi, 0x7530 */
  { uint32_t _a=(EDI),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10201ecb jle 0x10201ee1 */
  if ((C.zf||C.sf!=C.of)) goto L_10201ee1;
  /* 10201ecd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201ecf push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10201ed1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10201ed3 push 0x1020add0 */
  push32((uint32_t)(0x1020add0u));
  /* 10201ed8 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201edeu);
  /* 10201ede add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10201ee1:;
  /* 10201ee1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201ee3 push 0xa */
  push32((uint32_t)(0xau));
  /* 10201ee5 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10201ee7 push 0x1020aba8 */
  push32((uint32_t)(0x1020aba8u));
  /* 10201eec call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10201ef2u);
  /* 10201ef2 call 0x10201950 */
  push32(0x10201ef7u); f_10201950();
  /* 10201ef7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201ef9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10201efb push 0x1020ac20 */
  push32((uint32_t)(0x1020ac20u));
  /* 10201f00 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201f06u);
  /* 10201f06 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201f08 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10201f0a push 0x1020ac18 */
  push32((uint32_t)(0x1020ac18u));
  /* 10201f0f call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201f15u);
  /* 10201f15 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201f17 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10201f19 push 0x1020ac10 */
  push32((uint32_t)(0x1020ac10u));
  /* 10201f1e call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201f24u);
  /* 10201f24 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201f26 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10201f28 push 0x1020ac08 */
  push32((uint32_t)(0x1020ac08u));
  /* 10201f2d call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201f33u);
  /* 10201f33 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201f36 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201f38 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10201f3a push 0x1020ac00 */
  push32((uint32_t)(0x1020ac00u));
  /* 10201f3f call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201f45u);
  /* 10201f45 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201f47 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10201f49 push 0x1020abf8 */
  push32((uint32_t)(0x1020abf8u));
  /* 10201f4e call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201f54u);
  /* 10201f54 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201f56 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10201f58 push 0x1020acb0 */
  push32((uint32_t)(0x1020acb0u));
  /* 10201f5d call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201f63u);
  /* 10201f63 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201f65 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10201f67 push 0x1020aca8 */
  push32((uint32_t)(0x1020aca8u));
  /* 10201f6c call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201f72u);
  /* 10201f72 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201f74 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10201f76 push 0x1020aca0 */
  push32((uint32_t)(0x1020aca0u));
  /* 10201f7b call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201f81u);
  /* 10201f81 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201f83 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10201f85 push 0x1020ac98 */
  push32((uint32_t)(0x1020ac98u));
  /* 10201f8a call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201f90u);
  /* 10201f90 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201f93 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201f95 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10201f97 push 0x1020ac88 */
  push32((uint32_t)(0x1020ac88u));
  /* 10201f9c call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201fa2u);
  /* 10201fa2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10201fa4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10201fa6 push 0x1020acc0 */
  push32((uint32_t)(0x1020acc0u));
  /* 10201fab call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201fb1u);
  /* 10201fb1 push 0x1020adc0 */
  push32((uint32_t)(0x1020adc0u));
  /* 10201fb6 call dword ptr [0x1020af54] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af54))), 0x10201fbcu);
  /* 10201fbc add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10201fbf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10201fc1 je 0x10202002 */
  if (C.zf) goto L_10202002;
  /* 10201fc3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10201fc5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10201fc7 push 0x1020acd0 */
  push32((uint32_t)(0x1020acd0u));
  /* 10201fcc call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201fd2u);
  /* 10201fd2 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10201fd4 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10201fd6 push 0x1020ace0 */
  push32((uint32_t)(0x1020ace0u));
  /* 10201fdb call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201fe1u);
  /* 10201fe1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10201fe3 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10201fe5 push 0x1020ace8 */
  push32((uint32_t)(0x1020ace8u));
  /* 10201fea call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201ff0u);
  /* 10201ff0 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10201ff2 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10201ff4 push 0x1020acd8 */
  push32((uint32_t)(0x1020acd8u));
  /* 10201ff9 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10201fffu);
  /* 10201fff add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10202002:;
  /* 10202002 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202004 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10202006 push 3 */
  push32((uint32_t)(0x3u));
  /* 10202008 push 0x1020ad38 */
  push32((uint32_t)(0x1020ad38u));
  /* 1020200d call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10202013u);
  /* 10202013 mov eax, dword ptr [0x1020abc8] */
  EAX = (r32((uint32_t)(0x1020abc8)));
  /* 10202018 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020201b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020201e je 0x10202034 */
  if (C.zf) goto L_10202034;
  /* 10202020 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202022 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10202024 push 3 */
  push32((uint32_t)(0x3u));
  /* 10202026 push 0x1020aba0 */
  push32((uint32_t)(0x1020aba0u));
  /* 1020202b call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10202031u);
  /* 10202031 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10202034:;
  /* 10202034 push 0x1020ab88 */
  push32((uint32_t)(0x1020ab88u));
  /* 10202039 call dword ptr [0x1020af4c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af4c))), 0x1020203fu);
  /* 1020203f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202042 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10202044 je 0x102020a5 */
  if (C.zf) goto L_102020a5;
  /* 10202046 cmp edi, 0x9c4 */
  { uint32_t _a=(EDI),_b=(0x9c4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020204c jle 0x10202071 */
  if ((C.zf||C.sf!=C.of)) goto L_10202071;
  /* 1020204e push 0x1020ac80 */
  push32((uint32_t)(0x1020ac80u));
  /* 10202053 call dword ptr [0x1020af54] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af54))), 0x10202059u);
  /* 10202059 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020205c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1020205e jne 0x10202071 */
  if (!C.zf) goto L_10202071;
  /* 10202060 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10202065 push 3 */
  push32((uint32_t)(0x3u));
  /* 10202067 push 1 */
  push32((uint32_t)(0x1u));
  /* 10202069 call 0x102029a0 */
  push32(0x1020206eu); f_102029a0();
  /* 1020206e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10202071:;
  /* 10202071 cmp ebp, 0x186a0 */
  { uint32_t _a=(EBP),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10202077 jle 0x1020208a */
  if ((C.zf||C.sf!=C.of)) goto L_1020208a;
  /* 10202079 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 1020207e push 1 */
  push32((uint32_t)(0x1u));
  /* 10202080 push 2 */
  push32((uint32_t)(0x2u));
  /* 10202082 call 0x102029a0 */
  push32(0x10202087u); f_102029a0();
  /* 10202087 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1020208a:;
  /* 1020208a cmp dword ptr [esp + 0xc], 0xf4240 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0xf4240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10202092 jle 0x102020a5 */
  if ((C.zf||C.sf!=C.of)) goto L_102020a5;
  /* 10202094 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 10202099 push 1 */
  push32((uint32_t)(0x1u));
  /* 1020209b push 0 */
  push32((uint32_t)(0x0u));
  /* 1020209d call 0x102029a0 */
  push32(0x102020a2u); f_102029a0();
  /* 102020a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102020a5:;
  /* 102020a5 call dword ptr [0x1020af70] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af70))), 0x102020abu);
  /* 102020ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102020ad je 0x102020f4 */
  if (C.zf) goto L_102020f4;
  /* 102020af push 0x1020acf0 */
  push32((uint32_t)(0x1020acf0u));
  /* 102020b4 call dword ptr [0x1020af48] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af48))), 0x102020bau);
  /* 102020ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102020bd cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102020c0 jge 0x102020d2 */
  if ((C.sf==C.of)) goto L_102020d2;
  /* 102020c2 cmp ebx, 0x7d0 */
  { uint32_t _a=(EBX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102020c8 jge 0x102020d2 */
  if ((C.sf==C.of)) goto L_102020d2;
  /* 102020ca push 2 */
  push32((uint32_t)(0x2u));
  /* 102020cc push 2 */
  push32((uint32_t)(0x2u));
  /* 102020ce push 0xa */
  push32((uint32_t)(0xau));
  /* 102020d0 jmp 0x102020fa */
  goto L_102020fa;
L_102020d2:;
  /* 102020d2 push 0x1020ac80 */
  push32((uint32_t)(0x1020ac80u));
  /* 102020d7 call dword ptr [0x1020af54] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af54))), 0x102020ddu);
  /* 102020dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102020e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102020e2 jne 0x102020ec */
  if (!C.zf) goto L_102020ec;
  /* 102020e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 102020e6 push 4 */
  push32((uint32_t)(0x4u));
  /* 102020e8 push 0xa */
  push32((uint32_t)(0xau));
  /* 102020ea jmp 0x102020fa */
  goto L_102020fa;
L_102020ec:;
  /* 102020ec push 3 */
  push32((uint32_t)(0x3u));
  /* 102020ee push 6 */
  push32((uint32_t)(0x6u));
  /* 102020f0 push 7 */
  push32((uint32_t)(0x7u));
  /* 102020f2 jmp 0x102020fa */
  goto L_102020fa;
L_102020f4:;
  /* 102020f4 push 5 */
  push32((uint32_t)(0x5u));
  /* 102020f6 push 5 */
  push32((uint32_t)(0x5u));
  /* 102020f8 push 0 */
  push32((uint32_t)(0x0u));
L_102020fa:;
  /* 102020fa call dword ptr [0x1020af1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af1c))), 0x10202100u);
  /* 10202100 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202103 push 0x1020aab0 */
  push32((uint32_t)(0x1020aab0u));
  /* 10202108 call dword ptr [0x1020af54] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af54))), 0x1020210eu);
  /* 1020210e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202111 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10202113 pop edi */
  EDI = (pop32());
  /* 10202114 pop ebp */
  EBP = (pop32());
  /* 10202115 pop ebx */
  EBX = (pop32());
  /* 10202116 je 0x1020213a */
  if (C.zf) goto L_1020213a;
  /* 10202118 push 3 */
  push32((uint32_t)(0x3u));
  /* 1020211a push 7 */
  push32((uint32_t)(0x7u));
  /* 1020211c push 6 */
  push32((uint32_t)(0x6u));
  /* 1020211e call dword ptr [0x1020af1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af1c))), 0x10202124u);
  /* 10202124 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10202126 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10202128 push 7 */
  push32((uint32_t)(0x7u));
  /* 1020212a push 0x1020abd0 */
  push32((uint32_t)(0x1020abd0u));
  /* 1020212f call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10202135u);
  /* 10202135 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202138 pop ecx */
  ECX = (pop32());
  /* 10202139 ret  */
  ESPCHK(0x102019f0u, _esp0);
  ESP += 4; return;
L_1020213a:;
  /* 1020213a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1020213c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020213e push 3 */
  push32((uint32_t)(0x3u));
  /* 10202140 push 0x1020abd0 */
  push32((uint32_t)(0x1020abd0u));
  /* 10202145 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x1020214bu);
  /* 1020214b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020214e pop ecx */
  ECX = (pop32());
  /* 1020214f ret  */
  ESPCHK(0x102019f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002150 @ 0x10202150 (157 bytes, 43 insns) */
void f_10202150(void) {
  FTRACE(0x10202150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10202150 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202152 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10202154 push 0x1020adb0 */
  push32((uint32_t)(0x1020adb0u));
  /* 10202159 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020215fu);
  /* 1020215f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202161 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10202163 push 0x1020adb8 */
  push32((uint32_t)(0x1020adb8u));
  /* 10202168 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020216eu);
  /* 1020216e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202170 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10202172 push 0x1020ada0 */
  push32((uint32_t)(0x1020ada0u));
  /* 10202177 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020217du);
  /* 1020217d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020217f push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10202181 push 0x1020ada8 */
  push32((uint32_t)(0x1020ada8u));
  /* 10202186 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020218cu);
  /* 1020218c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020218e push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10202190 push 0x1020adc0 */
  push32((uint32_t)(0x1020adc0u));
  /* 10202195 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020219bu);
  /* 1020219b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020219d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1020219f push 0x1020ad80 */
  push32((uint32_t)(0x1020ad80u));
  /* 102021a4 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102021aau);
  /* 102021aa add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102021ad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102021af push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 102021b1 push 0x1020ad70 */
  push32((uint32_t)(0x1020ad70u));
  /* 102021b6 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102021bcu);
  /* 102021bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102021be push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 102021c0 push 0x1020ad78 */
  push32((uint32_t)(0x1020ad78u));
  /* 102021c5 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102021cbu);
  /* 102021cb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102021cd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 102021cf push 0x1020ad88 */
  push32((uint32_t)(0x1020ad88u));
  /* 102021d4 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102021dau);
  /* 102021da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102021dc push 0xa */
  push32((uint32_t)(0xau));
  /* 102021de push 0x1020ad90 */
  push32((uint32_t)(0x1020ad90u));
  /* 102021e3 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102021e9u);
  /* 102021e9 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102021ec ret  */
  ESPCHK(0x10202150u, _esp0);
  ESP += 4; return;
}

/* FUN_100021f0 @ 0x102021f0 (127 bytes, 35 insns) */
void f_102021f0(void) {
  FTRACE(0x102021f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102021f0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102021f2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 102021f4 push 0x1020ad20 */
  push32((uint32_t)(0x1020ad20u));
  /* 102021f9 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102021ffu);
  /* 102021ff push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10202201 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10202203 push 0x1020ad18 */
  push32((uint32_t)(0x1020ad18u));
  /* 10202208 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020220eu);
  /* 1020220e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10202210 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10202212 push 0x1020ad00 */
  push32((uint32_t)(0x1020ad00u));
  /* 10202217 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020221du);
  /* 1020221d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1020221f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10202221 push 0x1020acf8 */
  push32((uint32_t)(0x1020acf8u));
  /* 10202226 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020222cu);
  /* 1020222c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1020222e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10202230 push 0x1020ac48 */
  push32((uint32_t)(0x1020ac48u));
  /* 10202235 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020223bu);
  /* 1020223b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1020223d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1020223f push 0x1020ac50 */
  push32((uint32_t)(0x1020ac50u));
  /* 10202244 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020224au);
  /* 1020224a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020224d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1020224f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10202251 push 0x1020ac58 */
  push32((uint32_t)(0x1020ac58u));
  /* 10202256 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020225cu);
  /* 1020225c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1020225e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10202260 push 0x1020ac60 */
  push32((uint32_t)(0x1020ac60u));
  /* 10202265 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020226bu);
  /* 1020226b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020226e ret  */
  ESPCHK(0x102021f0u, _esp0);
  ESP += 4; return;
}

/* ProcessLandAI @ 0x10202270 (1836 bytes, 510 insns) */
void f_10202270(void) {
  FTRACE(0x10202270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10202270 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10202273 push ebx */
  push32((uint32_t)(EBX));
  /* 10202274 push ebp */
  push32((uint32_t)(EBP));
  /* 10202275 push esi */
  push32((uint32_t)(ESI));
  /* 10202276 push edi */
  push32((uint32_t)(EDI));
  /* 10202277 push 0x10209030 */
  push32((uint32_t)(0x10209030u));
  /* 1020227c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1020227e call dword ptr [0x1020af14] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af14))), 0x10202284u);
  /* 10202284 push 3 */
  push32((uint32_t)(0x3u));
  /* 10202286 call dword ptr [0x1020af44] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af44))), 0x1020228cu);
  /* 1020228c push 0 */
  push32((uint32_t)(0x0u));
  /* 1020228e mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 10202292 call dword ptr [0x1020af44] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af44))), 0x10202298u);
  /* 10202298 push 2 */
  push32((uint32_t)(0x2u));
  /* 1020229a mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 1020229e call dword ptr [0x1020af44] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af44))), 0x102022a4u);
  /* 102022a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 102022a6 mov ebx, eax */
  EBX = (EAX);
  /* 102022a8 call dword ptr [0x1020af44] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af44))), 0x102022aeu);
  /* 102022ae push 5 */
  push32((uint32_t)(0x5u));
  /* 102022b0 mov esi, eax */
  ESI = (EAX);
  /* 102022b2 call dword ptr [0x1020af44] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af44))), 0x102022b8u);
  /* 102022b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 102022ba mov ebp, eax */
  EBP = (EAX);
  /* 102022bc call dword ptr [0x1020af44] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af44))), 0x102022c2u);
  /* 102022c2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102022c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102022c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102022c8 push 0x1020abe8 */
  push32((uint32_t)(0x1020abe8u));
  /* 102022cd mov edi, eax */
  EDI = (EAX);
  /* 102022cf call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x102022d5u);
  /* 102022d5 push 0x1020abe8 */
  push32((uint32_t)(0x1020abe8u));
  /* 102022da call dword ptr [0x1020af48] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af48))), 0x102022e0u);
  /* 102022e0 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102022e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102022e5 je 0x1020246c */
  if (C.zf) goto L_1020246c;
  /* 102022eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102022ed push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102022ef push 2 */
  push32((uint32_t)(0x2u));
  /* 102022f1 push 0x1020abd8 */
  push32((uint32_t)(0x1020abd8u));
  /* 102022f6 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x102022fcu);
  /* 102022fc push 0x1020abd8 */
  push32((uint32_t)(0x1020abd8u));
  /* 10202301 call dword ptr [0x1020af48] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af48))), 0x10202307u);
  /* 10202307 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020230a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020230c je 0x1020246c */
  if (C.zf) goto L_1020246c;
  /* 10202312 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202314 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202316 push 1 */
  push32((uint32_t)(0x1u));
  /* 10202318 push 0x1020ad30 */
  push32((uint32_t)(0x1020ad30u));
  /* 1020231d call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10202323u);
  /* 10202323 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202325 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202327 push 2 */
  push32((uint32_t)(0x2u));
  /* 10202329 push 0x1020ad60 */
  push32((uint32_t)(0x1020ad60u));
  /* 1020232e call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10202334u);
  /* 10202334 push 0x1020abd8 */
  push32((uint32_t)(0x1020abd8u));
  /* 10202339 call dword ptr [0x1020af48] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af48))), 0x1020233fu);
  /* 1020233f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202342 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10202345 jle 0x102023e6 */
  if ((C.zf||C.sf!=C.of)) goto L_102023e6;
  /* 1020234b cmp dword ptr [esp + 0x10], 0x3e8 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10202353 jle 0x10202369 */
  if ((C.zf||C.sf!=C.of)) goto L_10202369;
  /* 10202355 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202357 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202359 push 3 */
  push32((uint32_t)(0x3u));
  /* 1020235b push 0x1020ad60 */
  push32((uint32_t)(0x1020ad60u));
  /* 10202360 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10202366u);
  /* 10202366 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10202369:;
  /* 10202369 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020236b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1020236d push 4 */
  push32((uint32_t)(0x4u));
  /* 1020236f push 0x1020ad60 */
  push32((uint32_t)(0x1020ad60u));
  /* 10202374 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x1020237au);
  /* 1020237a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020237c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1020237e push 5 */
  push32((uint32_t)(0x5u));
  /* 10202380 push 0x1020ad60 */
  push32((uint32_t)(0x1020ad60u));
  /* 10202385 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x1020238bu);
  /* 1020238b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020238d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020238f push 2 */
  push32((uint32_t)(0x2u));
  /* 10202391 push 0x1020ac68 */
  push32((uint32_t)(0x1020ac68u));
  /* 10202396 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x1020239cu);
  /* 1020239c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020239e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102023a0 push 3 */
  push32((uint32_t)(0x3u));
  /* 102023a2 push 0x1020ac68 */
  push32((uint32_t)(0x1020ac68u));
  /* 102023a7 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x102023adu);
  /* 102023ad add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102023b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102023b2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102023b4 push 4 */
  push32((uint32_t)(0x4u));
  /* 102023b6 push 0x1020ac68 */
  push32((uint32_t)(0x1020ac68u));
  /* 102023bb call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x102023c1u);
  /* 102023c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102023c3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 102023c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 102023c7 push 0x1020ac68 */
  push32((uint32_t)(0x1020ac68u));
  /* 102023cc call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x102023d2u);
  /* 102023d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102023d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102023d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102023d8 push 0x1020aa20 */
  push32((uint32_t)(0x1020aa20u));
  /* 102023dd call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x102023e3u);
  /* 102023e3 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102023e6:;
  /* 102023e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102023e8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102023ea push 1 */
  push32((uint32_t)(0x1u));
  /* 102023ec push 0x1020abe0 */
  push32((uint32_t)(0x1020abe0u));
  /* 102023f1 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x102023f7u);
  /* 102023f7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 102023fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102023fe cmp eax, 0x2bc */
  { uint32_t _a=(EAX),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10202403 jg 0x1020240d */
  if ((!C.zf&&C.sf==C.of)) goto L_1020240d;
  /* 10202405 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020240b jle 0x10202432 */
  if ((C.zf||C.sf!=C.of)) goto L_10202432;
L_1020240d:;
  /* 1020240d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020240f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202411 push 1 */
  push32((uint32_t)(0x1u));
  /* 10202413 push 0x1020ab88 */
  push32((uint32_t)(0x1020ab88u));
  /* 10202418 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x1020241eu);
  /* 1020241e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202420 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10202422 push 1 */
  push32((uint32_t)(0x1u));
  /* 10202424 push 0x1020abc0 */
  push32((uint32_t)(0x1020abc0u));
  /* 10202429 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x1020242fu);
  /* 1020242f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10202432:;
  /* 10202432 push 0x1020ad60 */
  push32((uint32_t)(0x1020ad60u));
  /* 10202437 call dword ptr [0x1020af48] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af48))), 0x1020243du);
  /* 1020243d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202440 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10202442 je 0x10202458 */
  if (C.zf) goto L_10202458;
  /* 10202444 push 0xa */
  push32((uint32_t)(0xau));
  /* 10202446 push 0xa */
  push32((uint32_t)(0xau));
  /* 10202448 push 2 */
  push32((uint32_t)(0x2u));
  /* 1020244a push 0x1020abe8 */
  push32((uint32_t)(0x1020abe8u));
  /* 1020244f call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10202455u);
  /* 10202455 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10202458:;
  /* 10202458 push 0xa */
  push32((uint32_t)(0xau));
  /* 1020245a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1020245c push 1 */
  push32((uint32_t)(0x1u));
  /* 1020245e push 0x1020abf0 */
  push32((uint32_t)(0x1020abf0u));
  /* 10202463 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10202469u);
  /* 10202469 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1020246c:;
  /* 1020246c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020246e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202470 push 0x1020add8 */
  push32((uint32_t)(0x1020add8u));
  /* 10202475 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020247bu);
  /* 1020247b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020247d push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1020247f push 0x1020ac80 */
  push32((uint32_t)(0x1020ac80u));
  /* 10202484 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020248au);
  /* 1020248a push 0x1020add8 */
  push32((uint32_t)(0x1020add8u));
  /* 1020248f call dword ptr [0x1020af58] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af58))), 0x10202495u);
  /* 10202495 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202498 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1020249a je 0x10202568 */
  if (C.zf) goto L_10202568;
  /* 102024a0 cmp dword ptr [esp + 0x10], 0x2bc */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102024a8 jle 0x102024c1 */
  if ((C.zf||C.sf!=C.of)) goto L_102024c1;
  /* 102024aa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102024ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102024ae push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 102024b3 push 0x1020aa48 */
  push32((uint32_t)(0x1020aa48u));
  /* 102024b8 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x102024beu);
  /* 102024be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102024c1:;
  /* 102024c1 cmp dword ptr [esp + 0x10], 0xc8 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102024c9 jle 0x102024e2 */
  if ((C.zf||C.sf!=C.of)) goto L_102024e2;
  /* 102024cb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102024cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102024cf push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 102024d4 push 0x1020acf0 */
  push32((uint32_t)(0x1020acf0u));
  /* 102024d9 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x102024dfu);
  /* 102024df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102024e2:;
  /* 102024e2 cmp dword ptr [esp + 0x10], 0x12c */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102024ea jle 0x10202547 */
  if ((C.zf||C.sf!=C.of)) goto L_10202547;
  /* 102024ec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102024ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102024f0 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 102024f5 push 0x1020acf0 */
  push32((uint32_t)(0x1020acf0u));
  /* 102024fa call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10202500u);
  /* 10202500 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202502 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10202504 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 10202509 push 0x1020ade0 */
  push32((uint32_t)(0x1020ade0u));
  /* 1020250e call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10202514u);
  /* 10202514 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202516 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10202518 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 1020251d push 0x1020ade0 */
  push32((uint32_t)(0x1020ade0u));
  /* 10202522 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10202528u);
  /* 10202528 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020252b cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10202531 jle 0x10202547 */
  if ((C.zf||C.sf!=C.of)) goto L_10202547;
  /* 10202533 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202535 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202537 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10202539 push 0x1020acc8 */
  push32((uint32_t)(0x1020acc8u));
  /* 1020253e call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10202544u);
  /* 10202544 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10202547:;
  /* 10202547 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202549 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1020254b push 0x1020ac40 */
  push32((uint32_t)(0x1020ac40u));
  /* 10202550 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10202556u);
  /* 10202556 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10202558 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1020255a push 0x1020aa38 */
  push32((uint32_t)(0x1020aa38u));
  /* 1020255f call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10202565u);
  /* 10202565 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10202568:;
  /* 10202568 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020256a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020256c push 0x1020ad10 */
  push32((uint32_t)(0x1020ad10u));
  /* 10202571 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10202577u);
  /* 10202577 push 0x1020ac80 */
  push32((uint32_t)(0x1020ac80u));
  /* 1020257c call dword ptr [0x1020af54] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af54))), 0x10202582u);
  /* 10202582 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202585 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10202587 je 0x102025aa */
  if (C.zf) goto L_102025aa;
  /* 10202589 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020258b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1020258d push 0x1020ad68 */
  push32((uint32_t)(0x1020ad68u));
  /* 10202592 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10202598u);
  /* 10202598 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020259a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1020259c push 0x1020ac90 */
  push32((uint32_t)(0x1020ac90u));
  /* 102025a1 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102025a7u);
  /* 102025a7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102025aa:;
  /* 102025aa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102025ac push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102025ae push 0x1020ac38 */
  push32((uint32_t)(0x1020ac38u));
  /* 102025b3 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102025b9u);
  /* 102025b9 push 0x1020ad10 */
  push32((uint32_t)(0x1020ad10u));
  /* 102025be call dword ptr [0x1020af54] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af54))), 0x102025c4u);
  /* 102025c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102025c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102025c9 je 0x102027d1 */
  if (C.zf) goto L_102027d1;
  /* 102025cf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102025d1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102025d3 push 0x1020acb8 */
  push32((uint32_t)(0x1020acb8u));
  /* 102025d8 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102025deu);
  /* 102025de push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102025e0 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102025e2 push 0x1020ac40 */
  push32((uint32_t)(0x1020ac40u));
  /* 102025e7 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102025edu);
  /* 102025ed push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102025ef push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102025f1 push 0x1020ac28 */
  push32((uint32_t)(0x1020ac28u));
  /* 102025f6 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102025fcu);
  /* 102025fc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102025fe push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10202600 push 0x1020ac30 */
  push32((uint32_t)(0x1020ac30u));
  /* 10202605 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020260bu);
  /* 1020260b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020260d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1020260f push 0x1020ad50 */
  push32((uint32_t)(0x1020ad50u));
  /* 10202614 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020261au);
  /* 1020261a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020261c push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1020261e push 0x1020ad58 */
  push32((uint32_t)(0x1020ad58u));
  /* 10202623 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10202629u);
  /* 10202629 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020262c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1020262e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10202630 push 0x1020aa28 */
  push32((uint32_t)(0x1020aa28u));
  /* 10202635 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020263bu);
  /* 1020263b call 0x102021f0 */
  push32(0x10202640u); f_102021f0();
  /* 10202640 push 0x1020ac60 */
  push32((uint32_t)(0x1020ac60u));
  /* 10202645 call dword ptr [0x1020af54] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af54))), 0x1020264bu);
  /* 1020264b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020264e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10202650 je 0x10202666 */
  if (C.zf) goto L_10202666;
  /* 10202652 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10202654 push 0xa */
  push32((uint32_t)(0xau));
  /* 10202656 push 0xa */
  push32((uint32_t)(0xau));
  /* 10202658 push 0x1020aa40 */
  push32((uint32_t)(0x1020aa40u));
  /* 1020265d call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10202663u);
  /* 10202663 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10202666:;
  /* 10202666 push 0x1020acf8 */
  push32((uint32_t)(0x1020acf8u));
  /* 1020266b call dword ptr [0x1020af54] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af54))), 0x10202671u);
  /* 10202671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202674 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10202676 je 0x102026b0 */
  if (C.zf) goto L_102026b0;
  /* 10202678 cmp esi, 0x1f40 */
  { uint32_t _a=(ESI),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020267e jle 0x10202694 */
  if ((C.zf||C.sf!=C.of)) goto L_10202694;
  /* 10202680 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10202682 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10202684 push 0xa */
  push32((uint32_t)(0xau));
  /* 10202686 push 0x1020add0 */
  push32((uint32_t)(0x1020add0u));
  /* 1020268b call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x10202691u);
  /* 10202691 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10202694:;
  /* 10202694 cmp esi, 0x7530 */
  { uint32_t _a=(ESI),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020269a jle 0x102026b0 */
  if ((C.zf||C.sf!=C.of)) goto L_102026b0;
  /* 1020269c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1020269e push 0x14 */
  push32((uint32_t)(0x14u));
  /* 102026a0 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 102026a2 push 0x1020add0 */
  push32((uint32_t)(0x1020add0u));
  /* 102026a7 call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x102026adu);
  /* 102026ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102026b0:;
  /* 102026b0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102026b2 push 0xa */
  push32((uint32_t)(0xau));
  /* 102026b4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 102026b6 push 0x1020aba8 */
  push32((uint32_t)(0x1020aba8u));
  /* 102026bb call dword ptr [0x1020af0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af0c))), 0x102026c1u);
  /* 102026c1 call 0x10202150 */
  push32(0x102026c6u); f_10202150();
  /* 102026c6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102026c8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 102026ca push 0x1020ac20 */
  push32((uint32_t)(0x1020ac20u));
  /* 102026cf call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102026d5u);
  /* 102026d5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102026d7 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 102026d9 push 0x1020ac18 */
  push32((uint32_t)(0x1020ac18u));
  /* 102026de call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102026e4u);
  /* 102026e4 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102026e6 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 102026e8 push 0x1020ac10 */
  push32((uint32_t)(0x1020ac10u));
  /* 102026ed call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102026f3u);
  /* 102026f3 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102026f5 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 102026f7 push 0x1020ac08 */
  push32((uint32_t)(0x1020ac08u));
  /* 102026fc call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10202702u);
  /* 10202702 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202705 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10202707 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10202709 push 0x1020ac00 */
  push32((uint32_t)(0x1020ac00u));
  /* 1020270e call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10202714u);
  /* 10202714 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10202716 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10202718 push 0x1020abf8 */
  push32((uint32_t)(0x1020abf8u));
  /* 1020271d call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10202723u);
  /* 10202723 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10202725 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10202727 push 0x1020acb0 */
  push32((uint32_t)(0x1020acb0u));
  /* 1020272c call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10202732u);
  /* 10202732 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10202734 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10202736 push 0x1020aca8 */
  push32((uint32_t)(0x1020aca8u));
  /* 1020273b call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10202741u);
  /* 10202741 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10202743 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10202745 push 0x1020aca0 */
  push32((uint32_t)(0x1020aca0u));
  /* 1020274a call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10202750u);
  /* 10202750 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10202752 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10202754 push 0x1020ac98 */
  push32((uint32_t)(0x1020ac98u));
  /* 10202759 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x1020275fu);
  /* 1020275f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202762 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10202764 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10202766 push 0x1020ac88 */
  push32((uint32_t)(0x1020ac88u));
  /* 1020276b call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10202771u);
  /* 10202771 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10202773 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10202775 push 0x1020acc0 */
  push32((uint32_t)(0x1020acc0u));
  /* 1020277a call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x10202780u);
  /* 10202780 push 0x1020adc0 */
  push32((uint32_t)(0x1020adc0u));
  /* 10202785 call dword ptr [0x1020af54] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af54))), 0x1020278bu);
  /* 1020278b add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020278e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10202790 je 0x102027d1 */
  if (C.zf) goto L_102027d1;
  /* 10202792 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10202794 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10202796 push 0x1020acd0 */
  push32((uint32_t)(0x1020acd0u));
  /* 1020279b call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102027a1u);
  /* 102027a1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 102027a3 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 102027a5 push 0x1020ace0 */
  push32((uint32_t)(0x1020ace0u));
  /* 102027aa call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102027b0u);
  /* 102027b0 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 102027b2 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 102027b4 push 0x1020ace8 */
  push32((uint32_t)(0x1020ace8u));
  /* 102027b9 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102027bfu);
  /* 102027bf push 0x14 */
  push32((uint32_t)(0x14u));
  /* 102027c1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 102027c3 push 0x1020acd8 */
  push32((uint32_t)(0x1020acd8u));
  /* 102027c8 call dword ptr [0x1020af10] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af10))), 0x102027ceu);
  /* 102027ce add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102027d1:;
  /* 102027d1 push 0x1020ab88 */
  push32((uint32_t)(0x1020ab88u));
  /* 102027d6 call dword ptr [0x1020af4c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af4c))), 0x102027dcu);
  /* 102027dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102027df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102027e1 je 0x10202913 */
  if (C.zf) goto L_10202913;
  /* 102027e7 cmp esi, 0x9c4 */
  { uint32_t _a=(ESI),_b=(0x9c4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102027ed jle 0x10202812 */
  if ((C.zf||C.sf!=C.of)) goto L_10202812;
  /* 102027ef push 0x1020ac80 */
  push32((uint32_t)(0x1020ac80u));
  /* 102027f4 call dword ptr [0x1020af54] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af54))), 0x102027fau);
  /* 102027fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102027fd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102027ff jne 0x10202812 */
  if (!C.zf) goto L_10202812;
  /* 10202801 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10202806 push 3 */
  push32((uint32_t)(0x3u));
  /* 10202808 push 1 */
  push32((uint32_t)(0x1u));
  /* 1020280a call 0x102029a0 */
  push32(0x1020280fu); f_102029a0();
  /* 1020280f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10202812:;
  /* 10202812 cmp ebx, 0x186a0 */
  { uint32_t _a=(EBX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10202818 jle 0x1020282b */
  if ((C.zf||C.sf!=C.of)) goto L_1020282b;
  /* 1020281a push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 1020281f push 1 */
  push32((uint32_t)(0x1u));
  /* 10202821 push 2 */
  push32((uint32_t)(0x2u));
  /* 10202823 call 0x102029a0 */
  push32(0x10202828u); f_102029a0();
  /* 10202828 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1020282b:;
  /* 1020282b cmp dword ptr [esp + 0x14], 0xf4240 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xf4240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10202833 jle 0x10202846 */
  if ((C.zf||C.sf!=C.of)) goto L_10202846;
  /* 10202835 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 1020283a push 1 */
  push32((uint32_t)(0x1u));
  /* 1020283c push 0 */
  push32((uint32_t)(0x0u));
  /* 1020283e call 0x102029a0 */
  push32(0x10202843u); f_102029a0();
  /* 10202843 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10202846:;
  /* 10202846 cmp dword ptr [esp + 0x10], 0x1f4 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020284e jge 0x10202913 */
  if ((C.sf==C.of)) goto L_10202913;
  /* 10202854 call dword ptr [0x1020af70] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af70))), 0x1020285au);
  /* 1020285a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1020285c je 0x10202913 */
  if (C.zf) goto L_10202913;
  /* 10202862 cmp ebp, 0x4e20 */
  { uint32_t _a=(EBP),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10202868 jle 0x10202874 */
  if ((C.zf||C.sf!=C.of)) goto L_10202874;
  /* 1020286a push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1020286f jmp 0x10202907 */
  goto L_10202907;
L_10202874:;
  /* 10202874 cmp edi, 0x4e20 */
  { uint32_t _a=(EDI),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020287a jle 0x1020288a */
  if ((C.zf||C.sf!=C.of)) goto L_1020288a;
  /* 1020287c push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10202881 push 3 */
  push32((uint32_t)(0x3u));
  /* 10202883 push 4 */
  push32((uint32_t)(0x4u));
  /* 10202885 jmp 0x1020290b */
  goto L_1020290b;
L_1020288a:;
  /* 1020288a cmp esi, 0x3a98 */
  { uint32_t _a=(ESI),_b=(0x3a98u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10202890 jle 0x1020289d */
  if ((C.zf||C.sf!=C.of)) goto L_1020289d;
  /* 10202892 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10202897 push 3 */
  push32((uint32_t)(0x3u));
  /* 10202899 push 1 */
  push32((uint32_t)(0x1u));
  /* 1020289b jmp 0x1020290b */
  goto L_1020290b;
L_1020289d:;
  /* 1020289d cmp ebx, 0x11170 */
  { uint32_t _a=(EBX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102028a3 jle 0x102028b0 */
  if ((C.zf||C.sf!=C.of)) goto L_102028b0;
  /* 102028a5 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 102028aa push 3 */
  push32((uint32_t)(0x3u));
  /* 102028ac push 2 */
  push32((uint32_t)(0x2u));
  /* 102028ae jmp 0x1020290b */
  goto L_1020290b;
L_102028b0:;
  /* 102028b0 cmp dword ptr [esp + 0x14], 0x9c40 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x9c40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102028b8 jle 0x102028c5 */
  if ((C.zf||C.sf!=C.of)) goto L_102028c5;
  /* 102028ba push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 102028bf push 3 */
  push32((uint32_t)(0x3u));
  /* 102028c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102028c3 jmp 0x1020290b */
  goto L_1020290b;
L_102028c5:;
  /* 102028c5 cmp edi, 0x2710 */
  { uint32_t _a=(EDI),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102028cb jle 0x102028d8 */
  if ((C.zf||C.sf!=C.of)) goto L_102028d8;
  /* 102028cd push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 102028d2 push 3 */
  push32((uint32_t)(0x3u));
  /* 102028d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 102028d6 jmp 0x1020290b */
  goto L_1020290b;
L_102028d8:;
  /* 102028d8 cmp ebp, 0x2710 */
  { uint32_t _a=(EBP),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102028de jle 0x102028e7 */
  if ((C.zf||C.sf!=C.of)) goto L_102028e7;
  /* 102028e0 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 102028e5 jmp 0x10202907 */
  goto L_10202907;
L_102028e7:;
  /* 102028e7 cmp edi, 0x7d0 */
  { uint32_t _a=(EDI),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102028ed jle 0x102028fa */
  if ((C.zf||C.sf!=C.of)) goto L_102028fa;
  /* 102028ef push 0x384 */
  push32((uint32_t)(0x384u));
  /* 102028f4 push 3 */
  push32((uint32_t)(0x3u));
  /* 102028f6 push 4 */
  push32((uint32_t)(0x4u));
  /* 102028f8 jmp 0x1020290b */
  goto L_1020290b;
L_102028fa:;
  /* 102028fa cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10202900 jle 0x10202913 */
  if ((C.zf||C.sf!=C.of)) goto L_10202913;
  /* 10202902 push 0x384 */
  push32((uint32_t)(0x384u));
L_10202907:;
  /* 10202907 push 3 */
  push32((uint32_t)(0x3u));
  /* 10202909 push 5 */
  push32((uint32_t)(0x5u));
L_1020290b:;
  /* 1020290b call 0x102029a0 */
  push32(0x10202910u); f_102029a0();
  /* 10202910 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10202913:;
  /* 10202913 call dword ptr [0x1020af70] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af70))), 0x10202919u);
  /* 10202919 pop edi */
  EDI = (pop32());
  /* 1020291a pop esi */
  ESI = (pop32());
  /* 1020291b pop ebp */
  EBP = (pop32());
  /* 1020291c pop ebx */
  EBX = (pop32());
  /* 1020291d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1020291f je 0x10202989 */
  if (C.zf) goto L_10202989;
  /* 10202921 push 0x1020acf0 */
  push32((uint32_t)(0x1020acf0u));
  /* 10202926 call dword ptr [0x1020af48] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af48))), 0x1020292cu);
  /* 1020292c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020292f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10202932 jge 0x10202951 */
  if ((C.sf==C.of)) goto L_10202951;
  /* 10202934 cmp dword ptr [esp], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020293c jge 0x10202951 */
  if ((C.sf==C.of)) goto L_10202951;
  /* 1020293e push 2 */
  push32((uint32_t)(0x2u));
  /* 10202940 push 2 */
  push32((uint32_t)(0x2u));
  /* 10202942 push 0xa */
  push32((uint32_t)(0xau));
  /* 10202944 call dword ptr [0x1020af1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af1c))), 0x1020294au);
  /* 1020294a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020294d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202950 ret  */
  ESPCHK(0x10202270u, _esp0);
  ESP += 4; return;
L_10202951:;
  /* 10202951 push 0x1020ac80 */
  push32((uint32_t)(0x1020ac80u));
  /* 10202956 call dword ptr [0x1020af54] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af54))), 0x1020295cu);
  /* 1020295c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020295f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10202961 jne 0x10202976 */
  if (!C.zf) goto L_10202976;
  /* 10202963 push 2 */
  push32((uint32_t)(0x2u));
  /* 10202965 push 4 */
  push32((uint32_t)(0x4u));
  /* 10202967 push 0xa */
  push32((uint32_t)(0xau));
  /* 10202969 call dword ptr [0x1020af1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af1c))), 0x1020296fu);
  /* 1020296f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202972 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202975 ret  */
  ESPCHK(0x10202270u, _esp0);
  ESP += 4; return;
L_10202976:;
  /* 10202976 push 3 */
  push32((uint32_t)(0x3u));
  /* 10202978 push 6 */
  push32((uint32_t)(0x6u));
  /* 1020297a push 7 */
  push32((uint32_t)(0x7u));
  /* 1020297c call dword ptr [0x1020af1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af1c))), 0x10202982u);
  /* 10202982 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202985 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202988 ret  */
  ESPCHK(0x10202270u, _esp0);
  ESP += 4; return;
L_10202989:;
  /* 10202989 push 5 */
  push32((uint32_t)(0x5u));
  /* 1020298b push 5 */
  push32((uint32_t)(0x5u));
  /* 1020298d push 0 */
  push32((uint32_t)(0x0u));
  /* 1020298f call dword ptr [0x1020af1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af1c))), 0x10202995u);
  /* 10202995 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202998 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020299b ret  */
  ESPCHK(0x10202270u, _esp0);
  ESP += 4; return;
}

/* FUN_100029a0 @ 0x102029a0 (25 bytes, 9 insns) */
void f_102029a0(void) {
  FTRACE(0x102029a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102029a0 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 102029a4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 102029a8 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 102029ac push eax */
  push32((uint32_t)(EAX));
  /* 102029ad push ecx */
  push32((uint32_t)(ECX));
  /* 102029ae push edx */
  push32((uint32_t)(EDX));
  /* 102029af call dword ptr [0x1020af24] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020af24))), 0x102029b5u);
  /* 102029b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102029b8 ret  */
  ESPCHK(0x102029a0u, _esp0);
  ESP += 4; return;
}

/* ProcessAI @ 0x102029c0 (129 bytes, 29 insns) */
void f_102029c0(void) {
  FTRACE(0x102029c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102029c0 call 0x10202a80 */
  push32(0x102029c5u); f_10202a80();
  /* 102029c5 mov dword ptr [0x1020abc8], eax */
  w32((uint32_t)(0x1020abc8), (EAX));
  /* 102029ca call 0x10202a60 */
  push32(0x102029cfu); f_10202a60();
  /* 102029cf mov dword ptr [0x1020adc8], eax */
  w32((uint32_t)(0x1020adc8), (EAX));
  /* 102029d4 mov eax, dword ptr [0x1020af94] */
  EAX = (r32((uint32_t)(0x1020af94)));
  /* 102029d9 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102029dc je 0x10202a08 */
  if (C.zf) goto L_10202a08;
  /* 102029de dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102029df je 0x102029f2 */
  if (C.zf) goto L_102029f2;
  /* 102029e1 mov eax, 0x64 */
  EAX = (0x64u);
  /* 102029e6 mov dword ptr [0x1020af94], eax */
  w32((uint32_t)(0x1020af94), (EAX));
  /* 102029eb mov dword ptr [0x102090c8], eax */
  w32((uint32_t)(0x102090c8), (EAX));
  /* 102029f0 jmp 0x10202a1c */
  goto L_10202a1c;
L_102029f2:;
  /* 102029f2 mov dword ptr [0x1020af94], 0x1e */
  w32((uint32_t)(0x1020af94), (0x1eu));
  /* 102029fc mov dword ptr [0x102090c8], 0x32 */
  w32((uint32_t)(0x102090c8), (0x32u));
  /* 10202a06 jmp 0x10202a1c */
  goto L_10202a1c;
L_10202a08:;
  /* 10202a08 mov dword ptr [0x1020af94], 0xa */
  w32((uint32_t)(0x1020af94), (0xau));
  /* 10202a12 mov dword ptr [0x102090c8], 0x1e */
  w32((uint32_t)(0x102090c8), (0x1eu));
L_10202a1c:;
  /* 10202a1c call 0x10202a70 */
  push32(0x10202a21u); f_10202a70();
  /* 10202a21 mov dword ptr [0x1020ab98], eax */
  w32((uint32_t)(0x1020ab98), (EAX));
  /* 10202a26 mov eax, dword ptr [0x1020abc8] */
  EAX = (r32((uint32_t)(0x1020abc8)));
  /* 10202a2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10202a2d je 0x10202a3b */
  if (C.zf) goto L_10202a3b;
  /* 10202a2f jle 0x10202a40 */
  if ((C.zf||C.sf!=C.of)) goto L_10202a40;
  /* 10202a31 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10202a34 jg 0x10202a40 */
  if ((!C.zf&&C.sf==C.of)) goto L_10202a40;
  /* 10202a36 jmp 0x102019f0 */
  f_102019f0(); return;
L_10202a3b:;
  /* 10202a3b jmp 0x10202270 */
  f_10202270(); return;
L_10202a40:;
  /* 10202a40 ret  */
  ESPCHK(0x102029c0u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x10202a50 (5 bytes, 1 insns) */
void f_10202a50(void) {
  FTRACE(0x10202a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10202a50 jmp 0x10201000 */
  f_10201000(); return;
}

/* FUN_10002a60 @ 0x10202a60 (6 bytes, 1 insns) */
void f_10202a60(void) {
  FTRACE(0x10202a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10202a60 jmp dword ptr [0x1020af74] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1020af74)))); return;
}

/* FUN_10002a70 @ 0x10202a70 (6 bytes, 1 insns) */
void f_10202a70(void) {
  FTRACE(0x10202a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10202a70 jmp dword ptr [0x1020af78] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1020af78)))); return;
}

/* FUN_10002a80 @ 0x10202a80 (6 bytes, 1 insns) */
void f_10202a80(void) {
  FTRACE(0x10202a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10202a80 jmp dword ptr [0x1020af80] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1020af80)))); return;
}

/* FUN_10002a90 @ 0x10202a90 (82 bytes, 28 insns) */
void f_10202a90(void) {
  FTRACE(0x10202a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10202a90 mov eax, dword ptr [0x1020ade8] */
  EAX = (r32((uint32_t)(0x1020ade8)));
  /* 10202a95 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10202a9b push esi */
  push32((uint32_t)(ESI));
  /* 10202a9c push edi */
  push32((uint32_t)(EDI));
  /* 10202a9d mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 10202aa4 push edi */
  push32((uint32_t)(EDI));
  /* 10202aa5 push eax */
  push32((uint32_t)(EAX));
  /* 10202aa6 call dword ptr [0x10208084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208084))), 0x10202aacu);
  /* 10202aac mov esi, eax */
  ESI = (EAX);
  /* 10202aae test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10202ab0 jne 0x10202ad7 */
  if (!C.zf) goto L_10202ad7;
  /* 10202ab2 push edi */
  push32((uint32_t)(EDI));
  /* 10202ab3 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 10202ab7 push 0x102096e0 */
  push32((uint32_t)(0x102096e0u));
  /* 10202abc push ecx */
  push32((uint32_t)(ECX));
  /* 10202abd call 0x10203190 */
  push32(0x10202ac2u); f_10203190();
  /* 10202ac2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202ac5 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 10202ac9 push esi */
  push32((uint32_t)(ESI));
  /* 10202aca push 0x102096d0 */
  push32((uint32_t)(0x102096d0u));
  /* 10202acf push edx */
  push32((uint32_t)(EDX));
  /* 10202ad0 push esi */
  push32((uint32_t)(ESI));
  /* 10202ad1 call dword ptr [0x102080d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080d4))), 0x10202ad7u);
L_10202ad7:;
  /* 10202ad7 mov eax, esi */
  EAX = (ESI);
  /* 10202ad9 pop edi */
  EDI = (pop32());
  /* 10202ada pop esi */
  ESI = (pop32());
  /* 10202adb add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202ae1 ret  */
  ESPCHK(0x10202a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002af0 @ 0x10202af0 (1681 bytes, 343 insns) */
void f_10202af0(void) {
  FTRACE(0x10202af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10202af0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10202af4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10202af5 jne 0x10203179 */
  if (!C.zf) goto L_10203179;
  /* 10202afb push 0x10209d70 */
  push32((uint32_t)(0x10209d70u));
  /* 10202b00 call dword ptr [0x10208004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208004))), 0x10202b06u);
  /* 10202b06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10202b08 mov dword ptr [0x1020ade8], eax */
  w32((uint32_t)(0x1020ade8), (EAX));
  /* 10202b0d jne 0x10202b29 */
  if (!C.zf) goto L_10202b29;
  /* 10202b0f push eax */
  push32((uint32_t)(EAX));
  /* 10202b10 push 0x10209d68 */
  push32((uint32_t)(0x10209d68u));
  /* 10202b15 push 0x10209d50 */
  push32((uint32_t)(0x10209d50u));
  /* 10202b1a push eax */
  push32((uint32_t)(EAX));
  /* 10202b1b call dword ptr [0x102080d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080d4))), 0x10202b21u);
  /* 10202b21 mov eax, 1 */
  EAX = (0x1u);
  /* 10202b26 ret 0xc */
  ESPCHK(0x10202af0u, _esp0);
  ESP += 16; return;
L_10202b29:;
  /* 10202b29 push 0x10209d40 */
  push32((uint32_t)(0x10209d40u));
  /* 10202b2e call 0x10202a90 */
  push32(0x10202b33u); f_10202a90();
  /* 10202b33 push 0x10209d30 */
  push32((uint32_t)(0x10209d30u));
  /* 10202b38 mov dword ptr [0x1020adec], eax */
  w32((uint32_t)(0x1020adec), (EAX));
  /* 10202b3d call 0x10202a90 */
  push32(0x10202b42u); f_10202a90();
  /* 10202b42 push 0x10209d20 */
  push32((uint32_t)(0x10209d20u));
  /* 10202b47 mov dword ptr [0x1020adf0], eax */
  w32((uint32_t)(0x1020adf0), (EAX));
  /* 10202b4c call 0x10202a90 */
  push32(0x10202b51u); f_10202a90();
  /* 10202b51 push 0x10209d14 */
  push32((uint32_t)(0x10209d14u));
  /* 10202b56 mov dword ptr [0x1020adf4], eax */
  w32((uint32_t)(0x1020adf4), (EAX));
  /* 10202b5b call 0x10202a90 */
  push32(0x10202b60u); f_10202a90();
  /* 10202b60 push 0x10209d04 */
  push32((uint32_t)(0x10209d04u));
  /* 10202b65 mov dword ptr [0x1020adf8], eax */
  w32((uint32_t)(0x1020adf8), (EAX));
  /* 10202b6a call 0x10202a90 */
  push32(0x10202b6fu); f_10202a90();
  /* 10202b6f push 0x10209cf0 */
  push32((uint32_t)(0x10209cf0u));
  /* 10202b74 mov dword ptr [0x1020adfc], eax */
  w32((uint32_t)(0x1020adfc), (EAX));
  /* 10202b79 call 0x10202a90 */
  push32(0x10202b7eu); f_10202a90();
  /* 10202b7e push 0x10209ce0 */
  push32((uint32_t)(0x10209ce0u));
  /* 10202b83 mov dword ptr [0x1020ae00], eax */
  w32((uint32_t)(0x1020ae00), (EAX));
  /* 10202b88 call 0x10202a90 */
  push32(0x10202b8du); f_10202a90();
  /* 10202b8d push 0x10209cd0 */
  push32((uint32_t)(0x10209cd0u));
  /* 10202b92 mov dword ptr [0x1020ae04], eax */
  w32((uint32_t)(0x1020ae04), (EAX));
  /* 10202b97 call 0x10202a90 */
  push32(0x10202b9cu); f_10202a90();
  /* 10202b9c push 0x10209cbc */
  push32((uint32_t)(0x10209cbcu));
  /* 10202ba1 mov dword ptr [0x1020ae08], eax */
  w32((uint32_t)(0x1020ae08), (EAX));
  /* 10202ba6 call 0x10202a90 */
  push32(0x10202babu); f_10202a90();
  /* 10202bab push 0x10209ca8 */
  push32((uint32_t)(0x10209ca8u));
  /* 10202bb0 mov dword ptr [0x1020ae0c], eax */
  w32((uint32_t)(0x1020ae0c), (EAX));
  /* 10202bb5 call 0x10202a90 */
  push32(0x10202bbau); f_10202a90();
  /* 10202bba push 0x10209c98 */
  push32((uint32_t)(0x10209c98u));
  /* 10202bbf mov dword ptr [0x1020ae10], eax */
  w32((uint32_t)(0x1020ae10), (EAX));
  /* 10202bc4 call 0x10202a90 */
  push32(0x10202bc9u); f_10202a90();
  /* 10202bc9 push 0x10209c88 */
  push32((uint32_t)(0x10209c88u));
  /* 10202bce mov dword ptr [0x1020ae14], eax */
  w32((uint32_t)(0x1020ae14), (EAX));
  /* 10202bd3 call 0x10202a90 */
  push32(0x10202bd8u); f_10202a90();
  /* 10202bd8 push 0x10209c78 */
  push32((uint32_t)(0x10209c78u));
  /* 10202bdd mov dword ptr [0x1020ae18], eax */
  w32((uint32_t)(0x1020ae18), (EAX));
  /* 10202be2 call 0x10202a90 */
  push32(0x10202be7u); f_10202a90();
  /* 10202be7 push 0x10209c68 */
  push32((uint32_t)(0x10209c68u));
  /* 10202bec mov dword ptr [0x1020ae1c], eax */
  w32((uint32_t)(0x1020ae1c), (EAX));
  /* 10202bf1 call 0x10202a90 */
  push32(0x10202bf6u); f_10202a90();
  /* 10202bf6 push 0x10209c58 */
  push32((uint32_t)(0x10209c58u));
  /* 10202bfb mov dword ptr [0x1020ae20], eax */
  w32((uint32_t)(0x1020ae20), (EAX));
  /* 10202c00 call 0x10202a90 */
  push32(0x10202c05u); f_10202a90();
  /* 10202c05 push 0x10209c48 */
  push32((uint32_t)(0x10209c48u));
  /* 10202c0a mov dword ptr [0x1020ae24], eax */
  w32((uint32_t)(0x1020ae24), (EAX));
  /* 10202c0f call 0x10202a90 */
  push32(0x10202c14u); f_10202a90();
  /* 10202c14 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202c17 mov dword ptr [0x1020ae28], eax */
  w32((uint32_t)(0x1020ae28), (EAX));
  /* 10202c1c push 0x10209c38 */
  push32((uint32_t)(0x10209c38u));
  /* 10202c21 call 0x10202a90 */
  push32(0x10202c26u); f_10202a90();
  /* 10202c26 push 0x10209c28 */
  push32((uint32_t)(0x10209c28u));
  /* 10202c2b mov dword ptr [0x1020ae2c], eax */
  w32((uint32_t)(0x1020ae2c), (EAX));
  /* 10202c30 call 0x10202a90 */
  push32(0x10202c35u); f_10202a90();
  /* 10202c35 push 0x10209c14 */
  push32((uint32_t)(0x10209c14u));
  /* 10202c3a mov dword ptr [0x1020ae30], eax */
  w32((uint32_t)(0x1020ae30), (EAX));
  /* 10202c3f call 0x10202a90 */
  push32(0x10202c44u); f_10202a90();
  /* 10202c44 push 0x10209c0c */
  push32((uint32_t)(0x10209c0cu));
  /* 10202c49 mov dword ptr [0x1020ae34], eax */
  w32((uint32_t)(0x1020ae34), (EAX));
  /* 10202c4e call 0x10202a90 */
  push32(0x10202c53u); f_10202a90();
  /* 10202c53 push 0x10209bfc */
  push32((uint32_t)(0x10209bfcu));
  /* 10202c58 mov dword ptr [0x1020ae38], eax */
  w32((uint32_t)(0x1020ae38), (EAX));
  /* 10202c5d call 0x10202a90 */
  push32(0x10202c62u); f_10202a90();
  /* 10202c62 push 0x10209bec */
  push32((uint32_t)(0x10209becu));
  /* 10202c67 mov dword ptr [0x1020ae3c], eax */
  w32((uint32_t)(0x1020ae3c), (EAX));
  /* 10202c6c call 0x10202a90 */
  push32(0x10202c71u); f_10202a90();
  /* 10202c71 push 0x10209be0 */
  push32((uint32_t)(0x10209be0u));
  /* 10202c76 mov dword ptr [0x1020ae40], eax */
  w32((uint32_t)(0x1020ae40), (EAX));
  /* 10202c7b call 0x10202a90 */
  push32(0x10202c80u); f_10202a90();
  /* 10202c80 push 0x10209bd0 */
  push32((uint32_t)(0x10209bd0u));
  /* 10202c85 mov dword ptr [0x1020ae44], eax */
  w32((uint32_t)(0x1020ae44), (EAX));
  /* 10202c8a call 0x10202a90 */
  push32(0x10202c8fu); f_10202a90();
  /* 10202c8f push 0x10209bc8 */
  push32((uint32_t)(0x10209bc8u));
  /* 10202c94 mov dword ptr [0x1020ae48], eax */
  w32((uint32_t)(0x1020ae48), (EAX));
  /* 10202c99 call 0x10202a90 */
  push32(0x10202c9eu); f_10202a90();
  /* 10202c9e push 0x10209bb8 */
  push32((uint32_t)(0x10209bb8u));
  /* 10202ca3 mov dword ptr [0x1020ae60], eax */
  w32((uint32_t)(0x1020ae60), (EAX));
  /* 10202ca8 call 0x10202a90 */
  push32(0x10202cadu); f_10202a90();
  /* 10202cad push 0x10209ba8 */
  push32((uint32_t)(0x10209ba8u));
  /* 10202cb2 mov dword ptr [0x1020ae64], eax */
  w32((uint32_t)(0x1020ae64), (EAX));
  /* 10202cb7 call 0x10202a90 */
  push32(0x10202cbcu); f_10202a90();
  /* 10202cbc push 0x10209b9c */
  push32((uint32_t)(0x10209b9cu));
  /* 10202cc1 mov dword ptr [0x1020ae68], eax */
  w32((uint32_t)(0x1020ae68), (EAX));
  /* 10202cc6 call 0x10202a90 */
  push32(0x10202ccbu); f_10202a90();
  /* 10202ccb push 0x10209b8c */
  push32((uint32_t)(0x10209b8cu));
  /* 10202cd0 mov dword ptr [0x1020ae6c], eax */
  w32((uint32_t)(0x1020ae6c), (EAX));
  /* 10202cd5 call 0x10202a90 */
  push32(0x10202cdau); f_10202a90();
  /* 10202cda push 0x10209b80 */
  push32((uint32_t)(0x10209b80u));
  /* 10202cdf mov dword ptr [0x1020ae70], eax */
  w32((uint32_t)(0x1020ae70), (EAX));
  /* 10202ce4 call 0x10202a90 */
  push32(0x10202ce9u); f_10202a90();
  /* 10202ce9 push 0x10209b70 */
  push32((uint32_t)(0x10209b70u));
  /* 10202cee mov dword ptr [0x1020ae8c], eax */
  w32((uint32_t)(0x1020ae8c), (EAX));
  /* 10202cf3 call 0x10202a90 */
  push32(0x10202cf8u); f_10202a90();
  /* 10202cf8 push 0x10209b68 */
  push32((uint32_t)(0x10209b68u));
  /* 10202cfd mov dword ptr [0x1020ae74], eax */
  w32((uint32_t)(0x1020ae74), (EAX));
  /* 10202d02 call 0x10202a90 */
  push32(0x10202d07u); f_10202a90();
  /* 10202d07 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202d0a mov dword ptr [0x1020ae78], eax */
  w32((uint32_t)(0x1020ae78), (EAX));
  /* 10202d0f push 0x10209b58 */
  push32((uint32_t)(0x10209b58u));
  /* 10202d14 call 0x10202a90 */
  push32(0x10202d19u); f_10202a90();
  /* 10202d19 push 0x10209b48 */
  push32((uint32_t)(0x10209b48u));
  /* 10202d1e mov dword ptr [0x1020ae7c], eax */
  w32((uint32_t)(0x1020ae7c), (EAX));
  /* 10202d23 call 0x10202a90 */
  push32(0x10202d28u); f_10202a90();
  /* 10202d28 push 0x10209b38 */
  push32((uint32_t)(0x10209b38u));
  /* 10202d2d mov dword ptr [0x1020ae80], eax */
  w32((uint32_t)(0x1020ae80), (EAX));
  /* 10202d32 call 0x10202a90 */
  push32(0x10202d37u); f_10202a90();
  /* 10202d37 push 0x10209b2c */
  push32((uint32_t)(0x10209b2cu));
  /* 10202d3c mov dword ptr [0x1020ae84], eax */
  w32((uint32_t)(0x1020ae84), (EAX));
  /* 10202d41 call 0x10202a90 */
  push32(0x10202d46u); f_10202a90();
  /* 10202d46 push 0x10209b24 */
  push32((uint32_t)(0x10209b24u));
  /* 10202d4b mov dword ptr [0x1020ae88], eax */
  w32((uint32_t)(0x1020ae88), (EAX));
  /* 10202d50 call 0x10202a90 */
  push32(0x10202d55u); f_10202a90();
  /* 10202d55 push 0x10209b14 */
  push32((uint32_t)(0x10209b14u));
  /* 10202d5a mov dword ptr [0x1020ae90], eax */
  w32((uint32_t)(0x1020ae90), (EAX));
  /* 10202d5f call 0x10202a90 */
  push32(0x10202d64u); f_10202a90();
  /* 10202d64 push 0x10209b04 */
  push32((uint32_t)(0x10209b04u));
  /* 10202d69 mov dword ptr [0x1020ae94], eax */
  w32((uint32_t)(0x1020ae94), (EAX));
  /* 10202d6e call 0x10202a90 */
  push32(0x10202d73u); f_10202a90();
  /* 10202d73 push 0x10209af4 */
  push32((uint32_t)(0x10209af4u));
  /* 10202d78 mov dword ptr [0x1020ae98], eax */
  w32((uint32_t)(0x1020ae98), (EAX));
  /* 10202d7d call 0x10202a90 */
  push32(0x10202d82u); f_10202a90();
  /* 10202d82 push 0x10209ae4 */
  push32((uint32_t)(0x10209ae4u));
  /* 10202d87 mov dword ptr [0x1020ae9c], eax */
  w32((uint32_t)(0x1020ae9c), (EAX));
  /* 10202d8c call 0x10202a90 */
  push32(0x10202d91u); f_10202a90();
  /* 10202d91 push 0x10209ad8 */
  push32((uint32_t)(0x10209ad8u));
  /* 10202d96 mov dword ptr [0x1020aea0], eax */
  w32((uint32_t)(0x1020aea0), (EAX));
  /* 10202d9b call 0x10202a90 */
  push32(0x10202da0u); f_10202a90();
  /* 10202da0 push 0x10209acc */
  push32((uint32_t)(0x10209accu));
  /* 10202da5 mov dword ptr [0x1020aea4], eax */
  w32((uint32_t)(0x1020aea4), (EAX));
  /* 10202daa call 0x10202a90 */
  push32(0x10202dafu); f_10202a90();
  /* 10202daf push 0x10209abc */
  push32((uint32_t)(0x10209abcu));
  /* 10202db4 mov dword ptr [0x1020aea8], eax */
  w32((uint32_t)(0x1020aea8), (EAX));
  /* 10202db9 call 0x10202a90 */
  push32(0x10202dbeu); f_10202a90();
  /* 10202dbe push 0x10209ab0 */
  push32((uint32_t)(0x10209ab0u));
  /* 10202dc3 mov dword ptr [0x1020aeac], eax */
  w32((uint32_t)(0x1020aeac), (EAX));
  /* 10202dc8 call 0x10202a90 */
  push32(0x10202dcdu); f_10202a90();
  /* 10202dcd push 0x10209aa4 */
  push32((uint32_t)(0x10209aa4u));
  /* 10202dd2 mov dword ptr [0x1020aeb0], eax */
  w32((uint32_t)(0x1020aeb0), (EAX));
  /* 10202dd7 call 0x10202a90 */
  push32(0x10202ddcu); f_10202a90();
  /* 10202ddc push 0x10209a98 */
  push32((uint32_t)(0x10209a98u));
  /* 10202de1 mov dword ptr [0x1020aeb4], eax */
  w32((uint32_t)(0x1020aeb4), (EAX));
  /* 10202de6 call 0x10202a90 */
  push32(0x10202debu); f_10202a90();
  /* 10202deb push 0x10209a8c */
  push32((uint32_t)(0x10209a8cu));
  /* 10202df0 mov dword ptr [0x1020ad28], eax */
  w32((uint32_t)(0x1020ad28), (EAX));
  /* 10202df5 call 0x10202a90 */
  push32(0x10202dfau); f_10202a90();
  /* 10202dfa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202dfd mov dword ptr [0x1020aeb8], eax */
  w32((uint32_t)(0x1020aeb8), (EAX));
  /* 10202e02 push 0x10209a80 */
  push32((uint32_t)(0x10209a80u));
  /* 10202e07 call 0x10202a90 */
  push32(0x10202e0cu); f_10202a90();
  /* 10202e0c push 0x10209a74 */
  push32((uint32_t)(0x10209a74u));
  /* 10202e11 mov dword ptr [0x1020aebc], eax */
  w32((uint32_t)(0x1020aebc), (EAX));
  /* 10202e16 call 0x10202a90 */
  push32(0x10202e1bu); f_10202a90();
  /* 10202e1b push 0x10209a64 */
  push32((uint32_t)(0x10209a64u));
  /* 10202e20 mov dword ptr [0x1020aec0], eax */
  w32((uint32_t)(0x1020aec0), (EAX));
  /* 10202e25 call 0x10202a90 */
  push32(0x10202e2au); f_10202a90();
  /* 10202e2a push 0x10209a58 */
  push32((uint32_t)(0x10209a58u));
  /* 10202e2f mov dword ptr [0x1020aec4], eax */
  w32((uint32_t)(0x1020aec4), (EAX));
  /* 10202e34 call 0x10202a90 */
  push32(0x10202e39u); f_10202a90();
  /* 10202e39 push 0x10209a4c */
  push32((uint32_t)(0x10209a4cu));
  /* 10202e3e mov dword ptr [0x1020aec8], eax */
  w32((uint32_t)(0x1020aec8), (EAX));
  /* 10202e43 call 0x10202a90 */
  push32(0x10202e48u); f_10202a90();
  /* 10202e48 mov dword ptr [0x1020aecc], eax */
  w32((uint32_t)(0x1020aecc), (EAX));
  /* 10202e4d push 0x10209a3c */
  push32((uint32_t)(0x10209a3cu));
  /* 10202e52 call 0x10202a90 */
  push32(0x10202e57u); f_10202a90();
  /* 10202e57 push 0x10209a2c */
  push32((uint32_t)(0x10209a2cu));
  /* 10202e5c mov dword ptr [0x1020aed0], eax */
  w32((uint32_t)(0x1020aed0), (EAX));
  /* 10202e61 call 0x10202a90 */
  push32(0x10202e66u); f_10202a90();
  /* 10202e66 push 0x10209a20 */
  push32((uint32_t)(0x10209a20u));
  /* 10202e6b mov dword ptr [0x1020aed4], eax */
  w32((uint32_t)(0x1020aed4), (EAX));
  /* 10202e70 call 0x10202a90 */
  push32(0x10202e75u); f_10202a90();
  /* 10202e75 push 0x10209a18 */
  push32((uint32_t)(0x10209a18u));
  /* 10202e7a mov dword ptr [0x1020aed8], eax */
  w32((uint32_t)(0x1020aed8), (EAX));
  /* 10202e7f call 0x10202a90 */
  push32(0x10202e84u); f_10202a90();
  /* 10202e84 push 0x10209a08 */
  push32((uint32_t)(0x10209a08u));
  /* 10202e89 mov dword ptr [0x1020aedc], eax */
  w32((uint32_t)(0x1020aedc), (EAX));
  /* 10202e8e call 0x10202a90 */
  push32(0x10202e93u); f_10202a90();
  /* 10202e93 push 0x10209a00 */
  push32((uint32_t)(0x10209a00u));
  /* 10202e98 mov dword ptr [0x1020aee0], eax */
  w32((uint32_t)(0x1020aee0), (EAX));
  /* 10202e9d call 0x10202a90 */
  push32(0x10202ea2u); f_10202a90();
  /* 10202ea2 push 0x102099f4 */
  push32((uint32_t)(0x102099f4u));
  /* 10202ea7 mov dword ptr [0x1020aee4], eax */
  w32((uint32_t)(0x1020aee4), (EAX));
  /* 10202eac call 0x10202a90 */
  push32(0x10202eb1u); f_10202a90();
  /* 10202eb1 push 0x102099ec */
  push32((uint32_t)(0x102099ecu));
  /* 10202eb6 mov dword ptr [0x1020aee8], eax */
  w32((uint32_t)(0x1020aee8), (EAX));
  /* 10202ebb call 0x10202a90 */
  push32(0x10202ec0u); f_10202a90();
  /* 10202ec0 push 0x102099d8 */
  push32((uint32_t)(0x102099d8u));
  /* 10202ec5 mov dword ptr [0x1020aeec], eax */
  w32((uint32_t)(0x1020aeec), (EAX));
  /* 10202eca call 0x10202a90 */
  push32(0x10202ecfu); f_10202a90();
  /* 10202ecf push 0x102099cc */
  push32((uint32_t)(0x102099ccu));
  /* 10202ed4 mov dword ptr [0x1020aa30], eax */
  w32((uint32_t)(0x1020aa30), (EAX));
  /* 10202ed9 call 0x10202a90 */
  push32(0x10202edeu); f_10202a90();
  /* 10202ede push 0x102099c0 */
  push32((uint32_t)(0x102099c0u));
  /* 10202ee3 mov dword ptr [0x1020aef8], eax */
  w32((uint32_t)(0x1020aef8), (EAX));
  /* 10202ee8 call 0x10202a90 */
  push32(0x10202eedu); f_10202a90();
  /* 10202eed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202ef0 mov dword ptr [0x1020aef4], eax */
  w32((uint32_t)(0x1020aef4), (EAX));
  /* 10202ef5 push 0x102099ac */
  push32((uint32_t)(0x102099acu));
  /* 10202efa call 0x10202a90 */
  push32(0x10202effu); f_10202a90();
  /* 10202eff push 0x1020999c */
  push32((uint32_t)(0x1020999cu));
  /* 10202f04 mov dword ptr [0x1020aefc], eax */
  w32((uint32_t)(0x1020aefc), (EAX));
  /* 10202f09 call 0x10202a90 */
  push32(0x10202f0eu); f_10202a90();
  /* 10202f0e push 0x1020998c */
  push32((uint32_t)(0x1020998cu));
  /* 10202f13 mov dword ptr [0x1020af00], eax */
  w32((uint32_t)(0x1020af00), (EAX));
  /* 10202f18 call 0x10202a90 */
  push32(0x10202f1du); f_10202a90();
  /* 10202f1d push 0x1020997c */
  push32((uint32_t)(0x1020997cu));
  /* 10202f22 mov dword ptr [0x1020af04], eax */
  w32((uint32_t)(0x1020af04), (EAX));
  /* 10202f27 call 0x10202a90 */
  push32(0x10202f2cu); f_10202a90();
  /* 10202f2c push 0x10209970 */
  push32((uint32_t)(0x10209970u));
  /* 10202f31 mov dword ptr [0x1020ae50], eax */
  w32((uint32_t)(0x1020ae50), (EAX));
  /* 10202f36 call 0x10202a90 */
  push32(0x10202f3bu); f_10202a90();
  /* 10202f3b push 0x10209960 */
  push32((uint32_t)(0x10209960u));
  /* 10202f40 mov dword ptr [0x1020ae4c], eax */
  w32((uint32_t)(0x1020ae4c), (EAX));
  /* 10202f45 call 0x10202a90 */
  push32(0x10202f4au); f_10202a90();
  /* 10202f4a push 0x1020994c */
  push32((uint32_t)(0x1020994cu));
  /* 10202f4f mov dword ptr [0x1020ae54], eax */
  w32((uint32_t)(0x1020ae54), (EAX));
  /* 10202f54 call 0x10202a90 */
  push32(0x10202f59u); f_10202a90();
  /* 10202f59 push 0x10209934 */
  push32((uint32_t)(0x10209934u));
  /* 10202f5e mov dword ptr [0x1020ae58], eax */
  w32((uint32_t)(0x1020ae58), (EAX));
  /* 10202f63 call 0x10202a90 */
  push32(0x10202f68u); f_10202a90();
  /* 10202f68 push 0x10209924 */
  push32((uint32_t)(0x10209924u));
  /* 10202f6d mov dword ptr [0x1020ae5c], eax */
  w32((uint32_t)(0x1020ae5c), (EAX));
  /* 10202f72 call 0x10202a90 */
  push32(0x10202f77u); f_10202a90();
  /* 10202f77 push 0x1020990c */
  push32((uint32_t)(0x1020990cu));
  /* 10202f7c mov dword ptr [0x1020af20], eax */
  w32((uint32_t)(0x1020af20), (EAX));
  /* 10202f81 call 0x10202a90 */
  push32(0x10202f86u); f_10202a90();
  /* 10202f86 push 0x102098fc */
  push32((uint32_t)(0x102098fcu));
  /* 10202f8b mov dword ptr [0x1020af50], eax */
  w32((uint32_t)(0x1020af50), (EAX));
  /* 10202f90 call 0x10202a90 */
  push32(0x10202f95u); f_10202a90();
  /* 10202f95 push 0x102098f4 */
  push32((uint32_t)(0x102098f4u));
  /* 10202f9a mov dword ptr [0x1020af18], eax */
  w32((uint32_t)(0x1020af18), (EAX));
  /* 10202f9f call 0x10202a90 */
  push32(0x10202fa4u); f_10202a90();
  /* 10202fa4 push 0x102098e4 */
  push32((uint32_t)(0x102098e4u));
  /* 10202fa9 mov dword ptr [0x1020af24], eax */
  w32((uint32_t)(0x1020af24), (EAX));
  /* 10202fae call 0x10202a90 */
  push32(0x10202fb3u); f_10202a90();
  /* 10202fb3 push 0x102098d8 */
  push32((uint32_t)(0x102098d8u));
  /* 10202fb8 mov dword ptr [0x1020af68], eax */
  w32((uint32_t)(0x1020af68), (EAX));
  /* 10202fbd call 0x10202a90 */
  push32(0x10202fc2u); f_10202a90();
  /* 10202fc2 push 0x102098d0 */
  push32((uint32_t)(0x102098d0u));
  /* 10202fc7 mov dword ptr [0x1020af08], eax */
  w32((uint32_t)(0x1020af08), (EAX));
  /* 10202fcc call 0x10202a90 */
  push32(0x10202fd1u); f_10202a90();
  /* 10202fd1 push 0x102098c4 */
  push32((uint32_t)(0x102098c4u));
  /* 10202fd6 mov dword ptr [0x1020af0c], eax */
  w32((uint32_t)(0x1020af0c), (EAX));
  /* 10202fdb call 0x10202a90 */
  push32(0x10202fe0u); f_10202a90();
  /* 10202fe0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10202fe3 mov dword ptr [0x1020af10], eax */
  w32((uint32_t)(0x1020af10), (EAX));
  /* 10202fe8 push 0x102098b4 */
  push32((uint32_t)(0x102098b4u));
  /* 10202fed call 0x10202a90 */
  push32(0x10202ff2u); f_10202a90();
  /* 10202ff2 push 0x102098a0 */
  push32((uint32_t)(0x102098a0u));
  /* 10202ff7 mov dword ptr [0x1020af14], eax */
  w32((uint32_t)(0x1020af14), (EAX));
  /* 10202ffc call 0x10202a90 */
  push32(0x10203001u); f_10202a90();
  /* 10203001 push 0x10209884 */
  push32((uint32_t)(0x10209884u));
  /* 10203006 mov dword ptr [0x1020af1c], eax */
  w32((uint32_t)(0x1020af1c), (EAX));
  /* 1020300b call 0x10202a90 */
  push32(0x10203010u); f_10202a90();
  /* 10203010 push 0x10209870 */
  push32((uint32_t)(0x10209870u));
  /* 10203015 mov dword ptr [0x1020af28], eax */
  w32((uint32_t)(0x1020af28), (EAX));
  /* 1020301a call 0x10202a90 */
  push32(0x1020301fu); f_10202a90();
  /* 1020301f push 0x10209864 */
  push32((uint32_t)(0x10209864u));
  /* 10203024 mov dword ptr [0x1020af2c], eax */
  w32((uint32_t)(0x1020af2c), (EAX));
  /* 10203029 call 0x10202a90 */
  push32(0x1020302eu); f_10202a90();
  /* 1020302e push 0x10209854 */
  push32((uint32_t)(0x10209854u));
  /* 10203033 mov dword ptr [0x1020af5c], eax */
  w32((uint32_t)(0x1020af5c), (EAX));
  /* 10203038 call 0x10202a90 */
  push32(0x1020303du); f_10202a90();
  /* 1020303d push 0x10209848 */
  push32((uint32_t)(0x10209848u));
  /* 10203042 mov dword ptr [0x1020af60], eax */
  w32((uint32_t)(0x1020af60), (EAX));
  /* 10203047 call 0x10202a90 */
  push32(0x1020304cu); f_10202a90();
  /* 1020304c push 0x1020983c */
  push32((uint32_t)(0x1020983cu));
  /* 10203051 mov dword ptr [0x1020af64], eax */
  w32((uint32_t)(0x1020af64), (EAX));
  /* 10203056 call 0x10202a90 */
  push32(0x1020305bu); f_10202a90();
  /* 1020305b push 0x10209824 */
  push32((uint32_t)(0x10209824u));
  /* 10203060 mov dword ptr [0x1020af6c], eax */
  w32((uint32_t)(0x1020af6c), (EAX));
  /* 10203065 call 0x10202a90 */
  push32(0x1020306au); f_10202a90();
  /* 1020306a push 0x10209808 */
  push32((uint32_t)(0x10209808u));
  /* 1020306f mov dword ptr [0x1020af30], eax */
  w32((uint32_t)(0x1020af30), (EAX));
  /* 10203074 call 0x10202a90 */
  push32(0x10203079u); f_10202a90();
  /* 10203079 push 0x102097ec */
  push32((uint32_t)(0x102097ecu));
  /* 1020307e mov dword ptr [0x1020af34], eax */
  w32((uint32_t)(0x1020af34), (EAX));
  /* 10203083 call 0x10202a90 */
  push32(0x10203088u); f_10202a90();
  /* 10203088 push 0x102097d4 */
  push32((uint32_t)(0x102097d4u));
  /* 1020308d mov dword ptr [0x1020af38], eax */
  w32((uint32_t)(0x1020af38), (EAX));
  /* 10203092 call 0x10202a90 */
  push32(0x10203097u); f_10202a90();
  /* 10203097 push 0x102097bc */
  push32((uint32_t)(0x102097bcu));
  /* 1020309c mov dword ptr [0x1020af3c], eax */
  w32((uint32_t)(0x1020af3c), (EAX));
  /* 102030a1 call 0x10202a90 */
  push32(0x102030a6u); f_10202a90();
  /* 102030a6 push 0x102097b0 */
  push32((uint32_t)(0x102097b0u));
  /* 102030ab mov dword ptr [0x1020af40], eax */
  w32((uint32_t)(0x1020af40), (EAX));
  /* 102030b0 call 0x10202a90 */
  push32(0x102030b5u); f_10202a90();
  /* 102030b5 push 0x102097a4 */
  push32((uint32_t)(0x102097a4u));
  /* 102030ba mov dword ptr [0x1020af44], eax */
  w32((uint32_t)(0x1020af44), (EAX));
  /* 102030bf call 0x10202a90 */
  push32(0x102030c4u); f_10202a90();
  /* 102030c4 push 0x10209794 */
  push32((uint32_t)(0x10209794u));
  /* 102030c9 mov dword ptr [0x1020af48], eax */
  w32((uint32_t)(0x1020af48), (EAX));
  /* 102030ce call 0x10202a90 */
  push32(0x102030d3u); f_10202a90();
  /* 102030d3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102030d6 mov dword ptr [0x1020af4c], eax */
  w32((uint32_t)(0x1020af4c), (EAX));
  /* 102030db push 0x10209788 */
  push32((uint32_t)(0x10209788u));
  /* 102030e0 call 0x10202a90 */
  push32(0x102030e5u); f_10202a90();
  /* 102030e5 push 0x1020977c */
  push32((uint32_t)(0x1020977cu));
  /* 102030ea mov dword ptr [0x1020af54], eax */
  w32((uint32_t)(0x1020af54), (EAX));
  /* 102030ef call 0x10202a90 */
  push32(0x102030f4u); f_10202a90();
  /* 102030f4 push 0x10209770 */
  push32((uint32_t)(0x10209770u));
  /* 102030f9 mov dword ptr [0x1020af58], eax */
  w32((uint32_t)(0x1020af58), (EAX));
  /* 102030fe call 0x10202a90 */
  push32(0x10203103u); f_10202a90();
  /* 10203103 push 0x10209760 */
  push32((uint32_t)(0x10209760u));
  /* 10203108 mov dword ptr [0x1020af70], eax */
  w32((uint32_t)(0x1020af70), (EAX));
  /* 1020310d call 0x10202a90 */
  push32(0x10203112u); f_10202a90();
  /* 10203112 push 0x10209754 */
  push32((uint32_t)(0x10209754u));
  /* 10203117 mov dword ptr [0x1020af74], eax */
  w32((uint32_t)(0x1020af74), (EAX));
  /* 1020311c call 0x10202a90 */
  push32(0x10203121u); f_10202a90();
  /* 10203121 push 0x10209748 */
  push32((uint32_t)(0x10209748u));
  /* 10203126 mov dword ptr [0x1020af78], eax */
  w32((uint32_t)(0x1020af78), (EAX));
  /* 1020312b call 0x10202a90 */
  push32(0x10203130u); f_10202a90();
  /* 10203130 push 0x1020973c */
  push32((uint32_t)(0x1020973cu));
  /* 10203135 mov dword ptr [0x1020af7c], eax */
  w32((uint32_t)(0x1020af7c), (EAX));
  /* 1020313a call 0x10202a90 */
  push32(0x1020313fu); f_10202a90();
  /* 1020313f push 0x1020972c */
  push32((uint32_t)(0x1020972cu));
  /* 10203144 mov dword ptr [0x1020af80], eax */
  w32((uint32_t)(0x1020af80), (EAX));
  /* 10203149 call 0x10202a90 */
  push32(0x1020314eu); f_10202a90();
  /* 1020314e push 0x1020971c */
  push32((uint32_t)(0x1020971cu));
  /* 10203153 mov dword ptr [0x1020af84], eax */
  w32((uint32_t)(0x1020af84), (EAX));
  /* 10203158 call 0x10202a90 */
  push32(0x1020315du); f_10202a90();
  /* 1020315d push 0x10209708 */
  push32((uint32_t)(0x10209708u));
  /* 10203162 mov dword ptr [0x1020af8c], eax */
  w32((uint32_t)(0x1020af8c), (EAX));
  /* 10203167 call 0x10202a90 */
  push32(0x1020316cu); f_10202a90();
  /* 1020316c add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020316f mov dword ptr [0x1020af88], eax */
  w32((uint32_t)(0x1020af88), (EAX));
  /* 10203174 call 0x10202a50 */
  push32(0x10203179u); f_10202a50();
L_10203179:;
  /* 10203179 mov eax, 1 */
  EAX = (0x1u);
  /* 1020317e ret 0xc */
  ESPCHK(0x10202af0u, _esp0);
  ESP += 16; return;
}

/* FUN_10003190 @ 0x10203190 (82 bytes, 32 insns) */
void f_10203190(void) {
  FTRACE(0x10203190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203190 push ebp */
  push32((uint32_t)(EBP));
  /* 10203191 mov ebp, esp */
  EBP = (ESP);
  /* 10203193 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10203196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10203199 push esi */
  push32((uint32_t)(ESI));
  /* 1020319a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1020319d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 102031a0 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 102031a3 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 102031aa push eax */
  push32((uint32_t)(EAX));
  /* 102031ab lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 102031ae push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102031b1 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 102031b8 push eax */
  push32((uint32_t)(EAX));
  /* 102031b9 call 0x102034a3 */
  push32(0x102031beu); f_102034a3();
  /* 102031be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102031c1 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 102031c4 mov esi, eax */
  ESI = (EAX);
  /* 102031c6 js 0x102031d0 */
  if (C.sf) goto L_102031d0;
  /* 102031c8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 102031cb and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 102031ce jmp 0x102031dd */
  goto L_102031dd;
L_102031d0:;
  /* 102031d0 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 102031d3 push eax */
  push32((uint32_t)(EAX));
  /* 102031d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102031d6 call 0x1020338b */
  push32(0x102031dbu); f_1020338b();
  /* 102031db pop ecx */
  ECX = (pop32());
  /* 102031dc pop ecx */
  ECX = (pop32());
L_102031dd:;
  /* 102031dd mov eax, esi */
  EAX = (ESI);
  /* 102031df pop esi */
  ESI = (pop32());
  /* 102031e0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102031e1 ret  */
  ESPCHK(0x10203190u, _esp0);
  ESP += 4; return;
}

/* FUN_100031e2 @ 0x102031e2 (217 bytes, 57 insns) */
void f_102031e2(void) {
  FTRACE(0x102031e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102031e2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102031e6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102031e9 jne 0x10203277 */
  if (!C.zf) goto L_10203277;
  /* 102031ef call dword ptr [0x10208014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208014))), 0x102031f5u);
  /* 102031f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102031f7 mov dword ptr [0x1020afb0], eax */
  w32((uint32_t)(0x1020afb0), (EAX));
  /* 102031fc call 0x1020459f */
  push32(0x10203201u); f_1020459f();
  /* 10203201 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203203 pop ecx */
  ECX = (pop32());
  /* 10203204 je 0x10203242 */
  if (C.zf) goto L_10203242;
  /* 10203206 mov eax, dword ptr [0x1020afb0] */
  EAX = (r32((uint32_t)(0x1020afb0)));
  /* 1020320b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1020320d mov cl, byte ptr [0x1020afb1] */
  CL = (r8((uint32_t)(0x1020afb1)));
  /* 10203213 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10203218 shr dword ptr [0x1020afb0], 0x10 */
  w32((uint32_t)(0x1020afb0), (sh_shr((uint32_t)(r32((uint32_t)(0x1020afb0))), (0x10u)&0x1f, 32)));
  /* 1020321f mov dword ptr [0x1020afb8], eax */
  w32((uint32_t)(0x1020afb8), (EAX));
  /* 10203224 mov dword ptr [0x1020afbc], ecx */
  w32((uint32_t)(0x1020afbc), (ECX));
  /* 1020322a shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1020322d add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1020322f mov dword ptr [0x1020afb4], eax */
  w32((uint32_t)(0x1020afb4), (EAX));
  /* 10203234 call 0x10203dcb */
  push32(0x10203239u); f_10203dcb();
  /* 10203239 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020323b jne 0x10203246 */
  if (!C.zf) goto L_10203246;
  /* 1020323d call 0x102045db */
  push32(0x10203242u); f_102045db();
L_10203242:;
  /* 10203242 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10203244 jmp 0x102032b8 */
  goto L_102032b8;
L_10203246:;
  /* 10203246 call dword ptr [0x10208010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208010))), 0x1020324cu);
  /* 1020324c mov dword ptr [0x1020c678], eax */
  w32((uint32_t)(0x1020c678), (EAX));
  /* 10203251 call 0x1020446d */
  push32(0x10203256u); f_1020446d();
  /* 10203256 mov dword ptr [0x1020af9c], eax */
  w32((uint32_t)(0x1020af9c), (EAX));
  /* 1020325b call 0x10203f57 */
  push32(0x10203260u); f_10203f57();
  /* 10203260 call 0x10204220 */
  push32(0x10203265u); f_10204220();
  /* 10203265 call 0x10204167 */
  push32(0x1020326au); f_10204167();
  /* 1020326a call 0x10203cad */
  push32(0x1020326fu); f_10203cad();
  /* 1020326f inc dword ptr [0x1020af98] */
  { uint32_t _r=(r32((uint32_t)(0x1020af98)))+1; w32((uint32_t)(0x1020af98), (_r)); fl_inc(_r,32); }
  /* 10203275 jmp 0x102032b5 */
  goto L_102032b5;
L_10203277:;
  /* 10203277 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10203279 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020327b jne 0x102032a9 */
  if (!C.zf) goto L_102032a9;
  /* 1020327d cmp dword ptr [0x1020af98], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1020af98))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203283 jle 0x10203242 */
  if ((C.zf||C.sf!=C.of)) goto L_10203242;
  /* 10203285 dec dword ptr [0x1020af98] */
  { uint32_t _r=(r32((uint32_t)(0x1020af98)))-1; w32((uint32_t)(0x1020af98), (_r)); fl_dec(_r,32); }
  /* 1020328b cmp dword ptr [0x1020afe8], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1020afe8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203291 jne 0x10203298 */
  if (!C.zf) goto L_10203298;
  /* 10203293 call 0x10203ceb */
  push32(0x10203298u); f_10203ceb();
L_10203298:;
  /* 10203298 call 0x10204113 */
  push32(0x1020329du); f_10204113();
  /* 1020329d call 0x10203e1f */
  push32(0x102032a2u); f_10203e1f();
  /* 102032a2 call 0x102045db */
  push32(0x102032a7u); f_102045db();
  /* 102032a7 jmp 0x102032b5 */
  goto L_102032b5;
L_102032a9:;
  /* 102032a9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102032ac jne 0x102032b5 */
  if (!C.zf) goto L_102032b5;
  /* 102032ae push ecx */
  push32((uint32_t)(ECX));
  /* 102032af call 0x10203eb7 */
  push32(0x102032b4u); f_10203eb7();
  /* 102032b4 pop ecx */
  ECX = (pop32());
L_102032b5:;
  /* 102032b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102032b7 pop eax */
  EAX = (pop32());
L_102032b8:;
  /* 102032b8 ret 0xc */
  ESPCHK(0x102031e2u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x102032bb (157 bytes, 73 insns) */
void f_102032bb(void) {
  FTRACE(0x102032bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102032bb push ebp */
  push32((uint32_t)(EBP));
  /* 102032bc mov ebp, esp */
  EBP = (ESP);
  /* 102032be push ebx */
  push32((uint32_t)(EBX));
  /* 102032bf mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102032c2 push esi */
  push32((uint32_t)(ESI));
  /* 102032c3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102032c6 push edi */
  push32((uint32_t)(EDI));
  /* 102032c7 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 102032ca test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102032cc jne 0x102032d7 */
  if (!C.zf) goto L_102032d7;
  /* 102032ce cmp dword ptr [0x1020af98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1020af98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102032d5 jmp 0x102032fd */
  goto L_102032fd;
L_102032d7:;
  /* 102032d7 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102032da je 0x102032e1 */
  if (C.zf) goto L_102032e1;
  /* 102032dc cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102032df jne 0x10203303 */
  if (!C.zf) goto L_10203303;
L_102032e1:;
  /* 102032e1 mov eax, dword ptr [0x1020c67c] */
  EAX = (r32((uint32_t)(0x1020c67c)));
  /* 102032e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102032e8 je 0x102032f3 */
  if (C.zf) goto L_102032f3;
  /* 102032ea push edi */
  push32((uint32_t)(EDI));
  /* 102032eb push esi */
  push32((uint32_t)(ESI));
  /* 102032ec push ebx */
  push32((uint32_t)(EBX));
  /* 102032ed call eax */
  call_ind((uint32_t)(EAX), 0x102032efu);
  /* 102032ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102032f1 je 0x102032ff */
  if (C.zf) goto L_102032ff;
L_102032f3:;
  /* 102032f3 push edi */
  push32((uint32_t)(EDI));
  /* 102032f4 push esi */
  push32((uint32_t)(ESI));
  /* 102032f5 push ebx */
  push32((uint32_t)(EBX));
  /* 102032f6 call 0x102031e2 */
  push32(0x102032fbu); f_102031e2();
  /* 102032fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_102032fd:;
  /* 102032fd jne 0x10203303 */
  if (!C.zf) goto L_10203303;
L_102032ff:;
  /* 102032ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10203301 jmp 0x10203351 */
  goto L_10203351;
L_10203303:;
  /* 10203303 push edi */
  push32((uint32_t)(EDI));
  /* 10203304 push esi */
  push32((uint32_t)(ESI));
  /* 10203305 push ebx */
  push32((uint32_t)(EBX));
  /* 10203306 call 0x10202af0 */
  push32(0x1020330bu); f_10202af0();
  /* 1020330b cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020330e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10203311 jne 0x1020331f */
  if (!C.zf) goto L_1020331f;
  /* 10203313 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203315 jne 0x1020334e */
  if (!C.zf) goto L_1020334e;
  /* 10203317 push edi */
  push32((uint32_t)(EDI));
  /* 10203318 push eax */
  push32((uint32_t)(EAX));
  /* 10203319 push ebx */
  push32((uint32_t)(EBX));
  /* 1020331a call 0x102031e2 */
  push32(0x1020331fu); f_102031e2();
L_1020331f:;
  /* 1020331f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10203321 je 0x10203328 */
  if (C.zf) goto L_10203328;
  /* 10203323 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203326 jne 0x1020334e */
  if (!C.zf) goto L_1020334e;
L_10203328:;
  /* 10203328 push edi */
  push32((uint32_t)(EDI));
  /* 10203329 push esi */
  push32((uint32_t)(ESI));
  /* 1020332a push ebx */
  push32((uint32_t)(EBX));
  /* 1020332b call 0x102031e2 */
  push32(0x10203330u); f_102031e2();
  /* 10203330 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203332 jne 0x10203337 */
  if (!C.zf) goto L_10203337;
  /* 10203334 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10203337:;
  /* 10203337 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020333b je 0x1020334e */
  if (C.zf) goto L_1020334e;
  /* 1020333d mov eax, dword ptr [0x1020c67c] */
  EAX = (r32((uint32_t)(0x1020c67c)));
  /* 10203342 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203344 je 0x1020334e */
  if (C.zf) goto L_1020334e;
  /* 10203346 push edi */
  push32((uint32_t)(EDI));
  /* 10203347 push esi */
  push32((uint32_t)(ESI));
  /* 10203348 push ebx */
  push32((uint32_t)(EBX));
  /* 10203349 call eax */
  call_ind((uint32_t)(EAX), 0x1020334bu);
  /* 1020334b mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_1020334e:;
  /* 1020334e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10203351:;
  /* 10203351 pop edi */
  EDI = (pop32());
  /* 10203352 pop esi */
  ESI = (pop32());
  /* 10203353 pop ebx */
  EBX = (pop32());
  /* 10203354 pop ebp */
  EBP = (pop32());
  /* 10203355 ret 0xc */
  ESPCHK(0x102032bbu, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10203358 (48 bytes, 15 insns) */
void f_10203358(void) {
  FTRACE(0x10203358u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203358 mov eax, dword ptr [0x1020afa4] */
  EAX = (r32((uint32_t)(0x1020afa4)));
  /* 1020335d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203360 je 0x1020336f */
  if (C.zf) goto L_1020336f;
  /* 10203362 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203364 jne 0x10203374 */
  if (!C.zf) goto L_10203374;
  /* 10203366 cmp dword ptr [0x1020afa8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1020afa8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020336d jne 0x10203374 */
  if (!C.zf) goto L_10203374;
L_1020336f:;
  /* 1020336f call 0x10204650 */
  push32(0x10203374u); f_10204650();
L_10203374:;
  /* 10203374 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10203378 call 0x10204689 */
  push32(0x1020337du); f_10204689();
  /* 1020337d push 0xff */
  push32((uint32_t)(0xffu));
  /* 10203382 call dword ptr [0x10209d7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10209d7c))), 0x10203388u);
  /* 10203388 pop ecx */
  ECX = (pop32());
  /* 10203389 pop ecx */
  ECX = (pop32());
  /* 1020338a ret  */
  ESPCHK(0x10203358u, _esp0);
  ESP += 4; return;
}

/* FUN_1000338b @ 0x1020338b (280 bytes, 106 insns) */
void f_1020338b(void) {
  FTRACE(0x1020338bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1020338b push ebp */
  push32((uint32_t)(EBP));
  /* 1020338c mov ebp, esp */
  EBP = (ESP);
  /* 1020338e push ebx */
  push32((uint32_t)(EBX));
  /* 1020338f push esi */
  push32((uint32_t)(ESI));
  /* 10203390 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10203393 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10203396 mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 10203399 test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 1020339b je 0x10203497 */
  if (C.zf) goto L_10203497;
  /* 102033a1 test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 102033a3 jne 0x10203497 */
  if (!C.zf) goto L_10203497;
  /* 102033a9 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 102033ab je 0x102033c3 */
  if (C.zf) goto L_102033c3;
  /* 102033ad and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 102033b1 test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 102033b3 je 0x10203497 */
  if (C.zf) goto L_10203497;
  /* 102033b9 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 102033bc and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 102033be mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 102033c0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_102033c3:;
  /* 102033c3 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 102033c6 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 102033ca and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 102033ce and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 102033d0 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 102033d2 test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 102033d6 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 102033d9 jne 0x102033fd */
  if (!C.zf) goto L_102033fd;
  /* 102033db cmp esi, 0x10209e68 */
  { uint32_t _a=(ESI),_b=(0x10209e68u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102033e1 je 0x102033eb */
  if (C.zf) goto L_102033eb;
  /* 102033e3 cmp esi, 0x10209e88 */
  { uint32_t _a=(ESI),_b=(0x10209e88u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102033e9 jne 0x102033f6 */
  if (!C.zf) goto L_102033f6;
L_102033eb:;
  /* 102033eb push ebx */
  push32((uint32_t)(EBX));
  /* 102033ec call 0x10204ae8 */
  push32(0x102033f1u); f_10204ae8();
  /* 102033f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102033f3 pop ecx */
  ECX = (pop32());
  /* 102033f4 jne 0x102033fd */
  if (!C.zf) goto L_102033fd;
L_102033f6:;
  /* 102033f6 push esi */
  push32((uint32_t)(ESI));
  /* 102033f7 call 0x10204aa4 */
  push32(0x102033fcu); f_10204aa4();
  /* 102033fc pop ecx */
  ECX = (pop32());
L_102033fd:;
  /* 102033fd test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 10203403 push edi */
  push32((uint32_t)(EDI));
  /* 10203404 je 0x1020346d */
  if (C.zf) goto L_1020346d;
  /* 10203406 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 10203409 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 1020340b sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1020340d lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10203410 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 10203412 mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 10203415 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10203416 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10203418 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 1020341b jle 0x1020342d */
  if ((C.zf||C.sf!=C.of)) goto L_1020342d;
  /* 1020341d push edi */
  push32((uint32_t)(EDI));
  /* 1020341e push eax */
  push32((uint32_t)(EAX));
  /* 1020341f push ebx */
  push32((uint32_t)(EBX));
  /* 10203420 call 0x102048b4 */
  push32(0x10203425u); f_102048b4();
  /* 10203425 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10203428 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1020342b jmp 0x10203463 */
  goto L_10203463;
L_1020342d:;
  /* 1020342d cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203430 je 0x1020344b */
  if (C.zf) goto L_1020344b;
  /* 10203432 mov ecx, ebx */
  ECX = (EBX);
  /* 10203434 mov eax, ebx */
  EAX = (EBX);
  /* 10203436 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10203439 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1020343c mov ecx, dword ptr [ecx*4 + 0x1020c560] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1020c560)));
  /* 10203443 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10203446 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10203449 jmp 0x10203450 */
  goto L_10203450;
L_1020344b:;
  /* 1020344b mov eax, 0x10209d90 */
  EAX = (0x10209d90u);
L_10203450:;
  /* 10203450 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10203454 je 0x10203463 */
  if (C.zf) goto L_10203463;
  /* 10203456 push 2 */
  push32((uint32_t)(0x2u));
  /* 10203458 push 0 */
  push32((uint32_t)(0x0u));
  /* 1020345a push ebx */
  push32((uint32_t)(EBX));
  /* 1020345b call 0x102047dc */
  push32(0x10203460u); f_102047dc();
  /* 10203460 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10203463:;
  /* 10203463 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 10203466 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10203469 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1020346b jmp 0x10203481 */
  goto L_10203481;
L_1020346d:;
  /* 1020346d push 1 */
  push32((uint32_t)(0x1u));
  /* 1020346f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10203472 pop edi */
  EDI = (pop32());
  /* 10203473 push edi */
  push32((uint32_t)(EDI));
  /* 10203474 push eax */
  push32((uint32_t)(EAX));
  /* 10203475 push ebx */
  push32((uint32_t)(EBX));
  /* 10203476 call 0x102048b4 */
  push32(0x1020347bu); f_102048b4();
  /* 1020347b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020347e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10203481:;
  /* 10203481 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203484 pop edi */
  EDI = (pop32());
  /* 10203485 je 0x1020348d */
  if (C.zf) goto L_1020348d;
  /* 10203487 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1020348b jmp 0x1020349c */
  goto L_1020349c;
L_1020348d:;
  /* 1020348d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10203490 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10203495 jmp 0x1020349f */
  goto L_1020349f;
L_10203497:;
  /* 10203497 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10203499 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_1020349c:;
  /* 1020349c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1020349f:;
  /* 1020349f pop esi */
  ESI = (pop32());
  /* 102034a0 pop ebx */
  EBX = (pop32());
  /* 102034a1 pop ebp */
  EBP = (pop32());
  /* 102034a2 ret  */
  ESPCHK(0x1020338bu, _esp0);
  ESP += 4; return;
}

/* FUN_100034a3 @ 0x102034a3 (1825 bytes, 595 insns) [1 switch table(s)] */
void f_102034a3(void) {
  FTRACE(0x102034a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102034a3 push ebp */
  push32((uint32_t)(EBP));
  /* 102034a4 mov ebp, esp */
  EBP = (ESP);
  /* 102034a6 sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102034ac push ebx */
  push32((uint32_t)(EBX));
  /* 102034ad push esi */
  push32((uint32_t)(ESI));
  /* 102034ae push edi */
  push32((uint32_t)(EDI));
  /* 102034af mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 102034b2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102034b4 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 102034b6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102034b7 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 102034b9 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 102034bc mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 102034bf mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 102034c2 je 0x10203bbc */
  if (C.zf) goto L_10203bbc;
  /* 102034c8 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102034cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102034cd jmp 0x102034d7 */
  goto L_102034d7;
L_102034cf:;
  /* 102034cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102034d2 mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 102034d5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_102034d7:;
  /* 102034d7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102034da jl 0x10203bbc */
  if ((C.sf!=C.of)) goto L_10203bbc;
  /* 102034e0 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102034e3 jl 0x102034f8 */
  if ((C.sf!=C.of)) goto L_102034f8;
  /* 102034e5 cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102034e8 jg 0x102034f8 */
  if ((!C.zf&&C.sf==C.of)) goto L_102034f8;
  /* 102034ea movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 102034ed mov al, byte ptr [eax + 0x102080c0] */
  AL = (r8((uint32_t)(EAX + 0x102080c0)));
  /* 102034f3 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 102034f6 jmp 0x102034fa */
  goto L_102034fa;
L_102034f8:;
  /* 102034f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102034fa:;
  /* 102034fa movsx eax, byte ptr [esi + eax*8 + 0x102080e0] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x102080e0))));
  /* 10203502 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10203505 cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203508 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1020350b ja 0x10203bab */
  if ((!C.cf&&!C.zf)) goto L_10203bab;
  /* 10203511 jmp dword ptr [eax*4 + 0x10203bc4] */
  switch (EAX) {
    case 0: goto L_10203642;
    case 1: goto L_10203518;
    case 2: goto L_10203533;
    case 3: goto L_1020357f;
    case 4: goto L_102035b6;
    case 5: goto L_102035be;
    case 6: goto L_102035f3;
    case 7: goto L_10203686;
    default: x86_unimpl("switch@0x10203511 out of table"); return;
  }
L_10203518:;
  /* 10203518 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 1020351c mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1020351f mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10203522 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10203525 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10203528 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1020352b mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1020352e jmp 0x10203bab */
  goto L_10203bab;
L_10203533:;
  /* 10203533 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10203536 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10203539 je 0x10203576 */
  if (C.zf) goto L_10203576;
  /* 1020353b sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1020353e je 0x1020356d */
  if (C.zf) goto L_1020356d;
  /* 10203540 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10203543 je 0x10203564 */
  if (C.zf) goto L_10203564;
  /* 10203545 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10203546 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10203547 je 0x1020355b */
  if (C.zf) goto L_1020355b;
  /* 10203549 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1020354c jne 0x10203bab */
  if (!C.zf) goto L_10203bab;
  /* 10203552 or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10203556 jmp 0x10203bab */
  goto L_10203bab;
L_1020355b:;
  /* 1020355b or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1020355f jmp 0x10203bab */
  goto L_10203bab;
L_10203564:;
  /* 10203564 or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10203568 jmp 0x10203bab */
  goto L_10203bab;
L_1020356d:;
  /* 1020356d or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 10203571 jmp 0x10203bab */
  goto L_10203bab;
L_10203576:;
  /* 10203576 or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1020357a jmp 0x10203bab */
  goto L_10203bab;
L_1020357f:;
  /* 1020357f cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10203582 jne 0x102035a7 */
  if (!C.zf) goto L_102035a7;
  /* 10203584 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10203587 push eax */
  push32((uint32_t)(EAX));
  /* 10203588 call 0x10203c82 */
  push32(0x1020358du); f_10203c82();
  /* 1020358d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020358f pop ecx */
  ECX = (pop32());
  /* 10203590 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10203593 jge 0x10203bab */
  if ((C.sf==C.of)) goto L_10203bab;
  /* 10203599 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1020359d neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_1020359f:;
  /* 1020359f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 102035a2 jmp 0x10203bab */
  goto L_10203bab;
L_102035a7:;
  /* 102035a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 102035aa movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 102035ad lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102035b0 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 102035b4 jmp 0x1020359f */
  goto L_1020359f;
L_102035b6:;
  /* 102035b6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 102035b9 jmp 0x10203bab */
  goto L_10203bab;
L_102035be:;
  /* 102035be cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102035c1 jne 0x102035e1 */
  if (!C.zf) goto L_102035e1;
  /* 102035c3 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 102035c6 push eax */
  push32((uint32_t)(EAX));
  /* 102035c7 call 0x10203c82 */
  push32(0x102035ccu); f_10203c82();
  /* 102035cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102035ce pop ecx */
  ECX = (pop32());
  /* 102035cf mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 102035d2 jge 0x10203bab */
  if ((C.sf==C.of)) goto L_10203bab;
  /* 102035d8 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 102035dc jmp 0x10203bab */
  goto L_10203bab;
L_102035e1:;
  /* 102035e1 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102035e4 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 102035e7 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 102035eb mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 102035ee jmp 0x10203bab */
  goto L_10203bab;
L_102035f3:;
  /* 102035f3 cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102035f6 je 0x10203626 */
  if (C.zf) goto L_10203626;
  /* 102035f8 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102035fb je 0x1020361d */
  if (C.zf) goto L_1020361d;
  /* 102035fd cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10203600 je 0x10203614 */
  if (C.zf) goto L_10203614;
  /* 10203602 cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10203605 jne 0x10203bab */
  if (!C.zf) goto L_10203bab;
  /* 1020360b or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 1020360f jmp 0x10203bab */
  goto L_10203bab;
L_10203614:;
  /* 10203614 or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10203618 jmp 0x10203bab */
  goto L_10203bab;
L_1020361d:;
  /* 1020361d or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10203621 jmp 0x10203bab */
  goto L_10203bab;
L_10203626:;
  /* 10203626 cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10203629 jne 0x1020363f */
  if (!C.zf) goto L_1020363f;
  /* 1020362b cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1020362f jne 0x1020363f */
  if (!C.zf) goto L_1020363f;
  /* 10203631 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10203632 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10203633 or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10203637 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1020363a jmp 0x10203bab */
  goto L_10203bab;
L_1020363f:;
  /* 1020363f mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10203642:;
  /* 10203642 mov ecx, dword ptr [0x1020a0e8] */
  ECX = (r32((uint32_t)(0x1020a0e8)));
  /* 10203648 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1020364b movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1020364e test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 10203653 je 0x1020366e */
  if (C.zf) goto L_1020366e;
  /* 10203655 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10203658 push eax */
  push32((uint32_t)(EAX));
  /* 10203659 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1020365c movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1020365f push eax */
  push32((uint32_t)(EAX));
  /* 10203660 call 0x10203be4 */
  push32(0x10203665u); f_10203be4();
  /* 10203665 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10203667 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020366a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1020366b mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_1020366e:;
  /* 1020366e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10203671 push eax */
  push32((uint32_t)(EAX));
  /* 10203672 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10203675 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10203678 push eax */
  push32((uint32_t)(EAX));
  /* 10203679 call 0x10203be4 */
  push32(0x1020367eu); f_10203be4();
  /* 1020367e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10203681 jmp 0x10203bab */
  goto L_10203bab;
L_10203686:;
  /* 10203686 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10203689 cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020368c jg 0x102038ae */
  if ((!C.zf&&C.sf==C.of)) goto L_102038ae;
  /* 10203692 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203695 jge 0x10203731 */
  if ((C.sf==C.of)) goto L_10203731;
  /* 1020369b cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020369e jg 0x1020378f */
  if ((!C.zf&&C.sf==C.of)) goto L_1020378f;
  /* 102036a4 je 0x10203922 */
  if (C.zf) goto L_10203922;
  /* 102036aa sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102036ad je 0x10203752 */
  if (C.zf) goto L_10203752;
  /* 102036b3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102036b4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102036b5 je 0x10203727 */
  if (C.zf) goto L_10203727;
  /* 102036b7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102036b8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102036b9 je 0x10203727 */
  if (C.zf) goto L_10203727;
  /* 102036bb sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102036be jne 0x10203aad */
  if (!C.zf) goto L_10203aad;
  /* 102036c4 test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 102036ca jne 0x102036d0 */
  if (!C.zf) goto L_102036d0;
  /* 102036cc or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_102036d0:;
  /* 102036d0 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 102036d3 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102036d6 jne 0x102036dd */
  if (!C.zf) goto L_102036dd;
  /* 102036d8 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_102036dd:;
  /* 102036dd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 102036e0 push eax */
  push32((uint32_t)(EAX));
  /* 102036e1 call 0x10203c82 */
  push32(0x102036e6u); f_10203c82();
  /* 102036e6 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 102036ec pop ecx */
  ECX = (pop32());
  /* 102036ed mov ecx, eax */
  ECX = (EAX);
  /* 102036ef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102036f2 je 0x102038f6 */
  if (C.zf) goto L_102038f6;
  /* 102036f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102036fa jne 0x10203705 */
  if (!C.zf) goto L_10203705;
  /* 102036fc mov ecx, dword ptr [0x10209d84] */
  ECX = (r32((uint32_t)(0x10209d84)));
  /* 10203702 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10203705:;
  /* 10203705 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1020370c mov eax, ecx */
  EAX = (ECX);
L_1020370e:;
  /* 1020370e mov edx, esi */
  EDX = (ESI);
  /* 10203710 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10203711 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10203713 je 0x102038ed */
  if (C.zf) goto L_102038ed;
  /* 10203719 cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1020371d je 0x102038ed */
  if (C.zf) goto L_102038ed;
  /* 10203723 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10203724 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10203725 jmp 0x1020370e */
  goto L_1020370e;
L_10203727:;
  /* 10203727 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 1020372e add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_10203731:;
  /* 10203731 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10203735 lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 1020373b cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020373d mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10203740 jge 0x10203815 */
  if ((C.sf==C.of)) goto L_10203815;
  /* 10203746 mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 1020374d jmp 0x10203823 */
  goto L_10203823;
L_10203752:;
  /* 10203752 test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 10203758 jne 0x1020375e */
  if (!C.zf) goto L_1020375e;
  /* 1020375a or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_1020375e:;
  /* 1020375e test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 10203764 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10203767 push eax */
  push32((uint32_t)(EAX));
  /* 10203768 je 0x102037a5 */
  if (C.zf) goto L_102037a5;
  /* 1020376a call 0x10203c9f */
  push32(0x1020376fu); f_10203c9f();
  /* 1020376f push eax */
  push32((uint32_t)(EAX));
  /* 10203770 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10203776 push eax */
  push32((uint32_t)(EAX));
  /* 10203777 call 0x10204cfb */
  push32(0x1020377cu); f_10204cfb();
  /* 1020377c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020377f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10203782 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203784 jge 0x102037b8 */
  if ((C.sf==C.of)) goto L_102037b8;
  /* 10203786 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 1020378d jmp 0x102037b8 */
  goto L_102037b8;
L_1020378f:;
  /* 1020378f sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10203792 je 0x102037c6 */
  if (C.zf) goto L_102037c6;
  /* 10203794 sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10203797 je 0x1020375e */
  if (C.zf) goto L_1020375e;
  /* 10203799 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1020379a je 0x10203988 */
  if (C.zf) goto L_10203988;
  /* 102037a0 jmp 0x10203aad */
  goto L_10203aad;
L_102037a5:;
  /* 102037a5 call 0x10203c82 */
  push32(0x102037aau); f_10203c82();
  /* 102037aa pop ecx */
  ECX = (pop32());
  /* 102037ab mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 102037b1 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_102037b8:;
  /* 102037b8 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 102037be mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 102037c1 jmp 0x10203aad */
  goto L_10203aad;
L_102037c6:;
  /* 102037c6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 102037c9 push eax */
  push32((uint32_t)(EAX));
  /* 102037ca call 0x10203c82 */
  push32(0x102037cfu); f_10203c82();
  /* 102037cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102037d1 pop ecx */
  ECX = (pop32());
  /* 102037d2 je 0x10203807 */
  if (C.zf) goto L_10203807;
  /* 102037d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 102037d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102037d9 je 0x10203807 */
  if (C.zf) goto L_10203807;
  /* 102037db test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 102037df je 0x102037f8 */
  if (C.zf) goto L_102037f8;
  /* 102037e1 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 102037e4 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102037e6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102037e9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 102037ec mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 102037f3 jmp 0x10203aad */
  goto L_10203aad;
L_102037f8:;
  /* 102037f8 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 102037fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102037ff movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 10203802 jmp 0x10203aaa */
  goto L_10203aaa;
L_10203807:;
  /* 10203807 mov eax, dword ptr [0x10209d80] */
  EAX = (r32((uint32_t)(0x10209d80)));
  /* 1020380c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1020380f push eax */
  push32((uint32_t)(EAX));
  /* 10203810 jmp 0x102038a3 */
  goto L_102038a3;
L_10203815:;
  /* 10203815 jne 0x10203823 */
  if (!C.zf) goto L_10203823;
  /* 10203817 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1020381a jne 0x10203823 */
  if (!C.zf) goto L_10203823;
  /* 1020381c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10203823:;
  /* 10203823 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10203826 push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 10203829 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1020382c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1020382f push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 10203832 mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 10203835 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 10203838 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 1020383b mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 1020383e movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10203841 push eax */
  push32((uint32_t)(EAX));
  /* 10203842 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10203848 push eax */
  push32((uint32_t)(EAX));
  /* 10203849 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 1020384c push eax */
  push32((uint32_t)(EAX));
  /* 1020384d call dword ptr [0x1020a0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020a0d0))), 0x10203853u);
  /* 10203853 mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 10203856 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10203859 and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 1020385f je 0x10203875 */
  if (C.zf) goto L_10203875;
  /* 10203861 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203865 jne 0x10203875 */
  if (!C.zf) goto L_10203875;
  /* 10203867 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 1020386d push eax */
  push32((uint32_t)(EAX));
  /* 1020386e call dword ptr [0x1020a0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020a0dc))), 0x10203874u);
  /* 10203874 pop ecx */
  ECX = (pop32());
L_10203875:;
  /* 10203875 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10203878 jne 0x1020388c */
  if (!C.zf) goto L_1020388c;
  /* 1020387a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1020387c jne 0x1020388c */
  if (!C.zf) goto L_1020388c;
  /* 1020387e lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10203884 push eax */
  push32((uint32_t)(EAX));
  /* 10203885 call dword ptr [0x1020a0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020a0d4))), 0x1020388bu);
  /* 1020388b pop ecx */
  ECX = (pop32());
L_1020388c:;
  /* 1020388c cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10203893 jne 0x102038a2 */
  if (!C.zf) goto L_102038a2;
  /* 10203895 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10203899 lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 1020389f mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_102038a2:;
  /* 102038a2 push edi */
  push32((uint32_t)(EDI));
L_102038a3:;
  /* 102038a3 call 0x10204c80 */
  push32(0x102038a8u); f_10204c80();
  /* 102038a8 pop ecx */
  ECX = (pop32());
  /* 102038a9 jmp 0x10203aaa */
  goto L_10203aaa;
L_102038ae:;
  /* 102038ae sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102038b1 je 0x10203988 */
  if (C.zf) goto L_10203988;
  /* 102038b7 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102038ba je 0x1020395e */
  if (C.zf) goto L_1020395e;
  /* 102038c0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102038c1 je 0x1020394b */
  if (C.zf) goto L_1020394b;
  /* 102038c7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102038c8 je 0x1020391b */
  if (C.zf) goto L_1020391b;
  /* 102038ca sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102038cd je 0x102036d0 */
  if (C.zf) goto L_102036d0;
  /* 102038d3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102038d4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102038d5 je 0x1020398c */
  if (C.zf) goto L_1020398c;
  /* 102038db sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102038de jne 0x10203aad */
  if (!C.zf) goto L_10203aad;
  /* 102038e4 mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 102038eb jmp 0x10203929 */
  goto L_10203929;
L_102038ed:;
  /* 102038ed sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102038ef sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102038f1 jmp 0x10203aaa */
  goto L_10203aaa;
L_102038f6:;
  /* 102038f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102038f8 jne 0x10203903 */
  if (!C.zf) goto L_10203903;
  /* 102038fa mov ecx, dword ptr [0x10209d80] */
  ECX = (r32((uint32_t)(0x10209d80)));
  /* 10203900 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10203903:;
  /* 10203903 mov eax, ecx */
  EAX = (ECX);
L_10203905:;
  /* 10203905 mov edx, esi */
  EDX = (ESI);
  /* 10203907 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10203908 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1020390a je 0x10203914 */
  if (C.zf) goto L_10203914;
  /* 1020390c cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1020390f je 0x10203914 */
  if (C.zf) goto L_10203914;
  /* 10203911 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10203912 jmp 0x10203905 */
  goto L_10203905;
L_10203914:;
  /* 10203914 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10203916 jmp 0x10203aaa */
  goto L_10203aaa;
L_1020391b:;
  /* 1020391b mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_10203922:;
  /* 10203922 mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_10203929:;
  /* 10203929 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 1020392d mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 10203934 je 0x10203993 */
  if (C.zf) goto L_10203993;
  /* 10203936 mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 10203939 mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 1020393d add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1020393f mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 10203946 mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 10203949 jmp 0x10203993 */
  goto L_10203993;
L_1020394b:;
  /* 1020394b test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 1020394f mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 10203956 je 0x10203993 */
  if (C.zf) goto L_10203993;
  /* 10203958 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 1020395c jmp 0x10203993 */
  goto L_10203993;
L_1020395e:;
  /* 1020395e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10203961 push eax */
  push32((uint32_t)(EAX));
  /* 10203962 call 0x10203c82 */
  push32(0x10203967u); f_10203c82();
  /* 10203967 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 1020396b pop ecx */
  ECX = (pop32());
  /* 1020396c je 0x10203977 */
  if (C.zf) goto L_10203977;
  /* 1020396e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10203972 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 10203975 jmp 0x1020397c */
  goto L_1020397c;
L_10203977:;
  /* 10203977 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1020397a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1020397c:;
  /* 1020397c mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 10203983 jmp 0x10203bab */
  goto L_10203bab;
L_10203988:;
  /* 10203988 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_1020398c:;
  /* 1020398c mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_10203993:;
  /* 10203993 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 10203997 je 0x102039a5 */
  if (C.zf) goto L_102039a5;
  /* 10203999 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1020399c push eax */
  push32((uint32_t)(EAX));
  /* 1020399d call 0x10203c8f */
  push32(0x102039a2u); f_10203c8f();
  /* 102039a2 pop ecx */
  ECX = (pop32());
  /* 102039a3 jmp 0x102039e6 */
  goto L_102039e6;
L_102039a5:;
  /* 102039a5 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 102039a9 je 0x102039cc */
  if (C.zf) goto L_102039cc;
  /* 102039ab test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 102039af lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 102039b2 push eax */
  push32((uint32_t)(EAX));
  /* 102039b3 je 0x102039c1 */
  if (C.zf) goto L_102039c1;
  /* 102039b5 call 0x10203c82 */
  push32(0x102039bau); f_10203c82();
  /* 102039ba pop ecx */
  ECX = (pop32());
  /* 102039bb movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_102039be:;
  /* 102039be cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102039bf jmp 0x102039e6 */
  goto L_102039e6;
L_102039c1:;
  /* 102039c1 call 0x10203c82 */
  push32(0x102039c6u); f_10203c82();
  /* 102039c6 pop ecx */
  ECX = (pop32());
  /* 102039c7 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 102039ca jmp 0x102039be */
  goto L_102039be;
L_102039cc:;
  /* 102039cc test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 102039d0 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 102039d3 push eax */
  push32((uint32_t)(EAX));
  /* 102039d4 je 0x102039de */
  if (C.zf) goto L_102039de;
  /* 102039d6 call 0x10203c82 */
  push32(0x102039dbu); f_10203c82();
  /* 102039db pop ecx */
  ECX = (pop32());
  /* 102039dc jmp 0x102039be */
  goto L_102039be;
L_102039de:;
  /* 102039de call 0x10203c82 */
  push32(0x102039e3u); f_10203c82();
  /* 102039e3 pop ecx */
  ECX = (pop32());
  /* 102039e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_102039e6:;
  /* 102039e6 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 102039ea je 0x10203a07 */
  if (C.zf) goto L_10203a07;
  /* 102039ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102039ee jg 0x10203a07 */
  if ((!C.zf&&C.sf==C.of)) goto L_10203a07;
  /* 102039f0 jl 0x102039f6 */
  if ((C.sf!=C.of)) goto L_102039f6;
  /* 102039f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102039f4 jae 0x10203a07 */
  if (!C.cf) goto L_10203a07;
L_102039f6:;
  /* 102039f6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102039f8 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102039fb mov esi, eax */
  ESI = (EAX);
  /* 102039fd neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 102039ff or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10203a03 mov edi, edx */
  EDI = (EDX);
  /* 10203a05 jmp 0x10203a0b */
  goto L_10203a0b;
L_10203a07:;
  /* 10203a07 mov esi, eax */
  ESI = (EAX);
  /* 10203a09 mov edi, edx */
  EDI = (EDX);
L_10203a0b:;
  /* 10203a0b test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 10203a0f jne 0x10203a14 */
  if (!C.zf) goto L_10203a14;
  /* 10203a11 and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_10203a14:;
  /* 10203a14 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203a18 jge 0x10203a23 */
  if ((C.sf==C.of)) goto L_10203a23;
  /* 10203a1a mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10203a21 jmp 0x10203a27 */
  goto L_10203a27;
L_10203a23:;
  /* 10203a23 and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10203a27:;
  /* 10203a27 mov eax, esi */
  EAX = (ESI);
  /* 10203a29 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10203a2b jne 0x10203a31 */
  if (!C.zf) goto L_10203a31;
  /* 10203a2d and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_10203a31:;
  /* 10203a31 lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 10203a34 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10203a37:;
  /* 10203a37 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10203a3a dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 10203a3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203a3f jg 0x10203a47 */
  if ((!C.zf&&C.sf==C.of)) goto L_10203a47;
  /* 10203a41 mov eax, esi */
  EAX = (ESI);
  /* 10203a43 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10203a45 je 0x10203a82 */
  if (C.zf) goto L_10203a82;
L_10203a47:;
  /* 10203a47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10203a4a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10203a4b push edx */
  push32((uint32_t)(EDX));
  /* 10203a4c push eax */
  push32((uint32_t)(EAX));
  /* 10203a4d push edi */
  push32((uint32_t)(EDI));
  /* 10203a4e push esi */
  push32((uint32_t)(ESI));
  /* 10203a4f mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10203a52 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 10203a55 call 0x10204e30 */
  push32(0x10203a5au); f_10204e30();
  /* 10203a5a push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 10203a5d mov ebx, eax */
  EBX = (EAX);
  /* 10203a5f add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10203a62 push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 10203a65 push edi */
  push32((uint32_t)(EDI));
  /* 10203a66 push esi */
  push32((uint32_t)(ESI));
  /* 10203a67 call 0x10204dc0 */
  push32(0x10203a6cu); f_10204dc0();
  /* 10203a6c cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203a6f mov esi, eax */
  ESI = (EAX);
  /* 10203a71 mov edi, edx */
  EDI = (EDX);
  /* 10203a73 jle 0x10203a78 */
  if ((C.zf||C.sf!=C.of)) goto L_10203a78;
  /* 10203a75 add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_10203a78:;
  /* 10203a78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10203a7b dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 10203a7e mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 10203a80 jmp 0x10203a37 */
  goto L_10203a37;
L_10203a82:;
  /* 10203a82 lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 10203a85 sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10203a88 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 10203a8b test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 10203a8f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10203a92 je 0x10203aad */
  if (C.zf) goto L_10203aad;
  /* 10203a94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10203a97 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10203a9a jne 0x10203aa0 */
  if (!C.zf) goto L_10203aa0;
  /* 10203a9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203a9e jne 0x10203aad */
  if (!C.zf) goto L_10203aad;
L_10203aa0:;
  /* 10203aa0 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 10203aa3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10203aa4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10203aa7 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_10203aaa:;
  /* 10203aaa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10203aad:;
  /* 10203aad cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203ab1 jne 0x10203bab */
  if (!C.zf) goto L_10203bab;
  /* 10203ab7 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 10203aba test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 10203abd je 0x10203ae5 */
  if (C.zf) goto L_10203ae5;
  /* 10203abf test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 10203ac2 je 0x10203aca */
  if (C.zf) goto L_10203aca;
  /* 10203ac4 mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 10203ac8 jmp 0x10203ade */
  goto L_10203ade;
L_10203aca:;
  /* 10203aca test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10203acd je 0x10203ad5 */
  if (C.zf) goto L_10203ad5;
  /* 10203acf mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 10203ad3 jmp 0x10203ade */
  goto L_10203ade;
L_10203ad5:;
  /* 10203ad5 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10203ad8 je 0x10203ae5 */
  if (C.zf) goto L_10203ae5;
  /* 10203ada mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_10203ade:;
  /* 10203ade mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_10203ae5:;
  /* 10203ae5 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 10203ae8 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10203aeb sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10203aee test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 10203af1 jne 0x10203b05 */
  if (!C.zf) goto L_10203b05;
  /* 10203af3 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10203af6 push eax */
  push32((uint32_t)(EAX));
  /* 10203af7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10203afa push esi */
  push32((uint32_t)(ESI));
  /* 10203afb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10203afd call 0x10203c19 */
  push32(0x10203b02u); f_10203c19();
  /* 10203b02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10203b05:;
  /* 10203b05 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10203b08 push eax */
  push32((uint32_t)(EAX));
  /* 10203b09 lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 10203b0c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10203b0f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10203b12 push eax */
  push32((uint32_t)(EAX));
  /* 10203b13 call 0x10203c4a */
  push32(0x10203b18u); f_10203c4a();
  /* 10203b18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10203b1b test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10203b1e je 0x10203b37 */
  if (C.zf) goto L_10203b37;
  /* 10203b20 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 10203b23 jne 0x10203b37 */
  if (!C.zf) goto L_10203b37;
  /* 10203b25 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10203b28 push eax */
  push32((uint32_t)(EAX));
  /* 10203b29 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10203b2c push esi */
  push32((uint32_t)(ESI));
  /* 10203b2d push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10203b2f call 0x10203c19 */
  push32(0x10203b34u); f_10203c19();
  /* 10203b34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10203b37:;
  /* 10203b37 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203b3b je 0x10203b7e */
  if (C.zf) goto L_10203b7e;
  /* 10203b3d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203b41 jle 0x10203b7e */
  if ((C.zf||C.sf!=C.of)) goto L_10203b7e;
  /* 10203b43 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10203b46 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 10203b49 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_10203b4c:;
  /* 10203b4c mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 10203b4f inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10203b50 push eax */
  push32((uint32_t)(EAX));
  /* 10203b51 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 10203b54 push eax */
  push32((uint32_t)(EAX));
  /* 10203b55 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10203b56 call 0x10204cfb */
  push32(0x10203b5bu); f_10204cfb();
  /* 10203b5b pop ecx */
  ECX = (pop32());
  /* 10203b5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203b5e pop ecx */
  ECX = (pop32());
  /* 10203b5f jle 0x10203b93 */
  if ((C.zf||C.sf!=C.of)) goto L_10203b93;
  /* 10203b61 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 10203b64 push ecx */
  push32((uint32_t)(ECX));
  /* 10203b65 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10203b68 push eax */
  push32((uint32_t)(EAX));
  /* 10203b69 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 10203b6c push eax */
  push32((uint32_t)(EAX));
  /* 10203b6d call 0x10203c4a */
  push32(0x10203b72u); f_10203c4a();
  /* 10203b72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10203b75 mov eax, edi */
  EAX = (EDI);
  /* 10203b77 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10203b78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203b7a jne 0x10203b4c */
  if (!C.zf) goto L_10203b4c;
  /* 10203b7c jmp 0x10203b93 */
  goto L_10203b93;
L_10203b7e:;
  /* 10203b7e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10203b81 push eax */
  push32((uint32_t)(EAX));
  /* 10203b82 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10203b85 push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 10203b88 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 10203b8b call 0x10203c4a */
  push32(0x10203b90u); f_10203c4a();
  /* 10203b90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10203b93:;
  /* 10203b93 test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 10203b97 je 0x10203bab */
  if (C.zf) goto L_10203bab;
  /* 10203b99 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10203b9c push eax */
  push32((uint32_t)(EAX));
  /* 10203b9d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10203ba0 push esi */
  push32((uint32_t)(ESI));
  /* 10203ba1 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10203ba3 call 0x10203c19 */
  push32(0x10203ba8u); f_10203c19();
  /* 10203ba8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10203bab:;
  /* 10203bab mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10203bae mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10203bb0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10203bb1 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10203bb3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 10203bb6 jne 0x102034cf */
  if (!C.zf) goto L_102034cf;
L_10203bbc:;
  /* 10203bbc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10203bbf pop edi */
  EDI = (pop32());
  /* 10203bc0 pop esi */
  ESI = (pop32());
  /* 10203bc1 pop ebx */
  EBX = (pop32());
  /* 10203bc2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10203bc3 ret  */
  ESPCHK(0x102034a3u, _esp0);
  ESP += 4; return;
}

/* FUN_10003be4 @ 0x10203be4 (53 bytes, 25 insns) */
void f_10203be4(void) {
  FTRACE(0x10203be4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203be4 push ebp */
  push32((uint32_t)(EBP));
  /* 10203be5 mov ebp, esp */
  EBP = (ESP);
  /* 10203be7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10203bea dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 10203bed js 0x10203bfd */
  if (C.sf) goto L_10203bfd;
  /* 10203bef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10203bf1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10203bf4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10203bf6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10203bf8 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10203bfb jmp 0x10203c08 */
  goto L_10203c08;
L_10203bfd:;
  /* 10203bfd push ecx */
  push32((uint32_t)(ECX));
  /* 10203bfe push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10203c01 call 0x1020338b */
  push32(0x10203c06u); f_1020338b();
  /* 10203c06 pop ecx */
  ECX = (pop32());
  /* 10203c07 pop ecx */
  ECX = (pop32());
L_10203c08:;
  /* 10203c08 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203c0b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10203c0e jne 0x10203c15 */
  if (!C.zf) goto L_10203c15;
  /* 10203c10 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10203c13 pop ebp */
  EBP = (pop32());
  /* 10203c14 ret  */
  ESPCHK(0x10203be4u, _esp0);
  ESP += 4; return;
L_10203c15:;
  /* 10203c15 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10203c17 pop ebp */
  EBP = (pop32());
  /* 10203c18 ret  */
  ESPCHK(0x10203be4u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c19 @ 0x10203c19 (49 bytes, 22 insns) */
void f_10203c19(void) {
  FTRACE(0x10203c19u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203c19 push esi */
  push32((uint32_t)(ESI));
  /* 10203c1a push edi */
  push32((uint32_t)(EDI));
  /* 10203c1b mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10203c1f mov eax, edi */
  EAX = (EDI);
  /* 10203c21 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10203c22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203c24 jle 0x10203c47 */
  if ((C.zf||C.sf!=C.of)) goto L_10203c47;
  /* 10203c26 mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_10203c2a:;
  /* 10203c2a push esi */
  push32((uint32_t)(ESI));
  /* 10203c2b push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10203c2f push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 10203c33 call 0x10203be4 */
  push32(0x10203c38u); f_10203be4();
  /* 10203c38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10203c3b cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203c3e je 0x10203c47 */
  if (C.zf) goto L_10203c47;
  /* 10203c40 mov eax, edi */
  EAX = (EDI);
  /* 10203c42 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10203c43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203c45 jg 0x10203c2a */
  if ((!C.zf&&C.sf==C.of)) goto L_10203c2a;
L_10203c47:;
  /* 10203c47 pop edi */
  EDI = (pop32());
  /* 10203c48 pop esi */
  ESI = (pop32());
  /* 10203c49 ret  */
  ESPCHK(0x10203c19u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c4a @ 0x10203c4a (56 bytes, 27 insns) */
void f_10203c4a(void) {
  FTRACE(0x10203c4au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203c4a push ebx */
  push32((uint32_t)(EBX));
  /* 10203c4b mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 10203c4f mov eax, ebx */
  EAX = (EBX);
  /* 10203c51 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10203c52 push esi */
  push32((uint32_t)(ESI));
  /* 10203c53 push edi */
  push32((uint32_t)(EDI));
  /* 10203c54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203c56 jle 0x10203c7e */
  if ((C.zf||C.sf!=C.of)) goto L_10203c7e;
  /* 10203c58 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 10203c5c mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_10203c60:;
  /* 10203c60 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10203c63 push edi */
  push32((uint32_t)(EDI));
  /* 10203c64 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10203c65 push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 10203c69 push eax */
  push32((uint32_t)(EAX));
  /* 10203c6a call 0x10203be4 */
  push32(0x10203c6fu); f_10203be4();
  /* 10203c6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10203c72 cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203c75 je 0x10203c7e */
  if (C.zf) goto L_10203c7e;
  /* 10203c77 mov eax, ebx */
  EAX = (EBX);
  /* 10203c79 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10203c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203c7c jg 0x10203c60 */
  if ((!C.zf&&C.sf==C.of)) goto L_10203c60;
L_10203c7e:;
  /* 10203c7e pop edi */
  EDI = (pop32());
  /* 10203c7f pop esi */
  ESI = (pop32());
  /* 10203c80 pop ebx */
  EBX = (pop32());
  /* 10203c81 ret  */
  ESPCHK(0x10203c4au, _esp0);
  ESP += 4; return;
}

/* FUN_10003c82 @ 0x10203c82 (13 bytes, 5 insns) */
void f_10203c82(void) {
  FTRACE(0x10203c82u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203c82 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10203c86 add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10203c89 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10203c8b mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 10203c8e ret  */
  ESPCHK(0x10203c82u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c8f @ 0x10203c8f (16 bytes, 6 insns) */
void f_10203c8f(void) {
  FTRACE(0x10203c8fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203c8f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10203c93 add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10203c96 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10203c98 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 10203c9b mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10203c9e ret  */
  ESPCHK(0x10203c8fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003c9f @ 0x10203c9f (14 bytes, 5 insns) */
void f_10203c9f(void) {
  FTRACE(0x10203c9fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203c9f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10203ca3 add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10203ca6 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10203ca8 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 10203cac ret  */
  ESPCHK(0x10203c9fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003cad @ 0x10203cad (45 bytes, 12 insns) */
void f_10203cad(void) {
  FTRACE(0x10203cadu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203cad mov eax, dword ptr [0x1020c674] */
  EAX = (r32((uint32_t)(0x1020c674)));
  /* 10203cb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203cb4 je 0x10203cb8 */
  if (C.zf) goto L_10203cb8;
  /* 10203cb6 call eax */
  call_ind((uint32_t)(EAX), 0x10203cb8u);
L_10203cb8:;
  /* 10203cb8 push 0x10209014 */
  push32((uint32_t)(0x10209014u));
  /* 10203cbd push 0x10209008 */
  push32((uint32_t)(0x10209008u));
  /* 10203cc2 call 0x10203db1 */
  push32(0x10203cc7u); f_10203db1();
  /* 10203cc7 push 0x10209004 */
  push32((uint32_t)(0x10209004u));
  /* 10203ccc push 0x10209000 */
  push32((uint32_t)(0x10209000u));
  /* 10203cd1 call 0x10203db1 */
  push32(0x10203cd6u); f_10203db1();
  /* 10203cd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10203cd9 ret  */
  ESPCHK(0x10203cadu, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10203cda (17 bytes, 6 insns) */
void f_10203cda(void) {
  FTRACE(0x10203cdau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203cda push 0 */
  push32((uint32_t)(0x0u));
  /* 10203cdc push 1 */
  push32((uint32_t)(0x1u));
  /* 10203cde push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10203ce2 call 0x10203cfa */
  push32(0x10203ce7u); f_10203cfa();
  /* 10203ce7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10203cea ret  */
  ESPCHK(0x10203cdau, _esp0);
  ESP += 4; return;
}

/* FUN_10003ceb @ 0x10203ceb (15 bytes, 6 insns) */
void f_10203ceb(void) {
  FTRACE(0x10203cebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203ceb push 1 */
  push32((uint32_t)(0x1u));
  /* 10203ced push 0 */
  push32((uint32_t)(0x0u));
  /* 10203cef push 0 */
  push32((uint32_t)(0x0u));
  /* 10203cf1 call 0x10203cfa */
  push32(0x10203cf6u); f_10203cfa();
  /* 10203cf6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10203cf9 ret  */
  ESPCHK(0x10203cebu, _esp0);
  ESP += 4; return;
}

/* FUN_10003cfa @ 0x10203cfa (163 bytes, 53 insns) */
void f_10203cfa(void) {
  FTRACE(0x10203cfau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203cfa push edi */
  push32((uint32_t)(EDI));
  /* 10203cfb call 0x10203d9f */
  push32(0x10203d00u); f_10203d9f();
  /* 10203d00 push 1 */
  push32((uint32_t)(0x1u));
  /* 10203d02 pop edi */
  EDI = (pop32());
  /* 10203d03 cmp dword ptr [0x1020afec], edi */
  { uint32_t _a=(r32((uint32_t)(0x1020afec))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203d09 jne 0x10203d1c */
  if (!C.zf) goto L_10203d1c;
  /* 10203d0b push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10203d0f call dword ptr [0x10208020] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208020))), 0x10203d15u);
  /* 10203d15 push eax */
  push32((uint32_t)(EAX));
  /* 10203d16 call dword ptr [0x1020801c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020801c))), 0x10203d1cu);
L_10203d1c:;
  /* 10203d1c cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203d21 push ebx */
  push32((uint32_t)(EBX));
  /* 10203d22 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10203d26 mov dword ptr [0x1020afe8], edi */
  w32((uint32_t)(0x1020afe8), (EDI));
  /* 10203d2c mov byte ptr [0x1020afe4], bl */
  w8((uint32_t)(0x1020afe4), (BL));
  /* 10203d32 jne 0x10203d70 */
  if (!C.zf) goto L_10203d70;
  /* 10203d34 mov eax, dword ptr [0x1020c670] */
  EAX = (r32((uint32_t)(0x1020c670)));
  /* 10203d39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203d3b je 0x10203d5f */
  if (C.zf) goto L_10203d5f;
  /* 10203d3d mov ecx, dword ptr [0x1020c66c] */
  ECX = (r32((uint32_t)(0x1020c66c)));
  /* 10203d43 push esi */
  push32((uint32_t)(ESI));
  /* 10203d44 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10203d47 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203d49 jb 0x10203d5e */
  if (C.cf) goto L_10203d5e;
L_10203d4b:;
  /* 10203d4b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10203d4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203d4f je 0x10203d53 */
  if (C.zf) goto L_10203d53;
  /* 10203d51 call eax */
  call_ind((uint32_t)(EAX), 0x10203d53u);
L_10203d53:;
  /* 10203d53 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10203d56 cmp esi, dword ptr [0x1020c670] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1020c670))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203d5c jae 0x10203d4b */
  if (!C.cf) goto L_10203d4b;
L_10203d5e:;
  /* 10203d5e pop esi */
  ESI = (pop32());
L_10203d5f:;
  /* 10203d5f push 0x10209020 */
  push32((uint32_t)(0x10209020u));
  /* 10203d64 push 0x10209018 */
  push32((uint32_t)(0x10209018u));
  /* 10203d69 call 0x10203db1 */
  push32(0x10203d6eu); f_10203db1();
  /* 10203d6e pop ecx */
  ECX = (pop32());
  /* 10203d6f pop ecx */
  ECX = (pop32());
L_10203d70:;
  /* 10203d70 push 0x10209028 */
  push32((uint32_t)(0x10209028u));
  /* 10203d75 push 0x10209024 */
  push32((uint32_t)(0x10209024u));
  /* 10203d7a call 0x10203db1 */
  push32(0x10203d7fu); f_10203db1();
  /* 10203d7f pop ecx */
  ECX = (pop32());
  /* 10203d80 pop ecx */
  ECX = (pop32());
  /* 10203d81 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10203d83 pop ebx */
  EBX = (pop32());
  /* 10203d84 je 0x10203d8d */
  if (C.zf) goto L_10203d8d;
  /* 10203d86 call 0x10203da8 */
  push32(0x10203d8bu); f_10203da8();
  /* 10203d8b pop edi */
  EDI = (pop32());
  /* 10203d8c ret  */
  ESPCHK(0x10203cfau, _esp0);
  ESP += 4; return;
L_10203d8d:;
  /* 10203d8d push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10203d91 mov dword ptr [0x1020afec], edi */
  w32((uint32_t)(0x1020afec), (EDI));
  /* 10203d97 call dword ptr [0x10208018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208018))), 0x10203d9du);
  /* 10203d9d pop edi */
  EDI = (pop32());
  /* 10203d9e ret  */
  ESPCHK(0x10203cfau, _esp0);
  ESP += 4; return;
}

/* FUN_10003d9f @ 0x10203d9f (9 bytes, 4 insns) */
void f_10203d9f(void) {
  FTRACE(0x10203d9fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203d9f push 0xd */
  push32((uint32_t)(0xdu));
  /* 10203da1 call 0x10204f3a */
  push32(0x10203da6u); f_10204f3a();
  /* 10203da6 pop ecx */
  ECX = (pop32());
  /* 10203da7 ret  */
  ESPCHK(0x10203d9fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003da8 @ 0x10203da8 (9 bytes, 4 insns) */
void f_10203da8(void) {
  FTRACE(0x10203da8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203da8 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10203daa call 0x10204f9b */
  push32(0x10203dafu); f_10204f9b();
  /* 10203daf pop ecx */
  ECX = (pop32());
  /* 10203db0 ret  */
  ESPCHK(0x10203da8u, _esp0);
  ESP += 4; return;
}

/* FUN_10003db1 @ 0x10203db1 (26 bytes, 12 insns) */
void f_10203db1(void) {
  FTRACE(0x10203db1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203db1 push esi */
  push32((uint32_t)(ESI));
  /* 10203db2 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10203db6:;
  /* 10203db6 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203dba jae 0x10203dc9 */
  if (!C.cf) goto L_10203dc9;
  /* 10203dbc mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10203dbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203dc0 je 0x10203dc4 */
  if (C.zf) goto L_10203dc4;
  /* 10203dc2 call eax */
  call_ind((uint32_t)(EAX), 0x10203dc4u);
L_10203dc4:;
  /* 10203dc4 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10203dc7 jmp 0x10203db6 */
  goto L_10203db6;
L_10203dc9:;
  /* 10203dc9 pop esi */
  ESI = (pop32());
  /* 10203dca ret  */
  ESPCHK(0x10203db1u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dcb @ 0x10203dcb (84 bytes, 32 insns) */
void f_10203dcb(void) {
  FTRACE(0x10203dcbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203dcb push esi */
  push32((uint32_t)(ESI));
  /* 10203dcc call 0x10204ea5 */
  push32(0x10203dd1u); f_10204ea5();
  /* 10203dd1 call dword ptr [0x1020802c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020802c))), 0x10203dd7u);
  /* 10203dd7 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203dda mov dword ptr [0x10209d88], eax */
  w32((uint32_t)(0x10209d88), (EAX));
  /* 10203ddf je 0x10203e1b */
  if (C.zf) goto L_10203e1b;
  /* 10203de1 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10203de3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10203de5 call 0x10204fb0 */
  push32(0x10203deau); f_10204fb0();
  /* 10203dea mov esi, eax */
  ESI = (EAX);
  /* 10203dec pop ecx */
  ECX = (pop32());
  /* 10203ded test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10203def pop ecx */
  ECX = (pop32());
  /* 10203df0 je 0x10203e1b */
  if (C.zf) goto L_10203e1b;
  /* 10203df2 push esi */
  push32((uint32_t)(ESI));
  /* 10203df3 push dword ptr [0x10209d88] */
  push32((uint32_t)(r32((uint32_t)(0x10209d88))));
  /* 10203df9 call dword ptr [0x10208028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208028))), 0x10203dffu);
  /* 10203dff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203e01 je 0x10203e1b */
  if (C.zf) goto L_10203e1b;
  /* 10203e03 push esi */
  push32((uint32_t)(ESI));
  /* 10203e04 call 0x10203e3d */
  push32(0x10203e09u); f_10203e3d();
  /* 10203e09 pop ecx */
  ECX = (pop32());
  /* 10203e0a call dword ptr [0x10208024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208024))), 0x10203e10u);
  /* 10203e10 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10203e14 push 1 */
  push32((uint32_t)(0x1u));
  /* 10203e16 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10203e18 pop eax */
  EAX = (pop32());
  /* 10203e19 pop esi */
  ESI = (pop32());
  /* 10203e1a ret  */
  ESPCHK(0x10203dcbu, _esp0);
  ESP += 4; return;
L_10203e1b:;
  /* 10203e1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10203e1d pop esi */
  ESI = (pop32());
  /* 10203e1e ret  */
  ESPCHK(0x10203dcbu, _esp0);
  ESP += 4; return;
}

/* FUN_10003e1f @ 0x10203e1f (30 bytes, 8 insns) */
void f_10203e1f(void) {
  FTRACE(0x10203e1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203e1f call 0x10204ece */
  push32(0x10203e24u); f_10204ece();
  /* 10203e24 mov eax, dword ptr [0x10209d88] */
  EAX = (r32((uint32_t)(0x10209d88)));
  /* 10203e29 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203e2c je 0x10203e3c */
  if (C.zf) goto L_10203e3c;
  /* 10203e2e push eax */
  push32((uint32_t)(EAX));
  /* 10203e2f call dword ptr [0x10208030] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208030))), 0x10203e35u);
  /* 10203e35 or dword ptr [0x10209d88], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10209d88)))|(0xffffffffu); w32((uint32_t)(0x10209d88), (_r)); fl_logic(_r,32); }
L_10203e3c:;
  /* 10203e3c ret  */
  ESPCHK(0x10203e1fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003e3d @ 0x10203e3d (19 bytes, 4 insns) */
void f_10203e3d(void) {
  FTRACE(0x10203e3du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203e3d mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10203e41 mov dword ptr [eax + 0x50], 0x1020a3c0 */
  w32((uint32_t)(EAX + 0x50), (0x1020a3c0u));
  /* 10203e48 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10203e4f ret  */
  ESPCHK(0x10203e3du, _esp0);
  ESP += 4; return;
}

/* FUN_10003e50 @ 0x10203e50 (103 bytes, 38 insns) */
void f_10203e50(void) {
  FTRACE(0x10203e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203e50 push esi */
  push32((uint32_t)(ESI));
  /* 10203e51 push edi */
  push32((uint32_t)(EDI));
  /* 10203e52 call dword ptr [0x1020803c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020803c))), 0x10203e58u);
  /* 10203e58 push dword ptr [0x10209d88] */
  push32((uint32_t)(r32((uint32_t)(0x10209d88))));
  /* 10203e5e mov edi, eax */
  EDI = (EAX);
  /* 10203e60 call dword ptr [0x10208038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208038))), 0x10203e66u);
  /* 10203e66 mov esi, eax */
  ESI = (EAX);
  /* 10203e68 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10203e6a jne 0x10203eab */
  if (!C.zf) goto L_10203eab;
  /* 10203e6c push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10203e6e push 1 */
  push32((uint32_t)(0x1u));
  /* 10203e70 call 0x10204fb0 */
  push32(0x10203e75u); f_10204fb0();
  /* 10203e75 mov esi, eax */
  ESI = (EAX);
  /* 10203e77 pop ecx */
  ECX = (pop32());
  /* 10203e78 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10203e7a pop ecx */
  ECX = (pop32());
  /* 10203e7b je 0x10203ea3 */
  if (C.zf) goto L_10203ea3;
  /* 10203e7d push esi */
  push32((uint32_t)(ESI));
  /* 10203e7e push dword ptr [0x10209d88] */
  push32((uint32_t)(r32((uint32_t)(0x10209d88))));
  /* 10203e84 call dword ptr [0x10208028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208028))), 0x10203e8au);
  /* 10203e8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203e8c je 0x10203ea3 */
  if (C.zf) goto L_10203ea3;
  /* 10203e8e push esi */
  push32((uint32_t)(ESI));
  /* 10203e8f call 0x10203e3d */
  push32(0x10203e94u); f_10203e3d();
  /* 10203e94 pop ecx */
  ECX = (pop32());
  /* 10203e95 call dword ptr [0x10208024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208024))), 0x10203e9bu);
  /* 10203e9b or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10203e9f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10203ea1 jmp 0x10203eab */
  goto L_10203eab;
L_10203ea3:;
  /* 10203ea3 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10203ea5 call 0x10203358 */
  push32(0x10203eaau); f_10203358();
  /* 10203eaa pop ecx */
  ECX = (pop32());
L_10203eab:;
  /* 10203eab push edi */
  push32((uint32_t)(EDI));
  /* 10203eac call dword ptr [0x10208034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208034))), 0x10203eb2u);
  /* 10203eb2 mov eax, esi */
  EAX = (ESI);
  /* 10203eb4 pop edi */
  EDI = (pop32());
  /* 10203eb5 pop esi */
  ESI = (pop32());
  /* 10203eb6 ret  */
  ESPCHK(0x10203e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003eb7 @ 0x10203eb7 (160 bytes, 62 insns) */
void f_10203eb7(void) {
  FTRACE(0x10203eb7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203eb7 mov eax, dword ptr [0x10209d88] */
  EAX = (r32((uint32_t)(0x10209d88)));
  /* 10203ebc cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203ebf je 0x10203f56 */
  if (C.zf) goto L_10203f56;
  /* 10203ec5 push esi */
  push32((uint32_t)(ESI));
  /* 10203ec6 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10203eca test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10203ecc jne 0x10203edb */
  if (!C.zf) goto L_10203edb;
  /* 10203ece push eax */
  push32((uint32_t)(EAX));
  /* 10203ecf call dword ptr [0x10208038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208038))), 0x10203ed5u);
  /* 10203ed5 mov esi, eax */
  ESI = (EAX);
  /* 10203ed7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10203ed9 je 0x10203f47 */
  if (C.zf) goto L_10203f47;
L_10203edb:;
  /* 10203edb mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10203ede test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203ee0 je 0x10203ee9 */
  if (C.zf) goto L_10203ee9;
  /* 10203ee2 push eax */
  push32((uint32_t)(EAX));
  /* 10203ee3 call 0x1020503d */
  push32(0x10203ee8u); f_1020503d();
  /* 10203ee8 pop ecx */
  ECX = (pop32());
L_10203ee9:;
  /* 10203ee9 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10203eec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203eee je 0x10203ef7 */
  if (C.zf) goto L_10203ef7;
  /* 10203ef0 push eax */
  push32((uint32_t)(EAX));
  /* 10203ef1 call 0x1020503d */
  push32(0x10203ef6u); f_1020503d();
  /* 10203ef6 pop ecx */
  ECX = (pop32());
L_10203ef7:;
  /* 10203ef7 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 10203efa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203efc je 0x10203f05 */
  if (C.zf) goto L_10203f05;
  /* 10203efe push eax */
  push32((uint32_t)(EAX));
  /* 10203eff call 0x1020503d */
  push32(0x10203f04u); f_1020503d();
  /* 10203f04 pop ecx */
  ECX = (pop32());
L_10203f05:;
  /* 10203f05 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10203f08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203f0a je 0x10203f13 */
  if (C.zf) goto L_10203f13;
  /* 10203f0c push eax */
  push32((uint32_t)(EAX));
  /* 10203f0d call 0x1020503d */
  push32(0x10203f12u); f_1020503d();
  /* 10203f12 pop ecx */
  ECX = (pop32());
L_10203f13:;
  /* 10203f13 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 10203f16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203f18 je 0x10203f21 */
  if (C.zf) goto L_10203f21;
  /* 10203f1a push eax */
  push32((uint32_t)(EAX));
  /* 10203f1b call 0x1020503d */
  push32(0x10203f20u); f_1020503d();
  /* 10203f20 pop ecx */
  ECX = (pop32());
L_10203f21:;
  /* 10203f21 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 10203f24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203f26 je 0x10203f2f */
  if (C.zf) goto L_10203f2f;
  /* 10203f28 push eax */
  push32((uint32_t)(EAX));
  /* 10203f29 call 0x1020503d */
  push32(0x10203f2eu); f_1020503d();
  /* 10203f2e pop ecx */
  ECX = (pop32());
L_10203f2f:;
  /* 10203f2f mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 10203f32 cmp eax, 0x1020a3c0 */
  { uint32_t _a=(EAX),_b=(0x1020a3c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203f37 je 0x10203f40 */
  if (C.zf) goto L_10203f40;
  /* 10203f39 push eax */
  push32((uint32_t)(EAX));
  /* 10203f3a call 0x1020503d */
  push32(0x10203f3fu); f_1020503d();
  /* 10203f3f pop ecx */
  ECX = (pop32());
L_10203f40:;
  /* 10203f40 push esi */
  push32((uint32_t)(ESI));
  /* 10203f41 call 0x1020503d */
  push32(0x10203f46u); f_1020503d();
  /* 10203f46 pop ecx */
  ECX = (pop32());
L_10203f47:;
  /* 10203f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10203f49 push dword ptr [0x10209d88] */
  push32((uint32_t)(r32((uint32_t)(0x10209d88))));
  /* 10203f4f call dword ptr [0x10208028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208028))), 0x10203f55u);
  /* 10203f55 pop esi */
  ESI = (pop32());
L_10203f56:;
  /* 10203f56 ret  */
  ESPCHK(0x10203eb7u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f57 @ 0x10203f57 (444 bytes, 150 insns) */
void f_10203f57(void) {
  FTRACE(0x10203f57u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10203f57 push ebp */
  push32((uint32_t)(EBP));
  /* 10203f58 mov ebp, esp */
  EBP = (ESP);
  /* 10203f5a sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10203f5d push ebx */
  push32((uint32_t)(EBX));
  /* 10203f5e push esi */
  push32((uint32_t)(ESI));
  /* 10203f5f push edi */
  push32((uint32_t)(EDI));
  /* 10203f60 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10203f65 call 0x10205085 */
  push32(0x10203f6au); f_10205085();
  /* 10203f6a mov esi, eax */
  ESI = (EAX);
  /* 10203f6c pop ecx */
  ECX = (pop32());
  /* 10203f6d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10203f6f jne 0x10203f79 */
  if (!C.zf) goto L_10203f79;
  /* 10203f71 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10203f73 call 0x10203358 */
  push32(0x10203f78u); f_10203358();
  /* 10203f78 pop ecx */
  ECX = (pop32());
L_10203f79:;
  /* 10203f79 mov dword ptr [0x1020c560], esi */
  w32((uint32_t)(0x1020c560), (ESI));
  /* 10203f7f mov dword ptr [0x1020c660], 0x20 */
  w32((uint32_t)(0x1020c660), (0x20u));
  /* 10203f89 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10203f8f:;
  /* 10203f8f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203f91 jae 0x10203fb1 */
  if (!C.cf) goto L_10203fb1;
  /* 10203f93 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10203f97 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10203f9a and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10203f9e mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 10203fa2 mov eax, dword ptr [0x1020c560] */
  EAX = (r32((uint32_t)(0x1020c560)));
  /* 10203fa7 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10203faa add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10203faf jmp 0x10203f8f */
  goto L_10203f8f;
L_10203fb1:;
  /* 10203fb1 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10203fb4 push eax */
  push32((uint32_t)(EAX));
  /* 10203fb5 call dword ptr [0x1020804c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020804c))), 0x10203fbbu);
  /* 10203fbb cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10203fc0 je 0x10204097 */
  if (C.zf) goto L_10204097;
  /* 10203fc6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10203fc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10203fcb je 0x10204097 */
  if (C.zf) goto L_10204097;
  /* 10203fd1 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 10203fd3 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 10203fd6 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 10203fd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10203fdc mov eax, 0x800 */
  EAX = (0x800u);
  /* 10203fe1 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203fe3 jl 0x10203fe7 */
  if ((C.sf!=C.of)) goto L_10203fe7;
  /* 10203fe5 mov edi, eax */
  EDI = (EAX);
L_10203fe7:;
  /* 10203fe7 cmp dword ptr [0x1020c660], edi */
  { uint32_t _a=(r32((uint32_t)(0x1020c660))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10203fed jge 0x10204045 */
  if ((C.sf==C.of)) goto L_10204045;
  /* 10203fef mov esi, 0x1020c564 */
  ESI = (0x1020c564u);
L_10203ff4:;
  /* 10203ff4 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10203ff9 call 0x10205085 */
  push32(0x10203ffeu); f_10205085();
  /* 10203ffe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10204000 pop ecx */
  ECX = (pop32());
  /* 10204001 je 0x1020403f */
  if (C.zf) goto L_1020403f;
  /* 10204003 add dword ptr [0x1020c660], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x1020c660))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x1020c660), (_r)); fl_add(_a,_b,_r,32); }
  /* 1020400a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1020400c lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_10204012:;
  /* 10204012 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204014 jae 0x10204032 */
  if (!C.cf) goto L_10204032;
  /* 10204016 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 1020401a or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1020401d and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10204021 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 10204025 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10204027 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1020402a add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10204030 jmp 0x10204012 */
  goto L_10204012;
L_10204032:;
  /* 10204032 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10204035 cmp dword ptr [0x1020c660], edi */
  { uint32_t _a=(r32((uint32_t)(0x1020c660))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020403b jl 0x10203ff4 */
  if ((C.sf!=C.of)) goto L_10203ff4;
  /* 1020403d jmp 0x10204045 */
  goto L_10204045;
L_1020403f:;
  /* 1020403f mov edi, dword ptr [0x1020c660] */
  EDI = (r32((uint32_t)(0x1020c660)));
L_10204045:;
  /* 10204045 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10204047 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10204049 jle 0x10204097 */
  if ((C.zf||C.sf!=C.of)) goto L_10204097;
L_1020404b:;
  /* 1020404b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1020404e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10204050 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204053 je 0x1020408d */
  if (C.zf) goto L_1020408d;
  /* 10204055 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 10204057 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10204059 je 0x1020408d */
  if (C.zf) goto L_1020408d;
  /* 1020405b test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1020405d jne 0x1020406a */
  if (!C.zf) goto L_1020406a;
  /* 1020405f push ecx */
  push32((uint32_t)(ECX));
  /* 10204060 call dword ptr [0x10208048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208048))), 0x10204066u);
  /* 10204066 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10204068 je 0x1020408d */
  if (C.zf) goto L_1020408d;
L_1020406a:;
  /* 1020406a mov ecx, esi */
  ECX = (ESI);
  /* 1020406c mov eax, esi */
  EAX = (ESI);
  /* 1020406e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10204071 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10204074 mov ecx, dword ptr [ecx*4 + 0x1020c560] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1020c560)));
  /* 1020407b lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1020407e lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10204081 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10204084 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 10204086 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10204088 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 1020408a mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_1020408d:;
  /* 1020408d add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10204091 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10204092 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10204093 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204095 jl 0x1020404b */
  if ((C.sf!=C.of)) goto L_1020404b;
L_10204097:;
  /* 10204097 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10204099:;
  /* 10204099 mov ecx, dword ptr [0x1020c560] */
  ECX = (r32((uint32_t)(0x1020c560)));
  /* 1020409f lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 102040a2 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102040a6 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 102040a9 jne 0x102040f8 */
  if (!C.zf) goto L_102040f8;
  /* 102040ab test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102040ad mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 102040b1 jne 0x102040b8 */
  if (!C.zf) goto L_102040b8;
  /* 102040b3 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 102040b5 pop eax */
  EAX = (pop32());
  /* 102040b6 jmp 0x102040c2 */
  goto L_102040c2;
L_102040b8:;
  /* 102040b8 mov eax, ebx */
  EAX = (EBX);
  /* 102040ba dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102040bb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102040bd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102040bf add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_102040c2:;
  /* 102040c2 push eax */
  push32((uint32_t)(EAX));
  /* 102040c3 call dword ptr [0x10208044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208044))), 0x102040c9u);
  /* 102040c9 mov edi, eax */
  EDI = (EAX);
  /* 102040cb cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102040ce je 0x102040e7 */
  if (C.zf) goto L_102040e7;
  /* 102040d0 push edi */
  push32((uint32_t)(EDI));
  /* 102040d1 call dword ptr [0x10208048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208048))), 0x102040d7u);
  /* 102040d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102040d9 je 0x102040e7 */
  if (C.zf) goto L_102040e7;
  /* 102040db and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102040e0 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102040e2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102040e5 jne 0x102040ed */
  if (!C.zf) goto L_102040ed;
L_102040e7:;
  /* 102040e7 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102040eb jmp 0x102040fc */
  goto L_102040fc;
L_102040ed:;
  /* 102040ed cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102040f0 jne 0x102040fc */
  if (!C.zf) goto L_102040fc;
  /* 102040f2 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102040f6 jmp 0x102040fc */
  goto L_102040fc;
L_102040f8:;
  /* 102040f8 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_102040fc:;
  /* 102040fc inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102040fd cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204100 jl 0x10204099 */
  if ((C.sf!=C.of)) goto L_10204099;
  /* 10204102 push dword ptr [0x1020c660] */
  push32((uint32_t)(r32((uint32_t)(0x1020c660))));
  /* 10204108 call dword ptr [0x10208040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208040))), 0x1020410eu);
  /* 1020410e pop edi */
  EDI = (pop32());
  /* 1020410f pop esi */
  ESI = (pop32());
  /* 10204110 pop ebx */
  EBX = (pop32());
  /* 10204111 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10204112 ret  */
  ESPCHK(0x10203f57u, _esp0);
  ESP += 4; return;
}

/* FUN_10004113 @ 0x10204113 (84 bytes, 33 insns) */
void f_10204113(void) {
  FTRACE(0x10204113u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204113 push ebx */
  push32((uint32_t)(EBX));
  /* 10204114 push esi */
  push32((uint32_t)(ESI));
  /* 10204115 push edi */
  push32((uint32_t)(EDI));
  /* 10204116 mov esi, 0x1020c560 */
  ESI = (0x1020c560u);
L_1020411b:;
  /* 1020411b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1020411d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020411f je 0x10204158 */
  if (C.zf) goto L_10204158;
  /* 10204121 mov edi, eax */
  EDI = (EAX);
  /* 10204123 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10204128 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020412a jae 0x1020414d */
  if (!C.cf) goto L_1020414d;
  /* 1020412c lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_1020412f:;
  /* 1020412f cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204133 je 0x1020413c */
  if (C.zf) goto L_1020413c;
  /* 10204135 push ebx */
  push32((uint32_t)(EBX));
  /* 10204136 call dword ptr [0x10208050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208050))), 0x1020413cu);
L_1020413c:;
  /* 1020413c mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1020413e add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10204141 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10204146 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10204149 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020414b jb 0x1020412f */
  if (C.cf) goto L_1020412f;
L_1020414d:;
  /* 1020414d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1020414f call 0x1020503d */
  push32(0x10204154u); f_1020503d();
  /* 10204154 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10204157 pop ecx */
  ECX = (pop32());
L_10204158:;
  /* 10204158 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1020415b cmp esi, 0x1020c660 */
  { uint32_t _a=(ESI),_b=(0x1020c660u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204161 jl 0x1020411b */
  if ((C.sf!=C.of)) goto L_1020411b;
  /* 10204163 pop edi */
  EDI = (pop32());
  /* 10204164 pop esi */
  ESI = (pop32());
  /* 10204165 pop ebx */
  EBX = (pop32());
  /* 10204166 ret  */
  ESPCHK(0x10204113u, _esp0);
  ESP += 4; return;
}

/* FUN_10004167 @ 0x10204167 (185 bytes, 71 insns) */
void f_10204167(void) {
  FTRACE(0x10204167u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204167 push ebx */
  push32((uint32_t)(EBX));
  /* 10204168 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1020416a cmp dword ptr [0x1020c668], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1020c668))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204170 push esi */
  push32((uint32_t)(ESI));
  /* 10204171 push edi */
  push32((uint32_t)(EDI));
  /* 10204172 jne 0x10204179 */
  if (!C.zf) goto L_10204179;
  /* 10204174 call 0x102055e8 */
  push32(0x10204179u); f_102055e8();
L_10204179:;
  /* 10204179 mov esi, dword ptr [0x1020af9c] */
  ESI = (r32((uint32_t)(0x1020af9c)));
  /* 1020417f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10204181:;
  /* 10204181 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10204183 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10204185 je 0x10204199 */
  if (C.zf) goto L_10204199;
  /* 10204187 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10204189 je 0x1020418c */
  if (C.zf) goto L_1020418c;
  /* 1020418b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1020418c:;
  /* 1020418c push esi */
  push32((uint32_t)(ESI));
  /* 1020418d call 0x10204c80 */
  push32(0x10204192u); f_10204c80();
  /* 10204192 pop ecx */
  ECX = (pop32());
  /* 10204193 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 10204197 jmp 0x10204181 */
  goto L_10204181;
L_10204199:;
  /* 10204199 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 102041a0 push eax */
  push32((uint32_t)(EAX));
  /* 102041a1 call 0x10205085 */
  push32(0x102041a6u); f_10205085();
  /* 102041a6 mov esi, eax */
  ESI = (EAX);
  /* 102041a8 pop ecx */
  ECX = (pop32());
  /* 102041a9 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102041ab mov dword ptr [0x1020afcc], esi */
  w32((uint32_t)(0x1020afcc), (ESI));
  /* 102041b1 jne 0x102041bb */
  if (!C.zf) goto L_102041bb;
  /* 102041b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 102041b5 call 0x10203358 */
  push32(0x102041bau); f_10203358();
  /* 102041ba pop ecx */
  ECX = (pop32());
L_102041bb:;
  /* 102041bb mov edi, dword ptr [0x1020af9c] */
  EDI = (r32((uint32_t)(0x1020af9c)));
  /* 102041c1 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102041c3 je 0x102041fe */
  if (C.zf) goto L_102041fe;
  /* 102041c5 push ebp */
  push32((uint32_t)(EBP));
L_102041c6:;
  /* 102041c6 push edi */
  push32((uint32_t)(EDI));
  /* 102041c7 call 0x10204c80 */
  push32(0x102041ccu); f_10204c80();
  /* 102041cc mov ebp, eax */
  EBP = (EAX);
  /* 102041ce pop ecx */
  ECX = (pop32());
  /* 102041cf inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 102041d0 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102041d3 je 0x102041f7 */
  if (C.zf) goto L_102041f7;
  /* 102041d5 push ebp */
  push32((uint32_t)(EBP));
  /* 102041d6 call 0x10205085 */
  push32(0x102041dbu); f_10205085();
  /* 102041db cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102041dd pop ecx */
  ECX = (pop32());
  /* 102041de mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102041e0 jne 0x102041ea */
  if (!C.zf) goto L_102041ea;
  /* 102041e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 102041e4 call 0x10203358 */
  push32(0x102041e9u); f_10203358();
  /* 102041e9 pop ecx */
  ECX = (pop32());
L_102041ea:;
  /* 102041ea push edi */
  push32((uint32_t)(EDI));
  /* 102041eb push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102041ed call 0x10205120 */
  push32(0x102041f2u); f_10205120();
  /* 102041f2 pop ecx */
  ECX = (pop32());
  /* 102041f3 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102041f6 pop ecx */
  ECX = (pop32());
L_102041f7:;
  /* 102041f7 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102041f9 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102041fb jne 0x102041c6 */
  if (!C.zf) goto L_102041c6;
  /* 102041fd pop ebp */
  EBP = (pop32());
L_102041fe:;
  /* 102041fe push dword ptr [0x1020af9c] */
  push32((uint32_t)(r32((uint32_t)(0x1020af9c))));
  /* 10204204 call 0x1020503d */
  push32(0x10204209u); f_1020503d();
  /* 10204209 pop ecx */
  ECX = (pop32());
  /* 1020420a mov dword ptr [0x1020af9c], ebx */
  w32((uint32_t)(0x1020af9c), (EBX));
  /* 10204210 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 10204212 pop edi */
  EDI = (pop32());
  /* 10204213 pop esi */
  ESI = (pop32());
  /* 10204214 mov dword ptr [0x1020c664], 1 */
  w32((uint32_t)(0x1020c664), (0x1u));
  /* 1020421e pop ebx */
  EBX = (pop32());
  /* 1020421f ret  */
  ESPCHK(0x10204167u, _esp0);
  ESP += 4; return;
}

/* FUN_10004220 @ 0x10204220 (153 bytes, 62 insns) */
void f_10204220(void) {
  FTRACE(0x10204220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204220 push ebp */
  push32((uint32_t)(EBP));
  /* 10204221 mov ebp, esp */
  EBP = (ESP);
  /* 10204223 push ecx */
  push32((uint32_t)(ECX));
  /* 10204224 push ecx */
  push32((uint32_t)(ECX));
  /* 10204225 push ebx */
  push32((uint32_t)(EBX));
  /* 10204226 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10204228 cmp dword ptr [0x1020c668], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1020c668))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020422e push esi */
  push32((uint32_t)(ESI));
  /* 1020422f push edi */
  push32((uint32_t)(EDI));
  /* 10204230 jne 0x10204237 */
  if (!C.zf) goto L_10204237;
  /* 10204232 call 0x102055e8 */
  push32(0x10204237u); f_102055e8();
L_10204237:;
  /* 10204237 mov esi, 0x1020aff0 */
  ESI = (0x1020aff0u);
  /* 1020423c push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10204241 push esi */
  push32((uint32_t)(ESI));
  /* 10204242 push ebx */
  push32((uint32_t)(EBX));
  /* 10204243 call dword ptr [0x10208054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208054))), 0x10204249u);
  /* 10204249 mov eax, dword ptr [0x1020c678] */
  EAX = (r32((uint32_t)(0x1020c678)));
  /* 1020424e mov dword ptr [0x1020afdc], esi */
  w32((uint32_t)(0x1020afdc), (ESI));
  /* 10204254 mov edi, esi */
  EDI = (ESI);
  /* 10204256 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10204258 je 0x1020425c */
  if (C.zf) goto L_1020425c;
  /* 1020425a mov edi, eax */
  EDI = (EAX);
L_1020425c:;
  /* 1020425c lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1020425f push eax */
  push32((uint32_t)(EAX));
  /* 10204260 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10204263 push eax */
  push32((uint32_t)(EAX));
  /* 10204264 push ebx */
  push32((uint32_t)(EBX));
  /* 10204265 push ebx */
  push32((uint32_t)(EBX));
  /* 10204266 push edi */
  push32((uint32_t)(EDI));
  /* 10204267 call 0x102042b9 */
  push32(0x1020426cu); f_102042b9();
  /* 1020426c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1020426f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10204272 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 10204275 push eax */
  push32((uint32_t)(EAX));
  /* 10204276 call 0x10205085 */
  push32(0x1020427bu); f_10205085();
  /* 1020427b mov esi, eax */
  ESI = (EAX);
  /* 1020427d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10204280 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204282 jne 0x1020428c */
  if (!C.zf) goto L_1020428c;
  /* 10204284 push 8 */
  push32((uint32_t)(0x8u));
  /* 10204286 call 0x10203358 */
  push32(0x1020428bu); f_10203358();
  /* 1020428b pop ecx */
  ECX = (pop32());
L_1020428c:;
  /* 1020428c lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1020428f push eax */
  push32((uint32_t)(EAX));
  /* 10204290 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10204293 push eax */
  push32((uint32_t)(EAX));
  /* 10204294 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10204297 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 1020429a push eax */
  push32((uint32_t)(EAX));
  /* 1020429b push esi */
  push32((uint32_t)(ESI));
  /* 1020429c push edi */
  push32((uint32_t)(EDI));
  /* 1020429d call 0x102042b9 */
  push32(0x102042a2u); f_102042b9();
  /* 102042a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102042a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102042a8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102042a9 mov dword ptr [0x1020afc4], esi */
  w32((uint32_t)(0x1020afc4), (ESI));
  /* 102042af pop edi */
  EDI = (pop32());
  /* 102042b0 pop esi */
  ESI = (pop32());
  /* 102042b1 mov dword ptr [0x1020afc0], eax */
  w32((uint32_t)(0x1020afc0), (EAX));
  /* 102042b6 pop ebx */
  EBX = (pop32());
  /* 102042b7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102042b8 ret  */
  ESPCHK(0x10204220u, _esp0);
  ESP += 4; return;
}

/* FUN_100042b9 @ 0x102042b9 (436 bytes, 187 insns) */
void f_102042b9(void) {
  FTRACE(0x102042b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102042b9 push ebp */
  push32((uint32_t)(EBP));
  /* 102042ba mov ebp, esp */
  EBP = (ESP);
  /* 102042bc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 102042bf mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102042c2 push ebx */
  push32((uint32_t)(EBX));
  /* 102042c3 push esi */
  push32((uint32_t)(ESI));
  /* 102042c4 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102042c7 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 102042ca push edi */
  push32((uint32_t)(EDI));
  /* 102042cb mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 102042ce mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 102042d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102042d7 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102042d9 je 0x102042e3 */
  if (C.zf) goto L_102042e3;
  /* 102042db mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 102042dd add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102042e0 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_102042e3:;
  /* 102042e3 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102042e6 jne 0x1020432c */
  if (!C.zf) goto L_1020432c;
L_102042e8:;
  /* 102042e8 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 102042eb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102042ec cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102042ef je 0x1020431a */
  if (C.zf) goto L_1020431a;
  /* 102042f1 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102042f3 je 0x1020431a */
  if (C.zf) goto L_1020431a;
  /* 102042f5 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 102042f8 test byte ptr [edx + 0x1020b421], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x1020b421)))&(0x4u); fl_logic(_r,8); }
  /* 102042ff je 0x1020430d */
  if (C.zf) goto L_1020430d;
  /* 10204301 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10204303 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10204305 je 0x1020430d */
  if (C.zf) goto L_1020430d;
  /* 10204307 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10204309 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1020430b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1020430c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1020430d:;
  /* 1020430d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1020430f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10204311 je 0x102042e8 */
  if (C.zf) goto L_102042e8;
  /* 10204313 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10204315 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10204317 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10204318 jmp 0x102042e8 */
  goto L_102042e8;
L_1020431a:;
  /* 1020431a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1020431c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1020431e je 0x10204324 */
  if (C.zf) goto L_10204324;
  /* 10204320 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10204323 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10204324:;
  /* 10204324 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10204327 jne 0x1020436f */
  if (!C.zf) goto L_1020436f;
  /* 10204329 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1020432a jmp 0x1020436f */
  goto L_1020436f;
L_1020432c:;
  /* 1020432c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1020432e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10204330 je 0x10204337 */
  if (C.zf) goto L_10204337;
  /* 10204332 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10204334 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10204336 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10204337:;
  /* 10204337 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10204339 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1020433a movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 1020433d test byte ptr [ebx + 0x1020b421], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x1020b421)))&(0x4u); fl_logic(_r,8); }
  /* 10204344 je 0x10204352 */
  if (C.zf) goto L_10204352;
  /* 10204346 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10204348 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1020434a je 0x10204351 */
  if (C.zf) goto L_10204351;
  /* 1020434c mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1020434e mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10204350 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10204351:;
  /* 10204351 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10204352:;
  /* 10204352 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10204355 je 0x10204360 */
  if (C.zf) goto L_10204360;
  /* 10204357 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10204359 je 0x10204364 */
  if (C.zf) goto L_10204364;
  /* 1020435b cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1020435e jne 0x1020432c */
  if (!C.zf) goto L_1020432c;
L_10204360:;
  /* 10204360 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10204362 jne 0x10204367 */
  if (!C.zf) goto L_10204367;
L_10204364:;
  /* 10204364 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10204365 jmp 0x1020436f */
  goto L_1020436f;
L_10204367:;
  /* 10204367 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10204369 je 0x1020436f */
  if (C.zf) goto L_1020436f;
  /* 1020436b and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_1020436f:;
  /* 1020436f and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_10204373:;
  /* 10204373 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10204376 je 0x1020445c */
  if (C.zf) goto L_1020445c;
L_1020437c:;
  /* 1020437c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1020437e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10204381 je 0x10204388 */
  if (C.zf) goto L_10204388;
  /* 10204383 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10204386 jne 0x1020438b */
  if (!C.zf) goto L_1020438b;
L_10204388:;
  /* 10204388 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10204389 jmp 0x1020437c */
  goto L_1020437c;
L_1020438b:;
  /* 1020438b cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1020438e je 0x1020445c */
  if (C.zf) goto L_1020445c;
  /* 10204394 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10204396 je 0x102043a0 */
  if (C.zf) goto L_102043a0;
  /* 10204398 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 1020439a add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1020439d mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_102043a0:;
  /* 102043a0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 102043a3 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_102043a5:;
  /* 102043a5 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 102043ac xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102043ae:;
  /* 102043ae cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102043b1 jne 0x102043b7 */
  if (!C.zf) goto L_102043b7;
  /* 102043b3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102043b4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102043b5 jmp 0x102043ae */
  goto L_102043ae;
L_102043b7:;
  /* 102043b7 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102043ba jne 0x102043e8 */
  if (!C.zf) goto L_102043e8;
  /* 102043bc test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 102043bf jne 0x102043e6 */
  if (!C.zf) goto L_102043e6;
  /* 102043c1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102043c3 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102043c6 je 0x102043d5 */
  if (C.zf) goto L_102043d5;
  /* 102043c8 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102043cc lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 102043cf jne 0x102043d5 */
  if (!C.zf) goto L_102043d5;
  /* 102043d1 mov eax, edx */
  EAX = (EDX);
  /* 102043d3 jmp 0x102043d8 */
  goto L_102043d8;
L_102043d5:;
  /* 102043d5 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_102043d8:;
  /* 102043d8 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 102043db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102043dd cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102043e0 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 102043e3 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_102043e6:;
  /* 102043e6 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_102043e8:;
  /* 102043e8 mov edx, ebx */
  EDX = (EBX);
  /* 102043ea dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102043eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102043ed je 0x102043fd */
  if (C.zf) goto L_102043fd;
  /* 102043ef inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_102043f0:;
  /* 102043f0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102043f2 je 0x102043f8 */
  if (C.zf) goto L_102043f8;
  /* 102043f4 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 102043f7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102043f8:;
  /* 102043f8 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102043fa dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102043fb jne 0x102043f0 */
  if (!C.zf) goto L_102043f0;
L_102043fd:;
  /* 102043fd mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102043ff test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10204401 je 0x1020444d */
  if (C.zf) goto L_1020444d;
  /* 10204403 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204407 jne 0x10204413 */
  if (!C.zf) goto L_10204413;
  /* 10204409 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1020440c je 0x1020444d */
  if (C.zf) goto L_1020444d;
  /* 1020440e cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10204411 je 0x1020444d */
  if (C.zf) goto L_1020444d;
L_10204413:;
  /* 10204413 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204417 je 0x10204447 */
  if (C.zf) goto L_10204447;
  /* 10204419 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1020441b je 0x10204436 */
  if (C.zf) goto L_10204436;
  /* 1020441d movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10204420 test byte ptr [ebx + 0x1020b421], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x1020b421)))&(0x4u); fl_logic(_r,8); }
  /* 10204427 je 0x1020442f */
  if (C.zf) goto L_1020442f;
  /* 10204429 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1020442b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1020442c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1020442d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1020442f:;
  /* 1020442f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10204431 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10204433 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10204434 jmp 0x10204445 */
  goto L_10204445;
L_10204436:;
  /* 10204436 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10204439 test byte ptr [edx + 0x1020b421], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x1020b421)))&(0x4u); fl_logic(_r,8); }
  /* 10204440 je 0x10204445 */
  if (C.zf) goto L_10204445;
  /* 10204442 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10204443 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10204445:;
  /* 10204445 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10204447:;
  /* 10204447 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10204448 jmp 0x102043a5 */
  goto L_102043a5;
L_1020444d:;
  /* 1020444d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1020444f je 0x10204455 */
  if (C.zf) goto L_10204455;
  /* 10204451 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10204454 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10204455:;
  /* 10204455 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10204457 jmp 0x10204373 */
  goto L_10204373;
L_1020445c:;
  /* 1020445c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1020445e je 0x10204463 */
  if (C.zf) goto L_10204463;
  /* 10204460 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10204463:;
  /* 10204463 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10204466 pop edi */
  EDI = (pop32());
  /* 10204467 pop esi */
  ESI = (pop32());
  /* 10204468 pop ebx */
  EBX = (pop32());
  /* 10204469 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 1020446b pop ebp */
  EBP = (pop32());
  /* 1020446c ret  */
  ESPCHK(0x102042b9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000446d @ 0x1020446d (306 bytes, 132 insns) */
void f_1020446d(void) {
  FTRACE(0x1020446du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1020446d push ecx */
  push32((uint32_t)(ECX));
  /* 1020446e push ecx */
  push32((uint32_t)(ECX));
  /* 1020446f mov eax, dword ptr [0x1020b0f4] */
  EAX = (r32((uint32_t)(0x1020b0f4)));
  /* 10204474 push ebx */
  push32((uint32_t)(EBX));
  /* 10204475 push ebp */
  push32((uint32_t)(EBP));
  /* 10204476 mov ebp, dword ptr [0x10208068] */
  EBP = (r32((uint32_t)(0x10208068)));
  /* 1020447c push esi */
  push32((uint32_t)(ESI));
  /* 1020447d push edi */
  push32((uint32_t)(EDI));
  /* 1020447e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10204480 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10204482 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10204484 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204486 jne 0x102044bb */
  if (!C.zf) goto L_102044bb;
  /* 10204488 call ebp */
  call_ind((uint32_t)(EBP), 0x1020448au);
  /* 1020448a mov esi, eax */
  ESI = (EAX);
  /* 1020448c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020448e je 0x1020449c */
  if (C.zf) goto L_1020449c;
  /* 10204490 mov dword ptr [0x1020b0f4], 1 */
  w32((uint32_t)(0x1020b0f4), (0x1u));
  /* 1020449a jmp 0x102044c4 */
  goto L_102044c4;
L_1020449c:;
  /* 1020449c call dword ptr [0x10208064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208064))), 0x102044a2u);
  /* 102044a2 mov edi, eax */
  EDI = (EAX);
  /* 102044a4 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102044a6 je 0x10204596 */
  if (C.zf) goto L_10204596;
  /* 102044ac mov dword ptr [0x1020b0f4], 2 */
  w32((uint32_t)(0x1020b0f4), (0x2u));
  /* 102044b6 jmp 0x1020454a */
  goto L_1020454a;
L_102044bb:;
  /* 102044bb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102044be jne 0x10204545 */
  if (!C.zf) goto L_10204545;
L_102044c4:;
  /* 102044c4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102044c6 jne 0x102044d4 */
  if (!C.zf) goto L_102044d4;
  /* 102044c8 call ebp */
  call_ind((uint32_t)(EBP), 0x102044cau);
  /* 102044ca mov esi, eax */
  ESI = (EAX);
  /* 102044cc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102044ce je 0x10204596 */
  if (C.zf) goto L_10204596;
L_102044d4:;
  /* 102044d4 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102044d7 mov eax, esi */
  EAX = (ESI);
  /* 102044d9 je 0x102044e9 */
  if (C.zf) goto L_102044e9;
L_102044db:;
  /* 102044db inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102044dc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102044dd cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102044e0 jne 0x102044db */
  if (!C.zf) goto L_102044db;
  /* 102044e2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102044e3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102044e4 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102044e7 jne 0x102044db */
  if (!C.zf) goto L_102044db;
L_102044e9:;
  /* 102044e9 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102044eb mov edi, dword ptr [0x10208060] */
  EDI = (r32((uint32_t)(0x10208060)));
  /* 102044f1 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102044f3 push ebx */
  push32((uint32_t)(EBX));
  /* 102044f4 push ebx */
  push32((uint32_t)(EBX));
  /* 102044f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102044f6 push ebx */
  push32((uint32_t)(EBX));
  /* 102044f7 push ebx */
  push32((uint32_t)(EBX));
  /* 102044f8 push eax */
  push32((uint32_t)(EAX));
  /* 102044f9 push esi */
  push32((uint32_t)(ESI));
  /* 102044fa push ebx */
  push32((uint32_t)(EBX));
  /* 102044fb push ebx */
  push32((uint32_t)(EBX));
  /* 102044fc mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10204500 call edi */
  call_ind((uint32_t)(EDI), 0x10204502u);
  /* 10204502 mov ebp, eax */
  EBP = (EAX);
  /* 10204504 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204506 je 0x1020453a */
  if (C.zf) goto L_1020453a;
  /* 10204508 push ebp */
  push32((uint32_t)(EBP));
  /* 10204509 call 0x10205085 */
  push32(0x1020450eu); f_10205085();
  /* 1020450e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204510 pop ecx */
  ECX = (pop32());
  /* 10204511 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10204515 je 0x1020453a */
  if (C.zf) goto L_1020453a;
  /* 10204517 push ebx */
  push32((uint32_t)(EBX));
  /* 10204518 push ebx */
  push32((uint32_t)(EBX));
  /* 10204519 push ebp */
  push32((uint32_t)(EBP));
  /* 1020451a push eax */
  push32((uint32_t)(EAX));
  /* 1020451b push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 1020451f push esi */
  push32((uint32_t)(ESI));
  /* 10204520 push ebx */
  push32((uint32_t)(EBX));
  /* 10204521 push ebx */
  push32((uint32_t)(EBX));
  /* 10204522 call edi */
  call_ind((uint32_t)(EDI), 0x10204524u);
  /* 10204524 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10204526 jne 0x10204536 */
  if (!C.zf) goto L_10204536;
  /* 10204528 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1020452c call 0x1020503d */
  push32(0x10204531u); f_1020503d();
  /* 10204531 pop ecx */
  ECX = (pop32());
  /* 10204532 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_10204536:;
  /* 10204536 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_1020453a:;
  /* 1020453a push esi */
  push32((uint32_t)(ESI));
  /* 1020453b call dword ptr [0x1020805c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020805c))), 0x10204541u);
  /* 10204541 mov eax, ebx */
  EAX = (EBX);
  /* 10204543 jmp 0x10204598 */
  goto L_10204598;
L_10204545:;
  /* 10204545 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204548 jne 0x10204596 */
  if (!C.zf) goto L_10204596;
L_1020454a:;
  /* 1020454a cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020454c jne 0x1020455a */
  if (!C.zf) goto L_1020455a;
  /* 1020454e call dword ptr [0x10208064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208064))), 0x10204554u);
  /* 10204554 mov edi, eax */
  EDI = (EAX);
  /* 10204556 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204558 je 0x10204596 */
  if (C.zf) goto L_10204596;
L_1020455a:;
  /* 1020455a cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1020455c mov eax, edi */
  EAX = (EDI);
  /* 1020455e je 0x1020456a */
  if (C.zf) goto L_1020456a;
L_10204560:;
  /* 10204560 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10204561 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10204563 jne 0x10204560 */
  if (!C.zf) goto L_10204560;
  /* 10204565 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10204566 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10204568 jne 0x10204560 */
  if (!C.zf) goto L_10204560;
L_1020456a:;
  /* 1020456a sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1020456c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1020456d mov ebp, eax */
  EBP = (EAX);
  /* 1020456f push ebp */
  push32((uint32_t)(EBP));
  /* 10204570 call 0x10205085 */
  push32(0x10204575u); f_10205085();
  /* 10204575 mov esi, eax */
  ESI = (EAX);
  /* 10204577 pop ecx */
  ECX = (pop32());
  /* 10204578 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020457a jne 0x10204580 */
  if (!C.zf) goto L_10204580;
  /* 1020457c xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1020457e jmp 0x1020458b */
  goto L_1020458b;
L_10204580:;
  /* 10204580 push ebp */
  push32((uint32_t)(EBP));
  /* 10204581 push edi */
  push32((uint32_t)(EDI));
  /* 10204582 push esi */
  push32((uint32_t)(ESI));
  /* 10204583 call 0x10205610 */
  push32(0x10204588u); f_10205610();
  /* 10204588 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1020458b:;
  /* 1020458b push edi */
  push32((uint32_t)(EDI));
  /* 1020458c call dword ptr [0x10208058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208058))), 0x10204592u);
  /* 10204592 mov eax, esi */
  EAX = (ESI);
  /* 10204594 jmp 0x10204598 */
  goto L_10204598;
L_10204596:;
  /* 10204596 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10204598:;
  /* 10204598 pop edi */
  EDI = (pop32());
  /* 10204599 pop esi */
  ESI = (pop32());
  /* 1020459a pop ebp */
  EBP = (pop32());
  /* 1020459b pop ebx */
  EBX = (pop32());
  /* 1020459c pop ecx */
  ECX = (pop32());
  /* 1020459d pop ecx */
  ECX = (pop32());
  /* 1020459e ret  */
  ESPCHK(0x1020446du, _esp0);
  ESP += 4; return;
}

/* FUN_1000459f @ 0x1020459f (60 bytes, 20 insns) */
void f_1020459f(void) {
  FTRACE(0x1020459fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1020459f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102045a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102045a3 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102045a7 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 102045ac sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 102045af push eax */
  push32((uint32_t)(EAX));
  /* 102045b0 call dword ptr [0x10208070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208070))), 0x102045b6u);
  /* 102045b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102045b8 mov dword ptr [0x1020c544], eax */
  w32((uint32_t)(0x1020c544), (EAX));
  /* 102045bd je 0x102045d4 */
  if (C.zf) goto L_102045d4;
  /* 102045bf call 0x10205945 */
  push32(0x102045c4u); f_10205945();
  /* 102045c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102045c6 jne 0x102045d7 */
  if (!C.zf) goto L_102045d7;
  /* 102045c8 push dword ptr [0x1020c544] */
  push32((uint32_t)(r32((uint32_t)(0x1020c544))));
  /* 102045ce call dword ptr [0x1020806c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020806c))), 0x102045d4u);
L_102045d4:;
  /* 102045d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102045d6 ret  */
  ESPCHK(0x1020459fu, _esp0);
  ESP += 4; return;
L_102045d7:;
  /* 102045d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102045d9 pop eax */
  EAX = (pop32());
  /* 102045da ret  */
  ESPCHK(0x1020459fu, _esp0);
  ESP += 4; return;
}

/* FUN_100045db @ 0x102045db (117 bytes, 38 insns) */
void f_102045db(void) {
  FTRACE(0x102045dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102045db push ebx */
  push32((uint32_t)(EBX));
  /* 102045dc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102045de cmp dword ptr [0x1020b300], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1020b300))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102045e4 push ebp */
  push32((uint32_t)(EBP));
  /* 102045e5 mov ebp, dword ptr [0x10208078] */
  EBP = (r32((uint32_t)(0x10208078)));
  /* 102045eb jle 0x10204631 */
  if ((C.zf||C.sf!=C.of)) goto L_10204631;
  /* 102045ed mov eax, dword ptr [0x1020b304] */
  EAX = (r32((uint32_t)(0x1020b304)));
  /* 102045f2 push esi */
  push32((uint32_t)(ESI));
  /* 102045f3 push edi */
  push32((uint32_t)(EDI));
  /* 102045f4 mov edi, dword ptr [0x10208074] */
  EDI = (r32((uint32_t)(0x10208074)));
  /* 102045fa lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_102045fd:;
  /* 102045fd push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10204602 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10204607 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10204609 call edi */
  call_ind((uint32_t)(EDI), 0x1020460bu);
  /* 1020460b push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10204610 push 0 */
  push32((uint32_t)(0x0u));
  /* 10204612 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10204614 call edi */
  call_ind((uint32_t)(EDI), 0x10204616u);
  /* 10204616 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 10204619 push 0 */
  push32((uint32_t)(0x0u));
  /* 1020461b push dword ptr [0x1020c544] */
  push32((uint32_t)(r32((uint32_t)(0x1020c544))));
  /* 10204621 call ebp */
  call_ind((uint32_t)(EBP), 0x10204623u);
  /* 10204623 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10204626 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10204627 cmp ebx, dword ptr [0x1020b300] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1020b300))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020462d jl 0x102045fd */
  if ((C.sf!=C.of)) goto L_102045fd;
  /* 1020462f pop edi */
  EDI = (pop32());
  /* 10204630 pop esi */
  ESI = (pop32());
L_10204631:;
  /* 10204631 push dword ptr [0x1020b304] */
  push32((uint32_t)(r32((uint32_t)(0x1020b304))));
  /* 10204637 push 0 */
  push32((uint32_t)(0x0u));
  /* 10204639 push dword ptr [0x1020c544] */
  push32((uint32_t)(r32((uint32_t)(0x1020c544))));
  /* 1020463f call ebp */
  call_ind((uint32_t)(EBP), 0x10204641u);
  /* 10204641 push dword ptr [0x1020c544] */
  push32((uint32_t)(r32((uint32_t)(0x1020c544))));
  /* 10204647 call dword ptr [0x1020806c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020806c))), 0x1020464du);
  /* 1020464d pop ebp */
  EBP = (pop32());
  /* 1020464e pop ebx */
  EBX = (pop32());
  /* 1020464f ret  */
  ESPCHK(0x102045dbu, _esp0);
  ESP += 4; return;
}

/* FUN_10004650 @ 0x10204650 (57 bytes, 18 insns) */
void f_10204650(void) {
  FTRACE(0x10204650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204650 mov eax, dword ptr [0x1020afa4] */
  EAX = (r32((uint32_t)(0x1020afa4)));
  /* 10204655 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204658 je 0x10204667 */
  if (C.zf) goto L_10204667;
  /* 1020465a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020465c jne 0x10204688 */
  if (!C.zf) goto L_10204688;
  /* 1020465e cmp dword ptr [0x1020afa8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1020afa8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204665 jne 0x10204688 */
  if (!C.zf) goto L_10204688;
L_10204667:;
  /* 10204667 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 1020466c call 0x10204689 */
  push32(0x10204671u); f_10204689();
  /* 10204671 mov eax, dword ptr [0x1020b0f8] */
  EAX = (r32((uint32_t)(0x1020b0f8)));
  /* 10204676 pop ecx */
  ECX = (pop32());
  /* 10204677 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10204679 je 0x1020467d */
  if (C.zf) goto L_1020467d;
  /* 1020467b call eax */
  call_ind((uint32_t)(EAX), 0x1020467du);
L_1020467d:;
  /* 1020467d push 0xff */
  push32((uint32_t)(0xffu));
  /* 10204682 call 0x10204689 */
  push32(0x10204687u); f_10204689();
  /* 10204687 pop ecx */
  ECX = (pop32());
L_10204688:;
  /* 10204688 ret  */
  ESPCHK(0x10204650u, _esp0);
  ESP += 4; return;
}

/* FUN_10004689 @ 0x10204689 (339 bytes, 100 insns) */
void f_10204689(void) {
  FTRACE(0x10204689u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204689 push ebp */
  push32((uint32_t)(EBP));
  /* 1020468a mov ebp, esp */
  EBP = (ESP);
  /* 1020468c sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10204692 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10204695 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10204697 mov eax, 0x10209db8 */
  EAX = (0x10209db8u);
L_1020469c:;
  /* 1020469c cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020469e je 0x102046ab */
  if (C.zf) goto L_102046ab;
  /* 102046a0 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102046a3 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102046a4 cmp eax, 0x10209e48 */
  { uint32_t _a=(EAX),_b=(0x10209e48u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102046a9 jl 0x1020469c */
  if ((C.sf!=C.of)) goto L_1020469c;
L_102046ab:;
  /* 102046ab push esi */
  push32((uint32_t)(ESI));
  /* 102046ac mov esi, ecx */
  ESI = (ECX);
  /* 102046ae shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 102046b1 cmp edx, dword ptr [esi + 0x10209db8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x10209db8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102046b7 jne 0x102047d9 */
  if (!C.zf) goto L_102047d9;
  /* 102046bd mov eax, dword ptr [0x1020afa4] */
  EAX = (r32((uint32_t)(0x1020afa4)));
  /* 102046c2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102046c5 je 0x102047b3 */
  if (C.zf) goto L_102047b3;
  /* 102046cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102046cd jne 0x102046dc */
  if (!C.zf) goto L_102046dc;
  /* 102046cf cmp dword ptr [0x1020afa8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1020afa8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102046d6 je 0x102047b3 */
  if (C.zf) goto L_102047b3;
L_102046dc:;
  /* 102046dc cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102046e2 je 0x102047d9 */
  if (C.zf) goto L_102047d9;
  /* 102046e8 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102046ee push 0x104 */
  push32((uint32_t)(0x104u));
  /* 102046f3 push eax */
  push32((uint32_t)(EAX));
  /* 102046f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102046f6 call dword ptr [0x10208054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208054))), 0x102046fcu);
  /* 102046fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102046fe jne 0x10204713 */
  if (!C.zf) goto L_10204713;
  /* 10204700 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10204706 push 0x1020842c */
  push32((uint32_t)(0x1020842cu));
  /* 1020470b push eax */
  push32((uint32_t)(EAX));
  /* 1020470c call 0x10205120 */
  push32(0x10204711u); f_10205120();
  /* 10204711 pop ecx */
  ECX = (pop32());
  /* 10204712 pop ecx */
  ECX = (pop32());
L_10204713:;
  /* 10204713 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10204719 push edi */
  push32((uint32_t)(EDI));
  /* 1020471a push eax */
  push32((uint32_t)(EAX));
  /* 1020471b lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10204721 call 0x10204c80 */
  push32(0x10204726u); f_10204c80();
  /* 10204726 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10204727 pop ecx */
  ECX = (pop32());
  /* 10204728 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020472b jbe 0x10204756 */
  if ((C.cf||C.zf)) goto L_10204756;
  /* 1020472d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10204733 push eax */
  push32((uint32_t)(EAX));
  /* 10204734 call 0x10204c80 */
  push32(0x10204739u); f_10204c80();
  /* 10204739 mov edi, eax */
  EDI = (EAX);
  /* 1020473b lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10204741 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10204744 push 3 */
  push32((uint32_t)(0x3u));
  /* 10204746 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10204748 push 0x10208428 */
  push32((uint32_t)(0x10208428u));
  /* 1020474d push edi */
  push32((uint32_t)(EDI));
  /* 1020474e call 0x10206220 */
  push32(0x10204753u); f_10206220();
  /* 10204753 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10204756:;
  /* 10204756 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 1020475c push 0x1020840c */
  push32((uint32_t)(0x1020840cu));
  /* 10204761 push eax */
  push32((uint32_t)(EAX));
  /* 10204762 call 0x10205120 */
  push32(0x10204767u); f_10205120();
  /* 10204767 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 1020476d push edi */
  push32((uint32_t)(EDI));
  /* 1020476e push eax */
  push32((uint32_t)(EAX));
  /* 1020476f call 0x10205130 */
  push32(0x10204774u); f_10205130();
  /* 10204774 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 1020477a push 0x10208408 */
  push32((uint32_t)(0x10208408u));
  /* 1020477f push eax */
  push32((uint32_t)(EAX));
  /* 10204780 call 0x10205130 */
  push32(0x10204785u); f_10205130();
  /* 10204785 push dword ptr [esi + 0x10209dbc] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10209dbc))));
  /* 1020478b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10204791 push eax */
  push32((uint32_t)(EAX));
  /* 10204792 call 0x10205130 */
  push32(0x10204797u); f_10205130();
  /* 10204797 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 1020479c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102047a2 push 0x102083e0 */
  push32((uint32_t)(0x102083e0u));
  /* 102047a7 push eax */
  push32((uint32_t)(EAX));
  /* 102047a8 call 0x1020618e */
  push32(0x102047adu); f_1020618e();
  /* 102047ad add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102047b0 pop edi */
  EDI = (pop32());
  /* 102047b1 jmp 0x102047d9 */
  goto L_102047d9;
L_102047b3:;
  /* 102047b3 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 102047b6 lea esi, [esi + 0x10209dbc] */
  ESI = ((uint32_t)(ESI + 0x10209dbc));
  /* 102047bc push 0 */
  push32((uint32_t)(0x0u));
  /* 102047be push eax */
  push32((uint32_t)(EAX));
  /* 102047bf push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102047c1 call 0x10204c80 */
  push32(0x102047c6u); f_10204c80();
  /* 102047c6 pop ecx */
  ECX = (pop32());
  /* 102047c7 push eax */
  push32((uint32_t)(EAX));
  /* 102047c8 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102047ca push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 102047cc call dword ptr [0x10208044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208044))), 0x102047d2u);
  /* 102047d2 push eax */
  push32((uint32_t)(EAX));
  /* 102047d3 call dword ptr [0x1020807c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020807c))), 0x102047d9u);
L_102047d9:;
  /* 102047d9 pop esi */
  ESI = (pop32());
  /* 102047da leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102047db ret  */
  ESPCHK(0x10204689u, _esp0);
  ESP += 4; return;
}

/* FUN_100047dc @ 0x102047dc (101 bytes, 34 insns) */
void f_102047dc(void) {
  FTRACE(0x102047dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102047dc push esi */
  push32((uint32_t)(ESI));
  /* 102047dd mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102047e1 cmp esi, dword ptr [0x1020c660] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1020c660))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102047e7 jae 0x10204829 */
  if (!C.cf) goto L_10204829;
  /* 102047e9 mov ecx, esi */
  ECX = (ESI);
  /* 102047eb mov eax, esi */
  EAX = (ESI);
  /* 102047ed sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 102047f0 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 102047f3 mov ecx, dword ptr [ecx*4 + 0x1020c560] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1020c560)));
  /* 102047fa lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 102047fd test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10204802 je 0x10204829 */
  if (C.zf) goto L_10204829;
  /* 10204804 push edi */
  push32((uint32_t)(EDI));
  /* 10204805 push esi */
  push32((uint32_t)(ESI));
  /* 10204806 call 0x10206464 */
  push32(0x1020480bu); f_10206464();
  /* 1020480b push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1020480f push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10204813 push esi */
  push32((uint32_t)(ESI));
  /* 10204814 call 0x10204841 */
  push32(0x10204819u); f_10204841();
  /* 10204819 push esi */
  push32((uint32_t)(ESI));
  /* 1020481a mov edi, eax */
  EDI = (EAX);
  /* 1020481c call 0x102064c3 */
  push32(0x10204821u); f_102064c3();
  /* 10204821 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10204824 mov eax, edi */
  EAX = (EDI);
  /* 10204826 pop edi */
  EDI = (pop32());
  /* 10204827 pop esi */
  ESI = (pop32());
  /* 10204828 ret  */
  ESPCHK(0x102047dcu, _esp0);
  ESP += 4; return;
L_10204829:;
  /* 10204829 call 0x10206391 */
  push32(0x1020482eu); f_10206391();
  /* 1020482e mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10204834 call 0x1020639a */
  push32(0x10204839u); f_1020639a();
  /* 10204839 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1020483c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1020483f pop esi */
  ESI = (pop32());
  /* 10204840 ret  */
  ESPCHK(0x102047dcu, _esp0);
  ESP += 4; return;
}

/* FUN_10004841 @ 0x10204841 (115 bytes, 41 insns) */
void f_10204841(void) {
  FTRACE(0x10204841u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204841 push esi */
  push32((uint32_t)(ESI));
  /* 10204842 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10204846 push edi */
  push32((uint32_t)(EDI));
  /* 10204847 push esi */
  push32((uint32_t)(ESI));
  /* 10204848 call 0x10206422 */
  push32(0x1020484du); f_10206422();
  /* 1020484d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204850 pop ecx */
  ECX = (pop32());
  /* 10204851 jne 0x10204860 */
  if (!C.zf) goto L_10204860;
  /* 10204853 call 0x10206391 */
  push32(0x10204858u); f_10206391();
  /* 10204858 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1020485e jmp 0x1020488d */
  goto L_1020488d;
L_10204860:;
  /* 10204860 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 10204864 push 0 */
  push32((uint32_t)(0x0u));
  /* 10204866 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1020486a push eax */
  push32((uint32_t)(EAX));
  /* 1020486b call dword ptr [0x10208080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208080))), 0x10204871u);
  /* 10204871 mov edi, eax */
  EDI = (EAX);
  /* 10204873 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204876 jne 0x10204880 */
  if (!C.zf) goto L_10204880;
  /* 10204878 call dword ptr [0x1020803c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020803c))), 0x1020487eu);
  /* 1020487e jmp 0x10204882 */
  goto L_10204882;
L_10204880:;
  /* 10204880 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10204882:;
  /* 10204882 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10204884 je 0x10204892 */
  if (C.zf) goto L_10204892;
  /* 10204886 push eax */
  push32((uint32_t)(EAX));
  /* 10204887 call 0x1020631e */
  push32(0x1020488cu); f_1020631e();
  /* 1020488c pop ecx */
  ECX = (pop32());
L_1020488d:;
  /* 1020488d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10204890 jmp 0x102048b1 */
  goto L_102048b1;
L_10204892:;
  /* 10204892 mov ecx, esi */
  ECX = (ESI);
  /* 10204894 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 10204897 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1020489a mov eax, esi */
  EAX = (ESI);
  /* 1020489c mov ecx, dword ptr [ecx*4 + 0x1020c560] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1020c560)));
  /* 102048a3 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 102048a6 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 102048ab lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 102048af mov eax, edi */
  EAX = (EDI);
L_102048b1:;
  /* 102048b1 pop edi */
  EDI = (pop32());
  /* 102048b2 pop esi */
  ESI = (pop32());
  /* 102048b3 ret  */
  ESPCHK(0x10204841u, _esp0);
  ESP += 4; return;
}

/* FUN_100048b4 @ 0x102048b4 (101 bytes, 34 insns) */
void f_102048b4(void) {
  FTRACE(0x102048b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102048b4 push esi */
  push32((uint32_t)(ESI));
  /* 102048b5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102048b9 cmp esi, dword ptr [0x1020c660] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1020c660))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102048bf jae 0x10204901 */
  if (!C.cf) goto L_10204901;
  /* 102048c1 mov ecx, esi */
  ECX = (ESI);
  /* 102048c3 mov eax, esi */
  EAX = (ESI);
  /* 102048c5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 102048c8 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 102048cb mov ecx, dword ptr [ecx*4 + 0x1020c560] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1020c560)));
  /* 102048d2 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 102048d5 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 102048da je 0x10204901 */
  if (C.zf) goto L_10204901;
  /* 102048dc push edi */
  push32((uint32_t)(EDI));
  /* 102048dd push esi */
  push32((uint32_t)(ESI));
  /* 102048de call 0x10206464 */
  push32(0x102048e3u); f_10206464();
  /* 102048e3 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102048e7 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102048eb push esi */
  push32((uint32_t)(ESI));
  /* 102048ec call 0x10204919 */
  push32(0x102048f1u); f_10204919();
  /* 102048f1 push esi */
  push32((uint32_t)(ESI));
  /* 102048f2 mov edi, eax */
  EDI = (EAX);
  /* 102048f4 call 0x102064c3 */
  push32(0x102048f9u); f_102064c3();
  /* 102048f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102048fc mov eax, edi */
  EAX = (EDI);
  /* 102048fe pop edi */
  EDI = (pop32());
  /* 102048ff pop esi */
  ESI = (pop32());
  /* 10204900 ret  */
  ESPCHK(0x102048b4u, _esp0);
  ESP += 4; return;
L_10204901:;
  /* 10204901 call 0x10206391 */
  push32(0x10204906u); f_10206391();
  /* 10204906 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1020490c call 0x1020639a */
  push32(0x10204911u); f_1020639a();
  /* 10204911 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10204914 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10204917 pop esi */
  ESI = (pop32());
  /* 10204918 ret  */
  ESPCHK(0x102048b4u, _esp0);
  ESP += 4; return;
}

/* FUN_10004919 @ 0x10204919 (395 bytes, 135 insns) */
void f_10204919(void) {
  FTRACE(0x10204919u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204919 push ebp */
  push32((uint32_t)(EBP));
  /* 1020491a mov ebp, esp */
  EBP = (ESP);
  /* 1020491c sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10204922 push ebx */
  push32((uint32_t)(EBX));
  /* 10204923 push esi */
  push32((uint32_t)(ESI));
  /* 10204924 push edi */
  push32((uint32_t)(EDI));
  /* 10204925 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10204927 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020492a mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 1020492d mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 10204930 jne 0x10204939 */
  if (!C.zf) goto L_10204939;
L_10204932:;
  /* 10204932 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10204934 jmp 0x10204a9f */
  goto L_10204a9f;
L_10204939:;
  /* 10204939 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1020493c sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1020493f lea ebx, [eax*4 + 0x1020c560] */
  EBX = ((uint32_t)(EAX*4 + 0x1020c560));
  /* 10204946 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10204949 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1020494c lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1020494f mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10204951 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10204954 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10204959 je 0x10204969 */
  if (C.zf) goto L_10204969;
  /* 1020495b push 2 */
  push32((uint32_t)(0x2u));
  /* 1020495d push edi */
  push32((uint32_t)(EDI));
  /* 1020495e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10204961 call 0x10204841 */
  push32(0x10204966u); f_10204841();
  /* 10204966 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10204969:;
  /* 10204969 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1020496b add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1020496d test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10204971 je 0x10204a38 */
  if (C.zf) goto L_10204a38;
  /* 10204977 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1020497a cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020497d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10204980 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10204983 jbe 0x10204a73 */
  if ((C.cf||C.zf)) goto L_10204a73;
L_10204989:;
  /* 10204989 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_1020498f:;
  /* 1020498f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10204992 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10204995 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204998 jae 0x102049c3 */
  if (!C.cf) goto L_102049c3;
  /* 1020499a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1020499d inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 102049a0 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 102049a2 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102049a5 jne 0x102049ae */
  if (!C.zf) goto L_102049ae;
  /* 102049a7 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 102049aa mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 102049ad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_102049ae:;
  /* 102049ae mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 102049b0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102049b1 mov ecx, eax */
  ECX = (EAX);
  /* 102049b3 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 102049b9 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102049bb cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102049c1 jl 0x1020498f */
  if ((C.sf!=C.of)) goto L_1020498f;
L_102049c3:;
  /* 102049c3 mov edi, eax */
  EDI = (EAX);
  /* 102049c5 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 102049cb sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102049cd lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102049d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102049d2 push eax */
  push32((uint32_t)(EAX));
  /* 102049d3 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 102049d9 push edi */
  push32((uint32_t)(EDI));
  /* 102049da push eax */
  push32((uint32_t)(EAX));
  /* 102049db mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 102049dd push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 102049e0 call dword ptr [0x1020807c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020807c))), 0x102049e6u);
  /* 102049e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102049e8 je 0x10204a2d */
  if (C.zf) goto L_10204a2d;
  /* 102049ea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102049ed add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 102049f0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102049f2 jl 0x102049ff */
  if ((C.sf!=C.of)) goto L_102049ff;
  /* 102049f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102049f7 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102049fa cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102049fd jb 0x10204989 */
  if (C.cf) goto L_10204989;
L_102049ff:;
  /* 102049ff xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10204a01:;
  /* 10204a01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10204a04 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204a06 jne 0x10204a9c */
  if (!C.zf) goto L_10204a9c;
  /* 10204a0c cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204a0f je 0x10204a73 */
  if (C.zf) goto L_10204a73;
  /* 10204a11 push 5 */
  push32((uint32_t)(0x5u));
  /* 10204a13 pop esi */
  ESI = (pop32());
  /* 10204a14 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204a17 jne 0x10204a65 */
  if (!C.zf) goto L_10204a65;
  /* 10204a19 call 0x10206391 */
  push32(0x10204a1eu); f_10206391();
  /* 10204a1e mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10204a24 call 0x1020639a */
  push32(0x10204a29u); f_1020639a();
  /* 10204a29 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10204a2b jmp 0x10204a6e */
  goto L_10204a6e;
L_10204a2d:;
  /* 10204a2d call dword ptr [0x1020803c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020803c))), 0x10204a33u);
  /* 10204a33 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10204a36 jmp 0x102049ff */
  goto L_102049ff;
L_10204a38:;
  /* 10204a38 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10204a3b push edi */
  push32((uint32_t)(EDI));
  /* 10204a3c push ecx */
  push32((uint32_t)(ECX));
  /* 10204a3d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10204a40 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10204a43 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 10204a45 call dword ptr [0x1020807c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020807c))), 0x10204a4bu);
  /* 10204a4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10204a4d je 0x10204a5a */
  if (C.zf) goto L_10204a5a;
  /* 10204a4f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10204a52 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10204a55 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10204a58 jmp 0x10204a01 */
  goto L_10204a01;
L_10204a5a:;
  /* 10204a5a call dword ptr [0x1020803c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020803c))), 0x10204a60u);
  /* 10204a60 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10204a63 jmp 0x10204a01 */
  goto L_10204a01;
L_10204a65:;
  /* 10204a65 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10204a68 call 0x1020631e */
  push32(0x10204a6du); f_1020631e();
  /* 10204a6d pop ecx */
  ECX = (pop32());
L_10204a6e:;
  /* 10204a6e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10204a71 jmp 0x10204a9f */
  goto L_10204a9f;
L_10204a73:;
  /* 10204a73 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10204a75 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10204a7a je 0x10204a88 */
  if (C.zf) goto L_10204a88;
  /* 10204a7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10204a7f cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10204a82 je 0x10204932 */
  if (C.zf) goto L_10204932;
L_10204a88:;
  /* 10204a88 call 0x10206391 */
  push32(0x10204a8du); f_10206391();
  /* 10204a8d mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10204a93 call 0x1020639a */
  push32(0x10204a98u); f_1020639a();
  /* 10204a98 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 10204a9a jmp 0x10204a6e */
  goto L_10204a6e;
L_10204a9c:;
  /* 10204a9c sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10204a9f:;
  /* 10204a9f pop edi */
  EDI = (pop32());
  /* 10204aa0 pop esi */
  ESI = (pop32());
  /* 10204aa1 pop ebx */
  EBX = (pop32());
  /* 10204aa2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10204aa3 ret  */
  ESPCHK(0x10204919u, _esp0);
  ESP += 4; return;
}

/* FUN_10004aa4 @ 0x10204aa4 (68 bytes, 19 insns) */
void f_10204aa4(void) {
  FTRACE(0x10204aa4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204aa4 inc dword ptr [0x1020b0fc] */
  { uint32_t _r=(r32((uint32_t)(0x1020b0fc)))+1; w32((uint32_t)(0x1020b0fc), (_r)); fl_inc(_r,32); }
  /* 10204aaa push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10204aaf call 0x10205085 */
  push32(0x10204ab4u); f_10205085();
  /* 10204ab4 pop ecx */
  ECX = (pop32());
  /* 10204ab5 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10204ab9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10204abb mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10204abe je 0x10204acd */
  if (C.zf) goto L_10204acd;
  /* 10204ac0 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10204ac4 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 10204acb jmp 0x10204ade */
  goto L_10204ade;
L_10204acd:;
  /* 10204acd or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10204ad1 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 10204ad4 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10204ad7 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_10204ade:;
  /* 10204ade mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10204ae1 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10204ae5 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10204ae7 ret  */
  ESPCHK(0x10204aa4u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ae8 @ 0x10204ae8 (41 bytes, 13 insns) */
void f_10204ae8(void) {
  FTRACE(0x10204ae8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204ae8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10204aec cmp eax, dword ptr [0x1020c660] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1020c660))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204af2 jb 0x10204af7 */
  if (C.cf) goto L_10204af7;
  /* 10204af4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10204af6 ret  */
  ESPCHK(0x10204ae8u, _esp0);
  ESP += 4; return;
L_10204af7:;
  /* 10204af7 mov ecx, eax */
  ECX = (EAX);
  /* 10204af9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10204afc sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10204aff lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10204b02 mov ecx, dword ptr [ecx*4 + 0x1020c560] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1020c560)));
  /* 10204b09 mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10204b0d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10204b10 ret  */
  ESPCHK(0x10204ae8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bcd @ 0x10204bcd (47 bytes, 17 insns) */
void f_10204bcd(void) {
  FTRACE(0x10204bcdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204bcd mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10204bd1 mov ecx, 0x10209e48 */
  ECX = (0x10209e48u);
  /* 10204bd6 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204bd8 jb 0x10204bf1 */
  if (C.cf) goto L_10204bf1;
  /* 10204bda cmp eax, 0x1020a0a8 */
  { uint32_t _a=(EAX),_b=(0x1020a0a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204bdf ja 0x10204bf1 */
  if ((!C.cf&&!C.zf)) goto L_10204bf1;
  /* 10204be1 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10204be3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10204be6 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10204be9 push eax */
  push32((uint32_t)(EAX));
  /* 10204bea call 0x10204f3a */
  push32(0x10204befu); f_10204f3a();
  /* 10204bef pop ecx */
  ECX = (pop32());
  /* 10204bf0 ret  */
  ESPCHK(0x10204bcdu, _esp0);
  ESP += 4; return;
L_10204bf1:;
  /* 10204bf1 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10204bf4 push eax */
  push32((uint32_t)(EAX));
  /* 10204bf5 call dword ptr [0x10208000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208000))), 0x10204bfbu);
  /* 10204bfb ret  */
  ESPCHK(0x10204bcdu, _esp0);
  ESP += 4; return;
}

/* FUN_10004bfc @ 0x10204bfc (35 bytes, 13 insns) */
void f_10204bfc(void) {
  FTRACE(0x10204bfcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204bfc mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10204c00 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204c03 jge 0x10204c10 */
  if ((C.sf==C.of)) goto L_10204c10;
  /* 10204c05 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10204c08 push eax */
  push32((uint32_t)(EAX));
  /* 10204c09 call 0x10204f3a */
  push32(0x10204c0eu); f_10204f3a();
  /* 10204c0e pop ecx */
  ECX = (pop32());
  /* 10204c0f ret  */
  ESPCHK(0x10204bfcu, _esp0);
  ESP += 4; return;
L_10204c10:;
  /* 10204c10 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10204c14 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10204c17 push eax */
  push32((uint32_t)(EAX));
  /* 10204c18 call dword ptr [0x10208000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208000))), 0x10204c1eu);
  /* 10204c1e ret  */
  ESPCHK(0x10204bfcu, _esp0);
  ESP += 4; return;
}

/* FUN_10004c1f @ 0x10204c1f (47 bytes, 17 insns) */
void f_10204c1f(void) {
  FTRACE(0x10204c1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204c1f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10204c23 mov ecx, 0x10209e48 */
  ECX = (0x10209e48u);
  /* 10204c28 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204c2a jb 0x10204c43 */
  if (C.cf) goto L_10204c43;
  /* 10204c2c cmp eax, 0x1020a0a8 */
  { uint32_t _a=(EAX),_b=(0x1020a0a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204c31 ja 0x10204c43 */
  if ((!C.cf&&!C.zf)) goto L_10204c43;
  /* 10204c33 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10204c35 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10204c38 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10204c3b push eax */
  push32((uint32_t)(EAX));
  /* 10204c3c call 0x10204f9b */
  push32(0x10204c41u); f_10204f9b();
  /* 10204c41 pop ecx */
  ECX = (pop32());
  /* 10204c42 ret  */
  ESPCHK(0x10204c1fu, _esp0);
  ESP += 4; return;
L_10204c43:;
  /* 10204c43 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10204c46 push eax */
  push32((uint32_t)(EAX));
  /* 10204c47 call dword ptr [0x1020800c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020800c))), 0x10204c4du);
  /* 10204c4d ret  */
  ESPCHK(0x10204c1fu, _esp0);
  ESP += 4; return;
}

/* FUN_10004c4e @ 0x10204c4e (35 bytes, 13 insns) */
void f_10204c4e(void) {
  FTRACE(0x10204c4eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204c4e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10204c52 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204c55 jge 0x10204c62 */
  if ((C.sf==C.of)) goto L_10204c62;
  /* 10204c57 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10204c5a push eax */
  push32((uint32_t)(EAX));
  /* 10204c5b call 0x10204f9b */
  push32(0x10204c60u); f_10204f9b();
  /* 10204c60 pop ecx */
  ECX = (pop32());
  /* 10204c61 ret  */
  ESPCHK(0x10204c4eu, _esp0);
  ESP += 4; return;
L_10204c62:;
  /* 10204c62 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10204c66 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10204c69 push eax */
  push32((uint32_t)(EAX));
  /* 10204c6a call dword ptr [0x1020800c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020800c))), 0x10204c70u);
  /* 10204c70 ret  */
  ESPCHK(0x10204c4eu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10204c80 (123 bytes, 44 insns) */
void f_10204c80(void) {
  FTRACE(0x10204c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204c80 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10204c84 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10204c8a je 0x10204ca0 */
  if (C.zf) goto L_10204ca0;
L_10204c8c:;
  /* 10204c8c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10204c8e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10204c8f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10204c91 je 0x10204cd3 */
  if (C.zf) goto L_10204cd3;
  /* 10204c93 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10204c99 jne 0x10204c8c */
  if (!C.zf) goto L_10204c8c;
  /* 10204c9b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10204ca0:;
  /* 10204ca0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10204ca2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10204ca7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10204ca9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10204cac xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10204cae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10204cb1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10204cb6 je 0x10204ca0 */
  if (C.zf) goto L_10204ca0;
  /* 10204cb8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10204cbb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10204cbd je 0x10204cf1 */
  if (C.zf) goto L_10204cf1;
  /* 10204cbf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10204cc1 je 0x10204ce7 */
  if (C.zf) goto L_10204ce7;
  /* 10204cc3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10204cc8 je 0x10204cdd */
  if (C.zf) goto L_10204cdd;
  /* 10204cca test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10204ccf je 0x10204cd3 */
  if (C.zf) goto L_10204cd3;
  /* 10204cd1 jmp 0x10204ca0 */
  goto L_10204ca0;
L_10204cd3:;
  /* 10204cd3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10204cd6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10204cda sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10204cdc ret  */
  ESPCHK(0x10204c80u, _esp0);
  ESP += 4; return;
L_10204cdd:;
  /* 10204cdd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10204ce0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10204ce4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10204ce6 ret  */
  ESPCHK(0x10204c80u, _esp0);
  ESP += 4; return;
L_10204ce7:;
  /* 10204ce7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10204cea mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10204cee sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10204cf0 ret  */
  ESPCHK(0x10204c80u, _esp0);
  ESP += 4; return;
L_10204cf1:;
  /* 10204cf1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10204cf4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10204cf8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10204cfa ret  */
  ESPCHK(0x10204c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cfb @ 0x10204cfb (89 bytes, 39 insns) */
void f_10204cfb(void) {
  FTRACE(0x10204cfbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204cfb push ebp */
  push32((uint32_t)(EBP));
  /* 10204cfc mov ebp, esp */
  EBP = (ESP);
  /* 10204cfe push ebx */
  push32((uint32_t)(EBX));
  /* 10204cff push esi */
  push32((uint32_t)(ESI));
  /* 10204d00 mov esi, 0x1020b2ec */
  ESI = (0x1020b2ecu);
  /* 10204d05 push edi */
  push32((uint32_t)(EDI));
  /* 10204d06 push esi */
  push32((uint32_t)(ESI));
  /* 10204d07 call dword ptr [0x10208088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208088))), 0x10204d0du);
  /* 10204d0d mov edi, dword ptr [0x10208008] */
  EDI = (r32((uint32_t)(0x10208008)));
  /* 10204d13 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10204d15 cmp dword ptr [0x1020b2e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1020b2e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204d1b je 0x10204d2b */
  if (C.zf) goto L_10204d2b;
  /* 10204d1d push esi */
  push32((uint32_t)(ESI));
  /* 10204d1e call edi */
  call_ind((uint32_t)(EDI), 0x10204d20u);
  /* 10204d20 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10204d22 call 0x10204f3a */
  push32(0x10204d27u); f_10204f3a();
  /* 10204d27 pop ecx */
  ECX = (pop32());
  /* 10204d28 push 1 */
  push32((uint32_t)(0x1u));
  /* 10204d2a pop ebx */
  EBX = (pop32());
L_10204d2b:;
  /* 10204d2b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10204d2e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10204d31 call 0x10204d54 */
  push32(0x10204d36u); f_10204d54();
  /* 10204d36 pop ecx */
  ECX = (pop32());
  /* 10204d37 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10204d3a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10204d3c pop ecx */
  ECX = (pop32());
  /* 10204d3d je 0x10204d49 */
  if (C.zf) goto L_10204d49;
  /* 10204d3f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10204d41 call 0x10204f9b */
  push32(0x10204d46u); f_10204f9b();
  /* 10204d46 pop ecx */
  ECX = (pop32());
  /* 10204d47 jmp 0x10204d4c */
  goto L_10204d4c;
L_10204d49:;
  /* 10204d49 push esi */
  push32((uint32_t)(ESI));
  /* 10204d4a call edi */
  call_ind((uint32_t)(EDI), 0x10204d4cu);
L_10204d4c:;
  /* 10204d4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10204d4f pop edi */
  EDI = (pop32());
  /* 10204d50 pop esi */
  ESI = (pop32());
  /* 10204d51 pop ebx */
  EBX = (pop32());
  /* 10204d52 pop ebp */
  EBP = (pop32());
  /* 10204d53 ret  */
  ESPCHK(0x10204cfbu, _esp0);
  ESP += 4; return;
}

/* FUN_10004d54 @ 0x10204d54 (105 bytes, 38 insns) */
void f_10204d54(void) {
  FTRACE(0x10204d54u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204d54 push ebp */
  push32((uint32_t)(EBP));
  /* 10204d55 mov ebp, esp */
  EBP = (ESP);
  /* 10204d57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10204d5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10204d5c jne 0x10204d60 */
  if (!C.zf) goto L_10204d60;
  /* 10204d5e pop ebp */
  EBP = (pop32());
  /* 10204d5f ret  */
  ESPCHK(0x10204d54u, _esp0);
  ESP += 4; return;
L_10204d60:;
  /* 10204d60 cmp dword ptr [0x1020b184], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1020b184))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204d67 jne 0x10204d7b */
  if (!C.zf) goto L_10204d7b;
  /* 10204d69 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 10204d6d cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10204d72 ja 0x10204dad */
  if ((!C.cf&&!C.zf)) goto L_10204dad;
  /* 10204d74 push 1 */
  push32((uint32_t)(0x1u));
  /* 10204d76 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10204d78 pop eax */
  EAX = (pop32());
  /* 10204d79 pop ebp */
  EBP = (pop32());
  /* 10204d7a ret  */
  ESPCHK(0x10204d54u, _esp0);
  ESP += 4; return;
L_10204d7b:;
  /* 10204d7b lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 10204d7e and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 10204d82 push ecx */
  push32((uint32_t)(ECX));
  /* 10204d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10204d85 push dword ptr [0x1020a7d4] */
  push32((uint32_t)(r32((uint32_t)(0x1020a7d4))));
  /* 10204d8b push eax */
  push32((uint32_t)(EAX));
  /* 10204d8c lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10204d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10204d91 push eax */
  push32((uint32_t)(EAX));
  /* 10204d92 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10204d97 push dword ptr [0x1020b194] */
  push32((uint32_t)(r32((uint32_t)(0x1020b194))));
  /* 10204d9d call dword ptr [0x10208060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208060))), 0x10204da3u);
  /* 10204da3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10204da5 je 0x10204dad */
  if (C.zf) goto L_10204dad;
  /* 10204da7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204dab je 0x10204dbb */
  if (C.zf) goto L_10204dbb;
L_10204dad:;
  /* 10204dad call 0x10206391 */
  push32(0x10204db2u); f_10206391();
  /* 10204db2 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10204db8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10204dbb:;
  /* 10204dbb pop ebp */
  EBP = (pop32());
  /* 10204dbc ret  */
  ESPCHK(0x10204d54u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10204dc0 (104 bytes, 43 insns) */
void f_10204dc0(void) {
  FTRACE(0x10204dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204dc0 push ebx */
  push32((uint32_t)(EBX));
  /* 10204dc1 push esi */
  push32((uint32_t)(ESI));
  /* 10204dc2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10204dc6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10204dc8 jne 0x10204de2 */
  if (!C.zf) goto L_10204de2;
  /* 10204dca mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10204dce mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10204dd2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10204dd4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10204dd6 mov ebx, eax */
  EBX = (EAX);
  /* 10204dd8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10204ddc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10204dde mov edx, ebx */
  EDX = (EBX);
  /* 10204de0 jmp 0x10204e23 */
  goto L_10204e23;
L_10204de2:;
  /* 10204de2 mov ecx, eax */
  ECX = (EAX);
  /* 10204de4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10204de8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10204dec mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10204df0:;
  /* 10204df0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10204df2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10204df4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10204df6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10204df8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10204dfa jne 0x10204df0 */
  if (!C.zf) goto L_10204df0;
  /* 10204dfc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10204dfe mov esi, eax */
  ESI = (EAX);
  /* 10204e00 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10204e04 mov ecx, eax */
  ECX = (EAX);
  /* 10204e06 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10204e0a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10204e0c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10204e0e jb 0x10204e1e */
  if (C.cf) goto L_10204e1e;
  /* 10204e10 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204e14 ja 0x10204e1e */
  if ((!C.cf&&!C.zf)) goto L_10204e1e;
  /* 10204e16 jb 0x10204e1f */
  if (C.cf) goto L_10204e1f;
  /* 10204e18 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204e1c jbe 0x10204e1f */
  if ((C.cf||C.zf)) goto L_10204e1f;
L_10204e1e:;
  /* 10204e1e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10204e1f:;
  /* 10204e1f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10204e21 mov eax, esi */
  EAX = (ESI);
L_10204e23:;
  /* 10204e23 pop esi */
  ESI = (pop32());
  /* 10204e24 pop ebx */
  EBX = (pop32());
  /* 10204e25 ret 0x10 */
  ESPCHK(0x10204dc0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10204e30 (117 bytes, 44 insns) */
void f_10204e30(void) {
  FTRACE(0x10204e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204e30 push ebx */
  push32((uint32_t)(EBX));
  /* 10204e31 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10204e35 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10204e37 jne 0x10204e51 */
  if (!C.zf) goto L_10204e51;
  /* 10204e39 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10204e3d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10204e41 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10204e43 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10204e45 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10204e49 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10204e4b mov eax, edx */
  EAX = (EDX);
  /* 10204e4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10204e4f jmp 0x10204ea1 */
  goto L_10204ea1;
L_10204e51:;
  /* 10204e51 mov ecx, eax */
  ECX = (EAX);
  /* 10204e53 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10204e57 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10204e5b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10204e5f:;
  /* 10204e5f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10204e61 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10204e63 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10204e65 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10204e67 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10204e69 jne 0x10204e5f */
  if (!C.zf) goto L_10204e5f;
  /* 10204e6b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10204e6d mov ecx, eax */
  ECX = (EAX);
  /* 10204e6f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10204e73 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10204e74 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10204e78 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10204e7a jb 0x10204e8a */
  if (C.cf) goto L_10204e8a;
  /* 10204e7c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204e80 ja 0x10204e8a */
  if ((!C.cf&&!C.zf)) goto L_10204e8a;
  /* 10204e82 jb 0x10204e92 */
  if (C.cf) goto L_10204e92;
  /* 10204e84 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204e88 jbe 0x10204e92 */
  if ((C.cf||C.zf)) goto L_10204e92;
L_10204e8a:;
  /* 10204e8a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10204e8e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10204e92:;
  /* 10204e92 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10204e96 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10204e9a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10204e9c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10204e9e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10204ea1:;
  /* 10204ea1 pop ebx */
  EBX = (pop32());
  /* 10204ea2 ret 0x10 */
  ESPCHK(0x10204e30u, _esp0);
  ESP += 20; return;
}

/* FUN_10004ea5 @ 0x10204ea5 (41 bytes, 12 insns) */
void f_10204ea5(void) {
  FTRACE(0x10204ea5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204ea5 push esi */
  push32((uint32_t)(ESI));
  /* 10204ea6 mov esi, dword ptr [0x1020808c] */
  ESI = (r32((uint32_t)(0x1020808c)));
  /* 10204eac push dword ptr [0x1020a344] */
  push32((uint32_t)(r32((uint32_t)(0x1020a344))));
  /* 10204eb2 call esi */
  call_ind((uint32_t)(ESI), 0x10204eb4u);
  /* 10204eb4 push dword ptr [0x1020a334] */
  push32((uint32_t)(r32((uint32_t)(0x1020a334))));
  /* 10204eba call esi */
  call_ind((uint32_t)(ESI), 0x10204ebcu);
  /* 10204ebc push dword ptr [0x1020a324] */
  push32((uint32_t)(r32((uint32_t)(0x1020a324))));
  /* 10204ec2 call esi */
  call_ind((uint32_t)(ESI), 0x10204ec4u);
  /* 10204ec4 push dword ptr [0x1020a304] */
  push32((uint32_t)(r32((uint32_t)(0x1020a304))));
  /* 10204eca call esi */
  call_ind((uint32_t)(ESI), 0x10204eccu);
  /* 10204ecc pop esi */
  ESI = (pop32());
  /* 10204ecd ret  */
  ESPCHK(0x10204ea5u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ece @ 0x10204ece (108 bytes, 34 insns) */
void f_10204ece(void) {
  FTRACE(0x10204eceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204ece push esi */
  push32((uint32_t)(ESI));
  /* 10204ecf push edi */
  push32((uint32_t)(EDI));
  /* 10204ed0 mov edi, dword ptr [0x10208050] */
  EDI = (r32((uint32_t)(0x10208050)));
  /* 10204ed6 mov esi, 0x1020a300 */
  ESI = (0x1020a300u);
L_10204edb:;
  /* 10204edb mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10204edd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10204edf je 0x10204f0c */
  if (C.zf) goto L_10204f0c;
  /* 10204ee1 cmp esi, 0x1020a344 */
  { uint32_t _a=(ESI),_b=(0x1020a344u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204ee7 je 0x10204f0c */
  if (C.zf) goto L_10204f0c;
  /* 10204ee9 cmp esi, 0x1020a334 */
  { uint32_t _a=(ESI),_b=(0x1020a334u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204eef je 0x10204f0c */
  if (C.zf) goto L_10204f0c;
  /* 10204ef1 cmp esi, 0x1020a324 */
  { uint32_t _a=(ESI),_b=(0x1020a324u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204ef7 je 0x10204f0c */
  if (C.zf) goto L_10204f0c;
  /* 10204ef9 cmp esi, 0x1020a304 */
  { uint32_t _a=(ESI),_b=(0x1020a304u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204eff je 0x10204f0c */
  if (C.zf) goto L_10204f0c;
  /* 10204f01 push eax */
  push32((uint32_t)(EAX));
  /* 10204f02 call edi */
  call_ind((uint32_t)(EDI), 0x10204f04u);
  /* 10204f04 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10204f06 call 0x1020503d */
  push32(0x10204f0bu); f_1020503d();
  /* 10204f0b pop ecx */
  ECX = (pop32());
L_10204f0c:;
  /* 10204f0c add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10204f0f cmp esi, 0x1020a3c0 */
  { uint32_t _a=(ESI),_b=(0x1020a3c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204f15 jl 0x10204edb */
  if ((C.sf!=C.of)) goto L_10204edb;
  /* 10204f17 push dword ptr [0x1020a324] */
  push32((uint32_t)(r32((uint32_t)(0x1020a324))));
  /* 10204f1d call edi */
  call_ind((uint32_t)(EDI), 0x10204f1fu);
  /* 10204f1f push dword ptr [0x1020a334] */
  push32((uint32_t)(r32((uint32_t)(0x1020a334))));
  /* 10204f25 call edi */
  call_ind((uint32_t)(EDI), 0x10204f27u);
  /* 10204f27 push dword ptr [0x1020a344] */
  push32((uint32_t)(r32((uint32_t)(0x1020a344))));
  /* 10204f2d call edi */
  call_ind((uint32_t)(EDI), 0x10204f2fu);
  /* 10204f2f push dword ptr [0x1020a304] */
  push32((uint32_t)(r32((uint32_t)(0x1020a304))));
  /* 10204f35 call edi */
  call_ind((uint32_t)(EDI), 0x10204f37u);
  /* 10204f37 pop edi */
  EDI = (pop32());
  /* 10204f38 pop esi */
  ESI = (pop32());
  /* 10204f39 ret  */
  ESPCHK(0x10204eceu, _esp0);
  ESP += 4; return;
}

/* FUN_10004f3a @ 0x10204f3a (97 bytes, 37 insns) */
void f_10204f3a(void) {
  FTRACE(0x10204f3au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204f3a push ebp */
  push32((uint32_t)(EBP));
  /* 10204f3b mov ebp, esp */
  EBP = (ESP);
  /* 10204f3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10204f40 push esi */
  push32((uint32_t)(ESI));
  /* 10204f41 cmp dword ptr [eax*4 + 0x1020a300], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1020a300))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204f49 lea esi, [eax*4 + 0x1020a300] */
  ESI = ((uint32_t)(EAX*4 + 0x1020a300));
  /* 10204f50 jne 0x10204f90 */
  if (!C.zf) goto L_10204f90;
  /* 10204f52 push edi */
  push32((uint32_t)(EDI));
  /* 10204f53 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10204f55 call 0x10205085 */
  push32(0x10204f5au); f_10205085();
  /* 10204f5a mov edi, eax */
  EDI = (EAX);
  /* 10204f5c pop ecx */
  ECX = (pop32());
  /* 10204f5d test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10204f5f jne 0x10204f69 */
  if (!C.zf) goto L_10204f69;
  /* 10204f61 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10204f63 call 0x10203358 */
  push32(0x10204f68u); f_10203358();
  /* 10204f68 pop ecx */
  ECX = (pop32());
L_10204f69:;
  /* 10204f69 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10204f6b call 0x10204f3a */
  push32(0x10204f70u); f_10204f3a();
  /* 10204f70 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204f73 pop ecx */
  ECX = (pop32());
  /* 10204f74 push edi */
  push32((uint32_t)(EDI));
  /* 10204f75 jne 0x10204f81 */
  if (!C.zf) goto L_10204f81;
  /* 10204f77 call dword ptr [0x1020808c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020808c))), 0x10204f7du);
  /* 10204f7d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10204f7f jmp 0x10204f87 */
  goto L_10204f87;
L_10204f81:;
  /* 10204f81 call 0x1020503d */
  push32(0x10204f86u); f_1020503d();
  /* 10204f86 pop ecx */
  ECX = (pop32());
L_10204f87:;
  /* 10204f87 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10204f89 call 0x10204f9b */
  push32(0x10204f8eu); f_10204f9b();
  /* 10204f8e pop ecx */
  ECX = (pop32());
  /* 10204f8f pop edi */
  EDI = (pop32());
L_10204f90:;
  /* 10204f90 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10204f92 call dword ptr [0x10208000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208000))), 0x10204f98u);
  /* 10204f98 pop esi */
  ESI = (pop32());
  /* 10204f99 pop ebp */
  EBP = (pop32());
  /* 10204f9a ret  */
  ESPCHK(0x10204f3au, _esp0);
  ESP += 4; return;
}

/* FUN_10004f9b @ 0x10204f9b (21 bytes, 7 insns) */
void f_10204f9b(void) {
  FTRACE(0x10204f9bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204f9b push ebp */
  push32((uint32_t)(EBP));
  /* 10204f9c mov ebp, esp */
  EBP = (ESP);
  /* 10204f9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10204fa1 push dword ptr [eax*4 + 0x1020a300] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x1020a300))));
  /* 10204fa8 call dword ptr [0x1020800c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020800c))), 0x10204faeu);
  /* 10204fae pop ebp */
  EBP = (pop32());
  /* 10204faf ret  */
  ESPCHK(0x10204f9bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004fb0 @ 0x10204fb0 (141 bytes, 56 insns) */
void f_10204fb0(void) {
  FTRACE(0x10204fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10204fb0 push ebx */
  push32((uint32_t)(EBX));
  /* 10204fb1 push esi */
  push32((uint32_t)(ESI));
  /* 10204fb2 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10204fb6 push edi */
  push32((uint32_t)(EDI));
  /* 10204fb7 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10204fbc cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204fbf mov ebx, esi */
  EBX = (ESI);
  /* 10204fc1 ja 0x10204fd0 */
  if ((!C.cf&&!C.zf)) goto L_10204fd0;
  /* 10204fc3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10204fc5 jne 0x10204fca */
  if (!C.zf) goto L_10204fca;
  /* 10204fc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10204fc9 pop esi */
  ESI = (pop32());
L_10204fca:;
  /* 10204fca add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10204fcd and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_10204fd0:;
  /* 10204fd0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10204fd2 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204fd5 ja 0x10205011 */
  if ((!C.cf&&!C.zf)) goto L_10205011;
  /* 10204fd7 cmp ebx, dword ptr [0x1020a550] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1020a550))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10204fdd ja 0x10204ffc */
  if ((!C.cf&&!C.zf)) goto L_10204ffc;
  /* 10204fdf push 9 */
  push32((uint32_t)(0x9u));
  /* 10204fe1 call 0x10204f3a */
  push32(0x10204fe6u); f_10204f3a();
  /* 10204fe6 push ebx */
  push32((uint32_t)(EBX));
  /* 10204fe7 call 0x10205cd9 */
  push32(0x10204fecu); f_10205cd9();
  /* 10204fec push 9 */
  push32((uint32_t)(0x9u));
  /* 10204fee mov edi, eax */
  EDI = (EAX);
  /* 10204ff0 call 0x10204f9b */
  push32(0x10204ff5u); f_10204f9b();
  /* 10204ff5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10204ff8 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10204ffa jne 0x10205027 */
  if (!C.zf) goto L_10205027;
L_10204ffc:;
  /* 10204ffc push esi */
  push32((uint32_t)(ESI));
  /* 10204ffd push 8 */
  push32((uint32_t)(0x8u));
  /* 10204fff push dword ptr [0x1020c544] */
  push32((uint32_t)(r32((uint32_t)(0x1020c544))));
  /* 10205005 call dword ptr [0x10208090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208090))), 0x1020500bu);
  /* 1020500b mov edi, eax */
  EDI = (EAX);
  /* 1020500d test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1020500f jne 0x10205033 */
  if (!C.zf) goto L_10205033;
L_10205011:;
  /* 10205011 cmp dword ptr [0x1020b1a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1020b1a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205018 je 0x10205033 */
  if (C.zf) goto L_10205033;
  /* 1020501a push esi */
  push32((uint32_t)(ESI));
  /* 1020501b call 0x10206708 */
  push32(0x10205020u); f_10206708();
  /* 10205020 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10205022 pop ecx */
  ECX = (pop32());
  /* 10205023 je 0x10205039 */
  if (C.zf) goto L_10205039;
  /* 10205025 jmp 0x10204fd0 */
  goto L_10204fd0;
L_10205027:;
  /* 10205027 push ebx */
  push32((uint32_t)(EBX));
  /* 10205028 push 0 */
  push32((uint32_t)(0x0u));
  /* 1020502a push edi */
  push32((uint32_t)(EDI));
  /* 1020502b call 0x102066b0 */
  push32(0x10205030u); f_102066b0();
  /* 10205030 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10205033:;
  /* 10205033 mov eax, edi */
  EAX = (EDI);
L_10205035:;
  /* 10205035 pop edi */
  EDI = (pop32());
  /* 10205036 pop esi */
  ESI = (pop32());
  /* 10205037 pop ebx */
  EBX = (pop32());
  /* 10205038 ret  */
  ESPCHK(0x10204fb0u, _esp0);
  ESP += 4; return;
L_10205039:;
  /* 10205039 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1020503b jmp 0x10205035 */
  goto L_10205035;
}

/* FUN_1000503d @ 0x1020503d (72 bytes, 29 insns) */
void f_1020503d(void) {
  FTRACE(0x1020503du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1020503d push esi */
  push32((uint32_t)(ESI));
  /* 1020503e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10205042 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10205044 je 0x10205083 */
  if (C.zf) goto L_10205083;
  /* 10205046 push 9 */
  push32((uint32_t)(0x9u));
  /* 10205048 call 0x10204f3a */
  push32(0x1020504du); f_10204f3a();
  /* 1020504d push esi */
  push32((uint32_t)(ESI));
  /* 1020504e call 0x10205983 */
  push32(0x10205053u); f_10205983();
  /* 10205053 pop ecx */
  ECX = (pop32());
  /* 10205054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10205056 pop ecx */
  ECX = (pop32());
  /* 10205057 je 0x1020506c */
  if (C.zf) goto L_1020506c;
  /* 10205059 push esi */
  push32((uint32_t)(ESI));
  /* 1020505a push eax */
  push32((uint32_t)(EAX));
  /* 1020505b call 0x102059ae */
  push32(0x10205060u); f_102059ae();
  /* 10205060 push 9 */
  push32((uint32_t)(0x9u));
  /* 10205062 call 0x10204f9b */
  push32(0x10205067u); f_10204f9b();
  /* 10205067 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020506a pop esi */
  ESI = (pop32());
  /* 1020506b ret  */
  ESPCHK(0x1020503du, _esp0);
  ESP += 4; return;
L_1020506c:;
  /* 1020506c push 9 */
  push32((uint32_t)(0x9u));
  /* 1020506e call 0x10204f9b */
  push32(0x10205073u); f_10204f9b();
  /* 10205073 pop ecx */
  ECX = (pop32());
  /* 10205074 push esi */
  push32((uint32_t)(ESI));
  /* 10205075 push 0 */
  push32((uint32_t)(0x0u));
  /* 10205077 push dword ptr [0x1020c544] */
  push32((uint32_t)(r32((uint32_t)(0x1020c544))));
  /* 1020507d call dword ptr [0x10208078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208078))), 0x10205083u);
L_10205083:;
  /* 10205083 pop esi */
  ESI = (pop32());
  /* 10205084 ret  */
  ESPCHK(0x1020503du, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x10205085 (18 bytes, 6 insns) */
void f_10205085(void) {
  FTRACE(0x10205085u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10205085 push dword ptr [0x1020b1a0] */
  push32((uint32_t)(r32((uint32_t)(0x1020b1a0))));
  /* 1020508b push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1020508f call 0x10205097 */
  push32(0x10205094u); f_10205097();
  /* 10205094 pop ecx */
  ECX = (pop32());
  /* 10205095 pop ecx */
  ECX = (pop32());
  /* 10205096 ret  */
  ESPCHK(0x10205085u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10205097 (44 bytes, 16 insns) */
void f_10205097(void) {
  FTRACE(0x10205097u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10205097 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020509c ja 0x102050c0 */
  if ((!C.cf&&!C.zf)) goto L_102050c0;
L_1020509e:;
  /* 1020509e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102050a2 call 0x102050c3 */
  push32(0x102050a7u); f_102050c3();
  /* 102050a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102050a9 pop ecx */
  ECX = (pop32());
  /* 102050aa jne 0x102050c2 */
  if (!C.zf) goto L_102050c2;
  /* 102050ac cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102050b0 je 0x102050c2 */
  if (C.zf) goto L_102050c2;
  /* 102050b2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102050b6 call 0x10206708 */
  push32(0x102050bbu); f_10206708();
  /* 102050bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102050bd pop ecx */
  ECX = (pop32());
  /* 102050be jne 0x1020509e */
  if (!C.zf) goto L_1020509e;
L_102050c0:;
  /* 102050c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102050c2:;
  /* 102050c2 ret  */
  ESPCHK(0x10205097u, _esp0);
  ESP += 4; return;
}

/* FUN_100050c3 @ 0x102050c3 (78 bytes, 30 insns) */
void f_102050c3(void) {
  FTRACE(0x102050c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102050c3 push esi */
  push32((uint32_t)(ESI));
  /* 102050c4 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102050c8 cmp esi, dword ptr [0x1020a550] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1020a550))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102050ce push edi */
  push32((uint32_t)(EDI));
  /* 102050cf ja 0x102050f2 */
  if ((!C.cf&&!C.zf)) goto L_102050f2;
  /* 102050d1 push 9 */
  push32((uint32_t)(0x9u));
  /* 102050d3 call 0x10204f3a */
  push32(0x102050d8u); f_10204f3a();
  /* 102050d8 push esi */
  push32((uint32_t)(ESI));
  /* 102050d9 call 0x10205cd9 */
  push32(0x102050deu); f_10205cd9();
  /* 102050de push 9 */
  push32((uint32_t)(0x9u));
  /* 102050e0 mov edi, eax */
  EDI = (EAX);
  /* 102050e2 call 0x10204f9b */
  push32(0x102050e7u); f_10204f9b();
  /* 102050e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102050ea test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102050ec je 0x102050f2 */
  if (C.zf) goto L_102050f2;
  /* 102050ee mov eax, edi */
  EAX = (EDI);
  /* 102050f0 jmp 0x1020510e */
  goto L_1020510e;
L_102050f2:;
  /* 102050f2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102050f4 jne 0x102050f9 */
  if (!C.zf) goto L_102050f9;
  /* 102050f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102050f8 pop esi */
  ESI = (pop32());
L_102050f9:;
  /* 102050f9 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102050fc and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 102050ff push esi */
  push32((uint32_t)(ESI));
  /* 10205100 push 0 */
  push32((uint32_t)(0x0u));
  /* 10205102 push dword ptr [0x1020c544] */
  push32((uint32_t)(r32((uint32_t)(0x1020c544))));
  /* 10205108 call dword ptr [0x10208090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208090))), 0x1020510eu);
L_1020510e:;
  /* 1020510e pop edi */
  EDI = (pop32());
  /* 1020510f pop esi */
  ESI = (pop32());
  /* 10205110 ret  */
  ESPCHK(0x102050c3u, _esp0);
  ESP += 4; return;
}

/* FUN_10005120 @ 0x10205120 (7 bytes, 3 insns) */
void f_10205120(void) {
  FTRACE(0x10205120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10205120 push edi */
  push32((uint32_t)(EDI));
  /* 10205121 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10205125 jmp 0x10205191 */
  jmp_ind(0x10205191u); return;
}

/* FUN_10005130 @ 0x10205130 (224 bytes, 84 insns) */
void f_10205130(void) {
  FTRACE(0x10205130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10205130 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10205134 push edi */
  push32((uint32_t)(EDI));
  /* 10205135 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1020513b je 0x1020514c */
  if (C.zf) goto L_1020514c;
L_1020513d:;
  /* 1020513d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1020513f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10205140 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10205142 je 0x1020517f */
  if (C.zf) goto L_1020517f;
  /* 10205144 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1020514a jne 0x1020513d */
  if (!C.zf) goto L_1020513d;
L_1020514c:;
  /* 1020514c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1020514e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10205153 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10205155 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10205158 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1020515a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1020515d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10205162 je 0x1020514c */
  if (C.zf) goto L_1020514c;
  /* 10205164 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10205167 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10205169 je 0x1020518e */
  if (C.zf) goto L_1020518e;
  /* 1020516b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1020516d je 0x10205189 */
  if (C.zf) goto L_10205189;
  /* 1020516f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10205174 je 0x10205184 */
  if (C.zf) goto L_10205184;
  /* 10205176 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1020517b je 0x1020517f */
  if (C.zf) goto L_1020517f;
  /* 1020517d jmp 0x1020514c */
  goto L_1020514c;
L_1020517f:;
  /* 1020517f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10205182 jmp 0x10205191 */
  goto L_10205191;
L_10205184:;
  /* 10205184 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10205187 jmp 0x10205191 */
  goto L_10205191;
L_10205189:;
  /* 10205189 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1020518c jmp 0x10205191 */
  goto L_10205191;
L_1020518e:;
  /* 1020518e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10205191:;
  /* 10205191 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10205195 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1020519b je 0x102051b6 */
  if (C.zf) goto L_102051b6;
L_1020519d:;
  /* 1020519d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1020519f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102051a0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102051a2 je 0x10205208 */
  if (C.zf) goto L_10205208;
  /* 102051a4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 102051a6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102051a7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102051ad jne 0x1020519d */
  if (!C.zf) goto L_1020519d;
  /* 102051af jmp 0x102051b6 */
  goto L_102051b6;
L_102051b1:;
  /* 102051b1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102051b3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102051b6:;
  /* 102051b6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102051bb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102051bd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102051bf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102051c2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102051c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 102051c6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102051c9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102051ce je 0x102051b1 */
  if (C.zf) goto L_102051b1;
  /* 102051d0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102051d2 je 0x10205208 */
  if (C.zf) goto L_10205208;
  /* 102051d4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 102051d6 je 0x102051ff */
  if (C.zf) goto L_102051ff;
  /* 102051d8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 102051de je 0x102051f2 */
  if (C.zf) goto L_102051f2;
  /* 102051e0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 102051e6 je 0x102051ea */
  if (C.zf) goto L_102051ea;
  /* 102051e8 jmp 0x102051b1 */
  goto L_102051b1;
L_102051ea:;
  /* 102051ea mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102051ec mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102051f0 pop edi */
  EDI = (pop32());
  /* 102051f1 ret  */
  ESPCHK(0x10205130u, _esp0);
  ESP += 4; return;
L_102051f2:;
  /* 102051f2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 102051f5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102051f9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 102051fd pop edi */
  EDI = (pop32());
  /* 102051fe ret  */
  ESPCHK(0x10205130u, _esp0);
  ESP += 4; return;
L_102051ff:;
  /* 102051ff mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10205202 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10205206 pop edi */
  EDI = (pop32());
  /* 10205207 ret  */
  ESPCHK(0x10205130u, _esp0);
  ESP += 4; return;
L_10205208:;
  /* 10205208 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1020520a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1020520e pop edi */
  EDI = (pop32());
  /* 1020520f ret  */
  ESPCHK(0x10205130u, _esp0);
  ESP += 4; return;
}

/* FUN_10005210 @ 0x10205210 (429 bytes, 143 insns) */
void f_10205210(void) {
  FTRACE(0x10205210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10205210 push ebp */
  push32((uint32_t)(EBP));
  /* 10205211 mov ebp, esp */
  EBP = (ESP);
  /* 10205213 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10205216 push ebx */
  push32((uint32_t)(EBX));
  /* 10205217 push esi */
  push32((uint32_t)(ESI));
  /* 10205218 push edi */
  push32((uint32_t)(EDI));
  /* 10205219 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1020521b call 0x10204f3a */
  push32(0x10205220u); f_10204f3a();
  /* 10205220 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10205223 call 0x102053bd */
  push32(0x10205228u); f_102053bd();
  /* 10205228 mov ebx, eax */
  EBX = (EAX);
  /* 1020522a pop ecx */
  ECX = (pop32());
  /* 1020522b cmp ebx, dword ptr [0x1020b308] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1020b308))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205231 pop ecx */
  ECX = (pop32());
  /* 10205232 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10205235 jne 0x1020523e */
  if (!C.zf) goto L_1020523e;
L_10205237:;
  /* 10205237 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10205239 jmp 0x102053ae */
  goto L_102053ae;
L_1020523e:;
  /* 1020523e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10205240 je 0x1020539c */
  if (C.zf) goto L_1020539c;
  /* 10205246 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10205248 mov eax, 0x1020a458 */
  EAX = (0x1020a458u);
L_1020524d:;
  /* 1020524d cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020524f je 0x102052c5 */
  if (C.zf) goto L_102052c5;
  /* 10205251 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10205254 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10205255 cmp eax, 0x1020a548 */
  { uint32_t _a=(EAX),_b=(0x1020a548u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020525a jl 0x1020524d */
  if ((C.sf!=C.of)) goto L_1020524d;
  /* 1020525c lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1020525f push eax */
  push32((uint32_t)(EAX));
  /* 10205260 push ebx */
  push32((uint32_t)(EBX));
  /* 10205261 call dword ptr [0x10208094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208094))), 0x10205267u);
  /* 10205267 push 1 */
  push32((uint32_t)(0x1u));
  /* 10205269 pop esi */
  ESI = (pop32());
  /* 1020526a cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020526c jne 0x10205393 */
  if (!C.zf) goto L_10205393;
  /* 10205272 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10205274 and dword ptr [0x1020b524], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1020b524)))&(0x0u); w32((uint32_t)(0x1020b524), (_r)); fl_logic(_r,32); }
  /* 1020527b pop ecx */
  ECX = (pop32());
  /* 1020527c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1020527e mov edi, 0x1020b420 */
  EDI = (0x1020b420u);
  /* 10205283 cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205286 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10205288 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10205289 mov dword ptr [0x1020b308], ebx */
  w32((uint32_t)(0x1020b308), (EBX));
  /* 1020528f jbe 0x10205380 */
  if ((C.cf||C.zf)) goto L_10205380;
  /* 10205295 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10205299 je 0x1020535b */
  if (C.zf) goto L_1020535b;
  /* 1020529f lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_102052a2:;
  /* 102052a2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 102052a4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102052a6 je 0x1020535b */
  if (C.zf) goto L_1020535b;
  /* 102052ac movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 102052b0 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_102052b3:;
  /* 102052b3 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102052b5 ja 0x1020534f */
  if ((!C.cf&&!C.zf)) goto L_1020534f;
  /* 102052bb or byte ptr [eax + 0x1020b421], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1020b421)))|(0x4u); w8((uint32_t)(EAX + 0x1020b421), (_r)); fl_logic(_r,8); }
  /* 102052c2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102052c3 jmp 0x102052b3 */
  goto L_102052b3;
L_102052c5:;
  /* 102052c5 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102052c9 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102052cb pop ecx */
  ECX = (pop32());
  /* 102052cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102052ce mov edi, 0x1020b420 */
  EDI = (0x1020b420u);
  /* 102052d3 lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 102052d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102052d8 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 102052db stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 102052dc lea ebx, [esi + 0x1020a468] */
  EBX = ((uint32_t)(ESI + 0x1020a468));
L_102052e2:;
  /* 102052e2 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102052e5 mov ecx, ebx */
  ECX = (EBX);
  /* 102052e7 je 0x10205315 */
  if (C.zf) goto L_10205315;
L_102052e9:;
  /* 102052e9 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 102052ec test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102052ee je 0x10205315 */
  if (C.zf) goto L_10205315;
  /* 102052f0 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 102052f3 movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 102052f6 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102052f8 ja 0x1020530e */
  if ((!C.cf&&!C.zf)) goto L_1020530e;
  /* 102052fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102052fd mov dl, byte ptr [edx + 0x1020a450] */
  DL = (r8((uint32_t)(EDX + 0x1020a450)));
L_10205303:;
  /* 10205303 or byte ptr [eax + 0x1020b421], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1020b421)))|(DL); w8((uint32_t)(EAX + 0x1020b421), (_r)); fl_logic(_r,8); }
  /* 10205309 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1020530a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020530c jbe 0x10205303 */
  if ((C.cf||C.zf)) goto L_10205303;
L_1020530e:;
  /* 1020530e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1020530f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10205310 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10205313 jne 0x102052e9 */
  if (!C.zf) goto L_102052e9;
L_10205315:;
  /* 10205315 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10205318 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1020531b cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020531f jb 0x102052e2 */
  if (C.cf) goto L_102052e2;
  /* 10205321 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10205324 mov dword ptr [0x1020b31c], 1 */
  w32((uint32_t)(0x1020b31c), (0x1u));
  /* 1020532e push eax */
  push32((uint32_t)(EAX));
  /* 1020532f mov dword ptr [0x1020b308], eax */
  w32((uint32_t)(0x1020b308), (EAX));
  /* 10205334 call 0x10205407 */
  push32(0x10205339u); f_10205407();
  /* 10205339 lea esi, [esi + 0x1020a45c] */
  ESI = ((uint32_t)(ESI + 0x1020a45c));
  /* 1020533f mov edi, 0x1020b310 */
  EDI = (0x1020b310u);
  /* 10205344 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10205345 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10205346 pop ecx */
  ECX = (pop32());
  /* 10205347 mov dword ptr [0x1020b524], eax */
  w32((uint32_t)(0x1020b524), (EAX));
  /* 1020534c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1020534d jmp 0x102053a1 */
  goto L_102053a1;
L_1020534f:;
  /* 1020534f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10205350 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10205351 cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10205355 jne 0x102052a2 */
  if (!C.zf) goto L_102052a2;
L_1020535b:;
  /* 1020535b mov eax, esi */
  EAX = (ESI);
L_1020535d:;
  /* 1020535d or byte ptr [eax + 0x1020b421], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1020b421)))|(0x8u); w8((uint32_t)(EAX + 0x1020b421), (_r)); fl_logic(_r,8); }
  /* 10205364 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10205365 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020536a jb 0x1020535d */
  if (C.cf) goto L_1020535d;
  /* 1020536c push ebx */
  push32((uint32_t)(EBX));
  /* 1020536d call 0x10205407 */
  push32(0x10205372u); f_10205407();
  /* 10205372 pop ecx */
  ECX = (pop32());
  /* 10205373 mov dword ptr [0x1020b524], eax */
  w32((uint32_t)(0x1020b524), (EAX));
  /* 10205378 mov dword ptr [0x1020b31c], esi */
  w32((uint32_t)(0x1020b31c), (ESI));
  /* 1020537e jmp 0x10205387 */
  goto L_10205387;
L_10205380:;
  /* 10205380 and dword ptr [0x1020b31c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1020b31c)))&(0x0u); w32((uint32_t)(0x1020b31c), (_r)); fl_logic(_r,32); }
L_10205387:;
  /* 10205387 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10205389 mov edi, 0x1020b310 */
  EDI = (0x1020b310u);
  /* 1020538e stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1020538f stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10205390 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10205391 jmp 0x102053a1 */
  goto L_102053a1;
L_10205393:;
  /* 10205393 cmp dword ptr [0x1020b160], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1020b160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020539a je 0x102053ab */
  if (C.zf) goto L_102053ab;
L_1020539c:;
  /* 1020539c call 0x1020543a */
  push32(0x102053a1u); f_1020543a();
L_102053a1:;
  /* 102053a1 call 0x10205463 */
  push32(0x102053a6u); f_10205463();
  /* 102053a6 jmp 0x10205237 */
  goto L_10205237;
L_102053ab:;
  /* 102053ab or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_102053ae:;
  /* 102053ae push 0x19 */
  push32((uint32_t)(0x19u));
  /* 102053b0 call 0x10204f9b */
  push32(0x102053b5u); f_10204f9b();
  /* 102053b5 pop ecx */
  ECX = (pop32());
  /* 102053b6 mov eax, esi */
  EAX = (ESI);
  /* 102053b8 pop edi */
  EDI = (pop32());
  /* 102053b9 pop esi */
  ESI = (pop32());
  /* 102053ba pop ebx */
  EBX = (pop32());
  /* 102053bb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102053bc ret  */
  ESPCHK(0x10205210u, _esp0);
  ESP += 4; return;
}

/* FUN_100053bd @ 0x102053bd (74 bytes, 15 insns) */
void f_102053bd(void) {
  FTRACE(0x102053bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102053bd mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102053c1 and dword ptr [0x1020b160], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1020b160)))&(0x0u); w32((uint32_t)(0x1020b160), (_r)); fl_logic(_r,32); }
  /* 102053c8 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102053cb jne 0x102053dd */
  if (!C.zf) goto L_102053dd;
  /* 102053cd mov dword ptr [0x1020b160], 1 */
  w32((uint32_t)(0x1020b160), (0x1u));
  /* 102053d7 jmp dword ptr [0x1020809c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1020809c)))); return;
L_102053dd:;
  /* 102053dd cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102053e0 jne 0x102053f2 */
  if (!C.zf) goto L_102053f2;
  /* 102053e2 mov dword ptr [0x1020b160], 1 */
  w32((uint32_t)(0x1020b160), (0x1u));
  /* 102053ec jmp dword ptr [0x10208098] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10208098)))); return;
L_102053f2:;
  /* 102053f2 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102053f5 jne 0x10205406 */
  if (!C.zf) goto L_10205406;
  /* 102053f7 mov eax, dword ptr [0x1020b194] */
  EAX = (r32((uint32_t)(0x1020b194)));
  /* 102053fc mov dword ptr [0x1020b160], 1 */
  w32((uint32_t)(0x1020b160), (0x1u));
L_10205406:;
  /* 10205406 ret  */
  ESPCHK(0x102053bdu, _esp0);
  ESP += 4; return;
}

/* FUN_10005407 @ 0x10205407 (51 bytes, 19 insns) */
void f_10205407(void) {
  FTRACE(0x10205407u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10205407 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1020540b sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10205410 je 0x10205434 */
  if (C.zf) goto L_10205434;
  /* 10205412 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10205415 je 0x1020542e */
  if (C.zf) goto L_1020542e;
  /* 10205417 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1020541a je 0x10205428 */
  if (C.zf) goto L_10205428;
  /* 1020541c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1020541d je 0x10205422 */
  if (C.zf) goto L_10205422;
  /* 1020541f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10205421 ret  */
  ESPCHK(0x10205407u, _esp0);
  ESP += 4; return;
L_10205422:;
  /* 10205422 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10205427 ret  */
  ESPCHK(0x10205407u, _esp0);
  ESP += 4; return;
L_10205428:;
  /* 10205428 mov eax, 0x412 */
  EAX = (0x412u);
  /* 1020542d ret  */
  ESPCHK(0x10205407u, _esp0);
  ESP += 4; return;
L_1020542e:;
  /* 1020542e mov eax, 0x804 */
  EAX = (0x804u);
  /* 10205433 ret  */
  ESPCHK(0x10205407u, _esp0);
  ESP += 4; return;
L_10205434:;
  /* 10205434 mov eax, 0x411 */
  EAX = (0x411u);
  /* 10205439 ret  */
  ESPCHK(0x10205407u, _esp0);
  ESP += 4; return;
}

/* FUN_1000543a @ 0x1020543a (41 bytes, 17 insns) */
void f_1020543a(void) {
  FTRACE(0x1020543au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1020543a push edi */
  push32((uint32_t)(EDI));
  /* 1020543b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1020543d pop ecx */
  ECX = (pop32());
  /* 1020543e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10205440 mov edi, 0x1020b420 */
  EDI = (0x1020b420u);
  /* 10205445 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10205447 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10205448 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1020544a mov edi, 0x1020b310 */
  EDI = (0x1020b310u);
  /* 1020544f mov dword ptr [0x1020b308], eax */
  w32((uint32_t)(0x1020b308), (EAX));
  /* 10205454 mov dword ptr [0x1020b31c], eax */
  w32((uint32_t)(0x1020b31c), (EAX));
  /* 10205459 mov dword ptr [0x1020b524], eax */
  w32((uint32_t)(0x1020b524), (EAX));
  /* 1020545e stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1020545f stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10205460 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10205461 pop edi */
  EDI = (pop32());
  /* 10205462 ret  */
  ESPCHK(0x1020543au, _esp0);
  ESP += 4; return;
}

/* FUN_10005463 @ 0x10205463 (389 bytes, 124 insns) */
void f_10205463(void) {
  FTRACE(0x10205463u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10205463 push ebp */
  push32((uint32_t)(EBP));
  /* 10205464 mov ebp, esp */
  EBP = (ESP);
  /* 10205466 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1020546c lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1020546f push esi */
  push32((uint32_t)(ESI));
  /* 10205470 push eax */
  push32((uint32_t)(EAX));
  /* 10205471 push dword ptr [0x1020b308] */
  push32((uint32_t)(r32((uint32_t)(0x1020b308))));
  /* 10205477 call dword ptr [0x10208094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208094))), 0x1020547du);
  /* 1020547d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205480 jne 0x1020559c */
  if (!C.zf) goto L_1020559c;
  /* 10205486 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10205488 mov esi, 0x100 */
  ESI = (0x100u);
L_1020548d:;
  /* 1020548d mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 10205494 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10205495 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205497 jb 0x1020548d */
  if (C.cf) goto L_1020548d;
  /* 10205499 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 1020549c mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 102054a3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102054a5 je 0x102054de */
  if (C.zf) goto L_102054de;
  /* 102054a7 push ebx */
  push32((uint32_t)(EBX));
  /* 102054a8 push edi */
  push32((uint32_t)(EDI));
  /* 102054a9 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_102054ac:;
  /* 102054ac movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 102054af movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 102054b2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102054b4 ja 0x102054d3 */
  if ((!C.cf&&!C.zf)) goto L_102054d3;
  /* 102054b6 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102054b8 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 102054bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102054c0 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 102054c5 mov ebx, ecx */
  EBX = (ECX);
  /* 102054c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102054ca rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102054cc mov ecx, ebx */
  ECX = (EBX);
  /* 102054ce and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 102054d1 rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_102054d3:;
  /* 102054d3 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102054d4 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102054d5 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 102054d8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102054da jne 0x102054ac */
  if (!C.zf) goto L_102054ac;
  /* 102054dc pop edi */
  EDI = (pop32());
  /* 102054dd pop ebx */
  EBX = (pop32());
L_102054de:;
  /* 102054de push 0 */
  push32((uint32_t)(0x0u));
  /* 102054e0 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 102054e6 push dword ptr [0x1020b524] */
  push32((uint32_t)(r32((uint32_t)(0x1020b524))));
  /* 102054ec push dword ptr [0x1020b308] */
  push32((uint32_t)(r32((uint32_t)(0x1020b308))));
  /* 102054f2 push eax */
  push32((uint32_t)(EAX));
  /* 102054f3 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 102054f9 push esi */
  push32((uint32_t)(ESI));
  /* 102054fa push eax */
  push32((uint32_t)(EAX));
  /* 102054fb push 1 */
  push32((uint32_t)(0x1u));
  /* 102054fd call 0x10206972 */
  push32(0x10205502u); f_10206972();
  /* 10205502 push 0 */
  push32((uint32_t)(0x0u));
  /* 10205504 lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 1020550a push dword ptr [0x1020b308] */
  push32((uint32_t)(r32((uint32_t)(0x1020b308))));
  /* 10205510 push esi */
  push32((uint32_t)(ESI));
  /* 10205511 push eax */
  push32((uint32_t)(EAX));
  /* 10205512 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10205518 push esi */
  push32((uint32_t)(ESI));
  /* 10205519 push eax */
  push32((uint32_t)(EAX));
  /* 1020551a push esi */
  push32((uint32_t)(ESI));
  /* 1020551b push dword ptr [0x1020b524] */
  push32((uint32_t)(r32((uint32_t)(0x1020b524))));
  /* 10205521 call 0x10206723 */
  push32(0x10205526u); f_10206723();
  /* 10205526 push 0 */
  push32((uint32_t)(0x0u));
  /* 10205528 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 1020552e push dword ptr [0x1020b308] */
  push32((uint32_t)(r32((uint32_t)(0x1020b308))));
  /* 10205534 push esi */
  push32((uint32_t)(ESI));
  /* 10205535 push eax */
  push32((uint32_t)(EAX));
  /* 10205536 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1020553c push esi */
  push32((uint32_t)(ESI));
  /* 1020553d push eax */
  push32((uint32_t)(EAX));
  /* 1020553e push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10205543 push dword ptr [0x1020b524] */
  push32((uint32_t)(r32((uint32_t)(0x1020b524))));
  /* 10205549 call 0x10206723 */
  push32(0x1020554eu); f_10206723();
  /* 1020554e add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10205551 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10205553 lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_10205559:;
  /* 10205559 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1020555c test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1020555f je 0x10205577 */
  if (C.zf) goto L_10205577;
  /* 10205561 or byte ptr [eax + 0x1020b421], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1020b421)))|(0x10u); w8((uint32_t)(EAX + 0x1020b421), (_r)); fl_logic(_r,8); }
  /* 10205568 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1020556f:;
  /* 1020556f mov byte ptr [eax + 0x1020b320], dl */
  w8((uint32_t)(EAX + 0x1020b320), (DL));
  /* 10205575 jmp 0x10205593 */
  goto L_10205593;
L_10205577:;
  /* 10205577 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 1020557a je 0x1020558c */
  if (C.zf) goto L_1020558c;
  /* 1020557c or byte ptr [eax + 0x1020b421], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1020b421)))|(0x20u); w8((uint32_t)(EAX + 0x1020b421), (_r)); fl_logic(_r,8); }
  /* 10205583 mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 1020558a jmp 0x1020556f */
  goto L_1020556f;
L_1020558c:;
  /* 1020558c and byte ptr [eax + 0x1020b320], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1020b320)))&(0x0u); w8((uint32_t)(EAX + 0x1020b320), (_r)); fl_logic(_r,8); }
L_10205593:;
  /* 10205593 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10205594 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10205595 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10205596 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205598 jb 0x10205559 */
  if (C.cf) goto L_10205559;
  /* 1020559a jmp 0x102055e5 */
  goto L_102055e5;
L_1020559c:;
  /* 1020559c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1020559e mov esi, 0x100 */
  ESI = (0x100u);
L_102055a3:;
  /* 102055a3 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102055a6 jb 0x102055c1 */
  if (C.cf) goto L_102055c1;
  /* 102055a8 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102055ab ja 0x102055c1 */
  if ((!C.cf&&!C.zf)) goto L_102055c1;
  /* 102055ad or byte ptr [eax + 0x1020b421], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1020b421)))|(0x10u); w8((uint32_t)(EAX + 0x1020b421), (_r)); fl_logic(_r,8); }
  /* 102055b4 mov cl, al */
  CL = (AL);
  /* 102055b6 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_102055b9:;
  /* 102055b9 mov byte ptr [eax + 0x1020b320], cl */
  w8((uint32_t)(EAX + 0x1020b320), (CL));
  /* 102055bf jmp 0x102055e0 */
  goto L_102055e0;
L_102055c1:;
  /* 102055c1 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102055c4 jb 0x102055d9 */
  if (C.cf) goto L_102055d9;
  /* 102055c6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102055c9 ja 0x102055d9 */
  if ((!C.cf&&!C.zf)) goto L_102055d9;
  /* 102055cb or byte ptr [eax + 0x1020b421], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1020b421)))|(0x20u); w8((uint32_t)(EAX + 0x1020b421), (_r)); fl_logic(_r,8); }
  /* 102055d2 mov cl, al */
  CL = (AL);
  /* 102055d4 sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102055d7 jmp 0x102055b9 */
  goto L_102055b9;
L_102055d9:;
  /* 102055d9 and byte ptr [eax + 0x1020b320], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1020b320)))&(0x0u); w8((uint32_t)(EAX + 0x1020b320), (_r)); fl_logic(_r,8); }
L_102055e0:;
  /* 102055e0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102055e1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102055e3 jb 0x102055a3 */
  if (C.cf) goto L_102055a3;
L_102055e5:;
  /* 102055e5 pop esi */
  ESI = (pop32());
  /* 102055e6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102055e7 ret  */
  ESPCHK(0x10205463u, _esp0);
  ESP += 4; return;
}

/* FUN_100055e8 @ 0x102055e8 (28 bytes, 7 insns) */
void f_102055e8(void) {
  FTRACE(0x102055e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102055e8 cmp dword ptr [0x1020c668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1020c668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102055ef jne 0x10205603 */
  if (!C.zf) goto L_10205603;
  /* 102055f1 push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 102055f3 call 0x10205210 */
  push32(0x102055f8u); f_10205210();
  /* 102055f8 pop ecx */
  ECX = (pop32());
  /* 102055f9 mov dword ptr [0x1020c668], 1 */
  w32((uint32_t)(0x1020c668), (0x1u));
L_10205603:;
  /* 10205603 ret  */
  ESPCHK(0x102055e8u, _esp0);
  ESP += 4; return;
}

/* FUN_10005610 @ 0x10205610 (664 bytes, 267 insns) [15 switch table(s)] */
void f_10205610(void) {
  FTRACE(0x10205610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10205610 push ebp */
  push32((uint32_t)(EBP));
  /* 10205611 mov ebp, esp */
  EBP = (ESP);
  /* 10205613 push edi */
  push32((uint32_t)(EDI));
  /* 10205614 push esi */
  push32((uint32_t)(ESI));
  /* 10205615 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10205618 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1020561b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1020561e mov eax, ecx */
  EAX = (ECX);
  /* 10205620 mov edx, ecx */
  EDX = (ECX);
  /* 10205622 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10205624 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205626 jbe 0x10205630 */
  if ((C.cf||C.zf)) goto L_10205630;
  /* 10205628 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020562a jb 0x102057a8 */
  if (C.cf) goto L_102057a8;
L_10205630:;
  /* 10205630 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10205636 jne 0x1020564c */
  if (!C.zf) goto L_1020564c;
  /* 10205638 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1020563b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1020563e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205641 jb 0x1020566c */
  if (C.cf) goto L_1020566c;
  /* 10205643 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10205645 jmp dword ptr [edx*4 + 0x10205758] */
  switch (EDX) {
    case 0: goto L_10205768;
    case 1: goto L_10205770;
    case 2: goto L_1020577c;
    case 3: goto L_10205790;
    default: x86_unimpl("switch@0x10205645 out of table"); return;
  }
L_1020564c:;
  /* 1020564c mov eax, edi */
  EAX = (EDI);
  /* 1020564e mov edx, 3 */
  EDX = (0x3u);
  /* 10205653 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10205656 jb 0x10205664 */
  if (C.cf) goto L_10205664;
  /* 10205658 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1020565b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1020565d jmp dword ptr [eax*4 + 0x10205670] */
  switch (EAX) {
    case 1: goto L_10205680;
    case 2: goto L_102056ac;
    case 3: goto L_102056d0;
    default: x86_unimpl("switch@0x1020565d out of table"); return;
  }
L_10205664:;
  /* 10205664 jmp dword ptr [ecx*4 + 0x10205768] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10205768)))); return;
  /* 1020566b nop  */
  /* nop */
L_1020566c:;
  /* 1020566c jmp dword ptr [ecx*4 + 0x102056ec] */
  switch (ECX) {
    case 0: goto L_1020574f;
    case 1: goto L_1020573c;
    case 2: goto L_10205734;
    case 3: goto L_1020572c;
    case 4: goto L_10205724;
    case 5: goto L_1020571c;
    case 6: goto L_10205714;
    case 7: goto L_1020570c;
    default: x86_unimpl("switch@0x1020566c out of table"); return;
  }
  /* 10205673 nop  */
  /* nop */
L_10205680:;
  /* 10205680 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10205682 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10205684 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10205686 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10205689 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1020568c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1020568f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10205692 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10205695 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10205698 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1020569b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020569e jb 0x1020566c */
  if (C.cf) goto L_1020566c;
  /* 102056a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102056a2 jmp dword ptr [edx*4 + 0x10205758] */
  switch (EDX) {
    case 0: goto L_10205768;
    case 1: goto L_10205770;
    case 2: goto L_1020577c;
    case 3: goto L_10205790;
    default: x86_unimpl("switch@0x102056a2 out of table"); return;
  }
  /* 102056a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102056ac:;
  /* 102056ac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102056ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102056b0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102056b2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102056b5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102056b8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102056bb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102056be add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102056c1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102056c4 jb 0x1020566c */
  if (C.cf) goto L_1020566c;
  /* 102056c6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102056c8 jmp dword ptr [edx*4 + 0x10205758] */
  switch (EDX) {
    case 0: goto L_10205768;
    case 1: goto L_10205770;
    case 2: goto L_1020577c;
    case 3: goto L_10205790;
    default: x86_unimpl("switch@0x102056c8 out of table"); return;
  }
  /* 102056cf nop  */
  /* nop */
L_102056d0:;
  /* 102056d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102056d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102056d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102056d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102056d7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102056da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102056db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102056de jb 0x1020566c */
  if (C.cf) goto L_1020566c;
  /* 102056e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102056e2 jmp dword ptr [edx*4 + 0x10205758] */
  switch (EDX) {
    case 0: goto L_10205768;
    case 1: goto L_10205770;
    case 2: goto L_1020577c;
    case 3: goto L_10205790;
    default: x86_unimpl("switch@0x102056e2 out of table"); return;
  }
  /* 102056e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1020570c:;
  /* 1020570c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10205710 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10205714:;
  /* 10205714 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10205718 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1020571c:;
  /* 1020571c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10205720 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10205724:;
  /* 10205724 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10205728 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1020572c:;
  /* 1020572c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10205730 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10205734:;
  /* 10205734 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10205738 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1020573c:;
  /* 1020573c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10205740 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10205744 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1020574b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1020574d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1020574f:;
  /* 1020574f jmp dword ptr [edx*4 + 0x10205758] */
  switch (EDX) {
    case 0: goto L_10205768;
    case 1: goto L_10205770;
    case 2: goto L_1020577c;
    case 3: goto L_10205790;
    default: x86_unimpl("switch@0x1020574f out of table"); return;
  }
  /* 10205756 mov edi, edi */
  EDI = (EDI);
L_10205768:;
  /* 10205768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1020576b pop esi */
  ESI = (pop32());
  /* 1020576c pop edi */
  EDI = (pop32());
  /* 1020576d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1020576e ret  */
  ESPCHK(0x10205610u, _esp0);
  ESP += 4; return;
  /* 1020576f nop  */
  /* nop */
L_10205770:;
  /* 10205770 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10205772 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10205774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10205777 pop esi */
  ESI = (pop32());
  /* 10205778 pop edi */
  EDI = (pop32());
  /* 10205779 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1020577a ret  */
  ESPCHK(0x10205610u, _esp0);
  ESP += 4; return;
  /* 1020577b nop  */
  /* nop */
L_1020577c:;
  /* 1020577c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1020577e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10205780 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10205783 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10205786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10205789 pop esi */
  ESI = (pop32());
  /* 1020578a pop edi */
  EDI = (pop32());
  /* 1020578b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1020578c ret  */
  ESPCHK(0x10205610u, _esp0);
  ESP += 4; return;
  /* 1020578d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10205790:;
  /* 10205790 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10205792 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10205794 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10205797 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1020579a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1020579d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102057a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102057a3 pop esi */
  ESI = (pop32());
  /* 102057a4 pop edi */
  EDI = (pop32());
  /* 102057a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102057a6 ret  */
  ESPCHK(0x10205610u, _esp0);
  ESP += 4; return;
  /* 102057a7 nop  */
  /* nop */
L_102057a8:;
  /* 102057a8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 102057ac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 102057b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102057b6 jne 0x102057dc */
  if (!C.zf) goto L_102057dc;
  /* 102057b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102057bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102057be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102057c1 jb 0x102057d0 */
  if (C.cf) goto L_102057d0;
  /* 102057c3 std  */
  C.df=1;
  /* 102057c4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102057c6 cld  */
  C.df=0;
  /* 102057c7 jmp dword ptr [edx*4 + 0x102058f0] */
  switch (EDX) {
    case 0: goto L_10205900;
    case 1: goto L_10205908;
    case 2: goto L_10205918;
    case 3: goto L_1020592c;
    default: x86_unimpl("switch@0x102057c7 out of table"); return;
  }
  /* 102057ce mov edi, edi */
  EDI = (EDI);
L_102057d0:;
  /* 102057d0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102057d2 jmp dword ptr [ecx*4 + 0x102058a0] */
  switch (ECX) {
    case 0: goto L_102058e7;
    default: x86_unimpl("switch@0x102057d2 out of table"); return;
  }
  /* 102057d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102057dc:;
  /* 102057dc mov eax, edi */
  EAX = (EDI);
  /* 102057de mov edx, 3 */
  EDX = (0x3u);
  /* 102057e3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102057e6 jb 0x102057f4 */
  if (C.cf) goto L_102057f4;
  /* 102057e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102057eb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102057ed jmp dword ptr [eax*4 + 0x102057f8] */
  switch (EAX) {
    case 1: goto L_10205808;
    case 2: goto L_10205828;
    case 3: goto L_10205850;
    default: x86_unimpl("switch@0x102057ed out of table"); return;
  }
L_102057f4:;
  /* 102057f4 jmp dword ptr [ecx*4 + 0x102058f0] */
  switch (ECX) {
    case 0: goto L_10205900;
    case 1: goto L_10205908;
    case 2: goto L_10205918;
    case 3: goto L_1020592c;
    default: x86_unimpl("switch@0x102057f4 out of table"); return;
  }
  /* 102057fb nop  */
  /* nop */
L_10205808:;
  /* 10205808 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1020580b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1020580d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10205810 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10205811 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10205814 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10205815 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205818 jb 0x102057d0 */
  if (C.cf) goto L_102057d0;
  /* 1020581a std  */
  C.df=1;
  /* 1020581b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1020581d cld  */
  C.df=0;
  /* 1020581e jmp dword ptr [edx*4 + 0x102058f0] */
  switch (EDX) {
    case 0: goto L_10205900;
    case 1: goto L_10205908;
    case 2: goto L_10205918;
    case 3: goto L_1020592c;
    default: x86_unimpl("switch@0x1020581e out of table"); return;
  }
  /* 10205825 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10205828:;
  /* 10205828 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1020582b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1020582d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10205830 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10205833 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10205836 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10205839 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1020583c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1020583f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205842 jb 0x102057d0 */
  if (C.cf) goto L_102057d0;
  /* 10205844 std  */
  C.df=1;
  /* 10205845 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10205847 cld  */
  C.df=0;
  /* 10205848 jmp dword ptr [edx*4 + 0x102058f0] */
  switch (EDX) {
    case 0: goto L_10205900;
    case 1: goto L_10205908;
    case 2: goto L_10205918;
    case 3: goto L_1020592c;
    default: x86_unimpl("switch@0x10205848 out of table"); return;
  }
  /* 1020584f nop  */
  /* nop */
L_10205850:;
  /* 10205850 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10205853 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10205855 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10205858 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1020585b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1020585e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10205861 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10205864 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10205867 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1020586a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1020586d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205870 jb 0x102057d0 */
  if (C.cf) goto L_102057d0;
  /* 10205876 std  */
  C.df=1;
  /* 10205877 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10205879 cld  */
  C.df=0;
  /* 1020587a jmp dword ptr [edx*4 + 0x102058f0] */
  switch (EDX) {
    case 0: goto L_10205900;
    case 1: goto L_10205908;
    case 2: goto L_10205918;
    case 3: goto L_1020592c;
    default: x86_unimpl("switch@0x1020587a out of table"); return;
  }
  /* 10205881 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10205884 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10205885 pop eax */
  EAX = (pop32());
  /* 10205886 and byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10205888 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 10205889 pop eax */
  EAX = (pop32());
  /* 1020588a and byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 1020588c mov ah, 0x58 */
  AH = (0x58u);
  /* 1020588e and byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10205890 mov esp, 0xc4102058 */
  ESP = (0xc4102058u);
  /* 10205895 pop eax */
  EAX = (pop32());
  /* 10205896 and byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10205898 int3  */
  x86_unimpl("int3 @ 0x10205898");
  /* 10205899 pop eax */
  EAX = (pop32());
  /* 1020589a and byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 1020589c aam 0x58 */
  x86_unimpl("aam @ 0x1020589c");
  /* 1020589e and byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 102058a4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 102058a8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 102058ac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 102058b0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 102058b4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 102058b8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 102058bc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 102058c0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 102058c4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 102058c8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 102058cc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 102058d0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 102058d4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 102058d8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 102058dc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102058e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102058e5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102058e7:;
  /* 102058e7 jmp dword ptr [edx*4 + 0x102058f0] */
  switch (EDX) {
    case 0: goto L_10205900;
    case 1: goto L_10205908;
    case 2: goto L_10205918;
    case 3: goto L_1020592c;
    default: x86_unimpl("switch@0x102058e7 out of table"); return;
  }
  /* 102058ee mov edi, edi */
  EDI = (EDI);
L_10205900:;
  /* 10205900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10205903 pop esi */
  ESI = (pop32());
  /* 10205904 pop edi */
  EDI = (pop32());
  /* 10205905 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10205906 ret  */
  ESPCHK(0x10205610u, _esp0);
  ESP += 4; return;
  /* 10205907 nop  */
  /* nop */
L_10205908:;
  /* 10205908 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1020590b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1020590e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10205911 pop esi */
  ESI = (pop32());
  /* 10205912 pop edi */
  EDI = (pop32());
  /* 10205913 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10205914 ret  */
  ESPCHK(0x10205610u, _esp0);
  ESP += 4; return;
  /* 10205915 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10205918:;
  /* 10205918 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1020591b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1020591e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10205921 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10205924 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10205927 pop esi */
  ESI = (pop32());
  /* 10205928 pop edi */
  EDI = (pop32());
  /* 10205929 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1020592a ret  */
  ESPCHK(0x10205610u, _esp0);
  ESP += 4; return;
  /* 1020592b nop  */
  /* nop */
L_1020592c:;
  /* 1020592c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1020592f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10205932 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10205935 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10205938 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1020593b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1020593e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10205941 pop esi */
  ESI = (pop32());
  /* 10205942 pop edi */
  EDI = (pop32());
  /* 10205943 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10205944 ret  */
  ESPCHK(0x10205610u, _esp0);
  ESP += 4; return;
}

/* FUN_10005945 @ 0x10205945 (62 bytes, 15 insns) */
void f_10205945(void) {
  FTRACE(0x10205945u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10205945 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1020594a push 0 */
  push32((uint32_t)(0x0u));
  /* 1020594c push dword ptr [0x1020c544] */
  push32((uint32_t)(r32((uint32_t)(0x1020c544))));
  /* 10205952 call dword ptr [0x10208090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208090))), 0x10205958u);
  /* 10205958 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020595a mov dword ptr [0x1020b304], eax */
  w32((uint32_t)(0x1020b304), (EAX));
  /* 1020595f jne 0x10205962 */
  if (!C.zf) goto L_10205962;
  /* 10205961 ret  */
  ESPCHK(0x10205945u, _esp0);
  ESP += 4; return;
L_10205962:;
  /* 10205962 and dword ptr [0x1020b2fc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1020b2fc)))&(0x0u); w32((uint32_t)(0x1020b2fc), (_r)); fl_logic(_r,32); }
  /* 10205969 and dword ptr [0x1020b300], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1020b300)))&(0x0u); w32((uint32_t)(0x1020b300), (_r)); fl_logic(_r,32); }
  /* 10205970 push 1 */
  push32((uint32_t)(0x1u));
  /* 10205972 mov dword ptr [0x1020b2f8], eax */
  w32((uint32_t)(0x1020b2f8), (EAX));
  /* 10205977 mov dword ptr [0x1020b2f0], 0x10 */
  w32((uint32_t)(0x1020b2f0), (0x10u));
  /* 10205981 pop eax */
  EAX = (pop32());
  /* 10205982 ret  */
  ESPCHK(0x10205945u, _esp0);
  ESP += 4; return;
}

/* FUN_10005983 @ 0x10205983 (43 bytes, 14 insns) */
void f_10205983(void) {
  FTRACE(0x10205983u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10205983 mov eax, dword ptr [0x1020b300] */
  EAX = (r32((uint32_t)(0x1020b300)));
  /* 10205988 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1020598b mov eax, dword ptr [0x1020b304] */
  EAX = (r32((uint32_t)(0x1020b304)));
  /* 10205990 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_10205993:;
  /* 10205993 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205995 jae 0x102059ab */
  if (!C.cf) goto L_102059ab;
  /* 10205997 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1020599b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1020599e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102059a4 jb 0x102059ad */
  if (C.cf) goto L_102059ad;
  /* 102059a6 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102059a9 jmp 0x10205993 */
  goto L_10205993;
L_102059ab:;
  /* 102059ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102059ad:;
  /* 102059ad ret  */
  ESPCHK(0x10205983u, _esp0);
  ESP += 4; return;
}

/* FUN_100059ae @ 0x102059ae (811 bytes, 264 insns) */
void f_102059ae(void) {
  FTRACE(0x102059aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102059ae push ebp */
  push32((uint32_t)(EBP));
  /* 102059af mov ebp, esp */
  EBP = (ESP);
  /* 102059b1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102059b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102059b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102059ba push ebx */
  push32((uint32_t)(EBX));
  /* 102059bb push esi */
  push32((uint32_t)(ESI));
  /* 102059bc mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 102059bf mov esi, edx */
  ESI = (EDX);
  /* 102059c1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102059c4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 102059c7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102059ca push edi */
  push32((uint32_t)(EDI));
  /* 102059cb shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 102059ce mov ecx, esi */
  ECX = (ESI);
  /* 102059d0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 102059d3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102059d9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102059da mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 102059dd lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 102059e4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 102059e7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 102059ea mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 102059ed test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 102059f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102059f3 jne 0x10205a74 */
  if (!C.zf) goto L_10205a74;
  /* 102059f5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 102059f8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102059fa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102059fb pop edi */
  EDI = (pop32());
  /* 102059fc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 102059ff cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205a01 jbe 0x10205a06 */
  if ((C.cf||C.zf)) goto L_10205a06;
  /* 10205a03 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10205a06:;
  /* 10205a06 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10205a0a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205a0e jne 0x10205a58 */
  if (!C.zf) goto L_10205a58;
  /* 10205a10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10205a13 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205a16 jae 0x10205a34 */
  if (!C.cf) goto L_10205a34;
  /* 10205a18 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10205a1d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10205a1f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10205a23 not edi */
  EDI = (~(EDI));
  /* 10205a25 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10205a29 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10205a2b jne 0x10205a58 */
  if (!C.zf) goto L_10205a58;
  /* 10205a2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10205a30 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10205a32 jmp 0x10205a58 */
  goto L_10205a58;
L_10205a34:;
  /* 10205a34 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10205a37 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10205a3c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10205a3e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10205a41 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10205a45 not edi */
  EDI = (~(EDI));
  /* 10205a47 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10205a4e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10205a50 jne 0x10205a58 */
  if (!C.zf) goto L_10205a58;
  /* 10205a52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10205a55 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10205a58:;
  /* 10205a58 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10205a5c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10205a60 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10205a63 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10205a67 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10205a6b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10205a6e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10205a71 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_10205a74:;
  /* 10205a74 mov edi, ebx */
  EDI = (EBX);
  /* 10205a76 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10205a79 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10205a7a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205a7d jbe 0x10205a82 */
  if ((C.cf||C.zf)) goto L_10205a82;
  /* 10205a7f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10205a81 pop edi */
  EDI = (pop32());
L_10205a82:;
  /* 10205a82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10205a85 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10205a88 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10205a8b jne 0x10205b31 */
  if (!C.zf) goto L_10205b31;
  /* 10205a91 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10205a94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10205a97 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10205a9a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10205a9c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10205a9f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10205aa0 pop edx */
  EDX = (pop32());
  /* 10205aa1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205aa3 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10205aa6 jbe 0x10205aad */
  if ((C.cf||C.zf)) goto L_10205aad;
  /* 10205aa8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10205aab mov ecx, edx */
  ECX = (EDX);
L_10205aad:;
  /* 10205aad add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10205ab0 mov edi, ebx */
  EDI = (EBX);
  /* 10205ab2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10205ab5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10205ab8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10205ab9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205abb jbe 0x10205abf */
  if ((C.cf||C.zf)) goto L_10205abf;
  /* 10205abd mov edi, edx */
  EDI = (EDX);
L_10205abf:;
  /* 10205abf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205ac1 je 0x10205b2e */
  if (C.zf) goto L_10205b2e;
  /* 10205ac3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10205ac6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10205ac9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205acc jne 0x10205b16 */
  if (!C.zf) goto L_10205b16;
  /* 10205ace mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10205ad1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205ad4 jae 0x10205af2 */
  if (!C.cf) goto L_10205af2;
  /* 10205ad6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10205adb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10205add lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10205ae1 not edx */
  EDX = (~(EDX));
  /* 10205ae3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10205ae7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10205ae9 jne 0x10205b16 */
  if (!C.zf) goto L_10205b16;
  /* 10205aeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10205aee and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10205af0 jmp 0x10205b16 */
  goto L_10205b16;
L_10205af2:;
  /* 10205af2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10205af5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10205afa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10205afc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10205aff lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10205b03 not edx */
  EDX = (~(EDX));
  /* 10205b05 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10205b0c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10205b0e jne 0x10205b16 */
  if (!C.zf) goto L_10205b16;
  /* 10205b10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10205b13 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10205b16:;
  /* 10205b16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10205b19 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10205b1c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10205b1f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10205b22 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10205b25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10205b28 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 10205b2b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10205b2e:;
  /* 10205b2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10205b31:;
  /* 10205b31 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205b35 jne 0x10205b40 */
  if (!C.zf) goto L_10205b40;
  /* 10205b37 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205b3a je 0x10205bc9 */
  if (C.zf) goto L_10205bc9;
L_10205b40:;
  /* 10205b40 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10205b43 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10205b46 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10205b49 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10205b4c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10205b4f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10205b52 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10205b55 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10205b58 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10205b5b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10205b5e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10205b61 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205b64 jne 0x10205bc9 */
  if (!C.zf) goto L_10205bc9;
  /* 10205b66 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 10205b6a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205b6d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10205b70 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10205b72 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10205b76 jae 0x10205b9d */
  if (!C.cf) goto L_10205b9d;
  /* 10205b78 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10205b7c jne 0x10205b8c */
  if (!C.zf) goto L_10205b8c;
  /* 10205b7e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10205b83 mov ecx, edi */
  ECX = (EDI);
  /* 10205b85 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10205b87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10205b8a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_10205b8c:;
  /* 10205b8c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10205b91 mov ecx, edi */
  ECX = (EDI);
  /* 10205b93 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10205b95 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 10205b99 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10205b9b jmp 0x10205bc6 */
  goto L_10205bc6;
L_10205b9d:;
  /* 10205b9d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10205ba1 jne 0x10205bb3 */
  if (!C.zf) goto L_10205bb3;
  /* 10205ba3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10205ba6 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10205bab shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10205bad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10205bb0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10205bb3:;
  /* 10205bb3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10205bb6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10205bbb shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10205bbd lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 10205bc4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_10205bc6:;
  /* 10205bc6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_10205bc9:;
  /* 10205bc9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10205bcc mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 10205bce mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 10205bd2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 10205bd4 jne 0x10205cd4 */
  if (!C.zf) goto L_10205cd4;
  /* 10205bda mov eax, dword ptr [0x1020b2fc] */
  EAX = (r32((uint32_t)(0x1020b2fc)));
  /* 10205bdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10205be1 je 0x10205cc6 */
  if (C.zf) goto L_10205cc6;
  /* 10205be7 mov ecx, dword ptr [0x1020b2f4] */
  ECX = (r32((uint32_t)(0x1020b2f4)));
  /* 10205bed mov edi, dword ptr [0x10208074] */
  EDI = (r32((uint32_t)(0x10208074)));
  /* 10205bf3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10205bf6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10205bf9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 10205bfe push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10205c03 push ebx */
  push32((uint32_t)(EBX));
  /* 10205c04 push ecx */
  push32((uint32_t)(ECX));
  /* 10205c05 call edi */
  call_ind((uint32_t)(EDI), 0x10205c07u);
  /* 10205c07 mov ecx, dword ptr [0x1020b2f4] */
  ECX = (r32((uint32_t)(0x1020b2f4)));
  /* 10205c0d mov eax, dword ptr [0x1020b2fc] */
  EAX = (r32((uint32_t)(0x1020b2fc)));
  /* 10205c12 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10205c17 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10205c19 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10205c1c mov eax, dword ptr [0x1020b2fc] */
  EAX = (r32((uint32_t)(0x1020b2fc)));
  /* 10205c21 mov ecx, dword ptr [0x1020b2f4] */
  ECX = (r32((uint32_t)(0x1020b2f4)));
  /* 10205c27 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10205c2a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10205c32 mov eax, dword ptr [0x1020b2fc] */
  EAX = (r32((uint32_t)(0x1020b2fc)));
  /* 10205c37 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10205c3a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 10205c3d mov eax, dword ptr [0x1020b2fc] */
  EAX = (r32((uint32_t)(0x1020b2fc)));
  /* 10205c42 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10205c45 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10205c49 jne 0x10205c54 */
  if (!C.zf) goto L_10205c54;
  /* 10205c4b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10205c4f mov eax, dword ptr [0x1020b2fc] */
  EAX = (r32((uint32_t)(0x1020b2fc)));
L_10205c54:;
  /* 10205c54 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205c58 jne 0x10205cc6 */
  if (!C.zf) goto L_10205cc6;
  /* 10205c5a push ebx */
  push32((uint32_t)(EBX));
  /* 10205c5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10205c5d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10205c60 call edi */
  call_ind((uint32_t)(EDI), 0x10205c62u);
  /* 10205c62 mov eax, dword ptr [0x1020b2fc] */
  EAX = (r32((uint32_t)(0x1020b2fc)));
  /* 10205c67 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 10205c6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10205c6c push dword ptr [0x1020c544] */
  push32((uint32_t)(r32((uint32_t)(0x1020c544))));
  /* 10205c72 call dword ptr [0x10208078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208078))), 0x10205c78u);
  /* 10205c78 mov eax, dword ptr [0x1020b300] */
  EAX = (r32((uint32_t)(0x1020b300)));
  /* 10205c7d mov edx, dword ptr [0x1020b304] */
  EDX = (r32((uint32_t)(0x1020b304)));
  /* 10205c83 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10205c86 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10205c89 mov ecx, eax */
  ECX = (EAX);
  /* 10205c8b mov eax, dword ptr [0x1020b2fc] */
  EAX = (r32((uint32_t)(0x1020b2fc)));
  /* 10205c90 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10205c92 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10205c96 push ecx */
  push32((uint32_t)(ECX));
  /* 10205c97 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 10205c9a push ecx */
  push32((uint32_t)(ECX));
  /* 10205c9b push eax */
  push32((uint32_t)(EAX));
  /* 10205c9c call 0x10206ac0 */
  push32(0x10205ca1u); f_10206ac0();
  /* 10205ca1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10205ca4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10205ca7 dec dword ptr [0x1020b300] */
  { uint32_t _r=(r32((uint32_t)(0x1020b300)))-1; w32((uint32_t)(0x1020b300), (_r)); fl_dec(_r,32); }
  /* 10205cad cmp eax, dword ptr [0x1020b2fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1020b2fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205cb3 jbe 0x10205cb8 */
  if ((C.cf||C.zf)) goto L_10205cb8;
  /* 10205cb5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10205cb8:;
  /* 10205cb8 mov ecx, dword ptr [0x1020b304] */
  ECX = (r32((uint32_t)(0x1020b304)));
  /* 10205cbe mov dword ptr [0x1020b2f8], ecx */
  w32((uint32_t)(0x1020b2f8), (ECX));
  /* 10205cc4 jmp 0x10205cc9 */
  goto L_10205cc9;
L_10205cc6:;
  /* 10205cc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10205cc9:;
  /* 10205cc9 mov dword ptr [0x1020b2fc], eax */
  w32((uint32_t)(0x1020b2fc), (EAX));
  /* 10205cce mov dword ptr [0x1020b2f4], esi */
  w32((uint32_t)(0x1020b2f4), (ESI));
L_10205cd4:;
  /* 10205cd4 pop edi */
  EDI = (pop32());
  /* 10205cd5 pop esi */
  ESI = (pop32());
  /* 10205cd6 pop ebx */
  EBX = (pop32());
  /* 10205cd7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10205cd8 ret  */
  ESPCHK(0x102059aeu, _esp0);
  ESP += 4; return;
}

/* FUN_10005cd9 @ 0x10205cd9 (777 bytes, 275 insns) */
void f_10205cd9(void) {
  FTRACE(0x10205cd9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10205cd9 push ebp */
  push32((uint32_t)(EBP));
  /* 10205cda mov ebp, esp */
  EBP = (ESP);
  /* 10205cdc sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10205cdf mov eax, dword ptr [0x1020b300] */
  EAX = (r32((uint32_t)(0x1020b300)));
  /* 10205ce4 mov edx, dword ptr [0x1020b304] */
  EDX = (r32((uint32_t)(0x1020b304)));
  /* 10205cea push ebx */
  push32((uint32_t)(EBX));
  /* 10205ceb push esi */
  push32((uint32_t)(ESI));
  /* 10205cec lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10205cef push edi */
  push32((uint32_t)(EDI));
  /* 10205cf0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10205cf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10205cf6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10205cf9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 10205cfc and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10205cff mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10205d02 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10205d05 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10205d06 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205d09 jge 0x10205d19 */
  if ((C.sf==C.of)) goto L_10205d19;
  /* 10205d0b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 10205d0e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10205d10 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10205d14 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10205d17 jmp 0x10205d29 */
  goto L_10205d29;
L_10205d19:;
  /* 10205d19 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10205d1c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10205d1f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10205d21 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10205d23 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10205d26 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10205d29:;
  /* 10205d29 mov eax, dword ptr [0x1020b2f8] */
  EAX = (r32((uint32_t)(0x1020b2f8)));
  /* 10205d2e mov ebx, eax */
  EBX = (EAX);
  /* 10205d30 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205d32 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10205d35 jae 0x10205d50 */
  if (!C.cf) goto L_10205d50;
L_10205d37:;
  /* 10205d37 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10205d3a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10205d3c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10205d3f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10205d41 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10205d43 jne 0x10205d50 */
  if (!C.zf) goto L_10205d50;
  /* 10205d45 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10205d48 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205d4b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10205d4e jb 0x10205d37 */
  if (C.cf) goto L_10205d37;
L_10205d50:;
  /* 10205d50 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205d53 jne 0x10205dce */
  if (!C.zf) goto L_10205dce;
  /* 10205d55 mov ebx, edx */
  EBX = (EDX);
L_10205d57:;
  /* 10205d57 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205d59 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10205d5c jae 0x10205d73 */
  if (!C.cf) goto L_10205d73;
  /* 10205d5e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10205d61 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10205d63 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10205d66 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10205d68 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10205d6a jne 0x10205d71 */
  if (!C.zf) goto L_10205d71;
  /* 10205d6c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10205d6f jmp 0x10205d57 */
  goto L_10205d57;
L_10205d71:;
  /* 10205d71 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10205d73:;
  /* 10205d73 jne 0x10205dce */
  if (!C.zf) goto L_10205dce;
L_10205d75:;
  /* 10205d75 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205d78 jae 0x10205d8b */
  if (!C.cf) goto L_10205d8b;
  /* 10205d7a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205d7e jne 0x10205d88 */
  if (!C.zf) goto L_10205d88;
  /* 10205d80 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10205d83 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10205d86 jmp 0x10205d75 */
  goto L_10205d75;
L_10205d88:;
  /* 10205d88 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10205d8b:;
  /* 10205d8b jne 0x10205db3 */
  if (!C.zf) goto L_10205db3;
  /* 10205d8d mov ebx, edx */
  EBX = (EDX);
L_10205d8f:;
  /* 10205d8f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205d91 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10205d94 jae 0x10205da3 */
  if (!C.cf) goto L_10205da3;
  /* 10205d96 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205d9a jne 0x10205da1 */
  if (!C.zf) goto L_10205da1;
  /* 10205d9c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10205d9f jmp 0x10205d8f */
  goto L_10205d8f;
L_10205da1:;
  /* 10205da1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10205da3:;
  /* 10205da3 jne 0x10205db3 */
  if (!C.zf) goto L_10205db3;
  /* 10205da5 call 0x10205fe2 */
  push32(0x10205daau); f_10205fe2();
  /* 10205daa mov ebx, eax */
  EBX = (EAX);
  /* 10205dac test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10205dae mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10205db1 je 0x10205dc7 */
  if (C.zf) goto L_10205dc7;
L_10205db3:;
  /* 10205db3 push ebx */
  push32((uint32_t)(EBX));
  /* 10205db4 call 0x10206093 */
  push32(0x10205db9u); f_10206093();
  /* 10205db9 pop ecx */
  ECX = (pop32());
  /* 10205dba mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 10205dbd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10205dbf mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10205dc2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205dc5 jne 0x10205dce */
  if (!C.zf) goto L_10205dce;
L_10205dc7:;
  /* 10205dc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10205dc9 jmp 0x10205fdd */
  goto L_10205fdd;
L_10205dce:;
  /* 10205dce mov dword ptr [0x1020b2f8], ebx */
  w32((uint32_t)(0x1020b2f8), (EBX));
  /* 10205dd4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10205dd7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10205dd9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205ddc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10205ddf je 0x10205df5 */
  if (C.zf) goto L_10205df5;
  /* 10205de1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10205de8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10205dec and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10205def and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10205df1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10205df3 jne 0x10205e2c */
  if (!C.zf) goto L_10205e2c;
L_10205df5:;
  /* 10205df5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 10205dfb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 10205dfe and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10205e01 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10205e04 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10205e08 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 10205e0b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10205e0d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10205e10 jne 0x10205e29 */
  if (!C.zf) goto L_10205e29;
L_10205e12:;
  /* 10205e12 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 10205e18 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10205e1b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10205e1e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10205e21 mov edi, esi */
  EDI = (ESI);
  /* 10205e23 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 10205e25 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 10205e27 je 0x10205e12 */
  if (C.zf) goto L_10205e12;
L_10205e29:;
  /* 10205e29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_10205e2c:;
  /* 10205e2c mov ecx, edx */
  ECX = (EDX);
  /* 10205e2e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10205e30 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10205e36 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10205e3d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10205e40 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10205e44 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10205e46 jne 0x10205e55 */
  if (!C.zf) goto L_10205e55;
  /* 10205e48 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10205e4f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10205e51 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10205e54 pop edi */
  EDI = (pop32());
L_10205e55:;
  /* 10205e55 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10205e57 jl 0x10205e5e */
  if ((C.sf!=C.of)) goto L_10205e5e;
  /* 10205e59 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10205e5b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10205e5c jmp 0x10205e55 */
  goto L_10205e55;
L_10205e5e:;
  /* 10205e5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10205e61 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 10205e65 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10205e67 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10205e6a mov esi, ecx */
  ESI = (ECX);
  /* 10205e6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10205e6f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10205e72 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10205e73 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205e76 jle 0x10205e7b */
  if ((C.zf||C.sf!=C.of)) goto L_10205e7b;
  /* 10205e78 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10205e7a pop esi */
  ESI = (pop32());
L_10205e7b:;
  /* 10205e7b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205e7d je 0x10205f90 */
  if (C.zf) goto L_10205f90;
  /* 10205e83 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10205e86 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205e89 jne 0x10205eec */
  if (!C.zf) goto L_10205eec;
  /* 10205e8b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205e8e jge 0x10205ebb */
  if ((C.sf==C.of)) goto L_10205ebb;
  /* 10205e90 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10205e95 mov ecx, edi */
  ECX = (EDI);
  /* 10205e97 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10205e99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10205e9c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10205ea0 not ebx */
  EBX = (~(EBX));
  /* 10205ea2 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10205ea5 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 10205ea9 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 10205ead dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10205eaf jne 0x10205ee9 */
  if (!C.zf) goto L_10205ee9;
  /* 10205eb1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10205eb4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10205eb7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 10205eb9 jmp 0x10205eec */
  goto L_10205eec;
L_10205ebb:;
  /* 10205ebb lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10205ebe mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10205ec3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10205ec5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10205ec8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10205ecc lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10205ed3 not ebx */
  EBX = (~(EBX));
  /* 10205ed5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10205ed7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10205ed9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10205edc jne 0x10205ee9 */
  if (!C.zf) goto L_10205ee9;
  /* 10205ede mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10205ee1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10205ee4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10205ee7 jmp 0x10205eec */
  goto L_10205eec;
L_10205ee9:;
  /* 10205ee9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_10205eec:;
  /* 10205eec mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 10205eef mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 10205ef2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205ef6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10205ef9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10205efc mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 10205eff mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10205f02 je 0x10205f9c */
  if (C.zf) goto L_10205f9c;
  /* 10205f08 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10205f0b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 10205f0f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 10205f12 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 10205f15 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10205f18 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10205f1b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10205f1e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10205f21 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10205f24 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205f27 jne 0x10205f8d */
  if (!C.zf) goto L_10205f8d;
  /* 10205f29 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 10205f2d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205f30 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10205f33 jge 0x10205f5e */
  if ((C.sf==C.of)) goto L_10205f5e;
  /* 10205f35 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10205f37 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10205f3b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10205f3f jne 0x10205f4c */
  if (!C.zf) goto L_10205f4c;
  /* 10205f41 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10205f46 mov ecx, esi */
  ECX = (ESI);
  /* 10205f48 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10205f4a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_10205f4c:;
  /* 10205f4c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10205f51 mov ecx, esi */
  ECX = (ESI);
  /* 10205f53 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10205f55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10205f58 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10205f5c jmp 0x10205f8d */
  goto L_10205f8d;
L_10205f5e:;
  /* 10205f5e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10205f60 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10205f64 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10205f68 jne 0x10205f77 */
  if (!C.zf) goto L_10205f77;
  /* 10205f6a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10205f6d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10205f72 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10205f74 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10205f77:;
  /* 10205f77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10205f7a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10205f81 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10205f84 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10205f89 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10205f8b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10205f8d:;
  /* 10205f8d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10205f90:;
  /* 10205f90 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10205f92 je 0x10205f9f */
  if (C.zf) goto L_10205f9f;
  /* 10205f94 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10205f96 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 10205f9a jmp 0x10205f9f */
  goto L_10205f9f;
L_10205f9c:;
  /* 10205f9c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10205f9f:;
  /* 10205f9f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10205fa2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10205fa4 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10205fa7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10205fa9 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 10205fad mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10205fb0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10205fb2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10205fb4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 10205fb7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10205fb9 jne 0x10205fd5 */
  if (!C.zf) goto L_10205fd5;
  /* 10205fbb cmp ebx, dword ptr [0x1020b2fc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1020b2fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205fc1 jne 0x10205fd5 */
  if (!C.zf) goto L_10205fd5;
  /* 10205fc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10205fc6 cmp ecx, dword ptr [0x1020b2f4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1020b2f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205fcc jne 0x10205fd5 */
  if (!C.zf) goto L_10205fd5;
  /* 10205fce and dword ptr [0x1020b2fc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1020b2fc)))&(0x0u); w32((uint32_t)(0x1020b2fc), (_r)); fl_logic(_r,32); }
L_10205fd5:;
  /* 10205fd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10205fd8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10205fda lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_10205fdd:;
  /* 10205fdd pop edi */
  EDI = (pop32());
  /* 10205fde pop esi */
  ESI = (pop32());
  /* 10205fdf pop ebx */
  EBX = (pop32());
  /* 10205fe0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10205fe1 ret  */
  ESPCHK(0x10205cd9u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fe2 @ 0x10205fe2 (177 bytes, 53 insns) */
void f_10205fe2(void) {
  FTRACE(0x10205fe2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10205fe2 mov eax, dword ptr [0x1020b300] */
  EAX = (r32((uint32_t)(0x1020b300)));
  /* 10205fe7 mov ecx, dword ptr [0x1020b2f0] */
  ECX = (r32((uint32_t)(0x1020b2f0)));
  /* 10205fed push esi */
  push32((uint32_t)(ESI));
  /* 10205fee push edi */
  push32((uint32_t)(EDI));
  /* 10205fef xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10205ff1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10205ff3 jne 0x10206025 */
  if (!C.zf) goto L_10206025;
  /* 10205ff5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 10205ff9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10205ffc push eax */
  push32((uint32_t)(EAX));
  /* 10205ffd push dword ptr [0x1020b304] */
  push32((uint32_t)(r32((uint32_t)(0x1020b304))));
  /* 10206003 push edi */
  push32((uint32_t)(EDI));
  /* 10206004 push dword ptr [0x1020c544] */
  push32((uint32_t)(r32((uint32_t)(0x1020c544))));
  /* 1020600a call dword ptr [0x102080a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080a4))), 0x10206010u);
  /* 10206010 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206012 je 0x10206075 */
  if (C.zf) goto L_10206075;
  /* 10206014 add dword ptr [0x1020b2f0], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x1020b2f0))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x1020b2f0), (_r)); fl_add(_a,_b,_r,32); }
  /* 1020601b mov dword ptr [0x1020b304], eax */
  w32((uint32_t)(0x1020b304), (EAX));
  /* 10206020 mov eax, dword ptr [0x1020b300] */
  EAX = (r32((uint32_t)(0x1020b300)));
L_10206025:;
  /* 10206025 mov ecx, dword ptr [0x1020b304] */
  ECX = (r32((uint32_t)(0x1020b304)));
  /* 1020602b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10206030 push 8 */
  push32((uint32_t)(0x8u));
  /* 10206032 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10206035 push dword ptr [0x1020c544] */
  push32((uint32_t)(r32((uint32_t)(0x1020c544))));
  /* 1020603b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1020603e call dword ptr [0x10208090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208090))), 0x10206044u);
  /* 10206044 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206046 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10206049 je 0x10206075 */
  if (C.zf) goto L_10206075;
  /* 1020604b push 4 */
  push32((uint32_t)(0x4u));
  /* 1020604d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10206052 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10206057 push edi */
  push32((uint32_t)(EDI));
  /* 10206058 call dword ptr [0x102080a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080a0))), 0x1020605eu);
  /* 1020605e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206060 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10206063 jne 0x10206079 */
  if (!C.zf) goto L_10206079;
  /* 10206065 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10206068 push edi */
  push32((uint32_t)(EDI));
  /* 10206069 push dword ptr [0x1020c544] */
  push32((uint32_t)(r32((uint32_t)(0x1020c544))));
  /* 1020606f call dword ptr [0x10208078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208078))), 0x10206075u);
L_10206075:;
  /* 10206075 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10206077 jmp 0x10206090 */
  goto L_10206090;
L_10206079:;
  /* 10206079 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1020607d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1020607f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10206082 inc dword ptr [0x1020b300] */
  { uint32_t _r=(r32((uint32_t)(0x1020b300)))+1; w32((uint32_t)(0x1020b300), (_r)); fl_inc(_r,32); }
  /* 10206088 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1020608b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1020608e mov eax, esi */
  EAX = (ESI);
L_10206090:;
  /* 10206090 pop edi */
  EDI = (pop32());
  /* 10206091 pop esi */
  ESI = (pop32());
  /* 10206092 ret  */
  ESPCHK(0x10205fe2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006093 @ 0x10206093 (251 bytes, 85 insns) */
void f_10206093(void) {
  FTRACE(0x10206093u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10206093 push ebp */
  push32((uint32_t)(EBP));
  /* 10206094 mov ebp, esp */
  EBP = (ESP);
  /* 10206096 push ecx */
  push32((uint32_t)(ECX));
  /* 10206097 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1020609a push ebx */
  push32((uint32_t)(EBX));
  /* 1020609b push esi */
  push32((uint32_t)(ESI));
  /* 1020609c push edi */
  push32((uint32_t)(EDI));
  /* 1020609d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 102060a0 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 102060a3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102060a5:;
  /* 102060a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102060a7 jl 0x102060ae */
  if ((C.sf!=C.of)) goto L_102060ae;
  /* 102060a9 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102060ab inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102060ac jmp 0x102060a5 */
  goto L_102060a5;
L_102060ae:;
  /* 102060ae mov eax, ebx */
  EAX = (EBX);
  /* 102060b0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102060b2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102060b8 pop edx */
  EDX = (pop32());
  /* 102060b9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 102060c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_102060c3:;
  /* 102060c3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 102060c6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 102060c9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102060cc dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 102060cd jne 0x102060c3 */
  if (!C.zf) goto L_102060c3;
  /* 102060cf mov edi, ebx */
  EDI = (EBX);
  /* 102060d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 102060d3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 102060d6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102060d9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 102060de push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 102060e3 push edi */
  push32((uint32_t)(EDI));
  /* 102060e4 call dword ptr [0x102080a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080a0))), 0x102060eau);
  /* 102060ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102060ec jne 0x102060f6 */
  if (!C.zf) goto L_102060f6;
  /* 102060ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102060f1 jmp 0x10206189 */
  goto L_10206189;
L_102060f6:;
  /* 102060f6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 102060fc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102060fe ja 0x1020613c */
  if ((!C.cf&&!C.zf)) goto L_1020613c;
  /* 10206100 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_10206103:;
  /* 10206103 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 10206107 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1020610e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 10206114 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1020611b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1020611d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10206123 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10206126 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 10206130 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10206135 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 10206138 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020613a jbe 0x10206103 */
  if ((C.cf||C.zf)) goto L_10206103;
L_1020613c:;
  /* 1020613c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1020613f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 10206142 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10206147 push 1 */
  push32((uint32_t)(0x1u));
  /* 10206149 pop edi */
  EDI = (pop32());
  /* 1020614a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1020614d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10206150 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 10206153 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10206156 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10206159 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1020615e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 10206165 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 10206168 mov cl, al */
  CL = (AL);
  /* 1020616a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1020616c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1020616e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10206171 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 10206174 jne 0x10206179 */
  if (!C.zf) goto L_10206179;
  /* 10206176 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_10206179:;
  /* 10206179 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1020617e mov ecx, ebx */
  ECX = (EBX);
  /* 10206180 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10206182 not edx */
  EDX = (~(EDX));
  /* 10206184 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10206187 mov eax, ebx */
  EAX = (EBX);
L_10206189:;
  /* 10206189 pop edi */
  EDI = (pop32());
  /* 1020618a pop esi */
  ESI = (pop32());
  /* 1020618b pop ebx */
  EBX = (pop32());
  /* 1020618c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1020618d ret  */
  ESPCHK(0x10206093u, _esp0);
  ESP += 4; return;
}

/* FUN_1000618e @ 0x1020618e (137 bytes, 50 insns) */
void f_1020618e(void) {
  FTRACE(0x1020618eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1020618e push ebx */
  push32((uint32_t)(EBX));
  /* 1020618f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10206191 cmp dword ptr [0x1020b164], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1020b164))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206197 push esi */
  push32((uint32_t)(ESI));
  /* 10206198 push edi */
  push32((uint32_t)(EDI));
  /* 10206199 jne 0x102061dd */
  if (!C.zf) goto L_102061dd;
  /* 1020619b push 0x10208474 */
  push32((uint32_t)(0x10208474u));
  /* 102061a0 call dword ptr [0x102080a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080a8))), 0x102061a6u);
  /* 102061a6 mov edi, eax */
  EDI = (EAX);
  /* 102061a8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102061aa je 0x10206213 */
  if (C.zf) goto L_10206213;
  /* 102061ac mov esi, dword ptr [0x10208084] */
  ESI = (r32((uint32_t)(0x10208084)));
  /* 102061b2 push 0x10208468 */
  push32((uint32_t)(0x10208468u));
  /* 102061b7 push edi */
  push32((uint32_t)(EDI));
  /* 102061b8 call esi */
  call_ind((uint32_t)(ESI), 0x102061bau);
  /* 102061ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102061bc mov dword ptr [0x1020b164], eax */
  w32((uint32_t)(0x1020b164), (EAX));
  /* 102061c1 je 0x10206213 */
  if (C.zf) goto L_10206213;
  /* 102061c3 push 0x10208458 */
  push32((uint32_t)(0x10208458u));
  /* 102061c8 push edi */
  push32((uint32_t)(EDI));
  /* 102061c9 call esi */
  call_ind((uint32_t)(ESI), 0x102061cbu);
  /* 102061cb push 0x10208444 */
  push32((uint32_t)(0x10208444u));
  /* 102061d0 push edi */
  push32((uint32_t)(EDI));
  /* 102061d1 mov dword ptr [0x1020b168], eax */
  w32((uint32_t)(0x1020b168), (EAX));
  /* 102061d6 call esi */
  call_ind((uint32_t)(ESI), 0x102061d8u);
  /* 102061d8 mov dword ptr [0x1020b16c], eax */
  w32((uint32_t)(0x1020b16c), (EAX));
L_102061dd:;
  /* 102061dd mov eax, dword ptr [0x1020b168] */
  EAX = (r32((uint32_t)(0x1020b168)));
  /* 102061e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102061e4 je 0x102061fc */
  if (C.zf) goto L_102061fc;
  /* 102061e6 call eax */
  call_ind((uint32_t)(EAX), 0x102061e8u);
  /* 102061e8 mov ebx, eax */
  EBX = (EAX);
  /* 102061ea test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102061ec je 0x102061fc */
  if (C.zf) goto L_102061fc;
  /* 102061ee mov eax, dword ptr [0x1020b16c] */
  EAX = (r32((uint32_t)(0x1020b16c)));
  /* 102061f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102061f5 je 0x102061fc */
  if (C.zf) goto L_102061fc;
  /* 102061f7 push ebx */
  push32((uint32_t)(EBX));
  /* 102061f8 call eax */
  call_ind((uint32_t)(EAX), 0x102061fau);
  /* 102061fa mov ebx, eax */
  EBX = (EAX);
L_102061fc:;
  /* 102061fc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10206200 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10206204 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10206208 push ebx */
  push32((uint32_t)(EBX));
  /* 10206209 call dword ptr [0x1020b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020b164))), 0x1020620fu);
L_1020620f:;
  /* 1020620f pop edi */
  EDI = (pop32());
  /* 10206210 pop esi */
  ESI = (pop32());
  /* 10206211 pop ebx */
  EBX = (pop32());
  /* 10206212 ret  */
  ESPCHK(0x1020618eu, _esp0);
  ESP += 4; return;
L_10206213:;
  /* 10206213 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10206215 jmp 0x1020620f */
  goto L_1020620f;
}

/* _strncpy @ 0x10206220 (254 bytes, 109 insns) */
void f_10206220(void) {
  FTRACE(0x10206220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10206220 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10206224 push edi */
  push32((uint32_t)(EDI));
  /* 10206225 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10206227 je 0x102062a3 */
  if (C.zf) goto L_102062a3;
  /* 10206229 push esi */
  push32((uint32_t)(ESI));
  /* 1020622a push ebx */
  push32((uint32_t)(EBX));
  /* 1020622b mov ebx, ecx */
  EBX = (ECX);
  /* 1020622d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10206231 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10206237 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1020623b jne 0x10206244 */
  if (!C.zf) goto L_10206244;
  /* 1020623d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10206240 jne 0x102062b1 */
  if (!C.zf) goto L_102062b1;
  /* 10206242 jmp 0x10206265 */
  goto L_10206265;
L_10206244:;
  /* 10206244 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10206246 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10206247 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10206249 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1020624a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1020624b je 0x10206272 */
  if (C.zf) goto L_10206272;
  /* 1020624d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1020624f je 0x1020627a */
  if (C.zf) goto L_1020627a;
  /* 10206251 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10206257 jne 0x10206244 */
  if (!C.zf) goto L_10206244;
  /* 10206259 mov ebx, ecx */
  EBX = (ECX);
  /* 1020625b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1020625e jne 0x102062b1 */
  if (!C.zf) goto L_102062b1;
L_10206260:;
  /* 10206260 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10206263 je 0x10206272 */
  if (C.zf) goto L_10206272;
L_10206265:;
  /* 10206265 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10206267 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10206268 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1020626a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1020626b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1020626d je 0x1020629e */
  if (C.zf) goto L_1020629e;
  /* 1020626f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10206270 jne 0x10206265 */
  if (!C.zf) goto L_10206265;
L_10206272:;
  /* 10206272 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10206276 pop ebx */
  EBX = (pop32());
  /* 10206277 pop esi */
  ESI = (pop32());
  /* 10206278 pop edi */
  EDI = (pop32());
  /* 10206279 ret  */
  ESPCHK(0x10206220u, _esp0);
  ESP += 4; return;
L_1020627a:;
  /* 1020627a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10206280 je 0x10206294 */
  if (C.zf) goto L_10206294;
L_10206282:;
  /* 10206282 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10206284 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10206285 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10206286 je 0x10206316 */
  if (C.zf) goto L_10206316;
  /* 1020628c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10206292 jne 0x10206282 */
  if (!C.zf) goto L_10206282;
L_10206294:;
  /* 10206294 mov ebx, ecx */
  EBX = (ECX);
  /* 10206296 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10206299 jne 0x10206307 */
  if (!C.zf) goto L_10206307;
L_1020629b:;
  /* 1020629b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1020629d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1020629e:;
  /* 1020629e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1020629f jne 0x1020629b */
  if (!C.zf) goto L_1020629b;
  /* 102062a1 pop ebx */
  EBX = (pop32());
  /* 102062a2 pop esi */
  ESI = (pop32());
L_102062a3:;
  /* 102062a3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102062a7 pop edi */
  EDI = (pop32());
  /* 102062a8 ret  */
  ESPCHK(0x10206220u, _esp0);
  ESP += 4; return;
L_102062a9:;
  /* 102062a9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102062ab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102062ae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102062af je 0x10206260 */
  if (C.zf) goto L_10206260;
L_102062b1:;
  /* 102062b1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102062b6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102062b8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102062ba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102062bd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102062bf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 102062c1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102062c4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102062c9 je 0x102062a9 */
  if (C.zf) goto L_102062a9;
  /* 102062cb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102062cd je 0x102062fb */
  if (C.zf) goto L_102062fb;
  /* 102062cf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 102062d1 je 0x102062f1 */
  if (C.zf) goto L_102062f1;
  /* 102062d3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 102062d9 je 0x102062e7 */
  if (C.zf) goto L_102062e7;
  /* 102062db test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 102062e1 jne 0x102062a9 */
  if (!C.zf) goto L_102062a9;
  /* 102062e3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102062e5 jmp 0x102062ff */
  goto L_102062ff;
L_102062e7:;
  /* 102062e7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 102062ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102062ef jmp 0x102062ff */
  goto L_102062ff;
L_102062f1:;
  /* 102062f1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 102062f7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102062f9 jmp 0x102062ff */
  goto L_102062ff;
L_102062fb:;
  /* 102062fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102062fd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_102062ff:;
  /* 102062ff add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10206302 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10206304 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10206305 je 0x10206311 */
  if (C.zf) goto L_10206311;
L_10206307:;
  /* 10206307 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10206309:;
  /* 10206309 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1020630b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1020630e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1020630f jne 0x10206309 */
  if (!C.zf) goto L_10206309;
L_10206311:;
  /* 10206311 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10206314 jne 0x1020629b */
  if (!C.zf) goto L_1020629b;
L_10206316:;
  /* 10206316 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1020631a pop ebx */
  EBX = (pop32());
  /* 1020631b pop esi */
  ESI = (pop32());
  /* 1020631c pop edi */
  EDI = (pop32());
  /* 1020631d ret  */
  ESPCHK(0x10206220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000631e @ 0x1020631e (115 bytes, 37 insns) */
void f_1020631e(void) {
  FTRACE(0x1020631eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1020631e push esi */
  push32((uint32_t)(ESI));
  /* 1020631f call 0x1020639a */
  push32(0x10206324u); f_1020639a();
  /* 10206324 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10206328 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1020632a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1020632c mov eax, 0x1020a560 */
  EAX = (0x1020a560u);
L_10206331:;
  /* 10206331 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206333 je 0x10206357 */
  if (C.zf) goto L_10206357;
  /* 10206335 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10206338 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10206339 cmp eax, 0x1020a6c8 */
  { uint32_t _a=(EAX),_b=(0x1020a6c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020633e jl 0x10206331 */
  if ((C.sf!=C.of)) goto L_10206331;
  /* 10206340 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206343 jb 0x10206367 */
  if (C.cf) goto L_10206367;
  /* 10206345 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206348 ja 0x10206367 */
  if ((!C.cf&&!C.zf)) goto L_10206367;
  /* 1020634a call 0x10206391 */
  push32(0x1020634fu); f_10206391();
  /* 1020634f mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10206355 pop esi */
  ESI = (pop32());
  /* 10206356 ret  */
  ESPCHK(0x1020631eu, _esp0);
  ESP += 4; return;
L_10206357:;
  /* 10206357 call 0x10206391 */
  push32(0x1020635cu); f_10206391();
  /* 1020635c mov ecx, dword ptr [esi*8 + 0x1020a564] */
  ECX = (r32((uint32_t)(ESI*8 + 0x1020a564)));
  /* 10206363 pop esi */
  ESI = (pop32());
  /* 10206364 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10206366 ret  */
  ESPCHK(0x1020631eu, _esp0);
  ESP += 4; return;
L_10206367:;
  /* 10206367 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020636d jb 0x10206384 */
  if (C.cf) goto L_10206384;
  /* 1020636f cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206375 ja 0x10206384 */
  if ((!C.cf&&!C.zf)) goto L_10206384;
  /* 10206377 call 0x10206391 */
  push32(0x1020637cu); f_10206391();
  /* 1020637c mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10206382 pop esi */
  ESI = (pop32());
  /* 10206383 ret  */
  ESPCHK(0x1020631eu, _esp0);
  ESP += 4; return;
L_10206384:;
  /* 10206384 call 0x10206391 */
  push32(0x10206389u); f_10206391();
  /* 10206389 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1020638f pop esi */
  ESI = (pop32());
  /* 10206390 ret  */
  ESPCHK(0x1020631eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006391 @ 0x10206391 (9 bytes, 3 insns) */
void f_10206391(void) {
  FTRACE(0x10206391u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10206391 call 0x10203e50 */
  push32(0x10206396u); f_10203e50();
  /* 10206396 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10206399 ret  */
  ESPCHK(0x10206391u, _esp0);
  ESP += 4; return;
}

/* FUN_1000639a @ 0x1020639a (9 bytes, 3 insns) */
void f_1020639a(void) {
  FTRACE(0x1020639au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1020639a call 0x10203e50 */
  push32(0x1020639fu); f_10203e50();
  /* 1020639f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102063a2 ret  */
  ESPCHK(0x1020639au, _esp0);
  ESP += 4; return;
}

/* FUN_100063a3 @ 0x102063a3 (127 bytes, 48 insns) */
void f_102063a3(void) {
  FTRACE(0x102063a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102063a3 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102063a7 push esi */
  push32((uint32_t)(ESI));
  /* 102063a8 cmp ecx, dword ptr [0x1020c660] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1020c660))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102063ae push edi */
  push32((uint32_t)(EDI));
  /* 102063af jae 0x10206409 */
  if (!C.cf) goto L_10206409;
  /* 102063b1 mov eax, ecx */
  EAX = (ECX);
  /* 102063b3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 102063b6 lea edi, [eax*4 + 0x1020c560] */
  EDI = ((uint32_t)(EAX*4 + 0x1020c560));
  /* 102063bd mov eax, ecx */
  EAX = (ECX);
  /* 102063bf and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 102063c2 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 102063c5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 102063c7 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 102063ca add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102063cc test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 102063d0 je 0x10206409 */
  if (C.zf) goto L_10206409;
  /* 102063d2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102063d5 je 0x10206409 */
  if (C.zf) goto L_10206409;
  /* 102063d7 cmp dword ptr [0x1020afa8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1020afa8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102063de jne 0x102063ff */
  if (!C.zf) goto L_102063ff;
  /* 102063e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102063e2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102063e4 je 0x102063f6 */
  if (C.zf) goto L_102063f6;
  /* 102063e6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102063e7 je 0x102063f1 */
  if (C.zf) goto L_102063f1;
  /* 102063e9 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102063ea jne 0x102063ff */
  if (!C.zf) goto L_102063ff;
  /* 102063ec push eax */
  push32((uint32_t)(EAX));
  /* 102063ed push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 102063ef jmp 0x102063f9 */
  goto L_102063f9;
L_102063f1:;
  /* 102063f1 push eax */
  push32((uint32_t)(EAX));
  /* 102063f2 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 102063f4 jmp 0x102063f9 */
  goto L_102063f9;
L_102063f6:;
  /* 102063f6 push eax */
  push32((uint32_t)(EAX));
  /* 102063f7 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_102063f9:;
  /* 102063f9 call dword ptr [0x102080ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080ac))), 0x102063ffu);
L_102063ff:;
  /* 102063ff mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10206401 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 10206405 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10206407 jmp 0x1020641f */
  goto L_1020641f;
L_10206409:;
  /* 10206409 call 0x10206391 */
  push32(0x1020640eu); f_10206391();
  /* 1020640e mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10206414 call 0x1020639a */
  push32(0x10206419u); f_1020639a();
  /* 10206419 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1020641c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1020641f:;
  /* 1020641f pop edi */
  EDI = (pop32());
  /* 10206420 pop esi */
  ESI = (pop32());
  /* 10206421 ret  */
  ESPCHK(0x102063a3u, _esp0);
  ESP += 4; return;
}

/* FUN_10006422 @ 0x10206422 (66 bytes, 19 insns) */
void f_10206422(void) {
  FTRACE(0x10206422u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10206422 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10206426 cmp eax, dword ptr [0x1020c660] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1020c660))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020642c jae 0x1020644d */
  if (!C.cf) goto L_1020644d;
  /* 1020642e mov ecx, eax */
  ECX = (EAX);
  /* 10206430 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10206433 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10206436 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10206439 mov ecx, dword ptr [ecx*4 + 0x1020c560] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1020c560)));
  /* 10206440 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10206445 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10206448 je 0x1020644d */
  if (C.zf) goto L_1020644d;
  /* 1020644a mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 1020644c ret  */
  ESPCHK(0x10206422u, _esp0);
  ESP += 4; return;
L_1020644d:;
  /* 1020644d call 0x10206391 */
  push32(0x10206452u); f_10206391();
  /* 10206452 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10206458 call 0x1020639a */
  push32(0x1020645du); f_1020639a();
  /* 1020645d and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10206460 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10206463 ret  */
  ESPCHK(0x10206422u, _esp0);
  ESP += 4; return;
}

/* FUN_10006464 @ 0x10206464 (95 bytes, 34 insns) */
void f_10206464(void) {
  FTRACE(0x10206464u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10206464 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10206468 push ebx */
  push32((uint32_t)(EBX));
  /* 10206469 mov ecx, eax */
  ECX = (EAX);
  /* 1020646b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1020646e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10206471 push esi */
  push32((uint32_t)(ESI));
  /* 10206472 push edi */
  push32((uint32_t)(EDI));
  /* 10206473 mov esi, dword ptr [ecx*4 + 0x1020c560] */
  ESI = (r32((uint32_t)(ECX*4 + 0x1020c560)));
  /* 1020647a lea ebx, [ecx*4 + 0x1020c560] */
  EBX = ((uint32_t)(ECX*4 + 0x1020c560));
  /* 10206481 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 10206484 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 10206487 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10206489 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020648d jne 0x102064b2 */
  if (!C.zf) goto L_102064b2;
  /* 1020648f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10206491 call 0x10204f3a */
  push32(0x10206496u); f_10204f3a();
  /* 10206496 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020649a pop ecx */
  ECX = (pop32());
  /* 1020649b jne 0x102064aa */
  if (!C.zf) goto L_102064aa;
  /* 1020649d lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 102064a0 push eax */
  push32((uint32_t)(EAX));
  /* 102064a1 call dword ptr [0x1020808c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020808c))), 0x102064a7u);
  /* 102064a7 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_102064aa:;
  /* 102064aa push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102064ac call 0x10204f9b */
  push32(0x102064b1u); f_10204f9b();
  /* 102064b1 pop ecx */
  ECX = (pop32());
L_102064b2:;
  /* 102064b2 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 102064b4 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 102064b8 push eax */
  push32((uint32_t)(EAX));
  /* 102064b9 call dword ptr [0x10208000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208000))), 0x102064bfu);
  /* 102064bf pop edi */
  EDI = (pop32());
  /* 102064c0 pop esi */
  ESI = (pop32());
  /* 102064c1 pop ebx */
  EBX = (pop32());
  /* 102064c2 ret  */
  ESPCHK(0x10206464u, _esp0);
  ESP += 4; return;
}

/* FUN_100064c3 @ 0x102064c3 (34 bytes, 10 insns) */
void f_102064c3(void) {
  FTRACE(0x102064c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102064c3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102064c7 mov ecx, eax */
  ECX = (EAX);
  /* 102064c9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 102064cc sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 102064cf lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 102064d2 mov ecx, dword ptr [ecx*4 + 0x1020c560] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1020c560)));
  /* 102064d9 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 102064dd push eax */
  push32((uint32_t)(EAX));
  /* 102064de call dword ptr [0x1020800c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020800c))), 0x102064e4u);
  /* 102064e4 ret  */
  ESPCHK(0x102064c3u, _esp0);
  ESP += 4; return;
}

/* FUN_10006566 @ 0x10206566 (46 bytes, 22 insns) */
void f_10206566(void) {
  FTRACE(0x10206566u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10206566 push esi */
  push32((uint32_t)(ESI));
  /* 10206567 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1020656b push esi */
  push32((uint32_t)(ESI));
  /* 1020656c call 0x10206594 */
  push32(0x10206571u); f_10206594();
  /* 10206571 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10206573 pop ecx */
  ECX = (pop32());
  /* 10206574 je 0x1020657b */
  if (C.zf) goto L_1020657b;
  /* 10206576 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10206579 pop esi */
  ESI = (pop32());
  /* 1020657a ret  */
  ESPCHK(0x10206566u, _esp0);
  ESP += 4; return;
L_1020657b:;
  /* 1020657b test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 1020657f je 0x10206590 */
  if (C.zf) goto L_10206590;
  /* 10206581 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10206584 call 0x10206e72 */
  push32(0x10206589u); f_10206e72();
  /* 10206589 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1020658b pop ecx */
  ECX = (pop32());
  /* 1020658c pop esi */
  ESI = (pop32());
  /* 1020658d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1020658f ret  */
  ESPCHK(0x10206566u, _esp0);
  ESP += 4; return;
L_10206590:;
  /* 10206590 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10206592 pop esi */
  ESI = (pop32());
  /* 10206593 ret  */
  ESPCHK(0x10206566u, _esp0);
  ESP += 4; return;
}

/* FUN_10006594 @ 0x10206594 (92 bytes, 40 insns) */
void f_10206594(void) {
  FTRACE(0x10206594u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10206594 push ebx */
  push32((uint32_t)(EBX));
  /* 10206595 push esi */
  push32((uint32_t)(ESI));
  /* 10206596 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1020659a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1020659c push edi */
  push32((uint32_t)(EDI));
  /* 1020659d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 102065a0 mov ecx, eax */
  ECX = (EAX);
  /* 102065a2 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 102065a5 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102065a8 jne 0x102065e1 */
  if (!C.zf) goto L_102065e1;
  /* 102065aa test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 102065ae je 0x102065e1 */
  if (C.zf) goto L_102065e1;
  /* 102065b0 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 102065b3 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 102065b5 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102065b7 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102065b9 jle 0x102065e1 */
  if ((C.zf||C.sf!=C.of)) goto L_102065e1;
  /* 102065bb push edi */
  push32((uint32_t)(EDI));
  /* 102065bc push eax */
  push32((uint32_t)(EAX));
  /* 102065bd push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 102065c0 call 0x102048b4 */
  push32(0x102065c5u); f_102048b4();
  /* 102065c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102065c8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102065ca jne 0x102065da */
  if (!C.zf) goto L_102065da;
  /* 102065cc mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 102065cf test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 102065d1 je 0x102065e1 */
  if (C.zf) goto L_102065e1;
  /* 102065d3 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 102065d5 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 102065d8 jmp 0x102065e1 */
  goto L_102065e1;
L_102065da:;
  /* 102065da or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 102065de or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_102065e1:;
  /* 102065e1 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 102065e4 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 102065e8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102065ea pop edi */
  EDI = (pop32());
  /* 102065eb mov eax, ebx */
  EAX = (EBX);
  /* 102065ed pop esi */
  ESI = (pop32());
  /* 102065ee pop ebx */
  EBX = (pop32());
  /* 102065ef ret  */
  ESPCHK(0x10206594u, _esp0);
  ESP += 4; return;
}

/* FUN_100065f9 @ 0x102065f9 (164 bytes, 66 insns) */
void f_102065f9(void) {
  FTRACE(0x102065f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102065f9 push ebx */
  push32((uint32_t)(EBX));
  /* 102065fa push esi */
  push32((uint32_t)(ESI));
  /* 102065fb push edi */
  push32((uint32_t)(EDI));
  /* 102065fc push 2 */
  push32((uint32_t)(0x2u));
  /* 102065fe xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10206600 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10206602 call 0x10204f3a */
  push32(0x10206607u); f_10204f3a();
  /* 10206607 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10206609 pop ecx */
  ECX = (pop32());
  /* 1020660a cmp dword ptr [0x1020c540], esi */
  { uint32_t _a=(r32((uint32_t)(0x1020c540))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206610 jle 0x10206686 */
  if ((C.zf||C.sf!=C.of)) goto L_10206686;
L_10206612:;
  /* 10206612 mov eax, dword ptr [0x1020b528] */
  EAX = (r32((uint32_t)(0x1020b528)));
  /* 10206617 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1020661a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020661c je 0x1020667d */
  if (C.zf) goto L_1020667d;
  /* 1020661e test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 10206622 je 0x1020667d */
  if (C.zf) goto L_1020667d;
  /* 10206624 push eax */
  push32((uint32_t)(EAX));
  /* 10206625 push esi */
  push32((uint32_t)(ESI));
  /* 10206626 call 0x10204bfc */
  push32(0x1020662bu); f_10204bfc();
  /* 1020662b mov eax, dword ptr [0x1020b528] */
  EAX = (r32((uint32_t)(0x1020b528)));
  /* 10206630 pop ecx */
  ECX = (pop32());
  /* 10206631 pop ecx */
  ECX = (pop32());
  /* 10206632 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 10206635 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10206638 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 1020663b je 0x1020666d */
  if (C.zf) goto L_1020666d;
  /* 1020663d cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206642 jne 0x10206653 */
  if (!C.zf) goto L_10206653;
  /* 10206644 push eax */
  push32((uint32_t)(EAX));
  /* 10206645 call 0x10206566 */
  push32(0x1020664au); f_10206566();
  /* 1020664a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020664d pop ecx */
  ECX = (pop32());
  /* 1020664e je 0x1020666d */
  if (C.zf) goto L_1020666d;
  /* 10206650 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10206651 jmp 0x1020666d */
  goto L_1020666d;
L_10206653:;
  /* 10206653 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206658 jne 0x1020666d */
  if (!C.zf) goto L_1020666d;
  /* 1020665a test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 1020665d je 0x1020666d */
  if (C.zf) goto L_1020666d;
  /* 1020665f push eax */
  push32((uint32_t)(EAX));
  /* 10206660 call 0x10206566 */
  push32(0x10206665u); f_10206566();
  /* 10206665 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206668 pop ecx */
  ECX = (pop32());
  /* 10206669 jne 0x1020666d */
  if (!C.zf) goto L_1020666d;
  /* 1020666b or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_1020666d:;
  /* 1020666d mov eax, dword ptr [0x1020b528] */
  EAX = (r32((uint32_t)(0x1020b528)));
  /* 10206672 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 10206675 push esi */
  push32((uint32_t)(ESI));
  /* 10206676 call 0x10204c4e */
  push32(0x1020667bu); f_10204c4e();
  /* 1020667b pop ecx */
  ECX = (pop32());
  /* 1020667c pop ecx */
  ECX = (pop32());
L_1020667d:;
  /* 1020667d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1020667e cmp esi, dword ptr [0x1020c540] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1020c540))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206684 jl 0x10206612 */
  if ((C.sf!=C.of)) goto L_10206612;
L_10206686:;
  /* 10206686 push 2 */
  push32((uint32_t)(0x2u));
  /* 10206688 call 0x10204f9b */
  push32(0x1020668du); f_10204f9b();
  /* 1020668d cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206692 pop ecx */
  ECX = (pop32());
  /* 10206693 mov eax, ebx */
  EAX = (EBX);
  /* 10206695 je 0x10206699 */
  if (C.zf) goto L_10206699;
  /* 10206697 mov eax, edi */
  EAX = (EDI);
L_10206699:;
  /* 10206699 pop edi */
  EDI = (pop32());
  /* 1020669a pop esi */
  ESI = (pop32());
  /* 1020669b pop ebx */
  EBX = (pop32());
  /* 1020669c ret  */
  ESPCHK(0x102065f9u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1020669d (9 bytes, 4 insns) */
void f_1020669d(void) {
  FTRACE(0x1020669du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1020669d push 2 */
  push32((uint32_t)(0x2u));
  /* 1020669f call 0x10203358 */
  push32(0x102066a4u); f_10203358();
  /* 102066a4 pop ecx */
  ECX = (pop32());
  /* 102066a5 ret  */
  ESPCHK(0x1020669du, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x102066b0 (88 bytes, 40 insns) */
void f_102066b0(void) {
  FTRACE(0x102066b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102066b0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 102066b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102066b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102066ba je 0x10206703 */
  if (C.zf) goto L_10206703;
  /* 102066bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102066be mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 102066c2 push edi */
  push32((uint32_t)(EDI));
  /* 102066c3 mov edi, ecx */
  EDI = (ECX);
  /* 102066c5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102066c8 jb 0x102066f7 */
  if (C.cf) goto L_102066f7;
  /* 102066ca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102066cc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 102066cf je 0x102066d9 */
  if (C.zf) goto L_102066d9;
  /* 102066d1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_102066d3:;
  /* 102066d3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102066d5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102066d6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102066d7 jne 0x102066d3 */
  if (!C.zf) goto L_102066d3;
L_102066d9:;
  /* 102066d9 mov ecx, eax */
  ECX = (EAX);
  /* 102066db shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 102066de add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102066e0 mov ecx, eax */
  ECX = (EAX);
  /* 102066e2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 102066e5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102066e7 mov ecx, edx */
  ECX = (EDX);
  /* 102066e9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102066ec shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102066ef je 0x102066f7 */
  if (C.zf) goto L_102066f7;
  /* 102066f1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102066f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102066f5 je 0x102066fd */
  if (C.zf) goto L_102066fd;
L_102066f7:;
  /* 102066f7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102066f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102066fa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 102066fb jne 0x102066f7 */
  if (!C.zf) goto L_102066f7;
L_102066fd:;
  /* 102066fd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10206701 pop edi */
  EDI = (pop32());
  /* 10206702 ret  */
  ESPCHK(0x102066b0u, _esp0);
  ESP += 4; return;
L_10206703:;
  /* 10206703 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10206707 ret  */
  ESPCHK(0x102066b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006708 @ 0x10206708 (27 bytes, 13 insns) */
void f_10206708(void) {
  FTRACE(0x10206708u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10206708 mov eax, dword ptr [0x1020b19c] */
  EAX = (r32((uint32_t)(0x1020b19c)));
  /* 1020670d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020670f je 0x10206720 */
  if (C.zf) goto L_10206720;
  /* 10206711 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10206715 call eax */
  call_ind((uint32_t)(EAX), 0x10206717u);
  /* 10206717 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10206719 pop ecx */
  ECX = (pop32());
  /* 1020671a je 0x10206720 */
  if (C.zf) goto L_10206720;
  /* 1020671c push 1 */
  push32((uint32_t)(0x1u));
  /* 1020671e pop eax */
  EAX = (pop32());
  /* 1020671f ret  */
  ESPCHK(0x10206708u, _esp0);
  ESP += 4; return;
L_10206720:;
  /* 10206720 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10206722 ret  */
  ESPCHK(0x10206708u, _esp0);
  ESP += 4; return;
}

/* FUN_10006723 @ 0x10206723 (511 bytes, 193 insns) */
void f_10206723(void) {
  FTRACE(0x10206723u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10206723 push ebp */
  push32((uint32_t)(EBP));
  /* 10206724 mov ebp, esp */
  EBP = (ESP);
  /* 10206726 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10206728 push 0x10208488 */
  push32((uint32_t)(0x10208488u));
  /* 1020672d push 0x10207154 */
  push32((uint32_t)(0x10207154u));
  /* 10206732 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10206738 push eax */
  push32((uint32_t)(EAX));
  /* 10206739 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10206740 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10206743 push ebx */
  push32((uint32_t)(EBX));
  /* 10206744 push esi */
  push32((uint32_t)(ESI));
  /* 10206745 push edi */
  push32((uint32_t)(EDI));
  /* 10206746 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10206749 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1020674b cmp dword ptr [0x1020b1a4], edi */
  { uint32_t _a=(r32((uint32_t)(0x1020b1a4))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206751 jne 0x10206799 */
  if (!C.zf) goto L_10206799;
  /* 10206753 push edi */
  push32((uint32_t)(EDI));
  /* 10206754 push edi */
  push32((uint32_t)(EDI));
  /* 10206755 push 1 */
  push32((uint32_t)(0x1u));
  /* 10206757 pop ebx */
  EBX = (pop32());
  /* 10206758 push ebx */
  push32((uint32_t)(EBX));
  /* 10206759 push 0x10208484 */
  push32((uint32_t)(0x10208484u));
  /* 1020675e mov esi, 0x100 */
  ESI = (0x100u);
  /* 10206763 push esi */
  push32((uint32_t)(ESI));
  /* 10206764 push edi */
  push32((uint32_t)(EDI));
  /* 10206765 call dword ptr [0x102080b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080b8))), 0x1020676bu);
  /* 1020676b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1020676d je 0x10206777 */
  if (C.zf) goto L_10206777;
  /* 1020676f mov dword ptr [0x1020b1a4], ebx */
  w32((uint32_t)(0x1020b1a4), (EBX));
  /* 10206775 jmp 0x10206799 */
  goto L_10206799;
L_10206777:;
  /* 10206777 push edi */
  push32((uint32_t)(EDI));
  /* 10206778 push edi */
  push32((uint32_t)(EDI));
  /* 10206779 push ebx */
  push32((uint32_t)(EBX));
  /* 1020677a push 0x10208480 */
  push32((uint32_t)(0x10208480u));
  /* 1020677f push esi */
  push32((uint32_t)(ESI));
  /* 10206780 push edi */
  push32((uint32_t)(EDI));
  /* 10206781 call dword ptr [0x102080b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080b4))), 0x10206787u);
  /* 10206787 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10206789 je 0x102068b1 */
  if (C.zf) goto L_102068b1;
  /* 1020678f mov dword ptr [0x1020b1a4], 2 */
  w32((uint32_t)(0x1020b1a4), (0x2u));
L_10206799:;
  /* 10206799 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020679c jle 0x102067ae */
  if ((C.zf||C.sf!=C.of)) goto L_102067ae;
  /* 1020679e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102067a1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102067a4 call 0x10206947 */
  push32(0x102067a9u); f_10206947();
  /* 102067a9 pop ecx */
  ECX = (pop32());
  /* 102067aa pop ecx */
  ECX = (pop32());
  /* 102067ab mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_102067ae:;
  /* 102067ae mov eax, dword ptr [0x1020b1a4] */
  EAX = (r32((uint32_t)(0x1020b1a4)));
  /* 102067b3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102067b6 jne 0x102067d5 */
  if (!C.zf) goto L_102067d5;
  /* 102067b8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 102067bb push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102067be push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102067c1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102067c4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102067c7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102067ca call dword ptr [0x102080b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080b4))), 0x102067d0u);
  /* 102067d0 jmp 0x102068b3 */
  goto L_102068b3;
L_102067d5:;
  /* 102067d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102067d8 jne 0x102068b1 */
  if (!C.zf) goto L_102068b1;
  /* 102067de cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102067e1 jne 0x102067eb */
  if (!C.zf) goto L_102067eb;
  /* 102067e3 mov eax, dword ptr [0x1020b194] */
  EAX = (r32((uint32_t)(0x1020b194)));
  /* 102067e8 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_102067eb:;
  /* 102067eb push edi */
  push32((uint32_t)(EDI));
  /* 102067ec push edi */
  push32((uint32_t)(EDI));
  /* 102067ed push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102067f0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102067f3 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 102067f6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102067f8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102067fa and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 102067fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102067fe push eax */
  push32((uint32_t)(EAX));
  /* 102067ff push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10206802 call dword ptr [0x102080b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080b0))), 0x10206808u);
  /* 10206808 mov ebx, eax */
  EBX = (EAX);
  /* 1020680a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1020680d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020680f je 0x102068b1 */
  if (C.zf) goto L_102068b1;
  /* 10206815 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10206818 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1020681b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1020681e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10206820 call 0x10207230 */
  push32(0x10206825u); f_10207230();
  /* 10206825 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10206828 mov eax, esp */
  EAX = (ESP);
  /* 1020682a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1020682d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10206831 jmp 0x10206846 */
  goto L_10206846;
  /* 10206833 push 1 */
  push32((uint32_t)(0x1u));
  /* 10206835 pop eax */
  EAX = (pop32());
  /* 10206836 ret  */
  ESPCHK(0x10206723u, _esp0);
  ESP += 4; return;
  /* 10206837 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1020683a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1020683c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1020683f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10206843 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_10206846:;
  /* 10206846 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206849 je 0x102068b1 */
  if (C.zf) goto L_102068b1;
  /* 1020684b push ebx */
  push32((uint32_t)(EBX));
  /* 1020684c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1020684f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10206852 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10206855 push 1 */
  push32((uint32_t)(0x1u));
  /* 10206857 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1020685a call dword ptr [0x102080b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080b0))), 0x10206860u);
  /* 10206860 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10206862 je 0x102068b1 */
  if (C.zf) goto L_102068b1;
  /* 10206864 push edi */
  push32((uint32_t)(EDI));
  /* 10206865 push edi */
  push32((uint32_t)(EDI));
  /* 10206866 push ebx */
  push32((uint32_t)(EBX));
  /* 10206867 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1020686a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1020686d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10206870 call dword ptr [0x102080b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080b8))), 0x10206876u);
  /* 10206876 mov esi, eax */
  ESI = (EAX);
  /* 10206878 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1020687b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020687d je 0x102068b1 */
  if (C.zf) goto L_102068b1;
  /* 1020687f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 10206883 je 0x102068c5 */
  if (C.zf) goto L_102068c5;
  /* 10206885 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206888 je 0x10206940 */
  if (C.zf) goto L_10206940;
  /* 1020688e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206891 jg 0x102068b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_102068b1;
  /* 10206893 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10206896 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10206899 push ebx */
  push32((uint32_t)(EBX));
  /* 1020689a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1020689d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102068a0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102068a3 call dword ptr [0x102080b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080b8))), 0x102068a9u);
  /* 102068a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102068ab jne 0x10206940 */
  if (!C.zf) goto L_10206940;
L_102068b1:;
  /* 102068b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102068b3:;
  /* 102068b3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 102068b6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102068b9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 102068c0 pop edi */
  EDI = (pop32());
  /* 102068c1 pop esi */
  ESI = (pop32());
  /* 102068c2 pop ebx */
  EBX = (pop32());
  /* 102068c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102068c4 ret  */
  ESPCHK(0x10206723u, _esp0);
  ESP += 4; return;
L_102068c5:;
  /* 102068c5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 102068cc lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 102068cf add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102068d2 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 102068d4 call 0x10207230 */
  push32(0x102068d9u); f_10207230();
  /* 102068d9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102068dc mov ebx, esp */
  EBX = (ESP);
  /* 102068de mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 102068e1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102068e5 jmp 0x102068f9 */
  goto L_102068f9;
  /* 102068e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102068e9 pop eax */
  EAX = (pop32());
  /* 102068ea ret  */
  ESPCHK(0x10206723u, _esp0);
  ESP += 4; return;
  /* 102068eb mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102068ee xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102068f0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102068f2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102068f6 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_102068f9:;
  /* 102068f9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102068fb je 0x102068b1 */
  if (C.zf) goto L_102068b1;
  /* 102068fd push esi */
  push32((uint32_t)(ESI));
  /* 102068fe push ebx */
  push32((uint32_t)(EBX));
  /* 102068ff push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10206902 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10206905 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10206908 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1020690b call dword ptr [0x102080b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080b8))), 0x10206911u);
  /* 10206911 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10206913 je 0x102068b1 */
  if (C.zf) goto L_102068b1;
  /* 10206915 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206918 push edi */
  push32((uint32_t)(EDI));
  /* 10206919 push edi */
  push32((uint32_t)(EDI));
  /* 1020691a jne 0x10206920 */
  if (!C.zf) goto L_10206920;
  /* 1020691c push edi */
  push32((uint32_t)(EDI));
  /* 1020691d push edi */
  push32((uint32_t)(EDI));
  /* 1020691e jmp 0x10206926 */
  goto L_10206926;
L_10206920:;
  /* 10206920 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10206923 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_10206926:;
  /* 10206926 push esi */
  push32((uint32_t)(ESI));
  /* 10206927 push ebx */
  push32((uint32_t)(EBX));
  /* 10206928 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1020692d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10206930 call dword ptr [0x10208060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10208060))), 0x10206936u);
  /* 10206936 mov esi, eax */
  ESI = (EAX);
  /* 10206938 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020693a je 0x102068b1 */
  if (C.zf) goto L_102068b1;
L_10206940:;
  /* 10206940 mov eax, esi */
  EAX = (ESI);
  /* 10206942 jmp 0x102068b3 */
  goto L_102068b3;
}

/* FUN_10006947 @ 0x10206947 (43 bytes, 20 insns) */
void f_10206947(void) {
  FTRACE(0x10206947u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10206947 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1020694b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1020694f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10206951 push esi */
  push32((uint32_t)(ESI));
  /* 10206952 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 10206955 je 0x10206964 */
  if (C.zf) goto L_10206964;
L_10206957:;
  /* 10206957 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1020695a je 0x10206964 */
  if (C.zf) goto L_10206964;
  /* 1020695c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1020695d mov esi, ecx */
  ESI = (ECX);
  /* 1020695f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10206960 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10206962 jne 0x10206957 */
  if (!C.zf) goto L_10206957;
L_10206964:;
  /* 10206964 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10206967 pop esi */
  ESI = (pop32());
  /* 10206968 jne 0x1020696f */
  if (!C.zf) goto L_1020696f;
  /* 1020696a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1020696e ret  */
  ESPCHK(0x10206947u, _esp0);
  ESP += 4; return;
L_1020696f:;
  /* 1020696f mov eax, edx */
  EAX = (EDX);
  /* 10206971 ret  */
  ESPCHK(0x10206947u, _esp0);
  ESP += 4; return;
}

/* FUN_10006972 @ 0x10206972 (318 bytes, 123 insns) */
void f_10206972(void) {
  FTRACE(0x10206972u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10206972 push ebp */
  push32((uint32_t)(EBP));
  /* 10206973 mov ebp, esp */
  EBP = (ESP);
  /* 10206975 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10206977 push 0x102084a0 */
  push32((uint32_t)(0x102084a0u));
  /* 1020697c push 0x10207154 */
  push32((uint32_t)(0x10207154u));
  /* 10206981 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10206987 push eax */
  push32((uint32_t)(EAX));
  /* 10206988 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1020698f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10206992 push ebx */
  push32((uint32_t)(EBX));
  /* 10206993 push esi */
  push32((uint32_t)(ESI));
  /* 10206994 push edi */
  push32((uint32_t)(EDI));
  /* 10206995 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10206998 mov eax, dword ptr [0x1020b1a8] */
  EAX = (r32((uint32_t)(0x1020b1a8)));
  /* 1020699d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1020699f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102069a1 jne 0x102069e1 */
  if (!C.zf) goto L_102069e1;
  /* 102069a3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 102069a6 push eax */
  push32((uint32_t)(EAX));
  /* 102069a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102069a9 pop esi */
  ESI = (pop32());
  /* 102069aa push esi */
  push32((uint32_t)(ESI));
  /* 102069ab push 0x10208484 */
  push32((uint32_t)(0x10208484u));
  /* 102069b0 push esi */
  push32((uint32_t)(ESI));
  /* 102069b1 call dword ptr [0x102080c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080c0))), 0x102069b7u);
  /* 102069b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102069b9 je 0x102069bf */
  if (C.zf) goto L_102069bf;
  /* 102069bb mov eax, esi */
  EAX = (ESI);
  /* 102069bd jmp 0x102069dc */
  goto L_102069dc;
L_102069bf:;
  /* 102069bf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 102069c2 push eax */
  push32((uint32_t)(EAX));
  /* 102069c3 push esi */
  push32((uint32_t)(ESI));
  /* 102069c4 push 0x10208480 */
  push32((uint32_t)(0x10208480u));
  /* 102069c9 push esi */
  push32((uint32_t)(ESI));
  /* 102069ca push ebx */
  push32((uint32_t)(EBX));
  /* 102069cb call dword ptr [0x102080bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080bc))), 0x102069d1u);
  /* 102069d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102069d3 je 0x10206aa7 */
  if (C.zf) goto L_10206aa7;
  /* 102069d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 102069db pop eax */
  EAX = (pop32());
L_102069dc:;
  /* 102069dc mov dword ptr [0x1020b1a8], eax */
  w32((uint32_t)(0x1020b1a8), (EAX));
L_102069e1:;
  /* 102069e1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102069e4 jne 0x10206a0a */
  if (!C.zf) goto L_10206a0a;
  /* 102069e6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 102069e9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102069eb jne 0x102069f2 */
  if (!C.zf) goto L_102069f2;
  /* 102069ed mov eax, dword ptr [0x1020b184] */
  EAX = (r32((uint32_t)(0x1020b184)));
L_102069f2:;
  /* 102069f2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102069f5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102069f8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102069fb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102069fe push eax */
  push32((uint32_t)(EAX));
  /* 102069ff call dword ptr [0x102080bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080bc))), 0x10206a05u);
  /* 10206a05 jmp 0x10206aa9 */
  goto L_10206aa9;
L_10206a0a:;
  /* 10206a0a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206a0d jne 0x10206aa7 */
  if (!C.zf) goto L_10206aa7;
  /* 10206a13 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206a16 jne 0x10206a20 */
  if (!C.zf) goto L_10206a20;
  /* 10206a18 mov eax, dword ptr [0x1020b194] */
  EAX = (r32((uint32_t)(0x1020b194)));
  /* 10206a1d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10206a20:;
  /* 10206a20 push ebx */
  push32((uint32_t)(EBX));
  /* 10206a21 push ebx */
  push32((uint32_t)(EBX));
  /* 10206a22 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10206a25 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10206a28 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10206a2b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10206a2d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10206a2f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10206a32 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10206a33 push eax */
  push32((uint32_t)(EAX));
  /* 10206a34 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10206a37 call dword ptr [0x102080b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080b0))), 0x10206a3du);
  /* 10206a3d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10206a40 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206a42 je 0x10206aa7 */
  if (C.zf) goto L_10206aa7;
  /* 10206a44 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10206a47 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 10206a4a mov eax, edi */
  EAX = (EDI);
  /* 10206a4c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10206a4f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10206a51 call 0x10207230 */
  push32(0x10206a56u); f_10207230();
  /* 10206a56 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10206a59 mov esi, esp */
  ESI = (ESP);
  /* 10206a5b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 10206a5e push edi */
  push32((uint32_t)(EDI));
  /* 10206a5f push ebx */
  push32((uint32_t)(EBX));
  /* 10206a60 push esi */
  push32((uint32_t)(ESI));
  /* 10206a61 call 0x102066b0 */
  push32(0x10206a66u); f_102066b0();
  /* 10206a66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10206a69 jmp 0x10206a76 */
  goto L_10206a76;
  /* 10206a6b push 1 */
  push32((uint32_t)(0x1u));
  /* 10206a6d pop eax */
  EAX = (pop32());
  /* 10206a6e ret  */
  ESPCHK(0x10206972u, _esp0);
  ESP += 4; return;
  /* 10206a6f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10206a72 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10206a74 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10206a76:;
  /* 10206a76 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10206a7a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206a7c je 0x10206aa7 */
  if (C.zf) goto L_10206aa7;
  /* 10206a7e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10206a81 push esi */
  push32((uint32_t)(ESI));
  /* 10206a82 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10206a85 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10206a88 push 1 */
  push32((uint32_t)(0x1u));
  /* 10206a8a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10206a8d call dword ptr [0x102080b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080b0))), 0x10206a93u);
  /* 10206a93 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206a95 je 0x10206aa7 */
  if (C.zf) goto L_10206aa7;
  /* 10206a97 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10206a9a push eax */
  push32((uint32_t)(EAX));
  /* 10206a9b push esi */
  push32((uint32_t)(ESI));
  /* 10206a9c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10206a9f call dword ptr [0x102080c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080c0))), 0x10206aa5u);
  /* 10206aa5 jmp 0x10206aa9 */
  goto L_10206aa9;
L_10206aa7:;
  /* 10206aa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10206aa9:;
  /* 10206aa9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10206aac mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10206aaf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10206ab6 pop edi */
  EDI = (pop32());
  /* 10206ab7 pop esi */
  ESI = (pop32());
  /* 10206ab8 pop ebx */
  EBX = (pop32());
  /* 10206ab9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10206aba ret  */
  ESPCHK(0x10206972u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ac0 @ 0x10206ac0 (664 bytes, 267 insns) [15 switch table(s)] */
void f_10206ac0(void) {
  FTRACE(0x10206ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10206ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10206ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10206ac3 push edi */
  push32((uint32_t)(EDI));
  /* 10206ac4 push esi */
  push32((uint32_t)(ESI));
  /* 10206ac5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10206ac8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10206acb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10206ace mov eax, ecx */
  EAX = (ECX);
  /* 10206ad0 mov edx, ecx */
  EDX = (ECX);
  /* 10206ad2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10206ad4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206ad6 jbe 0x10206ae0 */
  if ((C.cf||C.zf)) goto L_10206ae0;
  /* 10206ad8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206ada jb 0x10206c58 */
  if (C.cf) goto L_10206c58;
L_10206ae0:;
  /* 10206ae0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10206ae6 jne 0x10206afc */
  if (!C.zf) goto L_10206afc;
  /* 10206ae8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10206aeb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10206aee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206af1 jb 0x10206b1c */
  if (C.cf) goto L_10206b1c;
  /* 10206af3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10206af5 jmp dword ptr [edx*4 + 0x10206c08] */
  switch (EDX) {
    case 0: goto L_10206c18;
    case 1: goto L_10206c20;
    case 2: goto L_10206c2c;
    case 3: goto L_10206c40;
    default: x86_unimpl("switch@0x10206af5 out of table"); return;
  }
L_10206afc:;
  /* 10206afc mov eax, edi */
  EAX = (EDI);
  /* 10206afe mov edx, 3 */
  EDX = (0x3u);
  /* 10206b03 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10206b06 jb 0x10206b14 */
  if (C.cf) goto L_10206b14;
  /* 10206b08 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10206b0b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10206b0d jmp dword ptr [eax*4 + 0x10206b20] */
  switch (EAX) {
    case 1: goto L_10206b30;
    case 2: goto L_10206b5c;
    case 3: goto L_10206b80;
    default: x86_unimpl("switch@0x10206b0d out of table"); return;
  }
L_10206b14:;
  /* 10206b14 jmp dword ptr [ecx*4 + 0x10206c18] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10206c18)))); return;
  /* 10206b1b nop  */
  /* nop */
L_10206b1c:;
  /* 10206b1c jmp dword ptr [ecx*4 + 0x10206b9c] */
  switch (ECX) {
    case 0: goto L_10206bff;
    case 1: goto L_10206bec;
    case 2: goto L_10206be4;
    case 3: goto L_10206bdc;
    case 4: goto L_10206bd4;
    case 5: goto L_10206bcc;
    case 6: goto L_10206bc4;
    case 7: goto L_10206bbc;
    default: x86_unimpl("switch@0x10206b1c out of table"); return;
  }
  /* 10206b23 nop  */
  /* nop */
L_10206b30:;
  /* 10206b30 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10206b32 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10206b34 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10206b36 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10206b39 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10206b3c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10206b3f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10206b42 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10206b45 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10206b48 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10206b4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206b4e jb 0x10206b1c */
  if (C.cf) goto L_10206b1c;
  /* 10206b50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10206b52 jmp dword ptr [edx*4 + 0x10206c08] */
  switch (EDX) {
    case 0: goto L_10206c18;
    case 1: goto L_10206c20;
    case 2: goto L_10206c2c;
    case 3: goto L_10206c40;
    default: x86_unimpl("switch@0x10206b52 out of table"); return;
  }
  /* 10206b59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10206b5c:;
  /* 10206b5c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10206b5e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10206b60 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10206b62 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10206b65 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10206b68 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10206b6b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10206b6e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10206b71 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206b74 jb 0x10206b1c */
  if (C.cf) goto L_10206b1c;
  /* 10206b76 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10206b78 jmp dword ptr [edx*4 + 0x10206c08] */
  switch (EDX) {
    case 0: goto L_10206c18;
    case 1: goto L_10206c20;
    case 2: goto L_10206c2c;
    case 3: goto L_10206c40;
    default: x86_unimpl("switch@0x10206b78 out of table"); return;
  }
  /* 10206b7f nop  */
  /* nop */
L_10206b80:;
  /* 10206b80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10206b82 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10206b84 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10206b86 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10206b87 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10206b8a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10206b8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206b8e jb 0x10206b1c */
  if (C.cf) goto L_10206b1c;
  /* 10206b90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10206b92 jmp dword ptr [edx*4 + 0x10206c08] */
  switch (EDX) {
    case 0: goto L_10206c18;
    case 1: goto L_10206c20;
    case 2: goto L_10206c2c;
    case 3: goto L_10206c40;
    default: x86_unimpl("switch@0x10206b92 out of table"); return;
  }
  /* 10206b99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10206bbc:;
  /* 10206bbc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10206bc0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10206bc4:;
  /* 10206bc4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10206bc8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10206bcc:;
  /* 10206bcc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10206bd0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10206bd4:;
  /* 10206bd4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10206bd8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10206bdc:;
  /* 10206bdc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10206be0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10206be4:;
  /* 10206be4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10206be8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10206bec:;
  /* 10206bec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10206bf0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10206bf4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10206bfb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10206bfd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10206bff:;
  /* 10206bff jmp dword ptr [edx*4 + 0x10206c08] */
  switch (EDX) {
    case 0: goto L_10206c18;
    case 1: goto L_10206c20;
    case 2: goto L_10206c2c;
    case 3: goto L_10206c40;
    default: x86_unimpl("switch@0x10206bff out of table"); return;
  }
  /* 10206c06 mov edi, edi */
  EDI = (EDI);
L_10206c18:;
  /* 10206c18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10206c1b pop esi */
  ESI = (pop32());
  /* 10206c1c pop edi */
  EDI = (pop32());
  /* 10206c1d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10206c1e ret  */
  ESPCHK(0x10206ac0u, _esp0);
  ESP += 4; return;
  /* 10206c1f nop  */
  /* nop */
L_10206c20:;
  /* 10206c20 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10206c22 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10206c24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10206c27 pop esi */
  ESI = (pop32());
  /* 10206c28 pop edi */
  EDI = (pop32());
  /* 10206c29 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10206c2a ret  */
  ESPCHK(0x10206ac0u, _esp0);
  ESP += 4; return;
  /* 10206c2b nop  */
  /* nop */
L_10206c2c:;
  /* 10206c2c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10206c2e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10206c30 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10206c33 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10206c36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10206c39 pop esi */
  ESI = (pop32());
  /* 10206c3a pop edi */
  EDI = (pop32());
  /* 10206c3b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10206c3c ret  */
  ESPCHK(0x10206ac0u, _esp0);
  ESP += 4; return;
  /* 10206c3d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10206c40:;
  /* 10206c40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10206c42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10206c44 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10206c47 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10206c4a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10206c4d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10206c50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10206c53 pop esi */
  ESI = (pop32());
  /* 10206c54 pop edi */
  EDI = (pop32());
  /* 10206c55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10206c56 ret  */
  ESPCHK(0x10206ac0u, _esp0);
  ESP += 4; return;
  /* 10206c57 nop  */
  /* nop */
L_10206c58:;
  /* 10206c58 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10206c5c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10206c60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10206c66 jne 0x10206c8c */
  if (!C.zf) goto L_10206c8c;
  /* 10206c68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10206c6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10206c6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206c71 jb 0x10206c80 */
  if (C.cf) goto L_10206c80;
  /* 10206c73 std  */
  C.df=1;
  /* 10206c74 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10206c76 cld  */
  C.df=0;
  /* 10206c77 jmp dword ptr [edx*4 + 0x10206da0] */
  switch (EDX) {
    case 0: goto L_10206db0;
    case 1: goto L_10206db8;
    case 2: goto L_10206dc8;
    case 3: goto L_10206ddc;
    default: x86_unimpl("switch@0x10206c77 out of table"); return;
  }
  /* 10206c7e mov edi, edi */
  EDI = (EDI);
L_10206c80:;
  /* 10206c80 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10206c82 jmp dword ptr [ecx*4 + 0x10206d50] */
  switch (ECX) {
    case 0: goto L_10206d97;
    default: x86_unimpl("switch@0x10206c82 out of table"); return;
  }
  /* 10206c89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10206c8c:;
  /* 10206c8c mov eax, edi */
  EAX = (EDI);
  /* 10206c8e mov edx, 3 */
  EDX = (0x3u);
  /* 10206c93 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206c96 jb 0x10206ca4 */
  if (C.cf) goto L_10206ca4;
  /* 10206c98 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10206c9b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10206c9d jmp dword ptr [eax*4 + 0x10206ca8] */
  switch (EAX) {
    case 1: goto L_10206cb8;
    case 2: goto L_10206cd8;
    case 3: goto L_10206d00;
    default: x86_unimpl("switch@0x10206c9d out of table"); return;
  }
L_10206ca4:;
  /* 10206ca4 jmp dword ptr [ecx*4 + 0x10206da0] */
  switch (ECX) {
    case 0: goto L_10206db0;
    case 1: goto L_10206db8;
    case 2: goto L_10206dc8;
    case 3: goto L_10206ddc;
    default: x86_unimpl("switch@0x10206ca4 out of table"); return;
  }
  /* 10206cab nop  */
  /* nop */
L_10206cb8:;
  /* 10206cb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10206cbb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10206cbd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10206cc0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10206cc1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10206cc4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10206cc5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206cc8 jb 0x10206c80 */
  if (C.cf) goto L_10206c80;
  /* 10206cca std  */
  C.df=1;
  /* 10206ccb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10206ccd cld  */
  C.df=0;
  /* 10206cce jmp dword ptr [edx*4 + 0x10206da0] */
  switch (EDX) {
    case 0: goto L_10206db0;
    case 1: goto L_10206db8;
    case 2: goto L_10206dc8;
    case 3: goto L_10206ddc;
    default: x86_unimpl("switch@0x10206cce out of table"); return;
  }
  /* 10206cd5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10206cd8:;
  /* 10206cd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10206cdb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10206cdd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10206ce0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10206ce3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10206ce6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10206ce9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10206cec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10206cef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206cf2 jb 0x10206c80 */
  if (C.cf) goto L_10206c80;
  /* 10206cf4 std  */
  C.df=1;
  /* 10206cf5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10206cf7 cld  */
  C.df=0;
  /* 10206cf8 jmp dword ptr [edx*4 + 0x10206da0] */
  switch (EDX) {
    case 0: goto L_10206db0;
    case 1: goto L_10206db8;
    case 2: goto L_10206dc8;
    case 3: goto L_10206ddc;
    default: x86_unimpl("switch@0x10206cf8 out of table"); return;
  }
  /* 10206cff nop  */
  /* nop */
L_10206d00:;
  /* 10206d00 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10206d03 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10206d05 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10206d08 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10206d0b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10206d0e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10206d11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10206d14 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10206d17 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10206d1a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10206d1d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206d20 jb 0x10206c80 */
  if (C.cf) goto L_10206c80;
  /* 10206d26 std  */
  C.df=1;
  /* 10206d27 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10206d29 cld  */
  C.df=0;
  /* 10206d2a jmp dword ptr [edx*4 + 0x10206da0] */
  switch (EDX) {
    case 0: goto L_10206db0;
    case 1: goto L_10206db8;
    case 2: goto L_10206dc8;
    case 3: goto L_10206ddc;
    default: x86_unimpl("switch@0x10206d2a out of table"); return;
  }
  /* 10206d31 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10206d34 push esp */
  push32((uint32_t)(ESP));
  /* 10206d35 insd dword ptr es:[edi], dx */
  x86_unimpl("insd @ 0x10206d35");
  /* 10206d36 and byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10206d38 pop esp */
  ESP = (pop32());
  /* 10206d39 insd dword ptr es:[edi], dx */
  x86_unimpl("insd @ 0x10206d39");
  /* 10206d3a and byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10206d3c insd dword ptr es:[edi], dx */
  x86_unimpl("insd @ 0x10206d3c");
  /* 10206d3e and byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10206d40 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x10206d40");
  /* 10206d41 insd dword ptr es:[edi], dx */
  x86_unimpl("insd @ 0x10206d41");
  /* 10206d42 and byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10206d44 je 0x10206db3 */
  if (C.zf) goto L_10206db3;
  /* 10206d46 and byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10206d48 jl 0x10206db7 */
  if ((C.sf!=C.of)) goto L_10206db7;
  /* 10206d4a and byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10206d4c test byte ptr [ebp + 0x20], ch */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x20)))&(C.c.b.h); fl_logic(_r,8); }
  /* 10206d54 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10206d58 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10206d5c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10206d60 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10206d64 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10206d68 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10206d6c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10206d70 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10206d74 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10206d78 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10206d7c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10206d80 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10206d84 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10206d88 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10206d8c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10206d93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10206d95 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10206d97:;
  /* 10206d97 jmp dword ptr [edx*4 + 0x10206da0] */
  switch (EDX) {
    case 0: goto L_10206db0;
    case 1: goto L_10206db8;
    case 2: goto L_10206dc8;
    case 3: goto L_10206ddc;
    default: x86_unimpl("switch@0x10206d97 out of table"); return;
  }
  /* 10206d9e mov edi, edi */
  EDI = (EDI);
L_10206db0:;
  /* 10206db0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10206db3:;
  /* 10206db3 pop esi */
  ESI = (pop32());
  /* 10206db4 pop edi */
  EDI = (pop32());
  /* 10206db5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10206db6 ret  */
  ESPCHK(0x10206ac0u, _esp0);
  ESP += 4; return;
L_10206db7:;
  /* 10206db7 nop  */
  /* nop */
L_10206db8:;
  /* 10206db8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10206dbb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10206dbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10206dc1 pop esi */
  ESI = (pop32());
  /* 10206dc2 pop edi */
  EDI = (pop32());
  /* 10206dc3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10206dc4 ret  */
  ESPCHK(0x10206ac0u, _esp0);
  ESP += 4; return;
  /* 10206dc5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10206dc8:;
  /* 10206dc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10206dcb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10206dce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10206dd1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10206dd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10206dd7 pop esi */
  ESI = (pop32());
  /* 10206dd8 pop edi */
  EDI = (pop32());
  /* 10206dd9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10206dda ret  */
  ESPCHK(0x10206ac0u, _esp0);
  ESP += 4; return;
  /* 10206ddb nop  */
  /* nop */
L_10206ddc:;
  /* 10206ddc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10206ddf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10206de2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10206de5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10206de8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10206deb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10206dee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10206df1 pop esi */
  ESI = (pop32());
  /* 10206df2 pop edi */
  EDI = (pop32());
  /* 10206df3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10206df4 ret  */
  ESPCHK(0x10206ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006df5 @ 0x10206df5 (49 bytes, 20 insns) */
void f_10206df5(void) {
  FTRACE(0x10206df5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10206df5 push esi */
  push32((uint32_t)(ESI));
  /* 10206df6 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10206dfa push edi */
  push32((uint32_t)(EDI));
  /* 10206dfb or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 10206dfe test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 10206e02 je 0x10206e0a */
  if (C.zf) goto L_10206e0a;
  /* 10206e04 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 10206e08 jmp 0x10206e21 */
  goto L_10206e21;
L_10206e0a:;
  /* 10206e0a push esi */
  push32((uint32_t)(ESI));
  /* 10206e0b call 0x10204bcd */
  push32(0x10206e10u); f_10204bcd();
  /* 10206e10 push esi */
  push32((uint32_t)(ESI));
  /* 10206e11 call 0x10206e26 */
  push32(0x10206e16u); f_10206e26();
  /* 10206e16 push esi */
  push32((uint32_t)(ESI));
  /* 10206e17 mov edi, eax */
  EDI = (EAX);
  /* 10206e19 call 0x10204c1f */
  push32(0x10206e1eu); f_10204c1f();
  /* 10206e1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10206e21:;
  /* 10206e21 mov eax, edi */
  EAX = (EDI);
  /* 10206e23 pop edi */
  EDI = (pop32());
  /* 10206e24 pop esi */
  ESI = (pop32());
  /* 10206e25 ret  */
  ESPCHK(0x10206df5u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x10206e26 (76 bytes, 30 insns) */
void f_10206e26(void) {
  FTRACE(0x10206e26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10206e26 push esi */
  push32((uint32_t)(ESI));
  /* 10206e27 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10206e2b push edi */
  push32((uint32_t)(EDI));
  /* 10206e2c or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 10206e2f test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 10206e33 je 0x10206e69 */
  if (C.zf) goto L_10206e69;
  /* 10206e35 push esi */
  push32((uint32_t)(ESI));
  /* 10206e36 call 0x10206594 */
  push32(0x10206e3bu); f_10206594();
  /* 10206e3b push esi */
  push32((uint32_t)(ESI));
  /* 10206e3c mov edi, eax */
  EDI = (EAX);
  /* 10206e3e call 0x1020733f */
  push32(0x10206e43u); f_1020733f();
  /* 10206e43 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10206e46 call 0x1020725f */
  push32(0x10206e4bu); f_1020725f();
  /* 10206e4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10206e4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10206e50 jge 0x10206e57 */
  if ((C.sf==C.of)) goto L_10206e57;
  /* 10206e52 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 10206e55 jmp 0x10206e69 */
  goto L_10206e69;
L_10206e57:;
  /* 10206e57 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 10206e5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10206e5c je 0x10206e69 */
  if (C.zf) goto L_10206e69;
  /* 10206e5e push eax */
  push32((uint32_t)(EAX));
  /* 10206e5f call 0x1020503d */
  push32(0x10206e64u); f_1020503d();
  /* 10206e64 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 10206e68 pop ecx */
  ECX = (pop32());
L_10206e69:;
  /* 10206e69 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 10206e6d mov eax, edi */
  EAX = (EDI);
  /* 10206e6f pop edi */
  EDI = (pop32());
  /* 10206e70 pop esi */
  ESI = (pop32());
  /* 10206e71 ret  */
  ESPCHK(0x10206e26u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e72 @ 0x10206e72 (147 bytes, 52 insns) */
void f_10206e72(void) {
  FTRACE(0x10206e72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10206e72 push ebx */
  push32((uint32_t)(EBX));
  /* 10206e73 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 10206e77 cmp ebx, dword ptr [0x1020c660] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1020c660))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10206e7d push esi */
  push32((uint32_t)(ESI));
  /* 10206e7e push edi */
  push32((uint32_t)(EDI));
  /* 10206e7f jae 0x10206ef3 */
  if (!C.cf) goto L_10206ef3;
  /* 10206e81 mov eax, ebx */
  EAX = (EBX);
  /* 10206e83 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10206e86 lea edi, [eax*4 + 0x1020c560] */
  EDI = ((uint32_t)(EAX*4 + 0x1020c560));
  /* 10206e8d mov eax, ebx */
  EAX = (EBX);
  /* 10206e8f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10206e92 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10206e95 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10206e97 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10206e9a test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10206e9f je 0x10206ef3 */
  if (C.zf) goto L_10206ef3;
  /* 10206ea1 push ebx */
  push32((uint32_t)(EBX));
  /* 10206ea2 call 0x10206464 */
  push32(0x10206ea7u); f_10206464();
  /* 10206ea7 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10206ea9 pop ecx */
  ECX = (pop32());
  /* 10206eaa test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10206eaf je 0x10206eda */
  if (C.zf) goto L_10206eda;
  /* 10206eb1 push ebx */
  push32((uint32_t)(EBX));
  /* 10206eb2 call 0x10206422 */
  push32(0x10206eb7u); f_10206422();
  /* 10206eb7 pop ecx */
  ECX = (pop32());
  /* 10206eb8 push eax */
  push32((uint32_t)(EAX));
  /* 10206eb9 call dword ptr [0x102080c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080c4))), 0x10206ebfu);
  /* 10206ebf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10206ec1 jne 0x10206ecd */
  if (!C.zf) goto L_10206ecd;
  /* 10206ec3 call dword ptr [0x1020803c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020803c))), 0x10206ec9u);
  /* 10206ec9 mov esi, eax */
  ESI = (EAX);
  /* 10206ecb jmp 0x10206ecf */
  goto L_10206ecf;
L_10206ecd:;
  /* 10206ecd xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10206ecf:;
  /* 10206ecf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10206ed1 je 0x10206ee8 */
  if (C.zf) goto L_10206ee8;
  /* 10206ed3 call 0x1020639a */
  push32(0x10206ed8u); f_1020639a();
  /* 10206ed8 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_10206eda:;
  /* 10206eda call 0x10206391 */
  push32(0x10206edfu); f_10206391();
  /* 10206edf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10206ee5 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10206ee8:;
  /* 10206ee8 push ebx */
  push32((uint32_t)(EBX));
  /* 10206ee9 call 0x102064c3 */
  push32(0x10206eeeu); f_102064c3();
  /* 10206eee pop ecx */
  ECX = (pop32());
  /* 10206eef mov eax, esi */
  EAX = (ESI);
  /* 10206ef1 jmp 0x10206f01 */
  goto L_10206f01;
L_10206ef3:;
  /* 10206ef3 call 0x10206391 */
  push32(0x10206ef8u); f_10206391();
  /* 10206ef8 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10206efe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10206f01:;
  /* 10206f01 pop edi */
  EDI = (pop32());
  /* 10206f02 pop esi */
  ESI = (pop32());
  /* 10206f03 pop ebx */
  EBX = (pop32());
  /* 10206f04 ret  */
  ESPCHK(0x10206e72u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fa0 @ 0x10206fa0 (62 bytes, 35 insns) */
void f_10206fa0(void) {
  FTRACE(0x10206fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10206fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10206fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10206fa3 push esi */
  push32((uint32_t)(ESI));
  /* 10206fa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10206fa6 push eax */
  push32((uint32_t)(EAX));
  /* 10206fa7 push eax */
  push32((uint32_t)(EAX));
  /* 10206fa8 push eax */
  push32((uint32_t)(EAX));
  /* 10206fa9 push eax */
  push32((uint32_t)(EAX));
  /* 10206faa push eax */
  push32((uint32_t)(EAX));
  /* 10206fab push eax */
  push32((uint32_t)(EAX));
  /* 10206fac push eax */
  push32((uint32_t)(EAX));
  /* 10206fad push eax */
  push32((uint32_t)(EAX));
  /* 10206fae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10206fb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10206fb4:;
  /* 10206fb4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10206fb6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10206fb8 je 0x10206fc1 */
  if (C.zf) goto L_10206fc1;
  /* 10206fba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10206fbb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10206fbb");
  /* 10206fbf jmp 0x10206fb4 */
  goto L_10206fb4;
L_10206fc1:;
  /* 10206fc1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10206fc4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10206fc7 nop  */
  /* nop */
L_10206fc8:;
  /* 10206fc8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10206fc9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10206fcb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10206fcd je 0x10206fd6 */
  if (C.zf) goto L_10206fd6;
  /* 10206fcf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10206fd0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10206fd0");
  /* 10206fd4 jae 0x10206fc8 */
  if (!C.cf) goto L_10206fc8;
L_10206fd6:;
  /* 10206fd6 mov eax, ecx */
  EAX = (ECX);
  /* 10206fd8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10206fdb pop esi */
  ESI = (pop32());
  /* 10206fdc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10206fdd ret  */
  ESPCHK(0x10206fa0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10206fe0 (56 bytes, 31 insns) */
void f_10206fe0(void) {
  FTRACE(0x10206fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10206fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10206fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10206fe3 push edi */
  push32((uint32_t)(EDI));
  /* 10206fe4 push esi */
  push32((uint32_t)(ESI));
  /* 10206fe5 push ebx */
  push32((uint32_t)(EBX));
  /* 10206fe6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10206fe9 jecxz 0x10207011 */
  x86_unimpl("jecxz @ 0x10206fe9");
  /* 10206feb mov ebx, ecx */
  EBX = (ECX);
  /* 10206fed mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10206ff0 mov esi, edi */
  ESI = (EDI);
  /* 10206ff2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10206ff4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10206ff6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10206ff8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10206ffa mov edi, esi */
  EDI = (ESI);
  /* 10206ffc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10206fff repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10207001 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10207004 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10207006 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10207009 ja 0x1020700f */
  if ((!C.cf&&!C.zf)) goto L_1020700f;
  /* 1020700b je 0x10207011 */
  if (C.zf) goto L_10207011;
  /* 1020700d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1020700e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1020700f:;
  /* 1020700f not ecx */
  ECX = (~(ECX));
L_10207011:;
  /* 10207011 mov eax, ecx */
  EAX = (ECX);
  /* 10207013 pop ebx */
  EBX = (pop32());
  /* 10207014 pop esi */
  ESI = (pop32());
  /* 10207015 pop edi */
  EDI = (pop32());
  /* 10207016 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10207017 ret  */
  ESPCHK(0x10206fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007020 @ 0x10207020 (58 bytes, 32 insns) */
void f_10207020(void) {
  FTRACE(0x10207020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10207020 push ebp */
  push32((uint32_t)(EBP));
  /* 10207021 mov ebp, esp */
  EBP = (ESP);
  /* 10207023 push esi */
  push32((uint32_t)(ESI));
  /* 10207024 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10207026 push eax */
  push32((uint32_t)(EAX));
  /* 10207027 push eax */
  push32((uint32_t)(EAX));
  /* 10207028 push eax */
  push32((uint32_t)(EAX));
  /* 10207029 push eax */
  push32((uint32_t)(EAX));
  /* 1020702a push eax */
  push32((uint32_t)(EAX));
  /* 1020702b push eax */
  push32((uint32_t)(EAX));
  /* 1020702c push eax */
  push32((uint32_t)(EAX));
  /* 1020702d push eax */
  push32((uint32_t)(EAX));
  /* 1020702e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10207031 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10207034:;
  /* 10207034 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10207036 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10207038 je 0x10207041 */
  if (C.zf) goto L_10207041;
  /* 1020703a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1020703b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1020703b");
  /* 1020703f jmp 0x10207034 */
  goto L_10207034;
L_10207041:;
  /* 10207041 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10207044:;
  /* 10207044 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10207046 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10207048 je 0x10207054 */
  if (C.zf) goto L_10207054;
  /* 1020704a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1020704b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1020704b");
  /* 1020704f jae 0x10207044 */
  if (!C.cf) goto L_10207044;
  /* 10207051 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10207054:;
  /* 10207054 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10207057 pop esi */
  ESI = (pop32());
  /* 10207058 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10207059 ret  */
  ESPCHK(0x10207020u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1020705c (32 bytes, 18 insns) */
void f_1020705c(void) {
  FTRACE(0x1020705cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1020705c push ebp */
  push32((uint32_t)(EBP));
  /* 1020705d mov ebp, esp */
  EBP = (ESP);
  /* 1020705f push ebx */
  push32((uint32_t)(EBX));
  /* 10207060 push esi */
  push32((uint32_t)(ESI));
  /* 10207061 push edi */
  push32((uint32_t)(EDI));
  /* 10207062 push ebp */
  push32((uint32_t)(EBP));
  /* 10207063 push 0 */
  push32((uint32_t)(0x0u));
  /* 10207065 push 0 */
  push32((uint32_t)(0x0u));
  /* 10207067 push 0x10207074 */
  push32((uint32_t)(0x10207074u));
  /* 1020706c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1020706f call 0x1020779c */
  push32(0x10207074u); f_1020779c();
  /* 10207074 pop ebp */
  EBP = (pop32());
  /* 10207075 pop edi */
  EDI = (pop32());
  /* 10207076 pop esi */
  ESI = (pop32());
  /* 10207077 pop ebx */
  EBX = (pop32());
  /* 10207078 mov esp, ebp */
  ESP = (EBP);
  /* 1020707a pop ebp */
  EBP = (pop32());
  /* 1020707b ret  */
  ESPCHK(0x1020705cu, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1020709e (104 bytes, 33 insns) */
void f_1020709e(void) {
  FTRACE(0x1020709eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1020709e push ebx */
  push32((uint32_t)(EBX));
  /* 1020709f push esi */
  push32((uint32_t)(ESI));
  /* 102070a0 push edi */
  push32((uint32_t)(EDI));
  /* 102070a1 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102070a5 push eax */
  push32((uint32_t)(EAX));
  /* 102070a6 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 102070a8 push 0x1020707c */
  push32((uint32_t)(0x1020707cu));
  /* 102070ad push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 102070b4 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_102070bb:;
  /* 102070bb mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 102070bf mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 102070c2 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 102070c5 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102070c8 je 0x102070f8 */
  if (C.zf) goto L_102070f8;
  /* 102070ca cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102070ce je 0x102070f8 */
  if (C.zf) goto L_102070f8;
  /* 102070d0 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 102070d3 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 102070d6 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 102070da mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 102070dd cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102070e2 jne 0x102070f6 */
  if (!C.zf) goto L_102070f6;
  /* 102070e4 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 102070e9 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 102070ed call 0x10207132 */
  push32(0x102070f2u); f_10207132();
  /* 102070f2 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x102070f6u);
L_102070f6:;
  /* 102070f6 jmp 0x102070bb */
  goto L_102070bb;
L_102070f8:;
  /* 102070f8 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 102070ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10207102 pop edi */
  EDI = (pop32());
  /* 10207103 pop esi */
  ESI = (pop32());
  /* 10207104 pop ebx */
  EBX = (pop32());
  /* 10207105 ret  */
  ESPCHK(0x1020709eu, _esp0);
  ESP += 4; return;
}

/* FUN_10007132 @ 0x10207132 (24 bytes, 10 insns) */
void f_10207132(void) {
  FTRACE(0x10207132u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10207132 push ebx */
  push32((uint32_t)(EBX));
  /* 10207133 push ecx */
  push32((uint32_t)(ECX));
  /* 10207134 mov ebx, 0x1020a7e0 */
  EBX = (0x1020a7e0u);
  /* 10207139 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1020713c mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1020713f mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10207142 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10207145 pop ecx */
  ECX = (pop32());
  /* 10207146 pop ebx */
  EBX = (pop32());
  /* 10207147 ret 4 */
  ESPCHK(0x10207132u, _esp0);
  ESP += 8; return;
}

/* FUN_10007211 @ 0x10207211 (27 bytes, 11 insns) */
void f_10207211(void) {
  FTRACE(0x10207211u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10207211 push ebp */
  push32((uint32_t)(EBP));
  /* 10207212 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10207216 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10207218 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1020721b push eax */
  push32((uint32_t)(EAX));
  /* 1020721c mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1020721f push eax */
  push32((uint32_t)(EAX));
  /* 10207220 call 0x1020709e */
  push32(0x10207225u); f_1020709e();
  /* 10207225 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10207228 pop ebp */
  EBP = (pop32());
  /* 10207229 ret 4 */
  ESPCHK(0x10207211u, _esp0);
  ESP += 8; return;
}

/* FUN_10007230 @ 0x10207230 (47 bytes, 17 insns) */
void f_10207230(void) {
  FTRACE(0x10207230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10207230 push ecx */
  push32((uint32_t)(ECX));
  /* 10207231 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10207236 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1020723a jb 0x10207250 */
  if (C.cf) goto L_10207250;
L_1020723c:;
  /* 1020723c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10207242 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10207247 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10207249 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020724e jae 0x1020723c */
  if (!C.cf) goto L_1020723c;
L_10207250:;
  /* 10207250 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10207252 mov eax, esp */
  EAX = (ESP);
  /* 10207254 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10207256 mov esp, ecx */
  ESP = (ECX);
  /* 10207258 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1020725a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1020725d push eax */
  push32((uint32_t)(EAX));
  /* 1020725e ret  */
  ESPCHK(0x10207230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000725f @ 0x1020725f (93 bytes, 32 insns) */
void f_1020725f(void) {
  FTRACE(0x1020725fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1020725f push esi */
  push32((uint32_t)(ESI));
  /* 10207260 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10207264 cmp esi, dword ptr [0x1020c660] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1020c660))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1020726a jae 0x102072a4 */
  if (!C.cf) goto L_102072a4;
  /* 1020726c mov ecx, esi */
  ECX = (ESI);
  /* 1020726e mov eax, esi */
  EAX = (ESI);
  /* 10207270 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10207273 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10207276 mov ecx, dword ptr [ecx*4 + 0x1020c560] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1020c560)));
  /* 1020727d lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10207280 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10207285 je 0x102072a4 */
  if (C.zf) goto L_102072a4;
  /* 10207287 push edi */
  push32((uint32_t)(EDI));
  /* 10207288 push esi */
  push32((uint32_t)(ESI));
  /* 10207289 call 0x10206464 */
  push32(0x1020728eu); f_10206464();
  /* 1020728e push esi */
  push32((uint32_t)(ESI));
  /* 1020728f call 0x102072bc */
  push32(0x10207294u); f_102072bc();
  /* 10207294 push esi */
  push32((uint32_t)(ESI));
  /* 10207295 mov edi, eax */
  EDI = (EAX);
  /* 10207297 call 0x102064c3 */
  push32(0x1020729cu); f_102064c3();
  /* 1020729c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1020729f mov eax, edi */
  EAX = (EDI);
  /* 102072a1 pop edi */
  EDI = (pop32());
  /* 102072a2 pop esi */
  ESI = (pop32());
  /* 102072a3 ret  */
  ESPCHK(0x1020725fu, _esp0);
  ESP += 4; return;
L_102072a4:;
  /* 102072a4 call 0x10206391 */
  push32(0x102072a9u); f_10206391();
  /* 102072a9 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 102072af call 0x1020639a */
  push32(0x102072b4u); f_1020639a();
  /* 102072b4 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 102072b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102072ba pop esi */
  ESI = (pop32());
  /* 102072bb ret  */
  ESPCHK(0x1020725fu, _esp0);
  ESP += 4; return;
}

/* FUN_100072bc @ 0x102072bc (131 bytes, 52 insns) */
void f_102072bc(void) {
  FTRACE(0x102072bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102072bc push esi */
  push32((uint32_t)(ESI));
  /* 102072bd mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102072c1 push edi */
  push32((uint32_t)(EDI));
  /* 102072c2 push esi */
  push32((uint32_t)(ESI));
  /* 102072c3 call 0x10206422 */
  push32(0x102072c8u); f_10206422();
  /* 102072c8 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102072cb pop ecx */
  ECX = (pop32());
  /* 102072cc je 0x1020730a */
  if (C.zf) goto L_1020730a;
  /* 102072ce cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102072d1 je 0x102072d8 */
  if (C.zf) goto L_102072d8;
  /* 102072d3 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102072d6 jne 0x102072ee */
  if (!C.zf) goto L_102072ee;
L_102072d8:;
  /* 102072d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 102072da call 0x10206422 */
  push32(0x102072dfu); f_10206422();
  /* 102072df push 1 */
  push32((uint32_t)(0x1u));
  /* 102072e1 mov edi, eax */
  EDI = (EAX);
  /* 102072e3 call 0x10206422 */
  push32(0x102072e8u); f_10206422();
  /* 102072e8 pop ecx */
  ECX = (pop32());
  /* 102072e9 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102072eb pop ecx */
  ECX = (pop32());
  /* 102072ec je 0x1020730a */
  if (C.zf) goto L_1020730a;
L_102072ee:;
  /* 102072ee push esi */
  push32((uint32_t)(ESI));
  /* 102072ef call 0x10206422 */
  push32(0x102072f4u); f_10206422();
  /* 102072f4 pop ecx */
  ECX = (pop32());
  /* 102072f5 push eax */
  push32((uint32_t)(EAX));
  /* 102072f6 call dword ptr [0x102080cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102080cc))), 0x102072fcu);
  /* 102072fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102072fe jne 0x1020730a */
  if (!C.zf) goto L_1020730a;
  /* 10207300 call dword ptr [0x1020803c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1020803c))), 0x10207306u);
  /* 10207306 mov edi, eax */
  EDI = (EAX);
  /* 10207308 jmp 0x1020730c */
  goto L_1020730c;
L_1020730a:;
  /* 1020730a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_1020730c:;
  /* 1020730c push esi */
  push32((uint32_t)(ESI));
  /* 1020730d call 0x102063a3 */
  push32(0x10207312u); f_102063a3();
  /* 10207312 mov eax, esi */
  EAX = (ESI);
  /* 10207314 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 10207317 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1020731a pop ecx */
  ECX = (pop32());
  /* 1020731b mov eax, dword ptr [eax*4 + 0x1020c560] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1020c560)));
  /* 10207322 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 10207325 and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 1020732a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1020732c je 0x1020733a */
  if (C.zf) goto L_1020733a;
  /* 1020732e push edi */
  push32((uint32_t)(EDI));
  /* 1020732f call 0x1020631e */
  push32(0x10207334u); f_1020631e();
  /* 10207334 pop ecx */
  ECX = (pop32());
  /* 10207335 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10207338 jmp 0x1020733c */
  goto L_1020733c;
L_1020733a:;
  /* 1020733a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1020733c:;
  /* 1020733c pop edi */
  EDI = (pop32());
  /* 1020733d pop esi */
  ESI = (pop32());
  /* 1020733e ret  */
  ESPCHK(0x102072bcu, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x1020733f (43 bytes, 17 insns) */
void f_1020733f(void) {
  FTRACE(0x1020733fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1020733f push esi */
  push32((uint32_t)(ESI));
  /* 10207340 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10207344 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10207347 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 10207349 je 0x10207368 */
  if (C.zf) goto L_10207368;
  /* 1020734b test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1020734d je 0x10207368 */
  if (C.zf) goto L_10207368;
  /* 1020734f push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 10207352 call 0x1020503d */
  push32(0x10207357u); f_1020503d();
  /* 10207357 and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 1020735d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1020735f pop ecx */
  ECX = (pop32());
  /* 10207360 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10207362 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 10207365 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_10207368:;
  /* 10207368 pop esi */
  ESI = (pop32());
  /* 10207369 ret  */
  ESPCHK(0x1020733fu, _esp0);
  ESP += 4; return;
}

