#include "recomp.h"

/* ProcessAI @ 0x10141000 (37 bytes, 10 insns) */
void f_10141000(void) {
  FTRACE(0x10141000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10141000 call dword ptr [0x101564c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c0))), 0x10141006u);
  /* 10141006 mov dword ptr [0x10156274], eax */
  w32((uint32_t)(0x10156274), (EAX));
  /* 1014100b call 0x10146c50 */
  push32(0x10141010u); f_10146c50();
  /* 10141010 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10141012 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10141014 push 5 */
  push32((uint32_t)(0x5u));
  /* 10141016 push 0x10156210 */
  push32((uint32_t)(0x10156210u));
  /* 1014101b call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10141021u);
  /* 10141021 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141024 ret  */
  ESPCHK(0x10141000u, _esp0);
  ESP += 4; return;
}

/* InitAI @ 0x10141030 (5328 bytes, 1382 insns) */
void f_10141030(void) {
  FTRACE(0x10141030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10141030 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141035 sub esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10141038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014103a je 0x10141093 */
  if (C.zf) goto L_10141093;
  /* 1014103c push 0x1014feb8 */
  push32((uint32_t)(0x1014feb8u));
  /* 10141041 push 0x10156048 */
  push32((uint32_t)(0x10156048u));
  /* 10141046 call eax */
  call_ind((uint32_t)(EAX), 0x10141048u);
  /* 10141048 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 1014104d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141050 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141052 je 0x10141093 */
  if (C.zf) goto L_10141093;
  /* 10141054 push 0x1014feb0 */
  push32((uint32_t)(0x1014feb0u));
  /* 10141059 push 0x10155fe8 */
  push32((uint32_t)(0x10155fe8u));
  /* 1014105e call eax */
  call_ind((uint32_t)(EAX), 0x10141060u);
  /* 10141060 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141065 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141068 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014106a je 0x10141093 */
  if (C.zf) goto L_10141093;
  /* 1014106c push 0x1014fea8 */
  push32((uint32_t)(0x1014fea8u));
  /* 10141071 push 0x10156040 */
  push32((uint32_t)(0x10156040u));
  /* 10141076 call eax */
  call_ind((uint32_t)(EAX), 0x10141078u);
  /* 10141078 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 1014107d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141080 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141082 je 0x10141093 */
  if (C.zf) goto L_10141093;
  /* 10141084 push 0x1014fea0 */
  push32((uint32_t)(0x1014fea0u));
  /* 10141089 push 0x10156050 */
  push32((uint32_t)(0x10156050u));
  /* 1014108e call eax */
  call_ind((uint32_t)(EAX), 0x10141090u);
  /* 10141090 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10141093:;
  /* 10141093 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 10141098 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014109a je 0x101410ab */
  if (C.zf) goto L_101410ab;
  /* 1014109c push 0x1014fe90 */
  push32((uint32_t)(0x1014fe90u));
  /* 101410a1 push 0x10153650 */
  push32((uint32_t)(0x10153650u));
  /* 101410a6 call eax */
  call_ind((uint32_t)(EAX), 0x101410a8u);
  /* 101410a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101410ab:;
  /* 101410ab push 0x1014fe7c */
  push32((uint32_t)(0x1014fe7cu));
  /* 101410b0 push 0x101538c0 */
  push32((uint32_t)(0x101538c0u));
  /* 101410b5 call 0x101425b0 */
  push32(0x101410bau); f_101425b0();
  /* 101410ba push 0x1014fe68 */
  push32((uint32_t)(0x1014fe68u));
  /* 101410bf push 0x101538b8 */
  push32((uint32_t)(0x101538b8u));
  /* 101410c4 call 0x101425b0 */
  push32(0x101410c9u); f_101425b0();
  /* 101410c9 push 0x1014fe54 */
  push32((uint32_t)(0x1014fe54u));
  /* 101410ce push 0x101538b0 */
  push32((uint32_t)(0x101538b0u));
  /* 101410d3 call 0x101425b0 */
  push32(0x101410d8u); f_101425b0();
  /* 101410d8 push 0x1014fe40 */
  push32((uint32_t)(0x1014fe40u));
  /* 101410dd push 0x101538f8 */
  push32((uint32_t)(0x101538f8u));
  /* 101410e2 call 0x101425b0 */
  push32(0x101410e7u); f_101425b0();
  /* 101410e7 push 0x1014fe2c */
  push32((uint32_t)(0x1014fe2cu));
  /* 101410ec push 0x101538e8 */
  push32((uint32_t)(0x101538e8u));
  /* 101410f1 call 0x101425b0 */
  push32(0x101410f6u); f_101425b0();
  /* 101410f6 push 0x1014fe18 */
  push32((uint32_t)(0x1014fe18u));
  /* 101410fb push 0x101538e0 */
  push32((uint32_t)(0x101538e0u));
  /* 10141100 call 0x101425b0 */
  push32(0x10141105u); f_101425b0();
  /* 10141105 push 0x1014fe04 */
  push32((uint32_t)(0x1014fe04u));
  /* 1014110a push 0x10153698 */
  push32((uint32_t)(0x10153698u));
  /* 1014110f call 0x101425b0 */
  push32(0x10141114u); f_101425b0();
  /* 10141114 push 0x1014fdf0 */
  push32((uint32_t)(0x1014fdf0u));
  /* 10141119 push 0x10153688 */
  push32((uint32_t)(0x10153688u));
  /* 1014111e call 0x101425b0 */
  push32(0x10141123u); f_101425b0();
  /* 10141123 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141126 push 0x1014fddc */
  push32((uint32_t)(0x1014fddcu));
  /* 1014112b push 0x10153880 */
  push32((uint32_t)(0x10153880u));
  /* 10141130 call 0x101425b0 */
  push32(0x10141135u); f_101425b0();
  /* 10141135 push 0x1014fdc8 */
  push32((uint32_t)(0x1014fdc8u));
  /* 1014113a push 0x10153878 */
  push32((uint32_t)(0x10153878u));
  /* 1014113f call 0x101425b0 */
  push32(0x10141144u); f_101425b0();
  /* 10141144 push 0x1014fdb4 */
  push32((uint32_t)(0x1014fdb4u));
  /* 10141149 push 0x10153870 */
  push32((uint32_t)(0x10153870u));
  /* 1014114e call 0x101425b0 */
  push32(0x10141153u); f_101425b0();
  /* 10141153 push 0x1014fda0 */
  push32((uint32_t)(0x1014fda0u));
  /* 10141158 push 0x10153868 */
  push32((uint32_t)(0x10153868u));
  /* 1014115d call 0x101425b0 */
  push32(0x10141162u); f_101425b0();
  /* 10141162 push 0x1014fe7c */
  push32((uint32_t)(0x1014fe7cu));
  /* 10141167 push 0x101538c0 */
  push32((uint32_t)(0x101538c0u));
  /* 1014116c call 0x101425b0 */
  push32(0x10141171u); f_101425b0();
  /* 10141171 push 0x1014fe68 */
  push32((uint32_t)(0x1014fe68u));
  /* 10141176 push 0x101538b8 */
  push32((uint32_t)(0x101538b8u));
  /* 1014117b call 0x101425b0 */
  push32(0x10141180u); f_101425b0();
  /* 10141180 push 0x1014fe54 */
  push32((uint32_t)(0x1014fe54u));
  /* 10141185 push 0x101538b0 */
  push32((uint32_t)(0x101538b0u));
  /* 1014118a call 0x101425b0 */
  push32(0x1014118fu); f_101425b0();
  /* 1014118f push 0x1014fe40 */
  push32((uint32_t)(0x1014fe40u));
  /* 10141194 push 0x101538f8 */
  push32((uint32_t)(0x101538f8u));
  /* 10141199 call 0x101425b0 */
  push32(0x1014119eu); f_101425b0();
  /* 1014119e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101411a1 push 0x1014fe2c */
  push32((uint32_t)(0x1014fe2cu));
  /* 101411a6 push 0x101538e8 */
  push32((uint32_t)(0x101538e8u));
  /* 101411ab call 0x101425b0 */
  push32(0x101411b0u); f_101425b0();
  /* 101411b0 push 0x1014fe18 */
  push32((uint32_t)(0x1014fe18u));
  /* 101411b5 push 0x101538e0 */
  push32((uint32_t)(0x101538e0u));
  /* 101411ba call 0x101425b0 */
  push32(0x101411bfu); f_101425b0();
  /* 101411bf push 0x1014fe04 */
  push32((uint32_t)(0x1014fe04u));
  /* 101411c4 push 0x10153698 */
  push32((uint32_t)(0x10153698u));
  /* 101411c9 call 0x101425b0 */
  push32(0x101411ceu); f_101425b0();
  /* 101411ce push 0x1014fdf0 */
  push32((uint32_t)(0x1014fdf0u));
  /* 101411d3 push 0x10153688 */
  push32((uint32_t)(0x10153688u));
  /* 101411d8 call 0x101425b0 */
  push32(0x101411ddu); f_101425b0();
  /* 101411dd push 0x1014fddc */
  push32((uint32_t)(0x1014fddcu));
  /* 101411e2 push 0x10153880 */
  push32((uint32_t)(0x10153880u));
  /* 101411e7 call 0x101425b0 */
  push32(0x101411ecu); f_101425b0();
  /* 101411ec push 0x1014fdc8 */
  push32((uint32_t)(0x1014fdc8u));
  /* 101411f1 push 0x10153878 */
  push32((uint32_t)(0x10153878u));
  /* 101411f6 call 0x101425b0 */
  push32(0x101411fbu); f_101425b0();
  /* 101411fb push 0x1014fdb4 */
  push32((uint32_t)(0x1014fdb4u));
  /* 10141200 push 0x10153870 */
  push32((uint32_t)(0x10153870u));
  /* 10141205 call 0x101425b0 */
  push32(0x1014120au); f_101425b0();
  /* 1014120a push 0x1014fda0 */
  push32((uint32_t)(0x1014fda0u));
  /* 1014120f push 0x10153868 */
  push32((uint32_t)(0x10153868u));
  /* 10141214 call 0x101425b0 */
  push32(0x10141219u); f_101425b0();
  /* 10141219 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 1014121e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141221 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141223 je 0x10141234 */
  if (C.zf) goto L_10141234;
  /* 10141225 push 0x1014fe90 */
  push32((uint32_t)(0x1014fe90u));
  /* 1014122a push 0x10153640 */
  push32((uint32_t)(0x10153640u));
  /* 1014122f call eax */
  call_ind((uint32_t)(EAX), 0x10141231u);
  /* 10141231 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10141234:;
  /* 10141234 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141239 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014123b je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 10141241 push 0x1014fd8c */
  push32((uint32_t)(0x1014fd8cu));
  /* 10141246 push 0x10153618 */
  push32((uint32_t)(0x10153618u));
  /* 1014124b call eax */
  call_ind((uint32_t)(EAX), 0x1014124du);
  /* 1014124d mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141255 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141257 je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 1014125d push 0x1014fd74 */
  push32((uint32_t)(0x1014fd74u));
  /* 10141262 push 0x10153610 */
  push32((uint32_t)(0x10153610u));
  /* 10141267 call eax */
  call_ind((uint32_t)(EAX), 0x10141269u);
  /* 10141269 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 1014126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141271 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141273 je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 10141279 push 0x1014fd5c */
  push32((uint32_t)(0x1014fd5cu));
  /* 1014127e push 0x10153608 */
  push32((uint32_t)(0x10153608u));
  /* 10141283 call eax */
  call_ind((uint32_t)(EAX), 0x10141285u);
  /* 10141285 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 1014128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014128d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014128f je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 10141295 push 0x1014fd44 */
  push32((uint32_t)(0x1014fd44u));
  /* 1014129a push 0x101562d8 */
  push32((uint32_t)(0x101562d8u));
  /* 1014129f call eax */
  call_ind((uint32_t)(EAX), 0x101412a1u);
  /* 101412a1 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101412a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101412a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101412ab je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 101412b1 push 0x1014fd2c */
  push32((uint32_t)(0x1014fd2cu));
  /* 101412b6 push 0x101562d0 */
  push32((uint32_t)(0x101562d0u));
  /* 101412bb call eax */
  call_ind((uint32_t)(EAX), 0x101412bdu);
  /* 101412bd mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101412c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101412c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101412c7 je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 101412cd push 0x1014fd14 */
  push32((uint32_t)(0x1014fd14u));
  /* 101412d2 push 0x101562c8 */
  push32((uint32_t)(0x101562c8u));
  /* 101412d7 call eax */
  call_ind((uint32_t)(EAX), 0x101412d9u);
  /* 101412d9 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101412de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101412e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101412e3 je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 101412e9 push 0x1014fd00 */
  push32((uint32_t)(0x1014fd00u));
  /* 101412ee push 0x10156350 */
  push32((uint32_t)(0x10156350u));
  /* 101412f3 call eax */
  call_ind((uint32_t)(EAX), 0x101412f5u);
  /* 101412f5 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101412fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101412fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101412ff je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 10141305 push 0x1014fce8 */
  push32((uint32_t)(0x1014fce8u));
  /* 1014130a push 0x10156348 */
  push32((uint32_t)(0x10156348u));
  /* 1014130f call eax */
  call_ind((uint32_t)(EAX), 0x10141311u);
  /* 10141311 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141319 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014131b je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 10141321 push 0x1014fcd0 */
  push32((uint32_t)(0x1014fcd0u));
  /* 10141326 push 0x10156398 */
  push32((uint32_t)(0x10156398u));
  /* 1014132b call eax */
  call_ind((uint32_t)(EAX), 0x1014132du);
  /* 1014132d mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141335 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141337 je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 1014133d push 0x1014fcb8 */
  push32((uint32_t)(0x1014fcb8u));
  /* 10141342 push 0x10156390 */
  push32((uint32_t)(0x10156390u));
  /* 10141347 call eax */
  call_ind((uint32_t)(EAX), 0x10141349u);
  /* 10141349 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 1014134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141351 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141353 je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 10141359 push 0x1014fca0 */
  push32((uint32_t)(0x1014fca0u));
  /* 1014135e push 0x10156388 */
  push32((uint32_t)(0x10156388u));
  /* 10141363 call eax */
  call_ind((uint32_t)(EAX), 0x10141365u);
  /* 10141365 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 1014136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014136d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014136f je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 10141375 push 0x1014fc88 */
  push32((uint32_t)(0x1014fc88u));
  /* 1014137a push 0x10156380 */
  push32((uint32_t)(0x10156380u));
  /* 1014137f call eax */
  call_ind((uint32_t)(EAX), 0x10141381u);
  /* 10141381 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141389 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014138b je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 10141391 push 0x1014fd8c */
  push32((uint32_t)(0x1014fd8cu));
  /* 10141396 push 0x10153618 */
  push32((uint32_t)(0x10153618u));
  /* 1014139b call eax */
  call_ind((uint32_t)(EAX), 0x1014139du);
  /* 1014139d mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101413a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101413a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101413a7 je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 101413ad push 0x1014fd74 */
  push32((uint32_t)(0x1014fd74u));
  /* 101413b2 push 0x10153610 */
  push32((uint32_t)(0x10153610u));
  /* 101413b7 call eax */
  call_ind((uint32_t)(EAX), 0x101413b9u);
  /* 101413b9 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101413be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101413c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101413c3 je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 101413c9 push 0x1014fd5c */
  push32((uint32_t)(0x1014fd5cu));
  /* 101413ce push 0x10153608 */
  push32((uint32_t)(0x10153608u));
  /* 101413d3 call eax */
  call_ind((uint32_t)(EAX), 0x101413d5u);
  /* 101413d5 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101413da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101413dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101413df je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 101413e5 push 0x1014fd44 */
  push32((uint32_t)(0x1014fd44u));
  /* 101413ea push 0x101562d8 */
  push32((uint32_t)(0x101562d8u));
  /* 101413ef call eax */
  call_ind((uint32_t)(EAX), 0x101413f1u);
  /* 101413f1 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101413f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101413f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101413fb je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 10141401 push 0x1014fd2c */
  push32((uint32_t)(0x1014fd2cu));
  /* 10141406 push 0x101562d0 */
  push32((uint32_t)(0x101562d0u));
  /* 1014140b call eax */
  call_ind((uint32_t)(EAX), 0x1014140du);
  /* 1014140d mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141415 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141417 je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 1014141d push 0x1014fd14 */
  push32((uint32_t)(0x1014fd14u));
  /* 10141422 push 0x101562c8 */
  push32((uint32_t)(0x101562c8u));
  /* 10141427 call eax */
  call_ind((uint32_t)(EAX), 0x10141429u);
  /* 10141429 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 1014142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141431 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141433 je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 10141439 push 0x1014fd00 */
  push32((uint32_t)(0x1014fd00u));
  /* 1014143e push 0x10156350 */
  push32((uint32_t)(0x10156350u));
  /* 10141443 call eax */
  call_ind((uint32_t)(EAX), 0x10141445u);
  /* 10141445 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 1014144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014144d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014144f je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 10141451 push 0x1014fce8 */
  push32((uint32_t)(0x1014fce8u));
  /* 10141456 push 0x10156348 */
  push32((uint32_t)(0x10156348u));
  /* 1014145b call eax */
  call_ind((uint32_t)(EAX), 0x1014145du);
  /* 1014145d mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141462 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141465 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141467 je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 10141469 push 0x1014fcd0 */
  push32((uint32_t)(0x1014fcd0u));
  /* 1014146e push 0x10156398 */
  push32((uint32_t)(0x10156398u));
  /* 10141473 call eax */
  call_ind((uint32_t)(EAX), 0x10141475u);
  /* 10141475 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 1014147a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014147d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014147f je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 10141481 push 0x1014fcb8 */
  push32((uint32_t)(0x1014fcb8u));
  /* 10141486 push 0x10156390 */
  push32((uint32_t)(0x10156390u));
  /* 1014148b call eax */
  call_ind((uint32_t)(EAX), 0x1014148du);
  /* 1014148d mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141492 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141495 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141497 je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 10141499 push 0x1014fca0 */
  push32((uint32_t)(0x1014fca0u));
  /* 1014149e push 0x10156388 */
  push32((uint32_t)(0x10156388u));
  /* 101414a3 call eax */
  call_ind((uint32_t)(EAX), 0x101414a5u);
  /* 101414a5 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101414aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101414ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101414af je 0x101414c0 */
  if (C.zf) goto L_101414c0;
  /* 101414b1 push 0x1014fc88 */
  push32((uint32_t)(0x1014fc88u));
  /* 101414b6 push 0x10156380 */
  push32((uint32_t)(0x10156380u));
  /* 101414bb call eax */
  call_ind((uint32_t)(EAX), 0x101414bdu);
  /* 101414bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101414c0:;
  /* 101414c0 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 101414c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101414c7 je 0x101414f0 */
  if (C.zf) goto L_101414f0;
  /* 101414c9 push 0x1014fc74 */
  push32((uint32_t)(0x1014fc74u));
  /* 101414ce push 0x10155fa0 */
  push32((uint32_t)(0x10155fa0u));
  /* 101414d3 call eax */
  call_ind((uint32_t)(EAX), 0x101414d5u);
  /* 101414d5 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 101414da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101414dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101414df je 0x101414f0 */
  if (C.zf) goto L_101414f0;
  /* 101414e1 push 0x1014fc60 */
  push32((uint32_t)(0x1014fc60u));
  /* 101414e6 push 0x10153848 */
  push32((uint32_t)(0x10153848u));
  /* 101414eb call eax */
  call_ind((uint32_t)(EAX), 0x101414edu);
  /* 101414ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101414f0:;
  /* 101414f0 call dword ptr [0x101564c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c0))), 0x101414f6u);
  /* 101414f6 mov dword ptr [0x10156274], eax */
  w32((uint32_t)(0x10156274), (EAX));
  /* 101414fb call 0x101425d0 */
  push32(0x10141500u); f_101425d0();
  /* 10141500 mov ecx, eax */
  ECX = (EAX);
  /* 10141502 mov eax, dword ptr [0x10156274] */
  EAX = (r32((uint32_t)(0x10156274)));
  /* 10141507 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1014150d mov dword ptr [eax*4 + 0x10155f58], ecx */
  w32((uint32_t)(EAX*4 + 0x10155f58), (ECX));
  /* 10141514 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 10141517 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1014151a lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 1014151d lea eax, [eax + edx*2] */
  EAX = ((uint32_t)(EAX + EDX*2));
  /* 10141520 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10141523 mov dword ptr [eax + 0x10153ab0], 0 */
  w32((uint32_t)(EAX + 0x10153ab0), (0x0u));
  /* 1014152d mov dword ptr [eax + 0x10153c44], 0 */
  w32((uint32_t)(EAX + 0x10153c44), (0x0u));
  /* 10141537 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 1014153c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014153e je 0x1014154f */
  if (C.zf) goto L_1014154f;
  /* 10141540 push 0x1014fc48 */
  push32((uint32_t)(0x1014fc48u));
  /* 10141545 push 0x10156090 */
  push32((uint32_t)(0x10156090u));
  /* 1014154a call eax */
  call_ind((uint32_t)(EAX), 0x1014154cu);
  /* 1014154c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014154f:;
  /* 1014154f push ebp */
  push32((uint32_t)(EBP));
  /* 10141550 push esi */
  push32((uint32_t)(ESI));
  /* 10141551 push edi */
  push32((uint32_t)(EDI));
  /* 10141552 call 0x101425d0 */
  push32(0x10141557u); f_101425d0();
  /* 10141557 mov edx, eax */
  EDX = (EAX);
  /* 10141559 and eax, 6 */
  { uint32_t _r=(EAX)&(0x6u); EAX = (_r); fl_logic(_r,32); }
  /* 1014155c cmp al, 2 */
  { uint32_t _a=(AL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014155e lea ebp, [esp + 0xc] */
  EBP = ((uint32_t)(ESP + 0xc));
  /* 10141562 mov edi, 0x1014fc34 */
  EDI = (0x1014fc34u);
  /* 10141567 je 0x1014156e */
  if (C.zf) goto L_1014156e;
  /* 10141569 mov edi, 0x1014fc1c */
  EDI = (0x1014fc1cu);
L_1014156e:;
  /* 1014156e or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10141571 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10141573 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10141575 not ecx */
  ECX = (~(ECX));
  /* 10141577 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10141579 and edx, 0x18 */
  { uint32_t _r=(EDX)&(0x18u); EDX = (_r); fl_logic(_r,32); }
  /* 1014157c mov eax, ecx */
  EAX = (ECX);
  /* 1014157e mov esi, edi */
  ESI = (EDI);
  /* 10141580 mov edi, ebp */
  EDI = (EBP);
  /* 10141582 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10141585 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10141587 mov ecx, eax */
  ECX = (EAX);
  /* 10141589 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1014158c cmp dl, 8 */
  { uint32_t _a=(DL),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014158f rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 10141591 lea edx, [esp + 0x3c] */
  EDX = ((uint32_t)(ESP + 0x3c));
  /* 10141595 mov edi, 0x1014fc0c */
  EDI = (0x1014fc0cu);
  /* 1014159a je 0x101415a1 */
  if (C.zf) goto L_101415a1;
  /* 1014159c mov edi, 0x1014fbfc */
  EDI = (0x1014fbfcu);
L_101415a1:;
  /* 101415a1 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 101415a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101415a6 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 101415a8 not ecx */
  ECX = (~(ECX));
  /* 101415aa sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101415ac mov eax, ecx */
  EAX = (ECX);
  /* 101415ae mov esi, edi */
  ESI = (EDI);
  /* 101415b0 mov edi, edx */
  EDI = (EDX);
  /* 101415b2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101415b5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101415b7 mov ecx, eax */
  ECX = (EAX);
  /* 101415b9 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 101415be and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 101415c1 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 101415c3 pop edi */
  EDI = (pop32());
  /* 101415c4 pop esi */
  ESI = (pop32());
  /* 101415c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101415c7 pop ebp */
  EBP = (pop32());
  /* 101415c8 je 0x1014160e */
  if (C.zf) goto L_1014160e;
  /* 101415ca push 0x1014fbe4 */
  push32((uint32_t)(0x1014fbe4u));
  /* 101415cf push 0x10156238 */
  push32((uint32_t)(0x10156238u));
  /* 101415d4 call eax */
  call_ind((uint32_t)(EAX), 0x101415d6u);
  /* 101415d6 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 101415db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101415de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101415e0 je 0x1014160e */
  if (C.zf) goto L_1014160e;
  /* 101415e2 push 0x1014fbcc */
  push32((uint32_t)(0x1014fbccu));
  /* 101415e7 push 0x101562e8 */
  push32((uint32_t)(0x101562e8u));
  /* 101415ec call eax */
  call_ind((uint32_t)(EAX), 0x101415eeu);
  /* 101415ee mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 101415f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101415f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101415f8 je 0x1014160e */
  if (C.zf) goto L_1014160e;
  /* 101415fa push 0x1014fbb8 */
  push32((uint32_t)(0x1014fbb8u));
  /* 101415ff push 0x101536c0 */
  push32((uint32_t)(0x101536c0u));
  /* 10141604 call eax */
  call_ind((uint32_t)(EAX), 0x10141606u);
  /* 10141606 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 1014160b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014160e:;
  /* 1014160e mov ecx, dword ptr [0x101563bc] */
  ECX = (r32((uint32_t)(0x101563bc)));
  /* 10141614 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10141616 je 0x10141644 */
  if (C.zf) goto L_10141644;
  /* 10141618 push 0x1014fb9c */
  push32((uint32_t)(0x1014fb9cu));
  /* 1014161d push 0x10156220 */
  push32((uint32_t)(0x10156220u));
  /* 10141622 call ecx */
  call_ind((uint32_t)(ECX), 0x10141624u);
  /* 10141624 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141629 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014162c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014162e je 0x1014163f */
  if (C.zf) goto L_1014163f;
  /* 10141630 push 0x1014fb80 */
  push32((uint32_t)(0x1014fb80u));
  /* 10141635 push 0x10155f88 */
  push32((uint32_t)(0x10155f88u));
  /* 1014163a call eax */
  call_ind((uint32_t)(EAX), 0x1014163cu);
  /* 1014163c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014163f:;
  /* 1014163f mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
L_10141644:;
  /* 10141644 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141646 je 0x10141657 */
  if (C.zf) goto L_10141657;
  /* 10141648 push 0x1014fb6c */
  push32((uint32_t)(0x1014fb6cu));
  /* 1014164d push 0x10153600 */
  push32((uint32_t)(0x10153600u));
  /* 10141652 call eax */
  call_ind((uint32_t)(EAX), 0x10141654u);
  /* 10141654 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10141657:;
  /* 10141657 push 0x1014fb60 */
  push32((uint32_t)(0x1014fb60u));
  /* 1014165c call 0x101425a0 */
  push32(0x10141661u); f_101425a0();
  /* 10141661 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 10141666 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141669 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014166b je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 10141671 push 0x1014fb60 */
  push32((uint32_t)(0x1014fb60u));
  /* 10141676 push 0x10153648 */
  push32((uint32_t)(0x10153648u));
  /* 1014167b call eax */
  call_ind((uint32_t)(EAX), 0x1014167du);
  /* 1014167d mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 10141682 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141685 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141687 je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 1014168d push 0x1014fb50 */
  push32((uint32_t)(0x1014fb50u));
  /* 10141692 push 0x10156150 */
  push32((uint32_t)(0x10156150u));
  /* 10141697 call eax */
  call_ind((uint32_t)(EAX), 0x10141699u);
  /* 10141699 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 1014169e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101416a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101416a3 je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 101416a9 push 0x1014fb3c */
  push32((uint32_t)(0x1014fb3cu));
  /* 101416ae push 0x10156120 */
  push32((uint32_t)(0x10156120u));
  /* 101416b3 call eax */
  call_ind((uint32_t)(EAX), 0x101416b5u);
  /* 101416b5 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 101416ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101416bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101416bf je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 101416c5 push 0x1014fb30 */
  push32((uint32_t)(0x1014fb30u));
  /* 101416ca push 0x101560a0 */
  push32((uint32_t)(0x101560a0u));
  /* 101416cf call eax */
  call_ind((uint32_t)(EAX), 0x101416d1u);
  /* 101416d1 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 101416d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101416d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101416db je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 101416e1 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 101416e5 push ecx */
  push32((uint32_t)(ECX));
  /* 101416e6 push 0x10156370 */
  push32((uint32_t)(0x10156370u));
  /* 101416eb call eax */
  call_ind((uint32_t)(EAX), 0x101416edu);
  /* 101416ed mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 101416f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101416f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101416f7 je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 101416fd push 0x1014fb24 */
  push32((uint32_t)(0x1014fb24u));
  /* 10141702 push 0x101562f0 */
  push32((uint32_t)(0x101562f0u));
  /* 10141707 call eax */
  call_ind((uint32_t)(EAX), 0x10141709u);
  /* 10141709 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 1014170e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141711 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141713 je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 10141719 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 1014171d push edx */
  push32((uint32_t)(EDX));
  /* 1014171e push 0x10155f40 */
  push32((uint32_t)(0x10155f40u));
  /* 10141723 call eax */
  call_ind((uint32_t)(EAX), 0x10141725u);
  /* 10141725 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 1014172a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014172d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014172f je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 10141735 push 0x1014fb18 */
  push32((uint32_t)(0x1014fb18u));
  /* 1014173a push 0x10156330 */
  push32((uint32_t)(0x10156330u));
  /* 1014173f call eax */
  call_ind((uint32_t)(EAX), 0x10141741u);
  /* 10141741 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 10141746 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141749 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014174b je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 10141751 push 0x1014fb0c */
  push32((uint32_t)(0x1014fb0cu));
  /* 10141756 push 0x10153628 */
  push32((uint32_t)(0x10153628u));
  /* 1014175b call eax */
  call_ind((uint32_t)(EAX), 0x1014175du);
  /* 1014175d mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 10141762 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141765 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141767 je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 1014176d push 0x1014fafc */
  push32((uint32_t)(0x1014fafcu));
  /* 10141772 push 0x10153888 */
  push32((uint32_t)(0x10153888u));
  /* 10141777 call eax */
  call_ind((uint32_t)(EAX), 0x10141779u);
  /* 10141779 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 1014177e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141781 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141783 je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 10141789 push 0x1014faf0 */
  push32((uint32_t)(0x1014faf0u));
  /* 1014178e push 0x101561b0 */
  push32((uint32_t)(0x101561b0u));
  /* 10141793 call eax */
  call_ind((uint32_t)(EAX), 0x10141795u);
  /* 10141795 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 1014179a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014179d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014179f je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 101417a5 push 0x1014fae0 */
  push32((uint32_t)(0x1014fae0u));
  /* 101417aa push 0x10153850 */
  push32((uint32_t)(0x10153850u));
  /* 101417af call eax */
  call_ind((uint32_t)(EAX), 0x101417b1u);
  /* 101417b1 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 101417b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101417b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101417bb je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 101417c1 push 0x1014facc */
  push32((uint32_t)(0x1014faccu));
  /* 101417c6 push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 101417cb call eax */
  call_ind((uint32_t)(EAX), 0x101417cdu);
  /* 101417cd mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 101417d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101417d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101417d7 je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 101417dd push 0x1014fabc */
  push32((uint32_t)(0x1014fabcu));
  /* 101417e2 push 0x10155f98 */
  push32((uint32_t)(0x10155f98u));
  /* 101417e7 call eax */
  call_ind((uint32_t)(EAX), 0x101417e9u);
  /* 101417e9 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 101417ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101417f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101417f3 je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 101417f9 push 0x1014faa8 */
  push32((uint32_t)(0x1014faa8u));
  /* 101417fe push 0x10156210 */
  push32((uint32_t)(0x10156210u));
  /* 10141803 call eax */
  call_ind((uint32_t)(EAX), 0x10141805u);
  /* 10141805 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 1014180a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014180d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014180f je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 10141815 push 0x1014fa9c */
  push32((uint32_t)(0x1014fa9cu));
  /* 1014181a push 0x10156218 */
  push32((uint32_t)(0x10156218u));
  /* 1014181f call eax */
  call_ind((uint32_t)(EAX), 0x10141821u);
  /* 10141821 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 10141826 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141829 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014182b je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 10141831 push 0x1014fa90 */
  push32((uint32_t)(0x1014fa90u));
  /* 10141836 push 0x10155f90 */
  push32((uint32_t)(0x10155f90u));
  /* 1014183b call eax */
  call_ind((uint32_t)(EAX), 0x1014183du);
  /* 1014183d mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 10141842 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141845 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141847 je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 1014184d push 0x1014fa80 */
  push32((uint32_t)(0x1014fa80u));
  /* 10141852 push 0x10155ee0 */
  push32((uint32_t)(0x10155ee0u));
  /* 10141857 call eax */
  call_ind((uint32_t)(EAX), 0x10141859u);
  /* 10141859 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 1014185e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141861 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141863 je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 10141869 push 0x1014fa70 */
  push32((uint32_t)(0x1014fa70u));
  /* 1014186e push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10141873 call eax */
  call_ind((uint32_t)(EAX), 0x10141875u);
  /* 10141875 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 1014187a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014187d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014187f je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 10141885 push 0x1014fa5c */
  push32((uint32_t)(0x1014fa5cu));
  /* 1014188a push 0x10155fa8 */
  push32((uint32_t)(0x10155fa8u));
  /* 1014188f call eax */
  call_ind((uint32_t)(EAX), 0x10141891u);
  /* 10141891 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 10141896 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141899 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014189b je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 101418a1 push 0x1014fa48 */
  push32((uint32_t)(0x1014fa48u));
  /* 101418a6 push 0x101535d8 */
  push32((uint32_t)(0x101535d8u));
  /* 101418ab call eax */
  call_ind((uint32_t)(EAX), 0x101418adu);
  /* 101418ad mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 101418b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101418b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101418b7 je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 101418bd push 0x1014fa3c */
  push32((uint32_t)(0x1014fa3cu));
  /* 101418c2 push 0x10153838 */
  push32((uint32_t)(0x10153838u));
  /* 101418c7 call eax */
  call_ind((uint32_t)(EAX), 0x101418c9u);
  /* 101418c9 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 101418ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101418d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101418d3 je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 101418d9 push 0x1014fa2c */
  push32((uint32_t)(0x1014fa2cu));
  /* 101418de push 0x10153898 */
  push32((uint32_t)(0x10153898u));
  /* 101418e3 call eax */
  call_ind((uint32_t)(EAX), 0x101418e5u);
  /* 101418e5 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 101418ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101418ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101418ef je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 101418f5 push 0x1014fa20 */
  push32((uint32_t)(0x1014fa20u));
  /* 101418fa push 0x101561a8 */
  push32((uint32_t)(0x101561a8u));
  /* 101418ff call eax */
  call_ind((uint32_t)(EAX), 0x10141901u);
  /* 10141901 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 10141906 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141909 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014190b je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 10141911 push 0x1014fa10 */
  push32((uint32_t)(0x1014fa10u));
  /* 10141916 push 0x101560b8 */
  push32((uint32_t)(0x101560b8u));
  /* 1014191b call eax */
  call_ind((uint32_t)(EAX), 0x1014191du);
  /* 1014191d mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 10141922 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141925 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141927 je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 1014192d push 0x1014fa04 */
  push32((uint32_t)(0x1014fa04u));
  /* 10141932 push 0x10156298 */
  push32((uint32_t)(0x10156298u));
  /* 10141937 call eax */
  call_ind((uint32_t)(EAX), 0x10141939u);
  /* 10141939 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 1014193e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141941 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141943 je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 10141945 push 0x1014f9f8 */
  push32((uint32_t)(0x1014f9f8u));
  /* 1014194a push 0x101538a8 */
  push32((uint32_t)(0x101538a8u));
  /* 1014194f call eax */
  call_ind((uint32_t)(EAX), 0x10141951u);
  /* 10141951 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 10141956 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141959 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014195b je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 1014195d push 0x1014f9ec */
  push32((uint32_t)(0x1014f9ecu));
  /* 10141962 push 0x10155f50 */
  push32((uint32_t)(0x10155f50u));
  /* 10141967 call eax */
  call_ind((uint32_t)(EAX), 0x10141969u);
  /* 10141969 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 1014196e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141971 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141973 je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 10141975 push 0x1014f9e0 */
  push32((uint32_t)(0x1014f9e0u));
  /* 1014197a push 0x10156358 */
  push32((uint32_t)(0x10156358u));
  /* 1014197f call eax */
  call_ind((uint32_t)(EAX), 0x10141981u);
  /* 10141981 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 10141986 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141989 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014198b je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 1014198d push 0x1014f9d4 */
  push32((uint32_t)(0x1014f9d4u));
  /* 10141992 push 0x10155f48 */
  push32((uint32_t)(0x10155f48u));
  /* 10141997 call eax */
  call_ind((uint32_t)(EAX), 0x10141999u);
  /* 10141999 mov eax, dword ptr [0x101563b8] */
  EAX = (r32((uint32_t)(0x101563b8)));
  /* 1014199e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101419a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101419a3 je 0x101419b4 */
  if (C.zf) goto L_101419b4;
  /* 101419a5 push 0x1014f9c4 */
  push32((uint32_t)(0x1014f9c4u));
  /* 101419aa push 0x10153860 */
  push32((uint32_t)(0x10153860u));
  /* 101419af call eax */
  call_ind((uint32_t)(EAX), 0x101419b1u);
  /* 101419b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101419b4:;
  /* 101419b4 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101419b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101419bb je 0x10141bb4 */
  if (C.zf) goto L_10141bb4;
  /* 101419c1 push 0x1014f9ac */
  push32((uint32_t)(0x1014f9acu));
  /* 101419c6 push 0x10156338 */
  push32((uint32_t)(0x10156338u));
  /* 101419cb call eax */
  call_ind((uint32_t)(EAX), 0x101419cdu);
  /* 101419cd mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101419d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101419d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101419d7 je 0x10141bb4 */
  if (C.zf) goto L_10141bb4;
  /* 101419dd push 0x1014f994 */
  push32((uint32_t)(0x1014f994u));
  /* 101419e2 push 0x101560c0 */
  push32((uint32_t)(0x101560c0u));
  /* 101419e7 call eax */
  call_ind((uint32_t)(EAX), 0x101419e9u);
  /* 101419e9 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101419ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101419f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101419f3 je 0x10141bb4 */
  if (C.zf) goto L_10141bb4;
  /* 101419f9 push 0x1014f98c */
  push32((uint32_t)(0x1014f98cu));
  /* 101419fe push 0x10153620 */
  push32((uint32_t)(0x10153620u));
  /* 10141a03 call eax */
  call_ind((uint32_t)(EAX), 0x10141a05u);
  /* 10141a05 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141a0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141a0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141a0f je 0x10141bb4 */
  if (C.zf) goto L_10141bb4;
  /* 10141a15 push 0x1014f978 */
  push32((uint32_t)(0x1014f978u));
  /* 10141a1a push 0x10156310 */
  push32((uint32_t)(0x10156310u));
  /* 10141a1f call eax */
  call_ind((uint32_t)(EAX), 0x10141a21u);
  /* 10141a21 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141a26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141a29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141a2b je 0x10141bb4 */
  if (C.zf) goto L_10141bb4;
  /* 10141a31 push 0x1014f964 */
  push32((uint32_t)(0x1014f964u));
  /* 10141a36 push 0x10156318 */
  push32((uint32_t)(0x10156318u));
  /* 10141a3b call eax */
  call_ind((uint32_t)(EAX), 0x10141a3du);
  /* 10141a3d mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141a42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141a45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141a47 je 0x10141bb4 */
  if (C.zf) goto L_10141bb4;
  /* 10141a4d push 0x1014f950 */
  push32((uint32_t)(0x1014f950u));
  /* 10141a52 push 0x10156300 */
  push32((uint32_t)(0x10156300u));
  /* 10141a57 call eax */
  call_ind((uint32_t)(EAX), 0x10141a59u);
  /* 10141a59 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141a5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141a61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141a63 je 0x10141bb4 */
  if (C.zf) goto L_10141bb4;
  /* 10141a69 push 0x1014f93c */
  push32((uint32_t)(0x1014f93cu));
  /* 10141a6e push 0x10156308 */
  push32((uint32_t)(0x10156308u));
  /* 10141a73 call eax */
  call_ind((uint32_t)(EAX), 0x10141a75u);
  /* 10141a75 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141a7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141a7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141a7f je 0x10141bb4 */
  if (C.zf) goto L_10141bb4;
  /* 10141a85 push 0x1014f928 */
  push32((uint32_t)(0x1014f928u));
  /* 10141a8a push 0x10156320 */
  push32((uint32_t)(0x10156320u));
  /* 10141a8f call eax */
  call_ind((uint32_t)(EAX), 0x10141a91u);
  /* 10141a91 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141a96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141a99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141a9b je 0x10141bb4 */
  if (C.zf) goto L_10141bb4;
  /* 10141aa1 push 0x1014f914 */
  push32((uint32_t)(0x1014f914u));
  /* 10141aa6 push 0x10156258 */
  push32((uint32_t)(0x10156258u));
  /* 10141aab call eax */
  call_ind((uint32_t)(EAX), 0x10141aadu);
  /* 10141aad mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141ab2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141ab5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141ab7 je 0x10141bb4 */
  if (C.zf) goto L_10141bb4;
  /* 10141abd push 0x1014f900 */
  push32((uint32_t)(0x1014f900u));
  /* 10141ac2 push 0x10156240 */
  push32((uint32_t)(0x10156240u));
  /* 10141ac7 call eax */
  call_ind((uint32_t)(EAX), 0x10141ac9u);
  /* 10141ac9 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141ace add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141ad1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141ad3 je 0x10141bb4 */
  if (C.zf) goto L_10141bb4;
  /* 10141ad9 push 0x1014f8ec */
  push32((uint32_t)(0x1014f8ecu));
  /* 10141ade push 0x10156248 */
  push32((uint32_t)(0x10156248u));
  /* 10141ae3 call eax */
  call_ind((uint32_t)(EAX), 0x10141ae5u);
  /* 10141ae5 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141aea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141aed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141aef je 0x10141bb4 */
  if (C.zf) goto L_10141bb4;
  /* 10141af5 push 0x1014f8d8 */
  push32((uint32_t)(0x1014f8d8u));
  /* 10141afa push 0x10156260 */
  push32((uint32_t)(0x10156260u));
  /* 10141aff call eax */
  call_ind((uint32_t)(EAX), 0x10141b01u);
  /* 10141b01 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141b06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141b0b je 0x10141bb4 */
  if (C.zf) goto L_10141bb4;
  /* 10141b11 push 0x1014f8c4 */
  push32((uint32_t)(0x1014f8c4u));
  /* 10141b16 push 0x10156268 */
  push32((uint32_t)(0x10156268u));
  /* 10141b1b call eax */
  call_ind((uint32_t)(EAX), 0x10141b1du);
  /* 10141b1d mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141b22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141b25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141b27 je 0x10141bb4 */
  if (C.zf) goto L_10141bb4;
  /* 10141b2d push 0x1014f8b0 */
  push32((uint32_t)(0x1014f8b0u));
  /* 10141b32 push 0x101538d0 */
  push32((uint32_t)(0x101538d0u));
  /* 10141b37 call eax */
  call_ind((uint32_t)(EAX), 0x10141b39u);
  /* 10141b39 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141b3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141b41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141b43 je 0x10141bb4 */
  if (C.zf) goto L_10141bb4;
  /* 10141b45 push 0x1014f89c */
  push32((uint32_t)(0x1014f89cu));
  /* 10141b4a push 0x101538d8 */
  push32((uint32_t)(0x101538d8u));
  /* 10141b4f call eax */
  call_ind((uint32_t)(EAX), 0x10141b51u);
  /* 10141b51 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141b56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141b59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141b5b je 0x10141bb4 */
  if (C.zf) goto L_10141bb4;
  /* 10141b5d push 0x1014f888 */
  push32((uint32_t)(0x1014f888u));
  /* 10141b62 push 0x101538c8 */
  push32((uint32_t)(0x101538c8u));
  /* 10141b67 call eax */
  call_ind((uint32_t)(EAX), 0x10141b69u);
  /* 10141b69 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141b6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141b71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141b73 je 0x10141bb4 */
  if (C.zf) goto L_10141bb4;
  /* 10141b75 push 0x1014f874 */
  push32((uint32_t)(0x1014f874u));
  /* 10141b7a push 0x10155f38 */
  push32((uint32_t)(0x10155f38u));
  /* 10141b7f call eax */
  call_ind((uint32_t)(EAX), 0x10141b81u);
  /* 10141b81 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141b86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141b89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141b8b je 0x10141bb4 */
  if (C.zf) goto L_10141bb4;
  /* 10141b8d push 0x1014f860 */
  push32((uint32_t)(0x1014f860u));
  /* 10141b92 push 0x10155f28 */
  push32((uint32_t)(0x10155f28u));
  /* 10141b97 call eax */
  call_ind((uint32_t)(EAX), 0x10141b99u);
  /* 10141b99 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141b9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141ba1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141ba3 je 0x10141bb4 */
  if (C.zf) goto L_10141bb4;
  /* 10141ba5 push 0x1014f84c */
  push32((uint32_t)(0x1014f84cu));
  /* 10141baa push 0x10155f30 */
  push32((uint32_t)(0x10155f30u));
  /* 10141baf call eax */
  call_ind((uint32_t)(EAX), 0x10141bb1u);
  /* 10141bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10141bb4:;
  /* 10141bb4 lea eax, [esp] */
  EAX = ((uint32_t)(ESP));
  /* 10141bb8 push 0x1014f844 */
  push32((uint32_t)(0x1014f844u));
  /* 10141bbd push eax */
  push32((uint32_t)(EAX));
  /* 10141bbe call 0x10142e40 */
  push32(0x10141bc3u); f_10142e40();
  /* 10141bc3 push eax */
  push32((uint32_t)(EAX));
  /* 10141bc4 push 0x10155fd8 */
  push32((uint32_t)(0x10155fd8u));
  /* 10141bc9 call 0x101425b0 */
  push32(0x10141bceu); f_101425b0();
  /* 10141bce lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 10141bd2 push 0x1014f83c */
  push32((uint32_t)(0x1014f83cu));
  /* 10141bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 10141bd8 call 0x10142e40 */
  push32(0x10141bddu); f_10142e40();
  /* 10141bdd push eax */
  push32((uint32_t)(EAX));
  /* 10141bde push 0x10155fd0 */
  push32((uint32_t)(0x10155fd0u));
  /* 10141be3 call 0x101425b0 */
  push32(0x10141be8u); f_101425b0();
  /* 10141be8 lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 10141bec push 0x1014f834 */
  push32((uint32_t)(0x1014f834u));
  /* 10141bf1 push edx */
  push32((uint32_t)(EDX));
  /* 10141bf2 call 0x10142e40 */
  push32(0x10141bf7u); f_10142e40();
  /* 10141bf7 push eax */
  push32((uint32_t)(EAX));
  /* 10141bf8 push 0x10155fc8 */
  push32((uint32_t)(0x10155fc8u));
  /* 10141bfd call 0x101425b0 */
  push32(0x10141c02u); f_101425b0();
  /* 10141c02 lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10141c06 push 0x1014f82c */
  push32((uint32_t)(0x1014f82cu));
  /* 10141c0b push eax */
  push32((uint32_t)(EAX));
  /* 10141c0c call 0x10142e40 */
  push32(0x10141c11u); f_10142e40();
  /* 10141c11 push eax */
  push32((uint32_t)(EAX));
  /* 10141c12 push 0x10155fc0 */
  push32((uint32_t)(0x10155fc0u));
  /* 10141c17 call 0x101425b0 */
  push32(0x10141c1cu); f_101425b0();
  /* 10141c1c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141c1f lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 10141c23 push 0x1014f824 */
  push32((uint32_t)(0x1014f824u));
  /* 10141c28 push ecx */
  push32((uint32_t)(ECX));
  /* 10141c29 call 0x10142e40 */
  push32(0x10141c2eu); f_10142e40();
  /* 10141c2e push eax */
  push32((uint32_t)(EAX));
  /* 10141c2f push 0x10155fb8 */
  push32((uint32_t)(0x10155fb8u));
  /* 10141c34 call 0x101425b0 */
  push32(0x10141c39u); f_101425b0();
  /* 10141c39 lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 10141c3d push 0x1014f81c */
  push32((uint32_t)(0x1014f81cu));
  /* 10141c42 push edx */
  push32((uint32_t)(EDX));
  /* 10141c43 call 0x10142e40 */
  push32(0x10141c48u); f_10142e40();
  /* 10141c48 push eax */
  push32((uint32_t)(EAX));
  /* 10141c49 push 0x10155fb0 */
  push32((uint32_t)(0x10155fb0u));
  /* 10141c4e call 0x101425b0 */
  push32(0x10141c53u); f_101425b0();
  /* 10141c53 lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 10141c57 push 0x1014f814 */
  push32((uint32_t)(0x1014f814u));
  /* 10141c5c push eax */
  push32((uint32_t)(EAX));
  /* 10141c5d call 0x10142e40 */
  push32(0x10141c62u); f_10142e40();
  /* 10141c62 push eax */
  push32((uint32_t)(EAX));
  /* 10141c63 push 0x101560f0 */
  push32((uint32_t)(0x101560f0u));
  /* 10141c68 call 0x101425b0 */
  push32(0x10141c6du); f_101425b0();
  /* 10141c6d lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10141c71 push 0x1014f80c */
  push32((uint32_t)(0x1014f80cu));
  /* 10141c76 push ecx */
  push32((uint32_t)(ECX));
  /* 10141c77 call 0x10142e40 */
  push32(0x10141c7cu); f_10142e40();
  /* 10141c7c push eax */
  push32((uint32_t)(EAX));
  /* 10141c7d push 0x101560e8 */
  push32((uint32_t)(0x101560e8u));
  /* 10141c82 call 0x101425b0 */
  push32(0x10141c87u); f_101425b0();
  /* 10141c87 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141c8a lea edx, [esp] */
  EDX = ((uint32_t)(ESP));
  /* 10141c8e push 0x1014f804 */
  push32((uint32_t)(0x1014f804u));
  /* 10141c93 push edx */
  push32((uint32_t)(EDX));
  /* 10141c94 call 0x10142e40 */
  push32(0x10141c99u); f_10142e40();
  /* 10141c99 push eax */
  push32((uint32_t)(EAX));
  /* 10141c9a push 0x101560e0 */
  push32((uint32_t)(0x101560e0u));
  /* 10141c9f call 0x101425b0 */
  push32(0x10141ca4u); f_101425b0();
  /* 10141ca4 lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 10141ca8 push 0x1014f7fc */
  push32((uint32_t)(0x1014f7fcu));
  /* 10141cad push eax */
  push32((uint32_t)(EAX));
  /* 10141cae call 0x10142e40 */
  push32(0x10141cb3u); f_10142e40();
  /* 10141cb3 push eax */
  push32((uint32_t)(EAX));
  /* 10141cb4 push 0x101560d8 */
  push32((uint32_t)(0x101560d8u));
  /* 10141cb9 call 0x101425b0 */
  push32(0x10141cbeu); f_101425b0();
  /* 10141cbe lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 10141cc2 push 0x1014f7f4 */
  push32((uint32_t)(0x1014f7f4u));
  /* 10141cc7 push ecx */
  push32((uint32_t)(ECX));
  /* 10141cc8 call 0x10142e40 */
  push32(0x10141ccdu); f_10142e40();
  /* 10141ccd push eax */
  push32((uint32_t)(EAX));
  /* 10141cce push 0x101560c8 */
  push32((uint32_t)(0x101560c8u));
  /* 10141cd3 call 0x101425b0 */
  push32(0x10141cd8u); f_101425b0();
  /* 10141cd8 push 0x1014f7ec */
  push32((uint32_t)(0x1014f7ecu));
  /* 10141cdd lea edx, [esp + 0x34] */
  EDX = ((uint32_t)(ESP + 0x34));
  /* 10141ce1 push edx */
  push32((uint32_t)(EDX));
  /* 10141ce2 call 0x10142e40 */
  push32(0x10141ce7u); f_10142e40();
  /* 10141ce7 push eax */
  push32((uint32_t)(EAX));
  /* 10141ce8 push 0x10156118 */
  push32((uint32_t)(0x10156118u));
  /* 10141ced call 0x101425b0 */
  push32(0x10141cf2u); f_101425b0();
  /* 10141cf2 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141cf7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141cfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141cfc je 0x10141e31 */
  if (C.zf) goto L_10141e31;
  /* 10141d02 push 0x1014f7d8 */
  push32((uint32_t)(0x1014f7d8u));
  /* 10141d07 push 0x10153678 */
  push32((uint32_t)(0x10153678u));
  /* 10141d0c call eax */
  call_ind((uint32_t)(EAX), 0x10141d0eu);
  /* 10141d0e mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141d13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141d16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141d18 je 0x10141e31 */
  if (C.zf) goto L_10141e31;
  /* 10141d1e push 0x1014f7c4 */
  push32((uint32_t)(0x1014f7c4u));
  /* 10141d23 push 0x10153670 */
  push32((uint32_t)(0x10153670u));
  /* 10141d28 call eax */
  call_ind((uint32_t)(EAX), 0x10141d2au);
  /* 10141d2a mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141d2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141d32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141d34 je 0x10141e31 */
  if (C.zf) goto L_10141e31;
  /* 10141d3a push 0x1014f7b0 */
  push32((uint32_t)(0x1014f7b0u));
  /* 10141d3f push 0x10153668 */
  push32((uint32_t)(0x10153668u));
  /* 10141d44 call eax */
  call_ind((uint32_t)(EAX), 0x10141d46u);
  /* 10141d46 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141d4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141d4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141d50 je 0x10141e31 */
  if (C.zf) goto L_10141e31;
  /* 10141d56 push 0x1014f79c */
  push32((uint32_t)(0x1014f79cu));
  /* 10141d5b push 0x10153660 */
  push32((uint32_t)(0x10153660u));
  /* 10141d60 call eax */
  call_ind((uint32_t)(EAX), 0x10141d62u);
  /* 10141d62 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141d67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141d6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141d6c je 0x10141e31 */
  if (C.zf) goto L_10141e31;
  /* 10141d72 push 0x1014f788 */
  push32((uint32_t)(0x1014f788u));
  /* 10141d77 push 0x10153638 */
  push32((uint32_t)(0x10153638u));
  /* 10141d7c call eax */
  call_ind((uint32_t)(EAX), 0x10141d7eu);
  /* 10141d7e mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141d83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141d86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141d88 je 0x10141e31 */
  if (C.zf) goto L_10141e31;
  /* 10141d8e push 0x1014f774 */
  push32((uint32_t)(0x1014f774u));
  /* 10141d93 push 0x10153630 */
  push32((uint32_t)(0x10153630u));
  /* 10141d98 call eax */
  call_ind((uint32_t)(EAX), 0x10141d9au);
  /* 10141d9a mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141d9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141da2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141da4 je 0x10141e31 */
  if (C.zf) goto L_10141e31;
  /* 10141daa push 0x1014f760 */
  push32((uint32_t)(0x1014f760u));
  /* 10141daf push 0x10153708 */
  push32((uint32_t)(0x10153708u));
  /* 10141db4 call eax */
  call_ind((uint32_t)(EAX), 0x10141db6u);
  /* 10141db6 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141dbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141dbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141dc0 je 0x10141e31 */
  if (C.zf) goto L_10141e31;
  /* 10141dc2 push 0x1014f74c */
  push32((uint32_t)(0x1014f74cu));
  /* 10141dc7 push 0x10153700 */
  push32((uint32_t)(0x10153700u));
  /* 10141dcc call eax */
  call_ind((uint32_t)(EAX), 0x10141dceu);
  /* 10141dce mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141dd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141dd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141dd8 je 0x10141e31 */
  if (C.zf) goto L_10141e31;
  /* 10141dda push 0x1014f738 */
  push32((uint32_t)(0x1014f738u));
  /* 10141ddf push 0x101536f8 */
  push32((uint32_t)(0x101536f8u));
  /* 10141de4 call eax */
  call_ind((uint32_t)(EAX), 0x10141de6u);
  /* 10141de6 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141deb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141dee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141df0 je 0x10141e31 */
  if (C.zf) goto L_10141e31;
  /* 10141df2 push 0x1014f724 */
  push32((uint32_t)(0x1014f724u));
  /* 10141df7 push 0x101536e0 */
  push32((uint32_t)(0x101536e0u));
  /* 10141dfc call eax */
  call_ind((uint32_t)(EAX), 0x10141dfeu);
  /* 10141dfe mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141e03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141e06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141e08 je 0x10141e31 */
  if (C.zf) goto L_10141e31;
  /* 10141e0a push 0x1014f710 */
  push32((uint32_t)(0x1014f710u));
  /* 10141e0f push 0x101536d8 */
  push32((uint32_t)(0x101536d8u));
  /* 10141e14 call eax */
  call_ind((uint32_t)(EAX), 0x10141e16u);
  /* 10141e16 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141e1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141e1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141e20 je 0x10141e31 */
  if (C.zf) goto L_10141e31;
  /* 10141e22 push 0x1014f6fc */
  push32((uint32_t)(0x1014f6fcu));
  /* 10141e27 push 0x101536d0 */
  push32((uint32_t)(0x101536d0u));
  /* 10141e2c call eax */
  call_ind((uint32_t)(EAX), 0x10141e2eu);
  /* 10141e2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10141e31:;
  /* 10141e31 lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 10141e35 push 0x1014f844 */
  push32((uint32_t)(0x1014f844u));
  /* 10141e3a push eax */
  push32((uint32_t)(EAX));
  /* 10141e3b call 0x10142e40 */
  push32(0x10141e40u); f_10142e40();
  /* 10141e40 push eax */
  push32((uint32_t)(EAX));
  /* 10141e41 push 0x101536a0 */
  push32((uint32_t)(0x101536a0u));
  /* 10141e46 call 0x101425b0 */
  push32(0x10141e4bu); f_101425b0();
  /* 10141e4b lea ecx, [esp + 0x40] */
  ECX = ((uint32_t)(ESP + 0x40));
  /* 10141e4f push 0x1014f83c */
  push32((uint32_t)(0x1014f83cu));
  /* 10141e54 push ecx */
  push32((uint32_t)(ECX));
  /* 10141e55 call 0x10142e40 */
  push32(0x10141e5au); f_10142e40();
  /* 10141e5a push eax */
  push32((uint32_t)(EAX));
  /* 10141e5b push 0x101536a8 */
  push32((uint32_t)(0x101536a8u));
  /* 10141e60 call 0x101425b0 */
  push32(0x10141e65u); f_101425b0();
  /* 10141e65 lea edx, [esp + 0x50] */
  EDX = ((uint32_t)(ESP + 0x50));
  /* 10141e69 push 0x1014f834 */
  push32((uint32_t)(0x1014f834u));
  /* 10141e6e push edx */
  push32((uint32_t)(EDX));
  /* 10141e6f call 0x10142e40 */
  push32(0x10141e74u); f_10142e40();
  /* 10141e74 push eax */
  push32((uint32_t)(EAX));
  /* 10141e75 push 0x101536b0 */
  push32((uint32_t)(0x101536b0u));
  /* 10141e7a call 0x101425b0 */
  push32(0x10141e7fu); f_101425b0();
  /* 10141e7f lea eax, [esp + 0x60] */
  EAX = ((uint32_t)(ESP + 0x60));
  /* 10141e83 push 0x1014f82c */
  push32((uint32_t)(0x1014f82cu));
  /* 10141e88 push eax */
  push32((uint32_t)(EAX));
  /* 10141e89 call 0x10142e40 */
  push32(0x10141e8eu); f_10142e40();
  /* 10141e8e push eax */
  push32((uint32_t)(EAX));
  /* 10141e8f push 0x101536b8 */
  push32((uint32_t)(0x101536b8u));
  /* 10141e94 call 0x101425b0 */
  push32(0x10141e99u); f_101425b0();
  /* 10141e99 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141e9c lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 10141ea0 push 0x1014f824 */
  push32((uint32_t)(0x1014f824u));
  /* 10141ea5 push ecx */
  push32((uint32_t)(ECX));
  /* 10141ea6 call 0x10142e40 */
  push32(0x10141eabu); f_10142e40();
  /* 10141eab push eax */
  push32((uint32_t)(EAX));
  /* 10141eac push 0x10153680 */
  push32((uint32_t)(0x10153680u));
  /* 10141eb1 call 0x101425b0 */
  push32(0x10141eb6u); f_101425b0();
  /* 10141eb6 lea edx, [esp + 0x40] */
  EDX = ((uint32_t)(ESP + 0x40));
  /* 10141eba push 0x1014f81c */
  push32((uint32_t)(0x1014f81cu));
  /* 10141ebf push edx */
  push32((uint32_t)(EDX));
  /* 10141ec0 call 0x10142e40 */
  push32(0x10141ec5u); f_10142e40();
  /* 10141ec5 push eax */
  push32((uint32_t)(EAX));
  /* 10141ec6 push 0x10153690 */
  push32((uint32_t)(0x10153690u));
  /* 10141ecb call 0x101425b0 */
  push32(0x10141ed0u); f_101425b0();
  /* 10141ed0 lea eax, [esp + 0x50] */
  EAX = ((uint32_t)(ESP + 0x50));
  /* 10141ed4 push 0x1014f814 */
  push32((uint32_t)(0x1014f814u));
  /* 10141ed9 push eax */
  push32((uint32_t)(EAX));
  /* 10141eda call 0x10142e40 */
  push32(0x10141edfu); f_10142e40();
  /* 10141edf push eax */
  push32((uint32_t)(EAX));
  /* 10141ee0 push 0x10153748 */
  push32((uint32_t)(0x10153748u));
  /* 10141ee5 call 0x101425b0 */
  push32(0x10141eeau); f_101425b0();
  /* 10141eea lea ecx, [esp + 0x60] */
  ECX = ((uint32_t)(ESP + 0x60));
  /* 10141eee push 0x1014f80c */
  push32((uint32_t)(0x1014f80cu));
  /* 10141ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 10141ef4 call 0x10142e40 */
  push32(0x10141ef9u); f_10142e40();
  /* 10141ef9 push eax */
  push32((uint32_t)(EAX));
  /* 10141efa push 0x10153750 */
  push32((uint32_t)(0x10153750u));
  /* 10141eff call 0x101425b0 */
  push32(0x10141f04u); f_101425b0();
  /* 10141f04 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141f07 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 10141f0b push 0x1014f804 */
  push32((uint32_t)(0x1014f804u));
  /* 10141f10 push edx */
  push32((uint32_t)(EDX));
  /* 10141f11 call 0x10142e40 */
  push32(0x10141f16u); f_10142e40();
  /* 10141f16 push eax */
  push32((uint32_t)(EAX));
  /* 10141f17 push 0x10153758 */
  push32((uint32_t)(0x10153758u));
  /* 10141f1c call 0x101425b0 */
  push32(0x10141f21u); f_101425b0();
  /* 10141f21 lea eax, [esp + 0x40] */
  EAX = ((uint32_t)(ESP + 0x40));
  /* 10141f25 push 0x1014f7fc */
  push32((uint32_t)(0x1014f7fcu));
  /* 10141f2a push eax */
  push32((uint32_t)(EAX));
  /* 10141f2b call 0x10142e40 */
  push32(0x10141f30u); f_10142e40();
  /* 10141f30 push eax */
  push32((uint32_t)(EAX));
  /* 10141f31 push 0x10153730 */
  push32((uint32_t)(0x10153730u));
  /* 10141f36 call 0x101425b0 */
  push32(0x10141f3bu); f_101425b0();
  /* 10141f3b lea ecx, [esp + 0x50] */
  ECX = ((uint32_t)(ESP + 0x50));
  /* 10141f3f push 0x1014f7f4 */
  push32((uint32_t)(0x1014f7f4u));
  /* 10141f44 push ecx */
  push32((uint32_t)(ECX));
  /* 10141f45 call 0x10142e40 */
  push32(0x10141f4au); f_10142e40();
  /* 10141f4a push eax */
  push32((uint32_t)(EAX));
  /* 10141f4b push 0x10153738 */
  push32((uint32_t)(0x10153738u));
  /* 10141f50 call 0x101425b0 */
  push32(0x10141f55u); f_101425b0();
  /* 10141f55 push 0x1014f7ec */
  push32((uint32_t)(0x1014f7ecu));
  /* 10141f5a lea edx, [esp + 0x64] */
  EDX = ((uint32_t)(ESP + 0x64));
  /* 10141f5e push edx */
  push32((uint32_t)(EDX));
  /* 10141f5f call 0x10142e40 */
  push32(0x10141f64u); f_10142e40();
  /* 10141f64 push eax */
  push32((uint32_t)(EAX));
  /* 10141f65 push 0x10153740 */
  push32((uint32_t)(0x10153740u));
  /* 10141f6a call 0x101425b0 */
  push32(0x10141f6fu); f_101425b0();
  /* 10141f6f mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141f74 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141f77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141f79 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 10141f7f push 0x1014f6ec */
  push32((uint32_t)(0x1014f6ecu));
  /* 10141f84 push 0x10156198 */
  push32((uint32_t)(0x10156198u));
  /* 10141f89 call eax */
  call_ind((uint32_t)(EAX), 0x10141f8bu);
  /* 10141f8b mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141f90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141f93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141f95 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 10141f9b push 0x1014f6d8 */
  push32((uint32_t)(0x1014f6d8u));
  /* 10141fa0 push 0x10156190 */
  push32((uint32_t)(0x10156190u));
  /* 10141fa5 call eax */
  call_ind((uint32_t)(EAX), 0x10141fa7u);
  /* 10141fa7 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141fac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141faf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141fb1 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 10141fb7 push 0x1014f6c4 */
  push32((uint32_t)(0x1014f6c4u));
  /* 10141fbc push 0x10156160 */
  push32((uint32_t)(0x10156160u));
  /* 10141fc1 call eax */
  call_ind((uint32_t)(EAX), 0x10141fc3u);
  /* 10141fc3 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141fc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141fcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141fcd je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 10141fd3 push 0x1014f6b0 */
  push32((uint32_t)(0x1014f6b0u));
  /* 10141fd8 push 0x10156158 */
  push32((uint32_t)(0x10156158u));
  /* 10141fdd call eax */
  call_ind((uint32_t)(EAX), 0x10141fdfu);
  /* 10141fdf mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10141fe4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10141fe7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10141fe9 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 10141fef push 0x1014f69c */
  push32((uint32_t)(0x1014f69cu));
  /* 10141ff4 push 0x10156168 */
  push32((uint32_t)(0x10156168u));
  /* 10141ff9 call eax */
  call_ind((uint32_t)(EAX), 0x10141ffbu);
  /* 10141ffb mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10142000 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142003 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10142005 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 1014200b push 0x1014f688 */
  push32((uint32_t)(0x1014f688u));
  /* 10142010 push 0x10156058 */
  push32((uint32_t)(0x10156058u));
  /* 10142015 call eax */
  call_ind((uint32_t)(EAX), 0x10142017u);
  /* 10142017 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 1014201c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014201f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10142021 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 10142027 push 0x1014f674 */
  push32((uint32_t)(0x1014f674u));
  /* 1014202c push 0x10156060 */
  push32((uint32_t)(0x10156060u));
  /* 10142031 call eax */
  call_ind((uint32_t)(EAX), 0x10142033u);
  /* 10142033 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10142038 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014203b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014203d je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 10142043 push 0x1014f660 */
  push32((uint32_t)(0x1014f660u));
  /* 10142048 push 0x10156068 */
  push32((uint32_t)(0x10156068u));
  /* 1014204d call eax */
  call_ind((uint32_t)(EAX), 0x1014204fu);
  /* 1014204f mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10142054 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10142059 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 1014205f push 0x1014f64c */
  push32((uint32_t)(0x1014f64cu));
  /* 10142064 push 0x10156070 */
  push32((uint32_t)(0x10156070u));
  /* 10142069 call eax */
  call_ind((uint32_t)(EAX), 0x1014206bu);
  /* 1014206b mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10142070 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142073 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10142075 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 1014207b push 0x1014f644 */
  push32((uint32_t)(0x1014f644u));
  /* 10142080 push 0x10156178 */
  push32((uint32_t)(0x10156178u));
  /* 10142085 call eax */
  call_ind((uint32_t)(EAX), 0x10142087u);
  /* 10142087 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 1014208c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014208f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10142091 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 10142097 push 0x1014f63c */
  push32((uint32_t)(0x1014f63cu));
  /* 1014209c push 0x10155fe0 */
  push32((uint32_t)(0x10155fe0u));
  /* 101420a1 call eax */
  call_ind((uint32_t)(EAX), 0x101420a3u);
  /* 101420a3 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101420a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101420ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101420ad je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 101420b3 push 0x1014f634 */
  push32((uint32_t)(0x1014f634u));
  /* 101420b8 push 0x10153918 */
  push32((uint32_t)(0x10153918u));
  /* 101420bd call eax */
  call_ind((uint32_t)(EAX), 0x101420bfu);
  /* 101420bf mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101420c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101420c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101420c9 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 101420cf push 0x1014f62c */
  push32((uint32_t)(0x1014f62cu));
  /* 101420d4 push 0x10156038 */
  push32((uint32_t)(0x10156038u));
  /* 101420d9 call eax */
  call_ind((uint32_t)(EAX), 0x101420dbu);
  /* 101420db mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101420e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101420e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101420e5 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 101420eb push 0x1014f624 */
  push32((uint32_t)(0x1014f624u));
  /* 101420f0 push 0x10155ff0 */
  push32((uint32_t)(0x10155ff0u));
  /* 101420f5 call eax */
  call_ind((uint32_t)(EAX), 0x101420f7u);
  /* 101420f7 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101420fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101420ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10142101 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 10142107 push 0x1014f61c */
  push32((uint32_t)(0x1014f61cu));
  /* 1014210c push 0x10155ff8 */
  push32((uint32_t)(0x10155ff8u));
  /* 10142111 call eax */
  call_ind((uint32_t)(EAX), 0x10142113u);
  /* 10142113 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10142118 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014211b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014211d je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 10142123 push 0x1014f614 */
  push32((uint32_t)(0x1014f614u));
  /* 10142128 push 0x10156000 */
  push32((uint32_t)(0x10156000u));
  /* 1014212d call eax */
  call_ind((uint32_t)(EAX), 0x1014212fu);
  /* 1014212f mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10142134 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142137 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10142139 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 1014213f push 0x1014f60c */
  push32((uint32_t)(0x1014f60cu));
  /* 10142144 push 0x10156230 */
  push32((uint32_t)(0x10156230u));
  /* 10142149 call eax */
  call_ind((uint32_t)(EAX), 0x1014214bu);
  /* 1014214b mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10142150 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142153 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10142155 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 1014215b push 0x1014f604 */
  push32((uint32_t)(0x1014f604u));
  /* 10142160 push 0x101560d0 */
  push32((uint32_t)(0x101560d0u));
  /* 10142165 call eax */
  call_ind((uint32_t)(EAX), 0x10142167u);
  /* 10142167 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 1014216c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014216f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10142171 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 10142177 push 0x1014f5fc */
  push32((uint32_t)(0x1014f5fcu));
  /* 1014217c push 0x10156110 */
  push32((uint32_t)(0x10156110u));
  /* 10142181 call eax */
  call_ind((uint32_t)(EAX), 0x10142183u);
  /* 10142183 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10142188 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014218b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014218d je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 10142193 push 0x1014f5f4 */
  push32((uint32_t)(0x1014f5f4u));
  /* 10142198 push 0x101561c8 */
  push32((uint32_t)(0x101561c8u));
  /* 1014219d call eax */
  call_ind((uint32_t)(EAX), 0x1014219fu);
  /* 1014219f mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101421a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101421a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101421a9 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 101421af push 0x1014f5ec */
  push32((uint32_t)(0x1014f5ecu));
  /* 101421b4 push 0x101561d0 */
  push32((uint32_t)(0x101561d0u));
  /* 101421b9 call eax */
  call_ind((uint32_t)(EAX), 0x101421bbu);
  /* 101421bb mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101421c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101421c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101421c5 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 101421cb push 0x1014f5e4 */
  push32((uint32_t)(0x1014f5e4u));
  /* 101421d0 push 0x10156128 */
  push32((uint32_t)(0x10156128u));
  /* 101421d5 call eax */
  call_ind((uint32_t)(EAX), 0x101421d7u);
  /* 101421d7 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101421dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101421df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101421e1 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 101421e7 push 0x1014f5dc */
  push32((uint32_t)(0x1014f5dcu));
  /* 101421ec push 0x10156138 */
  push32((uint32_t)(0x10156138u));
  /* 101421f1 call eax */
  call_ind((uint32_t)(EAX), 0x101421f3u);
  /* 101421f3 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101421f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101421fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101421fd je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 10142203 push 0x1014f5d4 */
  push32((uint32_t)(0x1014f5d4u));
  /* 10142208 push 0x10156140 */
  push32((uint32_t)(0x10156140u));
  /* 1014220d call eax */
  call_ind((uint32_t)(EAX), 0x1014220fu);
  /* 1014220f mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10142214 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142217 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10142219 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 1014221f push 0x1014f5cc */
  push32((uint32_t)(0x1014f5ccu));
  /* 10142224 push 0x10156130 */
  push32((uint32_t)(0x10156130u));
  /* 10142229 call eax */
  call_ind((uint32_t)(EAX), 0x1014222bu);
  /* 1014222b mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10142230 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142233 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10142235 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 1014223b push 0x1014f5c4 */
  push32((uint32_t)(0x1014f5c4u));
  /* 10142240 push 0x10153910 */
  push32((uint32_t)(0x10153910u));
  /* 10142245 call eax */
  call_ind((uint32_t)(EAX), 0x10142247u);
  /* 10142247 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 1014224c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014224f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10142251 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 10142257 push 0x1014f5bc */
  push32((uint32_t)(0x1014f5bcu));
  /* 1014225c push 0x101538a0 */
  push32((uint32_t)(0x101538a0u));
  /* 10142261 call eax */
  call_ind((uint32_t)(EAX), 0x10142263u);
  /* 10142263 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10142268 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014226b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014226d je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 10142273 push 0x1014f5b4 */
  push32((uint32_t)(0x1014f5b4u));
  /* 10142278 push 0x10153760 */
  push32((uint32_t)(0x10153760u));
  /* 1014227d call eax */
  call_ind((uint32_t)(EAX), 0x1014227fu);
  /* 1014227f mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10142284 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142287 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10142289 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 1014228f push 0x1014f5ac */
  push32((uint32_t)(0x1014f5acu));
  /* 10142294 push 0x101560b0 */
  push32((uint32_t)(0x101560b0u));
  /* 10142299 call eax */
  call_ind((uint32_t)(EAX), 0x1014229bu);
  /* 1014229b mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101422a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101422a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101422a5 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 101422ab push 0x1014f5a4 */
  push32((uint32_t)(0x1014f5a4u));
  /* 101422b0 push 0x10153900 */
  push32((uint32_t)(0x10153900u));
  /* 101422b5 call eax */
  call_ind((uint32_t)(EAX), 0x101422b7u);
  /* 101422b7 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101422bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101422bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101422c1 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 101422c7 push 0x1014f59c */
  push32((uint32_t)(0x1014f59cu));
  /* 101422cc push 0x101561b8 */
  push32((uint32_t)(0x101561b8u));
  /* 101422d1 call eax */
  call_ind((uint32_t)(EAX), 0x101422d3u);
  /* 101422d3 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101422d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101422db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101422dd je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 101422e3 push 0x1014f594 */
  push32((uint32_t)(0x1014f594u));
  /* 101422e8 push 0x101561c0 */
  push32((uint32_t)(0x101561c0u));
  /* 101422ed call eax */
  call_ind((uint32_t)(EAX), 0x101422efu);
  /* 101422ef mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101422f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101422f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101422f9 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 101422ff push 0x1014f58c */
  push32((uint32_t)(0x1014f58cu));
  /* 10142304 push 0x10153830 */
  push32((uint32_t)(0x10153830u));
  /* 10142309 call eax */
  call_ind((uint32_t)(EAX), 0x1014230bu);
  /* 1014230b mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10142310 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142313 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10142315 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 1014231b push 0x1014f584 */
  push32((uint32_t)(0x1014f584u));
  /* 10142320 push 0x10153840 */
  push32((uint32_t)(0x10153840u));
  /* 10142325 call eax */
  call_ind((uint32_t)(EAX), 0x10142327u);
  /* 10142327 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 1014232c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014232f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10142331 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 10142337 push 0x1014f57c */
  push32((uint32_t)(0x1014f57cu));
  /* 1014233c push 0x10153728 */
  push32((uint32_t)(0x10153728u));
  /* 10142341 call eax */
  call_ind((uint32_t)(EAX), 0x10142343u);
  /* 10142343 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10142348 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014234b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014234d je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 10142353 push 0x1014f574 */
  push32((uint32_t)(0x1014f574u));
  /* 10142358 push 0x101535e8 */
  push32((uint32_t)(0x101535e8u));
  /* 1014235d call eax */
  call_ind((uint32_t)(EAX), 0x1014235fu);
  /* 1014235f mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10142364 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10142369 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 1014236f push 0x1014f56c */
  push32((uint32_t)(0x1014f56cu));
  /* 10142374 push 0x101536c8 */
  push32((uint32_t)(0x101536c8u));
  /* 10142379 call eax */
  call_ind((uint32_t)(EAX), 0x1014237bu);
  /* 1014237b mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10142380 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142383 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10142385 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 1014238b push 0x1014f564 */
  push32((uint32_t)(0x1014f564u));
  /* 10142390 push 0x101535f0 */
  push32((uint32_t)(0x101535f0u));
  /* 10142395 call eax */
  call_ind((uint32_t)(EAX), 0x10142397u);
  /* 10142397 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 1014239c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014239f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101423a1 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 101423a7 push 0x1014f550 */
  push32((uint32_t)(0x1014f550u));
  /* 101423ac push 0x101562a8 */
  push32((uint32_t)(0x101562a8u));
  /* 101423b1 call eax */
  call_ind((uint32_t)(EAX), 0x101423b3u);
  /* 101423b3 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101423b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101423bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101423bd je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 101423bf push 0x1014f53c */
  push32((uint32_t)(0x1014f53cu));
  /* 101423c4 push 0x10156290 */
  push32((uint32_t)(0x10156290u));
  /* 101423c9 call eax */
  call_ind((uint32_t)(EAX), 0x101423cbu);
  /* 101423cb mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101423d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101423d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101423d5 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 101423d7 push 0x1014f528 */
  push32((uint32_t)(0x1014f528u));
  /* 101423dc push 0x101562a0 */
  push32((uint32_t)(0x101562a0u));
  /* 101423e1 call eax */
  call_ind((uint32_t)(EAX), 0x101423e3u);
  /* 101423e3 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 101423e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101423eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101423ed je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 101423ef push 0x1014f514 */
  push32((uint32_t)(0x1014f514u));
  /* 101423f4 push 0x10156280 */
  push32((uint32_t)(0x10156280u));
  /* 101423f9 call eax */
  call_ind((uint32_t)(EAX), 0x101423fbu);
  /* 101423fb mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10142400 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142403 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10142405 je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 10142407 push 0x1014f500 */
  push32((uint32_t)(0x1014f500u));
  /* 1014240c push 0x10156288 */
  push32((uint32_t)(0x10156288u));
  /* 10142411 call eax */
  call_ind((uint32_t)(EAX), 0x10142413u);
  /* 10142413 mov eax, dword ptr [0x101563bc] */
  EAX = (r32((uint32_t)(0x101563bc)));
  /* 10142418 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014241b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014241d je 0x1014242e */
  if (C.zf) goto L_1014242e;
  /* 1014241f push 0x1014f4ec */
  push32((uint32_t)(0x1014f4ecu));
  /* 10142424 push 0x10156278 */
  push32((uint32_t)(0x10156278u));
  /* 10142429 call eax */
  call_ind((uint32_t)(EAX), 0x1014242bu);
  /* 1014242b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014242e:;
  /* 1014242e push 4 */
  push32((uint32_t)(0x4u));
  /* 10142430 push 4 */
  push32((uint32_t)(0x4u));
  /* 10142432 push 9 */
  push32((uint32_t)(0x9u));
  /* 10142434 call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x1014243au);
  /* 1014243a push 6 */
  push32((uint32_t)(0x6u));
  /* 1014243c call dword ptr [0x101564e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564e0))), 0x10142442u);
  /* 10142442 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10142444 push 0x1014f4d8 */
  push32((uint32_t)(0x1014f4d8u));
  /* 10142449 push 0 */
  push32((uint32_t)(0x0u));
  /* 1014244b call dword ptr [0x101564e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564e4))), 0x10142451u);
  /* 10142451 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10142453 push 0x1014f4c4 */
  push32((uint32_t)(0x1014f4c4u));
  /* 10142458 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014245a call dword ptr [0x101564e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564e4))), 0x10142460u);
  /* 10142460 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10142462 push 0x1014f4b0 */
  push32((uint32_t)(0x1014f4b0u));
  /* 10142467 push 2 */
  push32((uint32_t)(0x2u));
  /* 10142469 call dword ptr [0x101564e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564e4))), 0x1014246fu);
  /* 1014246f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10142471 push 0x1014f49c */
  push32((uint32_t)(0x1014f49cu));
  /* 10142476 push 3 */
  push32((uint32_t)(0x3u));
  /* 10142478 call dword ptr [0x101564e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564e4))), 0x1014247eu);
  /* 1014247e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142481 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10142483 push 0x1014f488 */
  push32((uint32_t)(0x1014f488u));
  /* 10142488 push 4 */
  push32((uint32_t)(0x4u));
  /* 1014248a call dword ptr [0x101564e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564e4))), 0x10142490u);
  /* 10142490 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10142492 push 0x1014f474 */
  push32((uint32_t)(0x1014f474u));
  /* 10142497 push 5 */
  push32((uint32_t)(0x5u));
  /* 10142499 call dword ptr [0x101564e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564e4))), 0x1014249fu);
  /* 1014249f push 0x1014fb50 */
  push32((uint32_t)(0x1014fb50u));
  /* 101424a4 call dword ptr [0x10156520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156520))), 0x101424aau);
  /* 101424aa push 0x1014f468 */
  push32((uint32_t)(0x1014f468u));
  /* 101424af call dword ptr [0x1015651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015651c))), 0x101424b5u);
  /* 101424b5 push 0x1014f454 */
  push32((uint32_t)(0x1014f454u));
  /* 101424ba call dword ptr [0x10156524] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156524))), 0x101424c0u);
  /* 101424c0 push 0x1014f448 */
  push32((uint32_t)(0x1014f448u));
  /* 101424c5 call dword ptr [0x1015652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015652c))), 0x101424cbu);
  /* 101424cb push 0x122 */
  push32((uint32_t)(0x122u));
  /* 101424d0 call dword ptr [0x101564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564e8))), 0x101424d6u);
  /* 101424d6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101424d8 call dword ptr [0x101564ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564ec))), 0x101424deu);
  /* 101424de push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101424e0 call dword ptr [0x101564f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564f0))), 0x101424e6u);
  /* 101424e6 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 101424eb call dword ptr [0x101564f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564f4))), 0x101424f1u);
  /* 101424f1 push 5 */
  push32((uint32_t)(0x5u));
  /* 101424f3 call dword ptr [0x101564f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564f8))), 0x101424f9u);
  /* 101424f9 add esp, 0x9c */
  { uint32_t _a=(ESP),_b=(0x9cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101424ff ret  */
  ESPCHK(0x10141030u, _esp0);
  ESP += 4; return;
}

/* FUN_10002500 @ 0x10142500 (20 bytes, 7 insns) */
void f_10142500(void) {
  FTRACE(0x10142500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142500 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10142504 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10142508 push eax */
  push32((uint32_t)(EAX));
  /* 10142509 push ecx */
  push32((uint32_t)(ECX));
  /* 1014250a call dword ptr [0x101564d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d0))), 0x10142510u);
  /* 10142510 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142513 ret  */
  ESPCHK(0x10142500u, _esp0);
  ESP += 4; return;
}

/* FUN_10002520 @ 0x10142520 (25 bytes, 9 insns) */
void f_10142520(void) {
  FTRACE(0x10142520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142520 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10142524 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10142528 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1014252c push eax */
  push32((uint32_t)(EAX));
  /* 1014252d push ecx */
  push32((uint32_t)(ECX));
  /* 1014252e push edx */
  push32((uint32_t)(EDX));
  /* 1014252f call dword ptr [0x101564dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564dc))), 0x10142535u);
  /* 10142535 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142538 ret  */
  ESPCHK(0x10142520u, _esp0);
  ESP += 4; return;
}

/* FUN_10002540 @ 0x10142540 (6 bytes, 1 insns) */
void f_10142540(void) {
  FTRACE(0x10142540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142540 jmp dword ptr [0x10156508] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10156508)))); return;
}

/* FUN_10002550 @ 0x10142550 (20 bytes, 7 insns) */
void f_10142550(void) {
  FTRACE(0x10142550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142550 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10142554 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10142558 push eax */
  push32((uint32_t)(EAX));
  /* 10142559 push ecx */
  push32((uint32_t)(ECX));
  /* 1014255a call dword ptr [0x10156528] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156528))), 0x10142560u);
  /* 10142560 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142563 ret  */
  ESPCHK(0x10142550u, _esp0);
  ESP += 4; return;
}

/* FUN_10002570 @ 0x10142570 (6 bytes, 1 insns) */
void f_10142570(void) {
  FTRACE(0x10142570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142570 jmp dword ptr [0x10156534] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10156534)))); return;
}

/* FUN_10002580 @ 0x10142580 (6 bytes, 1 insns) */
void f_10142580(void) {
  FTRACE(0x10142580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142580 jmp dword ptr [0x10156538] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10156538)))); return;
}

/* FUN_10002590 @ 0x10142590 (6 bytes, 1 insns) */
void f_10142590(void) {
  FTRACE(0x10142590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142590 jmp dword ptr [0x10156540] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10156540)))); return;
}

/* FUN_100025a0 @ 0x101425a0 (13 bytes, 5 insns) */
void f_101425a0(void) {
  FTRACE(0x101425a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101425a0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101425a4 push eax */
  push32((uint32_t)(EAX));
  /* 101425a5 call dword ptr [0x10156544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156544))), 0x101425abu);
  /* 101425ab pop ecx */
  ECX = (pop32());
  /* 101425ac ret  */
  ESPCHK(0x101425a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100025b0 @ 0x101425b0 (20 bytes, 7 insns) */
void f_101425b0(void) {
  FTRACE(0x101425b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101425b0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101425b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101425b8 push eax */
  push32((uint32_t)(EAX));
  /* 101425b9 push ecx */
  push32((uint32_t)(ECX));
  /* 101425ba call dword ptr [0x10156548] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156548))), 0x101425c0u);
  /* 101425c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101425c3 ret  */
  ESPCHK(0x101425b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100025d0 @ 0x101425d0 (6 bytes, 1 insns) */
void f_101425d0(void) {
  FTRACE(0x101425d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101425d0 jmp dword ptr [0x1015654c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1015654c)))); return;
}

/* FUN_100025e0 @ 0x101425e0 (20 bytes, 7 insns) */
void f_101425e0(void) {
  FTRACE(0x101425e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101425e0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101425e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101425e8 push eax */
  push32((uint32_t)(EAX));
  /* 101425e9 push ecx */
  push32((uint32_t)(ECX));
  /* 101425ea call dword ptr [0x10156228] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156228))), 0x101425f0u);
  /* 101425f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101425f3 ret  */
  ESPCHK(0x101425e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002600 @ 0x10142600 (15 bytes, 5 insns) */
void f_10142600(void) {
  FTRACE(0x10142600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142600 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10142604 push eax */
  push32((uint32_t)(EAX));
  /* 10142605 call dword ptr [0x10156270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156270))), 0x1014260bu);
  /* 1014260b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014260e ret  */
  ESPCHK(0x10142600u, _esp0);
  ESP += 4; return;
}

/* FUN_10002610 @ 0x10142610 (20 bytes, 7 insns) */
void f_10142610(void) {
  FTRACE(0x10142610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142610 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10142614 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10142618 push eax */
  push32((uint32_t)(EAX));
  /* 10142619 push ecx */
  push32((uint32_t)(ECX));
  /* 1014261a call dword ptr [0x101536f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101536f0))), 0x10142620u);
  /* 10142620 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142623 ret  */
  ESPCHK(0x10142610u, _esp0);
  ESP += 4; return;
}

/* FUN_10002630 @ 0x10142630 (13 bytes, 5 insns) */
void f_10142630(void) {
  FTRACE(0x10142630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142630 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10142634 push eax */
  push32((uint32_t)(EAX));
  /* 10142635 call dword ptr [0x10153890] */
  call_ind((uint32_t)(r32((uint32_t)(0x10153890))), 0x1014263bu);
  /* 1014263b pop ecx */
  ECX = (pop32());
  /* 1014263c ret  */
  ESPCHK(0x10142630u, _esp0);
  ESP += 4; return;
}

/* FUN_10002640 @ 0x10142640 (15 bytes, 5 insns) */
void f_10142640(void) {
  FTRACE(0x10142640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142640 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10142644 push eax */
  push32((uint32_t)(EAX));
  /* 10142645 call dword ptr [0x10156550] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156550))), 0x1014264bu);
  /* 1014264b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014264e ret  */
  ESPCHK(0x10142640u, _esp0);
  ESP += 4; return;
}

/* FUN_10002650 @ 0x10142650 (25 bytes, 9 insns) */
void f_10142650(void) {
  FTRACE(0x10142650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142650 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10142654 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10142658 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1014265c push eax */
  push32((uint32_t)(EAX));
  /* 1014265d push ecx */
  push32((uint32_t)(ECX));
  /* 1014265e push edx */
  push32((uint32_t)(EDX));
  /* 1014265f call dword ptr [0x10155f80] */
  call_ind((uint32_t)(r32((uint32_t)(0x10155f80))), 0x10142665u);
  /* 10142665 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142668 ret  */
  ESPCHK(0x10142650u, _esp0);
  ESP += 4; return;
}

/* FUN_10002670 @ 0x10142670 (13 bytes, 5 insns) */
void f_10142670(void) {
  FTRACE(0x10142670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142670 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10142674 push eax */
  push32((uint32_t)(EAX));
  /* 10142675 call dword ptr [0x101538f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101538f0))), 0x1014267bu);
  /* 1014267b pop ecx */
  ECX = (pop32());
  /* 1014267c ret  */
  ESPCHK(0x10142670u, _esp0);
  ESP += 4; return;
}

/* FUN_10002680 @ 0x10142680 (6 bytes, 1 insns) */
void f_10142680(void) {
  FTRACE(0x10142680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142680 jmp dword ptr [0x10156208] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10156208)))); return;
}

/* FUN_10002690 @ 0x10142690 (6 bytes, 1 insns) */
void f_10142690(void) {
  FTRACE(0x10142690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142690 jmp dword ptr [0x10153908] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10153908)))); return;
}

/* FUN_100026a0 @ 0x101426a0 (82 bytes, 28 insns) */
void f_101426a0(void) {
  FTRACE(0x101426a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101426a0 mov eax, dword ptr [0x101563a0] */
  EAX = (r32((uint32_t)(0x101563a0)));
  /* 101426a5 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101426ab push esi */
  push32((uint32_t)(ESI));
  /* 101426ac push edi */
  push32((uint32_t)(EDI));
  /* 101426ad mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 101426b4 push edi */
  push32((uint32_t)(EDI));
  /* 101426b5 push eax */
  push32((uint32_t)(EAX));
  /* 101426b6 call dword ptr [0x1014e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e088))), 0x101426bcu);
  /* 101426bc mov esi, eax */
  ESI = (EAX);
  /* 101426be test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101426c0 jne 0x101426e7 */
  if (!C.zf) goto L_101426e7;
  /* 101426c2 push edi */
  push32((uint32_t)(EDI));
  /* 101426c3 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 101426c7 push 0x1014fed0 */
  push32((uint32_t)(0x1014fed0u));
  /* 101426cc push ecx */
  push32((uint32_t)(ECX));
  /* 101426cd call 0x10146d80 */
  push32(0x101426d2u); f_10146d80();
  /* 101426d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101426d5 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 101426d9 push esi */
  push32((uint32_t)(ESI));
  /* 101426da push 0x1014fec0 */
  push32((uint32_t)(0x1014fec0u));
  /* 101426df push edx */
  push32((uint32_t)(EDX));
  /* 101426e0 push esi */
  push32((uint32_t)(ESI));
  /* 101426e1 call dword ptr [0x1014e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0dc))), 0x101426e7u);
L_101426e7:;
  /* 101426e7 mov eax, esi */
  EAX = (ESI);
  /* 101426e9 pop edi */
  EDI = (pop32());
  /* 101426ea pop esi */
  ESI = (pop32());
  /* 101426eb add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101426f1 ret  */
  ESPCHK(0x101426a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x10142700 (1844 bytes, 376 insns) */
void f_10142700(void) {
  FTRACE(0x10142700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142700 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10142704 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10142705 jne 0x10142e2c */
  if (!C.zf) goto L_10142e2c;
  /* 1014270b push 0x10150624 */
  push32((uint32_t)(0x10150624u));
  /* 10142710 call dword ptr [0x1014e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e004))), 0x10142716u);
  /* 10142716 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10142718 mov dword ptr [0x101563a0], eax */
  w32((uint32_t)(0x101563a0), (EAX));
  /* 1014271d jne 0x10142739 */
  if (!C.zf) goto L_10142739;
  /* 1014271f push eax */
  push32((uint32_t)(EAX));
  /* 10142720 push 0x1015061c */
  push32((uint32_t)(0x1015061cu));
  /* 10142725 push 0x10150604 */
  push32((uint32_t)(0x10150604u));
  /* 1014272a push eax */
  push32((uint32_t)(EAX));
  /* 1014272b call dword ptr [0x1014e0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e0dc))), 0x10142731u);
  /* 10142731 mov eax, 1 */
  EAX = (0x1u);
  /* 10142736 ret 0xc */
  ESPCHK(0x10142700u, _esp0);
  ESP += 16; return;
L_10142739:;
  /* 10142739 push 0x101505f4 */
  push32((uint32_t)(0x101505f4u));
  /* 1014273e call 0x101426a0 */
  push32(0x10142743u); f_101426a0();
  /* 10142743 push 0x101505e4 */
  push32((uint32_t)(0x101505e4u));
  /* 10142748 mov dword ptr [0x101563a4], eax */
  w32((uint32_t)(0x101563a4), (EAX));
  /* 1014274d call 0x101426a0 */
  push32(0x10142752u); f_101426a0();
  /* 10142752 push 0x101505d4 */
  push32((uint32_t)(0x101505d4u));
  /* 10142757 mov dword ptr [0x101563a8], eax */
  w32((uint32_t)(0x101563a8), (EAX));
  /* 1014275c call 0x101426a0 */
  push32(0x10142761u); f_101426a0();
  /* 10142761 push 0x101505c8 */
  push32((uint32_t)(0x101505c8u));
  /* 10142766 mov dword ptr [0x101563ac], eax */
  w32((uint32_t)(0x101563ac), (EAX));
  /* 1014276b call 0x101426a0 */
  push32(0x10142770u); f_101426a0();
  /* 10142770 push 0x101505b8 */
  push32((uint32_t)(0x101505b8u));
  /* 10142775 mov dword ptr [0x101563b0], eax */
  w32((uint32_t)(0x101563b0), (EAX));
  /* 1014277a call 0x101426a0 */
  push32(0x1014277fu); f_101426a0();
  /* 1014277f push 0x101505a4 */
  push32((uint32_t)(0x101505a4u));
  /* 10142784 mov dword ptr [0x101563b4], eax */
  w32((uint32_t)(0x101563b4), (EAX));
  /* 10142789 call 0x101426a0 */
  push32(0x1014278eu); f_101426a0();
  /* 1014278e push 0x10150594 */
  push32((uint32_t)(0x10150594u));
  /* 10142793 mov dword ptr [0x101563b8], eax */
  w32((uint32_t)(0x101563b8), (EAX));
  /* 10142798 call 0x101426a0 */
  push32(0x1014279du); f_101426a0();
  /* 1014279d push 0x10150584 */
  push32((uint32_t)(0x10150584u));
  /* 101427a2 mov dword ptr [0x101563bc], eax */
  w32((uint32_t)(0x101563bc), (EAX));
  /* 101427a7 call 0x101426a0 */
  push32(0x101427acu); f_101426a0();
  /* 101427ac push 0x10150570 */
  push32((uint32_t)(0x10150570u));
  /* 101427b1 mov dword ptr [0x101563c0], eax */
  w32((uint32_t)(0x101563c0), (EAX));
  /* 101427b6 call 0x101426a0 */
  push32(0x101427bbu); f_101426a0();
  /* 101427bb push 0x1015055c */
  push32((uint32_t)(0x1015055cu));
  /* 101427c0 mov dword ptr [0x101563c4], eax */
  w32((uint32_t)(0x101563c4), (EAX));
  /* 101427c5 call 0x101426a0 */
  push32(0x101427cau); f_101426a0();
  /* 101427ca push 0x1015054c */
  push32((uint32_t)(0x1015054cu));
  /* 101427cf mov dword ptr [0x101563c8], eax */
  w32((uint32_t)(0x101563c8), (EAX));
  /* 101427d4 call 0x101426a0 */
  push32(0x101427d9u); f_101426a0();
  /* 101427d9 push 0x1015053c */
  push32((uint32_t)(0x1015053cu));
  /* 101427de mov dword ptr [0x101563cc], eax */
  w32((uint32_t)(0x101563cc), (EAX));
  /* 101427e3 call 0x101426a0 */
  push32(0x101427e8u); f_101426a0();
  /* 101427e8 push 0x1015052c */
  push32((uint32_t)(0x1015052cu));
  /* 101427ed mov dword ptr [0x101563d0], eax */
  w32((uint32_t)(0x101563d0), (EAX));
  /* 101427f2 call 0x101426a0 */
  push32(0x101427f7u); f_101426a0();
  /* 101427f7 push 0x1015051c */
  push32((uint32_t)(0x1015051cu));
  /* 101427fc mov dword ptr [0x101563d4], eax */
  w32((uint32_t)(0x101563d4), (EAX));
  /* 10142801 call 0x101426a0 */
  push32(0x10142806u); f_101426a0();
  /* 10142806 push 0x1015050c */
  push32((uint32_t)(0x1015050cu));
  /* 1014280b mov dword ptr [0x101563d8], eax */
  w32((uint32_t)(0x101563d8), (EAX));
  /* 10142810 call 0x101426a0 */
  push32(0x10142815u); f_101426a0();
  /* 10142815 push 0x101504fc */
  push32((uint32_t)(0x101504fcu));
  /* 1014281a mov dword ptr [0x101563dc], eax */
  w32((uint32_t)(0x101563dc), (EAX));
  /* 1014281f call 0x101426a0 */
  push32(0x10142824u); f_101426a0();
  /* 10142824 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142827 mov dword ptr [0x101563e0], eax */
  w32((uint32_t)(0x101563e0), (EAX));
  /* 1014282c push 0x101504ec */
  push32((uint32_t)(0x101504ecu));
  /* 10142831 call 0x101426a0 */
  push32(0x10142836u); f_101426a0();
  /* 10142836 push 0x101504dc */
  push32((uint32_t)(0x101504dcu));
  /* 1014283b mov dword ptr [0x101563e4], eax */
  w32((uint32_t)(0x101563e4), (EAX));
  /* 10142840 call 0x101426a0 */
  push32(0x10142845u); f_101426a0();
  /* 10142845 push 0x101504c8 */
  push32((uint32_t)(0x101504c8u));
  /* 1014284a mov dword ptr [0x101563e8], eax */
  w32((uint32_t)(0x101563e8), (EAX));
  /* 1014284f call 0x101426a0 */
  push32(0x10142854u); f_101426a0();
  /* 10142854 push 0x101504c0 */
  push32((uint32_t)(0x101504c0u));
  /* 10142859 mov dword ptr [0x101563ec], eax */
  w32((uint32_t)(0x101563ec), (EAX));
  /* 1014285e call 0x101426a0 */
  push32(0x10142863u); f_101426a0();
  /* 10142863 push 0x101504b0 */
  push32((uint32_t)(0x101504b0u));
  /* 10142868 mov dword ptr [0x101563f0], eax */
  w32((uint32_t)(0x101563f0), (EAX));
  /* 1014286d call 0x101426a0 */
  push32(0x10142872u); f_101426a0();
  /* 10142872 push 0x101504a0 */
  push32((uint32_t)(0x101504a0u));
  /* 10142877 mov dword ptr [0x101563f4], eax */
  w32((uint32_t)(0x101563f4), (EAX));
  /* 1014287c call 0x101426a0 */
  push32(0x10142881u); f_101426a0();
  /* 10142881 push 0x10150494 */
  push32((uint32_t)(0x10150494u));
  /* 10142886 mov dword ptr [0x101563f8], eax */
  w32((uint32_t)(0x101563f8), (EAX));
  /* 1014288b call 0x101426a0 */
  push32(0x10142890u); f_101426a0();
  /* 10142890 push 0x10150484 */
  push32((uint32_t)(0x10150484u));
  /* 10142895 mov dword ptr [0x101563fc], eax */
  w32((uint32_t)(0x101563fc), (EAX));
  /* 1014289a call 0x101426a0 */
  push32(0x1014289fu); f_101426a0();
  /* 1014289f push 0x1015047c */
  push32((uint32_t)(0x1015047cu));
  /* 101428a4 mov dword ptr [0x10156400], eax */
  w32((uint32_t)(0x10156400), (EAX));
  /* 101428a9 call 0x101426a0 */
  push32(0x101428aeu); f_101426a0();
  /* 101428ae push 0x1015046c */
  push32((uint32_t)(0x1015046cu));
  /* 101428b3 mov dword ptr [0x10156418], eax */
  w32((uint32_t)(0x10156418), (EAX));
  /* 101428b8 call 0x101426a0 */
  push32(0x101428bdu); f_101426a0();
  /* 101428bd push 0x1015045c */
  push32((uint32_t)(0x1015045cu));
  /* 101428c2 mov dword ptr [0x1015641c], eax */
  w32((uint32_t)(0x1015641c), (EAX));
  /* 101428c7 call 0x101426a0 */
  push32(0x101428ccu); f_101426a0();
  /* 101428cc push 0x10150450 */
  push32((uint32_t)(0x10150450u));
  /* 101428d1 mov dword ptr [0x10156420], eax */
  w32((uint32_t)(0x10156420), (EAX));
  /* 101428d6 call 0x101426a0 */
  push32(0x101428dbu); f_101426a0();
  /* 101428db push 0x10150440 */
  push32((uint32_t)(0x10150440u));
  /* 101428e0 mov dword ptr [0x10156424], eax */
  w32((uint32_t)(0x10156424), (EAX));
  /* 101428e5 call 0x101426a0 */
  push32(0x101428eau); f_101426a0();
  /* 101428ea push 0x10150434 */
  push32((uint32_t)(0x10150434u));
  /* 101428ef mov dword ptr [0x10156428], eax */
  w32((uint32_t)(0x10156428), (EAX));
  /* 101428f4 call 0x101426a0 */
  push32(0x101428f9u); f_101426a0();
  /* 101428f9 push 0x10150424 */
  push32((uint32_t)(0x10150424u));
  /* 101428fe mov dword ptr [0x10156444], eax */
  w32((uint32_t)(0x10156444), (EAX));
  /* 10142903 call 0x101426a0 */
  push32(0x10142908u); f_101426a0();
  /* 10142908 push 0x1015041c */
  push32((uint32_t)(0x1015041cu));
  /* 1014290d mov dword ptr [0x1015642c], eax */
  w32((uint32_t)(0x1015642c), (EAX));
  /* 10142912 call 0x101426a0 */
  push32(0x10142917u); f_101426a0();
  /* 10142917 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014291a mov dword ptr [0x10156430], eax */
  w32((uint32_t)(0x10156430), (EAX));
  /* 1014291f push 0x1015040c */
  push32((uint32_t)(0x1015040cu));
  /* 10142924 call 0x101426a0 */
  push32(0x10142929u); f_101426a0();
  /* 10142929 push 0x101503fc */
  push32((uint32_t)(0x101503fcu));
  /* 1014292e mov dword ptr [0x10156434], eax */
  w32((uint32_t)(0x10156434), (EAX));
  /* 10142933 call 0x101426a0 */
  push32(0x10142938u); f_101426a0();
  /* 10142938 push 0x101503ec */
  push32((uint32_t)(0x101503ecu));
  /* 1014293d mov dword ptr [0x10156438], eax */
  w32((uint32_t)(0x10156438), (EAX));
  /* 10142942 call 0x101426a0 */
  push32(0x10142947u); f_101426a0();
  /* 10142947 push 0x101503e0 */
  push32((uint32_t)(0x101503e0u));
  /* 1014294c mov dword ptr [0x1015643c], eax */
  w32((uint32_t)(0x1015643c), (EAX));
  /* 10142951 call 0x101426a0 */
  push32(0x10142956u); f_101426a0();
  /* 10142956 push 0x101503d8 */
  push32((uint32_t)(0x101503d8u));
  /* 1014295b mov dword ptr [0x10156440], eax */
  w32((uint32_t)(0x10156440), (EAX));
  /* 10142960 call 0x101426a0 */
  push32(0x10142965u); f_101426a0();
  /* 10142965 push 0x101503c8 */
  push32((uint32_t)(0x101503c8u));
  /* 1014296a mov dword ptr [0x10156448], eax */
  w32((uint32_t)(0x10156448), (EAX));
  /* 1014296f call 0x101426a0 */
  push32(0x10142974u); f_101426a0();
  /* 10142974 push 0x101503b8 */
  push32((uint32_t)(0x101503b8u));
  /* 10142979 mov dword ptr [0x1015644c], eax */
  w32((uint32_t)(0x1015644c), (EAX));
  /* 1014297e call 0x101426a0 */
  push32(0x10142983u); f_101426a0();
  /* 10142983 push 0x101503a8 */
  push32((uint32_t)(0x101503a8u));
  /* 10142988 mov dword ptr [0x10156450], eax */
  w32((uint32_t)(0x10156450), (EAX));
  /* 1014298d call 0x101426a0 */
  push32(0x10142992u); f_101426a0();
  /* 10142992 push 0x10150398 */
  push32((uint32_t)(0x10150398u));
  /* 10142997 mov dword ptr [0x10156454], eax */
  w32((uint32_t)(0x10156454), (EAX));
  /* 1014299c call 0x101426a0 */
  push32(0x101429a1u); f_101426a0();
  /* 101429a1 push 0x1015038c */
  push32((uint32_t)(0x1015038cu));
  /* 101429a6 mov dword ptr [0x10156458], eax */
  w32((uint32_t)(0x10156458), (EAX));
  /* 101429ab call 0x101426a0 */
  push32(0x101429b0u); f_101426a0();
  /* 101429b0 push 0x10150380 */
  push32((uint32_t)(0x10150380u));
  /* 101429b5 mov dword ptr [0x1015645c], eax */
  w32((uint32_t)(0x1015645c), (EAX));
  /* 101429ba call 0x101426a0 */
  push32(0x101429bfu); f_101426a0();
  /* 101429bf push 0x10150370 */
  push32((uint32_t)(0x10150370u));
  /* 101429c4 mov dword ptr [0x10156460], eax */
  w32((uint32_t)(0x10156460), (EAX));
  /* 101429c9 call 0x101426a0 */
  push32(0x101429ceu); f_101426a0();
  /* 101429ce push 0x10150364 */
  push32((uint32_t)(0x10150364u));
  /* 101429d3 mov dword ptr [0x10156464], eax */
  w32((uint32_t)(0x10156464), (EAX));
  /* 101429d8 call 0x101426a0 */
  push32(0x101429ddu); f_101426a0();
  /* 101429dd push 0x10150358 */
  push32((uint32_t)(0x10150358u));
  /* 101429e2 mov dword ptr [0x10156468], eax */
  w32((uint32_t)(0x10156468), (EAX));
  /* 101429e7 call 0x101426a0 */
  push32(0x101429ecu); f_101426a0();
  /* 101429ec push 0x1015034c */
  push32((uint32_t)(0x1015034cu));
  /* 101429f1 mov dword ptr [0x1015646c], eax */
  w32((uint32_t)(0x1015646c), (EAX));
  /* 101429f6 call 0x101426a0 */
  push32(0x101429fbu); f_101426a0();
  /* 101429fb push 0x10150340 */
  push32((uint32_t)(0x10150340u));
  /* 10142a00 mov dword ptr [0x101561a0], eax */
  w32((uint32_t)(0x101561a0), (EAX));
  /* 10142a05 call 0x101426a0 */
  push32(0x10142a0au); f_101426a0();
  /* 10142a0a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142a0d mov dword ptr [0x10156470], eax */
  w32((uint32_t)(0x10156470), (EAX));
  /* 10142a12 push 0x10150334 */
  push32((uint32_t)(0x10150334u));
  /* 10142a17 call 0x101426a0 */
  push32(0x10142a1cu); f_101426a0();
  /* 10142a1c push 0x10150328 */
  push32((uint32_t)(0x10150328u));
  /* 10142a21 mov dword ptr [0x10156474], eax */
  w32((uint32_t)(0x10156474), (EAX));
  /* 10142a26 call 0x101426a0 */
  push32(0x10142a2bu); f_101426a0();
  /* 10142a2b push 0x10150318 */
  push32((uint32_t)(0x10150318u));
  /* 10142a30 mov dword ptr [0x10156478], eax */
  w32((uint32_t)(0x10156478), (EAX));
  /* 10142a35 call 0x101426a0 */
  push32(0x10142a3au); f_101426a0();
  /* 10142a3a push 0x1015030c */
  push32((uint32_t)(0x1015030cu));
  /* 10142a3f mov dword ptr [0x1015647c], eax */
  w32((uint32_t)(0x1015647c), (EAX));
  /* 10142a44 call 0x101426a0 */
  push32(0x10142a49u); f_101426a0();
  /* 10142a49 push 0x10150300 */
  push32((uint32_t)(0x10150300u));
  /* 10142a4e mov dword ptr [0x10156480], eax */
  w32((uint32_t)(0x10156480), (EAX));
  /* 10142a53 call 0x101426a0 */
  push32(0x10142a58u); f_101426a0();
  /* 10142a58 mov dword ptr [0x10156484], eax */
  w32((uint32_t)(0x10156484), (EAX));
  /* 10142a5d push 0x101502f0 */
  push32((uint32_t)(0x101502f0u));
  /* 10142a62 call 0x101426a0 */
  push32(0x10142a67u); f_101426a0();
  /* 10142a67 push 0x101502e0 */
  push32((uint32_t)(0x101502e0u));
  /* 10142a6c mov dword ptr [0x10156488], eax */
  w32((uint32_t)(0x10156488), (EAX));
  /* 10142a71 call 0x101426a0 */
  push32(0x10142a76u); f_101426a0();
  /* 10142a76 push 0x101502d4 */
  push32((uint32_t)(0x101502d4u));
  /* 10142a7b mov dword ptr [0x1015648c], eax */
  w32((uint32_t)(0x1015648c), (EAX));
  /* 10142a80 call 0x101426a0 */
  push32(0x10142a85u); f_101426a0();
  /* 10142a85 push 0x101502cc */
  push32((uint32_t)(0x101502ccu));
  /* 10142a8a mov dword ptr [0x10156490], eax */
  w32((uint32_t)(0x10156490), (EAX));
  /* 10142a8f call 0x101426a0 */
  push32(0x10142a94u); f_101426a0();
  /* 10142a94 push 0x101502bc */
  push32((uint32_t)(0x101502bcu));
  /* 10142a99 mov dword ptr [0x10156494], eax */
  w32((uint32_t)(0x10156494), (EAX));
  /* 10142a9e call 0x101426a0 */
  push32(0x10142aa3u); f_101426a0();
  /* 10142aa3 push 0x101502b4 */
  push32((uint32_t)(0x101502b4u));
  /* 10142aa8 mov dword ptr [0x10156498], eax */
  w32((uint32_t)(0x10156498), (EAX));
  /* 10142aad call 0x101426a0 */
  push32(0x10142ab2u); f_101426a0();
  /* 10142ab2 push 0x101502a8 */
  push32((uint32_t)(0x101502a8u));
  /* 10142ab7 mov dword ptr [0x1015649c], eax */
  w32((uint32_t)(0x1015649c), (EAX));
  /* 10142abc call 0x101426a0 */
  push32(0x10142ac1u); f_101426a0();
  /* 10142ac1 push 0x101502a0 */
  push32((uint32_t)(0x101502a0u));
  /* 10142ac6 mov dword ptr [0x101564a0], eax */
  w32((uint32_t)(0x101564a0), (EAX));
  /* 10142acb call 0x101426a0 */
  push32(0x10142ad0u); f_101426a0();
  /* 10142ad0 push 0x1015028c */
  push32((uint32_t)(0x1015028cu));
  /* 10142ad5 mov dword ptr [0x101564a4], eax */
  w32((uint32_t)(0x101564a4), (EAX));
  /* 10142ada call 0x101426a0 */
  push32(0x10142adfu); f_101426a0();
  /* 10142adf push 0x10150280 */
  push32((uint32_t)(0x10150280u));
  /* 10142ae4 mov dword ptr [0x101535f8], eax */
  w32((uint32_t)(0x101535f8), (EAX));
  /* 10142ae9 call 0x101426a0 */
  push32(0x10142aeeu); f_101426a0();
  /* 10142aee push 0x10150274 */
  push32((uint32_t)(0x10150274u));
  /* 10142af3 mov dword ptr [0x101564b0], eax */
  w32((uint32_t)(0x101564b0), (EAX));
  /* 10142af8 call 0x101426a0 */
  push32(0x10142afdu); f_101426a0();
  /* 10142afd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142b00 mov dword ptr [0x101564ac], eax */
  w32((uint32_t)(0x101564ac), (EAX));
  /* 10142b05 push 0x10150260 */
  push32((uint32_t)(0x10150260u));
  /* 10142b0a call 0x101426a0 */
  push32(0x10142b0fu); f_101426a0();
  /* 10142b0f push 0x10150250 */
  push32((uint32_t)(0x10150250u));
  /* 10142b14 mov dword ptr [0x101564b4], eax */
  w32((uint32_t)(0x101564b4), (EAX));
  /* 10142b19 call 0x101426a0 */
  push32(0x10142b1eu); f_101426a0();
  /* 10142b1e push 0x10150240 */
  push32((uint32_t)(0x10150240u));
  /* 10142b23 mov dword ptr [0x101564b8], eax */
  w32((uint32_t)(0x101564b8), (EAX));
  /* 10142b28 call 0x101426a0 */
  push32(0x10142b2du); f_101426a0();
  /* 10142b2d push 0x10150230 */
  push32((uint32_t)(0x10150230u));
  /* 10142b32 mov dword ptr [0x101564bc], eax */
  w32((uint32_t)(0x101564bc), (EAX));
  /* 10142b37 call 0x101426a0 */
  push32(0x10142b3cu); f_101426a0();
  /* 10142b3c push 0x10150224 */
  push32((uint32_t)(0x10150224u));
  /* 10142b41 mov dword ptr [0x10156408], eax */
  w32((uint32_t)(0x10156408), (EAX));
  /* 10142b46 call 0x101426a0 */
  push32(0x10142b4bu); f_101426a0();
  /* 10142b4b push 0x10150214 */
  push32((uint32_t)(0x10150214u));
  /* 10142b50 mov dword ptr [0x10156404], eax */
  w32((uint32_t)(0x10156404), (EAX));
  /* 10142b55 call 0x101426a0 */
  push32(0x10142b5au); f_101426a0();
  /* 10142b5a push 0x10150200 */
  push32((uint32_t)(0x10150200u));
  /* 10142b5f mov dword ptr [0x1015640c], eax */
  w32((uint32_t)(0x1015640c), (EAX));
  /* 10142b64 call 0x101426a0 */
  push32(0x10142b69u); f_101426a0();
  /* 10142b69 push 0x101501e8 */
  push32((uint32_t)(0x101501e8u));
  /* 10142b6e mov dword ptr [0x10156410], eax */
  w32((uint32_t)(0x10156410), (EAX));
  /* 10142b73 call 0x101426a0 */
  push32(0x10142b78u); f_101426a0();
  /* 10142b78 push 0x101501d8 */
  push32((uint32_t)(0x101501d8u));
  /* 10142b7d mov dword ptr [0x10156414], eax */
  w32((uint32_t)(0x10156414), (EAX));
  /* 10142b82 call 0x101426a0 */
  push32(0x10142b87u); f_101426a0();
  /* 10142b87 push 0x101501c0 */
  push32((uint32_t)(0x101501c0u));
  /* 10142b8c mov dword ptr [0x101564d8], eax */
  w32((uint32_t)(0x101564d8), (EAX));
  /* 10142b91 call 0x101426a0 */
  push32(0x10142b96u); f_101426a0();
  /* 10142b96 push 0x101501b0 */
  push32((uint32_t)(0x101501b0u));
  /* 10142b9b mov dword ptr [0x10156508], eax */
  w32((uint32_t)(0x10156508), (EAX));
  /* 10142ba0 call 0x101426a0 */
  push32(0x10142ba5u); f_101426a0();
  /* 10142ba5 push 0x101501a8 */
  push32((uint32_t)(0x101501a8u));
  /* 10142baa mov dword ptr [0x101564d0], eax */
  w32((uint32_t)(0x101564d0), (EAX));
  /* 10142baf call 0x101426a0 */
  push32(0x10142bb4u); f_101426a0();
  /* 10142bb4 push 0x10150198 */
  push32((uint32_t)(0x10150198u));
  /* 10142bb9 mov dword ptr [0x101564dc], eax */
  w32((uint32_t)(0x101564dc), (EAX));
  /* 10142bbe call 0x101426a0 */
  push32(0x10142bc3u); f_101426a0();
  /* 10142bc3 push 0x1015018c */
  push32((uint32_t)(0x1015018cu));
  /* 10142bc8 mov dword ptr [0x10156528], eax */
  w32((uint32_t)(0x10156528), (EAX));
  /* 10142bcd call 0x101426a0 */
  push32(0x10142bd2u); f_101426a0();
  /* 10142bd2 push 0x10150184 */
  push32((uint32_t)(0x10150184u));
  /* 10142bd7 mov dword ptr [0x101564c0], eax */
  w32((uint32_t)(0x101564c0), (EAX));
  /* 10142bdc call 0x101426a0 */
  push32(0x10142be1u); f_101426a0();
  /* 10142be1 push 0x10150178 */
  push32((uint32_t)(0x10150178u));
  /* 10142be6 mov dword ptr [0x101564c4], eax */
  w32((uint32_t)(0x101564c4), (EAX));
  /* 10142beb call 0x101426a0 */
  push32(0x10142bf0u); f_101426a0();
  /* 10142bf0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142bf3 mov dword ptr [0x101564c8], eax */
  w32((uint32_t)(0x101564c8), (EAX));
  /* 10142bf8 push 0x10150168 */
  push32((uint32_t)(0x10150168u));
  /* 10142bfd call 0x101426a0 */
  push32(0x10142c02u); f_101426a0();
  /* 10142c02 push 0x10150154 */
  push32((uint32_t)(0x10150154u));
  /* 10142c07 mov dword ptr [0x101564cc], eax */
  w32((uint32_t)(0x101564cc), (EAX));
  /* 10142c0c call 0x101426a0 */
  push32(0x10142c11u); f_101426a0();
  /* 10142c11 push 0x10150138 */
  push32((uint32_t)(0x10150138u));
  /* 10142c16 mov dword ptr [0x101564d4], eax */
  w32((uint32_t)(0x101564d4), (EAX));
  /* 10142c1b call 0x101426a0 */
  push32(0x10142c20u); f_101426a0();
  /* 10142c20 push 0x10150124 */
  push32((uint32_t)(0x10150124u));
  /* 10142c25 mov dword ptr [0x101564e0], eax */
  w32((uint32_t)(0x101564e0), (EAX));
  /* 10142c2a call 0x101426a0 */
  push32(0x10142c2fu); f_101426a0();
  /* 10142c2f push 0x10150118 */
  push32((uint32_t)(0x10150118u));
  /* 10142c34 mov dword ptr [0x101564e4], eax */
  w32((uint32_t)(0x101564e4), (EAX));
  /* 10142c39 call 0x101426a0 */
  push32(0x10142c3eu); f_101426a0();
  /* 10142c3e push 0x10150108 */
  push32((uint32_t)(0x10150108u));
  /* 10142c43 mov dword ptr [0x1015651c], eax */
  w32((uint32_t)(0x1015651c), (EAX));
  /* 10142c48 call 0x101426a0 */
  push32(0x10142c4du); f_101426a0();
  /* 10142c4d push 0x101500fc */
  push32((uint32_t)(0x101500fcu));
  /* 10142c52 mov dword ptr [0x10156520], eax */
  w32((uint32_t)(0x10156520), (EAX));
  /* 10142c57 call 0x101426a0 */
  push32(0x10142c5cu); f_101426a0();
  /* 10142c5c push 0x101500f0 */
  push32((uint32_t)(0x101500f0u));
  /* 10142c61 mov dword ptr [0x10156524], eax */
  w32((uint32_t)(0x10156524), (EAX));
  /* 10142c66 call 0x101426a0 */
  push32(0x10142c6bu); f_101426a0();
  /* 10142c6b push 0x101500d8 */
  push32((uint32_t)(0x101500d8u));
  /* 10142c70 mov dword ptr [0x1015652c], eax */
  w32((uint32_t)(0x1015652c), (EAX));
  /* 10142c75 call 0x101426a0 */
  push32(0x10142c7au); f_101426a0();
  /* 10142c7a push 0x101500bc */
  push32((uint32_t)(0x101500bcu));
  /* 10142c7f mov dword ptr [0x101564e8], eax */
  w32((uint32_t)(0x101564e8), (EAX));
  /* 10142c84 call 0x101426a0 */
  push32(0x10142c89u); f_101426a0();
  /* 10142c89 push 0x101500a0 */
  push32((uint32_t)(0x101500a0u));
  /* 10142c8e mov dword ptr [0x101564ec], eax */
  w32((uint32_t)(0x101564ec), (EAX));
  /* 10142c93 call 0x101426a0 */
  push32(0x10142c98u); f_101426a0();
  /* 10142c98 push 0x10150088 */
  push32((uint32_t)(0x10150088u));
  /* 10142c9d mov dword ptr [0x101564f0], eax */
  w32((uint32_t)(0x101564f0), (EAX));
  /* 10142ca2 call 0x101426a0 */
  push32(0x10142ca7u); f_101426a0();
  /* 10142ca7 push 0x10150070 */
  push32((uint32_t)(0x10150070u));
  /* 10142cac mov dword ptr [0x101564f4], eax */
  w32((uint32_t)(0x101564f4), (EAX));
  /* 10142cb1 call 0x101426a0 */
  push32(0x10142cb6u); f_101426a0();
  /* 10142cb6 push 0x10150064 */
  push32((uint32_t)(0x10150064u));
  /* 10142cbb mov dword ptr [0x101564f8], eax */
  w32((uint32_t)(0x101564f8), (EAX));
  /* 10142cc0 call 0x101426a0 */
  push32(0x10142cc5u); f_101426a0();
  /* 10142cc5 push 0x10150058 */
  push32((uint32_t)(0x10150058u));
  /* 10142cca mov dword ptr [0x101564fc], eax */
  w32((uint32_t)(0x101564fc), (EAX));
  /* 10142ccf call 0x101426a0 */
  push32(0x10142cd4u); f_101426a0();
  /* 10142cd4 push 0x10150048 */
  push32((uint32_t)(0x10150048u));
  /* 10142cd9 mov dword ptr [0x10156500], eax */
  w32((uint32_t)(0x10156500), (EAX));
  /* 10142cde call 0x101426a0 */
  push32(0x10142ce3u); f_101426a0();
  /* 10142ce3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142ce6 mov dword ptr [0x10156504], eax */
  w32((uint32_t)(0x10156504), (EAX));
  /* 10142ceb push 0x1015003c */
  push32((uint32_t)(0x1015003cu));
  /* 10142cf0 call 0x101426a0 */
  push32(0x10142cf5u); f_101426a0();
  /* 10142cf5 push 0x10150030 */
  push32((uint32_t)(0x10150030u));
  /* 10142cfa mov dword ptr [0x1015650c], eax */
  w32((uint32_t)(0x1015650c), (EAX));
  /* 10142cff call 0x101426a0 */
  push32(0x10142d04u); f_101426a0();
  /* 10142d04 push 0x10150024 */
  push32((uint32_t)(0x10150024u));
  /* 10142d09 mov dword ptr [0x10156510], eax */
  w32((uint32_t)(0x10156510), (EAX));
  /* 10142d0e call 0x101426a0 */
  push32(0x10142d13u); f_101426a0();
  /* 10142d13 push 0x10150014 */
  push32((uint32_t)(0x10150014u));
  /* 10142d18 mov dword ptr [0x10156530], eax */
  w32((uint32_t)(0x10156530), (EAX));
  /* 10142d1d call 0x101426a0 */
  push32(0x10142d22u); f_101426a0();
  /* 10142d22 push 0x10150008 */
  push32((uint32_t)(0x10150008u));
  /* 10142d27 mov dword ptr [0x10156534], eax */
  w32((uint32_t)(0x10156534), (EAX));
  /* 10142d2c call 0x101426a0 */
  push32(0x10142d31u); f_101426a0();
  /* 10142d31 push 0x1014fffc */
  push32((uint32_t)(0x1014fffcu));
  /* 10142d36 mov dword ptr [0x10156538], eax */
  w32((uint32_t)(0x10156538), (EAX));
  /* 10142d3b call 0x101426a0 */
  push32(0x10142d40u); f_101426a0();
  /* 10142d40 push 0x1014fff0 */
  push32((uint32_t)(0x1014fff0u));
  /* 10142d45 mov dword ptr [0x1015653c], eax */
  w32((uint32_t)(0x1015653c), (EAX));
  /* 10142d4a call 0x101426a0 */
  push32(0x10142d4fu); f_101426a0();
  /* 10142d4f push 0x1014ffe0 */
  push32((uint32_t)(0x1014ffe0u));
  /* 10142d54 mov dword ptr [0x10156540], eax */
  w32((uint32_t)(0x10156540), (EAX));
  /* 10142d59 call 0x101426a0 */
  push32(0x10142d5eu); f_101426a0();
  /* 10142d5e push 0x1014ffd0 */
  push32((uint32_t)(0x1014ffd0u));
  /* 10142d63 mov dword ptr [0x10156544], eax */
  w32((uint32_t)(0x10156544), (EAX));
  /* 10142d68 call 0x101426a0 */
  push32(0x10142d6du); f_101426a0();
  /* 10142d6d push 0x1014ffbc */
  push32((uint32_t)(0x1014ffbcu));
  /* 10142d72 mov dword ptr [0x1015654c], eax */
  w32((uint32_t)(0x1015654c), (EAX));
  /* 10142d77 call 0x101426a0 */
  push32(0x10142d7cu); f_101426a0();
  /* 10142d7c mov dword ptr [0x10156548], eax */
  w32((uint32_t)(0x10156548), (EAX));
  /* 10142d81 push 0x1014ffa4 */
  push32((uint32_t)(0x1014ffa4u));
  /* 10142d86 call 0x101426a0 */
  push32(0x10142d8bu); f_101426a0();
  /* 10142d8b push 0x1014ff8c */
  push32((uint32_t)(0x1014ff8cu));
  /* 10142d90 mov dword ptr [0x10153890], eax */
  w32((uint32_t)(0x10153890), (EAX));
  /* 10142d95 call 0x101426a0 */
  push32(0x10142d9au); f_101426a0();
  /* 10142d9a push 0x1014ff7c */
  push32((uint32_t)(0x1014ff7cu));
  /* 10142d9f mov dword ptr [0x101536f0], eax */
  w32((uint32_t)(0x101536f0), (EAX));
  /* 10142da4 call 0x101426a0 */
  push32(0x10142da9u); f_101426a0();
  /* 10142da9 push 0x1014ff6c */
  push32((uint32_t)(0x1014ff6cu));
  /* 10142dae mov dword ptr [0x10156550], eax */
  w32((uint32_t)(0x10156550), (EAX));
  /* 10142db3 call 0x101426a0 */
  push32(0x10142db8u); f_101426a0();
  /* 10142db8 push 0x1014ff5c */
  push32((uint32_t)(0x1014ff5cu));
  /* 10142dbd mov dword ptr [0x10156514], eax */
  w32((uint32_t)(0x10156514), (EAX));
  /* 10142dc2 call 0x101426a0 */
  push32(0x10142dc7u); f_101426a0();
  /* 10142dc7 push 0x1014ff4c */
  push32((uint32_t)(0x1014ff4cu));
  /* 10142dcc mov dword ptr [0x10156518], eax */
  w32((uint32_t)(0x10156518), (EAX));
  /* 10142dd1 call 0x101426a0 */
  push32(0x10142dd6u); f_101426a0();
  /* 10142dd6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142dd9 mov dword ptr [0x10156270], eax */
  w32((uint32_t)(0x10156270), (EAX));
  /* 10142dde push 0x1014ff3c */
  push32((uint32_t)(0x1014ff3cu));
  /* 10142de3 call 0x101426a0 */
  push32(0x10142de8u); f_101426a0();
  /* 10142de8 push 0x1014ff2c */
  push32((uint32_t)(0x1014ff2cu));
  /* 10142ded mov dword ptr [0x10156228], eax */
  w32((uint32_t)(0x10156228), (EAX));
  /* 10142df2 call 0x101426a0 */
  push32(0x10142df7u); f_101426a0();
  /* 10142df7 push 0x1014ff1c */
  push32((uint32_t)(0x1014ff1cu));
  /* 10142dfc mov dword ptr [0x10155f80], eax */
  w32((uint32_t)(0x10155f80), (EAX));
  /* 10142e01 call 0x101426a0 */
  push32(0x10142e06u); f_101426a0();
  /* 10142e06 push 0x1014ff0c */
  push32((uint32_t)(0x1014ff0cu));
  /* 10142e0b mov dword ptr [0x101538f0], eax */
  w32((uint32_t)(0x101538f0), (EAX));
  /* 10142e10 call 0x101426a0 */
  push32(0x10142e15u); f_101426a0();
  /* 10142e15 push 0x1014fef8 */
  push32((uint32_t)(0x1014fef8u));
  /* 10142e1a mov dword ptr [0x10156208], eax */
  w32((uint32_t)(0x10156208), (EAX));
  /* 10142e1f call 0x101426a0 */
  push32(0x10142e24u); f_101426a0();
  /* 10142e24 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142e27 mov dword ptr [0x10153908], eax */
  w32((uint32_t)(0x10153908), (EAX));
L_10142e2c:;
  /* 10142e2c mov eax, 1 */
  EAX = (0x1u);
  /* 10142e31 ret 0xc */
  ESPCHK(0x10142700u, _esp0);
  ESP += 16; return;
}

/* FUN_10002e40 @ 0x10142e40 (34 bytes, 10 insns) */
void f_10142e40(void) {
  FTRACE(0x10142e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142e40 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10142e44 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10142e48 push eax */
  push32((uint32_t)(EAX));
  /* 10142e49 push ecx */
  push32((uint32_t)(ECX));
  /* 10142e4a push 0x10150630 */
  push32((uint32_t)(0x10150630u));
  /* 10142e4f push 0x10153768 */
  push32((uint32_t)(0x10153768u));
  /* 10142e54 call 0x10146d80 */
  push32(0x10142e59u); f_10146d80();
  /* 10142e59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142e5c mov eax, 0x10153768 */
  EAX = (0x10153768u);
  /* 10142e61 ret  */
  ESPCHK(0x10142e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e70 @ 0x10142e70 (45 bytes, 16 insns) */
void f_10142e70(void) {
  FTRACE(0x10142e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142e70 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10142e74 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10142e78 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10142e7d push eax */
  push32((uint32_t)(EAX));
  /* 10142e7e push ecx */
  push32((uint32_t)(ECX));
  /* 10142e7f call 0x10142650 */
  push32(0x10142e84u); f_10142650();
  /* 10142e84 mov ecx, eax */
  ECX = (EAX);
  /* 10142e86 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10142e8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142e8d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10142e90 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10142e93 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10142e96 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10142e99 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10142e9a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10142e9c ret  */
  ESPCHK(0x10142e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ea0 @ 0x10142ea0 (171 bytes, 77 insns) */
void f_10142ea0(void) {
  FTRACE(0x10142ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142ea0 push ebx */
  push32((uint32_t)(EBX));
  /* 10142ea1 push ebp */
  push32((uint32_t)(EBP));
  /* 10142ea2 push esi */
  push32((uint32_t)(ESI));
  /* 10142ea3 push edi */
  push32((uint32_t)(EDI));
  /* 10142ea4 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 10142ea8 push edi */
  push32((uint32_t)(EDI));
  /* 10142ea9 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10142eafu);
  /* 10142eaf mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 10142eb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142eb6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10142eb8 jl 0x10142ec1 */
  if ((C.sf!=C.of)) goto L_10142ec1;
  /* 10142eba pop edi */
  EDI = (pop32());
  /* 10142ebb pop esi */
  ESI = (pop32());
  /* 10142ebc pop ebp */
  EBP = (pop32());
  /* 10142ebd mov al, 1 */
  AL = (0x1u);
  /* 10142ebf pop ebx */
  EBX = (pop32());
  /* 10142ec0 ret  */
  ESPCHK(0x10142ea0u, _esp0);
  ESP += 4; return;
L_10142ec1:;
  /* 10142ec1 push edi */
  push32((uint32_t)(EDI));
  /* 10142ec2 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10142ec8u);
  /* 10142ec8 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10142ecc sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10142ece push esi */
  push32((uint32_t)(ESI));
  /* 10142ecf push edi */
  push32((uint32_t)(EDI));
  /* 10142ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10142ed1 mov dword ptr [esp + 0x24], esi */
  w32((uint32_t)(ESP + 0x24), (ESI));
  /* 10142ed5 call 0x10142e70 */
  push32(0x10142edau); f_10142e70();
  /* 10142eda push ebp */
  push32((uint32_t)(EBP));
  /* 10142edb mov ebx, eax */
  EBX = (EAX);
  /* 10142edd call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10142ee3u);
  /* 10142ee3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142ee6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10142ee8 jle 0x10142f44 */
  if ((C.zf||C.sf!=C.of)) goto L_10142f44;
  /* 10142eea cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10142ef0 jle 0x10142f44 */
  if ((C.zf||C.sf!=C.of)) goto L_10142f44;
  /* 10142ef2 mov eax, 0x45e7b273 */
  EAX = (0x45e7b273u);
  /* 10142ef7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10142ef9 imul ebx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EBX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10142efb sar edx, 0xc */
  EDX = (sh_sar((uint32_t)(EDX), (0xcu)&0x1f, 32));
  /* 10142efe mov eax, edx */
  EAX = (EDX);
  /* 10142f00 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10142f03 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10142f05 mov ebx, edx */
  EBX = (EDX);
L_10142f07:;
  /* 10142f07 cmp ebx, 0xf */
  { uint32_t _a=(EBX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10142f0a mov eax, 0xf */
  EAX = (0xfu);
  /* 10142f0f jg 0x10142f13 */
  if ((!C.zf&&C.sf==C.of)) goto L_10142f13;
  /* 10142f11 mov eax, ebx */
  EAX = (EBX);
L_10142f13:;
  /* 10142f13 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10142f15 jge 0x10142f26 */
  if ((C.sf==C.of)) goto L_10142f26;
  /* 10142f17 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10142f19 push ebp */
  push32((uint32_t)(EBP));
  /* 10142f1a push edi */
  push32((uint32_t)(EDI));
  /* 10142f1b call 0x10142520 */
  push32(0x10142f20u); f_10142520();
  /* 10142f20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142f23 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10142f24 jmp 0x10142f07 */
  goto L_10142f07;
L_10142f26:;
  /* 10142f26 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10142f2a push ecx */
  push32((uint32_t)(ECX));
  /* 10142f2b push edi */
  push32((uint32_t)(EDI));
  /* 10142f2c push ebp */
  push32((uint32_t)(EBP));
  /* 10142f2d call 0x10142e70 */
  push32(0x10142f32u); f_10142e70();
  /* 10142f32 push eax */
  push32((uint32_t)(EAX));
  /* 10142f33 push edi */
  push32((uint32_t)(EDI));
  /* 10142f34 push ebp */
  push32((uint32_t)(EBP));
  /* 10142f35 call 0x10142520 */
  push32(0x10142f3au); f_10142520();
  /* 10142f3a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10142f3d mov al, 1 */
  AL = (0x1u);
  /* 10142f3f pop edi */
  EDI = (pop32());
  /* 10142f40 pop esi */
  ESI = (pop32());
  /* 10142f41 pop ebp */
  EBP = (pop32());
  /* 10142f42 pop ebx */
  EBX = (pop32());
  /* 10142f43 ret  */
  ESPCHK(0x10142ea0u, _esp0);
  ESP += 4; return;
L_10142f44:;
  /* 10142f44 pop edi */
  EDI = (pop32());
  /* 10142f45 pop esi */
  ESI = (pop32());
  /* 10142f46 pop ebp */
  EBP = (pop32());
  /* 10142f47 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 10142f49 pop ebx */
  EBX = (pop32());
  /* 10142f4a ret  */
  ESPCHK(0x10142ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f50 @ 0x10142f50 (369 bytes, 82 insns) */
void f_10142f50(void) {
  FTRACE(0x10142f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10142f50 push ebx */
  push32((uint32_t)(EBX));
  /* 10142f51 push esi */
  push32((uint32_t)(ESI));
  /* 10142f52 call dword ptr [0x101564c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c0))), 0x10142f58u);
  /* 10142f58 push 0x10156150 */
  push32((uint32_t)(0x10156150u));
  /* 10142f5d mov dword ptr [0x10156274], eax */
  w32((uint32_t)(0x10156274), (EAX));
  /* 10142f62 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10142f68u);
  /* 10142f68 mov ebx, 1 */
  EBX = (0x1u);
  /* 10142f6d mov esi, eax */
  ESI = (EAX);
  /* 10142f6f push ebx */
  push32((uint32_t)(EBX));
  /* 10142f70 call 0x10142640 */
  push32(0x10142f75u); f_10142640();
  /* 10142f75 push 4 */
  push32((uint32_t)(0x4u));
  /* 10142f77 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10142f79 call 0x10142640 */
  push32(0x10142f7eu); f_10142640();
  /* 10142f7e push 5 */
  push32((uint32_t)(0x5u));
  /* 10142f80 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10142f82 call 0x10142640 */
  push32(0x10142f87u); f_10142640();
  /* 10142f87 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10142f89 mov eax, dword ptr [0x10156274] */
  EAX = (r32((uint32_t)(0x10156274)));
  /* 10142f8e push 3 */
  push32((uint32_t)(0x3u));
  /* 10142f90 mov dword ptr [0x10156170], esi */
  w32((uint32_t)(0x10156170), (ESI));
  /* 10142f96 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 10142f99 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 10142f9c lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 10142f9f lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 10142fa2 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10142fa5 mov ecx, dword ptr [eax + 0x10153ab0] */
  ECX = (r32((uint32_t)(EAX + 0x10153ab0)));
  /* 10142fab lea edx, [eax + 0x10153920] */
  EDX = ((uint32_t)(EAX + 0x10153920));
  /* 10142fb1 mov dword ptr [0x10156180], edx */
  w32((uint32_t)(0x10156180), (EDX));
  /* 10142fb7 lea edx, [eax + 0x10153ab4] */
  EDX = ((uint32_t)(EAX + 0x10153ab4));
  /* 10142fbd mov dword ptr [0x101565c4], ecx */
  w32((uint32_t)(0x101565c4), (ECX));
  /* 10142fc3 mov ecx, dword ptr [eax + 0x10153c44] */
  ECX = (r32((uint32_t)(EAX + 0x10153c44)));
  /* 10142fc9 mov dword ptr [0x10156184], edx */
  w32((uint32_t)(0x10156184), (EDX));
  /* 10142fcf lea edx, [eax + 0x10153c48] */
  EDX = ((uint32_t)(EAX + 0x10153c48));
  /* 10142fd5 mov dword ptr [0x101565c8], ecx */
  w32((uint32_t)(0x101565c8), (ECX));
  /* 10142fdb mov dword ptr [0x1015620c], edx */
  w32((uint32_t)(0x1015620c), (EDX));
  /* 10142fe1 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10142fe7u);
  /* 10142fe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10142fe9 mov dword ptr [0x10156250], eax */
  w32((uint32_t)(0x10156250), (EAX));
  /* 10142fee call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10142ff4u);
  /* 10142ff4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10142ff6 mov dword ptr [0x101535e0], eax */
  w32((uint32_t)(0x101535e0), (EAX));
  /* 10142ffb call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143001u);
  /* 10143001 push 4 */
  push32((uint32_t)(0x4u));
  /* 10143003 mov dword ptr [0x10156340], eax */
  w32((uint32_t)(0x10156340), (EAX));
  /* 10143008 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x1014300eu);
  /* 1014300e push 5 */
  push32((uint32_t)(0x5u));
  /* 10143010 mov dword ptr [0x101536e8], eax */
  w32((uint32_t)(0x101536e8), (EAX));
  /* 10143015 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x1014301bu);
  /* 1014301b push ebx */
  push32((uint32_t)(EBX));
  /* 1014301c mov dword ptr [0x101560a8], eax */
  w32((uint32_t)(0x101560a8), (EAX));
  /* 10143021 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143027u);
  /* 10143027 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014302a mov dword ptr [0x101562f8], eax */
  w32((uint32_t)(0x101562f8), (EAX));
  /* 1014302f call 0x10142580 */
  push32(0x10143034u); f_10142580();
  /* 10143034 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10143036 jne 0x10143042 */
  if (!C.zf) goto L_10143042;
  /* 10143038 mov dword ptr [0x1014f248], 4 */
  w32((uint32_t)(0x1014f248), (0x4u));
L_10143042:;
  /* 10143042 push 0x1014f114 */
  push32((uint32_t)(0x1014f114u));
  /* 10143047 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10143049 call dword ptr [0x101564cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564cc))), 0x1014304fu);
  /* 1014304f push 0x10156558 */
  push32((uint32_t)(0x10156558u));
  /* 10143054 call 0x10142630 */
  push32(0x10143059u); f_10142630();
  /* 10143059 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1014305b push 0x1014f244 */
  push32((uint32_t)(0x1014f244u));
  /* 10143060 call 0x10142610 */
  push32(0x10143065u); f_10142610();
  /* 10143065 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143068 mov byte ptr [0x10156148], bl */
  w8((uint32_t)(0x10156148), (BL));
  /* 1014306e mov byte ptr [0x1015614a], bl */
  w8((uint32_t)(0x1015614a), (BL));
  /* 10143074 mov byte ptr [0x1015614c], bl */
  w8((uint32_t)(0x1015614c), (BL));
  /* 1014307a mov byte ptr [0x1015614d], bl */
  w8((uint32_t)(0x1015614d), (BL));
  /* 10143080 mov byte ptr [0x101562e3], bl */
  w8((uint32_t)(0x101562e3), (BL));
  /* 10143086 mov byte ptr [0x101562e1], bl */
  w8((uint32_t)(0x101562e1), (BL));
  /* 1014308c mov byte ptr [0x101562e4], bl */
  w8((uint32_t)(0x101562e4), (BL));
  /* 10143092 mov byte ptr [0x101562e5], bl */
  w8((uint32_t)(0x101562e5), (BL));
  /* 10143098 pop esi */
  ESI = (pop32());
  /* 10143099 mov byte ptr [0x1015614b], 0 */
  w8((uint32_t)(0x1015614b), (0x0u));
  /* 101430a0 mov byte ptr [0x10156149], 0 */
  w8((uint32_t)(0x10156149), (0x0u));
  /* 101430a7 mov byte ptr [0x101562e0], 0 */
  w8((uint32_t)(0x101562e0), (0x0u));
  /* 101430ae mov byte ptr [0x101562e2], 0 */
  w8((uint32_t)(0x101562e2), (0x0u));
  /* 101430b5 mov dword ptr [0x1015660c], 0 */
  w32((uint32_t)(0x1015660c), (0x0u));
  /* 101430bf pop ebx */
  EBX = (pop32());
  /* 101430c0 ret  */
  ESPCHK(0x10142f50u, _esp0);
  ESP += 4; return;
}

/* FUN_100030d0 @ 0x101430d0 (85 bytes, 29 insns) */
void f_101430d0(void) {
  FTRACE(0x101430d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101430d0 mov eax, dword ptr [0x10155f18] */
  EAX = (r32((uint32_t)(0x10155f18)));
  /* 101430d5 push esi */
  push32((uint32_t)(ESI));
  /* 101430d6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101430d9 jg 0x10143123 */
  if ((!C.zf&&C.sf==C.of)) goto L_10143123;
  /* 101430db push 0x10153648 */
  push32((uint32_t)(0x10153648u));
  /* 101430e0 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x101430e6u);
  /* 101430e6 mov ecx, eax */
  ECX = (EAX);
  /* 101430e8 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 101430ed imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101430ef sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 101430f2 mov eax, edx */
  EAX = (EDX);
  /* 101430f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101430f7 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101430fa add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101430fc mov esi, edx */
  ESI = (EDX);
  /* 101430fe je 0x10143123 */
  if (C.zf) goto L_10143123;
  /* 10143100 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10143102 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10143104 push esi */
  push32((uint32_t)(ESI));
  /* 10143105 push 0x101536c0 */
  push32((uint32_t)(0x101536c0u));
  /* 1014310a call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143110u);
  /* 10143110 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10143112 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10143114 push esi */
  push32((uint32_t)(ESI));
  /* 10143115 push 0x10153600 */
  push32((uint32_t)(0x10153600u));
  /* 1014311a call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143120u);
  /* 10143120 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143123:;
  /* 10143123 pop esi */
  ESI = (pop32());
  /* 10143124 ret  */
  ESPCHK(0x101430d0u, _esp0);
  ESP += 4; return;
}

/* ProcessLandAI @ 0x10143130 (1 bytes, 1 insns) */
void f_10143130(void) {
  FTRACE(0x10143130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10143130 ret  */
  ESPCHK(0x10143130u, _esp0);
  ESP += 4; return;
}

/* FUN_10003140 @ 0x10143140 (157 bytes, 43 insns) */
void f_10143140(void) {
  FTRACE(0x10143140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10143140 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10143142 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10143144 push 0x10156310 */
  push32((uint32_t)(0x10156310u));
  /* 10143149 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014314fu);
  /* 1014314f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10143151 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10143153 push 0x10156318 */
  push32((uint32_t)(0x10156318u));
  /* 10143158 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014315eu);
  /* 1014315e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10143160 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10143162 push 0x10156300 */
  push32((uint32_t)(0x10156300u));
  /* 10143167 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014316du);
  /* 1014316d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014316f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10143171 push 0x10156308 */
  push32((uint32_t)(0x10156308u));
  /* 10143176 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014317cu);
  /* 1014317c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014317e push 0xa */
  push32((uint32_t)(0xau));
  /* 10143180 push 0x10156320 */
  push32((uint32_t)(0x10156320u));
  /* 10143185 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014318bu);
  /* 1014318b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014318d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1014318f push 0x10156258 */
  push32((uint32_t)(0x10156258u));
  /* 10143194 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014319au);
  /* 1014319a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014319d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014319f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101431a1 push 0x10156240 */
  push32((uint32_t)(0x10156240u));
  /* 101431a6 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101431acu);
  /* 101431ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101431ae push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101431b0 push 0x10156248 */
  push32((uint32_t)(0x10156248u));
  /* 101431b5 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101431bbu);
  /* 101431bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101431bd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101431bf push 0x10156260 */
  push32((uint32_t)(0x10156260u));
  /* 101431c4 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101431cau);
  /* 101431ca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101431cc push 0xa */
  push32((uint32_t)(0xau));
  /* 101431ce push 0x10156268 */
  push32((uint32_t)(0x10156268u));
  /* 101431d3 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101431d9u);
  /* 101431d9 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101431dc ret  */
  ESPCHK(0x10143140u, _esp0);
  ESP += 4; return;
}

/* FUN_100031e0 @ 0x101431e0 (79 bytes, 22 insns) */
void f_101431e0(void) {
  FTRACE(0x101431e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101431e0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101431e2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101431e4 push 0x101538d0 */
  push32((uint32_t)(0x101538d0u));
  /* 101431e9 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101431efu);
  /* 101431ef push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101431f1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101431f3 push 0x101538d8 */
  push32((uint32_t)(0x101538d8u));
  /* 101431f8 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101431feu);
  /* 101431fe push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10143200 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143202 push 0x101538c8 */
  push32((uint32_t)(0x101538c8u));
  /* 10143207 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014320du);
  /* 1014320d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014320f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143211 push 0x10155f38 */
  push32((uint32_t)(0x10155f38u));
  /* 10143216 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014321cu);
  /* 1014321c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014321e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143220 push 0x10155f28 */
  push32((uint32_t)(0x10155f28u));
  /* 10143225 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014322bu);
  /* 1014322b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014322e ret  */
  ESPCHK(0x101431e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003230 @ 0x10143230 (64 bytes, 18 insns) */
void f_10143230(void) {
  FTRACE(0x10143230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10143230 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10143232 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10143234 push 0x10156058 */
  push32((uint32_t)(0x10156058u));
  /* 10143239 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014323fu);
  /* 1014323f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10143241 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10143243 push 0x10156060 */
  push32((uint32_t)(0x10156060u));
  /* 10143248 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014324eu);
  /* 1014324e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10143250 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10143252 push 0x10156068 */
  push32((uint32_t)(0x10156068u));
  /* 10143257 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014325du);
  /* 1014325d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1014325f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10143261 push 0x10156070 */
  push32((uint32_t)(0x10156070u));
  /* 10143266 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014326cu);
  /* 1014326c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014326f ret  */
  ESPCHK(0x10143230u, _esp0);
  ESP += 4; return;
}

/* FUN_10003270 @ 0x10143270 (3787 bytes, 1079 insns) */
void f_10143270(void) {
  FTRACE(0x10143270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10143270 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10143273 push ebx */
  push32((uint32_t)(EBX));
  /* 10143274 push ebp */
  push32((uint32_t)(EBP));
  /* 10143275 push esi */
  push32((uint32_t)(ESI));
  /* 10143276 push edi */
  push32((uint32_t)(EDI));
  /* 10143277 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 1014327c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10143281 call dword ptr [0x101564d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d8))), 0x10143287u);
  /* 10143287 push 0 */
  push32((uint32_t)(0x0u));
  /* 10143289 call 0x10142670 */
  push32(0x1014328eu); f_10142670();
  /* 1014328e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10143290 push 0 */
  push32((uint32_t)(0x0u));
  /* 10143292 call 0x10142550 */
  push32(0x10143297u); f_10142550();
  /* 10143297 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10143299 push 0 */
  push32((uint32_t)(0x0u));
  /* 1014329b mov dword ptr [esp + 0x40], eax */
  w32((uint32_t)(ESP + 0x40), (EAX));
  /* 1014329f call 0x10142550 */
  push32(0x101432a4u); f_10142550();
  /* 101432a4 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 101432a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 101432a8 mov edi, eax */
  EDI = (EAX);
  /* 101432aa call 0x10142550 */
  push32(0x101432afu); f_10142550();
  /* 101432af push 0xe */
  push32((uint32_t)(0xeu));
  /* 101432b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101432b3 mov esi, eax */
  ESI = (EAX);
  /* 101432b5 call 0x10142550 */
  push32(0x101432bau); f_10142550();
  /* 101432ba push 0x10155fe0 */
  push32((uint32_t)(0x10155fe0u));
  /* 101432bf mov ebx, eax */
  EBX = (EAX);
  /* 101432c1 call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x101432c7u);
  /* 101432c7 sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101432ca and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101432cf add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101432d1 mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 101432d5 push 0x10156298 */
  push32((uint32_t)(0x10156298u));
  /* 101432da lea eax, [esi + ebx*4] */
  EAX = ((uint32_t)(ESI + EBX*4));
  /* 101432dd mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 101432e1 call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x101432e7u);
  /* 101432e7 push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 101432ec mov ebx, eax */
  EBX = (EAX);
  /* 101432ee call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x101432f4u);
  /* 101432f4 push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 101432f9 mov ebp, eax */
  EBP = (EAX);
  /* 101432fb call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10143301u);
  /* 10143301 push 0x10155fa8 */
  push32((uint32_t)(0x10155fa8u));
  /* 10143306 mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 1014330a call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10143310u);
  /* 10143310 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143313 mov edi, eax */
  EDI = (EAX);
  /* 10143315 push 0x10155fa8 */
  push32((uint32_t)(0x10155fa8u));
  /* 1014331a call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10143320u);
  /* 10143320 push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10143325 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 10143329 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x1014332fu);
  /* 1014332f push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10143334 mov esi, eax */
  ESI = (EAX);
  /* 10143336 call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x1014333cu);
  /* 1014333c push 0x10156298 */
  push32((uint32_t)(0x10156298u));
  /* 10143341 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 10143345 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x1014334bu);
  /* 1014334b mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 1014334f mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 10143353 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10143355 mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10143359 sub esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014335b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014335d sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014335f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10143361 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10143363 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10143365 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10143367 push 0x10155fe0 */
  push32((uint32_t)(0x10155fe0u));
  /* 1014336c add esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014336e mov dword ptr [esp + 0x38], esi */
  w32((uint32_t)(ESP + 0x38), (ESI));
  /* 10143372 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143378u);
  /* 10143378 push 3 */
  push32((uint32_t)(0x3u));
  /* 1014337a mov bl, 1 */
  BL = (0x1u);
  /* 1014337c call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143382u);
  /* 10143382 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143385 cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014338a jle 0x101433ba */
  if ((C.zf||C.sf!=C.of)) goto L_101433ba;
  /* 1014338c push 1 */
  push32((uint32_t)(0x1u));
  /* 1014338e call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143394u);
  /* 10143394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143397 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014339c jle 0x101433ba */
  if ((C.zf||C.sf!=C.of)) goto L_101433ba;
  /* 1014339e push 4 */
  push32((uint32_t)(0x4u));
  /* 101433a0 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101433a6u);
  /* 101433a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101433a9 cmp eax, 0x1b58 */
  { uint32_t _a=(EAX),_b=(0x1b58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101433ae jle 0x101433ba */
  if ((C.zf||C.sf!=C.of)) goto L_101433ba;
  /* 101433b0 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 101433b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101433b6 jne 0x101433ba */
  if (!C.zf) goto L_101433ba;
  /* 101433b8 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_101433ba:;
  /* 101433ba push 0x10156150 */
  push32((uint32_t)(0x10156150u));
  /* 101433bf call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x101433c5u);
  /* 101433c5 push 3 */
  push32((uint32_t)(0x3u));
  /* 101433c7 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 101433cb call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101433d1u);
  /* 101433d1 push 0x10156178 */
  push32((uint32_t)(0x10156178u));
  /* 101433d6 mov esi, eax */
  ESI = (EAX);
  /* 101433d8 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x101433deu);
  /* 101433de push 0x10153648 */
  push32((uint32_t)(0x10153648u));
  /* 101433e3 mov byte ptr [esp + 0x22], al */
  w8((uint32_t)(ESP + 0x22), (AL));
  /* 101433e7 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x101433edu);
  /* 101433ed push 0x101560a0 */
  push32((uint32_t)(0x101560a0u));
  /* 101433f2 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x101433f8u);
  /* 101433f8 push 0x10156370 */
  push32((uint32_t)(0x10156370u));
  /* 101433fd mov dword ptr [esp + 0x2c], eax */
  w32((uint32_t)(ESP + 0x2c), (EAX));
  /* 10143401 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10143407u);
  /* 10143407 push 0x101562f0 */
  push32((uint32_t)(0x101562f0u));
  /* 1014340c mov edi, eax */
  EDI = (EAX);
  /* 1014340e call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10143414u);
  /* 10143414 push 0x10153648 */
  push32((uint32_t)(0x10153648u));
  /* 10143419 mov ebp, eax */
  EBP = (EAX);
  /* 1014341b call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10143421u);
  /* 10143421 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10143423 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10143425 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10143427 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10143429 push 0x101560d0 */
  push32((uint32_t)(0x101560d0u));
  /* 1014342e mov dword ptr [esp + 0x44], eax */
  w32((uint32_t)(ESP + 0x44), (EAX));
  /* 10143432 mov byte ptr [esp + 0x3f], 1 */
  w8((uint32_t)(ESP + 0x3f), (0x1u));
  /* 10143437 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014343du);
  /* 1014343d push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1014343f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10143441 push 0x10156110 */
  push32((uint32_t)(0x10156110u));
  /* 10143446 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014344cu);
  /* 1014344c push 0x10153898 */
  push32((uint32_t)(0x10153898u));
  /* 10143451 call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10143457u);
  /* 10143457 push 0x10153898 */
  push32((uint32_t)(0x10153898u));
  /* 1014345c mov edi, eax */
  EDI = (EAX);
  /* 1014345e call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10143464u);
  /* 10143464 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143467 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10143469 je 0x10143470 */
  if (C.zf) goto L_10143470;
  /* 1014346b mov byte ptr [esp + 0x13], 0 */
  w8((uint32_t)(ESP + 0x13), (0x0u));
L_10143470:;
  /* 10143470 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 10143474 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 10143476 je 0x10143e3d */
  if (C.zf) goto L_10143e3d;
  /* 1014347c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014347e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10143480 push 1 */
  push32((uint32_t)(0x1u));
  /* 10143482 push 0x10155f98 */
  push32((uint32_t)(0x10155f98u));
  /* 10143487 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x1014348du);
  /* 1014348d push 0x10155f98 */
  push32((uint32_t)(0x10155f98u));
  /* 10143492 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10143498u);
  /* 10143498 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014349b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014349d je 0x10144133 */
  if (C.zf) goto L_10144133;
  /* 101434a3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101434a5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101434a7 push 0x10156338 */
  push32((uint32_t)(0x10156338u));
  /* 101434ac call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101434b2u);
  /* 101434b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101434b5 call dword ptr [0x10156530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156530))), 0x101434bbu);
  /* 101434bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101434bd jne 0x10143500 */
  if (!C.zf) goto L_10143500;
  /* 101434bf cmp esi, 0x2bc */
  { uint32_t _a=(ESI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101434c5 jle 0x101434ec */
  if ((C.zf||C.sf!=C.of)) goto L_101434ec;
  /* 101434c7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101434c9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101434cb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101434cd push 0x10156150 */
  push32((uint32_t)(0x10156150u));
  /* 101434d2 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101434d8u);
  /* 101434d8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101434da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101434dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101434de push 0x10153648 */
  push32((uint32_t)(0x10153648u));
  /* 101434e3 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101434e9u);
  /* 101434e9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101434ec:;
  /* 101434ec push 1 */
  push32((uint32_t)(0x1u));
  /* 101434ee push 1 */
  push32((uint32_t)(0x1u));
  /* 101434f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 101434f2 call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x101434f8u);
  /* 101434f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101434fb jmp 0x1014360e */
  goto L_1014360e;
L_10143500:;
  /* 10143500 push 0x10153760 */
  push32((uint32_t)(0x10153760u));
  /* 10143505 call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x1014350bu);
  /* 1014350b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014350e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10143510 je 0x1014353a */
  if (C.zf) goto L_1014353a;
  /* 10143512 cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143518 jle 0x10143522 */
  if ((C.zf||C.sf!=C.of)) goto L_10143522;
  /* 1014351a push 6 */
  push32((uint32_t)(0x6u));
  /* 1014351c push 8 */
  push32((uint32_t)(0x8u));
  /* 1014351e push 9 */
  push32((uint32_t)(0x9u));
  /* 10143520 jmp 0x10143560 */
  goto L_10143560;
L_10143522:;
  /* 10143522 cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143528 jle 0x10143532 */
  if ((C.zf||C.sf!=C.of)) goto L_10143532;
  /* 1014352a push 3 */
  push32((uint32_t)(0x3u));
  /* 1014352c push 5 */
  push32((uint32_t)(0x5u));
  /* 1014352e push 9 */
  push32((uint32_t)(0x9u));
  /* 10143530 jmp 0x10143560 */
  goto L_10143560;
L_10143532:;
  /* 10143532 push 1 */
  push32((uint32_t)(0x1u));
  /* 10143534 push 4 */
  push32((uint32_t)(0x4u));
  /* 10143536 push 9 */
  push32((uint32_t)(0x9u));
  /* 10143538 jmp 0x10143560 */
  goto L_10143560;
L_1014353a:;
  /* 1014353a cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143540 jle 0x1014354a */
  if ((C.zf||C.sf!=C.of)) goto L_1014354a;
  /* 10143542 push 8 */
  push32((uint32_t)(0x8u));
  /* 10143544 push 8 */
  push32((uint32_t)(0x8u));
  /* 10143546 push 9 */
  push32((uint32_t)(0x9u));
  /* 10143548 jmp 0x10143560 */
  goto L_10143560;
L_1014354a:;
  /* 1014354a cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143550 jle 0x1014355a */
  if ((C.zf||C.sf!=C.of)) goto L_1014355a;
  /* 10143552 push 5 */
  push32((uint32_t)(0x5u));
  /* 10143554 push 5 */
  push32((uint32_t)(0x5u));
  /* 10143556 push 9 */
  push32((uint32_t)(0x9u));
  /* 10143558 jmp 0x10143560 */
  goto L_10143560;
L_1014355a:;
  /* 1014355a push 4 */
  push32((uint32_t)(0x4u));
  /* 1014355c push 4 */
  push32((uint32_t)(0x4u));
  /* 1014355e push 0xa */
  push32((uint32_t)(0xau));
L_10143560:;
  /* 10143560 call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x10143566u);
  /* 10143566 mov al, byte ptr [esp + 0x1e] */
  AL = (r8((uint32_t)(ESP + 0x1e)));
  /* 1014356a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014356d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014356f mov edi, 0x15e */
  EDI = (0x15eu);
  /* 10143574 je 0x1014357b */
  if (C.zf) goto L_1014357b;
  /* 10143576 mov edi, 0x12c */
  EDI = (0x12cu);
L_1014357b:;
  /* 1014357b cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014357e jge 0x1014359c */
  if ((C.sf==C.of)) goto L_1014359c;
  /* 10143580 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143586 jle 0x1014359c */
  if ((C.zf||C.sf!=C.of)) goto L_1014359c;
  /* 10143588 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014358a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014358c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014358e push 0x10156150 */
  push32((uint32_t)(0x10156150u));
  /* 10143593 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143599u);
  /* 10143599 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014359c:;
  /* 1014359c cmp esi, 0xc8 */
  { uint32_t _a=(ESI),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101435a2 jle 0x101435dd */
  if ((C.zf||C.sf!=C.of)) goto L_101435dd;
  /* 101435a4 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101435a6 je 0x101435c2 */
  if (C.zf) goto L_101435c2;
  /* 101435a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101435aa push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 101435af push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101435b4 push 0x10156150 */
  push32((uint32_t)(0x10156150u));
  /* 101435b9 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101435bfu);
  /* 101435bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101435c2:;
  /* 101435c2 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101435c8 jle 0x101435dd */
  if ((C.zf||C.sf!=C.of)) goto L_101435dd;
  /* 101435ca push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101435cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101435ce push edi */
  push32((uint32_t)(EDI));
  /* 101435cf push 0x10153648 */
  push32((uint32_t)(0x10153648u));
  /* 101435d4 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101435dau);
  /* 101435da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101435dd:;
  /* 101435dd push 0x10156230 */
  push32((uint32_t)(0x10156230u));
  /* 101435e2 call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x101435e8u);
  /* 101435e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101435eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101435ed je 0x1014360e */
  if (C.zf) goto L_1014360e;
  /* 101435ef cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101435f5 jle 0x1014360e */
  if ((C.zf||C.sf!=C.of)) goto L_1014360e;
  /* 101435f7 push 0x10156298 */
  push32((uint32_t)(0x10156298u));
  /* 101435fc call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10143602u);
  /* 10143602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10143607 jle 0x1014360e */
  if ((C.zf||C.sf!=C.of)) goto L_1014360e;
  /* 10143609 call 0x10143140 */
  push32(0x1014360eu); f_10143140();
L_1014360e:;
  /* 1014360e mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 10143612 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10143614 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143617 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10143619 jge 0x1014361f */
  if ((C.sf==C.of)) goto L_1014361f;
  /* 1014361b push 5 */
  push32((uint32_t)(0x5u));
  /* 1014361d jmp 0x10143623 */
  goto L_10143623;
L_1014361f:;
  /* 1014361f add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10143622 push eax */
  push32((uint32_t)(EAX));
L_10143623:;
  /* 10143623 push 0x10155f50 */
  push32((uint32_t)(0x10155f50u));
  /* 10143628 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x1014362eu);
  /* 1014362e mov edi, dword ptr [esp + 0x38] */
  EDI = (r32((uint32_t)(ESP + 0x38)));
  /* 10143632 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143635 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143638 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1014363a jge 0x10143650 */
  if ((C.sf==C.of)) goto L_10143650;
  /* 1014363c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1014363e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10143640 push 0x101538a8 */
  push32((uint32_t)(0x101538a8u));
  /* 10143645 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x1014364bu);
  /* 1014364b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014364e jmp 0x1014368a */
  goto L_1014368a;
L_10143650:;
  /* 10143650 lea ecx, [edi + 6] */
  ECX = ((uint32_t)(EDI + 0x6));
  /* 10143653 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10143655 push ecx */
  push32((uint32_t)(ECX));
  /* 10143656 push 0x101538a8 */
  push32((uint32_t)(0x101538a8u));
  /* 1014365b call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143661u);
  /* 10143661 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10143663 lea edx, [edi + 9] */
  EDX = ((uint32_t)(EDI + 0x9));
  /* 10143666 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10143668 push edx */
  push32((uint32_t)(EDX));
  /* 10143669 push 0x101538a8 */
  push32((uint32_t)(0x101538a8u));
  /* 1014366e call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143674u);
  /* 10143674 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10143676 add edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10143679 push 0xa */
  push32((uint32_t)(0xau));
  /* 1014367b push edi */
  push32((uint32_t)(EDI));
  /* 1014367c push 0x101538a8 */
  push32((uint32_t)(0x101538a8u));
  /* 10143681 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143687u);
  /* 10143687 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014368a:;
  /* 1014368a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1014368c push 0 */
  push32((uint32_t)(0x0u));
  /* 1014368e call 0x10142550 */
  push32(0x10143693u); f_10142550();
  /* 10143693 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143696 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10143698 je 0x101436f7 */
  if (C.zf) goto L_101436f7;
  /* 1014369a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1014369c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1014369e push 0x101562a8 */
  push32((uint32_t)(0x101562a8u));
  /* 101436a3 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101436a9u);
  /* 101436a9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101436ab push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101436ad push 0x10156290 */
  push32((uint32_t)(0x10156290u));
  /* 101436b2 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101436b8u);
  /* 101436b8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101436ba push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101436bc push 0x101562a0 */
  push32((uint32_t)(0x101562a0u));
  /* 101436c1 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101436c7u);
  /* 101436c7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101436c9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101436cb push 0x10156280 */
  push32((uint32_t)(0x10156280u));
  /* 101436d0 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101436d6u);
  /* 101436d6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101436d8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101436da push 0x10156288 */
  push32((uint32_t)(0x10156288u));
  /* 101436df call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101436e5u);
  /* 101436e5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101436e7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101436e9 push 0x10156278 */
  push32((uint32_t)(0x10156278u));
  /* 101436ee call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101436f4u);
  /* 101436f4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101436f7:;
  /* 101436f7 push 0xa */
  push32((uint32_t)(0xau));
  /* 101436f9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101436fb push 3 */
  push32((uint32_t)(0x3u));
  /* 101436fd push 0x10153860 */
  push32((uint32_t)(0x10153860u));
  /* 10143702 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143708u);
  /* 10143708 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014370a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014370c push 1 */
  push32((uint32_t)(0x1u));
  /* 1014370e push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 10143713 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143719u);
  /* 10143719 push 5 */
  push32((uint32_t)(0x5u));
  /* 1014371b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1014371d push 2 */
  push32((uint32_t)(0x2u));
  /* 1014371f push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 10143724 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x1014372au);
  /* 1014372a mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 1014372e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143731 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10143733 jne 0x10143749 */
  if (!C.zf) goto L_10143749;
  /* 10143735 push 5 */
  push32((uint32_t)(0x5u));
  /* 10143737 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10143739 push 3 */
  push32((uint32_t)(0x3u));
  /* 1014373b push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 10143740 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143746u);
  /* 10143746 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143749:;
  /* 10143749 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014374b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014374d push 1 */
  push32((uint32_t)(0x1u));
  /* 1014374f push 0x101561a8 */
  push32((uint32_t)(0x101561a8u));
  /* 10143754 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x1014375au);
  /* 1014375a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014375c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014375e push 1 */
  push32((uint32_t)(0x1u));
  /* 10143760 push 0x10156210 */
  push32((uint32_t)(0x10156210u));
  /* 10143765 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x1014376bu);
  /* 1014376b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1014376d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1014376f push 1 */
  push32((uint32_t)(0x1u));
  /* 10143771 push 0x10155f90 */
  push32((uint32_t)(0x10155f90u));
  /* 10143776 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x1014377cu);
  /* 1014377c push 5 */
  push32((uint32_t)(0x5u));
  /* 1014377e push 0xa */
  push32((uint32_t)(0xau));
  /* 10143780 push 2 */
  push32((uint32_t)(0x2u));
  /* 10143782 push 0x101561a8 */
  push32((uint32_t)(0x101561a8u));
  /* 10143787 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x1014378du);
  /* 1014378d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143790 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143792 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10143794 push 1 */
  push32((uint32_t)(0x1u));
  /* 10143796 push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 1014379b call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101437a1u);
  /* 101437a1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101437a3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101437a5 push 0x10153620 */
  push32((uint32_t)(0x10153620u));
  /* 101437aa call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101437b0u);
  /* 101437b0 push 0x10155ee0 */
  push32((uint32_t)(0x10155ee0u));
  /* 101437b5 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x101437bbu);
  /* 101437bb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101437be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101437c0 jle 0x101437e7 */
  if ((C.zf||C.sf!=C.of)) goto L_101437e7;
  /* 101437c2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101437c4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101437c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101437c8 push 0x10153838 */
  push32((uint32_t)(0x10153838u));
  /* 101437cd call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101437d3u);
  /* 101437d3 push 3 */
  push32((uint32_t)(0x3u));
  /* 101437d5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101437d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101437d9 push 0x101560b8 */
  push32((uint32_t)(0x101560b8u));
  /* 101437de call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101437e4u);
  /* 101437e4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101437e7:;
  /* 101437e7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101437e9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101437eb push 1 */
  push32((uint32_t)(0x1u));
  /* 101437ed push 0x10155ee0 */
  push32((uint32_t)(0x10155ee0u));
  /* 101437f2 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101437f8u);
  /* 101437f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101437fb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101437fd jne 0x10143813 */
  if (!C.zf) goto L_10143813;
  /* 101437ff push 0xa */
  push32((uint32_t)(0xau));
  /* 10143801 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10143803 push 1 */
  push32((uint32_t)(0x1u));
  /* 10143805 push 0x10155fa8 */
  push32((uint32_t)(0x10155fa8u));
  /* 1014380a call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143810u);
  /* 10143810 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143813:;
  /* 10143813 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143815 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143817 push 1 */
  push32((uint32_t)(0x1u));
  /* 10143819 push 0x101535d8 */
  push32((uint32_t)(0x101535d8u));
  /* 1014381e call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143824u);
  /* 10143824 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143827 cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014382a jle 0x10143840 */
  if ((C.zf||C.sf!=C.of)) goto L_10143840;
  /* 1014382c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1014382e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10143830 push 2 */
  push32((uint32_t)(0x2u));
  /* 10143832 push 0x10155f98 */
  push32((uint32_t)(0x10155f98u));
  /* 10143837 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x1014383du);
  /* 1014383d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143840:;
  /* 10143840 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10143842 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143844 push 1 */
  push32((uint32_t)(0x1u));
  /* 10143846 push 0x10156218 */
  push32((uint32_t)(0x10156218u));
  /* 1014384b call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143851u);
  /* 10143851 push 5 */
  push32((uint32_t)(0x5u));
  /* 10143853 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10143855 push 2 */
  push32((uint32_t)(0x2u));
  /* 10143857 push 0x10156218 */
  push32((uint32_t)(0x10156218u));
  /* 1014385c call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143862u);
  /* 10143862 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10143864 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143866 push 0x10156038 */
  push32((uint32_t)(0x10156038u));
  /* 1014386b call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143871u);
  /* 10143871 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10143873 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143875 push 0x10155ff0 */
  push32((uint32_t)(0x10155ff0u));
  /* 1014387a call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143880u);
  /* 10143880 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10143882 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143884 push 0x10155ff8 */
  push32((uint32_t)(0x10155ff8u));
  /* 10143889 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014388fu);
  /* 1014388f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143892 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10143894 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143896 push 0x10156000 */
  push32((uint32_t)(0x10156000u));
  /* 1014389b call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101438a1u);
  /* 101438a1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101438a3 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101438a5 push 0x10156230 */
  push32((uint32_t)(0x10156230u));
  /* 101438aa call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101438b0u);
  /* 101438b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101438b2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101438b4 push 0x10156178 */
  push32((uint32_t)(0x10156178u));
  /* 101438b9 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101438bfu);
  /* 101438bf push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101438c1 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101438c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101438c5 push 0x10156298 */
  push32((uint32_t)(0x10156298u));
  /* 101438ca call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101438d0u);
  /* 101438d0 push 5 */
  push32((uint32_t)(0x5u));
  /* 101438d2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101438d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101438d6 push 0x10156298 */
  push32((uint32_t)(0x10156298u));
  /* 101438db call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101438e1u);
  /* 101438e1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101438e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 101438e6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101438e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 101438ea push 0x10156298 */
  push32((uint32_t)(0x10156298u));
  /* 101438ef call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101438f5u);
  /* 101438f5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101438f7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101438f9 push 5 */
  push32((uint32_t)(0x5u));
  /* 101438fb push 0x10156298 */
  push32((uint32_t)(0x10156298u));
  /* 10143900 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143906u);
  /* 10143906 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10143908 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1014390a push 0x10153918 */
  push32((uint32_t)(0x10153918u));
  /* 1014390f call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143915u);
  /* 10143915 call 0x10142540 */
  push32(0x1014391au); f_10142540();
  /* 1014391a push 0x10156230 */
  push32((uint32_t)(0x10156230u));
  /* 1014391f mov edi, eax */
  EDI = (EAX);
  /* 10143921 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10143927u);
  /* 10143927 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014392a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014392c je 0x1014394f */
  if (C.zf) goto L_1014394f;
  /* 1014392e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143930 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143932 push 0x10153918 */
  push32((uint32_t)(0x10153918u));
  /* 10143937 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014393du);
  /* 1014393d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014393f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10143941 push 0x10153830 */
  push32((uint32_t)(0x10153830u));
  /* 10143946 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014394cu);
  /* 1014394c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014394f:;
  /* 1014394f push 0x10153918 */
  push32((uint32_t)(0x10153918u));
  /* 10143954 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x1014395au);
  /* 1014395a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014395d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014395f je 0x10143987 */
  if (C.zf) goto L_10143987;
  /* 10143961 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143963 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143965 push 0x10153900 */
  push32((uint32_t)(0x10153900u));
  /* 1014396a call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143970u);
  /* 10143970 push 0xa */
  push32((uint32_t)(0xau));
  /* 10143972 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10143974 push 0x10153840 */
  push32((uint32_t)(0x10153840u));
  /* 10143979 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014397fu);
  /* 1014397f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143982 call 0x10143230 */
  push32(0x10143987u); f_10143230();
L_10143987:;
  /* 10143987 push 0x10156070 */
  push32((uint32_t)(0x10156070u));
  /* 1014398c call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10143992u);
  /* 10143992 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143995 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10143997 je 0x101439be */
  if (C.zf) goto L_101439be;
  /* 10143999 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1014399b push 0xa */
  push32((uint32_t)(0xau));
  /* 1014399d push 0xa */
  push32((uint32_t)(0xau));
  /* 1014399f push 0x10153628 */
  push32((uint32_t)(0x10153628u));
  /* 101439a4 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101439aau);
  /* 101439aa push 0xa */
  push32((uint32_t)(0xau));
  /* 101439ac push 3 */
  push32((uint32_t)(0x3u));
  /* 101439ae push 0xf */
  push32((uint32_t)(0xfu));
  /* 101439b0 push 0x10153628 */
  push32((uint32_t)(0x10153628u));
  /* 101439b5 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101439bbu);
  /* 101439bb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101439be:;
  /* 101439be push 0 */
  push32((uint32_t)(0x0u));
  /* 101439c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 101439c2 call 0x10142500 */
  push32(0x101439c7u); f_10142500();
  /* 101439c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101439c9 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101439cfu);
  /* 101439cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101439d2 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101439d7 jle 0x10143a1b */
  if ((C.zf||C.sf!=C.of)) goto L_10143a1b;
  /* 101439d9 push 0x10153760 */
  push32((uint32_t)(0x10153760u));
  /* 101439de call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x101439e4u);
  /* 101439e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101439e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101439e9 je 0x10143a1b */
  if (C.zf) goto L_10143a1b;
  /* 101439eb push 1 */
  push32((uint32_t)(0x1u));
  /* 101439ed call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101439f3u);
  /* 101439f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101439f6 cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101439fb jge 0x10143a1b */
  if ((C.sf==C.of)) goto L_10143a1b;
  /* 101439fd push 0x10153918 */
  push32((uint32_t)(0x10153918u));
  /* 10143a02 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10143a08u);
  /* 10143a08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143a0b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10143a0d jne 0x10143a1b */
  if (!C.zf) goto L_10143a1b;
  /* 10143a0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10143a11 push 1 */
  push32((uint32_t)(0x1u));
  /* 10143a13 call 0x10142500 */
  push32(0x10143a18u); f_10142500();
  /* 10143a18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143a1b:;
  /* 10143a1b push 0x10153918 */
  push32((uint32_t)(0x10153918u));
  /* 10143a20 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10143a26u);
  /* 10143a26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143a29 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10143a2b je 0x10143bac */
  if (C.zf) goto L_10143bac;
  /* 10143a31 push 0x101560b0 */
  push32((uint32_t)(0x101560b0u));
  /* 10143a36 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10143a3cu);
  /* 10143a3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143a3f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10143a41 je 0x10143bac */
  if (C.zf) goto L_10143bac;
  /* 10143a47 push 0x10156178 */
  push32((uint32_t)(0x10156178u));
  /* 10143a4c call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10143a52u);
  /* 10143a52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143a55 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10143a57 je 0x10143bac */
  if (C.zf) goto L_10143bac;
  /* 10143a5d cmp edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143a60 je 0x10143a67 */
  if (C.zf) goto L_10143a67;
  /* 10143a62 cmp edi, 0x12 */
  { uint32_t _a=(EDI),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143a65 jne 0x10143a97 */
  if (!C.zf) goto L_10143a97;
L_10143a67:;
  /* 10143a67 push 3 */
  push32((uint32_t)(0x3u));
  /* 10143a69 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143a6fu);
  /* 10143a6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143a72 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143a77 jle 0x10143a97 */
  if ((C.zf||C.sf!=C.of)) goto L_10143a97;
  /* 10143a79 push 1 */
  push32((uint32_t)(0x1u));
  /* 10143a7b call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143a81u);
  /* 10143a81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143a84 cmp eax, 0x2008 */
  { uint32_t _a=(EAX),_b=(0x2008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143a89 jge 0x10143a97 */
  if ((C.sf==C.of)) goto L_10143a97;
  /* 10143a8b push 1 */
  push32((uint32_t)(0x1u));
  /* 10143a8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10143a8f call 0x10142500 */
  push32(0x10143a94u); f_10142500();
  /* 10143a94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143a97:;
  /* 10143a97 push 0x10155fe0 */
  push32((uint32_t)(0x10155fe0u));
  /* 10143a9c call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10143aa2u);
  /* 10143aa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143aa5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10143aa7 jne 0x10143ad9 */
  if (!C.zf) goto L_10143ad9;
  /* 10143aa9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10143aab call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143ab1u);
  /* 10143ab1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143ab4 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143ab9 jle 0x10143ad9 */
  if ((C.zf||C.sf!=C.of)) goto L_10143ad9;
  /* 10143abb push 1 */
  push32((uint32_t)(0x1u));
  /* 10143abd call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143ac3u);
  /* 10143ac3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143ac6 cmp eax, 0x2af8 */
  { uint32_t _a=(EAX),_b=(0x2af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143acb jge 0x10143ad9 */
  if ((C.sf==C.of)) goto L_10143ad9;
  /* 10143acd push 1 */
  push32((uint32_t)(0x1u));
  /* 10143acf push 1 */
  push32((uint32_t)(0x1u));
  /* 10143ad1 call 0x10142500 */
  push32(0x10143ad6u); f_10142500();
  /* 10143ad6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143ad9:;
  /* 10143ad9 push 0x10155fe0 */
  push32((uint32_t)(0x10155fe0u));
  /* 10143ade call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10143ae4u);
  /* 10143ae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143ae7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10143ae9 je 0x10143bac */
  if (C.zf) goto L_10143bac;
  /* 10143aef cmp edi, 0x1c */
  { uint32_t _a=(EDI),_b=(0x1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143af2 jne 0x10143b32 */
  if (!C.zf) goto L_10143b32;
  /* 10143af4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10143af6 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143afcu);
  /* 10143afc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143aff cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143b04 jle 0x10143c07 */
  if ((C.zf||C.sf!=C.of)) goto L_10143c07;
  /* 10143b0a push 4 */
  push32((uint32_t)(0x4u));
  /* 10143b0c call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143b12u);
  /* 10143b12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143b15 cmp eax, 0x1c84 */
  { uint32_t _a=(EAX),_b=(0x1c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143b1a jle 0x10143c07 */
  if ((C.zf||C.sf!=C.of)) goto L_10143c07;
  /* 10143b20 push 1 */
  push32((uint32_t)(0x1u));
  /* 10143b22 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143b28u);
  /* 10143b28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143b2b cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143b30 jmp 0x10143b9c */
  goto L_10143b9c;
L_10143b32:;
  /* 10143b32 cmp edi, 0x28 */
  { uint32_t _a=(EDI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143b35 jne 0x10143b75 */
  if (!C.zf) goto L_10143b75;
  /* 10143b37 push 3 */
  push32((uint32_t)(0x3u));
  /* 10143b39 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143b3fu);
  /* 10143b3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143b42 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143b47 jle 0x10143c07 */
  if ((C.zf||C.sf!=C.of)) goto L_10143c07;
  /* 10143b4d push 4 */
  push32((uint32_t)(0x4u));
  /* 10143b4f call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143b55u);
  /* 10143b55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143b58 cmp eax, 0x2648 */
  { uint32_t _a=(EAX),_b=(0x2648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143b5d jle 0x10143c07 */
  if ((C.zf||C.sf!=C.of)) goto L_10143c07;
  /* 10143b63 push 1 */
  push32((uint32_t)(0x1u));
  /* 10143b65 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143b6bu);
  /* 10143b6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143b6e cmp eax, 0x5dc0 */
  { uint32_t _a=(EAX),_b=(0x5dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143b73 jmp 0x10143b9c */
  goto L_10143b9c;
L_10143b75:;
  /* 10143b75 cmp edi, 0x37 */
  { uint32_t _a=(EDI),_b=(0x37u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143b78 jne 0x10143bac */
  if (!C.zf) goto L_10143bac;
  /* 10143b7a push 3 */
  push32((uint32_t)(0x3u));
  /* 10143b7c call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143b82u);
  /* 10143b82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143b85 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143b8a jle 0x10143c07 */
  if ((C.zf||C.sf!=C.of)) goto L_10143c07;
  /* 10143b8c push 1 */
  push32((uint32_t)(0x1u));
  /* 10143b8e call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143b94u);
  /* 10143b94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143b97 cmp eax, 0x6590 */
  { uint32_t _a=(EAX),_b=(0x6590u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10143b9c:;
  /* 10143b9c jge 0x10143c07 */
  if ((C.sf==C.of)) goto L_10143c07;
  /* 10143b9e push 1 */
  push32((uint32_t)(0x1u));
  /* 10143ba0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10143ba2 call 0x10142500 */
  push32(0x10143ba7u); f_10142500();
  /* 10143ba7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143baa jmp 0x10143c07 */
  goto L_10143c07;
L_10143bac:;
  /* 10143bac cmp edi, 0x5f */
  { uint32_t _a=(EDI),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143baf jne 0x10143c07 */
  if (!C.zf) goto L_10143c07;
  /* 10143bb1 push 0xa */
  push32((uint32_t)(0xau));
  /* 10143bb3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10143bb5 push 0x10153728 */
  push32((uint32_t)(0x10153728u));
  /* 10143bba call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143bc0u);
  /* 10143bc0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10143bc2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10143bc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10143bc6 push 0x10156358 */
  push32((uint32_t)(0x10156358u));
  /* 10143bcb call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143bd1u);
  /* 10143bd1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10143bd3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10143bd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10143bd7 push 0x10156358 */
  push32((uint32_t)(0x10156358u));
  /* 10143bdc call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143be2u);
  /* 10143be2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10143be4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10143be6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10143be8 push 0x10156358 */
  push32((uint32_t)(0x10156358u));
  /* 10143bed call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143bf3u);
  /* 10143bf3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10143bf5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10143bf7 push 5 */
  push32((uint32_t)(0x5u));
  /* 10143bf9 push 0x10156358 */
  push32((uint32_t)(0x10156358u));
  /* 10143bfe call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143c04u);
  /* 10143c04 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143c07:;
  /* 10143c07 cmp ebp, 0x50 */
  { uint32_t _a=(EBP),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143c0a jle 0x10143c63 */
  if ((C.zf||C.sf!=C.of)) goto L_10143c63;
  /* 10143c0c mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 10143c10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10143c12 je 0x10143c63 */
  if (C.zf) goto L_10143c63;
  /* 10143c14 push 0xa */
  push32((uint32_t)(0xau));
  /* 10143c16 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10143c18 push 1 */
  push32((uint32_t)(0x1u));
  /* 10143c1a push 0x10153898 */
  push32((uint32_t)(0x10153898u));
  /* 10143c1f call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143c25u);
  /* 10143c25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143c28 cmp ebp, 0x5f */
  { uint32_t _a=(EBP),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143c2b jle 0x10143c63 */
  if ((C.zf||C.sf!=C.of)) goto L_10143c63;
  /* 10143c2d push 0xa */
  push32((uint32_t)(0xau));
  /* 10143c2f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10143c31 push 2 */
  push32((uint32_t)(0x2u));
  /* 10143c33 push 0x10153898 */
  push32((uint32_t)(0x10153898u));
  /* 10143c38 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143c3eu);
  /* 10143c3e push 0xa */
  push32((uint32_t)(0xau));
  /* 10143c40 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10143c42 push 3 */
  push32((uint32_t)(0x3u));
  /* 10143c44 push 0x10153898 */
  push32((uint32_t)(0x10153898u));
  /* 10143c49 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143c4fu);
  /* 10143c4f push 0xa */
  push32((uint32_t)(0xau));
  /* 10143c51 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10143c53 push 4 */
  push32((uint32_t)(0x4u));
  /* 10143c55 push 0x10153898 */
  push32((uint32_t)(0x10153898u));
  /* 10143c5a call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143c60u);
  /* 10143c60 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143c63:;
  /* 10143c63 mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
  /* 10143c67 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10143c69 je 0x10143ca7 */
  if (C.zf) goto L_10143ca7;
  /* 10143c6b push 0x10156230 */
  push32((uint32_t)(0x10156230u));
  /* 10143c70 call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10143c76u);
  /* 10143c76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143c79 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10143c7b je 0x10143ca7 */
  if (C.zf) goto L_10143ca7;
  /* 10143c7d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10143c7f push 1 */
  push32((uint32_t)(0x1u));
  /* 10143c81 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10143c83 push 0x10156120 */
  push32((uint32_t)(0x10156120u));
  /* 10143c88 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143c8eu);
  /* 10143c8e push 0x10156158 */
  push32((uint32_t)(0x10156158u));
  /* 10143c93 call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10143c99u);
  /* 10143c99 push 0x10156070 */
  push32((uint32_t)(0x10156070u));
  /* 10143c9e call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10143ca4u);
  /* 10143ca4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143ca7:;
  /* 10143ca7 push 0x101535d8 */
  push32((uint32_t)(0x101535d8u));
  /* 10143cac call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10143cb2u);
  /* 10143cb2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143cb4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143cb6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10143cb8 push 0x101561b0 */
  push32((uint32_t)(0x101561b0u));
  /* 10143cbd call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143cc3u);
  /* 10143cc3 push 0x101560b0 */
  push32((uint32_t)(0x101560b0u));
  /* 10143cc8 call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10143cceu);
  /* 10143cce add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143cd1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10143cd3 je 0x10143ce9 */
  if (C.zf) goto L_10143ce9;
  /* 10143cd5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143cd7 push 0xa */
  push32((uint32_t)(0xau));
  /* 10143cd9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10143cdb push 0x101561b0 */
  push32((uint32_t)(0x101561b0u));
  /* 10143ce0 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143ce6u);
  /* 10143ce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143ce9:;
  /* 10143ce9 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10143ceb je 0x10143dd5 */
  if (C.zf) goto L_10143dd5;
  /* 10143cf1 push 0x10156230 */
  push32((uint32_t)(0x10156230u));
  /* 10143cf6 call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10143cfcu);
  /* 10143cfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143cff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10143d01 je 0x10143dd5 */
  if (C.zf) goto L_10143dd5;
  /* 10143d07 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10143d09 jne 0x10143d41 */
  if (!C.zf) goto L_10143d41;
  /* 10143d0b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10143d0d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143d0f push 2 */
  push32((uint32_t)(0x2u));
  /* 10143d11 push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10143d16 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143d1cu);
  /* 10143d1c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10143d1e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143d20 push 3 */
  push32((uint32_t)(0x3u));
  /* 10143d22 push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10143d27 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143d2du);
  /* 10143d2d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10143d2f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143d31 push 4 */
  push32((uint32_t)(0x4u));
  /* 10143d33 push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10143d38 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143d3eu);
  /* 10143d3e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143d41:;
  /* 10143d41 push 0x101560a0 */
  push32((uint32_t)(0x101560a0u));
  /* 10143d46 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10143d4cu);
  /* 10143d4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143d4f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143d52 jle 0x10143d75 */
  if ((C.zf||C.sf!=C.of)) goto L_10143d75;
  /* 10143d54 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10143d56 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143d58 push 0x101561c8 */
  push32((uint32_t)(0x101561c8u));
  /* 10143d5d call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143d63u);
  /* 10143d63 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10143d65 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10143d67 push 0x101561d0 */
  push32((uint32_t)(0x101561d0u));
  /* 10143d6c call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143d72u);
  /* 10143d72 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143d75:;
  /* 10143d75 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143d77 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10143d79 push 0x101560b0 */
  push32((uint32_t)(0x101560b0u));
  /* 10143d7e call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143d84u);
  /* 10143d84 push 0x101538c8 */
  push32((uint32_t)(0x101538c8u));
  /* 10143d89 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10143d8fu);
  /* 10143d8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143d92 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10143d94 je 0x10143dd5 */
  if (C.zf) goto L_10143dd5;
  /* 10143d96 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143d98 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143d9a push 0x10156128 */
  push32((uint32_t)(0x10156128u));
  /* 10143d9f call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143da5u);
  /* 10143da5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143da7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143da9 push 0x10156138 */
  push32((uint32_t)(0x10156138u));
  /* 10143dae call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143db4u);
  /* 10143db4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143db6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10143db8 push 0x10156140 */
  push32((uint32_t)(0x10156140u));
  /* 10143dbd call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143dc3u);
  /* 10143dc3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143dc5 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10143dc7 push 0x10156130 */
  push32((uint32_t)(0x10156130u));
  /* 10143dcc call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143dd2u);
  /* 10143dd2 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143dd5:;
  /* 10143dd5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10143dd7 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10143dd9 push 0x10153760 */
  push32((uint32_t)(0x10153760u));
  /* 10143dde call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143de4u);
  /* 10143de4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143de6 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10143de8 push 0x101538a0 */
  push32((uint32_t)(0x101538a0u));
  /* 10143ded call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143df3u);
  /* 10143df3 push 0x10156210 */
  push32((uint32_t)(0x10156210u));
  /* 10143df8 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10143dfeu);
  /* 10143dfe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143e01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143e04 jle 0x10143e41 */
  if ((C.zf||C.sf!=C.of)) goto L_10143e41;
  /* 10143e06 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10143e0a cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143e0f jle 0x10143e41 */
  if ((C.zf||C.sf!=C.of)) goto L_10143e41;
  /* 10143e11 lea ecx, [eax - 0x32] */
  ECX = ((uint32_t)(EAX + -0x32));
  /* 10143e14 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10143e18 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10143e1b cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143e1d jge 0x10143e36 */
  if ((C.sf==C.of)) goto L_10143e36;
  /* 10143e1f push 0xa */
  push32((uint32_t)(0xau));
  /* 10143e21 push 0xa */
  push32((uint32_t)(0xau));
  /* 10143e23 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10143e28 push 0x101560a0 */
  push32((uint32_t)(0x101560a0u));
  /* 10143e2d call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143e33u);
  /* 10143e33 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143e36:;
  /* 10143e36 call 0x101431e0 */
  push32(0x10143e3bu); f_101431e0();
  /* 10143e3b jmp 0x10143e41 */
  goto L_10143e41;
L_10143e3d:;
  /* 10143e3d mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
L_10143e41:;
  /* 10143e41 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10143e43 je 0x10143e86 */
  if (C.zf) goto L_10143e86;
  /* 10143e45 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143e47 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10143e49 push 0x101535f0 */
  push32((uint32_t)(0x101535f0u));
  /* 10143e4e call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143e54u);
  /* 10143e54 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143e56 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10143e58 push 0x101536c8 */
  push32((uint32_t)(0x101536c8u));
  /* 10143e5d call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143e63u);
  /* 10143e63 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143e65 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10143e67 push 0x101535e8 */
  push32((uint32_t)(0x101535e8u));
  /* 10143e6c call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143e72u);
  /* 10143e72 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143e74 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10143e76 push 2 */
  push32((uint32_t)(0x2u));
  /* 10143e78 push 0x10156210 */
  push32((uint32_t)(0x10156210u));
  /* 10143e7d call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10143e83u);
  /* 10143e83 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143e86:;
  /* 10143e86 push 0x10153760 */
  push32((uint32_t)(0x10153760u));
  /* 10143e8b call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10143e91u);
  /* 10143e91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143e94 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10143e96 je 0x10143eb9 */
  if (C.zf) goto L_10143eb9;
  /* 10143e98 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143e9a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10143e9c push 0x101561b8 */
  push32((uint32_t)(0x101561b8u));
  /* 10143ea1 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143ea7u);
  /* 10143ea7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10143ea9 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10143eab push 0x101561c0 */
  push32((uint32_t)(0x101561c0u));
  /* 10143eb0 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10143eb6u);
  /* 10143eb6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143eb9:;
  /* 10143eb9 push 0x10153838 */
  push32((uint32_t)(0x10153838u));
  /* 10143ebe call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10143ec4u);
  /* 10143ec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143ec7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10143ec9 je 0x10144133 */
  if (C.zf) goto L_10144133;
  /* 10143ecf push 0x10155ee0 */
  push32((uint32_t)(0x10155ee0u));
  /* 10143ed4 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10143edau);
  /* 10143eda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143edd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10143edf je 0x10143f3a */
  if (C.zf) goto L_10143f3a;
  /* 10143ee1 push 0x10156230 */
  push32((uint32_t)(0x10156230u));
  /* 10143ee6 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10143eecu);
  /* 10143eec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143eef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10143ef1 jne 0x10143f3a */
  if (!C.zf) goto L_10143f3a;
  /* 10143ef3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10143ef5 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143efbu);
  /* 10143efb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143efe cmp eax, 0x320 */
  { uint32_t _a=(EAX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143f03 jle 0x10143f3a */
  if ((C.zf||C.sf!=C.of)) goto L_10143f3a;
  /* 10143f05 push 3 */
  push32((uint32_t)(0x3u));
  /* 10143f07 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143f0du);
  /* 10143f0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143f10 cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143f15 jge 0x10143f3a */
  if ((C.sf==C.of)) goto L_10143f3a;
  /* 10143f17 push 4 */
  push32((uint32_t)(0x4u));
  /* 10143f19 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143f1fu);
  /* 10143f1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143f22 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143f27 jle 0x10143f3a */
  if ((C.zf||C.sf!=C.of)) goto L_10143f3a;
  /* 10143f29 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10143f2e push 3 */
  push32((uint32_t)(0x3u));
  /* 10143f30 push 4 */
  push32((uint32_t)(0x4u));
  /* 10143f32 call 0x10142520 */
  push32(0x10143f37u); f_10142520();
  /* 10143f37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143f3a:;
  /* 10143f3a push 3 */
  push32((uint32_t)(0x3u));
  /* 10143f3c call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143f42u);
  /* 10143f42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143f45 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143f4a jge 0x10143f6f */
  if ((C.sf==C.of)) goto L_10143f6f;
  /* 10143f4c push 2 */
  push32((uint32_t)(0x2u));
  /* 10143f4e call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143f54u);
  /* 10143f54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143f57 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143f5c jle 0x10143f6f */
  if ((C.zf||C.sf!=C.of)) goto L_10143f6f;
  /* 10143f5e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10143f63 push 3 */
  push32((uint32_t)(0x3u));
  /* 10143f65 push 2 */
  push32((uint32_t)(0x2u));
  /* 10143f67 call 0x10142520 */
  push32(0x10143f6cu); f_10142520();
  /* 10143f6c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143f6f:;
  /* 10143f6f push 0x101561b8 */
  push32((uint32_t)(0x101561b8u));
  /* 10143f74 call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10143f7au);
  /* 10143f7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143f7d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10143f7f je 0x101440a7 */
  if (C.zf) goto L_101440a7;
  /* 10143f85 push 0x101561c0 */
  push32((uint32_t)(0x101561c0u));
  /* 10143f8a call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10143f90u);
  /* 10143f90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143f93 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10143f95 je 0x101440a7 */
  if (C.zf) goto L_101440a7;
  /* 10143f9b push 2 */
  push32((uint32_t)(0x2u));
  /* 10143f9d call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143fa3u);
  /* 10143fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143fa6 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143fab jle 0x10143fbe */
  if ((C.zf||C.sf!=C.of)) goto L_10143fbe;
  /* 10143fad push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 10143fb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10143fb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10143fb6 call 0x10142520 */
  push32(0x10143fbbu); f_10142520();
  /* 10143fbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10143fbe:;
  /* 10143fbe push 0 */
  push32((uint32_t)(0x0u));
  /* 10143fc0 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143fc6u);
  /* 10143fc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143fc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10143fcb je 0x101440ca */
  if (C.zf) goto L_101440ca;
  /* 10143fd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10143fd3 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143fd9u);
  /* 10143fd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143fdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10143fde je 0x1014404b */
  if (C.zf) goto L_1014404b;
  /* 10143fe0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10143fe2 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143fe8u);
  /* 10143fe8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10143feb cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10143ff0 jge 0x1014404b */
  if ((C.sf==C.of)) goto L_1014404b;
  /* 10143ff2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10143ff4 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10143ffau);
  /* 10143ffa push 5 */
  push32((uint32_t)(0x5u));
  /* 10143ffc mov esi, eax */
  ESI = (EAX);
  /* 10143ffe call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144004u);
  /* 10144004 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144007 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144009 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1014400e jge 0x1014402f */
  if ((C.sf==C.of)) goto L_1014402f;
  /* 10144010 push 5 */
  push32((uint32_t)(0x5u));
  /* 10144012 push 2 */
  push32((uint32_t)(0x2u));
  /* 10144014 call 0x10142520 */
  push32(0x10144019u); f_10142520();
  /* 10144019 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1014401e push 4 */
  push32((uint32_t)(0x4u));
  /* 10144020 push 2 */
  push32((uint32_t)(0x2u));
  /* 10144022 call 0x10142520 */
  push32(0x10144027u); f_10142520();
  /* 10144027 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014402a jmp 0x101440ca */
  goto L_101440ca;
L_1014402f:;
  /* 1014402f push 4 */
  push32((uint32_t)(0x4u));
  /* 10144031 push 2 */
  push32((uint32_t)(0x2u));
  /* 10144033 call 0x10142520 */
  push32(0x10144038u); f_10142520();
  /* 10144038 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 1014403d push 5 */
  push32((uint32_t)(0x5u));
  /* 1014403f push 2 */
  push32((uint32_t)(0x2u));
  /* 10144041 call 0x10142520 */
  push32(0x10144046u); f_10142520();
  /* 10144046 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144049 jmp 0x101440ca */
  goto L_101440ca;
L_1014404b:;
  /* 1014404b push 5 */
  push32((uint32_t)(0x5u));
  /* 1014404d call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144053u);
  /* 10144053 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144056 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014405b jge 0x1014407d */
  if ((C.sf==C.of)) goto L_1014407d;
  /* 1014405d push 0 */
  push32((uint32_t)(0x0u));
  /* 1014405f call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144065u);
  /* 10144065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144068 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014406a je 0x1014407d */
  if (C.zf) goto L_1014407d;
  /* 1014406c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10144071 push 5 */
  push32((uint32_t)(0x5u));
  /* 10144073 push 2 */
  push32((uint32_t)(0x2u));
  /* 10144075 call 0x10142520 */
  push32(0x1014407au); f_10142520();
  /* 1014407a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014407d:;
  /* 1014407d push 5 */
  push32((uint32_t)(0x5u));
  /* 1014407f call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144085u);
  /* 10144085 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144088 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014408d jge 0x101440ca */
  if ((C.sf==C.of)) goto L_101440ca;
  /* 1014408f push 0 */
  push32((uint32_t)(0x0u));
  /* 10144091 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144097u);
  /* 10144097 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014409a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014409c je 0x101440ca */
  if (C.zf) goto L_101440ca;
  /* 1014409e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 101440a3 push 5 */
  push32((uint32_t)(0x5u));
  /* 101440a5 jmp 0x101440c0 */
  goto L_101440c0;
L_101440a7:;
  /* 101440a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 101440a9 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101440afu);
  /* 101440af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101440b2 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101440b7 jle 0x101440ca */
  if ((C.zf||C.sf!=C.of)) goto L_101440ca;
  /* 101440b9 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 101440be push 1 */
  push32((uint32_t)(0x1u));
L_101440c0:;
  /* 101440c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 101440c2 call 0x10142520 */
  push32(0x101440c7u); f_10142520();
  /* 101440c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101440ca:;
  /* 101440ca push 0 */
  push32((uint32_t)(0x0u));
  /* 101440cc call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101440d2u);
  /* 101440d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101440d5 cmp eax, 0x249f0 */
  { uint32_t _a=(EAX),_b=(0x249f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101440da jle 0x101440ed */
  if ((C.zf||C.sf!=C.of)) goto L_101440ed;
  /* 101440dc push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 101440e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101440e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 101440e5 call 0x10142520 */
  push32(0x101440eau); f_10142520();
  /* 101440ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101440ed:;
  /* 101440ed push 4 */
  push32((uint32_t)(0x4u));
  /* 101440ef call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101440f5u);
  /* 101440f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101440f8 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101440fd jle 0x10144110 */
  if ((C.zf||C.sf!=C.of)) goto L_10144110;
  /* 101440ff push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10144104 push 1 */
  push32((uint32_t)(0x1u));
  /* 10144106 push 4 */
  push32((uint32_t)(0x4u));
  /* 10144108 call 0x10142520 */
  push32(0x1014410du); f_10142520();
  /* 1014410d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144110:;
  /* 10144110 push 5 */
  push32((uint32_t)(0x5u));
  /* 10144112 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144118u);
  /* 10144118 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014411b cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144120 jle 0x10144133 */
  if ((C.zf||C.sf!=C.of)) goto L_10144133;
  /* 10144122 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10144127 push 1 */
  push32((uint32_t)(0x1u));
  /* 10144129 push 5 */
  push32((uint32_t)(0x5u));
  /* 1014412b call 0x10142520 */
  push32(0x10144130u); f_10142520();
  /* 10144130 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144133:;
  /* 10144133 pop edi */
  EDI = (pop32());
  /* 10144134 pop esi */
  ESI = (pop32());
  /* 10144135 pop ebp */
  EBP = (pop32());
  /* 10144136 pop ebx */
  EBX = (pop32());
  /* 10144137 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014413a ret  */
  ESPCHK(0x10143270u, _esp0);
  ESP += 4; return;
}

/* FUN_10004140 @ 0x10144140 (209 bytes, 56 insns) */
void f_10144140(void) {
  FTRACE(0x10144140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10144140 push 3 */
  push32((uint32_t)(0x3u));
  /* 10144142 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144148u);
  /* 10144148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014414b cmp eax, 0x672 */
  { uint32_t _a=(EAX),_b=(0x672u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144150 jle 0x10144210 */
  if ((C.zf||C.sf!=C.of)) goto L_10144210;
  /* 10144156 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144158 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1014415a push 0x10156310 */
  push32((uint32_t)(0x10156310u));
  /* 1014415f call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144165u);
  /* 10144165 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144167 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144169 push 0x10156318 */
  push32((uint32_t)(0x10156318u));
  /* 1014416e call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144174u);
  /* 10144174 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144176 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144178 push 0x10156300 */
  push32((uint32_t)(0x10156300u));
  /* 1014417d call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144183u);
  /* 10144183 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144185 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144187 push 0x10156308 */
  push32((uint32_t)(0x10156308u));
  /* 1014418c call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144192u);
  /* 10144192 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144194 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144196 push 0x10156320 */
  push32((uint32_t)(0x10156320u));
  /* 1014419b call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101441a1u);
  /* 101441a1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101441a3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101441a5 push 0x10156258 */
  push32((uint32_t)(0x10156258u));
  /* 101441aa call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101441b0u);
  /* 101441b0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101441b3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101441b5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101441b7 push 0x10156240 */
  push32((uint32_t)(0x10156240u));
  /* 101441bc call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101441c2u);
  /* 101441c2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101441c4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101441c6 push 0x10156248 */
  push32((uint32_t)(0x10156248u));
  /* 101441cb call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101441d1u);
  /* 101441d1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101441d3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101441d5 push 0x10156260 */
  push32((uint32_t)(0x10156260u));
  /* 101441da call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101441e0u);
  /* 101441e0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101441e2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101441e4 push 0x10156268 */
  push32((uint32_t)(0x10156268u));
  /* 101441e9 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101441efu);
  /* 101441ef push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101441f1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101441f3 push 0x10156220 */
  push32((uint32_t)(0x10156220u));
  /* 101441f8 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101441feu);
  /* 101441fe push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144200 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144202 push 0x10155f88 */
  push32((uint32_t)(0x10155f88u));
  /* 10144207 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014420du);
  /* 1014420d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144210:;
  /* 10144210 ret  */
  ESPCHK(0x10144140u, _esp0);
  ESP += 4; return;
}

/* FUN_10004220 @ 0x10144220 (79 bytes, 22 insns) */
void f_10144220(void) {
  FTRACE(0x10144220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10144220 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144222 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144224 push 0x101538d0 */
  push32((uint32_t)(0x101538d0u));
  /* 10144229 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014422fu);
  /* 1014422f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144231 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144233 push 0x101538d8 */
  push32((uint32_t)(0x101538d8u));
  /* 10144238 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014423eu);
  /* 1014423e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144240 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144242 push 0x101538c8 */
  push32((uint32_t)(0x101538c8u));
  /* 10144247 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014424du);
  /* 1014424d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014424f push 0xa */
  push32((uint32_t)(0xau));
  /* 10144251 push 0x10155f38 */
  push32((uint32_t)(0x10155f38u));
  /* 10144256 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014425cu);
  /* 1014425c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014425e push 0xa */
  push32((uint32_t)(0xau));
  /* 10144260 push 0x10155f28 */
  push32((uint32_t)(0x10155f28u));
  /* 10144265 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014426bu);
  /* 1014426b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014426e ret  */
  ESPCHK(0x10144220u, _esp0);
  ESP += 4; return;
}

/* FUN_10004270 @ 0x10144270 (127 bytes, 35 insns) */
void f_10144270(void) {
  FTRACE(0x10144270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10144270 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144272 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10144274 push 0x10156198 */
  push32((uint32_t)(0x10156198u));
  /* 10144279 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014427fu);
  /* 1014427f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144281 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10144283 push 0x10156190 */
  push32((uint32_t)(0x10156190u));
  /* 10144288 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014428eu);
  /* 1014428e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144290 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10144292 push 0x10156160 */
  push32((uint32_t)(0x10156160u));
  /* 10144297 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014429du);
  /* 1014429d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1014429f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101442a1 push 0x10156158 */
  push32((uint32_t)(0x10156158u));
  /* 101442a6 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101442acu);
  /* 101442ac push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101442ae push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101442b0 push 0x10156058 */
  push32((uint32_t)(0x10156058u));
  /* 101442b5 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101442bbu);
  /* 101442bb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101442bd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101442bf push 0x10156060 */
  push32((uint32_t)(0x10156060u));
  /* 101442c4 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101442cau);
  /* 101442ca add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101442cd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101442cf push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101442d1 push 0x10156068 */
  push32((uint32_t)(0x10156068u));
  /* 101442d6 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101442dcu);
  /* 101442dc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101442de push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101442e0 push 0x10156070 */
  push32((uint32_t)(0x10156070u));
  /* 101442e5 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101442ebu);
  /* 101442eb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101442ee ret  */
  ESPCHK(0x10144270u, _esp0);
  ESP += 4; return;
}

/* ProcessMiddleSeaAI @ 0x101442f0 (3643 bytes, 1035 insns) */
void f_101442f0(void) {
  FTRACE(0x101442f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101442f0 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101442f3 push ebx */
  push32((uint32_t)(EBX));
  /* 101442f4 push ebp */
  push32((uint32_t)(EBP));
  /* 101442f5 push esi */
  push32((uint32_t)(ESI));
  /* 101442f6 push edi */
  push32((uint32_t)(EDI));
  /* 101442f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101442f9 call 0x10142670 */
  push32(0x101442feu); f_10142670();
  /* 101442fe push 0x1014f030 */
  push32((uint32_t)(0x1014f030u));
  /* 10144303 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10144305 call dword ptr [0x101564cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564cc))), 0x1014430bu);
  /* 1014430b push 0x10156150 */
  push32((uint32_t)(0x10156150u));
  /* 10144310 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10144316u);
  /* 10144316 push 3 */
  push32((uint32_t)(0x3u));
  /* 10144318 mov ebx, eax */
  EBX = (EAX);
  /* 1014431a call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144320u);
  /* 10144320 mov ebp, eax */
  EBP = (EAX);
  /* 10144322 push 0x10156178 */
  push32((uint32_t)(0x10156178u));
  /* 10144327 mov dword ptr [esp + 0x30], ebp */
  w32((uint32_t)(ESP + 0x30), (EBP));
  /* 1014432b call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10144331u);
  /* 10144331 push 0x10153648 */
  push32((uint32_t)(0x10153648u));
  /* 10144336 mov byte ptr [esp + 0x2f], al */
  w8((uint32_t)(ESP + 0x2f), (AL));
  /* 1014433a call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10144340u);
  /* 10144340 push 0x10155fe0 */
  push32((uint32_t)(0x10155fe0u));
  /* 10144345 call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x1014434bu);
  /* 1014434b push 0x101560a0 */
  push32((uint32_t)(0x101560a0u));
  /* 10144350 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10144356u);
  /* 10144356 push 0x10156370 */
  push32((uint32_t)(0x10156370u));
  /* 1014435b call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10144361u);
  /* 10144361 push 0x101562f0 */
  push32((uint32_t)(0x101562f0u));
  /* 10144366 mov esi, eax */
  ESI = (EAX);
  /* 10144368 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x1014436eu);
  /* 1014436e push 0x10153648 */
  push32((uint32_t)(0x10153648u));
  /* 10144373 mov edi, eax */
  EDI = (EAX);
  /* 10144375 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x1014437bu);
  /* 1014437b add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014437d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144380 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10144382 mov byte ptr [esp + 0x12], 1 */
  w8((uint32_t)(ESP + 0x12), (0x1u));
  /* 10144387 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 1014438b call 0x10142570 */
  push32(0x10144390u); f_10142570();
  /* 10144390 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10144392 jle 0x101443a8 */
  if ((C.zf||C.sf!=C.of)) goto L_101443a8;
  /* 10144394 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10144396 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10144398 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1014439a push 0x101562e8 */
  push32((uint32_t)(0x101562e8u));
  /* 1014439f call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101443a5u);
  /* 101443a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101443a8:;
  /* 101443a8 push 0x10153898 */
  push32((uint32_t)(0x10153898u));
  /* 101443ad call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x101443b3u);
  /* 101443b3 push 0x10153898 */
  push32((uint32_t)(0x10153898u));
  /* 101443b8 mov esi, eax */
  ESI = (EAX);
  /* 101443ba call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x101443c0u);
  /* 101443c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101443c3 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101443c5 je 0x101443cc */
  if (C.zf) goto L_101443cc;
  /* 101443c7 mov byte ptr [esp + 0x12], 0 */
  w8((uint32_t)(ESP + 0x12), (0x0u));
L_101443cc:;
  /* 101443cc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101443ce je 0x10145123 */
  if (C.zf) goto L_10145123;
  /* 101443d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101443d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101443d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101443da push 0x10155f98 */
  push32((uint32_t)(0x10155f98u));
  /* 101443df call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101443e5u);
  /* 101443e5 push 0x10155f98 */
  push32((uint32_t)(0x10155f98u));
  /* 101443ea call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x101443f0u);
  /* 101443f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101443f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101443f5 je 0x10145123 */
  if (C.zf) goto L_10145123;
  /* 101443fb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101443fd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101443ff push 0x10156338 */
  push32((uint32_t)(0x10156338u));
  /* 10144404 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014440au);
  /* 1014440a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014440d call dword ptr [0x10156530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156530))), 0x10144413u);
  /* 10144413 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10144415 jne 0x1014446c */
  if (!C.zf) goto L_1014446c;
  /* 10144417 cmp ebp, 0x2bc */
  { uint32_t _a=(EBP),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014441d jle 0x10144444 */
  if ((C.zf||C.sf!=C.of)) goto L_10144444;
  /* 1014441f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144421 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144423 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144425 push 0x10156150 */
  push32((uint32_t)(0x10156150u));
  /* 1014442a call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144430u);
  /* 10144430 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144432 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144434 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144436 push 0x10153648 */
  push32((uint32_t)(0x10153648u));
  /* 1014443b call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144441u);
  /* 10144441 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144444:;
  /* 10144444 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014444a jle 0x10144458 */
  if ((C.zf||C.sf!=C.of)) goto L_10144458;
  /* 1014444c cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144451 jle 0x10144458 */
  if ((C.zf||C.sf!=C.of)) goto L_10144458;
  /* 10144453 call 0x10144140 */
  push32(0x10144458u); f_10144140();
L_10144458:;
  /* 10144458 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014445a push 1 */
  push32((uint32_t)(0x1u));
  /* 1014445c push 0 */
  push32((uint32_t)(0x0u));
  /* 1014445e call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x10144464u);
  /* 10144464 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144467 jmp 0x1014452f */
  goto L_1014452f;
L_1014446c:;
  /* 1014446c mov eax, dword ptr [0x10156554] */
  EAX = (r32((uint32_t)(0x10156554)));
  /* 10144471 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10144474 je 0x10144488 */
  if (C.zf) goto L_10144488;
  /* 10144476 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10144477 je 0x10144482 */
  if (C.zf) goto L_10144482;
  /* 10144479 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014447a jne 0x101444b4 */
  if (!C.zf) goto L_101444b4;
  /* 1014447c push 9 */
  push32((uint32_t)(0x9u));
  /* 1014447e push 4 */
  push32((uint32_t)(0x4u));
  /* 10144480 jmp 0x101444a9 */
  goto L_101444a9;
L_10144482:;
  /* 10144482 push 4 */
  push32((uint32_t)(0x4u));
  /* 10144484 push 9 */
  push32((uint32_t)(0x9u));
  /* 10144486 jmp 0x101444a9 */
  goto L_101444a9;
L_10144488:;
  /* 10144488 cmp ebp, 0x2ee0 */
  { uint32_t _a=(EBP),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014448e jle 0x1014449f */
  if ((C.zf||C.sf!=C.of)) goto L_1014449f;
  /* 10144490 push 6 */
  push32((uint32_t)(0x6u));
  /* 10144492 push 6 */
  push32((uint32_t)(0x6u));
  /* 10144494 push 9 */
  push32((uint32_t)(0x9u));
  /* 10144496 call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x1014449cu);
  /* 1014449c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014449f:;
  /* 1014449f push 5 */
  push32((uint32_t)(0x5u));
  /* 101444a1 cmp ebp, 0x1f40 */
  { uint32_t _a=(EBP),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101444a7 push 5 */
  push32((uint32_t)(0x5u));
L_101444a9:;
  /* 101444a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 101444ab call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x101444b1u);
  /* 101444b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101444b4:;
  /* 101444b4 mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 101444b8 mov esi, 0x1c2 */
  ESI = (0x1c2u);
  /* 101444bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101444bf je 0x101444c6 */
  if (C.zf) goto L_101444c6;
  /* 101444c1 mov esi, 0x17c */
  ESI = (0x17cu);
L_101444c6:;
  /* 101444c6 cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101444c9 jge 0x101444e7 */
  if ((C.sf==C.of)) goto L_101444e7;
  /* 101444cb cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101444d1 jle 0x10144523 */
  if ((C.zf||C.sf!=C.of)) goto L_10144523;
  /* 101444d3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101444d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101444d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101444d9 push 0x10156150 */
  push32((uint32_t)(0x10156150u));
  /* 101444de call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101444e4u);
  /* 101444e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101444e7:;
  /* 101444e7 cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101444ed jle 0x10144523 */
  if ((C.zf||C.sf!=C.of)) goto L_10144523;
  /* 101444ef push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101444f1 push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 101444f6 push esi */
  push32((uint32_t)(ESI));
  /* 101444f7 push 0x10156150 */
  push32((uint32_t)(0x10156150u));
  /* 101444fc call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144502u);
  /* 10144502 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144505 cmp ebp, 0x190 */
  { uint32_t _a=(EBP),_b=(0x190u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014450b jle 0x10144523 */
  if ((C.zf||C.sf!=C.of)) goto L_10144523;
  /* 1014450d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014450f push 0xf4 */
  push32((uint32_t)(0xf4u));
  /* 10144514 push esi */
  push32((uint32_t)(ESI));
  /* 10144515 push 0x10153648 */
  push32((uint32_t)(0x10153648u));
  /* 1014451a call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144520u);
  /* 10144520 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144523:;
  /* 10144523 cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144528 jle 0x1014452f */
  if ((C.zf||C.sf!=C.of)) goto L_1014452f;
  /* 1014452a call 0x10144140 */
  push32(0x1014452fu); f_10144140();
L_1014452f:;
  /* 1014452f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144531 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144533 push 1 */
  push32((uint32_t)(0x1u));
  /* 10144535 push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 1014453a call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144540u);
  /* 10144540 push 5 */
  push32((uint32_t)(0x5u));
  /* 10144542 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144544 push 2 */
  push32((uint32_t)(0x2u));
  /* 10144546 push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 1014454b call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144551u);
  /* 10144551 push 5 */
  push32((uint32_t)(0x5u));
  /* 10144553 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144555 push 3 */
  push32((uint32_t)(0x3u));
  /* 10144557 push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 1014455c call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144562u);
  /* 10144562 push 0x10156210 */
  push32((uint32_t)(0x10156210u));
  /* 10144567 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x1014456du);
  /* 1014456d add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144570 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144573 jle 0x101445e6 */
  if ((C.zf||C.sf!=C.of)) goto L_101445e6;
  /* 10144575 push 5 */
  push32((uint32_t)(0x5u));
  /* 10144577 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10144579 push 2 */
  push32((uint32_t)(0x2u));
  /* 1014457b push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 10144580 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144586u);
  /* 10144586 push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 1014458b call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10144591u);
  /* 10144591 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144594 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144597 jle 0x101445ad */
  if ((C.zf||C.sf!=C.of)) goto L_101445ad;
  /* 10144599 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1014459b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1014459d push 1 */
  push32((uint32_t)(0x1u));
  /* 1014459f push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 101445a4 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101445aau);
  /* 101445aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101445ad:;
  /* 101445ad push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 101445b2 call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x101445b8u);
  /* 101445b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101445bb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101445be jle 0x101445d4 */
  if ((C.zf||C.sf!=C.of)) goto L_101445d4;
  /* 101445c0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101445c2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101445c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101445c6 push 0x10153838 */
  push32((uint32_t)(0x10153838u));
  /* 101445cb call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101445d1u);
  /* 101445d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101445d4:;
  /* 101445d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101445d6 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101445d8 push 0x101560d0 */
  push32((uint32_t)(0x101560d0u));
  /* 101445dd call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101445e3u);
  /* 101445e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101445e6:;
  /* 101445e6 push 0x10156150 */
  push32((uint32_t)(0x10156150u));
  /* 101445eb call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x101445f1u);
  /* 101445f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101445f4 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101445f7 jle 0x1014460d */
  if ((C.zf||C.sf!=C.of)) goto L_1014460d;
  /* 101445f9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101445fb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101445fd push 1 */
  push32((uint32_t)(0x1u));
  /* 101445ff push 0x10153838 */
  push32((uint32_t)(0x10153838u));
  /* 10144604 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x1014460au);
  /* 1014460a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014460d:;
  /* 1014460d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014460f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144611 push 1 */
  push32((uint32_t)(0x1u));
  /* 10144613 push 0x101561a8 */
  push32((uint32_t)(0x101561a8u));
  /* 10144618 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x1014461eu);
  /* 1014461e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144620 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144622 push 1 */
  push32((uint32_t)(0x1u));
  /* 10144624 push 0x10156210 */
  push32((uint32_t)(0x10156210u));
  /* 10144629 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x1014462fu);
  /* 1014462f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144631 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144633 push 2 */
  push32((uint32_t)(0x2u));
  /* 10144635 push 0x10156210 */
  push32((uint32_t)(0x10156210u));
  /* 1014463a call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144640u);
  /* 10144640 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144642 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144644 push 1 */
  push32((uint32_t)(0x1u));
  /* 10144646 push 0x10155f90 */
  push32((uint32_t)(0x10155f90u));
  /* 1014464b call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144651u);
  /* 10144651 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144654 push 5 */
  push32((uint32_t)(0x5u));
  /* 10144656 push 0xa */
  push32((uint32_t)(0xau));
  /* 10144658 push 2 */
  push32((uint32_t)(0x2u));
  /* 1014465a push 0x101561a8 */
  push32((uint32_t)(0x101561a8u));
  /* 1014465f call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144665u);
  /* 10144665 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144667 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10144669 push 0x10153620 */
  push32((uint32_t)(0x10153620u));
  /* 1014466e call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144674u);
  /* 10144674 push 0x10155ee0 */
  push32((uint32_t)(0x10155ee0u));
  /* 10144679 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x1014467fu);
  /* 1014467f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144682 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10144684 jle 0x1014469a */
  if ((C.zf||C.sf!=C.of)) goto L_1014469a;
  /* 10144686 push 3 */
  push32((uint32_t)(0x3u));
  /* 10144688 push 5 */
  push32((uint32_t)(0x5u));
  /* 1014468a push 1 */
  push32((uint32_t)(0x1u));
  /* 1014468c push 0x101560b8 */
  push32((uint32_t)(0x101560b8u));
  /* 10144691 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144697u);
  /* 10144697 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014469a:;
  /* 1014469a call dword ptr [0x10156530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156530))), 0x101446a0u);
  /* 101446a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101446a2 je 0x101446b8 */
  if (C.zf) goto L_101446b8;
  /* 101446a4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101446a6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101446a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101446aa push 0x10155ee0 */
  push32((uint32_t)(0x10155ee0u));
  /* 101446af call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101446b5u);
  /* 101446b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101446b8:;
  /* 101446b8 push 0xa */
  push32((uint32_t)(0xau));
  /* 101446ba push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101446bc push 1 */
  push32((uint32_t)(0x1u));
  /* 101446be push 0x10155fa8 */
  push32((uint32_t)(0x10155fa8u));
  /* 101446c3 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101446c9u);
  /* 101446c9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101446cb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101446cd push 1 */
  push32((uint32_t)(0x1u));
  /* 101446cf push 0x101535d8 */
  push32((uint32_t)(0x101535d8u));
  /* 101446d4 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101446dau);
  /* 101446da add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101446dd cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101446e0 jle 0x101446f6 */
  if ((C.zf||C.sf!=C.of)) goto L_101446f6;
  /* 101446e2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101446e4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101446e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 101446e8 push 0x10155f98 */
  push32((uint32_t)(0x10155f98u));
  /* 101446ed call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101446f3u);
  /* 101446f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101446f6:;
  /* 101446f6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101446f8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101446fa push 1 */
  push32((uint32_t)(0x1u));
  /* 101446fc push 0x10156218 */
  push32((uint32_t)(0x10156218u));
  /* 10144701 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144707u);
  /* 10144707 push 5 */
  push32((uint32_t)(0x5u));
  /* 10144709 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1014470b push 2 */
  push32((uint32_t)(0x2u));
  /* 1014470d push 0x10156218 */
  push32((uint32_t)(0x10156218u));
  /* 10144712 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144718u);
  /* 10144718 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1014471a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1014471c push 0x10156038 */
  push32((uint32_t)(0x10156038u));
  /* 10144721 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144727u);
  /* 10144727 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144729 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1014472b push 0x10156230 */
  push32((uint32_t)(0x10156230u));
  /* 10144730 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144736u);
  /* 10144736 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144738 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014473a push 0x10156178 */
  push32((uint32_t)(0x10156178u));
  /* 1014473f call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144745u);
  /* 10144745 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144748 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1014474a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1014474c push 0x10156000 */
  push32((uint32_t)(0x10156000u));
  /* 10144751 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144757u);
  /* 10144757 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144759 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1014475b push 0x10155ff0 */
  push32((uint32_t)(0x10155ff0u));
  /* 10144760 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144766u);
  /* 10144766 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144768 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1014476a push 0x10155ff8 */
  push32((uint32_t)(0x10155ff8u));
  /* 1014476f call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144775u);
  /* 10144775 push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 1014477a call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10144780u);
  /* 10144780 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144783 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10144785 je 0x10144844 */
  if (C.zf) goto L_10144844;
  /* 1014478b push 0x10156178 */
  push32((uint32_t)(0x10156178u));
  /* 10144790 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10144796u);
  /* 10144796 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144799 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014479b jne 0x10144844 */
  if (!C.zf) goto L_10144844;
  /* 101447a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101447a3 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101447a9u);
  /* 101447a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101447ac cmp eax, 0xe74 */
  { uint32_t _a=(EAX),_b=(0xe74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101447b1 jle 0x101447d7 */
  if ((C.zf||C.sf!=C.of)) goto L_101447d7;
  /* 101447b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 101447b5 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101447bbu);
  /* 101447bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101447be cmp eax, 0x157c */
  { uint32_t _a=(EAX),_b=(0x157cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101447c3 jle 0x101447d7 */
  if ((C.zf||C.sf!=C.of)) goto L_101447d7;
  /* 101447c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101447c7 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101447cdu);
  /* 101447cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101447d0 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101447d5 jg 0x10144844 */
  if ((!C.zf&&C.sf==C.of)) goto L_10144844;
L_101447d7:;
  /* 101447d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101447d9 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101447dfu);
  /* 101447df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101447e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101447e4 je 0x1014486b */
  if (C.zf) goto L_1014486b;
  /* 101447ea push 5 */
  push32((uint32_t)(0x5u));
  /* 101447ec call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101447f2u);
  /* 101447f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101447f5 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101447fa jle 0x1014486b */
  if ((C.zf||C.sf!=C.of)) goto L_1014486b;
  /* 101447fc push 5 */
  push32((uint32_t)(0x5u));
  /* 101447fe call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144804u);
  /* 10144804 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144807 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014480c jle 0x1014481f */
  if ((C.zf||C.sf!=C.of)) goto L_1014481f;
  /* 1014480e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10144813 push 1 */
  push32((uint32_t)(0x1u));
  /* 10144815 push 5 */
  push32((uint32_t)(0x5u));
  /* 10144817 call 0x10142520 */
  push32(0x1014481cu); f_10142520();
  /* 1014481c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014481f:;
  /* 1014481f push 4 */
  push32((uint32_t)(0x4u));
  /* 10144821 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144827u);
  /* 10144827 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014482a cmp eax, 0x32c8 */
  { uint32_t _a=(EAX),_b=(0x32c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014482f jle 0x1014486b */
  if ((C.zf||C.sf!=C.of)) goto L_1014486b;
  /* 10144831 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10144836 push 1 */
  push32((uint32_t)(0x1u));
  /* 10144838 push 4 */
  push32((uint32_t)(0x4u));
  /* 1014483a call 0x10142520 */
  push32(0x1014483fu); f_10142520();
  /* 1014483f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144842 jmp 0x1014486b */
  goto L_1014486b;
L_10144844:;
  /* 10144844 push 0 */
  push32((uint32_t)(0x0u));
  /* 10144846 push 1 */
  push32((uint32_t)(0x1u));
  /* 10144848 call 0x10142500 */
  push32(0x1014484du); f_10142500();
  /* 1014484d push 0 */
  push32((uint32_t)(0x0u));
  /* 1014484f push 4 */
  push32((uint32_t)(0x4u));
  /* 10144851 call 0x10142500 */
  push32(0x10144856u); f_10142500();
  /* 10144856 push 0 */
  push32((uint32_t)(0x0u));
  /* 10144858 push 3 */
  push32((uint32_t)(0x3u));
  /* 1014485a call 0x10142500 */
  push32(0x1014485fu); f_10142500();
  /* 1014485f push 0 */
  push32((uint32_t)(0x0u));
  /* 10144861 push 1 */
  push32((uint32_t)(0x1u));
  /* 10144863 call 0x10142500 */
  push32(0x10144868u); f_10142500();
  /* 10144868 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014486b:;
  /* 1014486b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014486d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014486f push 0x10153760 */
  push32((uint32_t)(0x10153760u));
  /* 10144874 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014487au);
  /* 1014487a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1014487c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1014487e push 1 */
  push32((uint32_t)(0x1u));
  /* 10144880 push 0x10156298 */
  push32((uint32_t)(0x10156298u));
  /* 10144885 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x1014488bu);
  /* 1014488b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1014488d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1014488f push 2 */
  push32((uint32_t)(0x2u));
  /* 10144891 push 0x10156298 */
  push32((uint32_t)(0x10156298u));
  /* 10144896 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x1014489cu);
  /* 1014489c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1014489e push 0xa */
  push32((uint32_t)(0xau));
  /* 101448a0 push 3 */
  push32((uint32_t)(0x3u));
  /* 101448a2 push 0x10156298 */
  push32((uint32_t)(0x10156298u));
  /* 101448a7 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101448adu);
  /* 101448ad push 0x10153918 */
  push32((uint32_t)(0x10153918u));
  /* 101448b2 call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x101448b8u);
  /* 101448b8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101448bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101448bd jne 0x10144908 */
  if (!C.zf) goto L_10144908;
  /* 101448bf push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 101448c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101448c3 call 0x10142550 */
  push32(0x101448c8u); f_10142550();
  /* 101448c8 mov esi, eax */
  ESI = (EAX);
  /* 101448ca push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101448cc push 0 */
  push32((uint32_t)(0x0u));
  /* 101448ce sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101448d1 call 0x10142550 */
  push32(0x101448d6u); f_10142550();
  /* 101448d6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101448d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 101448da add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101448dc call 0x10142550 */
  push32(0x101448e1u); f_10142550();
  /* 101448e1 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101448e3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101448e6 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101448e9 jle 0x101448f8 */
  if ((C.zf||C.sf!=C.of)) goto L_101448f8;
  /* 101448eb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101448ed push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101448ef push 6 */
  push32((uint32_t)(0x6u));
  /* 101448f1 push 0x10155f50 */
  push32((uint32_t)(0x10155f50u));
  /* 101448f6 jmp 0x10144913 */
  goto L_10144913;
L_101448f8:;
  /* 101448f8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101448fa je 0x1014491c */
  if (C.zf) goto L_1014491c;
  /* 101448fc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101448fe push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144900 push esi */
  push32((uint32_t)(ESI));
  /* 10144901 push 0x10155f50 */
  push32((uint32_t)(0x10155f50u));
  /* 10144906 jmp 0x10144913 */
  goto L_10144913;
L_10144908:;
  /* 10144908 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1014490a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1014490c push 0xa */
  push32((uint32_t)(0xau));
  /* 1014490e push 0x101538a8 */
  push32((uint32_t)(0x101538a8u));
L_10144913:;
  /* 10144913 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144919u);
  /* 10144919 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014491c:;
  /* 1014491c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014491e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10144920 push 0x10153918 */
  push32((uint32_t)(0x10153918u));
  /* 10144925 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014492bu);
  /* 1014492b push 0x10156230 */
  push32((uint32_t)(0x10156230u));
  /* 10144930 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10144936u);
  /* 10144936 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144939 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014493b je 0x1014495e */
  if (C.zf) goto L_1014495e;
  /* 1014493d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1014493f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144941 push 0x10153918 */
  push32((uint32_t)(0x10153918u));
  /* 10144946 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014494cu);
  /* 1014494c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014494e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10144950 push 0x10153830 */
  push32((uint32_t)(0x10153830u));
  /* 10144955 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014495bu);
  /* 1014495b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014495e:;
  /* 1014495e push 0x10153918 */
  push32((uint32_t)(0x10153918u));
  /* 10144963 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10144969u);
  /* 10144969 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014496c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014496e je 0x10144996 */
  if (C.zf) goto L_10144996;
  /* 10144970 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144972 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144974 push 0x10153900 */
  push32((uint32_t)(0x10153900u));
  /* 10144979 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014497fu);
  /* 1014497f push 0xa */
  push32((uint32_t)(0xau));
  /* 10144981 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10144983 push 0x10153840 */
  push32((uint32_t)(0x10153840u));
  /* 10144988 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014498eu);
  /* 1014498e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144991 call 0x10143230 */
  push32(0x10144996u); f_10143230();
L_10144996:;
  /* 10144996 push 0 */
  push32((uint32_t)(0x0u));
  /* 10144998 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014499a call 0x10142500 */
  push32(0x1014499fu); f_10142500();
  /* 1014499f push 0 */
  push32((uint32_t)(0x0u));
  /* 101449a1 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101449a7u);
  /* 101449a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101449aa cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101449af jle 0x101449f3 */
  if ((C.zf||C.sf!=C.of)) goto L_101449f3;
  /* 101449b1 push 0x10153760 */
  push32((uint32_t)(0x10153760u));
  /* 101449b6 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x101449bcu);
  /* 101449bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101449bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101449c1 je 0x101449f3 */
  if (C.zf) goto L_101449f3;
  /* 101449c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101449c5 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101449cbu);
  /* 101449cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101449ce cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101449d3 jge 0x101449f3 */
  if ((C.sf==C.of)) goto L_101449f3;
  /* 101449d5 push 0x10153918 */
  push32((uint32_t)(0x10153918u));
  /* 101449da call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x101449e0u);
  /* 101449e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101449e3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101449e5 jne 0x101449f3 */
  if (!C.zf) goto L_101449f3;
  /* 101449e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101449e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 101449eb call 0x10142500 */
  push32(0x101449f0u); f_10142500();
  /* 101449f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101449f3:;
  /* 101449f3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101449f5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101449f7 push 3 */
  push32((uint32_t)(0x3u));
  /* 101449f9 push 0x101561b0 */
  push32((uint32_t)(0x101561b0u));
  /* 101449fe call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144a04u);
  /* 10144a04 push 0x101560b0 */
  push32((uint32_t)(0x101560b0u));
  /* 10144a09 call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10144a0fu);
  /* 10144a0f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144a12 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10144a14 je 0x10144a2a */
  if (C.zf) goto L_10144a2a;
  /* 10144a16 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144a18 push 0xa */
  push32((uint32_t)(0xau));
  /* 10144a1a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10144a1c push 0x101561b0 */
  push32((uint32_t)(0x101561b0u));
  /* 10144a21 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144a27u);
  /* 10144a27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144a2a:;
  /* 10144a2a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144a2c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10144a2e push 0x101560b0 */
  push32((uint32_t)(0x101560b0u));
  /* 10144a33 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144a39u);
  /* 10144a39 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144a3b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10144a3d push 0x101560c0 */
  push32((uint32_t)(0x101560c0u));
  /* 10144a42 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144a48u);
  /* 10144a48 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144a4a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144a4c push 0x101562a8 */
  push32((uint32_t)(0x101562a8u));
  /* 10144a51 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144a57u);
  /* 10144a57 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144a59 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144a5b push 0x10156290 */
  push32((uint32_t)(0x10156290u));
  /* 10144a60 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144a66u);
  /* 10144a66 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144a68 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144a6a push 0x101562a0 */
  push32((uint32_t)(0x101562a0u));
  /* 10144a6f call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144a75u);
  /* 10144a75 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144a77 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144a79 push 0x10156280 */
  push32((uint32_t)(0x10156280u));
  /* 10144a7e call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144a84u);
  /* 10144a84 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144a87 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144a89 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144a8b push 0x10156288 */
  push32((uint32_t)(0x10156288u));
  /* 10144a90 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144a96u);
  /* 10144a96 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144a98 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144a9a push 0x10156278 */
  push32((uint32_t)(0x10156278u));
  /* 10144a9f call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144aa5u);
  /* 10144aa5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144aa8 cmp ebx, 0x23 */
  { uint32_t _a=(EBX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144aab jle 0x10144b04 */
  if ((C.zf||C.sf!=C.of)) goto L_10144b04;
  /* 10144aad mov al, byte ptr [esp + 0x12] */
  AL = (r8((uint32_t)(ESP + 0x12)));
  /* 10144ab1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10144ab3 je 0x10144b04 */
  if (C.zf) goto L_10144b04;
  /* 10144ab5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10144ab7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10144ab9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10144abb push 0x10153898 */
  push32((uint32_t)(0x10153898u));
  /* 10144ac0 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144ac6u);
  /* 10144ac6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144ac9 cmp ebx, 0x3c */
  { uint32_t _a=(EBX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144acc jle 0x10144b04 */
  if ((C.zf||C.sf!=C.of)) goto L_10144b04;
  /* 10144ace push 0xa */
  push32((uint32_t)(0xau));
  /* 10144ad0 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10144ad2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10144ad4 push 0x10153898 */
  push32((uint32_t)(0x10153898u));
  /* 10144ad9 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144adfu);
  /* 10144adf push 0xa */
  push32((uint32_t)(0xau));
  /* 10144ae1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144ae3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10144ae5 push 0x10153898 */
  push32((uint32_t)(0x10153898u));
  /* 10144aea call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144af0u);
  /* 10144af0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10144af2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10144af4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10144af6 push 0x10153898 */
  push32((uint32_t)(0x10153898u));
  /* 10144afb call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144b01u);
  /* 10144b01 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144b04:;
  /* 10144b04 mov bl, byte ptr [esp + 0x13] */
  BL = (r8((uint32_t)(ESP + 0x13)));
  /* 10144b08 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10144b0a je 0x10144bee */
  if (C.zf) goto L_10144bee;
  /* 10144b10 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144b12 push 0xa */
  push32((uint32_t)(0xau));
  /* 10144b14 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144b16 push 0x10153888 */
  push32((uint32_t)(0x10153888u));
  /* 10144b1b call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144b21u);
  /* 10144b21 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10144b23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10144b25 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10144b27 push 0x10156120 */
  push32((uint32_t)(0x10156120u));
  /* 10144b2c call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144b32u);
  /* 10144b32 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10144b34 push 1 */
  push32((uint32_t)(0x1u));
  /* 10144b36 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10144b38 push 0x10156238 */
  push32((uint32_t)(0x10156238u));
  /* 10144b3d call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144b43u);
  /* 10144b43 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144b45 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10144b47 push 0x101535f0 */
  push32((uint32_t)(0x101535f0u));
  /* 10144b4c call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144b52u);
  /* 10144b52 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144b54 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10144b56 push 0x101536c8 */
  push32((uint32_t)(0x101536c8u));
  /* 10144b5b call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144b61u);
  /* 10144b61 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144b64 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144b66 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10144b68 push 0x101535e8 */
  push32((uint32_t)(0x101535e8u));
  /* 10144b6d call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144b73u);
  /* 10144b73 push 0x10156158 */
  push32((uint32_t)(0x10156158u));
  /* 10144b78 call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10144b7eu);
  /* 10144b7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144b81 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10144b83 je 0x10144b99 */
  if (C.zf) goto L_10144b99;
  /* 10144b85 push 0xa */
  push32((uint32_t)(0xau));
  /* 10144b87 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10144b89 push 5 */
  push32((uint32_t)(0x5u));
  /* 10144b8b push 0x10156330 */
  push32((uint32_t)(0x10156330u));
  /* 10144b90 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144b96u);
  /* 10144b96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144b99:;
  /* 10144b99 push 0x10156070 */
  push32((uint32_t)(0x10156070u));
  /* 10144b9e call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10144ba4u);
  /* 10144ba4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144ba7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10144ba9 je 0x10144bbf */
  if (C.zf) goto L_10144bbf;
  /* 10144bab push 0xa */
  push32((uint32_t)(0xau));
  /* 10144bad push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10144baf push 0xa */
  push32((uint32_t)(0xau));
  /* 10144bb1 push 0x10153628 */
  push32((uint32_t)(0x10153628u));
  /* 10144bb6 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144bbcu);
  /* 10144bbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144bbf:;
  /* 10144bbf call 0x10144270 */
  push32(0x10144bc4u); f_10144270();
L_10144bc4:;
  /* 10144bc4 push 0x10155fe0 */
  push32((uint32_t)(0x10155fe0u));
  /* 10144bc9 call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10144bcfu);
  /* 10144bcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144bd2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10144bd4 je 0x10144c24 */
  if (C.zf) goto L_10144c24;
  /* 10144bd6 push 0x101560c0 */
  push32((uint32_t)(0x101560c0u));
  /* 10144bdb call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10144be1u);
  /* 10144be1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144be4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10144be6 jne 0x10144c15 */
  if (!C.zf) goto L_10144c15;
  /* 10144be8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10144bea push 2 */
  push32((uint32_t)(0x2u));
  /* 10144bec jmp 0x10144c19 */
  goto L_10144c19;
L_10144bee:;
  /* 10144bee push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10144bf0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10144bf2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10144bf4 push 0x10156120 */
  push32((uint32_t)(0x10156120u));
  /* 10144bf9 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144bffu);
  /* 10144bff push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10144c01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10144c03 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10144c05 push 0x10156238 */
  push32((uint32_t)(0x10156238u));
  /* 10144c0a call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144c10u);
  /* 10144c10 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144c13 jmp 0x10144bc4 */
  goto L_10144bc4;
L_10144c15:;
  /* 10144c15 push 4 */
  push32((uint32_t)(0x4u));
  /* 10144c17 push 4 */
  push32((uint32_t)(0x4u));
L_10144c19:;
  /* 10144c19 push 8 */
  push32((uint32_t)(0x8u));
  /* 10144c1b call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x10144c21u);
  /* 10144c21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144c24:;
  /* 10144c24 push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10144c29 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10144c2fu);
  /* 10144c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144c32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10144c34 je 0x10144c4a */
  if (C.zf) goto L_10144c4a;
  /* 10144c36 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144c38 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144c3a push 6 */
  push32((uint32_t)(0x6u));
  /* 10144c3c push 0x101561b0 */
  push32((uint32_t)(0x101561b0u));
  /* 10144c41 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144c47u);
  /* 10144c47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144c4a:;
  /* 10144c4a push 0x101560b0 */
  push32((uint32_t)(0x101560b0u));
  /* 10144c4f call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10144c55u);
  /* 10144c55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144c58 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10144c5a je 0x10144c70 */
  if (C.zf) goto L_10144c70;
  /* 10144c5c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144c5e push 0xa */
  push32((uint32_t)(0xau));
  /* 10144c60 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10144c62 push 0x101561b0 */
  push32((uint32_t)(0x101561b0u));
  /* 10144c67 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144c6du);
  /* 10144c6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144c70:;
  /* 10144c70 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10144c72 je 0x10144d73 */
  if (C.zf) goto L_10144d73;
  /* 10144c78 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10144c7a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10144c7c push 2 */
  push32((uint32_t)(0x2u));
  /* 10144c7e push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10144c83 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144c89u);
  /* 10144c89 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10144c8b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10144c8d push 3 */
  push32((uint32_t)(0x3u));
  /* 10144c8f push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10144c94 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144c9au);
  /* 10144c9a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10144c9c push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10144c9e push 4 */
  push32((uint32_t)(0x4u));
  /* 10144ca0 push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10144ca5 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144cabu);
  /* 10144cab push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10144cad push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10144caf push 5 */
  push32((uint32_t)(0x5u));
  /* 10144cb1 push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10144cb6 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144cbcu);
  /* 10144cbc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144cbf push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10144cc1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10144cc3 push 6 */
  push32((uint32_t)(0x6u));
  /* 10144cc5 push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10144cca call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144cd0u);
  /* 10144cd0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144cd2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10144cd4 push 0x10155fe0 */
  push32((uint32_t)(0x10155fe0u));
  /* 10144cd9 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144cdfu);
  /* 10144cdf push 0x101560a0 */
  push32((uint32_t)(0x101560a0u));
  /* 10144ce4 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10144ceau);
  /* 10144cea add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144ced cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144cf0 jle 0x10144d13 */
  if ((C.zf||C.sf!=C.of)) goto L_10144d13;
  /* 10144cf2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144cf4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144cf6 push 0x101561c8 */
  push32((uint32_t)(0x101561c8u));
  /* 10144cfb call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144d01u);
  /* 10144d01 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10144d03 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10144d05 push 0x101561d0 */
  push32((uint32_t)(0x101561d0u));
  /* 10144d0a call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144d10u);
  /* 10144d10 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144d13:;
  /* 10144d13 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144d15 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10144d17 push 0x101560b0 */
  push32((uint32_t)(0x101560b0u));
  /* 10144d1c call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144d22u);
  /* 10144d22 push 0x101538c8 */
  push32((uint32_t)(0x101538c8u));
  /* 10144d27 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10144d2du);
  /* 10144d2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144d30 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10144d32 je 0x10144d73 */
  if (C.zf) goto L_10144d73;
  /* 10144d34 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144d36 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144d38 push 0x10156128 */
  push32((uint32_t)(0x10156128u));
  /* 10144d3d call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144d43u);
  /* 10144d43 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144d45 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144d47 push 0x10156138 */
  push32((uint32_t)(0x10156138u));
  /* 10144d4c call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144d52u);
  /* 10144d52 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144d54 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10144d56 push 0x10156140 */
  push32((uint32_t)(0x10156140u));
  /* 10144d5b call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144d61u);
  /* 10144d61 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144d63 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10144d65 push 0x10156130 */
  push32((uint32_t)(0x10156130u));
  /* 10144d6a call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144d70u);
  /* 10144d70 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144d73:;
  /* 10144d73 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144d75 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10144d77 push 0x10153760 */
  push32((uint32_t)(0x10153760u));
  /* 10144d7c call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144d82u);
  /* 10144d82 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10144d84 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10144d86 push 0x101538a0 */
  push32((uint32_t)(0x101538a0u));
  /* 10144d8b call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144d91u);
  /* 10144d91 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144d93 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144d95 push 0x10156110 */
  push32((uint32_t)(0x10156110u));
  /* 10144d9a call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10144da0u);
  /* 10144da0 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 10144da4 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144da7 cmp eax, 0x15e */
  { uint32_t _a=(EAX),_b=(0x15eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144dac jle 0x10144dca */
  if ((C.zf||C.sf!=C.of)) goto L_10144dca;
  /* 10144dae push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10144db0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10144db2 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10144db7 push 0x101560a0 */
  push32((uint32_t)(0x101560a0u));
  /* 10144dbc call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10144dc2u);
  /* 10144dc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144dc5 call 0x10144220 */
  push32(0x10144dcau); f_10144220();
L_10144dca:;
  /* 10144dca push 0x10153838 */
  push32((uint32_t)(0x10153838u));
  /* 10144dcf call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10144dd5u);
  /* 10144dd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144dd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10144dda je 0x10145123 */
  if (C.zf) goto L_10145123;
  /* 10144de0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10144de2 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144de8u);
  /* 10144de8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10144dea mov edi, eax */
  EDI = (EAX);
  /* 10144dec call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144df2u);
  /* 10144df2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10144df4 mov esi, eax */
  ESI = (EAX);
  /* 10144df6 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144dfcu);
  /* 10144dfc push 5 */
  push32((uint32_t)(0x5u));
  /* 10144dfe mov ebp, eax */
  EBP = (EAX);
  /* 10144e00 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144e06u);
  /* 10144e06 push 1 */
  push32((uint32_t)(0x1u));
  /* 10144e08 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 10144e0c call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144e12u);
  /* 10144e12 mov ebx, eax */
  EBX = (EAX);
  /* 10144e14 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 10144e18 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144e1b cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144e20 jge 0x10144eb3 */
  if ((C.sf==C.of)) goto L_10144eb3;
  /* 10144e26 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144e2c jle 0x10144e39 */
  if ((C.zf||C.sf!=C.of)) goto L_10144e39;
  /* 10144e2e push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10144e33 push 3 */
  push32((uint32_t)(0x3u));
  /* 10144e35 push 2 */
  push32((uint32_t)(0x2u));
  /* 10144e37 jmp 0x10144eab */
  goto L_10144eab;
L_10144e39:;
  /* 10144e39 cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144e3f jle 0x10144e4c */
  if ((C.zf||C.sf!=C.of)) goto L_10144e4c;
  /* 10144e41 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10144e46 push 3 */
  push32((uint32_t)(0x3u));
  /* 10144e48 push 2 */
  push32((uint32_t)(0x2u));
  /* 10144e4a jmp 0x10144eab */
  goto L_10144eab;
L_10144e4c:;
  /* 10144e4c cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144e52 jle 0x10144e5f */
  if ((C.zf||C.sf!=C.of)) goto L_10144e5f;
  /* 10144e54 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10144e59 push 3 */
  push32((uint32_t)(0x3u));
  /* 10144e5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10144e5d jmp 0x10144eab */
  goto L_10144eab;
L_10144e5f:;
  /* 10144e5f cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144e65 jle 0x10144e72 */
  if ((C.zf||C.sf!=C.of)) goto L_10144e72;
  /* 10144e67 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10144e6c push 3 */
  push32((uint32_t)(0x3u));
  /* 10144e6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10144e70 jmp 0x10144eab */
  goto L_10144eab;
L_10144e72:;
  /* 10144e72 cmp dword ptr [esp + 0x14], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144e7a jle 0x10144e87 */
  if ((C.zf||C.sf!=C.of)) goto L_10144e87;
  /* 10144e7c push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10144e81 push 3 */
  push32((uint32_t)(0x3u));
  /* 10144e83 push 5 */
  push32((uint32_t)(0x5u));
  /* 10144e85 jmp 0x10144eab */
  goto L_10144eab;
L_10144e87:;
  /* 10144e87 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144e8d jle 0x10144e9a */
  if ((C.zf||C.sf!=C.of)) goto L_10144e9a;
  /* 10144e8f push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10144e94 push 3 */
  push32((uint32_t)(0x3u));
  /* 10144e96 push 4 */
  push32((uint32_t)(0x4u));
  /* 10144e98 jmp 0x10144eab */
  goto L_10144eab;
L_10144e9a:;
  /* 10144e9a cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144ea0 jle 0x10144eb3 */
  if ((C.zf||C.sf!=C.of)) goto L_10144eb3;
  /* 10144ea2 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10144ea7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10144ea9 push 1 */
  push32((uint32_t)(0x1u));
L_10144eab:;
  /* 10144eab call 0x10142520 */
  push32(0x10144eb0u); f_10142520();
  /* 10144eb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144eb3:;
  /* 10144eb3 push 0x10155ee0 */
  push32((uint32_t)(0x10155ee0u));
  /* 10144eb8 call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10144ebeu);
  /* 10144ebe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144ec1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10144ec3 je 0x10144f13 */
  if (C.zf) goto L_10144f13;
  /* 10144ec5 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144ecb jle 0x10144f13 */
  if ((C.zf||C.sf!=C.of)) goto L_10144f13;
  /* 10144ecd push 0x10156230 */
  push32((uint32_t)(0x10156230u));
  /* 10144ed2 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10144ed8u);
  /* 10144ed8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144edb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10144edd jne 0x10144f13 */
  if (!C.zf) goto L_10144f13;
  /* 10144edf cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144ee5 jle 0x10144ef8 */
  if ((C.zf||C.sf!=C.of)) goto L_10144ef8;
  /* 10144ee7 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10144eec push 3 */
  push32((uint32_t)(0x3u));
  /* 10144eee push 4 */
  push32((uint32_t)(0x4u));
  /* 10144ef0 call 0x10142520 */
  push32(0x10144ef5u); f_10142520();
  /* 10144ef5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144ef8:;
  /* 10144ef8 cmp dword ptr [esp + 0x14], 0xfa0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144f00 jle 0x10144f13 */
  if ((C.zf||C.sf!=C.of)) goto L_10144f13;
  /* 10144f02 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10144f07 push 3 */
  push32((uint32_t)(0x3u));
  /* 10144f09 push 5 */
  push32((uint32_t)(0x5u));
  /* 10144f0b call 0x10142520 */
  push32(0x10144f10u); f_10142520();
  /* 10144f10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144f13:;
  /* 10144f13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10144f15 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144f1bu);
  /* 10144f1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144f1e cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144f23 jle 0x10144f36 */
  if ((C.zf||C.sf!=C.of)) goto L_10144f36;
  /* 10144f25 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 10144f2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10144f2c push 2 */
  push32((uint32_t)(0x2u));
  /* 10144f2e call 0x10142520 */
  push32(0x10144f33u); f_10142520();
  /* 10144f33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144f36:;
  /* 10144f36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10144f38 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144f3eu);
  /* 10144f3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144f41 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144f46 jle 0x10144f59 */
  if ((C.zf||C.sf!=C.of)) goto L_10144f59;
  /* 10144f48 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 10144f4d push 1 */
  push32((uint32_t)(0x1u));
  /* 10144f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10144f51 call 0x10142520 */
  push32(0x10144f56u); f_10142520();
  /* 10144f56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144f59:;
  /* 10144f59 push 0x101561a8 */
  push32((uint32_t)(0x101561a8u));
  /* 10144f5e call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10144f64u);
  /* 10144f64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144f67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10144f69 je 0x101450f0 */
  if (C.zf) goto L_101450f0;
  /* 10144f6f push 0x10156178 */
  push32((uint32_t)(0x10156178u));
  /* 10144f74 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10144f7au);
  /* 10144f7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144f7d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10144f7f jne 0x101450f0 */
  if (!C.zf) goto L_101450f0;
  /* 10144f85 push 5 */
  push32((uint32_t)(0x5u));
  /* 10144f87 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144f8du);
  /* 10144f8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144f90 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144f95 jle 0x10145050 */
  if ((C.zf||C.sf!=C.of)) goto L_10145050;
  /* 10144f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10144f9d call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144fa3u);
  /* 10144fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144fa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10144fa8 je 0x10145050 */
  if (C.zf) goto L_10145050;
  /* 10144fae push 1 */
  push32((uint32_t)(0x1u));
  /* 10144fb0 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144fb6u);
  /* 10144fb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144fb9 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144fbe jge 0x10145050 */
  if ((C.sf==C.of)) goto L_10145050;
  /* 10144fc4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10144fc6 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144fccu);
  /* 10144fcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144fcf cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144fd4 jle 0x10144fe7 */
  if ((C.zf||C.sf!=C.of)) goto L_10144fe7;
  /* 10144fd6 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10144fdb push 1 */
  push32((uint32_t)(0x1u));
  /* 10144fdd push 5 */
  push32((uint32_t)(0x5u));
  /* 10144fdf call 0x10142520 */
  push32(0x10144fe4u); f_10142520();
  /* 10144fe4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10144fe7:;
  /* 10144fe7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10144fe9 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10144fefu);
  /* 10144fef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10144ff2 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10144ff7 jle 0x1014500a */
  if ((C.zf||C.sf!=C.of)) goto L_1014500a;
  /* 10144ff9 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10144ffe push 1 */
  push32((uint32_t)(0x1u));
  /* 10145000 push 4 */
  push32((uint32_t)(0x4u));
  /* 10145002 call 0x10142520 */
  push32(0x10145007u); f_10142520();
  /* 10145007 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014500a:;
  /* 1014500a push 2 */
  push32((uint32_t)(0x2u));
  /* 1014500c call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10145012u);
  /* 10145012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145015 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014501a jle 0x1014502d */
  if ((C.zf||C.sf!=C.of)) goto L_1014502d;
  /* 1014501c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 10145021 push 1 */
  push32((uint32_t)(0x1u));
  /* 10145023 push 2 */
  push32((uint32_t)(0x2u));
  /* 10145025 call 0x10142520 */
  push32(0x1014502au); f_10142520();
  /* 1014502a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014502d:;
  /* 1014502d push 3 */
  push32((uint32_t)(0x3u));
  /* 1014502f call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10145035u);
  /* 10145035 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145038 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014503d jle 0x10145050 */
  if ((C.zf||C.sf!=C.of)) goto L_10145050;
  /* 1014503f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10145044 push 1 */
  push32((uint32_t)(0x1u));
  /* 10145046 push 3 */
  push32((uint32_t)(0x3u));
  /* 10145048 call 0x10142520 */
  push32(0x1014504du); f_10142520();
  /* 1014504d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145050:;
  /* 10145050 push 5 */
  push32((uint32_t)(0x5u));
  /* 10145052 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10145058u);
  /* 10145058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014505b cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145060 jle 0x101450f0 */
  if ((C.zf||C.sf!=C.of)) goto L_101450f0;
  /* 10145066 push 1 */
  push32((uint32_t)(0x1u));
  /* 10145068 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x1014506eu);
  /* 1014506e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145071 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10145073 je 0x101450f0 */
  if (C.zf) goto L_101450f0;
  /* 10145075 push 1 */
  push32((uint32_t)(0x1u));
  /* 10145077 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x1014507du);
  /* 1014507d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145080 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145085 jle 0x101450f0 */
  if ((C.zf||C.sf!=C.of)) goto L_101450f0;
  /* 10145087 push 5 */
  push32((uint32_t)(0x5u));
  /* 10145089 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x1014508fu);
  /* 1014508f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145092 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145097 jle 0x101450aa */
  if ((C.zf||C.sf!=C.of)) goto L_101450aa;
  /* 10145099 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1014509e push 4 */
  push32((uint32_t)(0x4u));
  /* 101450a0 push 5 */
  push32((uint32_t)(0x5u));
  /* 101450a2 call 0x10142520 */
  push32(0x101450a7u); f_10142520();
  /* 101450a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101450aa:;
  /* 101450aa push 2 */
  push32((uint32_t)(0x2u));
  /* 101450ac call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101450b2u);
  /* 101450b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101450b5 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101450ba jle 0x101450cd */
  if ((C.zf||C.sf!=C.of)) goto L_101450cd;
  /* 101450bc push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 101450c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101450c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 101450c5 call 0x10142520 */
  push32(0x101450cau); f_10142520();
  /* 101450ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101450cd:;
  /* 101450cd push 3 */
  push32((uint32_t)(0x3u));
  /* 101450cf call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101450d5u);
  /* 101450d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101450d8 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101450dd jle 0x101450f0 */
  if ((C.zf||C.sf!=C.of)) goto L_101450f0;
  /* 101450df push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 101450e4 push 4 */
  push32((uint32_t)(0x4u));
  /* 101450e6 push 3 */
  push32((uint32_t)(0x3u));
  /* 101450e8 call 0x10142520 */
  push32(0x101450edu); f_10142520();
  /* 101450ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101450f0:;
  /* 101450f0 call dword ptr [0x101564c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c0))), 0x101450f6u);
  /* 101450f6 mov ecx, dword ptr [eax*4 + 0x101565cc] */
  ECX = (r32((uint32_t)(EAX*4 + 0x101565cc)));
  /* 101450fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101450ff jne 0x10145123 */
  if (!C.zf) goto L_10145123;
  /* 10145101 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10145106 push 3 */
  push32((uint32_t)(0x3u));
  /* 10145108 push 5 */
  push32((uint32_t)(0x5u));
  /* 1014510a call 0x10142520 */
  push32(0x1014510fu); f_10142520();
  /* 1014510f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145112 call dword ptr [0x101564c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c0))), 0x10145118u);
  /* 10145118 mov dword ptr [eax*4 + 0x101565cc], 1 */
  w32((uint32_t)(EAX*4 + 0x101565cc), (0x1u));
L_10145123:;
  /* 10145123 pop edi */
  EDI = (pop32());
  /* 10145124 pop esi */
  ESI = (pop32());
  /* 10145125 pop ebp */
  EBP = (pop32());
  /* 10145126 pop ebx */
  EBX = (pop32());
  /* 10145127 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014512a ret  */
  ESPCHK(0x101442f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005130 @ 0x10145130 (72 bytes, 22 insns) */
void f_10145130(void) {
  FTRACE(0x10145130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10145130 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145132 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145134 push 1 */
  push32((uint32_t)(0x1u));
  /* 10145136 push 0x10155f98 */
  push32((uint32_t)(0x10155f98u));
  /* 1014513b call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145141u);
  /* 10145141 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145143 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145145 push 1 */
  push32((uint32_t)(0x1u));
  /* 10145147 push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 1014514c call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145152u);
  /* 10145152 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145154 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145156 push 1 */
  push32((uint32_t)(0x1u));
  /* 10145158 push 0x10155f90 */
  push32((uint32_t)(0x10155f90u));
  /* 1014515d call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145163u);
  /* 10145163 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145165 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145167 push 1 */
  push32((uint32_t)(0x1u));
  /* 10145169 push 0x10153838 */
  push32((uint32_t)(0x10153838u));
  /* 1014516e call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145174u);
  /* 10145174 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145177 ret  */
  ESPCHK(0x10145130u, _esp0);
  ESP += 4; return;
}

/* FUN_10005180 @ 0x10145180 (55 bytes, 16 insns) */
void f_10145180(void) {
  FTRACE(0x10145180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10145180 cmp dword ptr [esp + 4], 0x10153648 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0x10153648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145188 jne 0x101451b4 */
  if (!C.zf) goto L_101451b4;
  /* 1014518a push 0x10156300 */
  push32((uint32_t)(0x10156300u));
  /* 1014518f call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10145195u);
  /* 10145195 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145198 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014519a je 0x101451b4 */
  if (C.zf) goto L_101451b4;
  /* 1014519c push 0x10156248 */
  push32((uint32_t)(0x10156248u));
  /* 101451a1 call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x101451a7u);
  /* 101451a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101451aa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101451ac je 0x101451b4 */
  if (C.zf) goto L_101451b4;
  /* 101451ae mov eax, 1 */
  EAX = (0x1u);
  /* 101451b3 ret  */
  ESPCHK(0x10145180u, _esp0);
  ESP += 4; return;
L_101451b4:;
  /* 101451b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101451b6 ret  */
  ESPCHK(0x10145180u, _esp0);
  ESP += 4; return;
}

/* FUN_100051c0 @ 0x101451c0 (2008 bytes, 535 insns) */
void f_101451c0(void) {
  FTRACE(0x101451c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101451c0 push 0x10156238 */
  push32((uint32_t)(0x10156238u));
  /* 101451c5 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x101451cbu);
  /* 101451cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101451ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101451d0 jne 0x101451e4 */
  if (!C.zf) goto L_101451e4;
  /* 101451d2 push 0x10153888 */
  push32((uint32_t)(0x10153888u));
  /* 101451d7 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x101451ddu);
  /* 101451dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101451e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101451e2 je 0x10145214 */
  if (C.zf) goto L_10145214;
L_101451e4:;
  /* 101451e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101451e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101451e8 push 0x10153910 */
  push32((uint32_t)(0x10153910u));
  /* 101451ed call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101451f3u);
  /* 101451f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101451f5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101451f7 push 0x101561b8 */
  push32((uint32_t)(0x101561b8u));
  /* 101451fc call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145202u);
  /* 10145202 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145204 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145206 push 0x101561c0 */
  push32((uint32_t)(0x101561c0u));
  /* 1014520b call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145211u);
  /* 10145211 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145214:;
  /* 10145214 push 0x10156370 */
  push32((uint32_t)(0x10156370u));
  /* 10145219 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x1014521fu);
  /* 1014521f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145222 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145225 jg 0x1014524f */
  if ((!C.zf&&C.sf==C.of)) goto L_1014524f;
  /* 10145227 push 0x101562f0 */
  push32((uint32_t)(0x101562f0u));
  /* 1014522c call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10145232u);
  /* 10145232 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145235 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145238 jg 0x1014524f */
  if ((!C.zf&&C.sf==C.of)) goto L_1014524f;
  /* 1014523a push 0x10153648 */
  push32((uint32_t)(0x10153648u));
  /* 1014523f call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10145245u);
  /* 10145245 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145248 cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014524d jle 0x101452ad */
  if ((C.zf||C.sf!=C.of)) goto L_101452ad;
L_1014524f:;
  /* 1014524f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145251 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10145253 push 0x101535e8 */
  push32((uint32_t)(0x101535e8u));
  /* 10145258 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014525eu);
  /* 1014525e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145260 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10145262 push 0x101535f0 */
  push32((uint32_t)(0x101535f0u));
  /* 10145267 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014526du);
  /* 1014526d push 0x10156370 */
  push32((uint32_t)(0x10156370u));
  /* 10145272 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10145278u);
  /* 10145278 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014527b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145280 jg 0x1014529b */
  if ((!C.zf&&C.sf==C.of)) goto L_1014529b;
  /* 10145282 push 0x101562f0 */
  push32((uint32_t)(0x101562f0u));
  /* 10145287 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x1014528du);
  /* 1014528d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145290 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145293 jg 0x1014529b */
  if ((!C.zf&&C.sf==C.of)) goto L_1014529b;
  /* 10145295 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145297 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10145299 jmp 0x1014529f */
  goto L_1014529f;
L_1014529b:;
  /* 1014529b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014529d push 0x5f */
  push32((uint32_t)(0x5fu));
L_1014529f:;
  /* 1014529f push 0x101536c8 */
  push32((uint32_t)(0x101536c8u));
  /* 101452a4 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101452aau);
  /* 101452aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101452ad:;
  /* 101452ad push 0x10153648 */
  push32((uint32_t)(0x10153648u));
  /* 101452b2 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x101452b8u);
  /* 101452b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101452bb cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101452be jle 0x10145373 */
  if ((C.zf||C.sf!=C.of)) goto L_10145373;
  /* 101452c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101452c6 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101452c8 push 0x10156310 */
  push32((uint32_t)(0x10156310u));
  /* 101452cd call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101452d3u);
  /* 101452d3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101452d5 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101452d7 push 0x10156318 */
  push32((uint32_t)(0x10156318u));
  /* 101452dc call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101452e2u);
  /* 101452e2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101452e4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101452e6 push 0x10156300 */
  push32((uint32_t)(0x10156300u));
  /* 101452eb call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101452f1u);
  /* 101452f1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101452f3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101452f5 push 0x10156258 */
  push32((uint32_t)(0x10156258u));
  /* 101452fa call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145300u);
  /* 10145300 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145302 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10145304 push 0x10156240 */
  push32((uint32_t)(0x10156240u));
  /* 10145309 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014530fu);
  /* 1014530f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145311 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145313 push 0x10156248 */
  push32((uint32_t)(0x10156248u));
  /* 10145318 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014531eu);
  /* 1014531e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145321 push 0x10153648 */
  push32((uint32_t)(0x10153648u));
  /* 10145326 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x1014532cu);
  /* 1014532c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014532f cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145332 jle 0x10145373 */
  if ((C.zf||C.sf!=C.of)) goto L_10145373;
  /* 10145334 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145336 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145338 push 0x10156308 */
  push32((uint32_t)(0x10156308u));
  /* 1014533d call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145343u);
  /* 10145343 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145345 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145347 push 0x10156320 */
  push32((uint32_t)(0x10156320u));
  /* 1014534c call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145352u);
  /* 10145352 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145354 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145356 push 0x10156260 */
  push32((uint32_t)(0x10156260u));
  /* 1014535b call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145361u);
  /* 10145361 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145363 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145365 push 0x10156268 */
  push32((uint32_t)(0x10156268u));
  /* 1014536a call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145370u);
  /* 10145370 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145373:;
  /* 10145373 push 0x101560a0 */
  push32((uint32_t)(0x101560a0u));
  /* 10145378 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x1014537eu);
  /* 1014537e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145381 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145384 jle 0x1014541b */
  if ((C.zf||C.sf!=C.of)) goto L_1014541b;
  /* 1014538a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014538c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1014538e push 0x101538d0 */
  push32((uint32_t)(0x101538d0u));
  /* 10145393 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145399u);
  /* 10145399 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014539b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1014539d push 0x101538d8 */
  push32((uint32_t)(0x101538d8u));
  /* 101453a2 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101453a8u);
  /* 101453a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101453aa push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101453ac push 0x101538c8 */
  push32((uint32_t)(0x101538c8u));
  /* 101453b1 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101453b7u);
  /* 101453b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101453b9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101453bb push 0x10155f38 */
  push32((uint32_t)(0x10155f38u));
  /* 101453c0 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101453c6u);
  /* 101453c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101453c8 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101453ca push 0x10155f28 */
  push32((uint32_t)(0x10155f28u));
  /* 101453cf call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101453d5u);
  /* 101453d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101453d7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101453d9 push 0x10155f30 */
  push32((uint32_t)(0x10155f30u));
  /* 101453de call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101453e4u);
  /* 101453e4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101453e7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101453e9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101453eb push 0x101561c8 */
  push32((uint32_t)(0x101561c8u));
  /* 101453f0 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101453f6u);
  /* 101453f6 push 0x101560a0 */
  push32((uint32_t)(0x101560a0u));
  /* 101453fb call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10145401u);
  /* 10145401 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145404 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145407 jle 0x1014541b */
  if ((C.zf||C.sf!=C.of)) goto L_1014541b;
  /* 10145409 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014540b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1014540d push 0x101561d0 */
  push32((uint32_t)(0x101561d0u));
  /* 10145412 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145418u);
  /* 10145418 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014541b:;
  /* 1014541b push 0x101536c0 */
  push32((uint32_t)(0x101536c0u));
  /* 10145420 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10145426u);
  /* 10145426 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145429 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014542c jle 0x1014544f */
  if ((C.zf||C.sf!=C.of)) goto L_1014544f;
  /* 1014542e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145430 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145432 push 0x10156220 */
  push32((uint32_t)(0x10156220u));
  /* 10145437 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014543du);
  /* 1014543d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014543f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145441 push 0x10155f88 */
  push32((uint32_t)(0x10155f88u));
  /* 10145446 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014544cu);
  /* 1014544c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014544f:;
  /* 1014544f push 0x10156370 */
  push32((uint32_t)(0x10156370u));
  /* 10145454 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x1014545au);
  /* 1014545a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014545d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145460 jle 0x10145533 */
  if ((C.zf||C.sf!=C.of)) goto L_10145533;
  /* 10145466 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145468 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1014546a push 0x101560f0 */
  push32((uint32_t)(0x101560f0u));
  /* 1014546f call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145475u);
  /* 10145475 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145477 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10145479 push 0x101560e8 */
  push32((uint32_t)(0x101560e8u));
  /* 1014547e call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145484u);
  /* 10145484 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145486 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145488 push 0x101560e0 */
  push32((uint32_t)(0x101560e0u));
  /* 1014548d call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145493u);
  /* 10145493 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145495 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10145497 push 0x10155fd8 */
  push32((uint32_t)(0x10155fd8u));
  /* 1014549c call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101454a2u);
  /* 101454a2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101454a4 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101454a6 push 0x10155fd0 */
  push32((uint32_t)(0x10155fd0u));
  /* 101454ab call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101454b1u);
  /* 101454b1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101454b3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101454b5 push 0x10155fc8 */
  push32((uint32_t)(0x10155fc8u));
  /* 101454ba call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101454c0u);
  /* 101454c0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101454c3 push 0x10156370 */
  push32((uint32_t)(0x10156370u));
  /* 101454c8 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x101454ceu);
  /* 101454ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101454d1 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101454d4 jle 0x10145533 */
  if ((C.zf||C.sf!=C.of)) goto L_10145533;
  /* 101454d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101454d8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101454da push 0x101560d8 */
  push32((uint32_t)(0x101560d8u));
  /* 101454df call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101454e5u);
  /* 101454e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101454e7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101454e9 push 0x101560c8 */
  push32((uint32_t)(0x101560c8u));
  /* 101454ee call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101454f4u);
  /* 101454f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101454f6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101454f8 push 0x10156118 */
  push32((uint32_t)(0x10156118u));
  /* 101454fd call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145503u);
  /* 10145503 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145505 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10145507 push 0x10155fc0 */
  push32((uint32_t)(0x10155fc0u));
  /* 1014550c call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145512u);
  /* 10145512 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145514 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10145516 push 0x10155fb8 */
  push32((uint32_t)(0x10155fb8u));
  /* 1014551b call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145521u);
  /* 10145521 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145523 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10145525 push 0x10155fb0 */
  push32((uint32_t)(0x10155fb0u));
  /* 1014552a call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145530u);
  /* 10145530 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145533:;
  /* 10145533 push 0x101562f0 */
  push32((uint32_t)(0x101562f0u));
  /* 10145538 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x1014553eu);
  /* 1014553e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145541 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145544 jle 0x10145616 */
  if ((C.zf||C.sf!=C.of)) goto L_10145616;
  /* 1014554a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014554c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1014554e push 0x10153708 */
  push32((uint32_t)(0x10153708u));
  /* 10145553 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145559u);
  /* 10145559 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014555b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1014555d push 0x10153700 */
  push32((uint32_t)(0x10153700u));
  /* 10145562 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145568u);
  /* 10145568 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014556a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1014556c push 0x101536f8 */
  push32((uint32_t)(0x101536f8u));
  /* 10145571 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145577u);
  /* 10145577 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145579 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1014557b push 0x10153678 */
  push32((uint32_t)(0x10153678u));
  /* 10145580 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145586u);
  /* 10145586 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145588 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1014558a push 0x10153670 */
  push32((uint32_t)(0x10153670u));
  /* 1014558f call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145595u);
  /* 10145595 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145597 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10145599 push 0x10153668 */
  push32((uint32_t)(0x10153668u));
  /* 1014559e call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101455a4u);
  /* 101455a4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101455a7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101455a9 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101455ab push 0x10153660 */
  push32((uint32_t)(0x10153660u));
  /* 101455b0 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101455b6u);
  /* 101455b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101455b8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101455ba push 0x10153638 */
  push32((uint32_t)(0x10153638u));
  /* 101455bf call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101455c5u);
  /* 101455c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101455c7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101455c9 push 0x10153630 */
  push32((uint32_t)(0x10153630u));
  /* 101455ce call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101455d4u);
  /* 101455d4 push 0x10153630 */
  push32((uint32_t)(0x10153630u));
  /* 101455d9 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x101455dfu);
  /* 101455df add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101455e2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101455e4 je 0x10145616 */
  if (C.zf) goto L_10145616;
  /* 101455e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101455e8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101455ea push 0x101536e0 */
  push32((uint32_t)(0x101536e0u));
  /* 101455ef call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101455f5u);
  /* 101455f5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101455f7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101455f9 push 0x101536d8 */
  push32((uint32_t)(0x101536d8u));
  /* 101455fe call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145604u);
  /* 10145604 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145606 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10145608 push 0x101536d0 */
  push32((uint32_t)(0x101536d0u));
  /* 1014560d call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145613u);
  /* 10145613 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145616:;
  /* 10145616 push 0x10153650 */
  push32((uint32_t)(0x10153650u));
  /* 1014561b call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10145621u);
  /* 10145621 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145624 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145627 jle 0x101456af */
  if ((C.zf||C.sf!=C.of)) goto L_101456af;
  /* 1014562d push 0x10153640 */
  push32((uint32_t)(0x10153640u));
  /* 10145632 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10145638u);
  /* 10145638 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014563b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014563e jge 0x101456af */
  if ((C.sf==C.of)) goto L_101456af;
  /* 10145640 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145642 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10145644 push 0x101538c0 */
  push32((uint32_t)(0x101538c0u));
  /* 10145649 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014564fu);
  /* 1014564f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145651 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10145653 push 0x101538b8 */
  push32((uint32_t)(0x101538b8u));
  /* 10145658 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014565eu);
  /* 1014565e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145660 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145662 push 0x101538b0 */
  push32((uint32_t)(0x101538b0u));
  /* 10145667 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014566du);
  /* 1014566d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014566f push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10145671 push 0x10153878 */
  push32((uint32_t)(0x10153878u));
  /* 10145676 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014567cu);
  /* 1014567c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014567e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10145680 push 0x10153870 */
  push32((uint32_t)(0x10153870u));
  /* 10145685 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014568bu);
  /* 1014568b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014568d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1014568f push 0x10153868 */
  push32((uint32_t)(0x10153868u));
  /* 10145694 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014569au);
  /* 1014569a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014569d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014569f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101456a1 push 0x101561c8 */
  push32((uint32_t)(0x101561c8u));
  /* 101456a6 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101456acu);
  /* 101456ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101456af:;
  /* 101456af push 0x10153640 */
  push32((uint32_t)(0x10153640u));
  /* 101456b4 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x101456bau);
  /* 101456ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101456bd cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101456c0 jle 0x101457a1 */
  if ((C.zf||C.sf!=C.of)) goto L_101457a1;
  /* 101456c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101456c8 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101456ca push 0x10153618 */
  push32((uint32_t)(0x10153618u));
  /* 101456cf call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101456d5u);
  /* 101456d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101456d7 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101456d9 push 0x10153610 */
  push32((uint32_t)(0x10153610u));
  /* 101456de call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101456e4u);
  /* 101456e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101456e6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101456e8 push 0x10153608 */
  push32((uint32_t)(0x10153608u));
  /* 101456ed call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101456f3u);
  /* 101456f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101456f5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101456f7 push 0x101562d8 */
  push32((uint32_t)(0x101562d8u));
  /* 101456fc call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145702u);
  /* 10145702 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145704 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10145706 push 0x101562d0 */
  push32((uint32_t)(0x101562d0u));
  /* 1014570b call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145711u);
  /* 10145711 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145713 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10145715 push 0x101562c8 */
  push32((uint32_t)(0x101562c8u));
  /* 1014571a call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145720u);
  /* 10145720 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145723 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145725 push 0xa */
  push32((uint32_t)(0xau));
  /* 10145727 push 0x10156350 */
  push32((uint32_t)(0x10156350u));
  /* 1014572c call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145732u);
  /* 10145732 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145734 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10145736 push 0x10156348 */
  push32((uint32_t)(0x10156348u));
  /* 1014573b call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145741u);
  /* 10145741 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145743 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10145745 push 0x10156398 */
  push32((uint32_t)(0x10156398u));
  /* 1014574a call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145750u);
  /* 10145750 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145752 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10145754 push 0x10156390 */
  push32((uint32_t)(0x10156390u));
  /* 10145759 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014575fu);
  /* 1014575f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145761 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10145763 push 0x10156388 */
  push32((uint32_t)(0x10156388u));
  /* 10145768 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014576eu);
  /* 1014576e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145770 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10145772 push 0x10156380 */
  push32((uint32_t)(0x10156380u));
  /* 10145777 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014577du);
  /* 1014577d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145780 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145782 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145784 push 0x101561c8 */
  push32((uint32_t)(0x101561c8u));
  /* 10145789 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014578fu);
  /* 1014578f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145791 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145793 push 0x101561d0 */
  push32((uint32_t)(0x101561d0u));
  /* 10145798 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014579eu);
  /* 1014579e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101457a1:;
  /* 101457a1 push 0x10155f40 */
  push32((uint32_t)(0x10155f40u));
  /* 101457a6 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x101457acu);
  /* 101457ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101457af cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101457b2 jle 0x10145910 */
  if ((C.zf||C.sf!=C.of)) goto L_10145910;
  /* 101457b8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101457ba push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101457bc push 0x101536a0 */
  push32((uint32_t)(0x101536a0u));
  /* 101457c1 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101457c7u);
  /* 101457c7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101457c9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101457cb push 0x101536a8 */
  push32((uint32_t)(0x101536a8u));
  /* 101457d0 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101457d6u);
  /* 101457d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101457d8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101457da push 0x101536b0 */
  push32((uint32_t)(0x101536b0u));
  /* 101457df call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101457e5u);
  /* 101457e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101457e7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101457e9 push 0x101536b8 */
  push32((uint32_t)(0x101536b8u));
  /* 101457ee call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101457f4u);
  /* 101457f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101457f6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101457f8 push 0x10153680 */
  push32((uint32_t)(0x10153680u));
  /* 101457fd call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145803u);
  /* 10145803 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145805 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145807 push 0x10153690 */
  push32((uint32_t)(0x10153690u));
  /* 1014580c call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145812u);
  /* 10145812 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145815 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145817 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145819 push 0x10153748 */
  push32((uint32_t)(0x10153748u));
  /* 1014581e call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145824u);
  /* 10145824 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145826 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145828 push 0x10153750 */
  push32((uint32_t)(0x10153750u));
  /* 1014582d call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145833u);
  /* 10145833 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145835 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145837 push 0x10153758 */
  push32((uint32_t)(0x10153758u));
  /* 1014583c call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145842u);
  /* 10145842 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145844 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145846 push 0x10153730 */
  push32((uint32_t)(0x10153730u));
  /* 1014584b call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145851u);
  /* 10145851 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145853 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145855 push 0x10153738 */
  push32((uint32_t)(0x10153738u));
  /* 1014585a call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145860u);
  /* 10145860 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145862 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145864 push 0x10153740 */
  push32((uint32_t)(0x10153740u));
  /* 10145869 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014586fu);
  /* 1014586f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145872 push 0x10155f40 */
  push32((uint32_t)(0x10155f40u));
  /* 10145877 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x1014587du);
  /* 1014587d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145880 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145883 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145885 jle 0x1014589a */
  if ((C.zf||C.sf!=C.of)) goto L_1014589a;
  /* 10145887 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145889 push 0x10155fe8 */
  push32((uint32_t)(0x10155fe8u));
  /* 1014588e call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145894u);
  /* 10145894 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145896 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145898 jmp 0x101458ab */
  goto L_101458ab;
L_1014589a:;
  /* 1014589a push 0xf */
  push32((uint32_t)(0xfu));
  /* 1014589c push 0x10155fe8 */
  push32((uint32_t)(0x10155fe8u));
  /* 101458a1 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101458a7u);
  /* 101458a7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101458a9 push 0xf */
  push32((uint32_t)(0xfu));
L_101458ab:;
  /* 101458ab push 0x10156048 */
  push32((uint32_t)(0x10156048u));
  /* 101458b0 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101458b6u);
  /* 101458b6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101458b9 push 0x10155fe8 */
  push32((uint32_t)(0x10155fe8u));
  /* 101458be call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x101458c4u);
  /* 101458c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101458c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101458c9 je 0x101458ef */
  if (C.zf) goto L_101458ef;
  /* 101458cb push 0x10156048 */
  push32((uint32_t)(0x10156048u));
  /* 101458d0 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x101458d6u);
  /* 101458d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101458d9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101458db je 0x101458ef */
  if (C.zf) goto L_101458ef;
  /* 101458dd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101458df push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101458e1 push 0x10156040 */
  push32((uint32_t)(0x10156040u));
  /* 101458e6 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101458ecu);
  /* 101458ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101458ef:;
  /* 101458ef push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101458f1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101458f3 push 0x101561c8 */
  push32((uint32_t)(0x101561c8u));
  /* 101458f8 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101458feu);
  /* 101458fe push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145900 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145902 push 0x101561d0 */
  push32((uint32_t)(0x101561d0u));
  /* 10145907 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014590du);
  /* 1014590d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145910:;
  /* 10145910 push 0x101562c8 */
  push32((uint32_t)(0x101562c8u));
  /* 10145915 call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x1014591bu);
  /* 1014591b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014591e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10145920 je 0x10145997 */
  if (C.zf) goto L_10145997;
  /* 10145922 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145924 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145926 push 0x10156130 */
  push32((uint32_t)(0x10156130u));
  /* 1014592b call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145931u);
  /* 10145931 push 0x10156130 */
  push32((uint32_t)(0x10156130u));
  /* 10145936 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x1014593cu);
  /* 1014593c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014593f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10145941 je 0x10145997 */
  if (C.zf) goto L_10145997;
  /* 10145943 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145945 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145947 push 0x10156140 */
  push32((uint32_t)(0x10156140u));
  /* 1014594c call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145952u);
  /* 10145952 push 0x10156140 */
  push32((uint32_t)(0x10156140u));
  /* 10145957 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x1014595du);
  /* 1014595d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145960 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10145962 je 0x10145997 */
  if (C.zf) goto L_10145997;
  /* 10145964 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145966 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145968 push 0x10156138 */
  push32((uint32_t)(0x10156138u));
  /* 1014596d call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145973u);
  /* 10145973 push 0x10156138 */
  push32((uint32_t)(0x10156138u));
  /* 10145978 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x1014597eu);
  /* 1014597e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145981 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10145983 je 0x10145997 */
  if (C.zf) goto L_10145997;
  /* 10145985 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145987 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145989 push 0x10156128 */
  push32((uint32_t)(0x10156128u));
  /* 1014598e call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145994u);
  /* 10145994 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145997:;
  /* 10145997 ret  */
  ESPCHK(0x101451c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100059a0 @ 0x101459a0 (305 bytes, 86 insns) */
void f_101459a0(void) {
  FTRACE(0x101459a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101459a0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101459a2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101459a4 push 0x10156338 */
  push32((uint32_t)(0x10156338u));
  /* 101459a9 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101459afu);
  /* 101459af push 0x10155ee0 */
  push32((uint32_t)(0x10155ee0u));
  /* 101459b4 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x101459bau);
  /* 101459ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101459bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101459bf je 0x101459d3 */
  if (C.zf) goto L_101459d3;
  /* 101459c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101459c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101459c5 push 0x10153620 */
  push32((uint32_t)(0x10153620u));
  /* 101459ca call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101459d0u);
  /* 101459d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101459d3:;
  /* 101459d3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101459d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101459d7 push 0x10156038 */
  push32((uint32_t)(0x10156038u));
  /* 101459dc call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101459e2u);
  /* 101459e2 push 0x10153648 */
  push32((uint32_t)(0x10153648u));
  /* 101459e7 call 0x10145180 */
  push32(0x101459ecu); f_10145180();
  /* 101459ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101459ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101459f1 jne 0x10145a01 */
  if (!C.zf) goto L_10145a01;
  /* 101459f3 mov eax, dword ptr [0x10155f18] */
  EAX = (r32((uint32_t)(0x10155f18)));
  /* 101459f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101459fa je 0x10145a13 */
  if (C.zf) goto L_10145a13;
  /* 101459fc cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101459ff je 0x10145a13 */
  if (C.zf) goto L_10145a13;
L_10145a01:;
  /* 10145a01 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145a03 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10145a05 push 0x10156230 */
  push32((uint32_t)(0x10156230u));
  /* 10145a0a call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145a10u);
  /* 10145a10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145a13:;
  /* 10145a13 push 0x10155fa8 */
  push32((uint32_t)(0x10155fa8u));
  /* 10145a18 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10145a1eu);
  /* 10145a1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145a21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10145a23 je 0x10145a37 */
  if (C.zf) goto L_10145a37;
  /* 10145a25 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145a27 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145a29 push 0x10156000 */
  push32((uint32_t)(0x10156000u));
  /* 10145a2e call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145a34u);
  /* 10145a34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145a37:;
  /* 10145a37 push 0x10156110 */
  push32((uint32_t)(0x10156110u));
  /* 10145a3c call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10145a42u);
  /* 10145a42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145a45 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10145a47 je 0x10145a5b */
  if (C.zf) goto L_10145a5b;
  /* 10145a49 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145a4b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145a4d push 0x10155ff0 */
  push32((uint32_t)(0x10155ff0u));
  /* 10145a52 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145a58u);
  /* 10145a58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145a5b:;
  /* 10145a5b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145a5d push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10145a5f push 0x10156110 */
  push32((uint32_t)(0x10156110u));
  /* 10145a64 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145a6au);
  /* 10145a6a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145a6c push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10145a6e push 0x101560c0 */
  push32((uint32_t)(0x101560c0u));
  /* 10145a73 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145a79u);
  /* 10145a79 push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10145a7e call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10145a84u);
  /* 10145a84 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145a87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10145a89 je 0x10145a9d */
  if (C.zf) goto L_10145a9d;
  /* 10145a8b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145a8d push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10145a8f push 0x10156178 */
  push32((uint32_t)(0x10156178u));
  /* 10145a94 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145a9au);
  /* 10145a9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145a9d:;
  /* 10145a9d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145a9f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10145aa1 push 0x10155fe0 */
  push32((uint32_t)(0x10155fe0u));
  /* 10145aa6 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145aacu);
  /* 10145aac push 0x10156218 */
  push32((uint32_t)(0x10156218u));
  /* 10145ab1 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10145ab7u);
  /* 10145ab7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145aba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10145abc je 0x10145ad0 */
  if (C.zf) goto L_10145ad0;
  /* 10145abe push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145ac0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145ac2 push 0x101538a0 */
  push32((uint32_t)(0x101538a0u));
  /* 10145ac7 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10145acdu);
  /* 10145acd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145ad0:;
  /* 10145ad0 ret  */
  ESPCHK(0x101459a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ae0 @ 0x10145ae0 (536 bytes, 150 insns) */
void f_10145ae0(void) {
  FTRACE(0x10145ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10145ae0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145ae2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145ae4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10145ae6 push 0x10156218 */
  push32((uint32_t)(0x10156218u));
  /* 10145aeb call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145af1u);
  /* 10145af1 push 0x10155fa8 */
  push32((uint32_t)(0x10155fa8u));
  /* 10145af6 call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10145afcu);
  /* 10145afc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145aff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10145b01 je 0x10145b28 */
  if (C.zf) goto L_10145b28;
  /* 10145b03 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145b05 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145b07 push 2 */
  push32((uint32_t)(0x2u));
  /* 10145b09 push 0x10155f98 */
  push32((uint32_t)(0x10155f98u));
  /* 10145b0e call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145b14u);
  /* 10145b14 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145b16 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145b18 push 4 */
  push32((uint32_t)(0x4u));
  /* 10145b1a push 0x10155f90 */
  push32((uint32_t)(0x10155f90u));
  /* 10145b1f call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145b25u);
  /* 10145b25 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145b28:;
  /* 10145b28 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145b2a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145b2c push 1 */
  push32((uint32_t)(0x1u));
  /* 10145b2e push 0x10155f98 */
  push32((uint32_t)(0x10155f98u));
  /* 10145b33 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145b39u);
  /* 10145b39 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145b3b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145b3d push 1 */
  push32((uint32_t)(0x1u));
  /* 10145b3f push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 10145b44 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145b4au);
  /* 10145b4a mov eax, dword ptr [0x10156274] */
  EAX = (r32((uint32_t)(0x10156274)));
  /* 10145b4f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145b52 mov ecx, dword ptr [eax*4 + 0x10155f58] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10155f58)));
  /* 10145b59 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10145b5b jne 0x10145b78 */
  if (!C.zf) goto L_10145b78;
  /* 10145b5d call 0x10145130 */
  push32(0x10145b62u); f_10145130();
  /* 10145b62 push 0x10153838 */
  push32((uint32_t)(0x10153838u));
  /* 10145b67 call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10145b6du);
  /* 10145b6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145b70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10145b72 je 0x10145cf7 */
  if (C.zf) goto L_10145cf7;
L_10145b78:;
  /* 10145b78 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145b7a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145b7c push 1 */
  push32((uint32_t)(0x1u));
  /* 10145b7e push 0x101561a8 */
  push32((uint32_t)(0x101561a8u));
  /* 10145b83 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145b89u);
  /* 10145b89 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145b8b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145b8d push 2 */
  push32((uint32_t)(0x2u));
  /* 10145b8f push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 10145b94 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145b9au);
  /* 10145b9a push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 10145b9f call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10145ba5u);
  /* 10145ba5 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145ba8 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145bab jge 0x10145bba */
  if ((C.sf==C.of)) goto L_10145bba;
  /* 10145bad call 0x10142580 */
  push32(0x10145bb2u); f_10142580();
  /* 10145bb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10145bb4 jne 0x10145cf7 */
  if (!C.zf) goto L_10145cf7;
L_10145bba:;
  /* 10145bba push esi */
  push32((uint32_t)(ESI));
  /* 10145bbb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145bbd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145bbf push 2 */
  push32((uint32_t)(0x2u));
  /* 10145bc1 push 0x10156210 */
  push32((uint32_t)(0x10156210u));
  /* 10145bc6 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145bccu);
  /* 10145bcc push 0x10156210 */
  push32((uint32_t)(0x10156210u));
  /* 10145bd1 call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10145bd7u);
  /* 10145bd7 push 0x10156210 */
  push32((uint32_t)(0x10156210u));
  /* 10145bdc mov esi, eax */
  ESI = (EAX);
  /* 10145bde call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10145be4u);
  /* 10145be4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145be7 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10145be9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10145beb pop esi */
  ESI = (pop32());
  /* 10145bec jg 0x10145cf7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10145cf7;
  /* 10145bf2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145bf4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145bf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10145bf8 push 0x10155ee0 */
  push32((uint32_t)(0x10155ee0u));
  /* 10145bfd call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145c03u);
  /* 10145c03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145c06 call 0x10142690 */
  push32(0x10145c0bu); f_10142690();
  /* 10145c0b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145c0e jge 0x10145c37 */
  if ((C.sf==C.of)) goto L_10145c37;
  /* 10145c10 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145c12 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145c14 push 1 */
  push32((uint32_t)(0x1u));
  /* 10145c16 push 0x10155fa8 */
  push32((uint32_t)(0x10155fa8u));
  /* 10145c1b call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145c21u);
  /* 10145c21 push 0x10155fa8 */
  push32((uint32_t)(0x10155fa8u));
  /* 10145c26 call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10145c2cu);
  /* 10145c2c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145c2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10145c31 je 0x10145cf7 */
  if (C.zf) goto L_10145cf7;
L_10145c37:;
  /* 10145c37 call 0x10145130 */
  push32(0x10145c3cu); f_10145130();
  /* 10145c3c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145c3e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145c40 push 4 */
  push32((uint32_t)(0x4u));
  /* 10145c42 push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 10145c47 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145c4du);
  /* 10145c4d push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 10145c52 call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10145c58u);
  /* 10145c58 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145c5b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145c5e jl 0x10145cf7 */
  if ((C.sf!=C.of)) goto L_10145cf7;
  /* 10145c64 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145c66 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145c68 push 3 */
  push32((uint32_t)(0x3u));
  /* 10145c6a push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10145c6f call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145c75u);
  /* 10145c75 push 0x10156218 */
  push32((uint32_t)(0x10156218u));
  /* 10145c7a call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10145c80u);
  /* 10145c80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145c83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10145c85 je 0x10145c9b */
  if (C.zf) goto L_10145c9b;
  /* 10145c87 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145c89 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145c8b push 4 */
  push32((uint32_t)(0x4u));
  /* 10145c8d push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10145c92 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145c98u);
  /* 10145c98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145c9b:;
  /* 10145c9b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145c9d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145c9f push 1 */
  push32((uint32_t)(0x1u));
  /* 10145ca1 push 0x101535d8 */
  push32((uint32_t)(0x101535d8u));
  /* 10145ca6 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145cacu);
  /* 10145cac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145cae push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10145cb0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10145cb2 push 0x101535d8 */
  push32((uint32_t)(0x101535d8u));
  /* 10145cb7 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145cbdu);
  /* 10145cbd push 0x101538a0 */
  push32((uint32_t)(0x101538a0u));
  /* 10145cc2 call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10145cc8u);
  /* 10145cc8 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145ccb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10145ccd je 0x10145ce3 */
  if (C.zf) goto L_10145ce3;
  /* 10145ccf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145cd1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145cd3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10145cd5 push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10145cda call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145ce0u);
  /* 10145ce0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145ce3:;
  /* 10145ce3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145ce5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145ce7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10145ce9 push 0x101560b8 */
  push32((uint32_t)(0x101560b8u));
  /* 10145cee call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145cf4u);
  /* 10145cf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145cf7:;
  /* 10145cf7 ret  */
  ESPCHK(0x10145ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d00 @ 0x10145d00 (472 bytes, 137 insns) */
void f_10145d00(void) {
  FTRACE(0x10145d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10145d00 push ecx */
  push32((uint32_t)(ECX));
  /* 10145d01 push 0x10156238 */
  push32((uint32_t)(0x10156238u));
  /* 10145d06 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10145d0cu);
  /* 10145d0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145d0f cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145d12 jge 0x10145d27 */
  if ((C.sf==C.of)) goto L_10145d27;
  /* 10145d14 mov eax, dword ptr [0x10156274] */
  EAX = (r32((uint32_t)(0x10156274)));
  /* 10145d19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10145d1b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10145d1e push eax */
  push32((uint32_t)(EAX));
  /* 10145d1f call 0x101425e0 */
  push32(0x10145d24u); f_101425e0();
  /* 10145d24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145d27:;
  /* 10145d27 push 0x10156238 */
  push32((uint32_t)(0x10156238u));
  /* 10145d2c call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10145d32u);
  /* 10145d32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145d35 cmp eax, 0x9c */
  { uint32_t _a=(EAX),_b=(0x9cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145d3a jg 0x10145d4e */
  if ((!C.zf&&C.sf==C.of)) goto L_10145d4e;
  /* 10145d3c push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10145d41 call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10145d47u);
  /* 10145d47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145d4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10145d4c je 0x10145d62 */
  if (C.zf) goto L_10145d62;
L_10145d4e:;
  /* 10145d4e mov ecx, dword ptr [0x10156274] */
  ECX = (r32((uint32_t)(0x10156274)));
  /* 10145d54 push 1 */
  push32((uint32_t)(0x1u));
  /* 10145d56 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10145d59 push ecx */
  push32((uint32_t)(ECX));
  /* 10145d5a call 0x101425e0 */
  push32(0x10145d5fu); f_101425e0();
  /* 10145d5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145d62:;
  /* 10145d62 push esi */
  push32((uint32_t)(ESI));
  /* 10145d63 push edi */
  push32((uint32_t)(EDI));
  /* 10145d64 mov edi, 2 */
  EDI = (0x2u);
L_10145d69:;
  /* 10145d69 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145d6b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10145d6d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10145d72 push 0x10156150 */
  push32((uint32_t)(0x10156150u));
  /* 10145d77 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145d7du);
  /* 10145d7d push 0x10153648 */
  push32((uint32_t)(0x10153648u));
  /* 10145d82 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10145d88u);
  /* 10145d88 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145d8b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145d90 jge 0x10145dab */
  if ((C.sf==C.of)) goto L_10145dab;
  /* 10145d92 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145d94 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10145d96 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10145d9b push 0x10153648 */
  push32((uint32_t)(0x10153648u));
  /* 10145da0 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145da6u);
  /* 10145da6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145da9 jmp 0x10145dd6 */
  goto L_10145dd6;
L_10145dab:;
  /* 10145dab push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10145dad push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10145daf push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10145db4 push 0x10153648 */
  push32((uint32_t)(0x10153648u));
  /* 10145db9 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145dbfu);
  /* 10145dbf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145dc1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10145dc3 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10145dc8 push 0x101560a0 */
  push32((uint32_t)(0x101560a0u));
  /* 10145dcd call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145dd3u);
  /* 10145dd3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145dd6:;
  /* 10145dd6 mov edx, dword ptr [0x10156274] */
  EDX = (r32((uint32_t)(0x10156274)));
  /* 10145ddc add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10145ddf push edx */
  push32((uint32_t)(EDX));
  /* 10145de0 call 0x10142600 */
  push32(0x10145de5u); f_10142600();
  /* 10145de5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145de8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10145dea jne 0x10145e0d */
  if (!C.zf) goto L_10145e0d;
  /* 10145dec call 0x10142690 */
  push32(0x10145df1u); f_10142690();
  /* 10145df1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145df4 jge 0x10145e0d */
  if ((C.sf==C.of)) goto L_10145e0d;
  /* 10145df6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145df8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10145dfa push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10145dff push 0x10156238 */
  push32((uint32_t)(0x10156238u));
  /* 10145e04 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145e0au);
  /* 10145e0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145e0d:;
  /* 10145e0d mov al, byte ptr [0x10156274] */
  AL = (r8((uint32_t)(0x10156274)));
  /* 10145e12 mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10145e16 mov eax, dword ptr [0x10156478] */
  EAX = (r32((uint32_t)(0x10156478)));
  /* 10145e1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10145e1d je 0x10145e35 */
  if (C.zf) goto L_10145e35;
  /* 10145e1f mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10145e23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10145e25 push 0x10153848 */
  push32((uint32_t)(0x10153848u));
  /* 10145e2a push ecx */
  push32((uint32_t)(ECX));
  /* 10145e2b call eax */
  call_ind((uint32_t)(EAX), 0x10145e2du);
  /* 10145e2d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145e30 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145e33 jge 0x10145e75 */
  if ((C.sf==C.of)) goto L_10145e75;
L_10145e35:;
  /* 10145e35 push 5 */
  push32((uint32_t)(0x5u));
  /* 10145e37 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10145e3du);
  /* 10145e3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145e40 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145e45 jle 0x10145e75 */
  if ((C.zf||C.sf!=C.of)) goto L_10145e75;
  /* 10145e47 push 4 */
  push32((uint32_t)(0x4u));
  /* 10145e49 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10145e4fu);
  /* 10145e4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145e52 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145e57 jle 0x10145e75 */
  if ((C.zf||C.sf!=C.of)) goto L_10145e75;
  /* 10145e59 mov esi, 0x1e */
  ESI = (0x1eu);
L_10145e5e:;
  /* 10145e5e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145e60 push 0xa */
  push32((uint32_t)(0xau));
  /* 10145e62 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10145e64 push 0x10153848 */
  push32((uint32_t)(0x10153848u));
  /* 10145e69 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145e6fu);
  /* 10145e6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145e72 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10145e73 jne 0x10145e5e */
  if (!C.zf) goto L_10145e5e;
L_10145e75:;
  /* 10145e75 push 0x10155fe0 */
  push32((uint32_t)(0x10155fe0u));
  /* 10145e7a call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10145e80u);
  /* 10145e80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145e83 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10145e85 je 0x10145e8b */
  if (C.zf) goto L_10145e8b;
  /* 10145e87 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10145e89 jmp 0x10145e8d */
  goto L_10145e8d;
L_10145e8b:;
  /* 10145e8b push 0x64 */
  push32((uint32_t)(0x64u));
L_10145e8d:;
  /* 10145e8d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10145e8f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10145e94 push 0x10156370 */
  push32((uint32_t)(0x10156370u));
  /* 10145e99 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145e9fu);
  /* 10145e9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145ea2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145ea4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10145ea6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10145eab push 0x10153640 */
  push32((uint32_t)(0x10153640u));
  /* 10145eb0 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145eb6u);
  /* 10145eb6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10145eb8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10145eba push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10145ebf push 0x10155f40 */
  push32((uint32_t)(0x10155f40u));
  /* 10145ec4 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10145ecau);
  /* 10145eca add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145ecd dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10145ece jne 0x10145d69 */
  if (!C.zf) goto L_10145d69;
  /* 10145ed4 pop edi */
  EDI = (pop32());
  /* 10145ed5 pop esi */
  ESI = (pop32());
  /* 10145ed6 pop ecx */
  ECX = (pop32());
  /* 10145ed7 ret  */
  ESPCHK(0x10145d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ee0 @ 0x10145ee0 (789 bytes, 244 insns) */
void f_10145ee0(void) {
  FTRACE(0x10145ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10145ee0 push ecx */
  push32((uint32_t)(ECX));
  /* 10145ee1 push 0x10153838 */
  push32((uint32_t)(0x10153838u));
  /* 10145ee6 call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10145eecu);
  /* 10145eec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145eef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10145ef1 je 0x101461f3 */
  if (C.zf) goto L_101461f3;
  /* 10145ef7 call 0x10142580 */
  push32(0x10145efcu); f_10142580();
  /* 10145efc cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145eff jne 0x10145f46 */
  if (!C.zf) goto L_10145f46;
  /* 10145f01 mov eax, dword ptr [0x10156274] */
  EAX = (r32((uint32_t)(0x10156274)));
  /* 10145f06 push eax */
  push32((uint32_t)(EAX));
  /* 10145f07 call 0x10142600 */
  push32(0x10145f0cu); f_10142600();
  /* 10145f0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145f0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10145f11 jne 0x101461f3 */
  if (!C.zf) goto L_101461f3;
  /* 10145f17 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10145f1c push 3 */
  push32((uint32_t)(0x3u));
  /* 10145f1e push 2 */
  push32((uint32_t)(0x2u));
  /* 10145f20 call 0x10142520 */
  push32(0x10145f25u); f_10142520();
  /* 10145f25 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 10145f2a push 3 */
  push32((uint32_t)(0x3u));
  /* 10145f2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10145f2e call 0x10142520 */
  push32(0x10145f33u); f_10142520();
  /* 10145f33 mov ecx, dword ptr [0x10156274] */
  ECX = (r32((uint32_t)(0x10156274)));
  /* 10145f39 push 1 */
  push32((uint32_t)(0x1u));
  /* 10145f3b push ecx */
  push32((uint32_t)(ECX));
  /* 10145f3c call 0x101425e0 */
  push32(0x10145f41u); f_101425e0();
  /* 10145f41 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145f44 pop ecx */
  ECX = (pop32());
  /* 10145f45 ret  */
  ESPCHK(0x10145ee0u, _esp0);
  ESP += 4; return;
L_10145f46:;
  /* 10145f46 push 0x10153838 */
  push32((uint32_t)(0x10153838u));
  /* 10145f4b call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10145f51u);
  /* 10145f51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145f54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10145f56 je 0x101461f3 */
  if (C.zf) goto L_101461f3;
  /* 10145f5c mov edx, dword ptr [0x10156274] */
  EDX = (r32((uint32_t)(0x10156274)));
  /* 10145f62 push edx */
  push32((uint32_t)(EDX));
  /* 10145f63 call 0x10142600 */
  push32(0x10145f68u); f_10142600();
  /* 10145f68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145f6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10145f6d jne 0x10145fe2 */
  if (!C.zf) goto L_10145fe2;
  /* 10145f6f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10145f74 push 3 */
  push32((uint32_t)(0x3u));
  /* 10145f76 push 5 */
  push32((uint32_t)(0x5u));
  /* 10145f78 call 0x10142520 */
  push32(0x10145f7du); f_10142520();
  /* 10145f7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145f80 call 0x10142580 */
  push32(0x10145f85u); f_10142580();
  /* 10145f85 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145f88 jne 0x10145fa9 */
  if (!C.zf) goto L_10145fa9;
  /* 10145f8a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10145f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10145f91 push 4 */
  push32((uint32_t)(0x4u));
  /* 10145f93 call 0x10142520 */
  push32(0x10145f98u); f_10142520();
  /* 10145f98 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10145f9d push 2 */
  push32((uint32_t)(0x2u));
  /* 10145f9f push 4 */
  push32((uint32_t)(0x4u));
  /* 10145fa1 call 0x10142520 */
  push32(0x10145fa6u); f_10142520();
  /* 10145fa6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145fa9:;
  /* 10145fa9 call 0x10142580 */
  push32(0x10145faeu); f_10142580();
  /* 10145fae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10145fb1 jne 0x10145fd2 */
  if (!C.zf) goto L_10145fd2;
  /* 10145fb3 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 10145fb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10145fba push 4 */
  push32((uint32_t)(0x4u));
  /* 10145fbc call 0x10142520 */
  push32(0x10145fc1u); f_10142520();
  /* 10145fc1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 10145fc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10145fc8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10145fca call 0x10142520 */
  push32(0x10145fcfu); f_10142520();
  /* 10145fcf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145fd2:;
  /* 10145fd2 mov eax, dword ptr [0x10156274] */
  EAX = (r32((uint32_t)(0x10156274)));
  /* 10145fd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10145fd9 push eax */
  push32((uint32_t)(EAX));
  /* 10145fda call 0x101425e0 */
  push32(0x10145fdfu); f_101425e0();
  /* 10145fdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10145fe2:;
  /* 10145fe2 push 0x10156230 */
  push32((uint32_t)(0x10156230u));
  /* 10145fe7 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10145fedu);
  /* 10145fed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10145ff0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10145ff2 je 0x10146064 */
  if (C.zf) goto L_10146064;
  /* 10145ff4 push 0x10156110 */
  push32((uint32_t)(0x10156110u));
  /* 10145ff9 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10145fffu);
  /* 10145fff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146002 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10146004 jne 0x10146064 */
  if (!C.zf) goto L_10146064;
  /* 10146006 push 0x10155ee0 */
  push32((uint32_t)(0x10155ee0u));
  /* 1014600b call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10146011u);
  /* 10146011 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146014 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10146016 je 0x10146064 */
  if (C.zf) goto L_10146064;
  /* 10146018 mov eax, dword ptr [0x1015647c] */
  EAX = (r32((uint32_t)(0x1015647c)));
  /* 1014601d mov cl, byte ptr [0x10156274] */
  CL = (r8((uint32_t)(0x10156274)));
  /* 10146023 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10146025 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 10146029 je 0x1014603e */
  if (C.zf) goto L_1014603e;
  /* 1014602b mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 1014602f push 5 */
  push32((uint32_t)(0x5u));
  /* 10146031 push 0x10156110 */
  push32((uint32_t)(0x10156110u));
  /* 10146036 push edx */
  push32((uint32_t)(EDX));
  /* 10146037 call eax */
  call_ind((uint32_t)(EAX), 0x10146039u);
  /* 10146039 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014603c jmp 0x10146040 */
  goto L_10146040;
L_1014603e:;
  /* 1014603e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10146040:;
  /* 10146040 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10146043 push 0 */
  push32((uint32_t)(0x0u));
  /* 10146045 lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 10146048 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 1014604d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1014604f sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10146052 mov eax, edx */
  EAX = (EDX);
  /* 10146054 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 10146057 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10146059 push edx */
  push32((uint32_t)(EDX));
  /* 1014605a push 5 */
  push32((uint32_t)(0x5u));
  /* 1014605c call 0x10142ea0 */
  push32(0x10146061u); f_10142ea0();
  /* 10146061 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10146064:;
  /* 10146064 push 0x10156110 */
  push32((uint32_t)(0x10156110u));
  /* 10146069 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x1014606fu);
  /* 1014606f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146072 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10146074 je 0x10146189 */
  if (C.zf) goto L_10146189;
  /* 1014607a push 0x10155fe0 */
  push32((uint32_t)(0x10155fe0u));
  /* 1014607f call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10146085u);
  /* 10146085 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146088 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014608a jne 0x10146189 */
  if (!C.zf) goto L_10146189;
  /* 10146090 mov eax, dword ptr [0x1015647c] */
  EAX = (r32((uint32_t)(0x1015647c)));
  /* 10146095 mov cl, byte ptr [0x10156274] */
  CL = (r8((uint32_t)(0x10156274)));
  /* 1014609b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014609d mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 101460a1 je 0x101460b6 */
  if (C.zf) goto L_101460b6;
  /* 101460a3 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 101460a7 push 3 */
  push32((uint32_t)(0x3u));
  /* 101460a9 push 0x10155fe0 */
  push32((uint32_t)(0x10155fe0u));
  /* 101460ae push edx */
  push32((uint32_t)(EDX));
  /* 101460af call eax */
  call_ind((uint32_t)(EAX), 0x101460b1u);
  /* 101460b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101460b4 jmp 0x101460b8 */
  goto L_101460b8;
L_101460b6:;
  /* 101460b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101460b8:;
  /* 101460b8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 101460bb push 2 */
  push32((uint32_t)(0x2u));
  /* 101460bd lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 101460c0 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101460c5 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101460c7 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101460ca mov eax, edx */
  EAX = (EDX);
  /* 101460cc shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101460cf add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101460d1 push edx */
  push32((uint32_t)(EDX));
  /* 101460d2 push 3 */
  push32((uint32_t)(0x3u));
  /* 101460d4 call 0x10142ea0 */
  push32(0x101460d9u); f_10142ea0();
  /* 101460d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101460dc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101460de je 0x10146189 */
  if (C.zf) goto L_10146189;
  /* 101460e4 mov eax, dword ptr [0x1015647c] */
  EAX = (r32((uint32_t)(0x1015647c)));
  /* 101460e9 mov cl, byte ptr [0x10156274] */
  CL = (r8((uint32_t)(0x10156274)));
  /* 101460ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101460f1 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 101460f5 je 0x1014610a */
  if (C.zf) goto L_1014610a;
  /* 101460f7 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 101460fb push 1 */
  push32((uint32_t)(0x1u));
  /* 101460fd push 0x10155fe0 */
  push32((uint32_t)(0x10155fe0u));
  /* 10146102 push edx */
  push32((uint32_t)(EDX));
  /* 10146103 call eax */
  call_ind((uint32_t)(EAX), 0x10146105u);
  /* 10146105 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146108 jmp 0x1014610c */
  goto L_1014610c;
L_1014610a:;
  /* 1014610a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1014610c:;
  /* 1014610c lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 10146113 push 2 */
  push32((uint32_t)(0x2u));
  /* 10146115 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10146117 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 1014611a lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1014611d mov eax, 0x51eb851f */
  EAX = (0x51eb851fu);
  /* 10146122 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10146124 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10146127 mov eax, edx */
  EAX = (EDX);
  /* 10146129 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1014612c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014612e push edx */
  push32((uint32_t)(EDX));
  /* 1014612f push 1 */
  push32((uint32_t)(0x1u));
  /* 10146131 call 0x10142ea0 */
  push32(0x10146136u); f_10142ea0();
  /* 10146136 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146139 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014613b je 0x10146189 */
  if (C.zf) goto L_10146189;
  /* 1014613d mov eax, dword ptr [0x1015647c] */
  EAX = (r32((uint32_t)(0x1015647c)));
  /* 10146142 mov cl, byte ptr [0x10156274] */
  CL = (r8((uint32_t)(0x10156274)));
  /* 10146148 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014614a mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 1014614e je 0x10146163 */
  if (C.zf) goto L_10146163;
  /* 10146150 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 10146154 push 4 */
  push32((uint32_t)(0x4u));
  /* 10146156 push 0x10155fe0 */
  push32((uint32_t)(0x10155fe0u));
  /* 1014615b push edx */
  push32((uint32_t)(EDX));
  /* 1014615c call eax */
  call_ind((uint32_t)(EAX), 0x1014615eu);
  /* 1014615e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146161 jmp 0x10146165 */
  goto L_10146165;
L_10146163:;
  /* 10146163 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10146165:;
  /* 10146165 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10146168 push 2 */
  push32((uint32_t)(0x2u));
  /* 1014616a lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 1014616d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10146172 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10146174 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10146177 mov eax, edx */
  EAX = (EDX);
  /* 10146179 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 1014617c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014617e push edx */
  push32((uint32_t)(EDX));
  /* 1014617f push 4 */
  push32((uint32_t)(0x4u));
  /* 10146181 call 0x10142ea0 */
  push32(0x10146186u); f_10142ea0();
  /* 10146186 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10146189:;
  /* 10146189 push 2 */
  push32((uint32_t)(0x2u));
  /* 1014618b call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10146191u);
  /* 10146191 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146194 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146199 jle 0x101461be */
  if ((C.zf||C.sf!=C.of)) goto L_101461be;
  /* 1014619b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 101461a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 101461a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 101461a4 call 0x10142520 */
  push32(0x101461a9u); f_10142520();
  /* 101461a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 101461ab call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101461b1u);
  /* 101461b1 push eax */
  push32((uint32_t)(EAX));
  /* 101461b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101461b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101461b6 call 0x10142520 */
  push32(0x101461bbu); f_10142520();
  /* 101461bb add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101461be:;
  /* 101461be push 0 */
  push32((uint32_t)(0x0u));
  /* 101461c0 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101461c6u);
  /* 101461c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101461c9 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101461ce jle 0x101461f3 */
  if ((C.zf||C.sf!=C.of)) goto L_101461f3;
  /* 101461d0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 101461d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 101461d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 101461d9 call 0x10142520 */
  push32(0x101461deu); f_10142520();
  /* 101461de push 0 */
  push32((uint32_t)(0x0u));
  /* 101461e0 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101461e6u);
  /* 101461e6 push eax */
  push32((uint32_t)(EAX));
  /* 101461e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101461e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 101461eb call 0x10142520 */
  push32(0x101461f0u); f_10142520();
  /* 101461f0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101461f3:;
  /* 101461f3 pop ecx */
  ECX = (pop32());
  /* 101461f4 ret  */
  ESPCHK(0x10145ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006200 @ 0x10146200 (818 bytes, 268 insns) */
void f_10146200(void) {
  FTRACE(0x10146200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10146200 push ecx */
  push32((uint32_t)(ECX));
  /* 10146201 push 4 */
  push32((uint32_t)(0x4u));
  /* 10146203 push 4 */
  push32((uint32_t)(0x4u));
  /* 10146205 push 0 */
  push32((uint32_t)(0x0u));
  /* 10146207 call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x1014620du);
  /* 1014620d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146210 call dword ptr [0x10156530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156530))), 0x10146216u);
  /* 10146216 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10146218 je 0x10146530 */
  if (C.zf) goto L_10146530;
  /* 1014621e push 4 */
  push32((uint32_t)(0x4u));
  /* 10146220 push 4 */
  push32((uint32_t)(0x4u));
  /* 10146222 push 9 */
  push32((uint32_t)(0x9u));
  /* 10146224 call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x1014622au);
  /* 1014622a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014622d call 0x10142580 */
  push32(0x10146232u); f_10142580();
  /* 10146232 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146235 je 0x10146530 */
  if (C.zf) goto L_10146530;
  /* 1014623b call dword ptr [0x10156530] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156530))), 0x10146241u);
  /* 10146241 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10146243 je 0x10146521 */
  if (C.zf) goto L_10146521;
  /* 10146249 push esi */
  push32((uint32_t)(ESI));
  /* 1014624a push edi */
  push32((uint32_t)(EDI));
  /* 1014624b push 4 */
  push32((uint32_t)(0x4u));
  /* 1014624d push 4 */
  push32((uint32_t)(0x4u));
  /* 1014624f push 9 */
  push32((uint32_t)(0x9u));
  /* 10146251 call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x10146257u);
  /* 10146257 push 0x101560c0 */
  push32((uint32_t)(0x101560c0u));
  /* 1014625c call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10146262u);
  /* 10146262 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146265 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10146267 jne 0x101462cf */
  if (!C.zf) goto L_101462cf;
  /* 10146269 mov al, byte ptr [0x10156274] */
  AL = (r8((uint32_t)(0x10156274)));
  /* 1014626e mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 10146272 mov eax, dword ptr [0x1015647c] */
  EAX = (r32((uint32_t)(0x1015647c)));
  /* 10146277 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10146279 je 0x10146290 */
  if (C.zf) goto L_10146290;
  /* 1014627b mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1014627f push 3 */
  push32((uint32_t)(0x3u));
  /* 10146281 push 0x101560c0 */
  push32((uint32_t)(0x101560c0u));
  /* 10146286 push ecx */
  push32((uint32_t)(ECX));
  /* 10146287 call eax */
  call_ind((uint32_t)(EAX), 0x10146289u);
  /* 10146289 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014628c mov esi, eax */
  ESI = (EAX);
  /* 1014628e jmp 0x10146292 */
  goto L_10146292;
L_10146290:;
  /* 10146290 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10146292:;
  /* 10146292 push 3 */
  push32((uint32_t)(0x3u));
  /* 10146294 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x1014629au);
  /* 1014629a lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 1014629d mov edi, eax */
  EDI = (EAX);
  /* 1014629f mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101462a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101462a7 lea ecx, [esi + edx*2] */
  ECX = ((uint32_t)(ESI + EDX*2));
  /* 101462aa imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101462ac sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101462af mov eax, edx */
  EAX = (EDX);
  /* 101462b1 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101462b4 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101462b6 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101462b8 jge 0x101462c0 */
  if ((C.sf==C.of)) goto L_101462c0;
  /* 101462ba push 4 */
  push32((uint32_t)(0x4u));
  /* 101462bc push 4 */
  push32((uint32_t)(0x4u));
  /* 101462be jmp 0x101462c4 */
  goto L_101462c4;
L_101462c0:;
  /* 101462c0 push 6 */
  push32((uint32_t)(0x6u));
  /* 101462c2 push 6 */
  push32((uint32_t)(0x6u));
L_101462c4:;
  /* 101462c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 101462c6 call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x101462ccu);
  /* 101462cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101462cf:;
  /* 101462cf push 0x10155fe0 */
  push32((uint32_t)(0x10155fe0u));
  /* 101462d4 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x101462dau);
  /* 101462da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101462dd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101462df jne 0x10146348 */
  if (!C.zf) goto L_10146348;
  /* 101462e1 mov eax, dword ptr [0x1015647c] */
  EAX = (r32((uint32_t)(0x1015647c)));
  /* 101462e6 mov cl, byte ptr [0x10156274] */
  CL = (r8((uint32_t)(0x10156274)));
  /* 101462ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101462ee mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 101462f2 je 0x10146309 */
  if (C.zf) goto L_10146309;
  /* 101462f4 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 101462f8 push 3 */
  push32((uint32_t)(0x3u));
  /* 101462fa push 0x10155fe0 */
  push32((uint32_t)(0x10155fe0u));
  /* 101462ff push edx */
  push32((uint32_t)(EDX));
  /* 10146300 call eax */
  call_ind((uint32_t)(EAX), 0x10146302u);
  /* 10146302 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146305 mov esi, eax */
  ESI = (EAX);
  /* 10146307 jmp 0x1014630b */
  goto L_1014630b;
L_10146309:;
  /* 10146309 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1014630b:;
  /* 1014630b push 3 */
  push32((uint32_t)(0x3u));
  /* 1014630d call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10146313u);
  /* 10146313 mov edi, eax */
  EDI = (EAX);
  /* 10146315 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10146318 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014631b lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1014631e mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10146323 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10146325 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10146328 mov ecx, edx */
  ECX = (EDX);
  /* 1014632a shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1014632d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014632f cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146331 jge 0x10146339 */
  if ((C.sf==C.of)) goto L_10146339;
  /* 10146333 push 9 */
  push32((uint32_t)(0x9u));
  /* 10146335 push 2 */
  push32((uint32_t)(0x2u));
  /* 10146337 jmp 0x1014633d */
  goto L_1014633d;
L_10146339:;
  /* 10146339 push 6 */
  push32((uint32_t)(0x6u));
  /* 1014633b push 6 */
  push32((uint32_t)(0x6u));
L_1014633d:;
  /* 1014633d push 9 */
  push32((uint32_t)(0x9u));
  /* 1014633f call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x10146345u);
  /* 10146345 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10146348:;
  /* 10146348 push 0x10156110 */
  push32((uint32_t)(0x10156110u));
  /* 1014634d call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10146353u);
  /* 10146353 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146356 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10146358 jne 0x101463bf */
  if (!C.zf) goto L_101463bf;
  /* 1014635a mov eax, dword ptr [0x1015647c] */
  EAX = (r32((uint32_t)(0x1015647c)));
  /* 1014635f mov dl, byte ptr [0x10156274] */
  DL = (r8((uint32_t)(0x10156274)));
  /* 10146365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10146367 mov byte ptr [esp + 8], dl */
  w8((uint32_t)(ESP + 0x8), (DL));
  /* 1014636b je 0x10146382 */
  if (C.zf) goto L_10146382;
  /* 1014636d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10146371 push 3 */
  push32((uint32_t)(0x3u));
  /* 10146373 push 0x10156110 */
  push32((uint32_t)(0x10156110u));
  /* 10146378 push ecx */
  push32((uint32_t)(ECX));
  /* 10146379 call eax */
  call_ind((uint32_t)(EAX), 0x1014637bu);
  /* 1014637b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014637e mov esi, eax */
  ESI = (EAX);
  /* 10146380 jmp 0x10146384 */
  goto L_10146384;
L_10146382:;
  /* 10146382 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10146384:;
  /* 10146384 push 3 */
  push32((uint32_t)(0x3u));
  /* 10146386 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x1014638cu);
  /* 1014638c lea edx, [esi + esi*2] */
  EDX = ((uint32_t)(ESI + ESI*2));
  /* 1014638f mov edi, eax */
  EDI = (EAX);
  /* 10146391 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10146396 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146399 lea ecx, [esi + edx*4] */
  ECX = ((uint32_t)(ESI + EDX*4));
  /* 1014639c imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1014639e sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101463a1 mov eax, edx */
  EAX = (EDX);
  /* 101463a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101463a5 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101463a8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101463aa push 9 */
  push32((uint32_t)(0x9u));
  /* 101463ac cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101463ae jge 0x101463b4 */
  if ((C.sf==C.of)) goto L_101463b4;
  /* 101463b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 101463b2 jmp 0x101463b6 */
  goto L_101463b6;
L_101463b4:;
  /* 101463b4 push 6 */
  push32((uint32_t)(0x6u));
L_101463b6:;
  /* 101463b6 call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x101463bcu);
  /* 101463bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101463bf:;
  /* 101463bf push 0x10156300 */
  push32((uint32_t)(0x10156300u));
  /* 101463c4 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x101463cau);
  /* 101463ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101463cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101463cf je 0x101463e3 */
  if (C.zf) goto L_101463e3;
  /* 101463d1 push 0x10156248 */
  push32((uint32_t)(0x10156248u));
  /* 101463d6 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x101463dcu);
  /* 101463dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101463df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101463e1 jne 0x10146404 */
  if (!C.zf) goto L_10146404;
L_101463e3:;
  /* 101463e3 push 3 */
  push32((uint32_t)(0x3u));
  /* 101463e5 call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x101463ebu);
  /* 101463eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101463ee cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101463f3 jge 0x10146404 */
  if ((C.sf==C.of)) goto L_10146404;
  /* 101463f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 101463f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 101463f9 push 9 */
  push32((uint32_t)(0x9u));
  /* 101463fb call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x10146401u);
  /* 10146401 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10146404:;
  /* 10146404 push 0x10155fa8 */
  push32((uint32_t)(0x10155fa8u));
  /* 10146409 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x1014640fu);
  /* 1014640f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146412 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10146414 jne 0x10146487 */
  if (!C.zf) goto L_10146487;
  /* 10146416 call 0x10142690 */
  push32(0x1014641bu); f_10142690();
  /* 1014641b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014641e jge 0x10146487 */
  if ((C.sf==C.of)) goto L_10146487;
  /* 10146420 mov eax, dword ptr [0x10156478] */
  EAX = (r32((uint32_t)(0x10156478)));
  /* 10146425 mov cl, byte ptr [0x10156274] */
  CL = (r8((uint32_t)(0x10156274)));
  /* 1014642b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014642d mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 10146431 je 0x10146448 */
  if (C.zf) goto L_10146448;
  /* 10146433 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10146437 push 2 */
  push32((uint32_t)(0x2u));
  /* 10146439 push 0x10155fa8 */
  push32((uint32_t)(0x10155fa8u));
  /* 1014643e push edx */
  push32((uint32_t)(EDX));
  /* 1014643f call eax */
  call_ind((uint32_t)(EAX), 0x10146441u);
  /* 10146441 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146444 mov esi, eax */
  ESI = (EAX);
  /* 10146446 jmp 0x1014644a */
  goto L_1014644a;
L_10146448:;
  /* 10146448 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1014644a:;
  /* 1014644a push 2 */
  push32((uint32_t)(0x2u));
  /* 1014644c call dword ptr [0x101564fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564fc))), 0x10146452u);
  /* 10146452 mov edi, eax */
  EDI = (EAX);
  /* 10146454 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10146457 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014645a lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 1014645d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 10146462 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 10146464 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10146467 mov ecx, edx */
  ECX = (EDX);
  /* 10146469 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1014646c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014646e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146470 jge 0x10146478 */
  if ((C.sf==C.of)) goto L_10146478;
  /* 10146472 push 3 */
  push32((uint32_t)(0x3u));
  /* 10146474 push 5 */
  push32((uint32_t)(0x5u));
  /* 10146476 jmp 0x1014647c */
  goto L_1014647c;
L_10146478:;
  /* 10146478 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014647a push 7 */
  push32((uint32_t)(0x7u));
L_1014647c:;
  /* 1014647c push 9 */
  push32((uint32_t)(0x9u));
  /* 1014647e call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x10146484u);
  /* 10146484 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10146487:;
  /* 10146487 push 0x10156230 */
  push32((uint32_t)(0x10156230u));
  /* 1014648c call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10146492u);
  /* 10146492 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146495 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10146497 pop edi */
  EDI = (pop32());
  /* 10146498 pop esi */
  ESI = (pop32());
  /* 10146499 jne 0x101464aa */
  if (!C.zf) goto L_101464aa;
  /* 1014649b push 1 */
  push32((uint32_t)(0x1u));
  /* 1014649d push 1 */
  push32((uint32_t)(0x1u));
  /* 1014649f push 9 */
  push32((uint32_t)(0x9u));
  /* 101464a1 call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x101464a7u);
  /* 101464a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101464aa:;
  /* 101464aa push 0x10156038 */
  push32((uint32_t)(0x10156038u));
  /* 101464af call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x101464b5u);
  /* 101464b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101464b8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101464ba je 0x101464ce */
  if (C.zf) goto L_101464ce;
  /* 101464bc push 0x10153620 */
  push32((uint32_t)(0x10153620u));
  /* 101464c1 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x101464c7u);
  /* 101464c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101464ca test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101464cc jne 0x101464dd */
  if (!C.zf) goto L_101464dd;
L_101464ce:;
  /* 101464ce push 1 */
  push32((uint32_t)(0x1u));
  /* 101464d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 101464d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 101464d4 call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x101464dau);
  /* 101464da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101464dd:;
  /* 101464dd push 0x10155ee0 */
  push32((uint32_t)(0x10155ee0u));
  /* 101464e2 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x101464e8u);
  /* 101464e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101464eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101464ed jne 0x101464fe */
  if (!C.zf) goto L_101464fe;
  /* 101464ef push 4 */
  push32((uint32_t)(0x4u));
  /* 101464f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101464f3 push 6 */
  push32((uint32_t)(0x6u));
  /* 101464f5 call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x101464fbu);
  /* 101464fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101464fe:;
  /* 101464fe push 0x10156338 */
  push32((uint32_t)(0x10156338u));
  /* 10146503 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10146509u);
  /* 10146509 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014650c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014650e jne 0x10146530 */
  if (!C.zf) goto L_10146530;
  /* 10146510 push 1 */
  push32((uint32_t)(0x1u));
  /* 10146512 push 1 */
  push32((uint32_t)(0x1u));
  /* 10146514 push 9 */
  push32((uint32_t)(0x9u));
  /* 10146516 call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x1014651cu);
  /* 1014651c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014651f pop ecx */
  ECX = (pop32());
  /* 10146520 ret  */
  ESPCHK(0x10146200u, _esp0);
  ESP += 4; return;
L_10146521:;
  /* 10146521 push 3 */
  push32((uint32_t)(0x3u));
  /* 10146523 push 6 */
  push32((uint32_t)(0x6u));
  /* 10146525 push 0 */
  push32((uint32_t)(0x0u));
  /* 10146527 call dword ptr [0x101564d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564d4))), 0x1014652du);
  /* 1014652d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10146530:;
  /* 10146530 pop ecx */
  ECX = (pop32());
  /* 10146531 ret  */
  ESPCHK(0x10146200u, _esp0);
  ESP += 4; return;
}

/* FUN_10006540 @ 0x10146540 (174 bytes, 50 insns) */
void f_10146540(void) {
  FTRACE(0x10146540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10146540 push 0x10156558 */
  push32((uint32_t)(0x10156558u));
  /* 10146545 call 0x10142630 */
  push32(0x1014654au); f_10142630();
  /* 1014654a push 0x10156300 */
  push32((uint32_t)(0x10156300u));
  /* 1014654f call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10146555u);
  /* 10146555 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146558 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014655a je 0x1014657c */
  if (C.zf) goto L_1014657c;
  /* 1014655c push 0x10156248 */
  push32((uint32_t)(0x10156248u));
  /* 10146561 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x10146567u);
  /* 10146567 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014656a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1014656c je 0x1014657c */
  if (C.zf) goto L_1014657c;
  /* 1014656e push 0x1014f16c */
  push32((uint32_t)(0x1014f16cu));
  /* 10146573 call 0x10142630 */
  push32(0x10146578u); f_10142630();
  /* 10146578 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014657b ret  */
  ESPCHK(0x10146540u, _esp0);
  ESP += 4; return;
L_1014657c:;
  /* 1014657c mov eax, dword ptr [0x10155f18] */
  EAX = (r32((uint32_t)(0x10155f18)));
  /* 10146581 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146584 je 0x101465e2 */
  if (C.zf) goto L_101465e2;
  /* 10146586 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146589 je 0x101465e2 */
  if (C.zf) goto L_101465e2;
  /* 1014658b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014658e je 0x101465e2 */
  if (C.zf) goto L_101465e2;
  /* 10146590 push 0x10156230 */
  push32((uint32_t)(0x10156230u));
  /* 10146595 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x1014659bu);
  /* 1014659b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014659e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101465a0 je 0x101465c2 */
  if (C.zf) goto L_101465c2;
  /* 101465a2 push 0x10156110 */
  push32((uint32_t)(0x10156110u));
  /* 101465a7 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x101465adu);
  /* 101465ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101465b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101465b2 jne 0x101465c2 */
  if (!C.zf) goto L_101465c2;
  /* 101465b4 push 0x10156558 */
  push32((uint32_t)(0x10156558u));
  /* 101465b9 call 0x10142630 */
  push32(0x101465beu); f_10142630();
  /* 101465be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101465c1 ret  */
  ESPCHK(0x10146540u, _esp0);
  ESP += 4; return;
L_101465c2:;
  /* 101465c2 push 0x10156110 */
  push32((uint32_t)(0x10156110u));
  /* 101465c7 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x101465cdu);
  /* 101465cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101465d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101465d2 je 0x101465ed */
  if (C.zf) goto L_101465ed;
  /* 101465d4 push 0x1014f1d8 */
  push32((uint32_t)(0x1014f1d8u));
  /* 101465d9 call 0x10142630 */
  push32(0x101465deu); f_10142630();
  /* 101465de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101465e1 ret  */
  ESPCHK(0x10146540u, _esp0);
  ESP += 4; return;
L_101465e2:;
  /* 101465e2 push 0x1014f1d8 */
  push32((uint32_t)(0x1014f1d8u));
  /* 101465e7 call 0x10142630 */
  push32(0x101465ecu); f_10142630();
  /* 101465ec pop ecx */
  ECX = (pop32());
L_101465ed:;
  /* 101465ed ret  */
  ESPCHK(0x10146540u, _esp0);
  ESP += 4; return;
}

/* FUN_100065f0 @ 0x101465f0 (70 bytes, 22 insns) */
void f_101465f0(void) {
  FTRACE(0x101465f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101465f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 101465f2 call 0x10142670 */
  push32(0x101465f7u); f_10142670();
  /* 101465f7 push 0x10153648 */
  push32((uint32_t)(0x10153648u));
  /* 101465fc call 0x10145180 */
  push32(0x10146601u); f_10145180();
  /* 10146601 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146604 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10146606 je 0x10146612 */
  if (C.zf) goto L_10146612;
  /* 10146608 push 0 */
  push32((uint32_t)(0x0u));
  /* 1014660a call 0x10142670 */
  push32(0x1014660fu); f_10142670();
  /* 1014660f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10146612:;
  /* 10146612 call 0x10142680 */
  push32(0x10146617u); f_10142680();
  /* 10146617 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10146619 jg 0x1014662d */
  if ((!C.zf&&C.sf==C.of)) goto L_1014662d;
  /* 1014661b push 0x10153898 */
  push32((uint32_t)(0x10153898u));
  /* 10146620 call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10146626u);
  /* 10146626 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014662b jle 0x10146635 */
  if ((C.zf||C.sf!=C.of)) goto L_10146635;
L_1014662d:;
  /* 1014662d push 0 */
  push32((uint32_t)(0x0u));
  /* 1014662f call 0x10142670 */
  push32(0x10146634u); f_10142670();
  /* 10146634 pop ecx */
  ECX = (pop32());
L_10146635:;
  /* 10146635 ret  */
  ESPCHK(0x101465f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006640 @ 0x10146640 (235 bytes, 66 insns) */
void f_10146640(void) {
  FTRACE(0x10146640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10146640 push 0x10156158 */
  push32((uint32_t)(0x10156158u));
  /* 10146645 call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x1014664bu);
  /* 1014664b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014664e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10146650 je 0x10146666 */
  if (C.zf) goto L_10146666;
  /* 10146652 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10146654 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10146656 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10146658 push 0x10156330 */
  push32((uint32_t)(0x10156330u));
  /* 1014665d call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10146663u);
  /* 10146663 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10146666:;
  /* 10146666 push 0x10156070 */
  push32((uint32_t)(0x10156070u));
  /* 1014666b call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10146671u);
  /* 10146671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146674 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10146676 je 0x1014668c */
  if (C.zf) goto L_1014668c;
  /* 10146678 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1014667a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1014667c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1014667e push 0x10153628 */
  push32((uint32_t)(0x10153628u));
  /* 10146683 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10146689u);
  /* 10146689 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014668c:;
  /* 1014668c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014668e push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10146690 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10146692 push 0x10153888 */
  push32((uint32_t)(0x10153888u));
  /* 10146697 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x1014669du);
  /* 1014669d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014669f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101466a1 push 0x10156198 */
  push32((uint32_t)(0x10156198u));
  /* 101466a6 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101466acu);
  /* 101466ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101466ae push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101466b0 push 0x10156190 */
  push32((uint32_t)(0x10156190u));
  /* 101466b5 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101466bbu);
  /* 101466bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101466bd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101466bf push 0x10156160 */
  push32((uint32_t)(0x10156160u));
  /* 101466c4 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101466cau);
  /* 101466ca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101466cc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101466ce push 0x10156158 */
  push32((uint32_t)(0x10156158u));
  /* 101466d3 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101466d9u);
  /* 101466d9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101466dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101466de push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101466e0 push 0x10156168 */
  push32((uint32_t)(0x10156168u));
  /* 101466e5 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101466ebu);
  /* 101466eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101466ed push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101466ef push 0x10156058 */
  push32((uint32_t)(0x10156058u));
  /* 101466f4 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x101466fau);
  /* 101466fa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101466fc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101466fe push 0x10156060 */
  push32((uint32_t)(0x10156060u));
  /* 10146703 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10146709u);
  /* 10146709 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014670b push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1014670d push 0x10156068 */
  push32((uint32_t)(0x10156068u));
  /* 10146712 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10146718u);
  /* 10146718 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014671a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1014671c push 0x10156070 */
  push32((uint32_t)(0x10156070u));
  /* 10146721 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x10146727u);
  /* 10146727 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014672a ret  */
  ESPCHK(0x10146640u, _esp0);
  ESP += 4; return;
}

/* FUN_10006730 @ 0x10146730 (303 bytes, 90 insns) */
void f_10146730(void) {
  FTRACE(0x10146730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10146730 push ecx */
  push32((uint32_t)(ECX));
  /* 10146731 push ebx */
  push32((uint32_t)(EBX));
  /* 10146732 push ebp */
  push32((uint32_t)(EBP));
  /* 10146733 push esi */
  push32((uint32_t)(ESI));
  /* 10146734 push edi */
  push32((uint32_t)(EDI));
  /* 10146735 push 0x10153898 */
  push32((uint32_t)(0x10153898u));
  /* 1014673a call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10146740u);
  /* 10146740 push 0x10156210 */
  push32((uint32_t)(0x10156210u));
  /* 10146745 mov ebx, eax */
  EBX = (EAX);
  /* 10146747 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x1014674du);
  /* 1014674d push 0x10156210 */
  push32((uint32_t)(0x10156210u));
  /* 10146752 mov edi, eax */
  EDI = (EAX);
  /* 10146754 call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x1014675au);
  /* 1014675a push 0x10155ee0 */
  push32((uint32_t)(0x10155ee0u));
  /* 1014675f mov ebp, eax */
  EBP = (EAX);
  /* 10146761 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10146767u);
  /* 10146767 push 0x10155ee0 */
  push32((uint32_t)(0x10155ee0u));
  /* 1014676c mov esi, eax */
  ESI = (EAX);
  /* 1014676e call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10146774u);
  /* 10146774 push 0x10153898 */
  push32((uint32_t)(0x10153898u));
  /* 10146779 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 1014677d call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10146783u);
  /* 10146783 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 10146787 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014678a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014678c add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014678e sub esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10146790 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10146792 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10146794 pop edi */
  EDI = (pop32());
  /* 10146795 pop esi */
  ESI = (pop32());
  /* 10146796 pop ebp */
  EBP = (pop32());
  /* 10146797 pop ebx */
  EBX = (pop32());
  /* 10146798 jne 0x10146800 */
  if (!C.zf) goto L_10146800;
  /* 1014679a cmp dword ptr [0x10156170], 0x28 */
  { uint32_t _a=(r32((uint32_t)(0x10156170))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101467a1 jle 0x10146800 */
  if ((C.zf||C.sf!=C.of)) goto L_10146800;
  /* 101467a3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101467a5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101467a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 101467a9 push 0x10153898 */
  push32((uint32_t)(0x10153898u));
  /* 101467ae call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101467b4u);
  /* 101467b4 push 0x10156178 */
  push32((uint32_t)(0x10156178u));
  /* 101467b9 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x101467bfu);
  /* 101467bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101467c2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101467c4 je 0x101467da */
  if (C.zf) goto L_101467da;
  /* 101467c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101467c8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101467ca push 6 */
  push32((uint32_t)(0x6u));
  /* 101467cc push 0x10153898 */
  push32((uint32_t)(0x10153898u));
  /* 101467d1 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101467d7u);
  /* 101467d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101467da:;
  /* 101467da push 0x10155fe0 */
  push32((uint32_t)(0x10155fe0u));
  /* 101467df call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x101467e5u);
  /* 101467e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101467e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101467ea je 0x10146800 */
  if (C.zf) goto L_10146800;
  /* 101467ec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101467ee push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101467f0 push 8 */
  push32((uint32_t)(0x8u));
  /* 101467f2 push 0x10153898 */
  push32((uint32_t)(0x10153898u));
  /* 101467f7 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101467fdu);
  /* 101467fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10146800:;
  /* 10146800 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146802 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10146804 push 0x101562a8 */
  push32((uint32_t)(0x101562a8u));
  /* 10146809 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014680fu);
  /* 1014680f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146811 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10146813 push 0x10156290 */
  push32((uint32_t)(0x10156290u));
  /* 10146818 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014681eu);
  /* 1014681e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146820 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10146822 push 0x101562a0 */
  push32((uint32_t)(0x101562a0u));
  /* 10146827 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014682du);
  /* 1014682d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014682f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10146831 push 0x10156280 */
  push32((uint32_t)(0x10156280u));
  /* 10146836 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014683cu);
  /* 1014683c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014683e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10146840 push 0x10156288 */
  push32((uint32_t)(0x10156288u));
  /* 10146845 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014684bu);
  /* 1014684b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014684d push 0xa */
  push32((uint32_t)(0xau));
  /* 1014684f push 0x10156278 */
  push32((uint32_t)(0x10156278u));
  /* 10146854 call dword ptr [0x101564c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c8))), 0x1014685au);
  /* 1014685a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014685d pop ecx */
  ECX = (pop32());
  /* 1014685e ret  */
  ESPCHK(0x10146730u, _esp0);
  ESP += 4; return;
}

/* FUN_10006860 @ 0x10146860 (517 bytes, 145 insns) */
void f_10146860(void) {
  FTRACE(0x10146860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10146860 push esi */
  push32((uint32_t)(ESI));
  /* 10146861 push 0x10156218 */
  push32((uint32_t)(0x10156218u));
  /* 10146866 call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x1014686cu);
  /* 1014686c push 0x10156218 */
  push32((uint32_t)(0x10156218u));
  /* 10146871 mov esi, eax */
  ESI = (EAX);
  /* 10146873 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10146879u);
  /* 10146879 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014687c sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014687e jne 0x10146894 */
  if (!C.zf) goto L_10146894;
  /* 10146880 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146882 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146884 push 5 */
  push32((uint32_t)(0x5u));
  /* 10146886 push 0x10156218 */
  push32((uint32_t)(0x10156218u));
  /* 1014688b call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10146891u);
  /* 10146891 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10146894:;
  /* 10146894 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146896 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146898 push 1 */
  push32((uint32_t)(0x1u));
  /* 1014689a push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 1014689f call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101468a5u);
  /* 101468a5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101468a7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101468a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 101468ab push 0x101561a8 */
  push32((uint32_t)(0x101561a8u));
  /* 101468b0 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101468b6u);
  /* 101468b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101468b8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101468ba push 2 */
  push32((uint32_t)(0x2u));
  /* 101468bc push 0x10156210 */
  push32((uint32_t)(0x10156210u));
  /* 101468c1 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101468c7u);
  /* 101468c7 push 0x10156210 */
  push32((uint32_t)(0x10156210u));
  /* 101468cc call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x101468d2u);
  /* 101468d2 push 0x10156210 */
  push32((uint32_t)(0x10156210u));
  /* 101468d7 mov esi, eax */
  ESI = (EAX);
  /* 101468d9 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x101468dfu);
  /* 101468df add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101468e2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101468e4 jne 0x10146a63 */
  if (!C.zf) goto L_10146a63;
  /* 101468ea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101468ec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101468ee push 1 */
  push32((uint32_t)(0x1u));
  /* 101468f0 push 0x10155ee0 */
  push32((uint32_t)(0x10155ee0u));
  /* 101468f5 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101468fbu);
  /* 101468fb push 0x10155ee0 */
  push32((uint32_t)(0x10155ee0u));
  /* 10146900 call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10146906u);
  /* 10146906 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146909 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014690b je 0x10146a63 */
  if (C.zf) goto L_10146a63;
  /* 10146911 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146913 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146915 push 1 */
  push32((uint32_t)(0x1u));
  /* 10146917 push 0x10155f90 */
  push32((uint32_t)(0x10155f90u));
  /* 1014691c call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10146922u);
  /* 10146922 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146924 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146926 push 1 */
  push32((uint32_t)(0x1u));
  /* 10146928 push 0x10155f98 */
  push32((uint32_t)(0x10155f98u));
  /* 1014692d call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10146933u);
  /* 10146933 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146935 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146937 push 1 */
  push32((uint32_t)(0x1u));
  /* 10146939 push 0x10153838 */
  push32((uint32_t)(0x10153838u));
  /* 1014693e call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10146944u);
  /* 10146944 push 0x10153838 */
  push32((uint32_t)(0x10153838u));
  /* 10146949 call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x1014694fu);
  /* 1014694f add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146952 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10146954 je 0x10146a63 */
  if (C.zf) goto L_10146a63;
  /* 1014695a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014695c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014695e push 1 */
  push32((uint32_t)(0x1u));
  /* 10146960 push 0x10155fa8 */
  push32((uint32_t)(0x10155fa8u));
  /* 10146965 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x1014696bu);
  /* 1014696b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014696d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014696f push 1 */
  push32((uint32_t)(0x1u));
  /* 10146971 push 0x101560b8 */
  push32((uint32_t)(0x101560b8u));
  /* 10146976 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x1014697cu);
  /* 1014697c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014697e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146980 push 1 */
  push32((uint32_t)(0x1u));
  /* 10146982 push 0x101535d8 */
  push32((uint32_t)(0x101535d8u));
  /* 10146987 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x1014698du);
  /* 1014698d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1014698f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146991 push 1 */
  push32((uint32_t)(0x1u));
  /* 10146993 push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10146998 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x1014699eu);
  /* 1014699e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101469a1 push 0x10155fe0 */
  push32((uint32_t)(0x10155fe0u));
  /* 101469a6 call dword ptr [0x10156510] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156510))), 0x101469acu);
  /* 101469ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101469af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101469b1 je 0x10146a63 */
  if (C.zf) goto L_10146a63;
  /* 101469b7 push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 101469bc call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x101469c2u);
  /* 101469c2 push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 101469c7 mov esi, eax */
  ESI = (EAX);
  /* 101469c9 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x101469cfu);
  /* 101469cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101469d2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101469d4 jne 0x101469fd */
  if (!C.zf) goto L_101469fd;
  /* 101469d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101469d8 call 0x10142640 */
  push32(0x101469ddu); f_10142640();
  /* 101469dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101469e0 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101469e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101469e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101469e7 jge 0x101469ed */
  if ((C.sf==C.of)) goto L_101469ed;
  /* 101469e9 push 6 */
  push32((uint32_t)(0x6u));
  /* 101469eb jmp 0x101469ef */
  goto L_101469ef;
L_101469ed:;
  /* 101469ed push 4 */
  push32((uint32_t)(0x4u));
L_101469ef:;
  /* 101469ef push 0x10155f78 */
  push32((uint32_t)(0x10155f78u));
  /* 101469f4 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x101469fau);
  /* 101469fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101469fd:;
  /* 101469fd push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10146a02 call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10146a08u);
  /* 10146a08 push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10146a0d mov esi, eax */
  ESI = (EAX);
  /* 10146a0f call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10146a15u);
  /* 10146a15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146a18 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10146a1a jne 0x10146a30 */
  if (!C.zf) goto L_10146a30;
  /* 10146a1c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146a1e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146a20 push 7 */
  push32((uint32_t)(0x7u));
  /* 10146a22 push 0x10156098 */
  push32((uint32_t)(0x10156098u));
  /* 10146a27 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10146a2du);
  /* 10146a2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10146a30:;
  /* 10146a30 push 0x101535d8 */
  push32((uint32_t)(0x101535d8u));
  /* 10146a35 call dword ptr [0x10156504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156504))), 0x10146a3bu);
  /* 10146a3b push 0x101535d8 */
  push32((uint32_t)(0x101535d8u));
  /* 10146a40 mov esi, eax */
  ESI = (EAX);
  /* 10146a42 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10146a48u);
  /* 10146a48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146a4b sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10146a4d jne 0x10146a63 */
  if (!C.zf) goto L_10146a63;
  /* 10146a4f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146a51 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146a53 push 3 */
  push32((uint32_t)(0x3u));
  /* 10146a55 push 0x101535d8 */
  push32((uint32_t)(0x101535d8u));
  /* 10146a5a call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10146a60u);
  /* 10146a60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10146a63:;
  /* 10146a63 pop esi */
  ESI = (pop32());
  /* 10146a64 ret  */
  ESPCHK(0x10146860u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a70 @ 0x10146a70 (121 bytes, 36 insns) */
void f_10146a70(void) {
  FTRACE(0x10146a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10146a70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10146a72 call 0x10142670 */
  push32(0x10146a77u); f_10142670();
  /* 10146a77 push 0x10153848 */
  push32((uint32_t)(0x10153848u));
  /* 10146a7c call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10146a82u);
  /* 10146a82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146a85 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146a88 jge 0x10146a9d */
  if ((C.sf==C.of)) goto L_10146a9d;
  /* 10146a8a mov eax, dword ptr [0x10156274] */
  EAX = (r32((uint32_t)(0x10156274)));
  /* 10146a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10146a91 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10146a94 push eax */
  push32((uint32_t)(EAX));
  /* 10146a95 call 0x101425e0 */
  push32(0x10146a9au); f_101425e0();
  /* 10146a9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10146a9d:;
  /* 10146a9d push 0x10153848 */
  push32((uint32_t)(0x10153848u));
  /* 10146aa2 call dword ptr [0x10156500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10156500))), 0x10146aa8u);
  /* 10146aa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146aab cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146aae jle 0x10146ac4 */
  if ((C.zf||C.sf!=C.of)) goto L_10146ac4;
  /* 10146ab0 mov ecx, dword ptr [0x10156274] */
  ECX = (r32((uint32_t)(0x10156274)));
  /* 10146ab6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10146ab8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10146abb push ecx */
  push32((uint32_t)(ECX));
  /* 10146abc call 0x101425e0 */
  push32(0x10146ac1u); f_101425e0();
  /* 10146ac1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10146ac4:;
  /* 10146ac4 mov edx, dword ptr [0x10156274] */
  EDX = (r32((uint32_t)(0x10156274)));
  /* 10146aca add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10146acd push edx */
  push32((uint32_t)(EDX));
  /* 10146ace call 0x10142600 */
  push32(0x10146ad3u); f_10142600();
  /* 10146ad3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10146ad5 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10146ad8 push eax */
  push32((uint32_t)(EAX));
  /* 10146ad9 call 0x10142670 */
  push32(0x10146adeu); f_10142670();
  /* 10146ade push 0 */
  push32((uint32_t)(0x0u));
  /* 10146ae0 call 0x10142670 */
  push32(0x10146ae5u); f_10142670();
  /* 10146ae5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146ae8 ret  */
  ESPCHK(0x10146a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006af0 @ 0x10146af0 (86 bytes, 20 insns) */
void f_10146af0(void) {
  FTRACE(0x10146af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10146af0 mov eax, dword ptr [0x10156274] */
  EAX = (r32((uint32_t)(0x10156274)));
  /* 10146af5 mov ecx, dword ptr [eax*4 + 0x10155f58] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10155f58)));
  /* 10146afc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10146afe je 0x10146b05 */
  if (C.zf) goto L_10146b05;
  /* 10146b00 call 0x101465f0 */
  push32(0x10146b05u); f_101465f0();
L_10146b05:;
  /* 10146b05 call 0x10145d00 */
  push32(0x10146b0au); f_10145d00();
  /* 10146b0a call 0x10146640 */
  push32(0x10146b0fu); f_10146640();
  /* 10146b0f call 0x10142690 */
  push32(0x10146b14u); f_10142690();
  /* 10146b14 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146b17 jge 0x10146b1e */
  if ((C.sf==C.of)) goto L_10146b1e;
  /* 10146b19 call 0x10146730 */
  push32(0x10146b1eu); f_10146730();
L_10146b1e:;
  /* 10146b1e call 0x10145ae0 */
  push32(0x10146b23u); f_10145ae0();
  /* 10146b23 call 0x101459a0 */
  push32(0x10146b28u); f_101459a0();
  /* 10146b28 call 0x10142690 */
  push32(0x10146b2du); f_10142690();
  /* 10146b2d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146b30 jge 0x10146b37 */
  if ((C.sf==C.of)) goto L_10146b37;
  /* 10146b32 call 0x101451c0 */
  push32(0x10146b37u); f_101451c0();
L_10146b37:;
  /* 10146b37 call 0x10145ee0 */
  push32(0x10146b3cu); f_10145ee0();
  /* 10146b3c call 0x10146200 */
  push32(0x10146b41u); f_10146200();
  /* 10146b41 jmp 0x10146540 */
  f_10146540(); return;
}

/* FUN_10006b50 @ 0x10146b50 (247 bytes, 70 insns) */
void f_10146b50(void) {
  FTRACE(0x10146b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10146b50 push esi */
  push32((uint32_t)(ESI));
  /* 10146b51 push edi */
  push32((uint32_t)(EDI));
  /* 10146b52 call 0x10146a70 */
  push32(0x10146b57u); f_10146a70();
  /* 10146b57 call 0x10146860 */
  push32(0x10146b5cu); f_10146860();
  /* 10146b5c mov edi, 2 */
  EDI = (0x2u);
L_10146b61:;
  /* 10146b61 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146b63 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10146b65 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10146b6a push 0x10156150 */
  push32((uint32_t)(0x10156150u));
  /* 10146b6f call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10146b75u);
  /* 10146b75 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146b77 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10146b79 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10146b7e push 0x10153648 */
  push32((uint32_t)(0x10153648u));
  /* 10146b83 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10146b89u);
  /* 10146b89 mov eax, dword ptr [0x10156274] */
  EAX = (r32((uint32_t)(0x10156274)));
  /* 10146b8e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10146b91 push eax */
  push32((uint32_t)(EAX));
  /* 10146b92 call 0x10142600 */
  push32(0x10146b97u); f_10142600();
  /* 10146b97 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146b9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10146b9c jne 0x10146bbc */
  if (!C.zf) goto L_10146bbc;
  /* 10146b9e mov esi, 0x64 */
  ESI = (0x64u);
L_10146ba3:;
  /* 10146ba3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146ba5 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10146ba7 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10146ba9 push 0x10153848 */
  push32((uint32_t)(0x10153848u));
  /* 10146bae call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10146bb4u);
  /* 10146bb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146bb7 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10146bb8 jne 0x10146ba3 */
  if (!C.zf) goto L_10146ba3;
  /* 10146bba jmp 0x10146bd0 */
  goto L_10146bd0;
L_10146bbc:;
  /* 10146bbc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146bbe push 0xa */
  push32((uint32_t)(0xau));
  /* 10146bc0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10146bc2 push 0x10156120 */
  push32((uint32_t)(0x10156120u));
  /* 10146bc7 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10146bcdu);
  /* 10146bcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10146bd0:;
  /* 10146bd0 push 0x10155fe0 */
  push32((uint32_t)(0x10155fe0u));
  /* 10146bd5 call dword ptr [0x1015650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015650c))), 0x10146bdbu);
  /* 10146bdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146bde test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10146be0 jne 0x10146bf9 */
  if (!C.zf) goto L_10146bf9;
  /* 10146be2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146be4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10146be6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10146beb push 0x10153650 */
  push32((uint32_t)(0x10153650u));
  /* 10146bf0 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10146bf6u);
  /* 10146bf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10146bf9:;
  /* 10146bf9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146bfb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10146bfd push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10146c02 push 0x10153640 */
  push32((uint32_t)(0x10153640u));
  /* 10146c07 call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10146c0du);
  /* 10146c0d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10146c0f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10146c11 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10146c16 push 0x10155f40 */
  push32((uint32_t)(0x10155f40u));
  /* 10146c1b call dword ptr [0x101564c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564c4))), 0x10146c21u);
  /* 10146c21 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146c24 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10146c25 jne 0x10146b61 */
  if (!C.zf) goto L_10146b61;
  /* 10146c2b call 0x10146640 */
  push32(0x10146c30u); f_10146640();
  /* 10146c30 call 0x10145ee0 */
  push32(0x10146c35u); f_10145ee0();
  /* 10146c35 call 0x10146200 */
  push32(0x10146c3au); f_10146200();
  /* 10146c3a call 0x101451c0 */
  push32(0x10146c3fu); f_101451c0();
  /* 10146c3f call 0x101459a0 */
  push32(0x10146c44u); f_101459a0();
  /* 10146c44 pop edi */
  EDI = (pop32());
  /* 10146c45 pop esi */
  ESI = (pop32());
  /* 10146c46 ret  */
  ESPCHK(0x10146b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c50 @ 0x10146c50 (279 bytes, 62 insns) [1 switch table(s)] */
void f_10146c50(void) {
  FTRACE(0x10146c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10146c50 call 0x10142590 */
  push32(0x10146c55u); f_10142590();
  /* 10146c55 mov dword ptr [0x10155f18], eax */
  w32((uint32_t)(0x10155f18), (EAX));
  /* 10146c5a call 0x10142570 */
  push32(0x10146c5fu); f_10142570();
  /* 10146c5f mov dword ptr [0x10156328], eax */
  w32((uint32_t)(0x10156328), (EAX));
  /* 10146c64 call 0x10142580 */
  push32(0x10146c69u); f_10142580();
  /* 10146c69 mov dword ptr [0x10153858], eax */
  w32((uint32_t)(0x10153858), (EAX));
  /* 10146c6e call 0x10142f50 */
  push32(0x10146c73u); f_10142f50();
  /* 10146c73 push 0x1014f114 */
  push32((uint32_t)(0x1014f114u));
  /* 10146c78 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10146c7a call dword ptr [0x101564cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564cc))), 0x10146c80u);
  /* 10146c80 call 0x10146540 */
  push32(0x10146c85u); f_10146540();
  /* 10146c85 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10146c87 push 0x1014f244 */
  push32((uint32_t)(0x1014f244u));
  /* 10146c8c call 0x10142610 */
  push32(0x10146c91u); f_10142610();
  /* 10146c91 mov eax, dword ptr [0x10155f18] */
  EAX = (r32((uint32_t)(0x10155f18)));
  /* 10146c96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146c99 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146c9c ja 0x10146d62 */
  if ((!C.cf&&!C.zf)) goto L_10146d62;
  /* 10146ca2 jmp dword ptr [eax*4 + 0x10146d68] */
  switch (EAX) {
    case 0: goto L_10146ca9;
    case 1: goto L_10146d25;
    case 2: goto L_10146d2c;
    case 3: goto L_10146d2c;
    case 4: goto L_10146d2c;
    case 5: goto L_10146ca9;
    default: x86_unimpl("switch@0x10146ca2 out of table"); return;
  }
L_10146ca9:;
  /* 10146ca9 cmp dword ptr [0x10153858], 3 */
  { uint32_t _a=(r32((uint32_t)(0x10153858))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146cb0 jne 0x10146ce2 */
  if (!C.zf) goto L_10146ce2;
  /* 10146cb2 push 0x1014f160 */
  push32((uint32_t)(0x1014f160u));
  /* 10146cb7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10146cb9 call dword ptr [0x101564cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564cc))), 0x10146cbfu);
  /* 10146cbf push 0x1014f16c */
  push32((uint32_t)(0x1014f16cu));
  /* 10146cc4 call 0x10142630 */
  push32(0x10146cc9u); f_10142630();
  /* 10146cc9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10146ccb push 0x1014f41c */
  push32((uint32_t)(0x1014f41cu));
  /* 10146cd0 call 0x10142610 */
  push32(0x10146cd5u); f_10142610();
  /* 10146cd5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146cd8 call 0x10146b50 */
  push32(0x10146cddu); f_10146b50();
  /* 10146cdd jmp 0x10146d62 */
  goto L_10146d62;
L_10146ce2:;
  /* 10146ce2 push 0x1014f114 */
  push32((uint32_t)(0x1014f114u));
  /* 10146ce7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10146ce9 call dword ptr [0x101564cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564cc))), 0x10146cefu);
  /* 10146cef push 0x10156558 */
  push32((uint32_t)(0x10156558u));
  /* 10146cf4 call 0x10142630 */
  push32(0x10146cf9u); f_10142630();
  /* 10146cf9 mov eax, dword ptr [0x10153858] */
  EAX = (r32((uint32_t)(0x10153858)));
  /* 10146cfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10146d03 jne 0x10146d0f */
  if (!C.zf) goto L_10146d0f;
  /* 10146d05 mov dword ptr [0x1014f248], 4 */
  w32((uint32_t)(0x1014f248), (0x4u));
L_10146d0f:;
  /* 10146d0f push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10146d11 push 0x1014f244 */
  push32((uint32_t)(0x1014f244u));
  /* 10146d16 call 0x10142610 */
  push32(0x10146d1bu); f_10142610();
  /* 10146d1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146d1e call 0x10146af0 */
  push32(0x10146d23u); f_10146af0();
  /* 10146d23 jmp 0x10146d62 */
  goto L_10146d62;
L_10146d25:;
  /* 10146d25 call 0x101442f0 */
  push32(0x10146d2au); f_101442f0();
  /* 10146d2a jmp 0x10146d62 */
  goto L_10146d62;
L_10146d2c:;
  /* 10146d2c push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10146d31 call dword ptr [0x101564e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564e8))), 0x10146d37u);
  /* 10146d37 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10146d3c call dword ptr [0x101564ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564ec))), 0x10146d42u);
  /* 10146d42 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 10146d47 call dword ptr [0x101564f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564f0))), 0x10146d4du);
  /* 10146d4d push 0x1014f07c */
  push32((uint32_t)(0x1014f07cu));
  /* 10146d52 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10146d54 call dword ptr [0x101564cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101564cc))), 0x10146d5au);
  /* 10146d5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146d5d call 0x10143270 */
  push32(0x10146d62u); f_10143270();
L_10146d62:;
  /* 10146d62 jmp 0x101430d0 */
  f_101430d0(); return;
}

/* FUN_10006d80 @ 0x10146d80 (82 bytes, 32 insns) */
void f_10146d80(void) {
  FTRACE(0x10146d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10146d80 push ebp */
  push32((uint32_t)(EBP));
  /* 10146d81 mov ebp, esp */
  EBP = (ESP);
  /* 10146d83 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10146d86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10146d89 push esi */
  push32((uint32_t)(ESI));
  /* 10146d8a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10146d8d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10146d90 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10146d93 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 10146d9a push eax */
  push32((uint32_t)(EAX));
  /* 10146d9b lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10146d9e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10146da1 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 10146da8 push eax */
  push32((uint32_t)(EAX));
  /* 10146da9 call 0x1014710c */
  push32(0x10146daeu); f_1014710c();
  /* 10146dae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146db1 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 10146db4 mov esi, eax */
  ESI = (EAX);
  /* 10146db6 js 0x10146dc0 */
  if (C.sf) goto L_10146dc0;
  /* 10146db8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10146dbb and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10146dbe jmp 0x10146dcd */
  goto L_10146dcd;
L_10146dc0:;
  /* 10146dc0 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10146dc3 push eax */
  push32((uint32_t)(EAX));
  /* 10146dc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10146dc6 call 0x10146ff4 */
  push32(0x10146dcbu); f_10146ff4();
  /* 10146dcb pop ecx */
  ECX = (pop32());
  /* 10146dcc pop ecx */
  ECX = (pop32());
L_10146dcd:;
  /* 10146dcd mov eax, esi */
  EAX = (ESI);
  /* 10146dcf pop esi */
  ESI = (pop32());
  /* 10146dd0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10146dd1 ret  */
  ESPCHK(0x10146d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dd2 @ 0x10146dd2 (23 bytes, 6 insns) */
void f_10146dd2(void) {
  FTRACE(0x10146dd2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10146dd2 call 0x10146dea */
  push32(0x10146dd7u); f_10146dea();
  /* 10146dd7 call 0x10147966 */
  push32(0x10146ddcu); f_10147966();
  /* 10146ddc mov dword ptr [0x10156620], eax */
  w32((uint32_t)(0x10156620), (EAX));
  /* 10146de1 call 0x10147916 */
  push32(0x10146de6u); f_10147916();
  /* 10146de6 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 10146de8 ret  */
  ESPCHK(0x10146dd2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dea @ 0x10146dea (56 bytes, 8 insns) */
void f_10146dea(void) {
  FTRACE(0x10146deau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10146dea mov eax, 0x10147d3f */
  EAX = (0x10147d3fu);
  /* 10146def mov dword ptr [0x1015065c], 0x101479e9 */
  w32((uint32_t)(0x1015065c), (0x101479e9u));
  /* 10146df9 mov dword ptr [0x10150658], eax */
  w32((uint32_t)(0x10150658), (EAX));
  /* 10146dfe mov dword ptr [0x10150660], 0x10147a4f */
  w32((uint32_t)(0x10150660), (0x10147a4fu));
  /* 10146e08 mov dword ptr [0x10150664], 0x1014798f */
  w32((uint32_t)(0x10150664), (0x1014798fu));
  /* 10146e12 mov dword ptr [0x10150668], 0x10147a37 */
  w32((uint32_t)(0x10150668), (0x10147a37u));
  /* 10146e1c mov dword ptr [0x1015066c], eax */
  w32((uint32_t)(0x1015066c), (EAX));
  /* 10146e21 ret  */
  ESPCHK(0x10146deau, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x10146e24 (39 bytes, 16 insns) */
void f_10146e24(void) {
  FTRACE(0x10146e24u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10146e24 push ebp */
  push32((uint32_t)(EBP));
  /* 10146e25 mov ebp, esp */
  EBP = (ESP);
  /* 10146e27 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10146e2a wait  */
  /* wait (no observable integer/reg state) */
  /* 10146e2b fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 10146e2e wait  */
  /* wait (no observable integer/reg state) */
  /* 10146e2f mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 10146e33 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 10146e36 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10146e3a fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 10146e3d fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 10146e40 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 10146e43 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10146e46 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10146e49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10146e4a ret  */
  ESPCHK(0x10146e24u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e4b @ 0x10146e4b (217 bytes, 57 insns) */
void f_10146e4b(void) {
  FTRACE(0x10146e4bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10146e4b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10146e4f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146e52 jne 0x10146ee0 */
  if (!C.zf) goto L_10146ee0;
  /* 10146e58 call dword ptr [0x1014e014] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e014))), 0x10146e5eu);
  /* 10146e5e push 1 */
  push32((uint32_t)(0x1u));
  /* 10146e60 mov dword ptr [0x1015663c], eax */
  w32((uint32_t)(0x1015663c), (EAX));
  /* 10146e65 call 0x1014881c */
  push32(0x10146e6au); f_1014881c();
  /* 10146e6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10146e6c pop ecx */
  ECX = (pop32());
  /* 10146e6d je 0x10146eab */
  if (C.zf) goto L_10146eab;
  /* 10146e6f mov eax, dword ptr [0x1015663c] */
  EAX = (r32((uint32_t)(0x1015663c)));
  /* 10146e74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10146e76 mov cl, byte ptr [0x1015663d] */
  CL = (r8((uint32_t)(0x1015663d)));
  /* 10146e7c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10146e81 shr dword ptr [0x1015663c], 0x10 */
  w32((uint32_t)(0x1015663c), (sh_shr((uint32_t)(r32((uint32_t)(0x1015663c))), (0x10u)&0x1f, 32)));
  /* 10146e88 mov dword ptr [0x10156644], eax */
  w32((uint32_t)(0x10156644), (EAX));
  /* 10146e8d mov dword ptr [0x10156648], ecx */
  w32((uint32_t)(0x10156648), (ECX));
  /* 10146e93 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10146e96 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10146e98 mov dword ptr [0x10156640], eax */
  w32((uint32_t)(0x10156640), (EAX));
  /* 10146e9d call 0x10147ed3 */
  push32(0x10146ea2u); f_10147ed3();
  /* 10146ea2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10146ea4 jne 0x10146eaf */
  if (!C.zf) goto L_10146eaf;
  /* 10146ea6 call 0x10148879 */
  push32(0x10146eabu); f_10148879();
L_10146eab:;
  /* 10146eab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10146ead jmp 0x10146f21 */
  goto L_10146f21;
L_10146eaf:;
  /* 10146eaf call dword ptr [0x1014e010] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e010))), 0x10146eb5u);
  /* 10146eb5 mov dword ptr [0x10157d34], eax */
  w32((uint32_t)(0x10157d34), (EAX));
  /* 10146eba call 0x10148575 */
  push32(0x10146ebfu); f_10148575();
  /* 10146ebf mov dword ptr [0x10156628], eax */
  w32((uint32_t)(0x10156628), (EAX));
  /* 10146ec4 call 0x1014805f */
  push32(0x10146ec9u); f_1014805f();
  /* 10146ec9 call 0x10148328 */
  push32(0x10146eceu); f_10148328();
  /* 10146ece call 0x1014826f */
  push32(0x10146ed3u); f_1014826f();
  /* 10146ed3 call 0x10147db5 */
  push32(0x10146ed8u); f_10147db5();
  /* 10146ed8 inc dword ptr [0x10156624] */
  { uint32_t _r=(r32((uint32_t)(0x10156624)))+1; w32((uint32_t)(0x10156624), (_r)); fl_inc(_r,32); }
  /* 10146ede jmp 0x10146f1e */
  goto L_10146f1e;
L_10146ee0:;
  /* 10146ee0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10146ee2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146ee4 jne 0x10146f12 */
  if (!C.zf) goto L_10146f12;
  /* 10146ee6 cmp dword ptr [0x10156624], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10156624))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146eec jle 0x10146eab */
  if ((C.zf||C.sf!=C.of)) goto L_10146eab;
  /* 10146eee dec dword ptr [0x10156624] */
  { uint32_t _r=(r32((uint32_t)(0x10156624)))-1; w32((uint32_t)(0x10156624), (_r)); fl_dec(_r,32); }
  /* 10146ef4 cmp dword ptr [0x10156674], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10156674))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146efa jne 0x10146f01 */
  if (!C.zf) goto L_10146f01;
  /* 10146efc call 0x10147df3 */
  push32(0x10146f01u); f_10147df3();
L_10146f01:;
  /* 10146f01 call 0x1014821b */
  push32(0x10146f06u); f_1014821b();
  /* 10146f06 call 0x10147f27 */
  push32(0x10146f0bu); f_10147f27();
  /* 10146f0b call 0x10148879 */
  push32(0x10146f10u); f_10148879();
  /* 10146f10 jmp 0x10146f1e */
  goto L_10146f1e;
L_10146f12:;
  /* 10146f12 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146f15 jne 0x10146f1e */
  if (!C.zf) goto L_10146f1e;
  /* 10146f17 push ecx */
  push32((uint32_t)(ECX));
  /* 10146f18 call 0x10147fbf */
  push32(0x10146f1du); f_10147fbf();
  /* 10146f1d pop ecx */
  ECX = (pop32());
L_10146f1e:;
  /* 10146f1e push 1 */
  push32((uint32_t)(0x1u));
  /* 10146f20 pop eax */
  EAX = (pop32());
L_10146f21:;
  /* 10146f21 ret 0xc */
  ESPCHK(0x10146e4bu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10146f24 (157 bytes, 73 insns) */
void f_10146f24(void) {
  FTRACE(0x10146f24u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10146f24 push ebp */
  push32((uint32_t)(EBP));
  /* 10146f25 mov ebp, esp */
  EBP = (ESP);
  /* 10146f27 push ebx */
  push32((uint32_t)(EBX));
  /* 10146f28 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10146f2b push esi */
  push32((uint32_t)(ESI));
  /* 10146f2c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10146f2f push edi */
  push32((uint32_t)(EDI));
  /* 10146f30 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10146f33 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10146f35 jne 0x10146f40 */
  if (!C.zf) goto L_10146f40;
  /* 10146f37 cmp dword ptr [0x10156624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10156624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146f3e jmp 0x10146f66 */
  goto L_10146f66;
L_10146f40:;
  /* 10146f40 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146f43 je 0x10146f4a */
  if (C.zf) goto L_10146f4a;
  /* 10146f45 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146f48 jne 0x10146f6c */
  if (!C.zf) goto L_10146f6c;
L_10146f4a:;
  /* 10146f4a mov eax, dword ptr [0x10157d38] */
  EAX = (r32((uint32_t)(0x10157d38)));
  /* 10146f4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10146f51 je 0x10146f5c */
  if (C.zf) goto L_10146f5c;
  /* 10146f53 push edi */
  push32((uint32_t)(EDI));
  /* 10146f54 push esi */
  push32((uint32_t)(ESI));
  /* 10146f55 push ebx */
  push32((uint32_t)(EBX));
  /* 10146f56 call eax */
  call_ind((uint32_t)(EAX), 0x10146f58u);
  /* 10146f58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10146f5a je 0x10146f68 */
  if (C.zf) goto L_10146f68;
L_10146f5c:;
  /* 10146f5c push edi */
  push32((uint32_t)(EDI));
  /* 10146f5d push esi */
  push32((uint32_t)(ESI));
  /* 10146f5e push ebx */
  push32((uint32_t)(EBX));
  /* 10146f5f call 0x10146e4b */
  push32(0x10146f64u); f_10146e4b();
  /* 10146f64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10146f66:;
  /* 10146f66 jne 0x10146f6c */
  if (!C.zf) goto L_10146f6c;
L_10146f68:;
  /* 10146f68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10146f6a jmp 0x10146fba */
  goto L_10146fba;
L_10146f6c:;
  /* 10146f6c push edi */
  push32((uint32_t)(EDI));
  /* 10146f6d push esi */
  push32((uint32_t)(ESI));
  /* 10146f6e push ebx */
  push32((uint32_t)(EBX));
  /* 10146f6f call 0x10142700 */
  push32(0x10146f74u); f_10142700();
  /* 10146f74 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146f77 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10146f7a jne 0x10146f88 */
  if (!C.zf) goto L_10146f88;
  /* 10146f7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10146f7e jne 0x10146fb7 */
  if (!C.zf) goto L_10146fb7;
  /* 10146f80 push edi */
  push32((uint32_t)(EDI));
  /* 10146f81 push eax */
  push32((uint32_t)(EAX));
  /* 10146f82 push ebx */
  push32((uint32_t)(EBX));
  /* 10146f83 call 0x10146e4b */
  push32(0x10146f88u); f_10146e4b();
L_10146f88:;
  /* 10146f88 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10146f8a je 0x10146f91 */
  if (C.zf) goto L_10146f91;
  /* 10146f8c cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146f8f jne 0x10146fb7 */
  if (!C.zf) goto L_10146fb7;
L_10146f91:;
  /* 10146f91 push edi */
  push32((uint32_t)(EDI));
  /* 10146f92 push esi */
  push32((uint32_t)(ESI));
  /* 10146f93 push ebx */
  push32((uint32_t)(EBX));
  /* 10146f94 call 0x10146e4b */
  push32(0x10146f99u); f_10146e4b();
  /* 10146f99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10146f9b jne 0x10146fa0 */
  if (!C.zf) goto L_10146fa0;
  /* 10146f9d and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10146fa0:;
  /* 10146fa0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146fa4 je 0x10146fb7 */
  if (C.zf) goto L_10146fb7;
  /* 10146fa6 mov eax, dword ptr [0x10157d38] */
  EAX = (r32((uint32_t)(0x10157d38)));
  /* 10146fab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10146fad je 0x10146fb7 */
  if (C.zf) goto L_10146fb7;
  /* 10146faf push edi */
  push32((uint32_t)(EDI));
  /* 10146fb0 push esi */
  push32((uint32_t)(ESI));
  /* 10146fb1 push ebx */
  push32((uint32_t)(EBX));
  /* 10146fb2 call eax */
  call_ind((uint32_t)(EAX), 0x10146fb4u);
  /* 10146fb4 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10146fb7:;
  /* 10146fb7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10146fba:;
  /* 10146fba pop edi */
  EDI = (pop32());
  /* 10146fbb pop esi */
  ESI = (pop32());
  /* 10146fbc pop ebx */
  EBX = (pop32());
  /* 10146fbd pop ebp */
  EBP = (pop32());
  /* 10146fbe ret 0xc */
  ESPCHK(0x10146f24u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10146fc1 (48 bytes, 15 insns) */
void f_10146fc1(void) {
  FTRACE(0x10146fc1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10146fc1 mov eax, dword ptr [0x10156630] */
  EAX = (r32((uint32_t)(0x10156630)));
  /* 10146fc6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146fc9 je 0x10146fd8 */
  if (C.zf) goto L_10146fd8;
  /* 10146fcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10146fcd jne 0x10146fdd */
  if (!C.zf) goto L_10146fdd;
  /* 10146fcf cmp dword ptr [0x10156634], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10156634))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10146fd6 jne 0x10146fdd */
  if (!C.zf) goto L_10146fdd;
L_10146fd8:;
  /* 10146fd8 call 0x10148921 */
  push32(0x10146fddu); f_10148921();
L_10146fdd:;
  /* 10146fdd push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10146fe1 call 0x1014895a */
  push32(0x10146fe6u); f_1014895a();
  /* 10146fe6 push 0xff */
  push32((uint32_t)(0xffu));
  /* 10146feb call dword ptr [0x1015064c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015064c))), 0x10146ff1u);
  /* 10146ff1 pop ecx */
  ECX = (pop32());
  /* 10146ff2 pop ecx */
  ECX = (pop32());
  /* 10146ff3 ret  */
  ESPCHK(0x10146fc1u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ff4 @ 0x10146ff4 (280 bytes, 106 insns) */
void f_10146ff4(void) {
  FTRACE(0x10146ff4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10146ff4 push ebp */
  push32((uint32_t)(EBP));
  /* 10146ff5 mov ebp, esp */
  EBP = (ESP);
  /* 10146ff7 push ebx */
  push32((uint32_t)(EBX));
  /* 10146ff8 push esi */
  push32((uint32_t)(ESI));
  /* 10146ff9 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10146ffc mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10146fff mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 10147002 test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 10147004 je 0x10147100 */
  if (C.zf) goto L_10147100;
  /* 1014700a test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 1014700c jne 0x10147100 */
  if (!C.zf) goto L_10147100;
  /* 10147012 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10147014 je 0x1014702c */
  if (C.zf) goto L_1014702c;
  /* 10147016 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1014701a test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 1014701c je 0x10147100 */
  if (C.zf) goto L_10147100;
  /* 10147022 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 10147025 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10147027 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 10147029 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_1014702c:;
  /* 1014702c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1014702f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10147033 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10147037 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 10147039 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1014703b test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 1014703f mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10147042 jne 0x10147066 */
  if (!C.zf) goto L_10147066;
  /* 10147044 cmp esi, 0x10150750 */
  { uint32_t _a=(ESI),_b=(0x10150750u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014704a je 0x10147054 */
  if (C.zf) goto L_10147054;
  /* 1014704c cmp esi, 0x10150770 */
  { uint32_t _a=(ESI),_b=(0x10150770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147052 jne 0x1014705f */
  if (!C.zf) goto L_1014705f;
L_10147054:;
  /* 10147054 push ebx */
  push32((uint32_t)(EBX));
  /* 10147055 call 0x10148db9 */
  push32(0x1014705au); f_10148db9();
  /* 1014705a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014705c pop ecx */
  ECX = (pop32());
  /* 1014705d jne 0x10147066 */
  if (!C.zf) goto L_10147066;
L_1014705f:;
  /* 1014705f push esi */
  push32((uint32_t)(ESI));
  /* 10147060 call 0x10148d75 */
  push32(0x10147065u); f_10148d75();
  /* 10147065 pop ecx */
  ECX = (pop32());
L_10147066:;
  /* 10147066 test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 1014706c push edi */
  push32((uint32_t)(EDI));
  /* 1014706d je 0x101470d6 */
  if (C.zf) goto L_101470d6;
  /* 1014706f mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 10147072 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 10147074 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10147076 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10147079 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1014707b mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 1014707e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1014707f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10147081 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 10147084 jle 0x10147096 */
  if ((C.zf||C.sf!=C.of)) goto L_10147096;
  /* 10147086 push edi */
  push32((uint32_t)(EDI));
  /* 10147087 push eax */
  push32((uint32_t)(EAX));
  /* 10147088 push ebx */
  push32((uint32_t)(EBX));
  /* 10147089 call 0x10148b85 */
  push32(0x1014708eu); f_10148b85();
  /* 1014708e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10147091 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10147094 jmp 0x101470cc */
  goto L_101470cc;
L_10147096:;
  /* 10147096 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147099 je 0x101470b4 */
  if (C.zf) goto L_101470b4;
  /* 1014709b mov ecx, ebx */
  ECX = (EBX);
  /* 1014709d mov eax, ebx */
  EAX = (EBX);
  /* 1014709f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101470a2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101470a5 mov ecx, dword ptr [ecx*4 + 0x10157c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10157c20)));
  /* 101470ac lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101470af lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 101470b2 jmp 0x101470b9 */
  goto L_101470b9;
L_101470b4:;
  /* 101470b4 mov eax, 0x10150678 */
  EAX = (0x10150678u);
L_101470b9:;
  /* 101470b9 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101470bd je 0x101470cc */
  if (C.zf) goto L_101470cc;
  /* 101470bf push 2 */
  push32((uint32_t)(0x2u));
  /* 101470c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101470c3 push ebx */
  push32((uint32_t)(EBX));
  /* 101470c4 call 0x10148aad */
  push32(0x101470c9u); f_10148aad();
  /* 101470c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101470cc:;
  /* 101470cc mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101470cf mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 101470d2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 101470d4 jmp 0x101470ea */
  goto L_101470ea;
L_101470d6:;
  /* 101470d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101470d8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101470db pop edi */
  EDI = (pop32());
  /* 101470dc push edi */
  push32((uint32_t)(EDI));
  /* 101470dd push eax */
  push32((uint32_t)(EAX));
  /* 101470de push ebx */
  push32((uint32_t)(EBX));
  /* 101470df call 0x10148b85 */
  push32(0x101470e4u); f_10148b85();
  /* 101470e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101470e7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_101470ea:;
  /* 101470ea cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101470ed pop edi */
  EDI = (pop32());
  /* 101470ee je 0x101470f6 */
  if (C.zf) goto L_101470f6;
  /* 101470f0 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 101470f4 jmp 0x10147105 */
  goto L_10147105;
L_101470f6:;
  /* 101470f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101470f9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101470fe jmp 0x10147108 */
  goto L_10147108;
L_10147100:;
  /* 10147100 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10147102 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_10147105:;
  /* 10147105 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10147108:;
  /* 10147108 pop esi */
  ESI = (pop32());
  /* 10147109 pop ebx */
  EBX = (pop32());
  /* 1014710a pop ebp */
  EBP = (pop32());
  /* 1014710b ret  */
  ESPCHK(0x10146ff4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000710c @ 0x1014710c (1825 bytes, 595 insns) [1 switch table(s)] */
void f_1014710c(void) {
  FTRACE(0x1014710cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014710c push ebp */
  push32((uint32_t)(EBP));
  /* 1014710d mov ebp, esp */
  EBP = (ESP);
  /* 1014710f sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10147115 push ebx */
  push32((uint32_t)(EBX));
  /* 10147116 push esi */
  push32((uint32_t)(ESI));
  /* 10147117 push edi */
  push32((uint32_t)(EDI));
  /* 10147118 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1014711b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1014711d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1014711f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10147120 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10147122 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10147125 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 10147128 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1014712b je 0x10147825 */
  if (C.zf) goto L_10147825;
  /* 10147131 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10147134 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10147136 jmp 0x10147140 */
  goto L_10147140;
L_10147138:;
  /* 10147138 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1014713b mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 1014713e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_10147140:;
  /* 10147140 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147143 jl 0x10147825 */
  if ((C.sf!=C.of)) goto L_10147825;
  /* 10147149 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014714c jl 0x10147161 */
  if ((C.sf!=C.of)) goto L_10147161;
  /* 1014714e cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10147151 jg 0x10147161 */
  if ((!C.zf&&C.sf==C.of)) goto L_10147161;
  /* 10147153 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10147156 mov al, byte ptr [eax + 0x1014e0c8] */
  AL = (r8((uint32_t)(EAX + 0x1014e0c8)));
  /* 1014715c and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1014715f jmp 0x10147163 */
  goto L_10147163;
L_10147161:;
  /* 10147161 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10147163:;
  /* 10147163 movsx eax, byte ptr [esi + eax*8 + 0x1014e0e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x1014e0e8))));
  /* 1014716b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1014716e cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147171 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10147174 ja 0x10147814 */
  if ((!C.cf&&!C.zf)) goto L_10147814;
  /* 1014717a jmp dword ptr [eax*4 + 0x1014782d] */
  switch (EAX) {
    case 0: goto L_101472ab;
    case 1: goto L_10147181;
    case 2: goto L_1014719c;
    case 3: goto L_101471e8;
    case 4: goto L_1014721f;
    case 5: goto L_10147227;
    case 6: goto L_1014725c;
    case 7: goto L_101472ef;
    default: x86_unimpl("switch@0x1014717a out of table"); return;
  }
L_10147181:;
  /* 10147181 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10147185 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10147188 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1014718b mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1014718e mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10147191 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10147194 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10147197 jmp 0x10147814 */
  goto L_10147814;
L_1014719c:;
  /* 1014719c movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1014719f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101471a2 je 0x101471df */
  if (C.zf) goto L_101471df;
  /* 101471a4 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101471a7 je 0x101471d6 */
  if (C.zf) goto L_101471d6;
  /* 101471a9 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101471ac je 0x101471cd */
  if (C.zf) goto L_101471cd;
  /* 101471ae dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101471af dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101471b0 je 0x101471c4 */
  if (C.zf) goto L_101471c4;
  /* 101471b2 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101471b5 jne 0x10147814 */
  if (!C.zf) goto L_10147814;
  /* 101471bb or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101471bf jmp 0x10147814 */
  goto L_10147814;
L_101471c4:;
  /* 101471c4 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101471c8 jmp 0x10147814 */
  goto L_10147814;
L_101471cd:;
  /* 101471cd or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101471d1 jmp 0x10147814 */
  goto L_10147814;
L_101471d6:;
  /* 101471d6 or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 101471da jmp 0x10147814 */
  goto L_10147814;
L_101471df:;
  /* 101471df or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101471e3 jmp 0x10147814 */
  goto L_10147814;
L_101471e8:;
  /* 101471e8 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101471eb jne 0x10147210 */
  if (!C.zf) goto L_10147210;
  /* 101471ed lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101471f0 push eax */
  push32((uint32_t)(EAX));
  /* 101471f1 call 0x101478eb */
  push32(0x101471f6u); f_101478eb();
  /* 101471f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101471f8 pop ecx */
  ECX = (pop32());
  /* 101471f9 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101471fc jge 0x10147814 */
  if ((C.sf==C.of)) goto L_10147814;
  /* 10147202 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10147206 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10147208:;
  /* 10147208 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1014720b jmp 0x10147814 */
  goto L_10147814;
L_10147210:;
  /* 10147210 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10147213 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10147216 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10147219 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1014721d jmp 0x10147208 */
  goto L_10147208;
L_1014721f:;
  /* 1014721f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10147222 jmp 0x10147814 */
  goto L_10147814;
L_10147227:;
  /* 10147227 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014722a jne 0x1014724a */
  if (!C.zf) goto L_1014724a;
  /* 1014722c lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1014722f push eax */
  push32((uint32_t)(EAX));
  /* 10147230 call 0x101478eb */
  push32(0x10147235u); f_101478eb();
  /* 10147235 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10147237 pop ecx */
  ECX = (pop32());
  /* 10147238 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1014723b jge 0x10147814 */
  if ((C.sf==C.of)) goto L_10147814;
  /* 10147241 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 10147245 jmp 0x10147814 */
  goto L_10147814;
L_1014724a:;
  /* 1014724a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 1014724d movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10147250 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 10147254 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10147257 jmp 0x10147814 */
  goto L_10147814;
L_1014725c:;
  /* 1014725c cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014725f je 0x1014728f */
  if (C.zf) goto L_1014728f;
  /* 10147261 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10147264 je 0x10147286 */
  if (C.zf) goto L_10147286;
  /* 10147266 cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10147269 je 0x1014727d */
  if (C.zf) goto L_1014727d;
  /* 1014726b cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014726e jne 0x10147814 */
  if (!C.zf) goto L_10147814;
  /* 10147274 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10147278 jmp 0x10147814 */
  goto L_10147814;
L_1014727d:;
  /* 1014727d or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10147281 jmp 0x10147814 */
  goto L_10147814;
L_10147286:;
  /* 10147286 or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014728a jmp 0x10147814 */
  goto L_10147814;
L_1014728f:;
  /* 1014728f cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10147292 jne 0x101472a8 */
  if (!C.zf) goto L_101472a8;
  /* 10147294 cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10147298 jne 0x101472a8 */
  if (!C.zf) goto L_101472a8;
  /* 1014729a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014729b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014729c or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101472a0 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 101472a3 jmp 0x10147814 */
  goto L_10147814;
L_101472a8:;
  /* 101472a8 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_101472ab:;
  /* 101472ab mov ecx, dword ptr [0x101509b0] */
  ECX = (r32((uint32_t)(0x101509b0)));
  /* 101472b1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 101472b4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101472b7 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 101472bc je 0x101472d7 */
  if (C.zf) goto L_101472d7;
  /* 101472be lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101472c1 push eax */
  push32((uint32_t)(EAX));
  /* 101472c2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101472c5 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101472c8 push eax */
  push32((uint32_t)(EAX));
  /* 101472c9 call 0x1014784d */
  push32(0x101472ceu); f_1014784d();
  /* 101472ce mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101472d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101472d3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101472d4 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101472d7:;
  /* 101472d7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101472da push eax */
  push32((uint32_t)(EAX));
  /* 101472db push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101472de movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101472e1 push eax */
  push32((uint32_t)(EAX));
  /* 101472e2 call 0x1014784d */
  push32(0x101472e7u); f_1014784d();
  /* 101472e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101472ea jmp 0x10147814 */
  goto L_10147814;
L_101472ef:;
  /* 101472ef movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101472f2 cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101472f5 jg 0x10147517 */
  if ((!C.zf&&C.sf==C.of)) goto L_10147517;
  /* 101472fb cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101472fe jge 0x1014739a */
  if ((C.sf==C.of)) goto L_1014739a;
  /* 10147304 cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147307 jg 0x101473f8 */
  if ((!C.zf&&C.sf==C.of)) goto L_101473f8;
  /* 1014730d je 0x1014758b */
  if (C.zf) goto L_1014758b;
  /* 10147313 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10147316 je 0x101473bb */
  if (C.zf) goto L_101473bb;
  /* 1014731c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014731d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014731e je 0x10147390 */
  if (C.zf) goto L_10147390;
  /* 10147320 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10147321 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10147322 je 0x10147390 */
  if (C.zf) goto L_10147390;
  /* 10147324 sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10147327 jne 0x10147716 */
  if (!C.zf) goto L_10147716;
  /* 1014732d test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 10147333 jne 0x10147339 */
  if (!C.zf) goto L_10147339;
  /* 10147335 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_10147339:;
  /* 10147339 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1014733c cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014733f jne 0x10147346 */
  if (!C.zf) goto L_10147346;
  /* 10147341 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_10147346:;
  /* 10147346 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10147349 push eax */
  push32((uint32_t)(EAX));
  /* 1014734a call 0x101478eb */
  push32(0x1014734fu); f_101478eb();
  /* 1014734f test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 10147355 pop ecx */
  ECX = (pop32());
  /* 10147356 mov ecx, eax */
  ECX = (EAX);
  /* 10147358 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1014735b je 0x1014755f */
  if (C.zf) goto L_1014755f;
  /* 10147361 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10147363 jne 0x1014736e */
  if (!C.zf) goto L_1014736e;
  /* 10147365 mov ecx, dword ptr [0x10150654] */
  ECX = (r32((uint32_t)(0x10150654)));
  /* 1014736b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1014736e:;
  /* 1014736e mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10147375 mov eax, ecx */
  EAX = (ECX);
L_10147377:;
  /* 10147377 mov edx, esi */
  EDX = (ESI);
  /* 10147379 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1014737a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1014737c je 0x10147556 */
  if (C.zf) goto L_10147556;
  /* 10147382 cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10147386 je 0x10147556 */
  if (C.zf) goto L_10147556;
  /* 1014738c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1014738d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1014738e jmp 0x10147377 */
  goto L_10147377;
L_10147390:;
  /* 10147390 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 10147397 add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_1014739a:;
  /* 1014739a or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1014739e lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 101473a4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101473a6 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 101473a9 jge 0x1014747e */
  if ((C.sf==C.of)) goto L_1014747e;
  /* 101473af mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 101473b6 jmp 0x1014748c */
  goto L_1014748c;
L_101473bb:;
  /* 101473bb test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 101473c1 jne 0x101473c7 */
  if (!C.zf) goto L_101473c7;
  /* 101473c3 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_101473c7:;
  /* 101473c7 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 101473cd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101473d0 push eax */
  push32((uint32_t)(EAX));
  /* 101473d1 je 0x1014740e */
  if (C.zf) goto L_1014740e;
  /* 101473d3 call 0x10147908 */
  push32(0x101473d8u); f_10147908();
  /* 101473d8 push eax */
  push32((uint32_t)(EAX));
  /* 101473d9 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101473df push eax */
  push32((uint32_t)(EAX));
  /* 101473e0 call 0x10148fcb */
  push32(0x101473e5u); f_10148fcb();
  /* 101473e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101473e8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101473eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101473ed jge 0x10147421 */
  if ((C.sf==C.of)) goto L_10147421;
  /* 101473ef mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 101473f6 jmp 0x10147421 */
  goto L_10147421;
L_101473f8:;
  /* 101473f8 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101473fb je 0x1014742f */
  if (C.zf) goto L_1014742f;
  /* 101473fd sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10147400 je 0x101473c7 */
  if (C.zf) goto L_101473c7;
  /* 10147402 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10147403 je 0x101475f1 */
  if (C.zf) goto L_101475f1;
  /* 10147409 jmp 0x10147716 */
  goto L_10147716;
L_1014740e:;
  /* 1014740e call 0x101478eb */
  push32(0x10147413u); f_101478eb();
  /* 10147413 pop ecx */
  ECX = (pop32());
  /* 10147414 mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 1014741a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10147421:;
  /* 10147421 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 10147427 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1014742a jmp 0x10147716 */
  goto L_10147716;
L_1014742f:;
  /* 1014742f lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10147432 push eax */
  push32((uint32_t)(EAX));
  /* 10147433 call 0x101478eb */
  push32(0x10147438u); f_101478eb();
  /* 10147438 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014743a pop ecx */
  ECX = (pop32());
  /* 1014743b je 0x10147470 */
  if (C.zf) goto L_10147470;
  /* 1014743d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10147440 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10147442 je 0x10147470 */
  if (C.zf) goto L_10147470;
  /* 10147444 test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 10147448 je 0x10147461 */
  if (C.zf) goto L_10147461;
  /* 1014744a movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1014744d shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1014744f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10147452 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10147455 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1014745c jmp 0x10147716 */
  goto L_10147716;
L_10147461:;
  /* 10147461 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 10147465 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10147468 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 1014746b jmp 0x10147713 */
  goto L_10147713;
L_10147470:;
  /* 10147470 mov eax, dword ptr [0x10150650] */
  EAX = (r32((uint32_t)(0x10150650)));
  /* 10147475 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10147478 push eax */
  push32((uint32_t)(EAX));
  /* 10147479 jmp 0x1014750c */
  goto L_1014750c;
L_1014747e:;
  /* 1014747e jne 0x1014748c */
  if (!C.zf) goto L_1014748c;
  /* 10147480 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10147483 jne 0x1014748c */
  if (!C.zf) goto L_1014748c;
  /* 10147485 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1014748c:;
  /* 1014748c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1014748f push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 10147492 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10147495 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10147498 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 1014749b mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 1014749e mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 101474a1 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 101474a4 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 101474a7 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101474aa push eax */
  push32((uint32_t)(EAX));
  /* 101474ab lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101474b1 push eax */
  push32((uint32_t)(EAX));
  /* 101474b2 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 101474b5 push eax */
  push32((uint32_t)(EAX));
  /* 101474b6 call dword ptr [0x10150658] */
  call_ind((uint32_t)(r32((uint32_t)(0x10150658))), 0x101474bcu);
  /* 101474bc mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 101474bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101474c2 and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 101474c8 je 0x101474de */
  if (C.zf) goto L_101474de;
  /* 101474ca cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101474ce jne 0x101474de */
  if (!C.zf) goto L_101474de;
  /* 101474d0 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101474d6 push eax */
  push32((uint32_t)(EAX));
  /* 101474d7 call dword ptr [0x10150664] */
  call_ind((uint32_t)(r32((uint32_t)(0x10150664))), 0x101474ddu);
  /* 101474dd pop ecx */
  ECX = (pop32());
L_101474de:;
  /* 101474de cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101474e1 jne 0x101474f5 */
  if (!C.zf) goto L_101474f5;
  /* 101474e3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101474e5 jne 0x101474f5 */
  if (!C.zf) goto L_101474f5;
  /* 101474e7 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101474ed push eax */
  push32((uint32_t)(EAX));
  /* 101474ee call dword ptr [0x1015065c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1015065c))), 0x101474f4u);
  /* 101474f4 pop ecx */
  ECX = (pop32());
L_101474f5:;
  /* 101474f5 cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101474fc jne 0x1014750b */
  if (!C.zf) goto L_1014750b;
  /* 101474fe or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10147502 lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 10147508 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_1014750b:;
  /* 1014750b push edi */
  push32((uint32_t)(EDI));
L_1014750c:;
  /* 1014750c call 0x10148f50 */
  push32(0x10147511u); f_10148f50();
  /* 10147511 pop ecx */
  ECX = (pop32());
  /* 10147512 jmp 0x10147713 */
  goto L_10147713;
L_10147517:;
  /* 10147517 sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014751a je 0x101475f1 */
  if (C.zf) goto L_101475f1;
  /* 10147520 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10147523 je 0x101475c7 */
  if (C.zf) goto L_101475c7;
  /* 10147529 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014752a je 0x101475b4 */
  if (C.zf) goto L_101475b4;
  /* 10147530 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10147531 je 0x10147584 */
  if (C.zf) goto L_10147584;
  /* 10147533 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10147536 je 0x10147339 */
  if (C.zf) goto L_10147339;
  /* 1014753c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014753d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014753e je 0x101475f5 */
  if (C.zf) goto L_101475f5;
  /* 10147544 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10147547 jne 0x10147716 */
  if (!C.zf) goto L_10147716;
  /* 1014754d mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 10147554 jmp 0x10147592 */
  goto L_10147592;
L_10147556:;
  /* 10147556 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10147558 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1014755a jmp 0x10147713 */
  goto L_10147713;
L_1014755f:;
  /* 1014755f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10147561 jne 0x1014756c */
  if (!C.zf) goto L_1014756c;
  /* 10147563 mov ecx, dword ptr [0x10150650] */
  ECX = (r32((uint32_t)(0x10150650)));
  /* 10147569 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1014756c:;
  /* 1014756c mov eax, ecx */
  EAX = (ECX);
L_1014756e:;
  /* 1014756e mov edx, esi */
  EDX = (ESI);
  /* 10147570 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10147571 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10147573 je 0x1014757d */
  if (C.zf) goto L_1014757d;
  /* 10147575 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10147578 je 0x1014757d */
  if (C.zf) goto L_1014757d;
  /* 1014757a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1014757b jmp 0x1014756e */
  goto L_1014756e;
L_1014757d:;
  /* 1014757d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014757f jmp 0x10147713 */
  goto L_10147713;
L_10147584:;
  /* 10147584 mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_1014758b:;
  /* 1014758b mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_10147592:;
  /* 10147592 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10147596 mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 1014759d je 0x101475fc */
  if (C.zf) goto L_101475fc;
  /* 1014759f mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 101475a2 mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 101475a6 add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101475a8 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 101475af mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 101475b2 jmp 0x101475fc */
  goto L_101475fc;
L_101475b4:;
  /* 101475b4 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 101475b8 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 101475bf je 0x101475fc */
  if (C.zf) goto L_101475fc;
  /* 101475c1 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101475c5 jmp 0x101475fc */
  goto L_101475fc;
L_101475c7:;
  /* 101475c7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101475ca push eax */
  push32((uint32_t)(EAX));
  /* 101475cb call 0x101478eb */
  push32(0x101475d0u); f_101478eb();
  /* 101475d0 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101475d4 pop ecx */
  ECX = (pop32());
  /* 101475d5 je 0x101475e0 */
  if (C.zf) goto L_101475e0;
  /* 101475d7 mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 101475db mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 101475de jmp 0x101475e5 */
  goto L_101475e5;
L_101475e0:;
  /* 101475e0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 101475e3 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_101475e5:;
  /* 101475e5 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 101475ec jmp 0x10147814 */
  goto L_10147814;
L_101475f1:;
  /* 101475f1 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_101475f5:;
  /* 101475f5 mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_101475fc:;
  /* 101475fc test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 10147600 je 0x1014760e */
  if (C.zf) goto L_1014760e;
  /* 10147602 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10147605 push eax */
  push32((uint32_t)(EAX));
  /* 10147606 call 0x101478f8 */
  push32(0x1014760bu); f_101478f8();
  /* 1014760b pop ecx */
  ECX = (pop32());
  /* 1014760c jmp 0x1014764f */
  goto L_1014764f;
L_1014760e:;
  /* 1014760e test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10147612 je 0x10147635 */
  if (C.zf) goto L_10147635;
  /* 10147614 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10147618 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1014761b push eax */
  push32((uint32_t)(EAX));
  /* 1014761c je 0x1014762a */
  if (C.zf) goto L_1014762a;
  /* 1014761e call 0x101478eb */
  push32(0x10147623u); f_101478eb();
  /* 10147623 pop ecx */
  ECX = (pop32());
  /* 10147624 movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_10147627:;
  /* 10147627 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10147628 jmp 0x1014764f */
  goto L_1014764f;
L_1014762a:;
  /* 1014762a call 0x101478eb */
  push32(0x1014762fu); f_101478eb();
  /* 1014762f pop ecx */
  ECX = (pop32());
  /* 10147630 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 10147633 jmp 0x10147627 */
  goto L_10147627;
L_10147635:;
  /* 10147635 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10147639 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1014763c push eax */
  push32((uint32_t)(EAX));
  /* 1014763d je 0x10147647 */
  if (C.zf) goto L_10147647;
  /* 1014763f call 0x101478eb */
  push32(0x10147644u); f_101478eb();
  /* 10147644 pop ecx */
  ECX = (pop32());
  /* 10147645 jmp 0x10147627 */
  goto L_10147627;
L_10147647:;
  /* 10147647 call 0x101478eb */
  push32(0x1014764cu); f_101478eb();
  /* 1014764c pop ecx */
  ECX = (pop32());
  /* 1014764d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_1014764f:;
  /* 1014764f test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10147653 je 0x10147670 */
  if (C.zf) goto L_10147670;
  /* 10147655 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10147657 jg 0x10147670 */
  if ((!C.zf&&C.sf==C.of)) goto L_10147670;
  /* 10147659 jl 0x1014765f */
  if ((C.sf!=C.of)) goto L_1014765f;
  /* 1014765b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014765d jae 0x10147670 */
  if (!C.cf) goto L_10147670;
L_1014765f:;
  /* 1014765f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10147661 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10147664 mov esi, eax */
  ESI = (EAX);
  /* 10147666 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10147668 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 1014766c mov edi, edx */
  EDI = (EDX);
  /* 1014766e jmp 0x10147674 */
  goto L_10147674;
L_10147670:;
  /* 10147670 mov esi, eax */
  ESI = (EAX);
  /* 10147672 mov edi, edx */
  EDI = (EDX);
L_10147674:;
  /* 10147674 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 10147678 jne 0x1014767d */
  if (!C.zf) goto L_1014767d;
  /* 1014767a and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_1014767d:;
  /* 1014767d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147681 jge 0x1014768c */
  if ((C.sf==C.of)) goto L_1014768c;
  /* 10147683 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1014768a jmp 0x10147690 */
  goto L_10147690;
L_1014768c:;
  /* 1014768c and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_10147690:;
  /* 10147690 mov eax, esi */
  EAX = (ESI);
  /* 10147692 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10147694 jne 0x1014769a */
  if (!C.zf) goto L_1014769a;
  /* 10147696 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_1014769a:;
  /* 1014769a lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 1014769d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_101476a0:;
  /* 101476a0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 101476a3 dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 101476a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101476a8 jg 0x101476b0 */
  if ((!C.zf&&C.sf==C.of)) goto L_101476b0;
  /* 101476aa mov eax, esi */
  EAX = (ESI);
  /* 101476ac or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 101476ae je 0x101476eb */
  if (C.zf) goto L_101476eb;
L_101476b0:;
  /* 101476b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101476b3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101476b4 push edx */
  push32((uint32_t)(EDX));
  /* 101476b5 push eax */
  push32((uint32_t)(EAX));
  /* 101476b6 push edi */
  push32((uint32_t)(EDI));
  /* 101476b7 push esi */
  push32((uint32_t)(ESI));
  /* 101476b8 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 101476bb mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 101476be call 0x10149100 */
  push32(0x101476c3u); f_10149100();
  /* 101476c3 push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 101476c6 mov ebx, eax */
  EBX = (EAX);
  /* 101476c8 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101476cb push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 101476ce push edi */
  push32((uint32_t)(EDI));
  /* 101476cf push esi */
  push32((uint32_t)(ESI));
  /* 101476d0 call 0x10149090 */
  push32(0x101476d5u); f_10149090();
  /* 101476d5 cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101476d8 mov esi, eax */
  ESI = (EAX);
  /* 101476da mov edi, edx */
  EDI = (EDX);
  /* 101476dc jle 0x101476e1 */
  if ((C.zf||C.sf!=C.of)) goto L_101476e1;
  /* 101476de add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_101476e1:;
  /* 101476e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101476e4 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 101476e7 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 101476e9 jmp 0x101476a0 */
  goto L_101476a0;
L_101476eb:;
  /* 101476eb lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 101476ee sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101476f1 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 101476f4 test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 101476f8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101476fb je 0x10147716 */
  if (C.zf) goto L_10147716;
  /* 101476fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10147700 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10147703 jne 0x10147709 */
  if (!C.zf) goto L_10147709;
  /* 10147705 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10147707 jne 0x10147716 */
  if (!C.zf) goto L_10147716;
L_10147709:;
  /* 10147709 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1014770c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1014770d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10147710 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_10147713:;
  /* 10147713 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10147716:;
  /* 10147716 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014771a jne 0x10147814 */
  if (!C.zf) goto L_10147814;
  /* 10147720 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 10147723 test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 10147726 je 0x1014774e */
  if (C.zf) goto L_1014774e;
  /* 10147728 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 1014772b je 0x10147733 */
  if (C.zf) goto L_10147733;
  /* 1014772d mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 10147731 jmp 0x10147747 */
  goto L_10147747;
L_10147733:;
  /* 10147733 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10147736 je 0x1014773e */
  if (C.zf) goto L_1014773e;
  /* 10147738 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 1014773c jmp 0x10147747 */
  goto L_10147747;
L_1014773e:;
  /* 1014773e test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10147741 je 0x1014774e */
  if (C.zf) goto L_1014774e;
  /* 10147743 mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_10147747:;
  /* 10147747 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_1014774e:;
  /* 1014774e mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 10147751 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10147754 sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10147757 test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 1014775a jne 0x1014776e */
  if (!C.zf) goto L_1014776e;
  /* 1014775c lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1014775f push eax */
  push32((uint32_t)(EAX));
  /* 10147760 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10147763 push esi */
  push32((uint32_t)(ESI));
  /* 10147764 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10147766 call 0x10147882 */
  push32(0x1014776bu); f_10147882();
  /* 1014776b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1014776e:;
  /* 1014776e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10147771 push eax */
  push32((uint32_t)(EAX));
  /* 10147772 lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 10147775 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10147778 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1014777b push eax */
  push32((uint32_t)(EAX));
  /* 1014777c call 0x101478b3 */
  push32(0x10147781u); f_101478b3();
  /* 10147781 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10147784 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10147787 je 0x101477a0 */
  if (C.zf) goto L_101477a0;
  /* 10147789 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 1014778c jne 0x101477a0 */
  if (!C.zf) goto L_101477a0;
  /* 1014778e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10147791 push eax */
  push32((uint32_t)(EAX));
  /* 10147792 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10147795 push esi */
  push32((uint32_t)(ESI));
  /* 10147796 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10147798 call 0x10147882 */
  push32(0x1014779du); f_10147882();
  /* 1014779d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101477a0:;
  /* 101477a0 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101477a4 je 0x101477e7 */
  if (C.zf) goto L_101477e7;
  /* 101477a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101477aa jle 0x101477e7 */
  if ((C.zf||C.sf!=C.of)) goto L_101477e7;
  /* 101477ac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101477af mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 101477b2 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_101477b5:;
  /* 101477b5 mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 101477b8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101477b9 push eax */
  push32((uint32_t)(EAX));
  /* 101477ba lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 101477bd push eax */
  push32((uint32_t)(EAX));
  /* 101477be inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101477bf call 0x10148fcb */
  push32(0x101477c4u); f_10148fcb();
  /* 101477c4 pop ecx */
  ECX = (pop32());
  /* 101477c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101477c7 pop ecx */
  ECX = (pop32());
  /* 101477c8 jle 0x101477fc */
  if ((C.zf||C.sf!=C.of)) goto L_101477fc;
  /* 101477ca lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 101477cd push ecx */
  push32((uint32_t)(ECX));
  /* 101477ce push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101477d1 push eax */
  push32((uint32_t)(EAX));
  /* 101477d2 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 101477d5 push eax */
  push32((uint32_t)(EAX));
  /* 101477d6 call 0x101478b3 */
  push32(0x101477dbu); f_101478b3();
  /* 101477db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101477de mov eax, edi */
  EAX = (EDI);
  /* 101477e0 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101477e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101477e3 jne 0x101477b5 */
  if (!C.zf) goto L_101477b5;
  /* 101477e5 jmp 0x101477fc */
  goto L_101477fc;
L_101477e7:;
  /* 101477e7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101477ea push eax */
  push32((uint32_t)(EAX));
  /* 101477eb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101477ee push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 101477f1 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 101477f4 call 0x101478b3 */
  push32(0x101477f9u); f_101478b3();
  /* 101477f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101477fc:;
  /* 101477fc test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 10147800 je 0x10147814 */
  if (C.zf) goto L_10147814;
  /* 10147802 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10147805 push eax */
  push32((uint32_t)(EAX));
  /* 10147806 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10147809 push esi */
  push32((uint32_t)(ESI));
  /* 1014780a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1014780c call 0x10147882 */
  push32(0x10147811u); f_10147882();
  /* 10147811 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10147814:;
  /* 10147814 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10147817 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10147819 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1014781a test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1014781c mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 1014781f jne 0x10147138 */
  if (!C.zf) goto L_10147138;
L_10147825:;
  /* 10147825 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10147828 pop edi */
  EDI = (pop32());
  /* 10147829 pop esi */
  ESI = (pop32());
  /* 1014782a pop ebx */
  EBX = (pop32());
  /* 1014782b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014782c ret  */
  ESPCHK(0x1014710cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000784d @ 0x1014784d (53 bytes, 25 insns) */
void f_1014784d(void) {
  FTRACE(0x1014784du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014784d push ebp */
  push32((uint32_t)(EBP));
  /* 1014784e mov ebp, esp */
  EBP = (ESP);
  /* 10147850 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10147853 dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 10147856 js 0x10147866 */
  if (C.sf) goto L_10147866;
  /* 10147858 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1014785a mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1014785d mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1014785f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10147861 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10147864 jmp 0x10147871 */
  goto L_10147871;
L_10147866:;
  /* 10147866 push ecx */
  push32((uint32_t)(ECX));
  /* 10147867 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1014786a call 0x10146ff4 */
  push32(0x1014786fu); f_10146ff4();
  /* 1014786f pop ecx */
  ECX = (pop32());
  /* 10147870 pop ecx */
  ECX = (pop32());
L_10147871:;
  /* 10147871 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147874 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10147877 jne 0x1014787e */
  if (!C.zf) goto L_1014787e;
  /* 10147879 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1014787c pop ebp */
  EBP = (pop32());
  /* 1014787d ret  */
  ESPCHK(0x1014784du, _esp0);
  ESP += 4; return;
L_1014787e:;
  /* 1014787e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10147880 pop ebp */
  EBP = (pop32());
  /* 10147881 ret  */
  ESPCHK(0x1014784du, _esp0);
  ESP += 4; return;
}

/* FUN_10007882 @ 0x10147882 (49 bytes, 22 insns) */
void f_10147882(void) {
  FTRACE(0x10147882u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147882 push esi */
  push32((uint32_t)(ESI));
  /* 10147883 push edi */
  push32((uint32_t)(EDI));
  /* 10147884 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10147888 mov eax, edi */
  EAX = (EDI);
  /* 1014788a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1014788b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014788d jle 0x101478b0 */
  if ((C.zf||C.sf!=C.of)) goto L_101478b0;
  /* 1014788f mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_10147893:;
  /* 10147893 push esi */
  push32((uint32_t)(ESI));
  /* 10147894 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10147898 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 1014789c call 0x1014784d */
  push32(0x101478a1u); f_1014784d();
  /* 101478a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101478a4 cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101478a7 je 0x101478b0 */
  if (C.zf) goto L_101478b0;
  /* 101478a9 mov eax, edi */
  EAX = (EDI);
  /* 101478ab dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101478ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101478ae jg 0x10147893 */
  if ((!C.zf&&C.sf==C.of)) goto L_10147893;
L_101478b0:;
  /* 101478b0 pop edi */
  EDI = (pop32());
  /* 101478b1 pop esi */
  ESI = (pop32());
  /* 101478b2 ret  */
  ESPCHK(0x10147882u, _esp0);
  ESP += 4; return;
}

/* FUN_100078b3 @ 0x101478b3 (56 bytes, 27 insns) */
void f_101478b3(void) {
  FTRACE(0x101478b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101478b3 push ebx */
  push32((uint32_t)(EBX));
  /* 101478b4 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 101478b8 mov eax, ebx */
  EAX = (EBX);
  /* 101478ba dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101478bb push esi */
  push32((uint32_t)(ESI));
  /* 101478bc push edi */
  push32((uint32_t)(EDI));
  /* 101478bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101478bf jle 0x101478e7 */
  if ((C.zf||C.sf!=C.of)) goto L_101478e7;
  /* 101478c1 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 101478c5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_101478c9:;
  /* 101478c9 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 101478cc push edi */
  push32((uint32_t)(EDI));
  /* 101478cd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101478ce push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 101478d2 push eax */
  push32((uint32_t)(EAX));
  /* 101478d3 call 0x1014784d */
  push32(0x101478d8u); f_1014784d();
  /* 101478d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101478db cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101478de je 0x101478e7 */
  if (C.zf) goto L_101478e7;
  /* 101478e0 mov eax, ebx */
  EAX = (EBX);
  /* 101478e2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101478e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101478e5 jg 0x101478c9 */
  if ((!C.zf&&C.sf==C.of)) goto L_101478c9;
L_101478e7:;
  /* 101478e7 pop edi */
  EDI = (pop32());
  /* 101478e8 pop esi */
  ESI = (pop32());
  /* 101478e9 pop ebx */
  EBX = (pop32());
  /* 101478ea ret  */
  ESPCHK(0x101478b3u, _esp0);
  ESP += 4; return;
}

/* FUN_100078eb @ 0x101478eb (13 bytes, 5 insns) */
void f_101478eb(void) {
  FTRACE(0x101478ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101478eb mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101478ef add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101478f2 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 101478f4 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 101478f7 ret  */
  ESPCHK(0x101478ebu, _esp0);
  ESP += 4; return;
}

/* FUN_100078f8 @ 0x101478f8 (16 bytes, 6 insns) */
void f_101478f8(void) {
  FTRACE(0x101478f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101478f8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101478fc add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101478ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10147901 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 10147904 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10147907 ret  */
  ESPCHK(0x101478f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10007908 @ 0x10147908 (14 bytes, 5 insns) */
void f_10147908(void) {
  FTRACE(0x10147908u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147908 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1014790c add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1014790f mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10147911 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 10147915 ret  */
  ESPCHK(0x10147908u, _esp0);
  ESP += 4; return;
}

/* FUN_10007916 @ 0x10147916 (18 bytes, 6 insns) */
void f_10147916(void) {
  FTRACE(0x10147916u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147916 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 1014791b push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 10147920 call 0x101491aa */
  push32(0x10147925u); f_101491aa();
  /* 10147925 pop ecx */
  ECX = (pop32());
  /* 10147926 pop ecx */
  ECX = (pop32());
  /* 10147927 ret  */
  ESPCHK(0x10147916u, _esp0);
  ESP += 4; return;
}

/* FUN_10007928 @ 0x10147928 (62 bytes, 24 insns) */
void f_10147928(void) {
  FTRACE(0x10147928u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147928 push ebp */
  push32((uint32_t)(EBP));
  /* 10147929 mov ebp, esp */
  EBP = (ESP);
  /* 1014792b sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014792e fld qword ptr [0x1014e170] */
  fpu_push(rf64((uint32_t)(0x1014e170)));
  /* 10147934 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 10147937 fld qword ptr [0x1014e168] */
  fpu_push(rf64((uint32_t)(0x1014e168)));
  /* 1014793d fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 10147940 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 10147943 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 10147946 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 10147949 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 1014794c fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 1014794f fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 10147952 fcomp qword ptr [0x1014e160] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1014e160)));
  (void)fpu_pop();
  /* 10147958 fnstsw ax */
  AX = fpu_status();
  /* 1014795a sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 1014795b jbe 0x10147962 */
  if ((C.cf||C.zf)) goto L_10147962;
  /* 1014795d push 1 */
  push32((uint32_t)(0x1u));
  /* 1014795f pop eax */
  EAX = (pop32());
  /* 10147960 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10147961 ret  */
  ESPCHK(0x10147928u, _esp0);
  ESP += 4; return;
L_10147962:;
  /* 10147962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10147964 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10147965 ret  */
  ESPCHK(0x10147928u, _esp0);
  ESP += 4; return;
}

/* FUN_10007966 @ 0x10147966 (41 bytes, 13 insns) */
void f_10147966(void) {
  FTRACE(0x10147966u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147966 push 0x1014e194 */
  push32((uint32_t)(0x1014e194u));
  /* 1014796b call dword ptr [0x1014e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e004))), 0x10147971u);
  /* 10147971 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10147973 je 0x1014798a */
  if (C.zf) goto L_1014798a;
  /* 10147975 push 0x1014e178 */
  push32((uint32_t)(0x1014e178u));
  /* 1014797a push eax */
  push32((uint32_t)(EAX));
  /* 1014797b call dword ptr [0x1014e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e088))), 0x10147981u);
  /* 10147981 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10147983 je 0x1014798a */
  if (C.zf) goto L_1014798a;
  /* 10147985 push 0 */
  push32((uint32_t)(0x0u));
  /* 10147987 call eax */
  call_ind((uint32_t)(EAX), 0x10147989u);
  /* 10147989 ret  */
  ESPCHK(0x10147966u, _esp0);
  ESP += 4; return;
L_1014798a:;
  /* 1014798a jmp 0x10147928 */
  f_10147928(); return;
}

/* FUN_1000798f @ 0x1014798f (90 bytes, 37 insns) */
void f_1014798f(void) {
  FTRACE(0x1014798fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014798f push esi */
  push32((uint32_t)(ESI));
  /* 10147990 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10147994 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 10147997 push eax */
  push32((uint32_t)(EAX));
  /* 10147998 call 0x10149350 */
  push32(0x1014799du); f_10149350();
  /* 1014799d cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101479a0 pop ecx */
  ECX = (pop32());
  /* 101479a1 je 0x101479cf */
  if (C.zf) goto L_101479cf;
L_101479a3:;
  /* 101479a3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101479a4 cmp dword ptr [0x10150bc0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10150bc0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101479ab jle 0x101479bc */
  if ((C.zf||C.sf!=C.of)) goto L_101479bc;
  /* 101479ad movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 101479b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 101479b2 push eax */
  push32((uint32_t)(EAX));
  /* 101479b3 call 0x101492db */
  push32(0x101479b8u); f_101492db();
  /* 101479b8 pop ecx */
  ECX = (pop32());
  /* 101479b9 pop ecx */
  ECX = (pop32());
  /* 101479ba jmp 0x101479cb */
  goto L_101479cb;
L_101479bc:;
  /* 101479bc movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 101479bf mov ecx, dword ptr [0x101509b0] */
  ECX = (r32((uint32_t)(0x101509b0)));
  /* 101479c5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101479c8 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_101479cb:;
  /* 101479cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101479cd jne 0x101479a3 */
  if (!C.zf) goto L_101479a3;
L_101479cf:;
  /* 101479cf mov cl, byte ptr [0x10150bc4] */
  CL = (r8((uint32_t)(0x10150bc4)));
  /* 101479d5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101479d7 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 101479d9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101479da:;
  /* 101479da mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 101479dc mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 101479de mov al, cl */
  AL = (CL);
  /* 101479e0 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 101479e2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101479e3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 101479e5 jne 0x101479da */
  if (!C.zf) goto L_101479da;
  /* 101479e7 pop esi */
  ESI = (pop32());
  /* 101479e8 ret  */
  ESPCHK(0x1014798fu, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x10147a4f (62 bytes, 29 insns) */
void f_10147a4f(void) {
  FTRACE(0x10147a4fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147a4f push ebp */
  push32((uint32_t)(EBP));
  /* 10147a50 mov ebp, esp */
  EBP = (ESP);
  /* 10147a52 push ecx */
  push32((uint32_t)(ECX));
  /* 10147a53 push ecx */
  push32((uint32_t)(ECX));
  /* 10147a54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147a58 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10147a5b je 0x10147a78 */
  if (C.zf) goto L_10147a78;
  /* 10147a5d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10147a60 push eax */
  push32((uint32_t)(EAX));
  /* 10147a61 call 0x1014981c */
  push32(0x10147a66u); f_1014981c();
  /* 10147a66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10147a69 pop ecx */
  ECX = (pop32());
  /* 10147a6a pop ecx */
  ECX = (pop32());
  /* 10147a6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10147a6e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10147a70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10147a73 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10147a76 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10147a77 ret  */
  ESPCHK(0x10147a4fu, _esp0);
  ESP += 4; return;
L_10147a78:;
  /* 10147a78 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10147a7b push eax */
  push32((uint32_t)(EAX));
  /* 10147a7c call 0x10149849 */
  push32(0x10147a81u); f_10149849();
  /* 10147a81 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10147a84 pop ecx */
  ECX = (pop32());
  /* 10147a85 pop ecx */
  ECX = (pop32());
  /* 10147a86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10147a89 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10147a8b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10147a8c ret  */
  ESPCHK(0x10147a4fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007a8d @ 0x10147a8d (97 bytes, 42 insns) */
void f_10147a8d(void) {
  FTRACE(0x10147a8du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147a8d push ebp */
  push32((uint32_t)(EBP));
  /* 10147a8e mov ebp, esp */
  EBP = (ESP);
  /* 10147a90 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10147a93 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10147a96 push esi */
  push32((uint32_t)(ESI));
  /* 10147a97 push eax */
  push32((uint32_t)(EAX));
  /* 10147a98 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10147a9b push eax */
  push32((uint32_t)(EAX));
  /* 10147a9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10147a9f push ecx */
  push32((uint32_t)(ECX));
  /* 10147aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 10147aa1 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10147aa3 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10147aa6 call 0x101498ed */
  push32(0x10147aabu); f_101498ed();
  /* 10147aab mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10147aae lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10147ab1 push eax */
  push32((uint32_t)(EAX));
  /* 10147ab2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10147ab5 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 10147ab8 push eax */
  push32((uint32_t)(EAX));
  /* 10147ab9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10147abb cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147abf sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10147ac2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10147ac4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10147ac6 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10147ac9 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10147acb add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10147acd push ecx */
  push32((uint32_t)(ECX));
  /* 10147ace call 0x10149876 */
  push32(0x10147ad3u); f_10149876();
  /* 10147ad3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10147ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10147ad8 push eax */
  push32((uint32_t)(EAX));
  /* 10147ad9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10147adc push esi */
  push32((uint32_t)(ESI));
  /* 10147add push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10147ae0 call 0x10147aee */
  push32(0x10147ae5u); f_10147aee();
  /* 10147ae5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10147ae8 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10147aeb pop esi */
  ESI = (pop32());
  /* 10147aec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10147aed ret  */
  ESPCHK(0x10147a8du, _esp0);
  ESP += 4; return;
}

/* FUN_10007aee @ 0x10147aee (194 bytes, 91 insns) */
void f_10147aee(void) {
  FTRACE(0x10147aeeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147aee push ebp */
  push32((uint32_t)(EBP));
  /* 10147aef mov ebp, esp */
  EBP = (ESP);
  /* 10147af1 push ebx */
  push32((uint32_t)(EBX));
  /* 10147af2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10147af4 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10147af7 push esi */
  push32((uint32_t)(ESI));
  /* 10147af8 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 10147afb push edi */
  push32((uint32_t)(EDI));
  /* 10147afc mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10147aff je 0x10147b1c */
  if (C.zf) goto L_10147b1c;
  /* 10147b01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10147b03 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147b06 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10147b09 push eax */
  push32((uint32_t)(EAX));
  /* 10147b0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10147b0c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147b0f sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10147b12 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10147b14 push eax */
  push32((uint32_t)(EAX));
  /* 10147b15 call 0x10147d90 */
  push32(0x10147b1au); f_10147d90();
  /* 10147b1a pop ecx */
  ECX = (pop32());
  /* 10147b1b pop ecx */
  ECX = (pop32());
L_10147b1c:;
  /* 10147b1c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147b1f mov eax, edi */
  EAX = (EDI);
  /* 10147b21 jne 0x10147b29 */
  if (!C.zf) goto L_10147b29;
  /* 10147b23 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 10147b26 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_10147b29:;
  /* 10147b29 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147b2c jle 0x10147b40 */
  if ((C.zf||C.sf!=C.of)) goto L_10147b40;
  /* 10147b2e mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10147b31 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10147b34 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10147b36 mov eax, ecx */
  EAX = (ECX);
  /* 10147b38 mov cl, byte ptr [0x10150bc4] */
  CL = (r8((uint32_t)(0x10150bc4)));
  /* 10147b3e mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_10147b40:;
  /* 10147b40 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10147b42 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10147b45 push 0x1014e1a8 */
  push32((uint32_t)(0x1014e1a8u));
  /* 10147b4a sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10147b4d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10147b4f add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10147b52 push ecx */
  push32((uint32_t)(ECX));
  /* 10147b53 call 0x10149a00 */
  push32(0x10147b58u); f_10149a00();
  /* 10147b58 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147b5b pop ecx */
  ECX = (pop32());
  /* 10147b5c pop ecx */
  ECX = (pop32());
  /* 10147b5d mov ecx, eax */
  ECX = (EAX);
  /* 10147b5f je 0x10147b64 */
  if (C.zf) goto L_10147b64;
  /* 10147b61 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_10147b64:;
  /* 10147b64 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10147b67 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10147b68 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10147b6b je 0x10147ba9 */
  if (C.zf) goto L_10147ba9;
  /* 10147b6d mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 10147b70 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10147b71 jns 0x10147b78 */
  if (!C.sf) goto L_10147b78;
  /* 10147b73 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 10147b75 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_10147b78:;
  /* 10147b78 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10147b79 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147b7c jl 0x10147b8f */
  if ((C.sf!=C.of)) goto L_10147b8f;
  /* 10147b7e mov eax, ebx */
  EAX = (EBX);
  /* 10147b80 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10147b82 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10147b83 pop esi */
  ESI = (pop32());
  /* 10147b84 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10147b86 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10147b88 mov eax, ebx */
  EAX = (EBX);
  /* 10147b8a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10147b8b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10147b8d mov ebx, edx */
  EBX = (EDX);
L_10147b8f:;
  /* 10147b8f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10147b90 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147b93 jl 0x10147ba6 */
  if ((C.sf!=C.of)) goto L_10147ba6;
  /* 10147b95 mov eax, ebx */
  EAX = (EBX);
  /* 10147b97 push 0xa */
  push32((uint32_t)(0xau));
  /* 10147b99 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10147b9a pop esi */
  ESI = (pop32());
  /* 10147b9b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10147b9d add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10147b9f mov eax, ebx */
  EAX = (EBX);
  /* 10147ba1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10147ba2 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10147ba4 mov ebx, edx */
  EBX = (EDX);
L_10147ba6:;
  /* 10147ba6 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_10147ba9:;
  /* 10147ba9 mov eax, edi */
  EAX = (EDI);
  /* 10147bab pop edi */
  EDI = (pop32());
  /* 10147bac pop esi */
  ESI = (pop32());
  /* 10147bad pop ebx */
  EBX = (pop32());
  /* 10147bae pop ebp */
  EBP = (pop32());
  /* 10147baf ret  */
  ESPCHK(0x10147aeeu, _esp0);
  ESP += 4; return;
}

/* FUN_10007bb0 @ 0x10147bb0 (85 bytes, 37 insns) */
void f_10147bb0(void) {
  FTRACE(0x10147bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10147bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10147bb3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10147bb6 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10147bb9 push esi */
  push32((uint32_t)(ESI));
  /* 10147bba push eax */
  push32((uint32_t)(EAX));
  /* 10147bbb lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10147bbe push eax */
  push32((uint32_t)(EAX));
  /* 10147bbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10147bc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10147bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10147bc4 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10147bc6 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10147bc9 call 0x101498ed */
  push32(0x10147bceu); f_101498ed();
  /* 10147bce mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10147bd1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10147bd4 push eax */
  push32((uint32_t)(EAX));
  /* 10147bd5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10147bd8 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10147bda push eax */
  push32((uint32_t)(EAX));
  /* 10147bdb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10147bdd cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147be1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10147be4 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10147be7 push eax */
  push32((uint32_t)(EAX));
  /* 10147be8 call 0x10149876 */
  push32(0x10147bedu); f_10149876();
  /* 10147bed lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10147bf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10147bf2 push eax */
  push32((uint32_t)(EAX));
  /* 10147bf3 push esi */
  push32((uint32_t)(ESI));
  /* 10147bf4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10147bf7 call 0x10147c05 */
  push32(0x10147bfcu); f_10147c05();
  /* 10147bfc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10147bff add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10147c02 pop esi */
  ESI = (pop32());
  /* 10147c03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10147c04 ret  */
  ESPCHK(0x10147bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c05 @ 0x10147c05 (167 bytes, 73 insns) */
void f_10147c05(void) {
  FTRACE(0x10147c05u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147c05 push ebp */
  push32((uint32_t)(EBP));
  /* 10147c06 mov ebp, esp */
  EBP = (ESP);
  /* 10147c08 push ebx */
  push32((uint32_t)(EBX));
  /* 10147c09 push esi */
  push32((uint32_t)(ESI));
  /* 10147c0a mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10147c0d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10147c10 push edi */
  push32((uint32_t)(EDI));
  /* 10147c11 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10147c14 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10147c15 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10147c19 je 0x10147c35 */
  if (C.zf) goto L_10147c35;
  /* 10147c1b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147c1e jne 0x10147c35 */
  if (!C.zf) goto L_10147c35;
  /* 10147c20 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10147c22 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147c25 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10147c28 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10147c2a add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10147c2c mov eax, ecx */
  EAX = (ECX);
  /* 10147c2e mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 10147c31 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_10147c35:;
  /* 10147c35 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147c38 mov edi, ebx */
  EDI = (EBX);
  /* 10147c3a jne 0x10147c42 */
  if (!C.zf) goto L_10147c42;
  /* 10147c3c mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 10147c3f lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_10147c42:;
  /* 10147c42 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10147c45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10147c47 jg 0x10147c59 */
  if ((!C.zf&&C.sf==C.of)) goto L_10147c59;
  /* 10147c49 push 1 */
  push32((uint32_t)(0x1u));
  /* 10147c4b push edi */
  push32((uint32_t)(EDI));
  /* 10147c4c call 0x10147d90 */
  push32(0x10147c51u); f_10147d90();
  /* 10147c51 pop ecx */
  ECX = (pop32());
  /* 10147c52 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 10147c55 pop ecx */
  ECX = (pop32());
  /* 10147c56 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10147c57 jmp 0x10147c5b */
  goto L_10147c5b;
L_10147c59:;
  /* 10147c59 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10147c5b:;
  /* 10147c5b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147c5f jle 0x10147ca5 */
  if ((C.zf||C.sf!=C.of)) goto L_10147ca5;
  /* 10147c61 push 1 */
  push32((uint32_t)(0x1u));
  /* 10147c63 push edi */
  push32((uint32_t)(EDI));
  /* 10147c64 call 0x10147d90 */
  push32(0x10147c69u); f_10147d90();
  /* 10147c69 mov al, byte ptr [0x10150bc4] */
  AL = (r8((uint32_t)(0x10150bc4)));
  /* 10147c6e pop ecx */
  ECX = (pop32());
  /* 10147c6f mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10147c71 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 10147c74 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10147c75 pop ecx */
  ECX = (pop32());
  /* 10147c76 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10147c78 jge 0x10147ca5 */
  if ((C.sf==C.of)) goto L_10147ca5;
  /* 10147c7a cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10147c7e je 0x10147c84 */
  if (C.zf) goto L_10147c84;
  /* 10147c80 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10147c82 jmp 0x10147c8b */
  goto L_10147c8b;
L_10147c84:;
  /* 10147c84 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10147c86 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147c89 jl 0x10147c8e */
  if ((C.sf!=C.of)) goto L_10147c8e;
L_10147c8b:;
  /* 10147c8b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_10147c8e:;
  /* 10147c8e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10147c91 push edi */
  push32((uint32_t)(EDI));
  /* 10147c92 call 0x10147d90 */
  push32(0x10147c97u); f_10147d90();
  /* 10147c97 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10147c9a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10147c9c push edi */
  push32((uint32_t)(EDI));
  /* 10147c9d call 0x10149af0 */
  push32(0x10147ca2u); f_10149af0();
  /* 10147ca2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10147ca5:;
  /* 10147ca5 pop edi */
  EDI = (pop32());
  /* 10147ca6 mov eax, ebx */
  EAX = (EBX);
  /* 10147ca8 pop esi */
  ESI = (pop32());
  /* 10147ca9 pop ebx */
  EBX = (pop32());
  /* 10147caa pop ebp */
  EBP = (pop32());
  /* 10147cab ret  */
  ESPCHK(0x10147c05u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cac @ 0x10147cac (147 bytes, 66 insns) */
void f_10147cac(void) {
  FTRACE(0x10147cacu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147cac push ebp */
  push32((uint32_t)(EBP));
  /* 10147cad mov ebp, esp */
  EBP = (ESP);
  /* 10147caf sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10147cb2 push ebx */
  push32((uint32_t)(EBX));
  /* 10147cb3 push esi */
  push32((uint32_t)(ESI));
  /* 10147cb4 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10147cb7 push edi */
  push32((uint32_t)(EDI));
  /* 10147cb8 push eax */
  push32((uint32_t)(EAX));
  /* 10147cb9 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10147cbc push eax */
  push32((uint32_t)(EAX));
  /* 10147cbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10147cc0 push ecx */
  push32((uint32_t)(ECX));
  /* 10147cc1 push ecx */
  push32((uint32_t)(ECX));
  /* 10147cc2 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10147cc4 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10147cc7 call 0x101498ed */
  push32(0x10147cccu); f_101498ed();
  /* 10147ccc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10147ccf mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 10147cd2 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 10147cd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10147cd7 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147cdb sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10147cde add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10147ce1 mov edi, eax */
  EDI = (EAX);
  /* 10147ce3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10147ce6 push eax */
  push32((uint32_t)(EAX));
  /* 10147ce7 push ebx */
  push32((uint32_t)(EBX));
  /* 10147ce8 push edi */
  push32((uint32_t)(EDI));
  /* 10147ce9 call 0x10149876 */
  push32(0x10147ceeu); f_10149876();
  /* 10147cee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10147cf1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10147cf4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10147cf5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147cf7 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 10147cfa cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147cfd jl 0x10147d25 */
  if ((C.sf!=C.of)) goto L_10147d25;
  /* 10147cff cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147d01 jge 0x10147d25 */
  if ((C.sf==C.of)) goto L_10147d25;
  /* 10147d03 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10147d05 je 0x10147d11 */
  if (C.zf) goto L_10147d11;
L_10147d07:;
  /* 10147d07 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10147d09 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10147d0a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10147d0c jne 0x10147d07 */
  if (!C.zf) goto L_10147d07;
  /* 10147d0e and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_10147d11:;
  /* 10147d11 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10147d14 push 1 */
  push32((uint32_t)(0x1u));
  /* 10147d16 push eax */
  push32((uint32_t)(EAX));
  /* 10147d17 push ebx */
  push32((uint32_t)(EBX));
  /* 10147d18 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10147d1b call 0x10147c05 */
  push32(0x10147d20u); f_10147c05();
  /* 10147d20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10147d23 jmp 0x10147d3a */
  goto L_10147d3a;
L_10147d25:;
  /* 10147d25 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10147d28 push 1 */
  push32((uint32_t)(0x1u));
  /* 10147d2a push eax */
  push32((uint32_t)(EAX));
  /* 10147d2b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10147d2e push ebx */
  push32((uint32_t)(EBX));
  /* 10147d2f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10147d32 call 0x10147aee */
  push32(0x10147d37u); f_10147aee();
  /* 10147d37 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10147d3a:;
  /* 10147d3a pop edi */
  EDI = (pop32());
  /* 10147d3b pop esi */
  ESI = (pop32());
  /* 10147d3c pop ebx */
  EBX = (pop32());
  /* 10147d3d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10147d3e ret  */
  ESPCHK(0x10147cacu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x10147d3f (81 bytes, 29 insns) */
void f_10147d3f(void) {
  FTRACE(0x10147d3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147d3f push ebp */
  push32((uint32_t)(EBP));
  /* 10147d40 mov ebp, esp */
  EBP = (ESP);
  /* 10147d42 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147d46 je 0x10147d7a */
  if (C.zf) goto L_10147d7a;
  /* 10147d48 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147d4c je 0x10147d7a */
  if (C.zf) goto L_10147d7a;
  /* 10147d4e cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147d52 jne 0x10147d67 */
  if (!C.zf) goto L_10147d67;
  /* 10147d54 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10147d57 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10147d5a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10147d5d call 0x10147bb0 */
  push32(0x10147d62u); f_10147bb0();
  /* 10147d62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10147d65 pop ebp */
  EBP = (pop32());
  /* 10147d66 ret  */
  ESPCHK(0x10147d3fu, _esp0);
  ESP += 4; return;
L_10147d67:;
  /* 10147d67 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10147d6a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10147d6d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10147d70 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10147d73 call 0x10147cac */
  push32(0x10147d78u); f_10147cac();
  /* 10147d78 jmp 0x10147d8b */
  goto L_10147d8b;
L_10147d7a:;
  /* 10147d7a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10147d7d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10147d80 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10147d83 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10147d86 call 0x10147a8d */
  push32(0x10147d8bu); f_10147a8d();
L_10147d8b:;
  /* 10147d8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10147d8e pop ebp */
  EBP = (pop32());
  /* 10147d8f ret  */
  ESPCHK(0x10147d3fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007d90 @ 0x10147d90 (37 bytes, 18 insns) */
void f_10147d90(void) {
  FTRACE(0x10147d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147d90 push edi */
  push32((uint32_t)(EDI));
  /* 10147d91 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 10147d95 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10147d97 je 0x10147db3 */
  if (C.zf) goto L_10147db3;
  /* 10147d99 push esi */
  push32((uint32_t)(ESI));
  /* 10147d9a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10147d9e push esi */
  push32((uint32_t)(ESI));
  /* 10147d9f call 0x10148f50 */
  push32(0x10147da4u); f_10148f50();
  /* 10147da4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10147da5 push eax */
  push32((uint32_t)(EAX));
  /* 10147da6 push esi */
  push32((uint32_t)(ESI));
  /* 10147da7 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10147da9 push esi */
  push32((uint32_t)(ESI));
  /* 10147daa call 0x10149b50 */
  push32(0x10147dafu); f_10149b50();
  /* 10147daf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10147db2 pop esi */
  ESI = (pop32());
L_10147db3:;
  /* 10147db3 pop edi */
  EDI = (pop32());
  /* 10147db4 ret  */
  ESPCHK(0x10147d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007db5 @ 0x10147db5 (45 bytes, 12 insns) */
void f_10147db5(void) {
  FTRACE(0x10147db5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147db5 mov eax, dword ptr [0x10150640] */
  EAX = (r32((uint32_t)(0x10150640)));
  /* 10147dba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10147dbc je 0x10147dc0 */
  if (C.zf) goto L_10147dc0;
  /* 10147dbe call eax */
  call_ind((uint32_t)(EAX), 0x10147dc0u);
L_10147dc0:;
  /* 10147dc0 push 0x1014f014 */
  push32((uint32_t)(0x1014f014u));
  /* 10147dc5 push 0x1014f008 */
  push32((uint32_t)(0x1014f008u));
  /* 10147dca call 0x10147eb9 */
  push32(0x10147dcfu); f_10147eb9();
  /* 10147dcf push 0x1014f004 */
  push32((uint32_t)(0x1014f004u));
  /* 10147dd4 push 0x1014f000 */
  push32((uint32_t)(0x1014f000u));
  /* 10147dd9 call 0x10147eb9 */
  push32(0x10147ddeu); f_10147eb9();
  /* 10147dde add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10147de1 ret  */
  ESPCHK(0x10147db5u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10147de2 (17 bytes, 6 insns) */
void f_10147de2(void) {
  FTRACE(0x10147de2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147de2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10147de4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10147de6 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10147dea call 0x10147e02 */
  push32(0x10147defu); f_10147e02();
  /* 10147def add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10147df2 ret  */
  ESPCHK(0x10147de2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007df3 @ 0x10147df3 (15 bytes, 6 insns) */
void f_10147df3(void) {
  FTRACE(0x10147df3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147df3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10147df5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10147df7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10147df9 call 0x10147e02 */
  push32(0x10147dfeu); f_10147e02();
  /* 10147dfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10147e01 ret  */
  ESPCHK(0x10147df3u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e02 @ 0x10147e02 (163 bytes, 53 insns) */
void f_10147e02(void) {
  FTRACE(0x10147e02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147e02 push edi */
  push32((uint32_t)(EDI));
  /* 10147e03 call 0x10147ea7 */
  push32(0x10147e08u); f_10147ea7();
  /* 10147e08 push 1 */
  push32((uint32_t)(0x1u));
  /* 10147e0a pop edi */
  EDI = (pop32());
  /* 10147e0b cmp dword ptr [0x10156678], edi */
  { uint32_t _a=(r32((uint32_t)(0x10156678))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147e11 jne 0x10147e24 */
  if (!C.zf) goto L_10147e24;
  /* 10147e13 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10147e17 call dword ptr [0x1014e020] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e020))), 0x10147e1du);
  /* 10147e1d push eax */
  push32((uint32_t)(EAX));
  /* 10147e1e call dword ptr [0x1014e01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e01c))), 0x10147e24u);
L_10147e24:;
  /* 10147e24 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147e29 push ebx */
  push32((uint32_t)(EBX));
  /* 10147e2a mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10147e2e mov dword ptr [0x10156674], edi */
  w32((uint32_t)(0x10156674), (EDI));
  /* 10147e34 mov byte ptr [0x10156670], bl */
  w8((uint32_t)(0x10156670), (BL));
  /* 10147e3a jne 0x10147e78 */
  if (!C.zf) goto L_10147e78;
  /* 10147e3c mov eax, dword ptr [0x10157d30] */
  EAX = (r32((uint32_t)(0x10157d30)));
  /* 10147e41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10147e43 je 0x10147e67 */
  if (C.zf) goto L_10147e67;
  /* 10147e45 mov ecx, dword ptr [0x10157d2c] */
  ECX = (r32((uint32_t)(0x10157d2c)));
  /* 10147e4b push esi */
  push32((uint32_t)(ESI));
  /* 10147e4c lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10147e4f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147e51 jb 0x10147e66 */
  if (C.cf) goto L_10147e66;
L_10147e53:;
  /* 10147e53 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10147e55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10147e57 je 0x10147e5b */
  if (C.zf) goto L_10147e5b;
  /* 10147e59 call eax */
  call_ind((uint32_t)(EAX), 0x10147e5bu);
L_10147e5b:;
  /* 10147e5b sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10147e5e cmp esi, dword ptr [0x10157d30] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10157d30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147e64 jae 0x10147e53 */
  if (!C.cf) goto L_10147e53;
L_10147e66:;
  /* 10147e66 pop esi */
  ESI = (pop32());
L_10147e67:;
  /* 10147e67 push 0x1014f020 */
  push32((uint32_t)(0x1014f020u));
  /* 10147e6c push 0x1014f018 */
  push32((uint32_t)(0x1014f018u));
  /* 10147e71 call 0x10147eb9 */
  push32(0x10147e76u); f_10147eb9();
  /* 10147e76 pop ecx */
  ECX = (pop32());
  /* 10147e77 pop ecx */
  ECX = (pop32());
L_10147e78:;
  /* 10147e78 push 0x1014f028 */
  push32((uint32_t)(0x1014f028u));
  /* 10147e7d push 0x1014f024 */
  push32((uint32_t)(0x1014f024u));
  /* 10147e82 call 0x10147eb9 */
  push32(0x10147e87u); f_10147eb9();
  /* 10147e87 pop ecx */
  ECX = (pop32());
  /* 10147e88 pop ecx */
  ECX = (pop32());
  /* 10147e89 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10147e8b pop ebx */
  EBX = (pop32());
  /* 10147e8c je 0x10147e95 */
  if (C.zf) goto L_10147e95;
  /* 10147e8e call 0x10147eb0 */
  push32(0x10147e93u); f_10147eb0();
  /* 10147e93 pop edi */
  EDI = (pop32());
  /* 10147e94 ret  */
  ESPCHK(0x10147e02u, _esp0);
  ESP += 4; return;
L_10147e95:;
  /* 10147e95 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10147e99 mov dword ptr [0x10156678], edi */
  w32((uint32_t)(0x10156678), (EDI));
  /* 10147e9f call dword ptr [0x1014e018] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e018))), 0x10147ea5u);
  /* 10147ea5 pop edi */
  EDI = (pop32());
  /* 10147ea6 ret  */
  ESPCHK(0x10147e02u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ea7 @ 0x10147ea7 (9 bytes, 4 insns) */
void f_10147ea7(void) {
  FTRACE(0x10147ea7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147ea7 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10147ea9 call 0x10149f23 */
  push32(0x10147eaeu); f_10149f23();
  /* 10147eae pop ecx */
  ECX = (pop32());
  /* 10147eaf ret  */
  ESPCHK(0x10147ea7u, _esp0);
  ESP += 4; return;
}

/* FUN_10007eb0 @ 0x10147eb0 (9 bytes, 4 insns) */
void f_10147eb0(void) {
  FTRACE(0x10147eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147eb0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10147eb2 call 0x10149f84 */
  push32(0x10147eb7u); f_10149f84();
  /* 10147eb7 pop ecx */
  ECX = (pop32());
  /* 10147eb8 ret  */
  ESPCHK(0x10147eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007eb9 @ 0x10147eb9 (26 bytes, 12 insns) */
void f_10147eb9(void) {
  FTRACE(0x10147eb9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147eb9 push esi */
  push32((uint32_t)(ESI));
  /* 10147eba mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10147ebe:;
  /* 10147ebe cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147ec2 jae 0x10147ed1 */
  if (!C.cf) goto L_10147ed1;
  /* 10147ec4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10147ec6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10147ec8 je 0x10147ecc */
  if (C.zf) goto L_10147ecc;
  /* 10147eca call eax */
  call_ind((uint32_t)(EAX), 0x10147eccu);
L_10147ecc:;
  /* 10147ecc add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10147ecf jmp 0x10147ebe */
  goto L_10147ebe;
L_10147ed1:;
  /* 10147ed1 pop esi */
  ESI = (pop32());
  /* 10147ed2 ret  */
  ESPCHK(0x10147eb9u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ed3 @ 0x10147ed3 (84 bytes, 32 insns) */
void f_10147ed3(void) {
  FTRACE(0x10147ed3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147ed3 push esi */
  push32((uint32_t)(ESI));
  /* 10147ed4 call 0x10149e8e */
  push32(0x10147ed9u); f_10149e8e();
  /* 10147ed9 call dword ptr [0x1014e02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e02c))), 0x10147edfu);
  /* 10147edf cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147ee2 mov dword ptr [0x10150670], eax */
  w32((uint32_t)(0x10150670), (EAX));
  /* 10147ee7 je 0x10147f23 */
  if (C.zf) goto L_10147f23;
  /* 10147ee9 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10147eeb push 1 */
  push32((uint32_t)(0x1u));
  /* 10147eed call 0x10149f99 */
  push32(0x10147ef2u); f_10149f99();
  /* 10147ef2 mov esi, eax */
  ESI = (EAX);
  /* 10147ef4 pop ecx */
  ECX = (pop32());
  /* 10147ef5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10147ef7 pop ecx */
  ECX = (pop32());
  /* 10147ef8 je 0x10147f23 */
  if (C.zf) goto L_10147f23;
  /* 10147efa push esi */
  push32((uint32_t)(ESI));
  /* 10147efb push dword ptr [0x10150670] */
  push32((uint32_t)(r32((uint32_t)(0x10150670))));
  /* 10147f01 call dword ptr [0x1014e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e028))), 0x10147f07u);
  /* 10147f07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10147f09 je 0x10147f23 */
  if (C.zf) goto L_10147f23;
  /* 10147f0b push esi */
  push32((uint32_t)(ESI));
  /* 10147f0c call 0x10147f45 */
  push32(0x10147f11u); f_10147f45();
  /* 10147f11 pop ecx */
  ECX = (pop32());
  /* 10147f12 call dword ptr [0x1014e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e024))), 0x10147f18u);
  /* 10147f18 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10147f1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10147f1e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10147f20 pop eax */
  EAX = (pop32());
  /* 10147f21 pop esi */
  ESI = (pop32());
  /* 10147f22 ret  */
  ESPCHK(0x10147ed3u, _esp0);
  ESP += 4; return;
L_10147f23:;
  /* 10147f23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10147f25 pop esi */
  ESI = (pop32());
  /* 10147f26 ret  */
  ESPCHK(0x10147ed3u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f27 @ 0x10147f27 (30 bytes, 8 insns) */
void f_10147f27(void) {
  FTRACE(0x10147f27u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147f27 call 0x10149eb7 */
  push32(0x10147f2cu); f_10149eb7();
  /* 10147f2c mov eax, dword ptr [0x10150670] */
  EAX = (r32((uint32_t)(0x10150670)));
  /* 10147f31 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147f34 je 0x10147f44 */
  if (C.zf) goto L_10147f44;
  /* 10147f36 push eax */
  push32((uint32_t)(EAX));
  /* 10147f37 call dword ptr [0x1014e030] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e030))), 0x10147f3du);
  /* 10147f3d or dword ptr [0x10150670], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10150670)))|(0xffffffffu); w32((uint32_t)(0x10150670), (_r)); fl_logic(_r,32); }
L_10147f44:;
  /* 10147f44 ret  */
  ESPCHK(0x10147f27u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f45 @ 0x10147f45 (19 bytes, 4 insns) */
void f_10147f45(void) {
  FTRACE(0x10147f45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147f45 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10147f49 mov dword ptr [eax + 0x50], 0x10150cc0 */
  w32((uint32_t)(EAX + 0x50), (0x10150cc0u));
  /* 10147f50 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10147f57 ret  */
  ESPCHK(0x10147f45u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f58 @ 0x10147f58 (103 bytes, 38 insns) */
void f_10147f58(void) {
  FTRACE(0x10147f58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147f58 push esi */
  push32((uint32_t)(ESI));
  /* 10147f59 push edi */
  push32((uint32_t)(EDI));
  /* 10147f5a call dword ptr [0x1014e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e03c))), 0x10147f60u);
  /* 10147f60 push dword ptr [0x10150670] */
  push32((uint32_t)(r32((uint32_t)(0x10150670))));
  /* 10147f66 mov edi, eax */
  EDI = (EAX);
  /* 10147f68 call dword ptr [0x1014e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e038))), 0x10147f6eu);
  /* 10147f6e mov esi, eax */
  ESI = (EAX);
  /* 10147f70 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10147f72 jne 0x10147fb3 */
  if (!C.zf) goto L_10147fb3;
  /* 10147f74 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10147f76 push 1 */
  push32((uint32_t)(0x1u));
  /* 10147f78 call 0x10149f99 */
  push32(0x10147f7du); f_10149f99();
  /* 10147f7d mov esi, eax */
  ESI = (EAX);
  /* 10147f7f pop ecx */
  ECX = (pop32());
  /* 10147f80 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10147f82 pop ecx */
  ECX = (pop32());
  /* 10147f83 je 0x10147fab */
  if (C.zf) goto L_10147fab;
  /* 10147f85 push esi */
  push32((uint32_t)(ESI));
  /* 10147f86 push dword ptr [0x10150670] */
  push32((uint32_t)(r32((uint32_t)(0x10150670))));
  /* 10147f8c call dword ptr [0x1014e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e028))), 0x10147f92u);
  /* 10147f92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10147f94 je 0x10147fab */
  if (C.zf) goto L_10147fab;
  /* 10147f96 push esi */
  push32((uint32_t)(ESI));
  /* 10147f97 call 0x10147f45 */
  push32(0x10147f9cu); f_10147f45();
  /* 10147f9c pop ecx */
  ECX = (pop32());
  /* 10147f9d call dword ptr [0x1014e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e024))), 0x10147fa3u);
  /* 10147fa3 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10147fa7 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10147fa9 jmp 0x10147fb3 */
  goto L_10147fb3;
L_10147fab:;
  /* 10147fab push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10147fad call 0x10146fc1 */
  push32(0x10147fb2u); f_10146fc1();
  /* 10147fb2 pop ecx */
  ECX = (pop32());
L_10147fb3:;
  /* 10147fb3 push edi */
  push32((uint32_t)(EDI));
  /* 10147fb4 call dword ptr [0x1014e034] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e034))), 0x10147fbau);
  /* 10147fba mov eax, esi */
  EAX = (ESI);
  /* 10147fbc pop edi */
  EDI = (pop32());
  /* 10147fbd pop esi */
  ESI = (pop32());
  /* 10147fbe ret  */
  ESPCHK(0x10147f58u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fbf @ 0x10147fbf (160 bytes, 62 insns) */
void f_10147fbf(void) {
  FTRACE(0x10147fbfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10147fbf mov eax, dword ptr [0x10150670] */
  EAX = (r32((uint32_t)(0x10150670)));
  /* 10147fc4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10147fc7 je 0x1014805e */
  if (C.zf) goto L_1014805e;
  /* 10147fcd push esi */
  push32((uint32_t)(ESI));
  /* 10147fce mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10147fd2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10147fd4 jne 0x10147fe3 */
  if (!C.zf) goto L_10147fe3;
  /* 10147fd6 push eax */
  push32((uint32_t)(EAX));
  /* 10147fd7 call dword ptr [0x1014e038] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e038))), 0x10147fddu);
  /* 10147fdd mov esi, eax */
  ESI = (EAX);
  /* 10147fdf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10147fe1 je 0x1014804f */
  if (C.zf) goto L_1014804f;
L_10147fe3:;
  /* 10147fe3 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10147fe6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10147fe8 je 0x10147ff1 */
  if (C.zf) goto L_10147ff1;
  /* 10147fea push eax */
  push32((uint32_t)(EAX));
  /* 10147feb call 0x1014a0d6 */
  push32(0x10147ff0u); f_1014a0d6();
  /* 10147ff0 pop ecx */
  ECX = (pop32());
L_10147ff1:;
  /* 10147ff1 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10147ff4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10147ff6 je 0x10147fff */
  if (C.zf) goto L_10147fff;
  /* 10147ff8 push eax */
  push32((uint32_t)(EAX));
  /* 10147ff9 call 0x1014a0d6 */
  push32(0x10147ffeu); f_1014a0d6();
  /* 10147ffe pop ecx */
  ECX = (pop32());
L_10147fff:;
  /* 10147fff mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 10148002 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10148004 je 0x1014800d */
  if (C.zf) goto L_1014800d;
  /* 10148006 push eax */
  push32((uint32_t)(EAX));
  /* 10148007 call 0x1014a0d6 */
  push32(0x1014800cu); f_1014a0d6();
  /* 1014800c pop ecx */
  ECX = (pop32());
L_1014800d:;
  /* 1014800d mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10148010 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10148012 je 0x1014801b */
  if (C.zf) goto L_1014801b;
  /* 10148014 push eax */
  push32((uint32_t)(EAX));
  /* 10148015 call 0x1014a0d6 */
  push32(0x1014801au); f_1014a0d6();
  /* 1014801a pop ecx */
  ECX = (pop32());
L_1014801b:;
  /* 1014801b mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 1014801e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10148020 je 0x10148029 */
  if (C.zf) goto L_10148029;
  /* 10148022 push eax */
  push32((uint32_t)(EAX));
  /* 10148023 call 0x1014a0d6 */
  push32(0x10148028u); f_1014a0d6();
  /* 10148028 pop ecx */
  ECX = (pop32());
L_10148029:;
  /* 10148029 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 1014802c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014802e je 0x10148037 */
  if (C.zf) goto L_10148037;
  /* 10148030 push eax */
  push32((uint32_t)(EAX));
  /* 10148031 call 0x1014a0d6 */
  push32(0x10148036u); f_1014a0d6();
  /* 10148036 pop ecx */
  ECX = (pop32());
L_10148037:;
  /* 10148037 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 1014803a cmp eax, 0x10150cc0 */
  { uint32_t _a=(EAX),_b=(0x10150cc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014803f je 0x10148048 */
  if (C.zf) goto L_10148048;
  /* 10148041 push eax */
  push32((uint32_t)(EAX));
  /* 10148042 call 0x1014a0d6 */
  push32(0x10148047u); f_1014a0d6();
  /* 10148047 pop ecx */
  ECX = (pop32());
L_10148048:;
  /* 10148048 push esi */
  push32((uint32_t)(ESI));
  /* 10148049 call 0x1014a0d6 */
  push32(0x1014804eu); f_1014a0d6();
  /* 1014804e pop ecx */
  ECX = (pop32());
L_1014804f:;
  /* 1014804f push 0 */
  push32((uint32_t)(0x0u));
  /* 10148051 push dword ptr [0x10150670] */
  push32((uint32_t)(r32((uint32_t)(0x10150670))));
  /* 10148057 call dword ptr [0x1014e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e028))), 0x1014805du);
  /* 1014805d pop esi */
  ESI = (pop32());
L_1014805e:;
  /* 1014805e ret  */
  ESPCHK(0x10147fbfu, _esp0);
  ESP += 4; return;
}

/* FUN_1000805f @ 0x1014805f (444 bytes, 150 insns) */
void f_1014805f(void) {
  FTRACE(0x1014805fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014805f push ebp */
  push32((uint32_t)(EBP));
  /* 10148060 mov ebp, esp */
  EBP = (ESP);
  /* 10148062 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10148065 push ebx */
  push32((uint32_t)(EBX));
  /* 10148066 push esi */
  push32((uint32_t)(ESI));
  /* 10148067 push edi */
  push32((uint32_t)(EDI));
  /* 10148068 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1014806d call 0x1014a1bf */
  push32(0x10148072u); f_1014a1bf();
  /* 10148072 mov esi, eax */
  ESI = (EAX);
  /* 10148074 pop ecx */
  ECX = (pop32());
  /* 10148075 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10148077 jne 0x10148081 */
  if (!C.zf) goto L_10148081;
  /* 10148079 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1014807b call 0x10146fc1 */
  push32(0x10148080u); f_10146fc1();
  /* 10148080 pop ecx */
  ECX = (pop32());
L_10148081:;
  /* 10148081 mov dword ptr [0x10157c20], esi */
  w32((uint32_t)(0x10157c20), (ESI));
  /* 10148087 mov dword ptr [0x10157d20], 0x20 */
  w32((uint32_t)(0x10157d20), (0x20u));
  /* 10148091 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10148097:;
  /* 10148097 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148099 jae 0x101480b9 */
  if (!C.cf) goto L_101480b9;
  /* 1014809b and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1014809f or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 101480a2 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 101480a6 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 101480aa mov eax, dword ptr [0x10157c20] */
  EAX = (r32((uint32_t)(0x10157c20)));
  /* 101480af add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101480b2 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101480b7 jmp 0x10148097 */
  goto L_10148097;
L_101480b9:;
  /* 101480b9 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 101480bc push eax */
  push32((uint32_t)(EAX));
  /* 101480bd call dword ptr [0x1014e04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e04c))), 0x101480c3u);
  /* 101480c3 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101480c8 je 0x1014819f */
  if (C.zf) goto L_1014819f;
  /* 101480ce mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 101480d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101480d3 je 0x1014819f */
  if (C.zf) goto L_1014819f;
  /* 101480d9 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 101480db lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 101480de lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 101480e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101480e4 mov eax, 0x800 */
  EAX = (0x800u);
  /* 101480e9 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101480eb jl 0x101480ef */
  if ((C.sf!=C.of)) goto L_101480ef;
  /* 101480ed mov edi, eax */
  EDI = (EAX);
L_101480ef:;
  /* 101480ef cmp dword ptr [0x10157d20], edi */
  { uint32_t _a=(r32((uint32_t)(0x10157d20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101480f5 jge 0x1014814d */
  if ((C.sf==C.of)) goto L_1014814d;
  /* 101480f7 mov esi, 0x10157c24 */
  ESI = (0x10157c24u);
L_101480fc:;
  /* 101480fc push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10148101 call 0x1014a1bf */
  push32(0x10148106u); f_1014a1bf();
  /* 10148106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10148108 pop ecx */
  ECX = (pop32());
  /* 10148109 je 0x10148147 */
  if (C.zf) goto L_10148147;
  /* 1014810b add dword ptr [0x10157d20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10157d20))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10157d20), (_r)); fl_add(_a,_b,_r,32); }
  /* 10148112 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10148114 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_1014811a:;
  /* 1014811a cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014811c jae 0x1014813a */
  if (!C.cf) goto L_1014813a;
  /* 1014811e and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10148122 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10148125 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10148129 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 1014812d mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1014812f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10148132 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10148138 jmp 0x1014811a */
  goto L_1014811a;
L_1014813a:;
  /* 1014813a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1014813d cmp dword ptr [0x10157d20], edi */
  { uint32_t _a=(r32((uint32_t)(0x10157d20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148143 jl 0x101480fc */
  if ((C.sf!=C.of)) goto L_101480fc;
  /* 10148145 jmp 0x1014814d */
  goto L_1014814d;
L_10148147:;
  /* 10148147 mov edi, dword ptr [0x10157d20] */
  EDI = (r32((uint32_t)(0x10157d20)));
L_1014814d:;
  /* 1014814d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1014814f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10148151 jle 0x1014819f */
  if ((C.zf||C.sf!=C.of)) goto L_1014819f;
L_10148153:;
  /* 10148153 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10148156 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10148158 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014815b je 0x10148195 */
  if (C.zf) goto L_10148195;
  /* 1014815d mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 1014815f test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10148161 je 0x10148195 */
  if (C.zf) goto L_10148195;
  /* 10148163 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10148165 jne 0x10148172 */
  if (!C.zf) goto L_10148172;
  /* 10148167 push ecx */
  push32((uint32_t)(ECX));
  /* 10148168 call dword ptr [0x1014e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e048))), 0x1014816eu);
  /* 1014816e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10148170 je 0x10148195 */
  if (C.zf) goto L_10148195;
L_10148172:;
  /* 10148172 mov ecx, esi */
  ECX = (ESI);
  /* 10148174 mov eax, esi */
  EAX = (ESI);
  /* 10148176 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10148179 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1014817c mov ecx, dword ptr [ecx*4 + 0x10157c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10157c20)));
  /* 10148183 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10148186 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10148189 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014818c mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1014818e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10148190 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10148192 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10148195:;
  /* 10148195 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10148199 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014819a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1014819b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014819d jl 0x10148153 */
  if ((C.sf!=C.of)) goto L_10148153;
L_1014819f:;
  /* 1014819f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101481a1:;
  /* 101481a1 mov ecx, dword ptr [0x10157c20] */
  ECX = (r32((uint32_t)(0x10157c20)));
  /* 101481a7 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 101481aa cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101481ae lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 101481b1 jne 0x10148200 */
  if (!C.zf) goto L_10148200;
  /* 101481b3 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101481b5 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 101481b9 jne 0x101481c0 */
  if (!C.zf) goto L_101481c0;
  /* 101481bb push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 101481bd pop eax */
  EAX = (pop32());
  /* 101481be jmp 0x101481ca */
  goto L_101481ca;
L_101481c0:;
  /* 101481c0 mov eax, ebx */
  EAX = (EBX);
  /* 101481c2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101481c3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101481c5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101481c7 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_101481ca:;
  /* 101481ca push eax */
  push32((uint32_t)(EAX));
  /* 101481cb call dword ptr [0x1014e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e044))), 0x101481d1u);
  /* 101481d1 mov edi, eax */
  EDI = (EAX);
  /* 101481d3 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101481d6 je 0x101481ef */
  if (C.zf) goto L_101481ef;
  /* 101481d8 push edi */
  push32((uint32_t)(EDI));
  /* 101481d9 call dword ptr [0x1014e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e048))), 0x101481dfu);
  /* 101481df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101481e1 je 0x101481ef */
  if (C.zf) goto L_101481ef;
  /* 101481e3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101481e8 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 101481ea cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101481ed jne 0x101481f5 */
  if (!C.zf) goto L_101481f5;
L_101481ef:;
  /* 101481ef or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 101481f3 jmp 0x10148204 */
  goto L_10148204;
L_101481f5:;
  /* 101481f5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101481f8 jne 0x10148204 */
  if (!C.zf) goto L_10148204;
  /* 101481fa or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 101481fe jmp 0x10148204 */
  goto L_10148204;
L_10148200:;
  /* 10148200 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_10148204:;
  /* 10148204 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10148205 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148208 jl 0x101481a1 */
  if ((C.sf!=C.of)) goto L_101481a1;
  /* 1014820a push dword ptr [0x10157d20] */
  push32((uint32_t)(r32((uint32_t)(0x10157d20))));
  /* 10148210 call dword ptr [0x1014e040] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e040))), 0x10148216u);
  /* 10148216 pop edi */
  EDI = (pop32());
  /* 10148217 pop esi */
  ESI = (pop32());
  /* 10148218 pop ebx */
  EBX = (pop32());
  /* 10148219 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014821a ret  */
  ESPCHK(0x1014805fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000821b @ 0x1014821b (84 bytes, 33 insns) */
void f_1014821b(void) {
  FTRACE(0x1014821bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014821b push ebx */
  push32((uint32_t)(EBX));
  /* 1014821c push esi */
  push32((uint32_t)(ESI));
  /* 1014821d push edi */
  push32((uint32_t)(EDI));
  /* 1014821e mov esi, 0x10157c20 */
  ESI = (0x10157c20u);
L_10148223:;
  /* 10148223 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10148225 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10148227 je 0x10148260 */
  if (C.zf) goto L_10148260;
  /* 10148229 mov edi, eax */
  EDI = (EAX);
  /* 1014822b add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10148230 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148232 jae 0x10148255 */
  if (!C.cf) goto L_10148255;
  /* 10148234 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10148237:;
  /* 10148237 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014823b je 0x10148244 */
  if (C.zf) goto L_10148244;
  /* 1014823d push ebx */
  push32((uint32_t)(EBX));
  /* 1014823e call dword ptr [0x1014e050] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e050))), 0x10148244u);
L_10148244:;
  /* 10148244 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10148246 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10148249 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014824e add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10148251 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148253 jb 0x10148237 */
  if (C.cf) goto L_10148237;
L_10148255:;
  /* 10148255 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10148257 call 0x1014a0d6 */
  push32(0x1014825cu); f_1014a0d6();
  /* 1014825c and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1014825f pop ecx */
  ECX = (pop32());
L_10148260:;
  /* 10148260 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10148263 cmp esi, 0x10157d20 */
  { uint32_t _a=(ESI),_b=(0x10157d20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148269 jl 0x10148223 */
  if ((C.sf!=C.of)) goto L_10148223;
  /* 1014826b pop edi */
  EDI = (pop32());
  /* 1014826c pop esi */
  ESI = (pop32());
  /* 1014826d pop ebx */
  EBX = (pop32());
  /* 1014826e ret  */
  ESPCHK(0x1014821bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000826f @ 0x1014826f (185 bytes, 71 insns) */
void f_1014826f(void) {
  FTRACE(0x1014826fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014826f push ebx */
  push32((uint32_t)(EBX));
  /* 10148270 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10148272 cmp dword ptr [0x10157d28], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10157d28))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148278 push esi */
  push32((uint32_t)(ESI));
  /* 10148279 push edi */
  push32((uint32_t)(EDI));
  /* 1014827a jne 0x10148281 */
  if (!C.zf) goto L_10148281;
  /* 1014827c call 0x1014a6d1 */
  push32(0x10148281u); f_1014a6d1();
L_10148281:;
  /* 10148281 mov esi, dword ptr [0x10156628] */
  ESI = (r32((uint32_t)(0x10156628)));
  /* 10148287 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10148289:;
  /* 10148289 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1014828b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014828d je 0x101482a1 */
  if (C.zf) goto L_101482a1;
  /* 1014828f cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10148291 je 0x10148294 */
  if (C.zf) goto L_10148294;
  /* 10148293 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10148294:;
  /* 10148294 push esi */
  push32((uint32_t)(ESI));
  /* 10148295 call 0x10148f50 */
  push32(0x1014829au); f_10148f50();
  /* 1014829a pop ecx */
  ECX = (pop32());
  /* 1014829b lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 1014829f jmp 0x10148289 */
  goto L_10148289;
L_101482a1:;
  /* 101482a1 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 101482a8 push eax */
  push32((uint32_t)(EAX));
  /* 101482a9 call 0x1014a1bf */
  push32(0x101482aeu); f_1014a1bf();
  /* 101482ae mov esi, eax */
  ESI = (EAX);
  /* 101482b0 pop ecx */
  ECX = (pop32());
  /* 101482b1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101482b3 mov dword ptr [0x10156658], esi */
  w32((uint32_t)(0x10156658), (ESI));
  /* 101482b9 jne 0x101482c3 */
  if (!C.zf) goto L_101482c3;
  /* 101482bb push 9 */
  push32((uint32_t)(0x9u));
  /* 101482bd call 0x10146fc1 */
  push32(0x101482c2u); f_10146fc1();
  /* 101482c2 pop ecx */
  ECX = (pop32());
L_101482c3:;
  /* 101482c3 mov edi, dword ptr [0x10156628] */
  EDI = (r32((uint32_t)(0x10156628)));
  /* 101482c9 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101482cb je 0x10148306 */
  if (C.zf) goto L_10148306;
  /* 101482cd push ebp */
  push32((uint32_t)(EBP));
L_101482ce:;
  /* 101482ce push edi */
  push32((uint32_t)(EDI));
  /* 101482cf call 0x10148f50 */
  push32(0x101482d4u); f_10148f50();
  /* 101482d4 mov ebp, eax */
  EBP = (EAX);
  /* 101482d6 pop ecx */
  ECX = (pop32());
  /* 101482d7 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 101482d8 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101482db je 0x101482ff */
  if (C.zf) goto L_101482ff;
  /* 101482dd push ebp */
  push32((uint32_t)(EBP));
  /* 101482de call 0x1014a1bf */
  push32(0x101482e3u); f_1014a1bf();
  /* 101482e3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101482e5 pop ecx */
  ECX = (pop32());
  /* 101482e6 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101482e8 jne 0x101482f2 */
  if (!C.zf) goto L_101482f2;
  /* 101482ea push 9 */
  push32((uint32_t)(0x9u));
  /* 101482ec call 0x10146fc1 */
  push32(0x101482f1u); f_10146fc1();
  /* 101482f1 pop ecx */
  ECX = (pop32());
L_101482f2:;
  /* 101482f2 push edi */
  push32((uint32_t)(EDI));
  /* 101482f3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101482f5 call 0x10149a00 */
  push32(0x101482fau); f_10149a00();
  /* 101482fa pop ecx */
  ECX = (pop32());
  /* 101482fb add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101482fe pop ecx */
  ECX = (pop32());
L_101482ff:;
  /* 101482ff add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10148301 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10148303 jne 0x101482ce */
  if (!C.zf) goto L_101482ce;
  /* 10148305 pop ebp */
  EBP = (pop32());
L_10148306:;
  /* 10148306 push dword ptr [0x10156628] */
  push32((uint32_t)(r32((uint32_t)(0x10156628))));
  /* 1014830c call 0x1014a0d6 */
  push32(0x10148311u); f_1014a0d6();
  /* 10148311 pop ecx */
  ECX = (pop32());
  /* 10148312 mov dword ptr [0x10156628], ebx */
  w32((uint32_t)(0x10156628), (EBX));
  /* 10148318 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 1014831a pop edi */
  EDI = (pop32());
  /* 1014831b pop esi */
  ESI = (pop32());
  /* 1014831c mov dword ptr [0x10157d24], 1 */
  w32((uint32_t)(0x10157d24), (0x1u));
  /* 10148326 pop ebx */
  EBX = (pop32());
  /* 10148327 ret  */
  ESPCHK(0x1014826fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008328 @ 0x10148328 (153 bytes, 62 insns) */
void f_10148328(void) {
  FTRACE(0x10148328u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10148328 push ebp */
  push32((uint32_t)(EBP));
  /* 10148329 mov ebp, esp */
  EBP = (ESP);
  /* 1014832b push ecx */
  push32((uint32_t)(ECX));
  /* 1014832c push ecx */
  push32((uint32_t)(ECX));
  /* 1014832d push ebx */
  push32((uint32_t)(EBX));
  /* 1014832e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10148330 cmp dword ptr [0x10157d28], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10157d28))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148336 push esi */
  push32((uint32_t)(ESI));
  /* 10148337 push edi */
  push32((uint32_t)(EDI));
  /* 10148338 jne 0x1014833f */
  if (!C.zf) goto L_1014833f;
  /* 1014833a call 0x1014a6d1 */
  push32(0x1014833fu); f_1014a6d1();
L_1014833f:;
  /* 1014833f mov esi, 0x1015667c */
  ESI = (0x1015667cu);
  /* 10148344 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10148349 push esi */
  push32((uint32_t)(ESI));
  /* 1014834a push ebx */
  push32((uint32_t)(EBX));
  /* 1014834b call dword ptr [0x1014e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e054))), 0x10148351u);
  /* 10148351 mov eax, dword ptr [0x10157d34] */
  EAX = (r32((uint32_t)(0x10157d34)));
  /* 10148356 mov dword ptr [0x10156668], esi */
  w32((uint32_t)(0x10156668), (ESI));
  /* 1014835c mov edi, esi */
  EDI = (ESI);
  /* 1014835e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10148360 je 0x10148364 */
  if (C.zf) goto L_10148364;
  /* 10148362 mov edi, eax */
  EDI = (EAX);
L_10148364:;
  /* 10148364 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10148367 push eax */
  push32((uint32_t)(EAX));
  /* 10148368 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1014836b push eax */
  push32((uint32_t)(EAX));
  /* 1014836c push ebx */
  push32((uint32_t)(EBX));
  /* 1014836d push ebx */
  push32((uint32_t)(EBX));
  /* 1014836e push edi */
  push32((uint32_t)(EDI));
  /* 1014836f call 0x101483c1 */
  push32(0x10148374u); f_101483c1();
  /* 10148374 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10148377 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014837a lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1014837d push eax */
  push32((uint32_t)(EAX));
  /* 1014837e call 0x1014a1bf */
  push32(0x10148383u); f_1014a1bf();
  /* 10148383 mov esi, eax */
  ESI = (EAX);
  /* 10148385 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10148388 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014838a jne 0x10148394 */
  if (!C.zf) goto L_10148394;
  /* 1014838c push 8 */
  push32((uint32_t)(0x8u));
  /* 1014838e call 0x10146fc1 */
  push32(0x10148393u); f_10146fc1();
  /* 10148393 pop ecx */
  ECX = (pop32());
L_10148394:;
  /* 10148394 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10148397 push eax */
  push32((uint32_t)(EAX));
  /* 10148398 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1014839b push eax */
  push32((uint32_t)(EAX));
  /* 1014839c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1014839f lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 101483a2 push eax */
  push32((uint32_t)(EAX));
  /* 101483a3 push esi */
  push32((uint32_t)(ESI));
  /* 101483a4 push edi */
  push32((uint32_t)(EDI));
  /* 101483a5 call 0x101483c1 */
  push32(0x101483aau); f_101483c1();
  /* 101483aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101483ad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101483b0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101483b1 mov dword ptr [0x10156650], esi */
  w32((uint32_t)(0x10156650), (ESI));
  /* 101483b7 pop edi */
  EDI = (pop32());
  /* 101483b8 pop esi */
  ESI = (pop32());
  /* 101483b9 mov dword ptr [0x1015664c], eax */
  w32((uint32_t)(0x1015664c), (EAX));
  /* 101483be pop ebx */
  EBX = (pop32());
  /* 101483bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101483c0 ret  */
  ESPCHK(0x10148328u, _esp0);
  ESP += 4; return;
}

/* FUN_100083c1 @ 0x101483c1 (436 bytes, 187 insns) */
void f_101483c1(void) {
  FTRACE(0x101483c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101483c1 push ebp */
  push32((uint32_t)(EBP));
  /* 101483c2 mov ebp, esp */
  EBP = (ESP);
  /* 101483c4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 101483c7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 101483ca push ebx */
  push32((uint32_t)(EBX));
  /* 101483cb push esi */
  push32((uint32_t)(ESI));
  /* 101483cc and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 101483cf mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101483d2 push edi */
  push32((uint32_t)(EDI));
  /* 101483d3 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101483d6 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 101483dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101483df test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101483e1 je 0x101483eb */
  if (C.zf) goto L_101483eb;
  /* 101483e3 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 101483e5 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101483e8 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101483eb:;
  /* 101483eb cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101483ee jne 0x10148434 */
  if (!C.zf) goto L_10148434;
L_101483f0:;
  /* 101483f0 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 101483f3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101483f4 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101483f7 je 0x10148422 */
  if (C.zf) goto L_10148422;
  /* 101483f9 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101483fb je 0x10148422 */
  if (C.zf) goto L_10148422;
  /* 101483fd movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10148400 test byte ptr [edx + 0x10156ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10156ae1)))&(0x4u); fl_logic(_r,8); }
  /* 10148407 je 0x10148415 */
  if (C.zf) goto L_10148415;
  /* 10148409 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1014840b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1014840d je 0x10148415 */
  if (C.zf) goto L_10148415;
  /* 1014840f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10148411 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10148413 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10148414 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10148415:;
  /* 10148415 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10148417 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10148419 je 0x101483f0 */
  if (C.zf) goto L_101483f0;
  /* 1014841b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1014841d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1014841f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10148420 jmp 0x101483f0 */
  goto L_101483f0;
L_10148422:;
  /* 10148422 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10148424 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10148426 je 0x1014842c */
  if (C.zf) goto L_1014842c;
  /* 10148428 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1014842b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1014842c:;
  /* 1014842c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014842f jne 0x10148477 */
  if (!C.zf) goto L_10148477;
  /* 10148431 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10148432 jmp 0x10148477 */
  goto L_10148477;
L_10148434:;
  /* 10148434 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10148436 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10148438 je 0x1014843f */
  if (C.zf) goto L_1014843f;
  /* 1014843a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1014843c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1014843e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1014843f:;
  /* 1014843f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10148441 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10148442 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10148445 test byte ptr [ebx + 0x10156ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10156ae1)))&(0x4u); fl_logic(_r,8); }
  /* 1014844c je 0x1014845a */
  if (C.zf) goto L_1014845a;
  /* 1014844e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10148450 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10148452 je 0x10148459 */
  if (C.zf) goto L_10148459;
  /* 10148454 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10148456 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10148458 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10148459:;
  /* 10148459 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1014845a:;
  /* 1014845a cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014845d je 0x10148468 */
  if (C.zf) goto L_10148468;
  /* 1014845f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10148461 je 0x1014846c */
  if (C.zf) goto L_1014846c;
  /* 10148463 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10148466 jne 0x10148434 */
  if (!C.zf) goto L_10148434;
L_10148468:;
  /* 10148468 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1014846a jne 0x1014846f */
  if (!C.zf) goto L_1014846f;
L_1014846c:;
  /* 1014846c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1014846d jmp 0x10148477 */
  goto L_10148477;
L_1014846f:;
  /* 1014846f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10148471 je 0x10148477 */
  if (C.zf) goto L_10148477;
  /* 10148473 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10148477:;
  /* 10148477 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_1014847b:;
  /* 1014847b cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014847e je 0x10148564 */
  if (C.zf) goto L_10148564;
L_10148484:;
  /* 10148484 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10148486 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10148489 je 0x10148490 */
  if (C.zf) goto L_10148490;
  /* 1014848b cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014848e jne 0x10148493 */
  if (!C.zf) goto L_10148493;
L_10148490:;
  /* 10148490 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10148491 jmp 0x10148484 */
  goto L_10148484;
L_10148493:;
  /* 10148493 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10148496 je 0x10148564 */
  if (C.zf) goto L_10148564;
  /* 1014849c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1014849e je 0x101484a8 */
  if (C.zf) goto L_101484a8;
  /* 101484a0 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 101484a2 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101484a5 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101484a8:;
  /* 101484a8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 101484ab inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_101484ad:;
  /* 101484ad mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 101484b4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101484b6:;
  /* 101484b6 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101484b9 jne 0x101484bf */
  if (!C.zf) goto L_101484bf;
  /* 101484bb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101484bc inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101484bd jmp 0x101484b6 */
  goto L_101484b6;
L_101484bf:;
  /* 101484bf cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101484c2 jne 0x101484f0 */
  if (!C.zf) goto L_101484f0;
  /* 101484c4 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101484c7 jne 0x101484ee */
  if (!C.zf) goto L_101484ee;
  /* 101484c9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101484cb cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101484ce je 0x101484dd */
  if (C.zf) goto L_101484dd;
  /* 101484d0 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101484d4 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 101484d7 jne 0x101484dd */
  if (!C.zf) goto L_101484dd;
  /* 101484d9 mov eax, edx */
  EAX = (EDX);
  /* 101484db jmp 0x101484e0 */
  goto L_101484e0;
L_101484dd:;
  /* 101484dd mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_101484e0:;
  /* 101484e0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101484e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101484e5 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101484e8 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 101484eb mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_101484ee:;
  /* 101484ee shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_101484f0:;
  /* 101484f0 mov edx, ebx */
  EDX = (EBX);
  /* 101484f2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101484f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101484f5 je 0x10148505 */
  if (C.zf) goto L_10148505;
  /* 101484f7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_101484f8:;
  /* 101484f8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101484fa je 0x10148500 */
  if (C.zf) goto L_10148500;
  /* 101484fc mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 101484ff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10148500:;
  /* 10148500 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10148502 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10148503 jne 0x101484f8 */
  if (!C.zf) goto L_101484f8;
L_10148505:;
  /* 10148505 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10148507 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10148509 je 0x10148555 */
  if (C.zf) goto L_10148555;
  /* 1014850b cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014850f jne 0x1014851b */
  if (!C.zf) goto L_1014851b;
  /* 10148511 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10148514 je 0x10148555 */
  if (C.zf) goto L_10148555;
  /* 10148516 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10148519 je 0x10148555 */
  if (C.zf) goto L_10148555;
L_1014851b:;
  /* 1014851b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014851f je 0x1014854f */
  if (C.zf) goto L_1014854f;
  /* 10148521 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10148523 je 0x1014853e */
  if (C.zf) goto L_1014853e;
  /* 10148525 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10148528 test byte ptr [ebx + 0x10156ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10156ae1)))&(0x4u); fl_logic(_r,8); }
  /* 1014852f je 0x10148537 */
  if (C.zf) goto L_10148537;
  /* 10148531 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10148533 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10148534 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10148535 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10148537:;
  /* 10148537 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10148539 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1014853b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1014853c jmp 0x1014854d */
  goto L_1014854d;
L_1014853e:;
  /* 1014853e movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10148541 test byte ptr [edx + 0x10156ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10156ae1)))&(0x4u); fl_logic(_r,8); }
  /* 10148548 je 0x1014854d */
  if (C.zf) goto L_1014854d;
  /* 1014854a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1014854b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1014854d:;
  /* 1014854d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1014854f:;
  /* 1014854f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10148550 jmp 0x101484ad */
  goto L_101484ad;
L_10148555:;
  /* 10148555 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10148557 je 0x1014855d */
  if (C.zf) goto L_1014855d;
  /* 10148559 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1014855c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1014855d:;
  /* 1014855d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1014855f jmp 0x1014847b */
  goto L_1014847b;
L_10148564:;
  /* 10148564 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10148566 je 0x1014856b */
  if (C.zf) goto L_1014856b;
  /* 10148568 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1014856b:;
  /* 1014856b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1014856e pop edi */
  EDI = (pop32());
  /* 1014856f pop esi */
  ESI = (pop32());
  /* 10148570 pop ebx */
  EBX = (pop32());
  /* 10148571 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10148573 pop ebp */
  EBP = (pop32());
  /* 10148574 ret  */
  ESPCHK(0x101483c1u, _esp0);
  ESP += 4; return;
}

/* FUN_10008575 @ 0x10148575 (306 bytes, 132 insns) */
void f_10148575(void) {
  FTRACE(0x10148575u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10148575 push ecx */
  push32((uint32_t)(ECX));
  /* 10148576 push ecx */
  push32((uint32_t)(ECX));
  /* 10148577 mov eax, dword ptr [0x10156780] */
  EAX = (r32((uint32_t)(0x10156780)));
  /* 1014857c push ebx */
  push32((uint32_t)(EBX));
  /* 1014857d push ebp */
  push32((uint32_t)(EBP));
  /* 1014857e mov ebp, dword ptr [0x1014e068] */
  EBP = (r32((uint32_t)(0x1014e068)));
  /* 10148584 push esi */
  push32((uint32_t)(ESI));
  /* 10148585 push edi */
  push32((uint32_t)(EDI));
  /* 10148586 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10148588 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1014858a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1014858c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014858e jne 0x101485c3 */
  if (!C.zf) goto L_101485c3;
  /* 10148590 call ebp */
  call_ind((uint32_t)(EBP), 0x10148592u);
  /* 10148592 mov esi, eax */
  ESI = (EAX);
  /* 10148594 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148596 je 0x101485a4 */
  if (C.zf) goto L_101485a4;
  /* 10148598 mov dword ptr [0x10156780], 1 */
  w32((uint32_t)(0x10156780), (0x1u));
  /* 101485a2 jmp 0x101485cc */
  goto L_101485cc;
L_101485a4:;
  /* 101485a4 call dword ptr [0x1014e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e064))), 0x101485aau);
  /* 101485aa mov edi, eax */
  EDI = (EAX);
  /* 101485ac cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101485ae je 0x1014869e */
  if (C.zf) goto L_1014869e;
  /* 101485b4 mov dword ptr [0x10156780], 2 */
  w32((uint32_t)(0x10156780), (0x2u));
  /* 101485be jmp 0x10148652 */
  goto L_10148652;
L_101485c3:;
  /* 101485c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101485c6 jne 0x1014864d */
  if (!C.zf) goto L_1014864d;
L_101485cc:;
  /* 101485cc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101485ce jne 0x101485dc */
  if (!C.zf) goto L_101485dc;
  /* 101485d0 call ebp */
  call_ind((uint32_t)(EBP), 0x101485d2u);
  /* 101485d2 mov esi, eax */
  ESI = (EAX);
  /* 101485d4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101485d6 je 0x1014869e */
  if (C.zf) goto L_1014869e;
L_101485dc:;
  /* 101485dc cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101485df mov eax, esi */
  EAX = (ESI);
  /* 101485e1 je 0x101485f1 */
  if (C.zf) goto L_101485f1;
L_101485e3:;
  /* 101485e3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101485e4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101485e5 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101485e8 jne 0x101485e3 */
  if (!C.zf) goto L_101485e3;
  /* 101485ea inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101485eb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101485ec cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101485ef jne 0x101485e3 */
  if (!C.zf) goto L_101485e3;
L_101485f1:;
  /* 101485f1 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101485f3 mov edi, dword ptr [0x1014e060] */
  EDI = (r32((uint32_t)(0x1014e060)));
  /* 101485f9 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 101485fb push ebx */
  push32((uint32_t)(EBX));
  /* 101485fc push ebx */
  push32((uint32_t)(EBX));
  /* 101485fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101485fe push ebx */
  push32((uint32_t)(EBX));
  /* 101485ff push ebx */
  push32((uint32_t)(EBX));
  /* 10148600 push eax */
  push32((uint32_t)(EAX));
  /* 10148601 push esi */
  push32((uint32_t)(ESI));
  /* 10148602 push ebx */
  push32((uint32_t)(EBX));
  /* 10148603 push ebx */
  push32((uint32_t)(EBX));
  /* 10148604 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10148608 call edi */
  call_ind((uint32_t)(EDI), 0x1014860au);
  /* 1014860a mov ebp, eax */
  EBP = (EAX);
  /* 1014860c cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014860e je 0x10148642 */
  if (C.zf) goto L_10148642;
  /* 10148610 push ebp */
  push32((uint32_t)(EBP));
  /* 10148611 call 0x1014a1bf */
  push32(0x10148616u); f_1014a1bf();
  /* 10148616 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148618 pop ecx */
  ECX = (pop32());
  /* 10148619 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1014861d je 0x10148642 */
  if (C.zf) goto L_10148642;
  /* 1014861f push ebx */
  push32((uint32_t)(EBX));
  /* 10148620 push ebx */
  push32((uint32_t)(EBX));
  /* 10148621 push ebp */
  push32((uint32_t)(EBP));
  /* 10148622 push eax */
  push32((uint32_t)(EAX));
  /* 10148623 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10148627 push esi */
  push32((uint32_t)(ESI));
  /* 10148628 push ebx */
  push32((uint32_t)(EBX));
  /* 10148629 push ebx */
  push32((uint32_t)(EBX));
  /* 1014862a call edi */
  call_ind((uint32_t)(EDI), 0x1014862cu);
  /* 1014862c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014862e jne 0x1014863e */
  if (!C.zf) goto L_1014863e;
  /* 10148630 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10148634 call 0x1014a0d6 */
  push32(0x10148639u); f_1014a0d6();
  /* 10148639 pop ecx */
  ECX = (pop32());
  /* 1014863a mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_1014863e:;
  /* 1014863e mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10148642:;
  /* 10148642 push esi */
  push32((uint32_t)(ESI));
  /* 10148643 call dword ptr [0x1014e05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e05c))), 0x10148649u);
  /* 10148649 mov eax, ebx */
  EAX = (EBX);
  /* 1014864b jmp 0x101486a0 */
  goto L_101486a0;
L_1014864d:;
  /* 1014864d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148650 jne 0x1014869e */
  if (!C.zf) goto L_1014869e;
L_10148652:;
  /* 10148652 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148654 jne 0x10148662 */
  if (!C.zf) goto L_10148662;
  /* 10148656 call dword ptr [0x1014e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e064))), 0x1014865cu);
  /* 1014865c mov edi, eax */
  EDI = (EAX);
  /* 1014865e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148660 je 0x1014869e */
  if (C.zf) goto L_1014869e;
L_10148662:;
  /* 10148662 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10148664 mov eax, edi */
  EAX = (EDI);
  /* 10148666 je 0x10148672 */
  if (C.zf) goto L_10148672;
L_10148668:;
  /* 10148668 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10148669 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014866b jne 0x10148668 */
  if (!C.zf) goto L_10148668;
  /* 1014866d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1014866e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10148670 jne 0x10148668 */
  if (!C.zf) goto L_10148668;
L_10148672:;
  /* 10148672 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10148674 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10148675 mov ebp, eax */
  EBP = (EAX);
  /* 10148677 push ebp */
  push32((uint32_t)(EBP));
  /* 10148678 call 0x1014a1bf */
  push32(0x1014867du); f_1014a1bf();
  /* 1014867d mov esi, eax */
  ESI = (EAX);
  /* 1014867f pop ecx */
  ECX = (pop32());
  /* 10148680 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148682 jne 0x10148688 */
  if (!C.zf) goto L_10148688;
  /* 10148684 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10148686 jmp 0x10148693 */
  goto L_10148693;
L_10148688:;
  /* 10148688 push ebp */
  push32((uint32_t)(EBP));
  /* 10148689 push edi */
  push32((uint32_t)(EDI));
  /* 1014868a push esi */
  push32((uint32_t)(ESI));
  /* 1014868b call 0x1014a6f0 */
  push32(0x10148690u); f_1014a6f0();
  /* 10148690 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10148693:;
  /* 10148693 push edi */
  push32((uint32_t)(EDI));
  /* 10148694 call dword ptr [0x1014e058] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e058))), 0x1014869au);
  /* 1014869a mov eax, esi */
  EAX = (ESI);
  /* 1014869c jmp 0x101486a0 */
  goto L_101486a0;
L_1014869e:;
  /* 1014869e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101486a0:;
  /* 101486a0 pop edi */
  EDI = (pop32());
  /* 101486a1 pop esi */
  ESI = (pop32());
  /* 101486a2 pop ebp */
  EBP = (pop32());
  /* 101486a3 pop ebx */
  EBX = (pop32());
  /* 101486a4 pop ecx */
  ECX = (pop32());
  /* 101486a5 pop ecx */
  ECX = (pop32());
  /* 101486a6 ret  */
  ESPCHK(0x10148575u, _esp0);
  ESP += 4; return;
}

/* FUN_100086a7 @ 0x101486a7 (45 bytes, 17 insns) */
void f_101486a7(void) {
  FTRACE(0x101486a7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101486a7 push esi */
  push32((uint32_t)(ESI));
  /* 101486a8 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101486ac push 0 */
  push32((uint32_t)(0x0u));
  /* 101486ae and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 101486b1 call dword ptr [0x1014e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e004))), 0x101486b7u);
  /* 101486b7 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101486bc jne 0x101486d2 */
  if (!C.zf) goto L_101486d2;
  /* 101486be mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 101486c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101486c3 je 0x101486d2 */
  if (C.zf) goto L_101486d2;
  /* 101486c5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101486c7 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 101486ca mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 101486cc mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 101486cf mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_101486d2:;
  /* 101486d2 pop esi */
  ESI = (pop32());
  /* 101486d3 ret  */
  ESPCHK(0x101486a7u, _esp0);
  ESP += 4; return;
}

/* FUN_100086d4 @ 0x101486d4 (328 bytes, 115 insns) */
void f_101486d4(void) {
  FTRACE(0x101486d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101486d4 push ebp */
  push32((uint32_t)(EBP));
  /* 101486d5 mov ebp, esp */
  EBP = (ESP);
  /* 101486d7 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 101486dc call 0x1014ade0 */
  push32(0x101486e1u); f_1014ade0();
  /* 101486e1 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 101486e7 push ebx */
  push32((uint32_t)(EBX));
  /* 101486e8 push eax */
  push32((uint32_t)(EAX));
  /* 101486e9 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 101486f3 call dword ptr [0x1014e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e070))), 0x101486f9u);
  /* 101486f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101486fb je 0x10148717 */
  if (C.zf) goto L_10148717;
  /* 101486fd cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148704 jne 0x10148717 */
  if (!C.zf) goto L_10148717;
  /* 10148706 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014870d jb 0x10148717 */
  if (C.cf) goto L_10148717;
  /* 1014870f push 1 */
  push32((uint32_t)(0x1u));
  /* 10148711 pop eax */
  EAX = (pop32());
  /* 10148712 jmp 0x10148819 */
  goto L_10148819;
L_10148717:;
  /* 10148717 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1014871d push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 10148722 push eax */
  push32((uint32_t)(EAX));
  /* 10148723 push 0x1014e1c8 */
  push32((uint32_t)(0x1014e1c8u));
  /* 10148728 call dword ptr [0x1014e06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e06c))), 0x1014872eu);
  /* 1014872e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10148730 je 0x10148806 */
  if (C.zf) goto L_10148806;
  /* 10148736 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10148738 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 1014873e cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10148744 je 0x10148759 */
  if (C.zf) goto L_10148759;
L_10148746:;
  /* 10148746 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10148748 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014874a jl 0x10148754 */
  if ((C.sf!=C.of)) goto L_10148754;
  /* 1014874c cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1014874e jg 0x10148754 */
  if ((!C.zf&&C.sf==C.of)) goto L_10148754;
  /* 10148750 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10148752 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_10148754:;
  /* 10148754 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10148755 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10148757 jne 0x10148746 */
  if (!C.zf) goto L_10148746;
L_10148759:;
  /* 10148759 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1014875f push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10148761 push eax */
  push32((uint32_t)(EAX));
  /* 10148762 push 0x1014e1b0 */
  push32((uint32_t)(0x1014e1b0u));
  /* 10148767 call 0x1014ada0 */
  push32(0x1014876cu); f_1014ada0();
  /* 1014876c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1014876f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10148771 jne 0x1014877b */
  if (!C.zf) goto L_1014877b;
  /* 10148773 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 10148779 jmp 0x101487c4 */
  goto L_101487c4;
L_1014877b:;
  /* 1014877b lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 10148781 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10148786 push eax */
  push32((uint32_t)(EAX));
  /* 10148787 push ebx */
  push32((uint32_t)(EBX));
  /* 10148788 call dword ptr [0x1014e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e054))), 0x1014878eu);
  /* 1014878e cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10148794 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 1014879a je 0x101487af */
  if (C.zf) goto L_101487af;
L_1014879c:;
  /* 1014879c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1014879e cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101487a0 jl 0x101487aa */
  if ((C.sf!=C.of)) goto L_101487aa;
  /* 101487a2 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101487a4 jg 0x101487aa */
  if ((!C.zf&&C.sf==C.of)) goto L_101487aa;
  /* 101487a6 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101487a8 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_101487aa:;
  /* 101487aa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101487ab cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101487ad jne 0x1014879c */
  if (!C.zf) goto L_1014879c;
L_101487af:;
  /* 101487af lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 101487b5 push eax */
  push32((uint32_t)(EAX));
  /* 101487b6 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 101487bc push eax */
  push32((uint32_t)(EAX));
  /* 101487bd call 0x1014ad20 */
  push32(0x101487c2u); f_1014ad20();
  /* 101487c2 pop ecx */
  ECX = (pop32());
  /* 101487c3 pop ecx */
  ECX = (pop32());
L_101487c4:;
  /* 101487c4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101487c6 je 0x10148806 */
  if (C.zf) goto L_10148806;
  /* 101487c8 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 101487ca push eax */
  push32((uint32_t)(EAX));
  /* 101487cb call 0x1014ac60 */
  push32(0x101487d0u); f_1014ac60();
  /* 101487d0 pop ecx */
  ECX = (pop32());
  /* 101487d1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101487d3 pop ecx */
  ECX = (pop32());
  /* 101487d4 je 0x10148806 */
  if (C.zf) goto L_10148806;
  /* 101487d6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101487d7 mov ecx, eax */
  ECX = (EAX);
  /* 101487d9 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101487db je 0x101487eb */
  if (C.zf) goto L_101487eb;
L_101487dd:;
  /* 101487dd cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101487e0 jne 0x101487e6 */
  if (!C.zf) goto L_101487e6;
  /* 101487e2 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 101487e4 jmp 0x101487e7 */
  goto L_101487e7;
L_101487e6:;
  /* 101487e6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_101487e7:;
  /* 101487e7 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101487e9 jne 0x101487dd */
  if (!C.zf) goto L_101487dd;
L_101487eb:;
  /* 101487eb push 0xa */
  push32((uint32_t)(0xau));
  /* 101487ed push ebx */
  push32((uint32_t)(EBX));
  /* 101487ee push eax */
  push32((uint32_t)(EAX));
  /* 101487ef call 0x1014aa25 */
  push32(0x101487f4u); f_1014aa25();
  /* 101487f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101487f7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101487fa je 0x10148819 */
  if (C.zf) goto L_10148819;
  /* 101487fc cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101487ff je 0x10148819 */
  if (C.zf) goto L_10148819;
  /* 10148801 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148804 je 0x10148819 */
  if (C.zf) goto L_10148819;
L_10148806:;
  /* 10148806 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10148809 push eax */
  push32((uint32_t)(EAX));
  /* 1014880a call 0x101486a7 */
  push32(0x1014880fu); f_101486a7();
  /* 1014880f cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10148813 pop ecx */
  ECX = (pop32());
  /* 10148814 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10148816 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10148819:;
  /* 10148819 pop ebx */
  EBX = (pop32());
  /* 1014881a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1014881b ret  */
  ESPCHK(0x101486d4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000881c @ 0x1014881c (93 bytes, 30 insns) */
void f_1014881c(void) {
  FTRACE(0x1014881cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014881c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1014881e push 0 */
  push32((uint32_t)(0x0u));
  /* 10148820 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148824 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10148829 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1014882c push eax */
  push32((uint32_t)(EAX));
  /* 1014882d call dword ptr [0x1014e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e078))), 0x10148833u);
  /* 10148833 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10148835 mov dword ptr [0x10157c04], eax */
  w32((uint32_t)(0x10157c04), (EAX));
  /* 1014883a je 0x10148872 */
  if (C.zf) goto L_10148872;
  /* 1014883c call 0x101486d4 */
  push32(0x10148841u); f_101486d4();
  /* 10148841 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148844 mov dword ptr [0x10157c08], eax */
  w32((uint32_t)(0x10157c08), (EAX));
  /* 10148849 jne 0x10148858 */
  if (!C.zf) goto L_10148858;
  /* 1014884b push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 10148850 call 0x1014ae0f */
  push32(0x10148855u); f_1014ae0f();
  /* 10148855 pop ecx */
  ECX = (pop32());
  /* 10148856 jmp 0x10148862 */
  goto L_10148862;
L_10148858:;
  /* 10148858 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014885b jne 0x10148875 */
  if (!C.zf) goto L_10148875;
  /* 1014885d call 0x1014b660 */
  push32(0x10148862u); f_1014b660();
L_10148862:;
  /* 10148862 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10148864 jne 0x10148875 */
  if (!C.zf) goto L_10148875;
  /* 10148866 push dword ptr [0x10157c04] */
  push32((uint32_t)(r32((uint32_t)(0x10157c04))));
  /* 1014886c call dword ptr [0x1014e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e074))), 0x10148872u);
L_10148872:;
  /* 10148872 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10148874 ret  */
  ESPCHK(0x1014881cu, _esp0);
  ESP += 4; return;
L_10148875:;
  /* 10148875 push 1 */
  push32((uint32_t)(0x1u));
  /* 10148877 pop eax */
  EAX = (pop32());
  /* 10148878 ret  */
  ESPCHK(0x1014881cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008879 @ 0x10148879 (168 bytes, 56 insns) */
void f_10148879(void) {
  FTRACE(0x10148879u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10148879 mov eax, dword ptr [0x10157c08] */
  EAX = (r32((uint32_t)(0x10157c08)));
  /* 1014887e push esi */
  push32((uint32_t)(ESI));
  /* 1014887f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148882 push edi */
  push32((uint32_t)(EDI));
  /* 10148883 jne 0x101488eb */
  if (!C.zf) goto L_101488eb;
  /* 10148885 push ebx */
  push32((uint32_t)(EBX));
  /* 10148886 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10148888 cmp dword ptr [0x101569a8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101569a8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014888e push ebp */
  push32((uint32_t)(EBP));
  /* 1014888f mov ebp, dword ptr [0x1014e080] */
  EBP = (r32((uint32_t)(0x1014e080)));
  /* 10148895 jle 0x101488d7 */
  if ((C.zf||C.sf!=C.of)) goto L_101488d7;
  /* 10148897 mov eax, dword ptr [0x101569ac] */
  EAX = (r32((uint32_t)(0x101569ac)));
  /* 1014889c mov edi, dword ptr [0x1014e07c] */
  EDI = (r32((uint32_t)(0x1014e07c)));
  /* 101488a2 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_101488a5:;
  /* 101488a5 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 101488aa push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 101488af push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101488b1 call edi */
  call_ind((uint32_t)(EDI), 0x101488b3u);
  /* 101488b3 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101488b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 101488ba push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101488bc call edi */
  call_ind((uint32_t)(EDI), 0x101488beu);
  /* 101488be push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 101488c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101488c3 push dword ptr [0x10157c04] */
  push32((uint32_t)(r32((uint32_t)(0x10157c04))));
  /* 101488c9 call ebp */
  call_ind((uint32_t)(EBP), 0x101488cbu);
  /* 101488cb add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101488ce inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101488cf cmp ebx, dword ptr [0x101569a8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101569a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101488d5 jl 0x101488a5 */
  if ((C.sf!=C.of)) goto L_101488a5;
L_101488d7:;
  /* 101488d7 push dword ptr [0x101569ac] */
  push32((uint32_t)(r32((uint32_t)(0x101569ac))));
  /* 101488dd push 0 */
  push32((uint32_t)(0x0u));
  /* 101488df push dword ptr [0x10157c04] */
  push32((uint32_t)(r32((uint32_t)(0x10157c04))));
  /* 101488e5 call ebp */
  call_ind((uint32_t)(EBP), 0x101488e7u);
  /* 101488e7 pop ebp */
  EBP = (pop32());
  /* 101488e8 pop ebx */
  EBX = (pop32());
  /* 101488e9 jmp 0x10148912 */
  goto L_10148912;
L_101488eb:;
  /* 101488eb cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101488ee jne 0x10148912 */
  if (!C.zf) goto L_10148912;
  /* 101488f0 mov edi, 0x10150e40 */
  EDI = (0x10150e40u);
  /* 101488f5 mov esi, edi */
  ESI = (EDI);
L_101488f7:;
  /* 101488f7 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 101488fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101488fc je 0x1014890c */
  if (C.zf) goto L_1014890c;
  /* 101488fe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10148903 push 0 */
  push32((uint32_t)(0x0u));
  /* 10148905 push eax */
  push32((uint32_t)(EAX));
  /* 10148906 call dword ptr [0x1014e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e07c))), 0x1014890cu);
L_1014890c:;
  /* 1014890c mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 1014890e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148910 jne 0x101488f7 */
  if (!C.zf) goto L_101488f7;
L_10148912:;
  /* 10148912 push dword ptr [0x10157c04] */
  push32((uint32_t)(r32((uint32_t)(0x10157c04))));
  /* 10148918 call dword ptr [0x1014e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e074))), 0x1014891eu);
  /* 1014891e pop edi */
  EDI = (pop32());
  /* 1014891f pop esi */
  ESI = (pop32());
  /* 10148920 ret  */
  ESPCHK(0x10148879u, _esp0);
  ESP += 4; return;
}

/* FUN_10008921 @ 0x10148921 (57 bytes, 18 insns) */
void f_10148921(void) {
  FTRACE(0x10148921u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10148921 mov eax, dword ptr [0x10156630] */
  EAX = (r32((uint32_t)(0x10156630)));
  /* 10148926 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148929 je 0x10148938 */
  if (C.zf) goto L_10148938;
  /* 1014892b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014892d jne 0x10148959 */
  if (!C.zf) goto L_10148959;
  /* 1014892f cmp dword ptr [0x10156634], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10156634))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148936 jne 0x10148959 */
  if (!C.zf) goto L_10148959;
L_10148938:;
  /* 10148938 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 1014893d call 0x1014895a */
  push32(0x10148942u); f_1014895a();
  /* 10148942 mov eax, dword ptr [0x10156784] */
  EAX = (r32((uint32_t)(0x10156784)));
  /* 10148947 pop ecx */
  ECX = (pop32());
  /* 10148948 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014894a je 0x1014894e */
  if (C.zf) goto L_1014894e;
  /* 1014894c call eax */
  call_ind((uint32_t)(EAX), 0x1014894eu);
L_1014894e:;
  /* 1014894e push 0xff */
  push32((uint32_t)(0xffu));
  /* 10148953 call 0x1014895a */
  push32(0x10148958u); f_1014895a();
  /* 10148958 pop ecx */
  ECX = (pop32());
L_10148959:;
  /* 10148959 ret  */
  ESPCHK(0x10148921u, _esp0);
  ESP += 4; return;
}

/* FUN_1000895a @ 0x1014895a (339 bytes, 100 insns) */
void f_1014895a(void) {
  FTRACE(0x1014895au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1014895a push ebp */
  push32((uint32_t)(EBP));
  /* 1014895b mov ebp, esp */
  EBP = (ESP);
  /* 1014895d sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10148963 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10148966 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10148968 mov eax, 0x101506a0 */
  EAX = (0x101506a0u);
L_1014896d:;
  /* 1014896d cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014896f je 0x1014897c */
  if (C.zf) goto L_1014897c;
  /* 10148971 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10148974 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10148975 cmp eax, 0x10150730 */
  { uint32_t _a=(EAX),_b=(0x10150730u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014897a jl 0x1014896d */
  if ((C.sf!=C.of)) goto L_1014896d;
L_1014897c:;
  /* 1014897c push esi */
  push32((uint32_t)(ESI));
  /* 1014897d mov esi, ecx */
  ESI = (ECX);
  /* 1014897f shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10148982 cmp edx, dword ptr [esi + 0x101506a0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x101506a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148988 jne 0x10148aaa */
  if (!C.zf) goto L_10148aaa;
  /* 1014898e mov eax, dword ptr [0x10156630] */
  EAX = (r32((uint32_t)(0x10156630)));
  /* 10148993 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148996 je 0x10148a84 */
  if (C.zf) goto L_10148a84;
  /* 1014899c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014899e jne 0x101489ad */
  if (!C.zf) goto L_101489ad;
  /* 101489a0 cmp dword ptr [0x10156634], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10156634))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101489a7 je 0x10148a84 */
  if (C.zf) goto L_10148a84;
L_101489ad:;
  /* 101489ad cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101489b3 je 0x10148aaa */
  if (C.zf) goto L_10148aaa;
  /* 101489b9 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 101489bf push 0x104 */
  push32((uint32_t)(0x104u));
  /* 101489c4 push eax */
  push32((uint32_t)(EAX));
  /* 101489c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 101489c7 call dword ptr [0x1014e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e054))), 0x101489cdu);
  /* 101489cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101489cf jne 0x101489e4 */
  if (!C.zf) goto L_101489e4;
  /* 101489d1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 101489d7 push 0x1014e4b8 */
  push32((uint32_t)(0x1014e4b8u));
  /* 101489dc push eax */
  push32((uint32_t)(EAX));
  /* 101489dd call 0x10149a00 */
  push32(0x101489e2u); f_10149a00();
  /* 101489e2 pop ecx */
  ECX = (pop32());
  /* 101489e3 pop ecx */
  ECX = (pop32());
L_101489e4:;
  /* 101489e4 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 101489ea push edi */
  push32((uint32_t)(EDI));
  /* 101489eb push eax */
  push32((uint32_t)(EAX));
  /* 101489ec lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 101489f2 call 0x10148f50 */
  push32(0x101489f7u); f_10148f50();
  /* 101489f7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101489f8 pop ecx */
  ECX = (pop32());
  /* 101489f9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101489fc jbe 0x10148a27 */
  if ((C.cf||C.zf)) goto L_10148a27;
  /* 101489fe lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10148a04 push eax */
  push32((uint32_t)(EAX));
  /* 10148a05 call 0x10148f50 */
  push32(0x10148a0au); f_10148f50();
  /* 10148a0a mov edi, eax */
  EDI = (EAX);
  /* 10148a0c lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10148a12 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10148a15 push 3 */
  push32((uint32_t)(0x3u));
  /* 10148a17 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10148a19 push 0x1014e4b4 */
  push32((uint32_t)(0x1014e4b4u));
  /* 10148a1e push edi */
  push32((uint32_t)(EDI));
  /* 10148a1f call 0x1014bd10 */
  push32(0x10148a24u); f_1014bd10();
  /* 10148a24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10148a27:;
  /* 10148a27 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10148a2d push 0x1014e498 */
  push32((uint32_t)(0x1014e498u));
  /* 10148a32 push eax */
  push32((uint32_t)(EAX));
  /* 10148a33 call 0x10149a00 */
  push32(0x10148a38u); f_10149a00();
  /* 10148a38 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10148a3e push edi */
  push32((uint32_t)(EDI));
  /* 10148a3f push eax */
  push32((uint32_t)(EAX));
  /* 10148a40 call 0x10149a10 */
  push32(0x10148a45u); f_10149a10();
  /* 10148a45 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10148a4b push 0x1014e494 */
  push32((uint32_t)(0x1014e494u));
  /* 10148a50 push eax */
  push32((uint32_t)(EAX));
  /* 10148a51 call 0x10149a10 */
  push32(0x10148a56u); f_10149a10();
  /* 10148a56 push dword ptr [esi + 0x101506a4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x101506a4))));
  /* 10148a5c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10148a62 push eax */
  push32((uint32_t)(EAX));
  /* 10148a63 call 0x10149a10 */
  push32(0x10148a68u); f_10149a10();
  /* 10148a68 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10148a6d lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10148a73 push 0x1014e46c */
  push32((uint32_t)(0x1014e46cu));
  /* 10148a78 push eax */
  push32((uint32_t)(EAX));
  /* 10148a79 call 0x1014bc84 */
  push32(0x10148a7eu); f_1014bc84();
  /* 10148a7e add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10148a81 pop edi */
  EDI = (pop32());
  /* 10148a82 jmp 0x10148aaa */
  goto L_10148aaa;
L_10148a84:;
  /* 10148a84 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10148a87 lea esi, [esi + 0x101506a4] */
  ESI = ((uint32_t)(ESI + 0x101506a4));
  /* 10148a8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10148a8f push eax */
  push32((uint32_t)(EAX));
  /* 10148a90 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10148a92 call 0x10148f50 */
  push32(0x10148a97u); f_10148f50();
  /* 10148a97 pop ecx */
  ECX = (pop32());
  /* 10148a98 push eax */
  push32((uint32_t)(EAX));
  /* 10148a99 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10148a9b push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10148a9d call dword ptr [0x1014e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e044))), 0x10148aa3u);
  /* 10148aa3 push eax */
  push32((uint32_t)(EAX));
  /* 10148aa4 call dword ptr [0x1014e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e084))), 0x10148aaau);
L_10148aaa:;
  /* 10148aaa pop esi */
  ESI = (pop32());
  /* 10148aab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10148aac ret  */
  ESPCHK(0x1014895au, _esp0);
  ESP += 4; return;
}

/* FUN_10008aad @ 0x10148aad (101 bytes, 34 insns) */
void f_10148aad(void) {
  FTRACE(0x10148aadu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10148aad push esi */
  push32((uint32_t)(ESI));
  /* 10148aae mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10148ab2 cmp esi, dword ptr [0x10157d20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10157d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148ab8 jae 0x10148afa */
  if (!C.cf) goto L_10148afa;
  /* 10148aba mov ecx, esi */
  ECX = (ESI);
  /* 10148abc mov eax, esi */
  EAX = (ESI);
  /* 10148abe sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10148ac1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10148ac4 mov ecx, dword ptr [ecx*4 + 0x10157c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10157c20)));
  /* 10148acb lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10148ace test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10148ad3 je 0x10148afa */
  if (C.zf) goto L_10148afa;
  /* 10148ad5 push edi */
  push32((uint32_t)(EDI));
  /* 10148ad6 push esi */
  push32((uint32_t)(ESI));
  /* 10148ad7 call 0x1014bf54 */
  push32(0x10148adcu); f_1014bf54();
  /* 10148adc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10148ae0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10148ae4 push esi */
  push32((uint32_t)(ESI));
  /* 10148ae5 call 0x10148b12 */
  push32(0x10148aeau); f_10148b12();
  /* 10148aea push esi */
  push32((uint32_t)(ESI));
  /* 10148aeb mov edi, eax */
  EDI = (EAX);
  /* 10148aed call 0x1014bfb3 */
  push32(0x10148af2u); f_1014bfb3();
  /* 10148af2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10148af5 mov eax, edi */
  EAX = (EDI);
  /* 10148af7 pop edi */
  EDI = (pop32());
  /* 10148af8 pop esi */
  ESI = (pop32());
  /* 10148af9 ret  */
  ESPCHK(0x10148aadu, _esp0);
  ESP += 4; return;
L_10148afa:;
  /* 10148afa call 0x1014be81 */
  push32(0x10148affu); f_1014be81();
  /* 10148aff mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10148b05 call 0x1014be8a */
  push32(0x10148b0au); f_1014be8a();
  /* 10148b0a and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10148b0d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10148b10 pop esi */
  ESI = (pop32());
  /* 10148b11 ret  */
  ESPCHK(0x10148aadu, _esp0);
  ESP += 4; return;
}

/* FUN_10008b12 @ 0x10148b12 (115 bytes, 41 insns) */
void f_10148b12(void) {
  FTRACE(0x10148b12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10148b12 push esi */
  push32((uint32_t)(ESI));
  /* 10148b13 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10148b17 push edi */
  push32((uint32_t)(EDI));
  /* 10148b18 push esi */
  push32((uint32_t)(ESI));
  /* 10148b19 call 0x1014bf12 */
  push32(0x10148b1eu); f_1014bf12();
  /* 10148b1e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148b21 pop ecx */
  ECX = (pop32());
  /* 10148b22 jne 0x10148b31 */
  if (!C.zf) goto L_10148b31;
  /* 10148b24 call 0x1014be81 */
  push32(0x10148b29u); f_1014be81();
  /* 10148b29 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10148b2f jmp 0x10148b5e */
  goto L_10148b5e;
L_10148b31:;
  /* 10148b31 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 10148b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10148b37 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10148b3b push eax */
  push32((uint32_t)(EAX));
  /* 10148b3c call dword ptr [0x1014e000] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e000))), 0x10148b42u);
  /* 10148b42 mov edi, eax */
  EDI = (EAX);
  /* 10148b44 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148b47 jne 0x10148b51 */
  if (!C.zf) goto L_10148b51;
  /* 10148b49 call dword ptr [0x1014e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e03c))), 0x10148b4fu);
  /* 10148b4f jmp 0x10148b53 */
  goto L_10148b53;
L_10148b51:;
  /* 10148b51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10148b53:;
  /* 10148b53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10148b55 je 0x10148b63 */
  if (C.zf) goto L_10148b63;
  /* 10148b57 push eax */
  push32((uint32_t)(EAX));
  /* 10148b58 call 0x1014be0e */
  push32(0x10148b5du); f_1014be0e();
  /* 10148b5d pop ecx */
  ECX = (pop32());
L_10148b5e:;
  /* 10148b5e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10148b61 jmp 0x10148b82 */
  goto L_10148b82;
L_10148b63:;
  /* 10148b63 mov ecx, esi */
  ECX = (ESI);
  /* 10148b65 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 10148b68 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10148b6b mov eax, esi */
  EAX = (ESI);
  /* 10148b6d mov ecx, dword ptr [ecx*4 + 0x10157c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10157c20)));
  /* 10148b74 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10148b77 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 10148b7c lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 10148b80 mov eax, edi */
  EAX = (EDI);
L_10148b82:;
  /* 10148b82 pop edi */
  EDI = (pop32());
  /* 10148b83 pop esi */
  ESI = (pop32());
  /* 10148b84 ret  */
  ESPCHK(0x10148b12u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b85 @ 0x10148b85 (101 bytes, 34 insns) */
void f_10148b85(void) {
  FTRACE(0x10148b85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10148b85 push esi */
  push32((uint32_t)(ESI));
  /* 10148b86 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10148b8a cmp esi, dword ptr [0x10157d20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10157d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148b90 jae 0x10148bd2 */
  if (!C.cf) goto L_10148bd2;
  /* 10148b92 mov ecx, esi */
  ECX = (ESI);
  /* 10148b94 mov eax, esi */
  EAX = (ESI);
  /* 10148b96 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10148b99 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10148b9c mov ecx, dword ptr [ecx*4 + 0x10157c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10157c20)));
  /* 10148ba3 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10148ba6 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10148bab je 0x10148bd2 */
  if (C.zf) goto L_10148bd2;
  /* 10148bad push edi */
  push32((uint32_t)(EDI));
  /* 10148bae push esi */
  push32((uint32_t)(ESI));
  /* 10148baf call 0x1014bf54 */
  push32(0x10148bb4u); f_1014bf54();
  /* 10148bb4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10148bb8 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10148bbc push esi */
  push32((uint32_t)(ESI));
  /* 10148bbd call 0x10148bea */
  push32(0x10148bc2u); f_10148bea();
  /* 10148bc2 push esi */
  push32((uint32_t)(ESI));
  /* 10148bc3 mov edi, eax */
  EDI = (EAX);
  /* 10148bc5 call 0x1014bfb3 */
  push32(0x10148bcau); f_1014bfb3();
  /* 10148bca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10148bcd mov eax, edi */
  EAX = (EDI);
  /* 10148bcf pop edi */
  EDI = (pop32());
  /* 10148bd0 pop esi */
  ESI = (pop32());
  /* 10148bd1 ret  */
  ESPCHK(0x10148b85u, _esp0);
  ESP += 4; return;
L_10148bd2:;
  /* 10148bd2 call 0x1014be81 */
  push32(0x10148bd7u); f_1014be81();
  /* 10148bd7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10148bdd call 0x1014be8a */
  push32(0x10148be2u); f_1014be8a();
  /* 10148be2 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10148be5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10148be8 pop esi */
  ESI = (pop32());
  /* 10148be9 ret  */
  ESPCHK(0x10148b85u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bea @ 0x10148bea (395 bytes, 135 insns) */
void f_10148bea(void) {
  FTRACE(0x10148beau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10148bea push ebp */
  push32((uint32_t)(EBP));
  /* 10148beb mov ebp, esp */
  EBP = (ESP);
  /* 10148bed sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10148bf3 push ebx */
  push32((uint32_t)(EBX));
  /* 10148bf4 push esi */
  push32((uint32_t)(ESI));
  /* 10148bf5 push edi */
  push32((uint32_t)(EDI));
  /* 10148bf6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10148bf8 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148bfb mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10148bfe mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 10148c01 jne 0x10148c0a */
  if (!C.zf) goto L_10148c0a;
L_10148c03:;
  /* 10148c03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10148c05 jmp 0x10148d70 */
  goto L_10148d70;
L_10148c0a:;
  /* 10148c0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10148c0d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10148c10 lea ebx, [eax*4 + 0x10157c20] */
  EBX = ((uint32_t)(EAX*4 + 0x10157c20));
  /* 10148c17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10148c1a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10148c1d lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10148c20 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10148c22 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10148c25 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10148c2a je 0x10148c3a */
  if (C.zf) goto L_10148c3a;
  /* 10148c2c push 2 */
  push32((uint32_t)(0x2u));
  /* 10148c2e push edi */
  push32((uint32_t)(EDI));
  /* 10148c2f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10148c32 call 0x10148b12 */
  push32(0x10148c37u); f_10148b12();
  /* 10148c37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10148c3a:;
  /* 10148c3a mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10148c3c add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10148c3e test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10148c42 je 0x10148d09 */
  if (C.zf) goto L_10148d09;
  /* 10148c48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10148c4b cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148c4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10148c51 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10148c54 jbe 0x10148d44 */
  if ((C.cf||C.zf)) goto L_10148d44;
L_10148c5a:;
  /* 10148c5a lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_10148c60:;
  /* 10148c60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10148c63 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10148c66 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148c69 jae 0x10148c94 */
  if (!C.cf) goto L_10148c94;
  /* 10148c6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10148c6e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10148c71 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 10148c73 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10148c76 jne 0x10148c7f */
  if (!C.zf) goto L_10148c7f;
  /* 10148c78 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 10148c7b mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10148c7e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10148c7f:;
  /* 10148c7f mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10148c81 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10148c82 mov ecx, eax */
  ECX = (EAX);
  /* 10148c84 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10148c8a sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10148c8c cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148c92 jl 0x10148c60 */
  if ((C.sf!=C.of)) goto L_10148c60;
L_10148c94:;
  /* 10148c94 mov edi, eax */
  EDI = (EAX);
  /* 10148c96 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10148c9c sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10148c9e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10148ca1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10148ca3 push eax */
  push32((uint32_t)(EAX));
  /* 10148ca4 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10148caa push edi */
  push32((uint32_t)(EDI));
  /* 10148cab push eax */
  push32((uint32_t)(EAX));
  /* 10148cac mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10148cae push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 10148cb1 call dword ptr [0x1014e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e084))), 0x10148cb7u);
  /* 10148cb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10148cb9 je 0x10148cfe */
  if (C.zf) goto L_10148cfe;
  /* 10148cbb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10148cbe add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10148cc1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148cc3 jl 0x10148cd0 */
  if ((C.sf!=C.of)) goto L_10148cd0;
  /* 10148cc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10148cc8 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10148ccb cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148cce jb 0x10148c5a */
  if (C.cf) goto L_10148c5a;
L_10148cd0:;
  /* 10148cd0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10148cd2:;
  /* 10148cd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10148cd5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148cd7 jne 0x10148d6d */
  if (!C.zf) goto L_10148d6d;
  /* 10148cdd cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148ce0 je 0x10148d44 */
  if (C.zf) goto L_10148d44;
  /* 10148ce2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10148ce4 pop esi */
  ESI = (pop32());
  /* 10148ce5 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148ce8 jne 0x10148d36 */
  if (!C.zf) goto L_10148d36;
  /* 10148cea call 0x1014be81 */
  push32(0x10148cefu); f_1014be81();
  /* 10148cef mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10148cf5 call 0x1014be8a */
  push32(0x10148cfau); f_1014be8a();
  /* 10148cfa mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10148cfc jmp 0x10148d3f */
  goto L_10148d3f;
L_10148cfe:;
  /* 10148cfe call dword ptr [0x1014e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e03c))), 0x10148d04u);
  /* 10148d04 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10148d07 jmp 0x10148cd0 */
  goto L_10148cd0;
L_10148d09:;
  /* 10148d09 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10148d0c push edi */
  push32((uint32_t)(EDI));
  /* 10148d0d push ecx */
  push32((uint32_t)(ECX));
  /* 10148d0e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10148d11 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10148d14 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 10148d16 call dword ptr [0x1014e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e084))), 0x10148d1cu);
  /* 10148d1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10148d1e je 0x10148d2b */
  if (C.zf) goto L_10148d2b;
  /* 10148d20 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10148d23 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10148d26 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10148d29 jmp 0x10148cd2 */
  goto L_10148cd2;
L_10148d2b:;
  /* 10148d2b call dword ptr [0x1014e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e03c))), 0x10148d31u);
  /* 10148d31 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10148d34 jmp 0x10148cd2 */
  goto L_10148cd2;
L_10148d36:;
  /* 10148d36 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10148d39 call 0x1014be0e */
  push32(0x10148d3eu); f_1014be0e();
  /* 10148d3e pop ecx */
  ECX = (pop32());
L_10148d3f:;
  /* 10148d3f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10148d42 jmp 0x10148d70 */
  goto L_10148d70;
L_10148d44:;
  /* 10148d44 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10148d46 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10148d4b je 0x10148d59 */
  if (C.zf) goto L_10148d59;
  /* 10148d4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10148d50 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10148d53 je 0x10148c03 */
  if (C.zf) goto L_10148c03;
L_10148d59:;
  /* 10148d59 call 0x1014be81 */
  push32(0x10148d5eu); f_1014be81();
  /* 10148d5e mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10148d64 call 0x1014be8a */
  push32(0x10148d69u); f_1014be8a();
  /* 10148d69 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 10148d6b jmp 0x10148d3f */
  goto L_10148d3f;
L_10148d6d:;
  /* 10148d6d sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10148d70:;
  /* 10148d70 pop edi */
  EDI = (pop32());
  /* 10148d71 pop esi */
  ESI = (pop32());
  /* 10148d72 pop ebx */
  EBX = (pop32());
  /* 10148d73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10148d74 ret  */
  ESPCHK(0x10148beau, _esp0);
  ESP += 4; return;
}

/* FUN_10008d75 @ 0x10148d75 (68 bytes, 19 insns) */
void f_10148d75(void) {
  FTRACE(0x10148d75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10148d75 inc dword ptr [0x10156788] */
  { uint32_t _r=(r32((uint32_t)(0x10156788)))+1; w32((uint32_t)(0x10156788), (_r)); fl_inc(_r,32); }
  /* 10148d7b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10148d80 call 0x1014a1bf */
  push32(0x10148d85u); f_1014a1bf();
  /* 10148d85 pop ecx */
  ECX = (pop32());
  /* 10148d86 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10148d8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10148d8c mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10148d8f je 0x10148d9e */
  if (C.zf) goto L_10148d9e;
  /* 10148d91 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10148d95 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 10148d9c jmp 0x10148daf */
  goto L_10148daf;
L_10148d9e:;
  /* 10148d9e or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 10148da2 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 10148da5 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10148da8 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_10148daf:;
  /* 10148daf mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10148db2 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10148db6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10148db8 ret  */
  ESPCHK(0x10148d75u, _esp0);
  ESP += 4; return;
}

/* FUN_10008db9 @ 0x10148db9 (41 bytes, 13 insns) */
void f_10148db9(void) {
  FTRACE(0x10148db9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10148db9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10148dbd cmp eax, dword ptr [0x10157d20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10157d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148dc3 jb 0x10148dc8 */
  if (C.cf) goto L_10148dc8;
  /* 10148dc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10148dc7 ret  */
  ESPCHK(0x10148db9u, _esp0);
  ESP += 4; return;
L_10148dc8:;
  /* 10148dc8 mov ecx, eax */
  ECX = (EAX);
  /* 10148dca and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10148dcd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10148dd0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10148dd3 mov ecx, dword ptr [ecx*4 + 0x10157c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10157c20)));
  /* 10148dda mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10148dde and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10148de1 ret  */
  ESPCHK(0x10148db9u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e9e @ 0x10148e9e (47 bytes, 17 insns) */
void f_10148e9e(void) {
  FTRACE(0x10148e9eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10148e9e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10148ea2 mov ecx, 0x10150730 */
  ECX = (0x10150730u);
  /* 10148ea7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148ea9 jb 0x10148ec2 */
  if (C.cf) goto L_10148ec2;
  /* 10148eab cmp eax, 0x10150990 */
  { uint32_t _a=(EAX),_b=(0x10150990u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148eb0 ja 0x10148ec2 */
  if ((!C.cf&&!C.zf)) goto L_10148ec2;
  /* 10148eb2 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10148eb4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10148eb7 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10148eba push eax */
  push32((uint32_t)(EAX));
  /* 10148ebb call 0x10149f23 */
  push32(0x10148ec0u); f_10149f23();
  /* 10148ec0 pop ecx */
  ECX = (pop32());
  /* 10148ec1 ret  */
  ESPCHK(0x10148e9eu, _esp0);
  ESP += 4; return;
L_10148ec2:;
  /* 10148ec2 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10148ec5 push eax */
  push32((uint32_t)(EAX));
  /* 10148ec6 call dword ptr [0x1014e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e00c))), 0x10148eccu);
  /* 10148ecc ret  */
  ESPCHK(0x10148e9eu, _esp0);
  ESP += 4; return;
}

/* FUN_10008ecd @ 0x10148ecd (35 bytes, 13 insns) */
void f_10148ecd(void) {
  FTRACE(0x10148ecdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10148ecd mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10148ed1 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148ed4 jge 0x10148ee1 */
  if ((C.sf==C.of)) goto L_10148ee1;
  /* 10148ed6 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10148ed9 push eax */
  push32((uint32_t)(EAX));
  /* 10148eda call 0x10149f23 */
  push32(0x10148edfu); f_10149f23();
  /* 10148edf pop ecx */
  ECX = (pop32());
  /* 10148ee0 ret  */
  ESPCHK(0x10148ecdu, _esp0);
  ESP += 4; return;
L_10148ee1:;
  /* 10148ee1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10148ee5 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10148ee8 push eax */
  push32((uint32_t)(EAX));
  /* 10148ee9 call dword ptr [0x1014e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e00c))), 0x10148eefu);
  /* 10148eef ret  */
  ESPCHK(0x10148ecdu, _esp0);
  ESP += 4; return;
}

/* FUN_10008ef0 @ 0x10148ef0 (47 bytes, 17 insns) */
void f_10148ef0(void) {
  FTRACE(0x10148ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10148ef0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10148ef4 mov ecx, 0x10150730 */
  ECX = (0x10150730u);
  /* 10148ef9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148efb jb 0x10148f14 */
  if (C.cf) goto L_10148f14;
  /* 10148efd cmp eax, 0x10150990 */
  { uint32_t _a=(EAX),_b=(0x10150990u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148f02 ja 0x10148f14 */
  if ((!C.cf&&!C.zf)) goto L_10148f14;
  /* 10148f04 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10148f06 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10148f09 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10148f0c push eax */
  push32((uint32_t)(EAX));
  /* 10148f0d call 0x10149f84 */
  push32(0x10148f12u); f_10149f84();
  /* 10148f12 pop ecx */
  ECX = (pop32());
  /* 10148f13 ret  */
  ESPCHK(0x10148ef0u, _esp0);
  ESP += 4; return;
L_10148f14:;
  /* 10148f14 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10148f17 push eax */
  push32((uint32_t)(EAX));
  /* 10148f18 call dword ptr [0x1014e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e008))), 0x10148f1eu);
  /* 10148f1e ret  */
  ESPCHK(0x10148ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f1f @ 0x10148f1f (35 bytes, 13 insns) */
void f_10148f1f(void) {
  FTRACE(0x10148f1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10148f1f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10148f23 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148f26 jge 0x10148f33 */
  if ((C.sf==C.of)) goto L_10148f33;
  /* 10148f28 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10148f2b push eax */
  push32((uint32_t)(EAX));
  /* 10148f2c call 0x10149f84 */
  push32(0x10148f31u); f_10149f84();
  /* 10148f31 pop ecx */
  ECX = (pop32());
  /* 10148f32 ret  */
  ESPCHK(0x10148f1fu, _esp0);
  ESP += 4; return;
L_10148f33:;
  /* 10148f33 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10148f37 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10148f3a push eax */
  push32((uint32_t)(EAX));
  /* 10148f3b call dword ptr [0x1014e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e008))), 0x10148f41u);
  /* 10148f41 ret  */
  ESPCHK(0x10148f1fu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10148f50 (123 bytes, 44 insns) */
void f_10148f50(void) {
  FTRACE(0x10148f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10148f50 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10148f54 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10148f5a je 0x10148f70 */
  if (C.zf) goto L_10148f70;
L_10148f5c:;
  /* 10148f5c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10148f5e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10148f5f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10148f61 je 0x10148fa3 */
  if (C.zf) goto L_10148fa3;
  /* 10148f63 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10148f69 jne 0x10148f5c */
  if (!C.zf) goto L_10148f5c;
  /* 10148f6b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10148f70:;
  /* 10148f70 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10148f72 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10148f77 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10148f79 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10148f7c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10148f7e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10148f81 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10148f86 je 0x10148f70 */
  if (C.zf) goto L_10148f70;
  /* 10148f88 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10148f8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10148f8d je 0x10148fc1 */
  if (C.zf) goto L_10148fc1;
  /* 10148f8f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10148f91 je 0x10148fb7 */
  if (C.zf) goto L_10148fb7;
  /* 10148f93 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10148f98 je 0x10148fad */
  if (C.zf) goto L_10148fad;
  /* 10148f9a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10148f9f je 0x10148fa3 */
  if (C.zf) goto L_10148fa3;
  /* 10148fa1 jmp 0x10148f70 */
  goto L_10148f70;
L_10148fa3:;
  /* 10148fa3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10148fa6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10148faa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10148fac ret  */
  ESPCHK(0x10148f50u, _esp0);
  ESP += 4; return;
L_10148fad:;
  /* 10148fad lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10148fb0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10148fb4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10148fb6 ret  */
  ESPCHK(0x10148f50u, _esp0);
  ESP += 4; return;
L_10148fb7:;
  /* 10148fb7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10148fba mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10148fbe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10148fc0 ret  */
  ESPCHK(0x10148f50u, _esp0);
  ESP += 4; return;
L_10148fc1:;
  /* 10148fc1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10148fc4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10148fc8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10148fca ret  */
  ESPCHK(0x10148f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fcb @ 0x10148fcb (89 bytes, 39 insns) */
void f_10148fcb(void) {
  FTRACE(0x10148fcbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10148fcb push ebp */
  push32((uint32_t)(EBP));
  /* 10148fcc mov ebp, esp */
  EBP = (ESP);
  /* 10148fce push ebx */
  push32((uint32_t)(EBX));
  /* 10148fcf push esi */
  push32((uint32_t)(ESI));
  /* 10148fd0 mov esi, 0x10156994 */
  ESI = (0x10156994u);
  /* 10148fd5 push edi */
  push32((uint32_t)(EDI));
  /* 10148fd6 push esi */
  push32((uint32_t)(ESI));
  /* 10148fd7 call dword ptr [0x1014e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e090))), 0x10148fddu);
  /* 10148fdd mov edi, dword ptr [0x1014e08c] */
  EDI = (r32((uint32_t)(0x1014e08c)));
  /* 10148fe3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10148fe5 cmp dword ptr [0x10156990], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10156990))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10148feb je 0x10148ffb */
  if (C.zf) goto L_10148ffb;
  /* 10148fed push esi */
  push32((uint32_t)(ESI));
  /* 10148fee call edi */
  call_ind((uint32_t)(EDI), 0x10148ff0u);
  /* 10148ff0 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10148ff2 call 0x10149f23 */
  push32(0x10148ff7u); f_10149f23();
  /* 10148ff7 pop ecx */
  ECX = (pop32());
  /* 10148ff8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10148ffa pop ebx */
  EBX = (pop32());
L_10148ffb:;
  /* 10148ffb push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10148ffe push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10149001 call 0x10149024 */
  push32(0x10149006u); f_10149024();
  /* 10149006 pop ecx */
  ECX = (pop32());
  /* 10149007 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1014900a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1014900c pop ecx */
  ECX = (pop32());
  /* 1014900d je 0x10149019 */
  if (C.zf) goto L_10149019;
  /* 1014900f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10149011 call 0x10149f84 */
  push32(0x10149016u); f_10149f84();
  /* 10149016 pop ecx */
  ECX = (pop32());
  /* 10149017 jmp 0x1014901c */
  goto L_1014901c;
L_10149019:;
  /* 10149019 push esi */
  push32((uint32_t)(ESI));
  /* 1014901a call edi */
  call_ind((uint32_t)(EDI), 0x1014901cu);
L_1014901c:;
  /* 1014901c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1014901f pop edi */
  EDI = (pop32());
  /* 10149020 pop esi */
  ESI = (pop32());
  /* 10149021 pop ebx */
  EBX = (pop32());
  /* 10149022 pop ebp */
  EBP = (pop32());
  /* 10149023 ret  */
  ESPCHK(0x10148fcbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009024 @ 0x10149024 (105 bytes, 38 insns) */
void f_10149024(void) {
  FTRACE(0x10149024u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149024 push ebp */
  push32((uint32_t)(EBP));
  /* 10149025 mov ebp, esp */
  EBP = (ESP);
  /* 10149027 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1014902a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1014902c jne 0x10149030 */
  if (!C.zf) goto L_10149030;
  /* 1014902e pop ebp */
  EBP = (pop32());
  /* 1014902f ret  */
  ESPCHK(0x10149024u, _esp0);
  ESP += 4; return;
L_10149030:;
  /* 10149030 cmp dword ptr [0x10156818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10156818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149037 jne 0x1014904b */
  if (!C.zf) goto L_1014904b;
  /* 10149039 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 1014903d cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10149042 ja 0x1014907d */
  if ((!C.cf&&!C.zf)) goto L_1014907d;
  /* 10149044 push 1 */
  push32((uint32_t)(0x1u));
  /* 10149046 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10149048 pop eax */
  EAX = (pop32());
  /* 10149049 pop ebp */
  EBP = (pop32());
  /* 1014904a ret  */
  ESPCHK(0x10149024u, _esp0);
  ESP += 4; return;
L_1014904b:;
  /* 1014904b lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 1014904e and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 10149052 push ecx */
  push32((uint32_t)(ECX));
  /* 10149053 push 0 */
  push32((uint32_t)(0x0u));
  /* 10149055 push dword ptr [0x10150bc0] */
  push32((uint32_t)(r32((uint32_t)(0x10150bc0))));
  /* 1014905b push eax */
  push32((uint32_t)(EAX));
  /* 1014905c lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1014905f push 1 */
  push32((uint32_t)(0x1u));
  /* 10149061 push eax */
  push32((uint32_t)(EAX));
  /* 10149062 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10149067 push dword ptr [0x10156828] */
  push32((uint32_t)(r32((uint32_t)(0x10156828))));
  /* 1014906d call dword ptr [0x1014e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1014e060))), 0x10149073u);
  /* 10149073 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10149075 je 0x1014907d */
  if (C.zf) goto L_1014907d;
  /* 10149077 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1014907b je 0x1014908b */
  if (C.zf) goto L_1014908b;
L_1014907d:;
  /* 1014907d call 0x1014be81 */
  push32(0x10149082u); f_1014be81();
  /* 10149082 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10149088 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1014908b:;
  /* 1014908b pop ebp */
  EBP = (pop32());
  /* 1014908c ret  */
  ESPCHK(0x10149024u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10149090 (104 bytes, 43 insns) */
void f_10149090(void) {
  FTRACE(0x10149090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149090 push ebx */
  push32((uint32_t)(EBX));
  /* 10149091 push esi */
  push32((uint32_t)(ESI));
  /* 10149092 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10149096 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10149098 jne 0x101490b2 */
  if (!C.zf) goto L_101490b2;
  /* 1014909a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1014909e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101490a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101490a4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101490a6 mov ebx, eax */
  EBX = (EAX);
  /* 101490a8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 101490ac div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101490ae mov edx, ebx */
  EDX = (EBX);
  /* 101490b0 jmp 0x101490f3 */
  goto L_101490f3;
L_101490b2:;
  /* 101490b2 mov ecx, eax */
  ECX = (EAX);
  /* 101490b4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 101490b8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 101490bc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_101490c0:;
  /* 101490c0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101490c2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 101490c4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 101490c6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 101490c8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101490ca jne 0x101490c0 */
  if (!C.zf) goto L_101490c0;
  /* 101490cc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101490ce mov esi, eax */
  ESI = (EAX);
  /* 101490d0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101490d4 mov ecx, eax */
  ECX = (EAX);
  /* 101490d6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101490da mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101490dc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101490de jb 0x101490ee */
  if (C.cf) goto L_101490ee;
  /* 101490e0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101490e4 ja 0x101490ee */
  if ((!C.cf&&!C.zf)) goto L_101490ee;
  /* 101490e6 jb 0x101490ef */
  if (C.cf) goto L_101490ef;
  /* 101490e8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101490ec jbe 0x101490ef */
  if ((C.cf||C.zf)) goto L_101490ef;
L_101490ee:;
  /* 101490ee dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_101490ef:;
  /* 101490ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101490f1 mov eax, esi */
  EAX = (ESI);
L_101490f3:;
  /* 101490f3 pop esi */
  ESI = (pop32());
  /* 101490f4 pop ebx */
  EBX = (pop32());
  /* 101490f5 ret 0x10 */
  ESPCHK(0x10149090u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10149100 (117 bytes, 44 insns) */
void f_10149100(void) {
  FTRACE(0x10149100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10149100 push ebx */
  push32((uint32_t)(EBX));
  /* 10149101 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10149105 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10149107 jne 0x10149121 */
  if (!C.zf) goto L_10149121;
  /* 10149109 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1014910d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10149111 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10149113 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10149115 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10149119 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1014911b mov eax, edx */
  EAX = (EDX);
  /* 1014911d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1014911f jmp 0x10149171 */
  goto L_10149171;
L_10149121:;
  /* 10149121 mov ecx, eax */
  ECX = (EAX);
  /* 10149123 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10149127 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1014912b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1014912f:;
  /* 1014912f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10149131 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10149133 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10149135 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10149137 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10149139 jne 0x1014912f */
  if (!C.zf) goto L_1014912f;
  /* 1014913b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1014913d mov ecx, eax */
  ECX = (EAX);
  /* 1014913f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10149143 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10149144 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10149148 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1014914a jb 0x1014915a */
  if (C.cf) goto L_1014915a;
  /* 1014914c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149150 ja 0x1014915a */
  if ((!C.cf&&!C.zf)) goto L_1014915a;
  /* 10149152 jb 0x10149162 */
  if (C.cf) goto L_10149162;
  /* 10149154 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10149158 jbe 0x10149162 */
  if ((C.cf||C.zf)) goto L_10149162;
L_1014915a:;
  /* 1014915a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014915e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10149162:;
  /* 10149162 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10149166 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1014916a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1014916c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1014916e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10149171:;
  /* 10149171 pop ebx */
  EBX = (pop32());
  /* 10149172 ret 0x10 */
  ESPCHK(0x10149100u, _esp0);
  ESP += 20; return;
}

