#include "recomp.h"

/* FUN_10001000 @ 0x10251000 (18 bytes, 7 insns) */
void f_10251000(void) {
  FTRACE(0x10251000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10251000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10251004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10251005 jne 0x1025100c */
  if (!C.zf) goto L_1025100c;
  /* 10251007 call 0x10251012 */
  push32(0x1025100cu); f_10251012();
L_1025100c:;
  /* 1025100c push 1 */
  push32((uint32_t)(0x1u));
  /* 1025100e pop eax */
  EAX = (pop32());
  /* 1025100f ret 0xc */
  ESPCHK(0x10251000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x10251012 (2035 bytes, 574 insns) */
void f_10251012(void) {
  FTRACE(0x10251012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10251012 push ebx */
  push32((uint32_t)(EBX));
  /* 10251013 push ebp */
  push32((uint32_t)(EBP));
  /* 10251014 push esi */
  push32((uint32_t)(ESI));
  /* 10251015 mov esi, dword ptr [0x10257174] */
  ESI = (r32((uint32_t)(0x10257174)));
  /* 1025101b push edi */
  push32((uint32_t)(EDI));
  /* 1025101c push 0x10258448 */
  push32((uint32_t)(0x10258448u));
  /* 10251021 push 0x10258a68 */
  push32((uint32_t)(0x10258a68u));
  /* 10251026 call esi */
  call_ind((uint32_t)(ESI), 0x10251028u);
  /* 10251028 push 0x10258444 */
  push32((uint32_t)(0x10258444u));
  /* 1025102d push 0x10258b70 */
  push32((uint32_t)(0x10258b70u));
  /* 10251032 call esi */
  call_ind((uint32_t)(ESI), 0x10251034u);
  /* 10251034 push 0x10258440 */
  push32((uint32_t)(0x10258440u));
  /* 10251039 push 0x10258b78 */
  push32((uint32_t)(0x10258b78u));
  /* 1025103e call esi */
  call_ind((uint32_t)(ESI), 0x10251040u);
  /* 10251040 push 0x1025843c */
  push32((uint32_t)(0x1025843cu));
  /* 10251045 push 0x10258b80 */
  push32((uint32_t)(0x10258b80u));
  /* 1025104a call esi */
  call_ind((uint32_t)(ESI), 0x1025104cu);
  /* 1025104c push 0x10258438 */
  push32((uint32_t)(0x10258438u));
  /* 10251051 push 0x10258b88 */
  push32((uint32_t)(0x10258b88u));
  /* 10251056 call esi */
  call_ind((uint32_t)(ESI), 0x10251058u);
  /* 10251058 push 0x10258434 */
  push32((uint32_t)(0x10258434u));
  /* 1025105d push 0x10258b98 */
  push32((uint32_t)(0x10258b98u));
  /* 10251062 call esi */
  call_ind((uint32_t)(ESI), 0x10251064u);
  /* 10251064 push 0x10258430 */
  push32((uint32_t)(0x10258430u));
  /* 10251069 push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 1025106e call esi */
  call_ind((uint32_t)(ESI), 0x10251070u);
  /* 10251070 push 0x1025842c */
  push32((uint32_t)(0x1025842cu));
  /* 10251075 push 0x10258a78 */
  push32((uint32_t)(0x10258a78u));
  /* 1025107a call esi */
  call_ind((uint32_t)(ESI), 0x1025107cu);
  /* 1025107c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025107f push 0x10258428 */
  push32((uint32_t)(0x10258428u));
  /* 10251084 push 0x10258a80 */
  push32((uint32_t)(0x10258a80u));
  /* 10251089 call esi */
  call_ind((uint32_t)(ESI), 0x1025108bu);
  /* 1025108b push 0x10258424 */
  push32((uint32_t)(0x10258424u));
  /* 10251090 push 0x10258a88 */
  push32((uint32_t)(0x10258a88u));
  /* 10251095 call esi */
  call_ind((uint32_t)(ESI), 0x10251097u);
  /* 10251097 push 0x10258420 */
  push32((uint32_t)(0x10258420u));
  /* 1025109c push 0x10258be0 */
  push32((uint32_t)(0x10258be0u));
  /* 102510a1 call esi */
  call_ind((uint32_t)(ESI), 0x102510a3u);
  /* 102510a3 push 0x1025841c */
  push32((uint32_t)(0x1025841cu));
  /* 102510a8 push 0x10258a90 */
  push32((uint32_t)(0x10258a90u));
  /* 102510ad call esi */
  call_ind((uint32_t)(ESI), 0x102510afu);
  /* 102510af push 0x10258418 */
  push32((uint32_t)(0x10258418u));
  /* 102510b4 push 0x10258a98 */
  push32((uint32_t)(0x10258a98u));
  /* 102510b9 call esi */
  call_ind((uint32_t)(ESI), 0x102510bbu);
  /* 102510bb push 0x10258414 */
  push32((uint32_t)(0x10258414u));
  /* 102510c0 push 0x10258be8 */
  push32((uint32_t)(0x10258be8u));
  /* 102510c5 call esi */
  call_ind((uint32_t)(ESI), 0x102510c7u);
  /* 102510c7 push 0x10258410 */
  push32((uint32_t)(0x10258410u));
  /* 102510cc push 0x10258aa0 */
  push32((uint32_t)(0x10258aa0u));
  /* 102510d1 call esi */
  call_ind((uint32_t)(ESI), 0x102510d3u);
  /* 102510d3 push 0x1025840c */
  push32((uint32_t)(0x1025840cu));
  /* 102510d8 push 0x10258bf0 */
  push32((uint32_t)(0x10258bf0u));
  /* 102510dd call esi */
  call_ind((uint32_t)(ESI), 0x102510dfu);
  /* 102510df add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102510e2 push 0x10258408 */
  push32((uint32_t)(0x10258408u));
  /* 102510e7 push 0x10258aa8 */
  push32((uint32_t)(0x10258aa8u));
  /* 102510ec call esi */
  call_ind((uint32_t)(ESI), 0x102510eeu);
  /* 102510ee push 0x10258404 */
  push32((uint32_t)(0x10258404u));
  /* 102510f3 push 0x10258bf8 */
  push32((uint32_t)(0x10258bf8u));
  /* 102510f8 call esi */
  call_ind((uint32_t)(ESI), 0x102510fau);
  /* 102510fa push 0x10258400 */
  push32((uint32_t)(0x10258400u));
  /* 102510ff push 0x10258ad0 */
  push32((uint32_t)(0x10258ad0u));
  /* 10251104 call esi */
  call_ind((uint32_t)(ESI), 0x10251106u);
  /* 10251106 push 0x102583fc */
  push32((uint32_t)(0x102583fcu));
  /* 1025110b push 0x10258ad8 */
  push32((uint32_t)(0x10258ad8u));
  /* 10251110 call esi */
  call_ind((uint32_t)(ESI), 0x10251112u);
  /* 10251112 push 0x102583f8 */
  push32((uint32_t)(0x102583f8u));
  /* 10251117 push 0x10258ae8 */
  push32((uint32_t)(0x10258ae8u));
  /* 1025111c call esi */
  call_ind((uint32_t)(ESI), 0x1025111eu);
  /* 1025111e push 0x102583f0 */
  push32((uint32_t)(0x102583f0u));
  /* 10251123 push 0x10258c88 */
  push32((uint32_t)(0x10258c88u));
  /* 10251128 call esi */
  call_ind((uint32_t)(ESI), 0x1025112au);
  /* 1025112a push 0x102583e8 */
  push32((uint32_t)(0x102583e8u));
  /* 1025112f push 0x10258ca0 */
  push32((uint32_t)(0x10258ca0u));
  /* 10251134 call esi */
  call_ind((uint32_t)(ESI), 0x10251136u);
  /* 10251136 push 0x102583e0 */
  push32((uint32_t)(0x102583e0u));
  /* 1025113b push 0x10258cb8 */
  push32((uint32_t)(0x10258cb8u));
  /* 10251140 call esi */
  call_ind((uint32_t)(ESI), 0x10251142u);
  /* 10251142 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10251145 push 0x102583d8 */
  push32((uint32_t)(0x102583d8u));
  /* 1025114a push 0x10258cd0 */
  push32((uint32_t)(0x10258cd0u));
  /* 1025114f call esi */
  call_ind((uint32_t)(ESI), 0x10251151u);
  /* 10251151 push 0x102583d4 */
  push32((uint32_t)(0x102583d4u));
  /* 10251156 push 0x10258af0 */
  push32((uint32_t)(0x10258af0u));
  /* 1025115b call esi */
  call_ind((uint32_t)(ESI), 0x1025115du);
  /* 1025115d push 0x102583d0 */
  push32((uint32_t)(0x102583d0u));
  /* 10251162 push 0x10258b00 */
  push32((uint32_t)(0x10258b00u));
  /* 10251167 call esi */
  call_ind((uint32_t)(ESI), 0x10251169u);
  /* 10251169 push 0x102583cc */
  push32((uint32_t)(0x102583ccu));
  /* 1025116e push 0x10258b10 */
  push32((uint32_t)(0x10258b10u));
  /* 10251173 call esi */
  call_ind((uint32_t)(ESI), 0x10251175u);
  /* 10251175 push 0x102583c4 */
  push32((uint32_t)(0x102583c4u));
  /* 1025117a push 0x10258d28 */
  push32((uint32_t)(0x10258d28u));
  /* 1025117f call esi */
  call_ind((uint32_t)(ESI), 0x10251181u);
  /* 10251181 push 0x102583c0 */
  push32((uint32_t)(0x102583c0u));
  /* 10251186 push 0x10258b20 */
  push32((uint32_t)(0x10258b20u));
  /* 1025118b call esi */
  call_ind((uint32_t)(ESI), 0x1025118du);
  /* 1025118d push 0x102583bc */
  push32((uint32_t)(0x102583bcu));
  /* 10251192 push 0x10258b30 */
  push32((uint32_t)(0x10258b30u));
  /* 10251197 call esi */
  call_ind((uint32_t)(ESI), 0x10251199u);
  /* 10251199 push 0x102583b8 */
  push32((uint32_t)(0x102583b8u));
  /* 1025119e push 0x10258b40 */
  push32((uint32_t)(0x10258b40u));
  /* 102511a3 call esi */
  call_ind((uint32_t)(ESI), 0x102511a5u);
  /* 102511a5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102511a8 push 0x102583b4 */
  push32((uint32_t)(0x102583b4u));
  /* 102511ad push 0x10258b50 */
  push32((uint32_t)(0x10258b50u));
  /* 102511b2 call esi */
  call_ind((uint32_t)(ESI), 0x102511b4u);
  /* 102511b4 push 0x102583b0 */
  push32((uint32_t)(0x102583b0u));
  /* 102511b9 push 0x10258af8 */
  push32((uint32_t)(0x10258af8u));
  /* 102511be call esi */
  call_ind((uint32_t)(ESI), 0x102511c0u);
  /* 102511c0 mov ebx, 0x102583ac */
  EBX = (0x102583acu);
  /* 102511c5 mov edi, 0x10258b08 */
  EDI = (0x10258b08u);
  /* 102511ca push ebx */
  push32((uint32_t)(EBX));
  /* 102511cb push edi */
  push32((uint32_t)(EDI));
  /* 102511cc call esi */
  call_ind((uint32_t)(ESI), 0x102511ceu);
  /* 102511ce push ebx */
  push32((uint32_t)(EBX));
  /* 102511cf push edi */
  push32((uint32_t)(EDI));
  /* 102511d0 call esi */
  call_ind((uint32_t)(ESI), 0x102511d2u);
  /* 102511d2 push 0x102583a8 */
  push32((uint32_t)(0x102583a8u));
  /* 102511d7 push 0x10258b18 */
  push32((uint32_t)(0x10258b18u));
  /* 102511dc call esi */
  call_ind((uint32_t)(ESI), 0x102511deu);
  /* 102511de push 0x102583a4 */
  push32((uint32_t)(0x102583a4u));
  /* 102511e3 push 0x10258b28 */
  push32((uint32_t)(0x10258b28u));
  /* 102511e8 call esi */
  call_ind((uint32_t)(ESI), 0x102511eau);
  /* 102511ea push 0x102583a0 */
  push32((uint32_t)(0x102583a0u));
  /* 102511ef push 0x10258b38 */
  push32((uint32_t)(0x10258b38u));
  /* 102511f4 call esi */
  call_ind((uint32_t)(ESI), 0x102511f6u);
  /* 102511f6 push 0x1025839c */
  push32((uint32_t)(0x1025839cu));
  /* 102511fb push 0x10258b48 */
  push32((uint32_t)(0x10258b48u));
  /* 10251200 call esi */
  call_ind((uint32_t)(ESI), 0x10251202u);
  /* 10251202 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10251205 push 0x10258398 */
  push32((uint32_t)(0x10258398u));
  /* 1025120a push 0x10258b58 */
  push32((uint32_t)(0x10258b58u));
  /* 1025120f call esi */
  call_ind((uint32_t)(ESI), 0x10251211u);
  /* 10251211 push 0x10258394 */
  push32((uint32_t)(0x10258394u));
  /* 10251216 push 0x10258b60 */
  push32((uint32_t)(0x10258b60u));
  /* 1025121b call esi */
  call_ind((uint32_t)(ESI), 0x1025121du);
  /* 1025121d push 0x10258390 */
  push32((uint32_t)(0x10258390u));
  /* 10251222 push 0x10258b68 */
  push32((uint32_t)(0x10258b68u));
  /* 10251227 call esi */
  call_ind((uint32_t)(ESI), 0x10251229u);
  /* 10251229 mov esi, dword ptr [0x10257178] */
  ESI = (r32((uint32_t)(0x10257178)));
  /* 1025122f push 0x1025838c */
  push32((uint32_t)(0x1025838cu));
  /* 10251234 push 0x10258b90 */
  push32((uint32_t)(0x10258b90u));
  /* 10251239 call esi */
  call_ind((uint32_t)(ESI), 0x1025123bu);
  /* 1025123b push 0x10258388 */
  push32((uint32_t)(0x10258388u));
  /* 10251240 push 0x10258ba0 */
  push32((uint32_t)(0x10258ba0u));
  /* 10251245 call esi */
  call_ind((uint32_t)(ESI), 0x10251247u);
  /* 10251247 push 0x10258384 */
  push32((uint32_t)(0x10258384u));
  /* 1025124c push 0x10258ba8 */
  push32((uint32_t)(0x10258ba8u));
  /* 10251251 call esi */
  call_ind((uint32_t)(ESI), 0x10251253u);
  /* 10251253 push 0x10258380 */
  push32((uint32_t)(0x10258380u));
  /* 10251258 push 0x10258bb0 */
  push32((uint32_t)(0x10258bb0u));
  /* 1025125d call esi */
  call_ind((uint32_t)(ESI), 0x1025125fu);
  /* 1025125f push 0x1025837c */
  push32((uint32_t)(0x1025837cu));
  /* 10251264 push 0x10258bb8 */
  push32((uint32_t)(0x10258bb8u));
  /* 10251269 call esi */
  call_ind((uint32_t)(ESI), 0x1025126bu);
  /* 1025126b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025126e push 0x10258378 */
  push32((uint32_t)(0x10258378u));
  /* 10251273 push 0x10258bc0 */
  push32((uint32_t)(0x10258bc0u));
  /* 10251278 call esi */
  call_ind((uint32_t)(ESI), 0x1025127au);
  /* 1025127a push 0x10258374 */
  push32((uint32_t)(0x10258374u));
  /* 1025127f push 0x10258bc8 */
  push32((uint32_t)(0x10258bc8u));
  /* 10251284 call esi */
  call_ind((uint32_t)(ESI), 0x10251286u);
  /* 10251286 push 0x10258370 */
  push32((uint32_t)(0x10258370u));
  /* 1025128b push 0x10258d40 */
  push32((uint32_t)(0x10258d40u));
  /* 10251290 call esi */
  call_ind((uint32_t)(ESI), 0x10251292u);
  /* 10251292 push 0x1025836c */
  push32((uint32_t)(0x1025836cu));
  /* 10251297 push 0x10258bd0 */
  push32((uint32_t)(0x10258bd0u));
  /* 1025129c call esi */
  call_ind((uint32_t)(ESI), 0x1025129eu);
  /* 1025129e push 0x10258368 */
  push32((uint32_t)(0x10258368u));
  /* 102512a3 push 0x10258d48 */
  push32((uint32_t)(0x10258d48u));
  /* 102512a8 call esi */
  call_ind((uint32_t)(ESI), 0x102512aau);
  /* 102512aa push 0x10258364 */
  push32((uint32_t)(0x10258364u));
  /* 102512af push 0x10258bd8 */
  push32((uint32_t)(0x10258bd8u));
  /* 102512b4 call esi */
  call_ind((uint32_t)(ESI), 0x102512b6u);
  /* 102512b6 push 0x10258360 */
  push32((uint32_t)(0x10258360u));
  /* 102512bb push 0x10258c58 */
  push32((uint32_t)(0x10258c58u));
  /* 102512c0 call esi */
  call_ind((uint32_t)(ESI), 0x102512c2u);
  /* 102512c2 push 0x1025835c */
  push32((uint32_t)(0x1025835cu));
  /* 102512c7 push 0x10258c60 */
  push32((uint32_t)(0x10258c60u));
  /* 102512cc call esi */
  call_ind((uint32_t)(ESI), 0x102512ceu);
  /* 102512ce add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102512d1 push 0x10258358 */
  push32((uint32_t)(0x10258358u));
  /* 102512d6 push 0x10258c68 */
  push32((uint32_t)(0x10258c68u));
  /* 102512db call esi */
  call_ind((uint32_t)(ESI), 0x102512ddu);
  /* 102512dd push 0x10258354 */
  push32((uint32_t)(0x10258354u));
  /* 102512e2 push 0x10258c70 */
  push32((uint32_t)(0x10258c70u));
  /* 102512e7 call esi */
  call_ind((uint32_t)(ESI), 0x102512e9u);
  /* 102512e9 push 0x1025834c */
  push32((uint32_t)(0x1025834cu));
  /* 102512ee push 0x10258d78 */
  push32((uint32_t)(0x10258d78u));
  /* 102512f3 call esi */
  call_ind((uint32_t)(ESI), 0x102512f5u);
  /* 102512f5 push 0x10258348 */
  push32((uint32_t)(0x10258348u));
  /* 102512fa push 0x10258c80 */
  push32((uint32_t)(0x10258c80u));
  /* 102512ff call esi */
  call_ind((uint32_t)(ESI), 0x10251301u);
  /* 10251301 push 0x10258344 */
  push32((uint32_t)(0x10258344u));
  /* 10251306 push 0x10258c98 */
  push32((uint32_t)(0x10258c98u));
  /* 1025130b call esi */
  call_ind((uint32_t)(ESI), 0x1025130du);
  /* 1025130d push 0x1025833c */
  push32((uint32_t)(0x1025833cu));
  /* 10251312 push 0x10258d90 */
  push32((uint32_t)(0x10258d90u));
  /* 10251317 call esi */
  call_ind((uint32_t)(ESI), 0x10251319u);
  /* 10251319 push 0x10258338 */
  push32((uint32_t)(0x10258338u));
  /* 1025131e push 0x10258cb0 */
  push32((uint32_t)(0x10258cb0u));
  /* 10251323 call esi */
  call_ind((uint32_t)(ESI), 0x10251325u);
  /* 10251325 push 0x10258334 */
  push32((uint32_t)(0x10258334u));
  /* 1025132a push 0x10258cc8 */
  push32((uint32_t)(0x10258cc8u));
  /* 1025132f call esi */
  call_ind((uint32_t)(ESI), 0x10251331u);
  /* 10251331 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10251334 push 0x1025832c */
  push32((uint32_t)(0x1025832cu));
  /* 10251339 push 0x10258da8 */
  push32((uint32_t)(0x10258da8u));
  /* 1025133e call esi */
  call_ind((uint32_t)(ESI), 0x10251340u);
  /* 10251340 push 0x10258328 */
  push32((uint32_t)(0x10258328u));
  /* 10251345 push 0x10258ce0 */
  push32((uint32_t)(0x10258ce0u));
  /* 1025134a call esi */
  call_ind((uint32_t)(ESI), 0x1025134cu);
  /* 1025134c push 0x10258320 */
  push32((uint32_t)(0x10258320u));
  /* 10251351 push 0x10258db0 */
  push32((uint32_t)(0x10258db0u));
  /* 10251356 call esi */
  call_ind((uint32_t)(ESI), 0x10251358u);
  /* 10251358 push 0x10258318 */
  push32((uint32_t)(0x10258318u));
  /* 1025135d push 0x10258db8 */
  push32((uint32_t)(0x10258db8u));
  /* 10251362 call esi */
  call_ind((uint32_t)(ESI), 0x10251364u);
  /* 10251364 push 0x10258314 */
  push32((uint32_t)(0x10258314u));
  /* 10251369 push 0x10258cf8 */
  push32((uint32_t)(0x10258cf8u));
  /* 1025136e call esi */
  call_ind((uint32_t)(ESI), 0x10251370u);
  /* 10251370 push 0x1025830c */
  push32((uint32_t)(0x1025830cu));
  /* 10251375 push 0x10258dc0 */
  push32((uint32_t)(0x10258dc0u));
  /* 1025137a call esi */
  call_ind((uint32_t)(ESI), 0x1025137cu);
  /* 1025137c push 0x10258304 */
  push32((uint32_t)(0x10258304u));
  /* 10251381 push 0x10258dc8 */
  push32((uint32_t)(0x10258dc8u));
  /* 10251386 call esi */
  call_ind((uint32_t)(ESI), 0x10251388u);
  /* 10251388 push 0x102582fc */
  push32((uint32_t)(0x102582fcu));
  /* 1025138d push 0x10258dd0 */
  push32((uint32_t)(0x10258dd0u));
  /* 10251392 call esi */
  call_ind((uint32_t)(ESI), 0x10251394u);
  /* 10251394 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10251397 push 0x102582f4 */
  push32((uint32_t)(0x102582f4u));
  /* 1025139c push 0x10258dd8 */
  push32((uint32_t)(0x10258dd8u));
  /* 102513a1 call esi */
  call_ind((uint32_t)(ESI), 0x102513a3u);
  /* 102513a3 push 0x102582ec */
  push32((uint32_t)(0x102582ecu));
  /* 102513a8 push 0x10258de0 */
  push32((uint32_t)(0x10258de0u));
  /* 102513ad call esi */
  call_ind((uint32_t)(ESI), 0x102513afu);
  /* 102513af push 0x102582e4 */
  push32((uint32_t)(0x102582e4u));
  /* 102513b4 push 0x10258df0 */
  push32((uint32_t)(0x10258df0u));
  /* 102513b9 call esi */
  call_ind((uint32_t)(ESI), 0x102513bbu);
  /* 102513bb push 0x102582e0 */
  push32((uint32_t)(0x102582e0u));
  /* 102513c0 push 0x10258c78 */
  push32((uint32_t)(0x10258c78u));
  /* 102513c5 call esi */
  call_ind((uint32_t)(ESI), 0x102513c7u);
  /* 102513c7 push 0x102582d8 */
  push32((uint32_t)(0x102582d8u));
  /* 102513cc push 0x10258d80 */
  push32((uint32_t)(0x10258d80u));
  /* 102513d1 call esi */
  call_ind((uint32_t)(ESI), 0x102513d3u);
  /* 102513d3 push 0x102582d4 */
  push32((uint32_t)(0x102582d4u));
  /* 102513d8 push 0x10258c90 */
  push32((uint32_t)(0x10258c90u));
  /* 102513dd call esi */
  call_ind((uint32_t)(ESI), 0x102513dfu);
  /* 102513df push 0x102582cc */
  push32((uint32_t)(0x102582ccu));
  /* 102513e4 push 0x10258d88 */
  push32((uint32_t)(0x10258d88u));
  /* 102513e9 call esi */
  call_ind((uint32_t)(ESI), 0x102513ebu);
  /* 102513eb push 0x102582c8 */
  push32((uint32_t)(0x102582c8u));
  /* 102513f0 push 0x10258ca8 */
  push32((uint32_t)(0x10258ca8u));
  /* 102513f5 call esi */
  call_ind((uint32_t)(ESI), 0x102513f7u);
  /* 102513f7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102513fa push 0x102582c0 */
  push32((uint32_t)(0x102582c0u));
  /* 102513ff push 0x10258d98 */
  push32((uint32_t)(0x10258d98u));
  /* 10251404 call esi */
  call_ind((uint32_t)(ESI), 0x10251406u);
  /* 10251406 push 0x102582bc */
  push32((uint32_t)(0x102582bcu));
  /* 1025140b push 0x10258cc0 */
  push32((uint32_t)(0x10258cc0u));
  /* 10251410 call esi */
  call_ind((uint32_t)(ESI), 0x10251412u);
  /* 10251412 push 0x102582b4 */
  push32((uint32_t)(0x102582b4u));
  /* 10251417 push 0x10258da0 */
  push32((uint32_t)(0x10258da0u));
  /* 1025141c call esi */
  call_ind((uint32_t)(ESI), 0x1025141eu);
  /* 1025141e push 0x102582b0 */
  push32((uint32_t)(0x102582b0u));
  /* 10251423 push 0x10258cd8 */
  push32((uint32_t)(0x10258cd8u));
  /* 10251428 call esi */
  call_ind((uint32_t)(ESI), 0x1025142au);
  /* 1025142a push 0x102582ac */
  push32((uint32_t)(0x102582acu));
  /* 1025142f push 0x10258cf0 */
  push32((uint32_t)(0x10258cf0u));
  /* 10251434 call esi */
  call_ind((uint32_t)(ESI), 0x10251436u);
  /* 10251436 push 0x102582a8 */
  push32((uint32_t)(0x102582a8u));
  /* 1025143b push 0x10258d08 */
  push32((uint32_t)(0x10258d08u));
  /* 10251440 call esi */
  call_ind((uint32_t)(ESI), 0x10251442u);
  /* 10251442 push 0x102582a4 */
  push32((uint32_t)(0x102582a4u));
  /* 10251447 push 0x10258d10 */
  push32((uint32_t)(0x10258d10u));
  /* 1025144c call esi */
  call_ind((uint32_t)(ESI), 0x1025144eu);
  /* 1025144e push 0x102582a0 */
  push32((uint32_t)(0x102582a0u));
  /* 10251453 push 0x10258d18 */
  push32((uint32_t)(0x10258d18u));
  /* 10251458 call esi */
  call_ind((uint32_t)(ESI), 0x1025145au);
  /* 1025145a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025145d push 0x1025829c */
  push32((uint32_t)(0x1025829cu));
  /* 10251462 push 0x10258d20 */
  push32((uint32_t)(0x10258d20u));
  /* 10251467 call esi */
  call_ind((uint32_t)(ESI), 0x10251469u);
  /* 10251469 push 0x10258294 */
  push32((uint32_t)(0x10258294u));
  /* 1025146e push 0x10258df8 */
  push32((uint32_t)(0x10258df8u));
  /* 10251473 call esi */
  call_ind((uint32_t)(ESI), 0x10251475u);
  /* 10251475 push 0x1025828c */
  push32((uint32_t)(0x1025828cu));
  /* 1025147a push 0x10258e00 */
  push32((uint32_t)(0x10258e00u));
  /* 1025147f call esi */
  call_ind((uint32_t)(ESI), 0x10251481u);
  /* 10251481 push 0x10258288 */
  push32((uint32_t)(0x10258288u));
  /* 10251486 push 0x10258ce8 */
  push32((uint32_t)(0x10258ce8u));
  /* 1025148b call esi */
  call_ind((uint32_t)(ESI), 0x1025148du);
  /* 1025148d push 0x10258284 */
  push32((uint32_t)(0x10258284u));
  /* 10251492 push 0x10258d00 */
  push32((uint32_t)(0x10258d00u));
  /* 10251497 call esi */
  call_ind((uint32_t)(ESI), 0x10251499u);
  /* 10251499 mov esi, dword ptr [0x1025717c] */
  ESI = (r32((uint32_t)(0x1025717c)));
  /* 1025149f push 0x10258ac0 */
  push32((uint32_t)(0x10258ac0u));
  /* 102514a4 call esi */
  call_ind((uint32_t)(ESI), 0x102514a6u);
  /* 102514a6 push 0x10258a28 */
  push32((uint32_t)(0x10258a28u));
  /* 102514ab call esi */
  call_ind((uint32_t)(ESI), 0x102514adu);
  /* 102514ad push 0x10258a38 */
  push32((uint32_t)(0x10258a38u));
  /* 102514b2 call esi */
  call_ind((uint32_t)(ESI), 0x102514b4u);
  /* 102514b4 push 0x10258a40 */
  push32((uint32_t)(0x10258a40u));
  /* 102514b9 call esi */
  call_ind((uint32_t)(ESI), 0x102514bbu);
  /* 102514bb push 0x10258a48 */
  push32((uint32_t)(0x10258a48u));
  /* 102514c0 call esi */
  call_ind((uint32_t)(ESI), 0x102514c2u);
  /* 102514c2 push 0x10258a50 */
  push32((uint32_t)(0x10258a50u));
  /* 102514c7 call esi */
  call_ind((uint32_t)(ESI), 0x102514c9u);
  /* 102514c9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102514cc push 0x10258a58 */
  push32((uint32_t)(0x10258a58u));
  /* 102514d1 call esi */
  call_ind((uint32_t)(ESI), 0x102514d3u);
  /* 102514d3 mov dword ptr [esp], 0x10258a60 */
  w32((uint32_t)(ESP), (0x10258a60u));
  /* 102514da call esi */
  call_ind((uint32_t)(ESI), 0x102514dcu);
  /* 102514dc mov esi, dword ptr [0x10257180] */
  ESI = (r32((uint32_t)(0x10257180)));
  /* 102514e2 push 8 */
  push32((uint32_t)(0x8u));
  /* 102514e4 pop edi */
  EDI = (pop32());
  /* 102514e5 push edi */
  push32((uint32_t)(EDI));
  /* 102514e6 push 0x10258d38 */
  push32((uint32_t)(0x10258d38u));
  /* 102514eb call esi */
  call_ind((uint32_t)(ESI), 0x102514edu);
  /* 102514ed push edi */
  push32((uint32_t)(EDI));
  /* 102514ee push 0x10258d50 */
  push32((uint32_t)(0x10258d50u));
  /* 102514f3 call esi */
  call_ind((uint32_t)(ESI), 0x102514f5u);
  /* 102514f5 push edi */
  push32((uint32_t)(EDI));
  /* 102514f6 push 0x10258d58 */
  push32((uint32_t)(0x10258d58u));
  /* 102514fb call esi */
  call_ind((uint32_t)(ESI), 0x102514fdu);
  /* 102514fd push edi */
  push32((uint32_t)(EDI));
  /* 102514fe push 0x10258ab0 */
  push32((uint32_t)(0x10258ab0u));
  /* 10251503 call esi */
  call_ind((uint32_t)(ESI), 0x10251505u);
  /* 10251505 push edi */
  push32((uint32_t)(EDI));
  /* 10251506 push 0x10258ac8 */
  push32((uint32_t)(0x10258ac8u));
  /* 1025150b call esi */
  call_ind((uint32_t)(ESI), 0x1025150du);
  /* 1025150d push edi */
  push32((uint32_t)(EDI));
  /* 1025150e push 0x10258ab8 */
  push32((uint32_t)(0x10258ab8u));
  /* 10251513 call esi */
  call_ind((uint32_t)(ESI), 0x10251515u);
  /* 10251515 push edi */
  push32((uint32_t)(EDI));
  /* 10251516 push 0x10258ae0 */
  push32((uint32_t)(0x10258ae0u));
  /* 1025151b call esi */
  call_ind((uint32_t)(ESI), 0x1025151du);
  /* 1025151d push 4 */
  push32((uint32_t)(0x4u));
  /* 1025151f push 0x10258c10 */
  push32((uint32_t)(0x10258c10u));
  /* 10251524 call esi */
  call_ind((uint32_t)(ESI), 0x10251526u);
  /* 10251526 mov esi, dword ptr [0x10257184] */
  ESI = (r32((uint32_t)(0x10257184)));
  /* 1025152c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025152f push 0x10258274 */
  push32((uint32_t)(0x10258274u));
  /* 10251534 push 0x10258990 */
  push32((uint32_t)(0x10258990u));
  /* 10251539 call esi */
  call_ind((uint32_t)(ESI), 0x1025153bu);
  /* 1025153b push 0x10258268 */
  push32((uint32_t)(0x10258268u));
  /* 10251540 push 0x10258c18 */
  push32((uint32_t)(0x10258c18u));
  /* 10251545 call esi */
  call_ind((uint32_t)(ESI), 0x10251547u);
  /* 10251547 push 0x10258254 */
  push32((uint32_t)(0x10258254u));
  /* 1025154c push 0x102589e8 */
  push32((uint32_t)(0x102589e8u));
  /* 10251551 call esi */
  call_ind((uint32_t)(ESI), 0x10251553u);
  /* 10251553 push 0x10258244 */
  push32((uint32_t)(0x10258244u));
  /* 10251558 push 0x102589f0 */
  push32((uint32_t)(0x102589f0u));
  /* 1025155d call esi */
  call_ind((uint32_t)(ESI), 0x1025155fu);
  /* 1025155f push 0x10258234 */
  push32((uint32_t)(0x10258234u));
  /* 10251564 push 0x102589f8 */
  push32((uint32_t)(0x102589f8u));
  /* 10251569 call esi */
  call_ind((uint32_t)(ESI), 0x1025156bu);
  /* 1025156b push 0x10258220 */
  push32((uint32_t)(0x10258220u));
  /* 10251570 push 0x10258a00 */
  push32((uint32_t)(0x10258a00u));
  /* 10251575 call esi */
  call_ind((uint32_t)(ESI), 0x10251577u);
  /* 10251577 push 0x1025820c */
  push32((uint32_t)(0x1025820cu));
  /* 1025157c push 0x10258a08 */
  push32((uint32_t)(0x10258a08u));
  /* 10251581 call esi */
  call_ind((uint32_t)(ESI), 0x10251583u);
  /* 10251583 push 0x10258200 */
  push32((uint32_t)(0x10258200u));
  /* 10251588 push 0x10258a10 */
  push32((uint32_t)(0x10258a10u));
  /* 1025158d call esi */
  call_ind((uint32_t)(ESI), 0x1025158fu);
  /* 1025158f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10251592 push 0x102581e8 */
  push32((uint32_t)(0x102581e8u));
  /* 10251597 push 0x10258a18 */
  push32((uint32_t)(0x10258a18u));
  /* 1025159c call esi */
  call_ind((uint32_t)(ESI), 0x1025159eu);
  /* 1025159e push 0x102581d4 */
  push32((uint32_t)(0x102581d4u));
  /* 102515a3 push 0x10258a20 */
  push32((uint32_t)(0x10258a20u));
  /* 102515a8 call esi */
  call_ind((uint32_t)(ESI), 0x102515aau);
  /* 102515aa push 0x102581c0 */
  push32((uint32_t)(0x102581c0u));
  /* 102515af push 0x10258a30 */
  push32((uint32_t)(0x10258a30u));
  /* 102515b4 call esi */
  call_ind((uint32_t)(ESI), 0x102515b6u);
  /* 102515b6 push 0x102581ac */
  push32((uint32_t)(0x102581acu));
  /* 102515bb push 0x102589b0 */
  push32((uint32_t)(0x102589b0u));
  /* 102515c0 call esi */
  call_ind((uint32_t)(ESI), 0x102515c2u);
  /* 102515c2 push 0x1025819c */
  push32((uint32_t)(0x1025819cu));
  /* 102515c7 push 0x102589b8 */
  push32((uint32_t)(0x102589b8u));
  /* 102515cc call esi */
  call_ind((uint32_t)(ESI), 0x102515ceu);
  /* 102515ce push 0x10258190 */
  push32((uint32_t)(0x10258190u));
  /* 102515d3 push 0x102589c0 */
  push32((uint32_t)(0x102589c0u));
  /* 102515d8 call esi */
  call_ind((uint32_t)(ESI), 0x102515dau);
  /* 102515da push 0x10258180 */
  push32((uint32_t)(0x10258180u));
  /* 102515df push 0x102589d0 */
  push32((uint32_t)(0x102589d0u));
  /* 102515e4 call esi */
  call_ind((uint32_t)(ESI), 0x102515e6u);
  /* 102515e6 push 0x10258174 */
  push32((uint32_t)(0x10258174u));
  /* 102515eb push 0x102589d8 */
  push32((uint32_t)(0x102589d8u));
  /* 102515f0 call esi */
  call_ind((uint32_t)(ESI), 0x102515f2u);
  /* 102515f2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102515f5 push 0x10258164 */
  push32((uint32_t)(0x10258164u));
  /* 102515fa push 0x102589e0 */
  push32((uint32_t)(0x102589e0u));
  /* 102515ff call esi */
  call_ind((uint32_t)(ESI), 0x10251601u);
  /* 10251601 push 0x10258158 */
  push32((uint32_t)(0x10258158u));
  /* 10251606 push 0x102589a8 */
  push32((uint32_t)(0x102589a8u));
  /* 1025160b call esi */
  call_ind((uint32_t)(ESI), 0x1025160du);
  /* 1025160d push 0x10258144 */
  push32((uint32_t)(0x10258144u));
  /* 10251612 push 0x10258c08 */
  push32((uint32_t)(0x10258c08u));
  /* 10251617 call esi */
  call_ind((uint32_t)(ESI), 0x10251619u);
  /* 10251619 push 0x10258130 */
  push32((uint32_t)(0x10258130u));
  /* 1025161e push 0x10258998 */
  push32((uint32_t)(0x10258998u));
  /* 10251623 call esi */
  call_ind((uint32_t)(ESI), 0x10251625u);
  /* 10251625 push 0x1025811c */
  push32((uint32_t)(0x1025811cu));
  /* 1025162a push 0x10258de8 */
  push32((uint32_t)(0x10258de8u));
  /* 1025162f call esi */
  call_ind((uint32_t)(ESI), 0x10251631u);
  /* 10251631 push 0x10258110 */
  push32((uint32_t)(0x10258110u));
  /* 10251636 push 0x10258d60 */
  push32((uint32_t)(0x10258d60u));
  /* 1025163b call esi */
  call_ind((uint32_t)(ESI), 0x1025163du);
  /* 1025163d mov ebp, 0x102589c8 */
  EBP = (0x102589c8u);
  /* 10251642 push 0x10258100 */
  push32((uint32_t)(0x10258100u));
  /* 10251647 push ebp */
  push32((uint32_t)(EBP));
  /* 10251648 call esi */
  call_ind((uint32_t)(ESI), 0x1025164au);
  /* 1025164a push 0x102580f4 */
  push32((uint32_t)(0x102580f4u));
  /* 1025164f push 0x10258d30 */
  push32((uint32_t)(0x10258d30u));
  /* 10251654 call esi */
  call_ind((uint32_t)(ESI), 0x10251656u);
  /* 10251656 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10251659 mov ebx, 0x10258980 */
  EBX = (0x10258980u);
  /* 1025165e push 0x102580e4 */
  push32((uint32_t)(0x102580e4u));
  /* 10251663 push ebx */
  push32((uint32_t)(EBX));
  /* 10251664 call esi */
  call_ind((uint32_t)(ESI), 0x10251666u);
  /* 10251666 push 0x102580d4 */
  push32((uint32_t)(0x102580d4u));
  /* 1025166b push 0x10258c20 */
  push32((uint32_t)(0x10258c20u));
  /* 10251670 call esi */
  call_ind((uint32_t)(ESI), 0x10251672u);
  /* 10251672 push 0x102580c4 */
  push32((uint32_t)(0x102580c4u));
  /* 10251677 push 0x10258c50 */
  push32((uint32_t)(0x10258c50u));
  /* 1025167c call esi */
  call_ind((uint32_t)(ESI), 0x1025167eu);
  /* 1025167e push 0x102580b4 */
  push32((uint32_t)(0x102580b4u));
  /* 10251683 push 0x10258c40 */
  push32((uint32_t)(0x10258c40u));
  /* 10251688 call esi */
  call_ind((uint32_t)(ESI), 0x1025168au);
  /* 1025168a push 0x102580a4 */
  push32((uint32_t)(0x102580a4u));
  /* 1025168f push 0x10258c48 */
  push32((uint32_t)(0x10258c48u));
  /* 10251694 call esi */
  call_ind((uint32_t)(ESI), 0x10251696u);
  /* 10251696 mov esi, dword ptr [0x10257188] */
  ESI = (r32((uint32_t)(0x10257188)));
  /* 1025169c push 0x1025809c */
  push32((uint32_t)(0x1025809cu));
  /* 102516a1 push 0x10258c38 */
  push32((uint32_t)(0x10258c38u));
  /* 102516a6 call esi */
  call_ind((uint32_t)(ESI), 0x102516a8u);
  /* 102516a8 push 0x10258094 */
  push32((uint32_t)(0x10258094u));
  /* 102516ad push 0x10258c30 */
  push32((uint32_t)(0x10258c30u));
  /* 102516b2 call esi */
  call_ind((uint32_t)(ESI), 0x102516b4u);
  /* 102516b4 push 0x10258088 */
  push32((uint32_t)(0x10258088u));
  /* 102516b9 push 0x10258c28 */
  push32((uint32_t)(0x10258c28u));
  /* 102516be call esi */
  call_ind((uint32_t)(ESI), 0x102516c0u);
  /* 102516c0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102516c3 push 0x1025807c */
  push32((uint32_t)(0x1025807cu));
  /* 102516c8 push 0x10258978 */
  push32((uint32_t)(0x10258978u));
  /* 102516cd call esi */
  call_ind((uint32_t)(ESI), 0x102516cfu);
  /* 102516cf push 0x10258070 */
  push32((uint32_t)(0x10258070u));
  /* 102516d4 push 0x10258970 */
  push32((uint32_t)(0x10258970u));
  /* 102516d9 call esi */
  call_ind((uint32_t)(ESI), 0x102516dbu);
  /* 102516db push 0x10258064 */
  push32((uint32_t)(0x10258064u));
  /* 102516e0 push 0x10258e08 */
  push32((uint32_t)(0x10258e08u));
  /* 102516e5 call esi */
  call_ind((uint32_t)(ESI), 0x102516e7u);
  /* 102516e7 mov esi, dword ptr [0x1025718c] */
  ESI = (r32((uint32_t)(0x1025718c)));
  /* 102516ed push 0x1025805c */
  push32((uint32_t)(0x1025805cu));
  /* 102516f2 push 0x102589a0 */
  push32((uint32_t)(0x102589a0u));
  /* 102516f7 call esi */
  call_ind((uint32_t)(ESI), 0x102516f9u);
  /* 102516f9 push 0x10258054 */
  push32((uint32_t)(0x10258054u));
  /* 102516fe push 0x10258d68 */
  push32((uint32_t)(0x10258d68u));
  /* 10251703 call esi */
  call_ind((uint32_t)(ESI), 0x10251705u);
  /* 10251705 mov esi, dword ptr [0x10257190] */
  ESI = (r32((uint32_t)(0x10257190)));
  /* 1025170b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1025170d push 1 */
  push32((uint32_t)(0x1u));
  /* 1025170f push edi */
  push32((uint32_t)(EDI));
  /* 10251710 call esi */
  call_ind((uint32_t)(ESI), 0x10251712u);
  /* 10251712 push 2 */
  push32((uint32_t)(0x2u));
  /* 10251714 push 1 */
  push32((uint32_t)(0x1u));
  /* 10251716 call esi */
  call_ind((uint32_t)(ESI), 0x10251718u);
  /* 10251718 push 9 */
  push32((uint32_t)(0x9u));
  /* 1025171a push 3 */
  push32((uint32_t)(0x3u));
  /* 1025171c call esi */
  call_ind((uint32_t)(ESI), 0x1025171eu);
  /* 1025171e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10251721 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10251723 push 4 */
  push32((uint32_t)(0x4u));
  /* 10251725 call esi */
  call_ind((uint32_t)(ESI), 0x10251727u);
  /* 10251727 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10251729 push 5 */
  push32((uint32_t)(0x5u));
  /* 1025172b call esi */
  call_ind((uint32_t)(ESI), 0x1025172du);
  /* 1025172d mov esi, dword ptr [0x10257194] */
  ESI = (r32((uint32_t)(0x10257194)));
  /* 10251733 push 0x1025804c */
  push32((uint32_t)(0x1025804cu));
  /* 10251738 mov dword ptr [0x10258d70], edi */
  w32((uint32_t)(0x10258d70), (EDI));
  /* 1025173e push 1 */
  push32((uint32_t)(0x1u));
  /* 10251740 call esi */
  call_ind((uint32_t)(ESI), 0x10251742u);
  /* 10251742 push 0x10258040 */
  push32((uint32_t)(0x10258040u));
  /* 10251747 push 3 */
  push32((uint32_t)(0x3u));
  /* 10251749 call esi */
  call_ind((uint32_t)(ESI), 0x1025174bu);
  /* 1025174b push 0x10258038 */
  push32((uint32_t)(0x10258038u));
  /* 10251750 push 4 */
  push32((uint32_t)(0x4u));
  /* 10251752 call esi */
  call_ind((uint32_t)(ESI), 0x10251754u);
  /* 10251754 push 0x10258030 */
  push32((uint32_t)(0x10258030u));
  /* 10251759 push 5 */
  push32((uint32_t)(0x5u));
  /* 1025175b call esi */
  call_ind((uint32_t)(ESI), 0x1025175du);
  /* 1025175d mov esi, dword ptr [0x10257198] */
  ESI = (r32((uint32_t)(0x10257198)));
  /* 10251763 push edi */
  push32((uint32_t)(EDI));
  /* 10251764 push 0x102589e8 */
  push32((uint32_t)(0x102589e8u));
  /* 10251769 push edi */
  push32((uint32_t)(EDI));
  /* 1025176a call esi */
  call_ind((uint32_t)(ESI), 0x1025176cu);
  /* 1025176c push edi */
  push32((uint32_t)(EDI));
  /* 1025176d push 0x102589f0 */
  push32((uint32_t)(0x102589f0u));
  /* 10251772 push edi */
  push32((uint32_t)(EDI));
  /* 10251773 call esi */
  call_ind((uint32_t)(ESI), 0x10251775u);
  /* 10251775 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10251778 push edi */
  push32((uint32_t)(EDI));
  /* 10251779 push 0x102589f8 */
  push32((uint32_t)(0x102589f8u));
  /* 1025177e push edi */
  push32((uint32_t)(EDI));
  /* 1025177f call esi */
  call_ind((uint32_t)(ESI), 0x10251781u);
  /* 10251781 push edi */
  push32((uint32_t)(EDI));
  /* 10251782 push 0x10258a00 */
  push32((uint32_t)(0x10258a00u));
  /* 10251787 push edi */
  push32((uint32_t)(EDI));
  /* 10251788 call esi */
  call_ind((uint32_t)(ESI), 0x1025178au);
  /* 1025178a push edi */
  push32((uint32_t)(EDI));
  /* 1025178b push 0x10258a08 */
  push32((uint32_t)(0x10258a08u));
  /* 10251790 push edi */
  push32((uint32_t)(EDI));
  /* 10251791 call esi */
  call_ind((uint32_t)(ESI), 0x10251793u);
  /* 10251793 push edi */
  push32((uint32_t)(EDI));
  /* 10251794 push 0x10258a10 */
  push32((uint32_t)(0x10258a10u));
  /* 10251799 push edi */
  push32((uint32_t)(EDI));
  /* 1025179a call esi */
  call_ind((uint32_t)(ESI), 0x1025179cu);
  /* 1025179c push edi */
  push32((uint32_t)(EDI));
  /* 1025179d push 0x10258a18 */
  push32((uint32_t)(0x10258a18u));
  /* 102517a2 push edi */
  push32((uint32_t)(EDI));
  /* 102517a3 call esi */
  call_ind((uint32_t)(ESI), 0x102517a5u);
  /* 102517a5 push edi */
  push32((uint32_t)(EDI));
  /* 102517a6 push 0x10258a20 */
  push32((uint32_t)(0x10258a20u));
  /* 102517ab push edi */
  push32((uint32_t)(EDI));
  /* 102517ac call esi */
  call_ind((uint32_t)(ESI), 0x102517aeu);
  /* 102517ae add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102517b1 push edi */
  push32((uint32_t)(EDI));
  /* 102517b2 push 0x10258a30 */
  push32((uint32_t)(0x10258a30u));
  /* 102517b7 push edi */
  push32((uint32_t)(EDI));
  /* 102517b8 call esi */
  call_ind((uint32_t)(ESI), 0x102517bau);
  /* 102517ba push edi */
  push32((uint32_t)(EDI));
  /* 102517bb push 0x102589b0 */
  push32((uint32_t)(0x102589b0u));
  /* 102517c0 push edi */
  push32((uint32_t)(EDI));
  /* 102517c1 call esi */
  call_ind((uint32_t)(ESI), 0x102517c3u);
  /* 102517c3 push edi */
  push32((uint32_t)(EDI));
  /* 102517c4 push 0x102589b8 */
  push32((uint32_t)(0x102589b8u));
  /* 102517c9 push edi */
  push32((uint32_t)(EDI));
  /* 102517ca call esi */
  call_ind((uint32_t)(ESI), 0x102517ccu);
  /* 102517cc push edi */
  push32((uint32_t)(EDI));
  /* 102517cd push 0x102589c0 */
  push32((uint32_t)(0x102589c0u));
  /* 102517d2 push edi */
  push32((uint32_t)(EDI));
  /* 102517d3 call esi */
  call_ind((uint32_t)(ESI), 0x102517d5u);
  /* 102517d5 push edi */
  push32((uint32_t)(EDI));
  /* 102517d6 push 0x102589d0 */
  push32((uint32_t)(0x102589d0u));
  /* 102517db push edi */
  push32((uint32_t)(EDI));
  /* 102517dc call esi */
  call_ind((uint32_t)(ESI), 0x102517deu);
  /* 102517de push edi */
  push32((uint32_t)(EDI));
  /* 102517df push 0x102589d8 */
  push32((uint32_t)(0x102589d8u));
  /* 102517e4 push edi */
  push32((uint32_t)(EDI));
  /* 102517e5 call esi */
  call_ind((uint32_t)(ESI), 0x102517e7u);
  /* 102517e7 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102517ea push edi */
  push32((uint32_t)(EDI));
  /* 102517eb push 0x102589e0 */
  push32((uint32_t)(0x102589e0u));
  /* 102517f0 push edi */
  push32((uint32_t)(EDI));
  /* 102517f1 call esi */
  call_ind((uint32_t)(ESI), 0x102517f3u);
  /* 102517f3 push edi */
  push32((uint32_t)(EDI));
  /* 102517f4 push ebp */
  push32((uint32_t)(EBP));
  /* 102517f5 push edi */
  push32((uint32_t)(EDI));
  /* 102517f6 call esi */
  call_ind((uint32_t)(ESI), 0x102517f8u);
  /* 102517f8 push edi */
  push32((uint32_t)(EDI));
  /* 102517f9 push ebx */
  push32((uint32_t)(EBX));
  /* 102517fa push edi */
  push32((uint32_t)(EDI));
  /* 102517fb call esi */
  call_ind((uint32_t)(ESI), 0x102517fdu);
  /* 102517fd add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10251800 pop edi */
  EDI = (pop32());
  /* 10251801 pop esi */
  ESI = (pop32());
  /* 10251802 pop ebp */
  EBP = (pop32());
  /* 10251803 pop ebx */
  EBX = (pop32());
  /* 10251804 ret  */
  ESPCHK(0x10251012u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x10251805 (11193 bytes, 3842 insns) */
void f_10251805(void) {
  FTRACE(0x10251805u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10251805 push ecx */
  push32((uint32_t)(ECX));
  /* 10251806 push ebx */
  push32((uint32_t)(EBX));
  /* 10251807 push ebp */
  push32((uint32_t)(EBP));
  /* 10251808 push esi */
  push32((uint32_t)(ESI));
  /* 10251809 push edi */
  push32((uint32_t)(EDI));
  /* 1025180a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1025180c call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10251812u);
  /* 10251812 mov ebp, dword ptr [0x102570d4] */
  EBP = (r32((uint32_t)(0x102570d4)));
  /* 10251818 mov esi, dword ptr [0x102570d0] */
  ESI = (r32((uint32_t)(0x102570d0)));
  /* 1025181e mov ebx, dword ptr [0x102570cc] */
  EBX = (r32((uint32_t)(0x102570cc)));
  /* 10251824 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10251826 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251828 pop ecx */
  ECX = (pop32());
  /* 10251829 je 0x10251aef */
  if (C.zf) goto L_10251aef;
  /* 1025182f push 0x10258634 */
  push32((uint32_t)(0x10258634u));
  /* 10251834 push 0x102583b4 */
  push32((uint32_t)(0x102583b4u));
  /* 10251839 call ebp */
  call_ind((uint32_t)(EBP), 0x1025183bu);
  /* 1025183b push 0x1025862c */
  push32((uint32_t)(0x1025862cu));
  /* 10251840 push 0x102583b4 */
  push32((uint32_t)(0x102583b4u));
  /* 10251845 call ebp */
  call_ind((uint32_t)(EBP), 0x10251847u);
  /* 10251847 push 0x10258624 */
  push32((uint32_t)(0x10258624u));
  /* 1025184c push 0x102583b0 */
  push32((uint32_t)(0x102583b0u));
  /* 10251851 call ebp */
  call_ind((uint32_t)(EBP), 0x10251853u);
  /* 10251853 push 0x1025861c */
  push32((uint32_t)(0x1025861cu));
  /* 10251858 push 0x102583b0 */
  push32((uint32_t)(0x102583b0u));
  /* 1025185d call ebp */
  call_ind((uint32_t)(EBP), 0x1025185fu);
  /* 1025185f push edi */
  push32((uint32_t)(EDI));
  /* 10251860 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10251866u);
  /* 10251866 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10251869 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025186c jle 0x1025187c */
  if ((C.zf||C.sf!=C.of)) goto L_1025187c;
  /* 1025186e push 0x10258614 */
  push32((uint32_t)(0x10258614u));
  /* 10251873 push 0x102583cc */
  push32((uint32_t)(0x102583ccu));
  /* 10251878 call ebp */
  call_ind((uint32_t)(EBP), 0x1025187au);
  /* 1025187a pop ecx */
  ECX = (pop32());
  /* 1025187b pop ecx */
  ECX = (pop32());
L_1025187c:;
  /* 1025187c mov ebp, dword ptr [0x1025719c] */
  EBP = (r32((uint32_t)(0x1025719c)));
  /* 10251882 push 0x102589a0 */
  push32((uint32_t)(0x102589a0u));
  /* 10251887 push edi */
  push32((uint32_t)(EDI));
  /* 10251888 mov dword ptr [0x10258988], 1 */
  w32((uint32_t)(0x10258988), (0x1u));
  /* 10251892 call ebp */
  call_ind((uint32_t)(EBP), 0x10251894u);
  /* 10251894 push 0x10258d68 */
  push32((uint32_t)(0x10258d68u));
  /* 10251899 push edi */
  push32((uint32_t)(EDI));
  /* 1025189a call ebp */
  call_ind((uint32_t)(EBP), 0x1025189cu);
  /* 1025189c push edi */
  push32((uint32_t)(EDI));
  /* 1025189d push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1025189f call esi */
  call_ind((uint32_t)(ESI), 0x102518a1u);
  /* 102518a1 mov ebp, dword ptr [0x102570c0] */
  EBP = (r32((uint32_t)(0x102570c0)));
  /* 102518a7 push edi */
  push32((uint32_t)(EDI));
  /* 102518a8 push 0x10258bc8 */
  push32((uint32_t)(0x10258bc8u));
  /* 102518ad push 4 */
  push32((uint32_t)(0x4u));
  /* 102518af push 0x10258c20 */
  push32((uint32_t)(0x10258c20u));
  /* 102518b4 push 0x10258c38 */
  push32((uint32_t)(0x10258c38u));
  /* 102518b9 push 0x10258ab0 */
  push32((uint32_t)(0x10258ab0u));
  /* 102518be call ebp */
  call_ind((uint32_t)(EBP), 0x102518c0u);
  /* 102518c0 push edi */
  push32((uint32_t)(EDI));
  /* 102518c1 push 0x10258bd0 */
  push32((uint32_t)(0x10258bd0u));
  /* 102518c6 push 4 */
  push32((uint32_t)(0x4u));
  /* 102518c8 push 0x10258c40 */
  push32((uint32_t)(0x10258c40u));
  /* 102518cd push 0x10258c38 */
  push32((uint32_t)(0x10258c38u));
  /* 102518d2 push 0x10258ab8 */
  push32((uint32_t)(0x10258ab8u));
  /* 102518d7 call ebp */
  call_ind((uint32_t)(EBP), 0x102518d9u);
  /* 102518d9 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102518dc push edi */
  push32((uint32_t)(EDI));
  /* 102518dd call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x102518e3u);
  /* 102518e3 push 7 */
  push32((uint32_t)(0x7u));
  /* 102518e5 mov ebp, dword ptr [0x102570bc] */
  EBP = (r32((uint32_t)(0x102570bc)));
  /* 102518eb pop ecx */
  ECX = (pop32());
  /* 102518ec sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102518ee imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102518f4 push ecx */
  push32((uint32_t)(ECX));
  /* 102518f5 push 3 */
  push32((uint32_t)(0x3u));
  /* 102518f7 push edi */
  push32((uint32_t)(EDI));
  /* 102518f8 call ebp */
  call_ind((uint32_t)(EBP), 0x102518fau);
  /* 102518fa push edi */
  push32((uint32_t)(EDI));
  /* 102518fb call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10251901u);
  /* 10251901 push 6 */
  push32((uint32_t)(0x6u));
  /* 10251903 pop ecx */
  ECX = (pop32());
  /* 10251904 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10251906 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1025190c push ecx */
  push32((uint32_t)(ECX));
  /* 1025190d push 1 */
  push32((uint32_t)(0x1u));
  /* 1025190f push edi */
  push32((uint32_t)(EDI));
  /* 10251910 call ebp */
  call_ind((uint32_t)(EBP), 0x10251912u);
  /* 10251912 push edi */
  push32((uint32_t)(EDI));
  /* 10251913 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10251919u);
  /* 10251919 imul eax, eax, 0x96 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x96u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1025191f mov ecx, 0x3e8 */
  ECX = (0x3e8u);
  /* 10251924 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10251926 push ecx */
  push32((uint32_t)(ECX));
  /* 10251927 push edi */
  push32((uint32_t)(EDI));
  /* 10251928 push edi */
  push32((uint32_t)(EDI));
  /* 10251929 call ebp */
  call_ind((uint32_t)(EBP), 0x1025192bu);
  /* 1025192b push edi */
  push32((uint32_t)(EDI));
  /* 1025192c push 2 */
  push32((uint32_t)(0x2u));
  /* 1025192e push edi */
  push32((uint32_t)(EDI));
  /* 1025192f call ebp */
  call_ind((uint32_t)(EBP), 0x10251931u);
  /* 10251931 push edi */
  push32((uint32_t)(EDI));
  /* 10251932 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10251938u);
  /* 10251938 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025193b push 4 */
  push32((uint32_t)(0x4u));
  /* 1025193d pop ecx */
  ECX = (pop32());
  /* 1025193e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10251940 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10251946 push ecx */
  push32((uint32_t)(ECX));
  /* 10251947 push 5 */
  push32((uint32_t)(0x5u));
  /* 10251949 push edi */
  push32((uint32_t)(EDI));
  /* 1025194a call ebp */
  call_ind((uint32_t)(EBP), 0x1025194cu);
  /* 1025194c push edi */
  push32((uint32_t)(EDI));
  /* 1025194d call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10251953u);
  /* 10251953 push 6 */
  push32((uint32_t)(0x6u));
  /* 10251955 pop ecx */
  ECX = (pop32());
  /* 10251956 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10251958 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1025195e push ecx */
  push32((uint32_t)(ECX));
  /* 1025195f push 4 */
  push32((uint32_t)(0x4u));
  /* 10251961 push edi */
  push32((uint32_t)(EDI));
  /* 10251962 call ebp */
  call_ind((uint32_t)(EBP), 0x10251964u);
  /* 10251964 push edi */
  push32((uint32_t)(EDI));
  /* 10251965 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x1025196bu);
  /* 1025196b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025196e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251970 jne 0x102519cf */
  if (!C.zf) goto L_102519cf;
  /* 10251972 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10251977 push 3 */
  push32((uint32_t)(0x3u));
  /* 10251979 push edi */
  push32((uint32_t)(EDI));
  /* 1025197a call ebp */
  call_ind((uint32_t)(EBP), 0x1025197cu);
  /* 1025197c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10251981 push 5 */
  push32((uint32_t)(0x5u));
  /* 10251983 push edi */
  push32((uint32_t)(EDI));
  /* 10251984 call ebp */
  call_ind((uint32_t)(EBP), 0x10251986u);
  /* 10251986 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 1025198b push 4 */
  push32((uint32_t)(0x4u));
  /* 1025198d push edi */
  push32((uint32_t)(EDI));
  /* 1025198e call ebp */
  call_ind((uint32_t)(EBP), 0x10251990u);
  /* 10251990 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10251995 push 1 */
  push32((uint32_t)(0x1u));
  /* 10251997 push edi */
  push32((uint32_t)(EDI));
  /* 10251998 call ebp */
  call_ind((uint32_t)(EBP), 0x1025199au);
  /* 1025199a push 2 */
  push32((uint32_t)(0x2u));
  /* 1025199c push 3 */
  push32((uint32_t)(0x3u));
  /* 1025199e push 0x10258bd8 */
  push32((uint32_t)(0x10258bd8u));
  /* 102519a3 call dword ptr [0x102570b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570b8))), 0x102519a9u);
  /* 102519a9 push 0x10258614 */
  push32((uint32_t)(0x10258614u));
  /* 102519ae push 0x1025843c */
  push32((uint32_t)(0x1025843cu));
  /* 102519b3 call dword ptr [0x102570d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d4))), 0x102519b9u);
  /* 102519b9 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102519bc push edi */
  push32((uint32_t)(EDI));
  /* 102519bd push 0x10258be8 */
  push32((uint32_t)(0x10258be8u));
  /* 102519c2 call ebx */
  call_ind((uint32_t)(EBX), 0x102519c4u);
  /* 102519c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 102519c6 call dword ptr [0x102570b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570b4))), 0x102519ccu);
  /* 102519cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102519cf:;
  /* 102519cf push 0x1025860c */
  push32((uint32_t)(0x1025860cu));
  /* 102519d4 call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x102519dau);
  /* 102519da mov ebp, dword ptr [0x102570c4] */
  EBP = (r32((uint32_t)(0x102570c4)));
  /* 102519e0 mov dword ptr [esp], 0x10258aa0 */
  w32((uint32_t)(ESP), (0x10258aa0u));
  /* 102519e7 call ebp */
  call_ind((uint32_t)(EBP), 0x102519e9u);
  /* 102519e9 mov dword ptr [esp], 0x10258bf0 */
  w32((uint32_t)(ESP), (0x10258bf0u));
  /* 102519f0 call dword ptr [0x102570b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570b0))), 0x102519f6u);
  /* 102519f6 mov dword ptr [esp], 0x10258af8 */
  w32((uint32_t)(ESP), (0x10258af8u));
  /* 102519fd call ebp */
  call_ind((uint32_t)(EBP), 0x102519ffu);
  /* 102519ff push edi */
  push32((uint32_t)(EDI));
  /* 10251a00 push 0x10258a78 */
  push32((uint32_t)(0x10258a78u));
  /* 10251a05 call ebx */
  call_ind((uint32_t)(EBX), 0x10251a07u);
  /* 10251a07 push 3 */
  push32((uint32_t)(0x3u));
  /* 10251a09 call dword ptr [0x102570dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570dc))), 0x10251a0fu);
  /* 10251a0f mov ebp, dword ptr [0x102570e0] */
  EBP = (r32((uint32_t)(0x102570e0)));
  /* 10251a15 push 0x10258a28 */
  push32((uint32_t)(0x10258a28u));
  /* 10251a1a push 0x10258990 */
  push32((uint32_t)(0x10258990u));
  /* 10251a1f push 0x10258b40 */
  push32((uint32_t)(0x10258b40u));
  /* 10251a24 call ebp */
  call_ind((uint32_t)(EBP), 0x10251a26u);
  /* 10251a26 push 0x10258a38 */
  push32((uint32_t)(0x10258a38u));
  /* 10251a2b push 0x10258c18 */
  push32((uint32_t)(0x10258c18u));
  /* 10251a30 push 0x10258b50 */
  push32((uint32_t)(0x10258b50u));
  /* 10251a35 call ebp */
  call_ind((uint32_t)(EBP), 0x10251a37u);
  /* 10251a37 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10251a3c push 0x10258db0 */
  push32((uint32_t)(0x10258db0u));
  /* 10251a41 push 1 */
  push32((uint32_t)(0x1u));
  /* 10251a43 push 0x102589a8 */
  push32((uint32_t)(0x102589a8u));
  /* 10251a48 push 0x10258c30 */
  push32((uint32_t)(0x10258c30u));
  /* 10251a4d push 0x10258d38 */
  push32((uint32_t)(0x10258d38u));
  /* 10251a52 call dword ptr [0x102570c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c0))), 0x10251a58u);
  /* 10251a58 mov ebp, dword ptr [0x102570e4] */
  EBP = (r32((uint32_t)(0x102570e4)));
  /* 10251a5e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10251a61 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10251a66 push 3 */
  push32((uint32_t)(0x3u));
  /* 10251a68 call ebp */
  call_ind((uint32_t)(EBP), 0x10251a6au);
  /* 10251a6a push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10251a6f push 6 */
  push32((uint32_t)(0x6u));
  /* 10251a71 call ebp */
  call_ind((uint32_t)(EBP), 0x10251a73u);
  /* 10251a73 push edi */
  push32((uint32_t)(EDI));
  /* 10251a74 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10251a7au);
  /* 10251a7a push 8 */
  push32((uint32_t)(0x8u));
  /* 10251a7c pop ecx */
  ECX = (pop32());
  /* 10251a7d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10251a7f imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10251a85 push ecx */
  push32((uint32_t)(ECX));
  /* 10251a86 push 7 */
  push32((uint32_t)(0x7u));
  /* 10251a88 call ebp */
  call_ind((uint32_t)(EBP), 0x10251a8au);
  /* 10251a8a push edi */
  push32((uint32_t)(EDI));
  /* 10251a8b push 0xb */
  push32((uint32_t)(0xbu));
  /* 10251a8d call esi */
  call_ind((uint32_t)(ESI), 0x10251a8fu);
  /* 10251a8f push edi */
  push32((uint32_t)(EDI));
  /* 10251a90 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10251a92 call esi */
  call_ind((uint32_t)(ESI), 0x10251a94u);
  /* 10251a94 push edi */
  push32((uint32_t)(EDI));
  /* 10251a95 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10251a97 call esi */
  call_ind((uint32_t)(ESI), 0x10251a99u);
  /* 10251a99 push edi */
  push32((uint32_t)(EDI));
  /* 10251a9a push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10251a9c call esi */
  call_ind((uint32_t)(ESI), 0x10251a9eu);
  /* 10251a9e push edi */
  push32((uint32_t)(EDI));
  /* 10251a9f push 0x10258b78 */
  push32((uint32_t)(0x10258b78u));
  /* 10251aa4 call ebx */
  call_ind((uint32_t)(EBX), 0x10251aa6u);
  /* 10251aa6 mov ebp, dword ptr [0x102570e8] */
  EBP = (r32((uint32_t)(0x102570e8)));
  /* 10251aac add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10251aaf push 4 */
  push32((uint32_t)(0x4u));
  /* 10251ab1 push edi */
  push32((uint32_t)(EDI));
  /* 10251ab2 call ebp */
  call_ind((uint32_t)(EBP), 0x10251ab4u);
  /* 10251ab4 push edi */
  push32((uint32_t)(EDI));
  /* 10251ab5 push 0x10258be0 */
  push32((uint32_t)(0x10258be0u));
  /* 10251aba call ebx */
  call_ind((uint32_t)(EBX), 0x10251abcu);
  /* 10251abc push 4 */
  push32((uint32_t)(0x4u));
  /* 10251abe push 3 */
  push32((uint32_t)(0x3u));
  /* 10251ac0 call ebp */
  call_ind((uint32_t)(EBP), 0x10251ac2u);
  /* 10251ac2 mov ebp, dword ptr [0x102570ec] */
  EBP = (r32((uint32_t)(0x102570ec)));
  /* 10251ac8 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10251aca call ebp */
  call_ind((uint32_t)(EBP), 0x10251accu);
  /* 10251acc push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10251ace call ebp */
  call_ind((uint32_t)(EBP), 0x10251ad0u);
  /* 10251ad0 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10251ad2 call ebp */
  call_ind((uint32_t)(EBP), 0x10251ad4u);
  /* 10251ad4 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10251ad6 call ebp */
  call_ind((uint32_t)(EBP), 0x10251ad8u);
  /* 10251ad8 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10251ada call ebp */
  call_ind((uint32_t)(EBP), 0x10251adcu);
  /* 10251adc push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10251ade call ebp */
  call_ind((uint32_t)(EBP), 0x10251ae0u);
  /* 10251ae0 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10251ae2 call ebp */
  call_ind((uint32_t)(EBP), 0x10251ae4u);
  /* 10251ae4 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10251ae6 call ebp */
  call_ind((uint32_t)(EBP), 0x10251ae8u);
  /* 10251ae8 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10251aea call ebp */
  call_ind((uint32_t)(EBP), 0x10251aecu);
  /* 10251aec add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10251aef:;
  /* 10251aef push 9 */
  push32((uint32_t)(0x9u));
  /* 10251af1 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10251af7u);
  /* 10251af7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251af9 pop ecx */
  ECX = (pop32());
  /* 10251afa jne 0x10251b1a */
  if (!C.zf) goto L_10251b1a;
  /* 10251afc cmp dword ptr [0x10258d70], edi */
  { uint32_t _a=(r32((uint32_t)(0x10258d70))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10251b02 jne 0x10251b1a */
  if (!C.zf) goto L_10251b1a;
  /* 10251b04 push 8 */
  push32((uint32_t)(0x8u));
  /* 10251b06 push 3 */
  push32((uint32_t)(0x3u));
  /* 10251b08 mov dword ptr [0x10258d70], 1 */
  w32((uint32_t)(0x10258d70), (0x1u));
  /* 10251b12 call dword ptr [0x10257190] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257190))), 0x10251b18u);
  /* 10251b18 pop ecx */
  ECX = (pop32());
  /* 10251b19 pop ecx */
  ECX = (pop32());
L_10251b1a:;
  /* 10251b1a push 1 */
  push32((uint32_t)(0x1u));
  /* 10251b1c call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10251b22u);
  /* 10251b22 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251b24 pop ecx */
  ECX = (pop32());
  /* 10251b25 mov ebp, 0x10258a70 */
  EBP = (0x10258a70u);
  /* 10251b2a je 0x10251b8c */
  if (C.zf) goto L_10251b8c;
  /* 10251b2c push ebp */
  push32((uint32_t)(EBP));
  /* 10251b2d call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251b33u);
  /* 10251b33 push edi */
  push32((uint32_t)(EDI));
  /* 10251b34 push edi */
  push32((uint32_t)(EDI));
  /* 10251b35 mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 10251b39 call dword ptr [0x102570f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f4))), 0x10251b3fu);
  /* 10251b3f mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 10251b43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10251b46 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10251b4c cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10251b4e jl 0x10251b8c */
  if ((C.sf!=C.of)) goto L_10251b8c;
  /* 10251b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10251b51 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251b57u);
  /* 10251b57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251b59 pop ecx */
  ECX = (pop32());
  /* 10251b5a jle 0x10251b8c */
  if ((C.zf||C.sf!=C.of)) goto L_10251b8c;
  /* 10251b5c push 9 */
  push32((uint32_t)(0x9u));
  /* 10251b5e call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10251b64u);
  /* 10251b64 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251b66 pop ecx */
  ECX = (pop32());
  /* 10251b67 je 0x10251b8c */
  if (C.zf) goto L_10251b8c;
  /* 10251b69 push 0x10258b78 */
  push32((uint32_t)(0x10258b78u));
  /* 10251b6e call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251b74u);
  /* 10251b74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251b76 pop ecx */
  ECX = (pop32());
  /* 10251b77 jle 0x10251b8c */
  if ((C.zf||C.sf!=C.of)) goto L_10251b8c;
  /* 10251b79 push edi */
  push32((uint32_t)(EDI));
  /* 10251b7a push 1 */
  push32((uint32_t)(0x1u));
  /* 10251b7c call esi */
  call_ind((uint32_t)(ESI), 0x10251b7eu);
  /* 10251b7e push 0x10258604 */
  push32((uint32_t)(0x10258604u));
  /* 10251b83 call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x10251b89u);
  /* 10251b89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10251b8c:;
  /* 10251b8c push 2 */
  push32((uint32_t)(0x2u));
  /* 10251b8e call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10251b94u);
  /* 10251b94 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251b96 pop ecx */
  ECX = (pop32());
  /* 10251b97 je 0x10251c57 */
  if (C.zf) goto L_10251c57;
  /* 10251b9d push 1 */
  push32((uint32_t)(0x1u));
  /* 10251b9f call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10251ba5u);
  /* 10251ba5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251ba7 pop ecx */
  ECX = (pop32());
  /* 10251ba8 jne 0x10251c57 */
  if (!C.zf) goto L_10251c57;
  /* 10251bae push ebp */
  push32((uint32_t)(EBP));
  /* 10251baf call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251bb5u);
  /* 10251bb5 push edi */
  push32((uint32_t)(EDI));
  /* 10251bb6 push edi */
  push32((uint32_t)(EDI));
  /* 10251bb7 mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 10251bbb call dword ptr [0x102570f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f4))), 0x10251bc1u);
  /* 10251bc1 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 10251bc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10251bc8 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10251bce cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10251bd0 jl 0x10251c57 */
  if ((C.sf!=C.of)) goto L_10251c57;
  /* 10251bd6 push ebp */
  push32((uint32_t)(EBP));
  /* 10251bd7 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251bddu);
  /* 10251bdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251bdf pop ecx */
  ECX = (pop32());
  /* 10251be0 jle 0x10251c57 */
  if ((C.zf||C.sf!=C.of)) goto L_10251c57;
  /* 10251be2 push ebp */
  push32((uint32_t)(EBP));
  /* 10251be3 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251be9u);
  /* 10251be9 push ebp */
  push32((uint32_t)(EBP));
  /* 10251bea push 0x10258ba0 */
  push32((uint32_t)(0x10258ba0u));
  /* 10251bef mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 10251bf3 call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10251bf9u);
  /* 10251bf9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10251bfc cmp eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10251c00 jne 0x10251c57 */
  if (!C.zf) goto L_10251c57;
  /* 10251c02 push 9 */
  push32((uint32_t)(0x9u));
  /* 10251c04 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10251c0au);
  /* 10251c0a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251c0c pop ecx */
  ECX = (pop32());
  /* 10251c0d je 0x10251c57 */
  if (C.zf) goto L_10251c57;
  /* 10251c0f push 0x10258b78 */
  push32((uint32_t)(0x10258b78u));
  /* 10251c14 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251c1au);
  /* 10251c1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251c1c pop ecx */
  ECX = (pop32());
  /* 10251c1d jle 0x10251c57 */
  if ((C.zf||C.sf!=C.of)) goto L_10251c57;
  /* 10251c1f push edi */
  push32((uint32_t)(EDI));
  /* 10251c20 push 2 */
  push32((uint32_t)(0x2u));
  /* 10251c22 call esi */
  call_ind((uint32_t)(ESI), 0x10251c24u);
  /* 10251c24 push 0x102585fc */
  push32((uint32_t)(0x102585fcu));
  /* 10251c29 call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x10251c2fu);
  /* 10251c2f push ebp */
  push32((uint32_t)(EBP));
  /* 10251c30 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251c36u);
  /* 10251c36 imul eax, eax, 0xfffffc18 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xfffffc18u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10251c3c push eax */
  push32((uint32_t)(EAX));
  /* 10251c3d push edi */
  push32((uint32_t)(EDI));
  /* 10251c3e push edi */
  push32((uint32_t)(EDI));
  /* 10251c3f call dword ptr [0x102570fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570fc))), 0x10251c45u);
  /* 10251c45 push 1 */
  push32((uint32_t)(0x1u));
  /* 10251c47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10251c49 push 0x10258ba8 */
  push32((uint32_t)(0x10258ba8u));
  /* 10251c4e call dword ptr [0x102570b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570b8))), 0x10251c54u);
  /* 10251c54 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10251c57:;
  /* 10251c57 push 3 */
  push32((uint32_t)(0x3u));
  /* 10251c59 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10251c5fu);
  /* 10251c5f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251c61 pop ecx */
  ECX = (pop32());
  /* 10251c62 je 0x10251d26 */
  if (C.zf) goto L_10251d26;
  /* 10251c68 push 2 */
  push32((uint32_t)(0x2u));
  /* 10251c6a call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10251c70u);
  /* 10251c70 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251c72 pop ecx */
  ECX = (pop32());
  /* 10251c73 jne 0x10251d26 */
  if (!C.zf) goto L_10251d26;
  /* 10251c79 push ebp */
  push32((uint32_t)(EBP));
  /* 10251c7a call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251c80u);
  /* 10251c80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251c82 pop ecx */
  ECX = (pop32());
  /* 10251c83 jle 0x10251d26 */
  if ((C.zf||C.sf!=C.of)) goto L_10251d26;
  /* 10251c89 push ebp */
  push32((uint32_t)(EBP));
  /* 10251c8a call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251c90u);
  /* 10251c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10251c91 push 0x10258ba8 */
  push32((uint32_t)(0x10258ba8u));
  /* 10251c96 mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 10251c9a call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10251ca0u);
  /* 10251ca0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10251ca3 cmp eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10251ca7 jne 0x10251d26 */
  if (!C.zf) goto L_10251d26;
  /* 10251ca9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10251cab call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10251cb1u);
  /* 10251cb1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251cb3 pop ecx */
  ECX = (pop32());
  /* 10251cb4 je 0x10251d26 */
  if (C.zf) goto L_10251d26;
  /* 10251cb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10251cb8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10251cba call esi */
  call_ind((uint32_t)(ESI), 0x10251cbcu);
  /* 10251cbc push 1 */
  push32((uint32_t)(0x1u));
  /* 10251cbe push 2 */
  push32((uint32_t)(0x2u));
  /* 10251cc0 call esi */
  call_ind((uint32_t)(ESI), 0x10251cc2u);
  /* 10251cc2 push edi */
  push32((uint32_t)(EDI));
  /* 10251cc3 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10251cc9u);
  /* 10251cc9 push 0xa */
  push32((uint32_t)(0xau));
  /* 10251ccb pop edx */
  EDX = (pop32());
  /* 10251ccc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10251cce push ebp */
  push32((uint32_t)(EBP));
  /* 10251ccf mov dword ptr [esp + 0x28], edx */
  w32((uint32_t)(ESP + 0x28), (EDX));
  /* 10251cd3 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251cd9u);
  /* 10251cd9 mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 10251cdd imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10251ce0 imul ecx, ecx, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x32u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10251ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 10251ce4 push 0x102585f4 */
  push32((uint32_t)(0x102585f4u));
  /* 10251ce9 call dword ptr [0x10257100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257100))), 0x10251cefu);
  /* 10251cef push edi */
  push32((uint32_t)(EDI));
  /* 10251cf0 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10251cf6u);
  /* 10251cf6 push 0xa */
  push32((uint32_t)(0xau));
  /* 10251cf8 pop ebp */
  EBP = (pop32());
  /* 10251cf9 push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 10251cfe sub ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; EBP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10251d00 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251d06u);
  /* 10251d06 imul ebp, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EBP); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10251d09 imul ebp, ebp, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(EBP)*(int64_t)(int32_t)(0x32u); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10251d0c push ebp */
  push32((uint32_t)(EBP));
  /* 10251d0d push 1 */
  push32((uint32_t)(0x1u));
  /* 10251d0f push edi */
  push32((uint32_t)(EDI));
  /* 10251d10 call dword ptr [0x102570fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570fc))), 0x10251d16u);
  /* 10251d16 push 1 */
  push32((uint32_t)(0x1u));
  /* 10251d18 call dword ptr [0x10257104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257104))), 0x10251d1eu);
  /* 10251d1e add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10251d21 mov ebp, 0x10258a70 */
  EBP = (0x10258a70u);
L_10251d26:;
  /* 10251d26 push ebp */
  push32((uint32_t)(EBP));
  /* 10251d27 push 0x10258bb0 */
  push32((uint32_t)(0x10258bb0u));
  /* 10251d2c call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10251d32u);
  /* 10251d32 pop ecx */
  ECX = (pop32());
  /* 10251d33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251d35 pop ecx */
  ECX = (pop32());
  /* 10251d36 jle 0x10251d5e */
  if ((C.zf||C.sf!=C.of)) goto L_10251d5e;
  /* 10251d38 push 0x10258a90 */
  push32((uint32_t)(0x10258a90u));
  /* 10251d3d call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251d43u);
  /* 10251d43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251d45 pop ecx */
  ECX = (pop32());
  /* 10251d46 jle 0x10251d5e */
  if ((C.zf||C.sf!=C.of)) goto L_10251d5e;
  /* 10251d48 push edi */
  push32((uint32_t)(EDI));
  /* 10251d49 push 0x10258a90 */
  push32((uint32_t)(0x10258a90u));
  /* 10251d4e call ebx */
  call_ind((uint32_t)(EBX), 0x10251d50u);
  /* 10251d50 push ebp */
  push32((uint32_t)(EBP));
  /* 10251d51 push 5 */
  push32((uint32_t)(0x5u));
  /* 10251d53 call dword ptr [0x10257108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257108))), 0x10251d59u);
  /* 10251d59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10251d5c jmp 0x10251d91 */
  goto L_10251d91;
L_10251d5e:;
  /* 10251d5e mov ebp, 0x10258bb8 */
  EBP = (0x10258bb8u);
  /* 10251d63 push edi */
  push32((uint32_t)(EDI));
  /* 10251d64 push ebp */
  push32((uint32_t)(EBP));
  /* 10251d65 call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10251d6bu);
  /* 10251d6b pop ecx */
  ECX = (pop32());
  /* 10251d6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251d6e pop ecx */
  ECX = (pop32());
  /* 10251d6f jle 0x10251d91 */
  if ((C.zf||C.sf!=C.of)) goto L_10251d91;
  /* 10251d71 push 0x10258a90 */
  push32((uint32_t)(0x10258a90u));
  /* 10251d76 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251d7cu);
  /* 10251d7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251d7e pop ecx */
  ECX = (pop32());
  /* 10251d7f jle 0x10251d91 */
  if ((C.zf||C.sf!=C.of)) goto L_10251d91;
  /* 10251d81 push edi */
  push32((uint32_t)(EDI));
  /* 10251d82 push ebp */
  push32((uint32_t)(EBP));
  /* 10251d83 push 0x10258a90 */
  push32((uint32_t)(0x10258a90u));
  /* 10251d88 call dword ptr [0x10257110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257110))), 0x10251d8eu);
  /* 10251d8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10251d91:;
  /* 10251d91 push 4 */
  push32((uint32_t)(0x4u));
  /* 10251d93 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10251d99u);
  /* 10251d99 mov ebp, dword ptr [0x10257114] */
  EBP = (r32((uint32_t)(0x10257114)));
  /* 10251d9f pop ecx */
  ECX = (pop32());
  /* 10251da0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251da2 je 0x10251df9 */
  if (C.zf) goto L_10251df9;
  /* 10251da4 push 0x10258a90 */
  push32((uint32_t)(0x10258a90u));
  /* 10251da9 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251dafu);
  /* 10251daf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251db1 pop ecx */
  ECX = (pop32());
  /* 10251db2 jne 0x10251df9 */
  if (!C.zf) goto L_10251df9;
  /* 10251db4 push edi */
  push32((uint32_t)(EDI));
  /* 10251db5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10251db7 call esi */
  call_ind((uint32_t)(ESI), 0x10251db9u);
  /* 10251db9 push 0x102585ec */
  push32((uint32_t)(0x102585ecu));
  /* 10251dbe call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x10251dc4u);
  /* 10251dc4 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10251dc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10251dc8 push edi */
  push32((uint32_t)(EDI));
  /* 10251dc9 call dword ptr [0x102570fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570fc))), 0x10251dcfu);
  /* 10251dcf push edi */
  push32((uint32_t)(EDI));
  /* 10251dd0 push 0x10258a98 */
  push32((uint32_t)(0x10258a98u));
  /* 10251dd5 call ebx */
  call_ind((uint32_t)(EBX), 0x10251dd7u);
  /* 10251dd7 push edi */
  push32((uint32_t)(EDI));
  /* 10251dd8 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10251ddd push 0x10258bc0 */
  push32((uint32_t)(0x10258bc0u));
  /* 10251de2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10251de4 call ebp */
  call_ind((uint32_t)(EBP), 0x10251de6u);
  /* 10251de6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10251de8 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10251ded push 0x10258b90 */
  push32((uint32_t)(0x10258b90u));
  /* 10251df2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10251df4 call ebp */
  call_ind((uint32_t)(EBP), 0x10251df6u);
  /* 10251df6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10251df9:;
  /* 10251df9 push edi */
  push32((uint32_t)(EDI));
  /* 10251dfa push 0x10258bd8 */
  push32((uint32_t)(0x10258bd8u));
  /* 10251dff call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10251e05u);
  /* 10251e05 pop ecx */
  ECX = (pop32());
  /* 10251e06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251e08 pop ecx */
  ECX = (pop32());
  /* 10251e09 jle 0x10251e56 */
  if ((C.zf||C.sf!=C.of)) goto L_10251e56;
  /* 10251e0b push 0x10258aa8 */
  push32((uint32_t)(0x10258aa8u));
  /* 10251e10 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251e16u);
  /* 10251e16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251e18 pop ecx */
  ECX = (pop32());
  /* 10251e19 jle 0x10251e56 */
  if ((C.zf||C.sf!=C.of)) goto L_10251e56;
  /* 10251e1b push edi */
  push32((uint32_t)(EDI));
  /* 10251e1c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10251e1e call esi */
  call_ind((uint32_t)(ESI), 0x10251e20u);
  /* 10251e20 push 5 */
  push32((uint32_t)(0x5u));
  /* 10251e22 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10251e28u);
  /* 10251e28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10251e2b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251e2d je 0x10251e42 */
  if (C.zf) goto L_10251e42;
  /* 10251e2f push edi */
  push32((uint32_t)(EDI));
  /* 10251e30 push 5 */
  push32((uint32_t)(0x5u));
  /* 10251e32 call esi */
  call_ind((uint32_t)(ESI), 0x10251e34u);
  /* 10251e34 push 0x102585e4 */
  push32((uint32_t)(0x102585e4u));
  /* 10251e39 call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x10251e3fu);
  /* 10251e3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10251e42:;
  /* 10251e42 push edi */
  push32((uint32_t)(EDI));
  /* 10251e43 push 0x10258bd8 */
  push32((uint32_t)(0x10258bd8u));
  /* 10251e48 push 0x10258aa8 */
  push32((uint32_t)(0x10258aa8u));
  /* 10251e4d call dword ptr [0x10257110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257110))), 0x10251e53u);
  /* 10251e53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10251e56:;
  /* 10251e56 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10251e58 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10251e5eu);
  /* 10251e5e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251e60 pop ecx */
  ECX = (pop32());
  /* 10251e61 jne 0x10251e9b */
  if (!C.zf) goto L_10251e9b;
  /* 10251e63 push edi */
  push32((uint32_t)(EDI));
  /* 10251e64 push 0x10258bd8 */
  push32((uint32_t)(0x10258bd8u));
  /* 10251e69 call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10251e6fu);
  /* 10251e6f pop ecx */
  ECX = (pop32());
  /* 10251e70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251e72 pop ecx */
  ECX = (pop32());
  /* 10251e73 jne 0x10251e9b */
  if (!C.zf) goto L_10251e9b;
  /* 10251e75 push 0x10258aa8 */
  push32((uint32_t)(0x10258aa8u));
  /* 10251e7a call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251e80u);
  /* 10251e80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251e82 pop ecx */
  ECX = (pop32());
  /* 10251e83 jle 0x10251e9b */
  if ((C.zf||C.sf!=C.of)) goto L_10251e9b;
  /* 10251e85 push 1 */
  push32((uint32_t)(0x1u));
  /* 10251e87 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10251e89 call esi */
  call_ind((uint32_t)(ESI), 0x10251e8bu);
  /* 10251e8b push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10251e90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10251e92 call dword ptr [0x102570e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e4))), 0x10251e98u);
  /* 10251e98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10251e9b:;
  /* 10251e9b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10251e9d call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10251ea3u);
  /* 10251ea3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251ea5 pop ecx */
  ECX = (pop32());
  /* 10251ea6 je 0x10251ee7 */
  if (C.zf) goto L_10251ee7;
  /* 10251ea8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10251eaa call dword ptr [0x10257118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257118))), 0x10251eb0u);
  /* 10251eb0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251eb2 pop ecx */
  ECX = (pop32());
  /* 10251eb3 je 0x10251ee7 */
  if (C.zf) goto L_10251ee7;
  /* 10251eb5 push 0x10258aa8 */
  push32((uint32_t)(0x10258aa8u));
  /* 10251eba call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251ec0u);
  /* 10251ec0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251ec2 pop ecx */
  ECX = (pop32());
  /* 10251ec3 jle 0x10251ee7 */
  if ((C.zf||C.sf!=C.of)) goto L_10251ee7;
  /* 10251ec5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10251ec7 call dword ptr [0x1025711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025711c))), 0x10251ecdu);
  /* 10251ecd push edi */
  push32((uint32_t)(EDI));
  /* 10251ece push 0x10258aa8 */
  push32((uint32_t)(0x10258aa8u));
  /* 10251ed3 call ebx */
  call_ind((uint32_t)(EBX), 0x10251ed5u);
  /* 10251ed5 push edi */
  push32((uint32_t)(EDI));
  /* 10251ed6 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10251edb push 0x10258bd8 */
  push32((uint32_t)(0x10258bd8u));
  /* 10251ee0 push 5 */
  push32((uint32_t)(0x5u));
  /* 10251ee2 call ebp */
  call_ind((uint32_t)(EBP), 0x10251ee4u);
  /* 10251ee4 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10251ee7:;
  /* 10251ee7 push edi */
  push32((uint32_t)(EDI));
  /* 10251ee8 push 0x10258c58 */
  push32((uint32_t)(0x10258c58u));
  /* 10251eed call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10251ef3u);
  /* 10251ef3 pop ecx */
  ECX = (pop32());
  /* 10251ef4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251ef6 pop ecx */
  ECX = (pop32());
  /* 10251ef7 jle 0x10251f22 */
  if ((C.zf||C.sf!=C.of)) goto L_10251f22;
  /* 10251ef9 push 0x10258ad0 */
  push32((uint32_t)(0x10258ad0u));
  /* 10251efe call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251f04u);
  /* 10251f04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251f06 pop ecx */
  ECX = (pop32());
  /* 10251f07 jle 0x10251f22 */
  if ((C.zf||C.sf!=C.of)) goto L_10251f22;
  /* 10251f09 push edi */
  push32((uint32_t)(EDI));
  /* 10251f0a push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10251f0c call esi */
  call_ind((uint32_t)(ESI), 0x10251f0eu);
  /* 10251f0e push edi */
  push32((uint32_t)(EDI));
  /* 10251f0f push 0x10258c58 */
  push32((uint32_t)(0x10258c58u));
  /* 10251f14 push 0x10258ad0 */
  push32((uint32_t)(0x10258ad0u));
  /* 10251f19 call dword ptr [0x10257110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257110))), 0x10251f1fu);
  /* 10251f1f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10251f22:;
  /* 10251f22 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10251f24 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10251f2au);
  /* 10251f2a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251f2c pop ecx */
  ECX = (pop32());
  /* 10251f2d jne 0x10251f67 */
  if (!C.zf) goto L_10251f67;
  /* 10251f2f push edi */
  push32((uint32_t)(EDI));
  /* 10251f30 push 0x10258c58 */
  push32((uint32_t)(0x10258c58u));
  /* 10251f35 call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10251f3bu);
  /* 10251f3b pop ecx */
  ECX = (pop32());
  /* 10251f3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251f3e pop ecx */
  ECX = (pop32());
  /* 10251f3f jne 0x10251f67 */
  if (!C.zf) goto L_10251f67;
  /* 10251f41 push 0x10258ad0 */
  push32((uint32_t)(0x10258ad0u));
  /* 10251f46 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251f4cu);
  /* 10251f4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251f4e pop ecx */
  ECX = (pop32());
  /* 10251f4f jle 0x10251f67 */
  if ((C.zf||C.sf!=C.of)) goto L_10251f67;
  /* 10251f51 push 1 */
  push32((uint32_t)(0x1u));
  /* 10251f53 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10251f55 call esi */
  call_ind((uint32_t)(ESI), 0x10251f57u);
  /* 10251f57 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10251f5c push 2 */
  push32((uint32_t)(0x2u));
  /* 10251f5e call dword ptr [0x102570e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e4))), 0x10251f64u);
  /* 10251f64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10251f67:;
  /* 10251f67 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10251f69 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10251f6fu);
  /* 10251f6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251f71 pop ecx */
  ECX = (pop32());
  /* 10251f72 je 0x10251fb0 */
  if (C.zf) goto L_10251fb0;
  /* 10251f74 push 2 */
  push32((uint32_t)(0x2u));
  /* 10251f76 call dword ptr [0x10257118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257118))), 0x10251f7cu);
  /* 10251f7c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251f7e pop ecx */
  ECX = (pop32());
  /* 10251f7f je 0x10251fb0 */
  if (C.zf) goto L_10251fb0;
  /* 10251f81 push 0x10258ad0 */
  push32((uint32_t)(0x10258ad0u));
  /* 10251f86 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251f8cu);
  /* 10251f8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251f8e pop ecx */
  ECX = (pop32());
  /* 10251f8f jle 0x10251fb0 */
  if ((C.zf||C.sf!=C.of)) goto L_10251fb0;
  /* 10251f91 push 2 */
  push32((uint32_t)(0x2u));
  /* 10251f93 call dword ptr [0x1025711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025711c))), 0x10251f99u);
  /* 10251f99 push edi */
  push32((uint32_t)(EDI));
  /* 10251f9a push 0x10258ad0 */
  push32((uint32_t)(0x10258ad0u));
  /* 10251f9f call ebx */
  call_ind((uint32_t)(EBX), 0x10251fa1u);
  /* 10251fa1 push edi */
  push32((uint32_t)(EDI));
  /* 10251fa2 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10251fa4 push 0x10258c58 */
  push32((uint32_t)(0x10258c58u));
  /* 10251fa9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10251fab call ebp */
  call_ind((uint32_t)(EBP), 0x10251fadu);
  /* 10251fad add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10251fb0:;
  /* 10251fb0 push 6 */
  push32((uint32_t)(0x6u));
  /* 10251fb2 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10251fb8u);
  /* 10251fb8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251fba pop ecx */
  ECX = (pop32());
  /* 10251fbb mov ebp, 0x10258ad8 */
  EBP = (0x10258ad8u);
  /* 10251fc0 je 0x10252086 */
  if (C.zf) goto L_10252086;
  /* 10251fc6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10251fc8 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10251fceu);
  /* 10251fce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10251fd0 pop ecx */
  ECX = (pop32());
  /* 10251fd1 je 0x10252086 */
  if (C.zf) goto L_10252086;
  /* 10251fd7 push edi */
  push32((uint32_t)(EDI));
  /* 10251fd8 push 0x10258c60 */
  push32((uint32_t)(0x10258c60u));
  /* 10251fdd call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10251fe3u);
  /* 10251fe3 pop ecx */
  ECX = (pop32());
  /* 10251fe4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251fe6 pop ecx */
  ECX = (pop32());
  /* 10251fe7 jle 0x10252086 */
  if ((C.zf||C.sf!=C.of)) goto L_10252086;
  /* 10251fed push ebp */
  push32((uint32_t)(EBP));
  /* 10251fee call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10251ff4u);
  /* 10251ff4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10251ff6 pop ecx */
  ECX = (pop32());
  /* 10251ff7 jle 0x10252086 */
  if ((C.zf||C.sf!=C.of)) goto L_10252086;
  /* 10251ffd push edi */
  push32((uint32_t)(EDI));
  /* 10251ffe push 6 */
  push32((uint32_t)(0x6u));
  /* 10252000 call esi */
  call_ind((uint32_t)(ESI), 0x10252002u);
  /* 10252002 push edi */
  push32((uint32_t)(EDI));
  /* 10252003 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10252005 call esi */
  call_ind((uint32_t)(ESI), 0x10252007u);
  /* 10252007 push 0x102585dc */
  push32((uint32_t)(0x102585dcu));
  /* 1025200c call dword ptr [0x10257120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257120))), 0x10252012u);
  /* 10252012 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10252015 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252017 je 0x1025207a */
  if (C.zf) goto L_1025207a;
  /* 10252019 push edi */
  push32((uint32_t)(EDI));
  /* 1025201a push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1025201c call esi */
  call_ind((uint32_t)(ESI), 0x1025201eu);
  /* 1025201e push 1 */
  push32((uint32_t)(0x1u));
  /* 10252020 push edi */
  push32((uint32_t)(EDI));
  /* 10252021 call dword ptr [0x102570f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f4))), 0x10252027u);
  /* 10252027 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025202a cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025202f jl 0x1025205c */
  if ((C.sf!=C.of)) goto L_1025205c;
  /* 10252031 push 0x102585d4 */
  push32((uint32_t)(0x102585d4u));
  /* 10252036 call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x1025203cu);
  /* 1025203c push 0xfffff830 */
  push32((uint32_t)(0xfffff830u));
  /* 10252041 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252043 push edi */
  push32((uint32_t)(EDI));
  /* 10252044 call dword ptr [0x102570fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570fc))), 0x1025204au);
  /* 1025204a push edi */
  push32((uint32_t)(EDI));
  /* 1025204b push ebp */
  push32((uint32_t)(EBP));
  /* 1025204c call ebx */
  call_ind((uint32_t)(EBX), 0x1025204eu);
  /* 1025204e push edi */
  push32((uint32_t)(EDI));
  /* 1025204f push 4 */
  push32((uint32_t)(0x4u));
  /* 10252051 call dword ptr [0x102570e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e8))), 0x10252057u);
  /* 10252057 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025205a jmp 0x10252086 */
  goto L_10252086;
L_1025205c:;
  /* 1025205c push 0x102585cc */
  push32((uint32_t)(0x102585ccu));
  /* 10252061 call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x10252067u);
  /* 10252067 push edi */
  push32((uint32_t)(EDI));
  /* 10252068 push ebp */
  push32((uint32_t)(EBP));
  /* 10252069 call ebx */
  call_ind((uint32_t)(EBX), 0x1025206bu);
  /* 1025206b push 5 */
  push32((uint32_t)(0x5u));
  /* 1025206d push 4 */
  push32((uint32_t)(0x4u));
  /* 1025206f call dword ptr [0x102570e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e8))), 0x10252075u);
  /* 10252075 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10252078 jmp 0x10252086 */
  goto L_10252086;
L_1025207a:;
  /* 1025207a push 0x102585c4 */
  push32((uint32_t)(0x102585c4u));
  /* 1025207f call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x10252085u);
  /* 10252085 pop ecx */
  ECX = (pop32());
L_10252086:;
  /* 10252086 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10252088 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x1025208eu);
  /* 1025208e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252090 pop ecx */
  ECX = (pop32());
  /* 10252091 jne 0x102520ad */
  if (!C.zf) goto L_102520ad;
  /* 10252093 push edi */
  push32((uint32_t)(EDI));
  /* 10252094 push 0x10258c60 */
  push32((uint32_t)(0x10258c60u));
  /* 10252099 call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x1025209fu);
  /* 1025209f pop ecx */
  ECX = (pop32());
  /* 102520a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102520a2 pop ecx */
  ECX = (pop32());
  /* 102520a3 jne 0x102520ad */
  if (!C.zf) goto L_102520ad;
  /* 102520a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102520a7 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 102520a9 call esi */
  call_ind((uint32_t)(ESI), 0x102520abu);
  /* 102520ab pop ecx */
  ECX = (pop32());
  /* 102520ac pop ecx */
  ECX = (pop32());
L_102520ad:;
  /* 102520ad push 0x34 */
  push32((uint32_t)(0x34u));
  /* 102520af call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102520b5u);
  /* 102520b5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102520b7 pop ecx */
  ECX = (pop32());
  /* 102520b8 je 0x1025217a */
  if (C.zf) goto L_1025217a;
  /* 102520be push 0x35 */
  push32((uint32_t)(0x35u));
  /* 102520c0 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102520c6u);
  /* 102520c6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102520c8 pop ecx */
  ECX = (pop32());
  /* 102520c9 je 0x1025217a */
  if (C.zf) goto L_1025217a;
  /* 102520cf push 6 */
  push32((uint32_t)(0x6u));
  /* 102520d1 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102520d7u);
  /* 102520d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102520d9 pop ecx */
  ECX = (pop32());
  /* 102520da jne 0x1025217a */
  if (!C.zf) goto L_1025217a;
  /* 102520e0 push edi */
  push32((uint32_t)(EDI));
  /* 102520e1 push 0x10258c60 */
  push32((uint32_t)(0x10258c60u));
  /* 102520e6 call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x102520ecu);
  /* 102520ec pop ecx */
  ECX = (pop32());
  /* 102520ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102520ef pop ecx */
  ECX = (pop32());
  /* 102520f0 jle 0x1025217a */
  if ((C.zf||C.sf!=C.of)) goto L_1025217a;
  /* 102520f6 push edi */
  push32((uint32_t)(EDI));
  /* 102520f7 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 102520f9 call esi */
  call_ind((uint32_t)(ESI), 0x102520fbu);
  /* 102520fb push 0x102585bc */
  push32((uint32_t)(0x102585bcu));
  /* 10252100 call dword ptr [0x10257120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257120))), 0x10252106u);
  /* 10252106 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10252109 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025210b je 0x1025216e */
  if (C.zf) goto L_1025216e;
  /* 1025210d push edi */
  push32((uint32_t)(EDI));
  /* 1025210e push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10252110 call esi */
  call_ind((uint32_t)(ESI), 0x10252112u);
  /* 10252112 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252114 push edi */
  push32((uint32_t)(EDI));
  /* 10252115 call dword ptr [0x102570f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f4))), 0x1025211bu);
  /* 1025211b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025211e cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10252123 jl 0x10252150 */
  if ((C.sf!=C.of)) goto L_10252150;
  /* 10252125 push 0x102585d4 */
  push32((uint32_t)(0x102585d4u));
  /* 1025212a call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x10252130u);
  /* 10252130 push 0xfffff830 */
  push32((uint32_t)(0xfffff830u));
  /* 10252135 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252137 push edi */
  push32((uint32_t)(EDI));
  /* 10252138 call dword ptr [0x102570fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570fc))), 0x1025213eu);
  /* 1025213e push edi */
  push32((uint32_t)(EDI));
  /* 1025213f push ebp */
  push32((uint32_t)(EBP));
  /* 10252140 call ebx */
  call_ind((uint32_t)(EBX), 0x10252142u);
  /* 10252142 push edi */
  push32((uint32_t)(EDI));
  /* 10252143 push 4 */
  push32((uint32_t)(0x4u));
  /* 10252145 call dword ptr [0x102570e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e8))), 0x1025214bu);
  /* 1025214b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025214e jmp 0x1025217a */
  goto L_1025217a;
L_10252150:;
  /* 10252150 push 0x102585cc */
  push32((uint32_t)(0x102585ccu));
  /* 10252155 call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x1025215bu);
  /* 1025215b push edi */
  push32((uint32_t)(EDI));
  /* 1025215c push ebp */
  push32((uint32_t)(EBP));
  /* 1025215d call ebx */
  call_ind((uint32_t)(EBX), 0x1025215fu);
  /* 1025215f push 5 */
  push32((uint32_t)(0x5u));
  /* 10252161 push 4 */
  push32((uint32_t)(0x4u));
  /* 10252163 call dword ptr [0x102570e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e8))), 0x10252169u);
  /* 10252169 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025216c jmp 0x1025217a */
  goto L_1025217a;
L_1025216e:;
  /* 1025216e push 0x102585c4 */
  push32((uint32_t)(0x102585c4u));
  /* 10252173 call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x10252179u);
  /* 10252179 pop ecx */
  ECX = (pop32());
L_1025217a:;
  /* 1025217a push 7 */
  push32((uint32_t)(0x7u));
  /* 1025217c call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252182u);
  /* 10252182 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252184 pop ecx */
  ECX = (pop32());
  /* 10252185 je 0x10252229 */
  if (C.zf) goto L_10252229;
  /* 1025218b mov ebp, dword ptr [0x1025710c] */
  EBP = (r32((uint32_t)(0x1025710c)));
  /* 10252191 push edi */
  push32((uint32_t)(EDI));
  /* 10252192 push 0x10258bc8 */
  push32((uint32_t)(0x10258bc8u));
  /* 10252197 call ebp */
  call_ind((uint32_t)(EBP), 0x10252199u);
  /* 10252199 pop ecx */
  ECX = (pop32());
  /* 1025219a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025219c pop ecx */
  ECX = (pop32());
  /* 1025219d jle 0x10252229 */
  if ((C.zf||C.sf!=C.of)) goto L_10252229;
  /* 102521a3 push 5 */
  push32((uint32_t)(0x5u));
  /* 102521a5 push 0x10258d40 */
  push32((uint32_t)(0x10258d40u));
  /* 102521aa call ebp */
  call_ind((uint32_t)(EBP), 0x102521acu);
  /* 102521ac pop ecx */
  ECX = (pop32());
  /* 102521ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102521af pop ecx */
  ECX = (pop32());
  /* 102521b0 jne 0x10252229 */
  if (!C.zf) goto L_10252229;
  /* 102521b2 push edi */
  push32((uint32_t)(EDI));
  /* 102521b3 push 7 */
  push32((uint32_t)(0x7u));
  /* 102521b5 call esi */
  call_ind((uint32_t)(ESI), 0x102521b7u);
  /* 102521b7 mov ebp, dword ptr [0x102571a0] */
  EBP = (r32((uint32_t)(0x102571a0)));
  /* 102521bd push edi */
  push32((uint32_t)(EDI));
  /* 102521be call ebp */
  call_ind((uint32_t)(EBP), 0x102521c0u);
  /* 102521c0 push 6 */
  push32((uint32_t)(0x6u));
  /* 102521c2 pop ecx */
  ECX = (pop32());
  /* 102521c3 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102521c5 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102521cb push ecx */
  push32((uint32_t)(ECX));
  /* 102521cc push 0x102585b4 */
  push32((uint32_t)(0x102585b4u));
  /* 102521d1 call dword ptr [0x10257100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257100))), 0x102521d7u);
  /* 102521d7 push edi */
  push32((uint32_t)(EDI));
  /* 102521d8 call ebp */
  call_ind((uint32_t)(EBP), 0x102521dau);
  /* 102521da push 6 */
  push32((uint32_t)(0x6u));
  /* 102521dc pop ecx */
  ECX = (pop32());
  /* 102521dd sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102521df imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102521e5 push ecx */
  push32((uint32_t)(ECX));
  /* 102521e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102521e8 push edi */
  push32((uint32_t)(EDI));
  /* 102521e9 call dword ptr [0x102570fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570fc))), 0x102521efu);
  /* 102521ef push 4 */
  push32((uint32_t)(0x4u));
  /* 102521f1 call dword ptr [0x10257124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257124))), 0x102521f7u);
  /* 102521f7 push edi */
  push32((uint32_t)(EDI));
  /* 102521f8 push 0x10258ab0 */
  push32((uint32_t)(0x10258ab0u));
  /* 102521fd call ebx */
  call_ind((uint32_t)(EBX), 0x102521ffu);
  /* 102521ff push 4 */
  push32((uint32_t)(0x4u));
  /* 10252201 call dword ptr [0x10257128] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257128))), 0x10252207u);
  /* 10252207 push edi */
  push32((uint32_t)(EDI));
  /* 10252208 push 0x10258bc8 */
  push32((uint32_t)(0x10258bc8u));
  /* 1025220d push 4 */
  push32((uint32_t)(0x4u));
  /* 1025220f push 0x10258c50 */
  push32((uint32_t)(0x10258c50u));
  /* 10252214 push 0x10258c38 */
  push32((uint32_t)(0x10258c38u));
  /* 10252219 push 0x10258ac8 */
  push32((uint32_t)(0x10258ac8u));
  /* 1025221e call dword ptr [0x102570c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c0))), 0x10252224u);
  /* 10252224 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10252227 jmp 0x1025222f */
  goto L_1025222f;
L_10252229:;
  /* 10252229 mov ebp, dword ptr [0x102571a0] */
  EBP = (r32((uint32_t)(0x102571a0)));
L_1025222f:;
  /* 1025222f push 8 */
  push32((uint32_t)(0x8u));
  /* 10252231 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252237u);
  /* 10252237 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252239 pop ecx */
  ECX = (pop32());
  /* 1025223a je 0x102522d8 */
  if (C.zf) goto L_102522d8;
  /* 10252240 push edi */
  push32((uint32_t)(EDI));
  /* 10252241 push 0x10258bd0 */
  push32((uint32_t)(0x10258bd0u));
  /* 10252246 call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x1025224cu);
  /* 1025224c pop ecx */
  ECX = (pop32());
  /* 1025224d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025224f pop ecx */
  ECX = (pop32());
  /* 10252250 jle 0x102522d8 */
  if ((C.zf||C.sf!=C.of)) goto L_102522d8;
  /* 10252256 push 5 */
  push32((uint32_t)(0x5u));
  /* 10252258 push 0x10258d48 */
  push32((uint32_t)(0x10258d48u));
  /* 1025225d call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10252263u);
  /* 10252263 pop ecx */
  ECX = (pop32());
  /* 10252264 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252266 pop ecx */
  ECX = (pop32());
  /* 10252267 jne 0x102522d8 */
  if (!C.zf) goto L_102522d8;
  /* 10252269 push edi */
  push32((uint32_t)(EDI));
  /* 1025226a push 8 */
  push32((uint32_t)(0x8u));
  /* 1025226c call esi */
  call_ind((uint32_t)(ESI), 0x1025226eu);
  /* 1025226e push edi */
  push32((uint32_t)(EDI));
  /* 1025226f call ebp */
  call_ind((uint32_t)(EBP), 0x10252271u);
  /* 10252271 push 9 */
  push32((uint32_t)(0x9u));
  /* 10252273 pop ecx */
  ECX = (pop32());
  /* 10252274 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10252276 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1025227c push ecx */
  push32((uint32_t)(ECX));
  /* 1025227d push 0x102585b4 */
  push32((uint32_t)(0x102585b4u));
  /* 10252282 call dword ptr [0x10257100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257100))), 0x10252288u);
  /* 10252288 push edi */
  push32((uint32_t)(EDI));
  /* 10252289 call ebp */
  call_ind((uint32_t)(EBP), 0x1025228bu);
  /* 1025228b push 9 */
  push32((uint32_t)(0x9u));
  /* 1025228d pop ecx */
  ECX = (pop32());
  /* 1025228e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10252290 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10252296 push ecx */
  push32((uint32_t)(ECX));
  /* 10252297 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252299 push edi */
  push32((uint32_t)(EDI));
  /* 1025229a call dword ptr [0x102570fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570fc))), 0x102522a0u);
  /* 102522a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 102522a2 call dword ptr [0x10257124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257124))), 0x102522a8u);
  /* 102522a8 push edi */
  push32((uint32_t)(EDI));
  /* 102522a9 push 0x10258ab8 */
  push32((uint32_t)(0x10258ab8u));
  /* 102522ae call ebx */
  call_ind((uint32_t)(EBX), 0x102522b0u);
  /* 102522b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 102522b2 call dword ptr [0x10257128] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257128))), 0x102522b8u);
  /* 102522b8 push edi */
  push32((uint32_t)(EDI));
  /* 102522b9 push 0x10258bd0 */
  push32((uint32_t)(0x10258bd0u));
  /* 102522be push 4 */
  push32((uint32_t)(0x4u));
  /* 102522c0 push 0x10258c48 */
  push32((uint32_t)(0x10258c48u));
  /* 102522c5 push 0x10258c38 */
  push32((uint32_t)(0x10258c38u));
  /* 102522ca push 0x10258ae0 */
  push32((uint32_t)(0x10258ae0u));
  /* 102522cf call dword ptr [0x102570c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c0))), 0x102522d5u);
  /* 102522d5 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102522d8:;
  /* 102522d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 102522da call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102522e0u);
  /* 102522e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102522e2 pop ecx */
  ECX = (pop32());
  /* 102522e3 je 0x1025236d */
  if (C.zf) goto L_1025236d;
  /* 102522e9 push edi */
  push32((uint32_t)(EDI));
  /* 102522ea call ebp */
  call_ind((uint32_t)(EBP), 0x102522ecu);
  /* 102522ec pop ecx */
  ECX = (pop32());
  /* 102522ed push 7 */
  push32((uint32_t)(0x7u));
  /* 102522ef pop ebp */
  EBP = (pop32());
  /* 102522f0 sub ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; EBP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102522f2 imul ebp, ebp, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EBP)*(int64_t)(int32_t)(0x1388u); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102522f8 call dword ptr [0x1025712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025712c))), 0x102522feu);
  /* 102522fe cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10252300 jle 0x1025236d */
  if ((C.zf||C.sf!=C.of)) goto L_1025236d;
  /* 10252302 push edi */
  push32((uint32_t)(EDI));
  /* 10252303 push 9 */
  push32((uint32_t)(0x9u));
  /* 10252305 call esi */
  call_ind((uint32_t)(ESI), 0x10252307u);
  /* 10252307 push 2 */
  push32((uint32_t)(0x2u));
  /* 10252309 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x1025230fu);
  /* 1025230f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10252312 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252314 jne 0x1025231f */
  if (!C.zf) goto L_1025231f;
  /* 10252316 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252318 call dword ptr [0x10257104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257104))), 0x1025231eu);
  /* 1025231e pop ecx */
  ECX = (pop32());
L_1025231f:;
  /* 1025231f mov ebp, dword ptr [0x102570c8] */
  EBP = (r32((uint32_t)(0x102570c8)));
  /* 10252325 push 0x102585ac */
  push32((uint32_t)(0x102585acu));
  /* 1025232a call ebp */
  call_ind((uint32_t)(EBP), 0x1025232cu);
  /* 1025232c push 8 */
  push32((uint32_t)(0x8u));
  /* 1025232e push 3 */
  push32((uint32_t)(0x3u));
  /* 10252330 call dword ptr [0x10257190] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257190))), 0x10252336u);
  /* 10252336 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10252338 call dword ptr [0x102570ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570ec))), 0x1025233eu);
  /* 1025233e push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10252340 call dword ptr [0x10257130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257130))), 0x10252346u);
  /* 10252346 push edi */
  push32((uint32_t)(EDI));
  /* 10252347 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x1025234du);
  /* 1025234d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10252350 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252352 jne 0x1025236d */
  if (!C.zf) goto L_1025236d;
  /* 10252354 push 0x102585a4 */
  push32((uint32_t)(0x102585a4u));
  /* 10252359 call ebp */
  call_ind((uint32_t)(EBP), 0x1025235bu);
  /* 1025235b push 7 */
  push32((uint32_t)(0x7u));
  /* 1025235d push 1 */
  push32((uint32_t)(0x1u));
  /* 1025235f push 0x10258d20 */
  push32((uint32_t)(0x10258d20u));
  /* 10252364 call dword ptr [0x102570b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570b8))), 0x1025236au);
  /* 1025236a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1025236d:;
  /* 1025236d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1025236f call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252375u);
  /* 10252375 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252377 pop ecx */
  ECX = (pop32());
  /* 10252378 je 0x10252b18 */
  if (C.zf) goto L_10252b18;
  /* 1025237e push 9 */
  push32((uint32_t)(0x9u));
  /* 10252380 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252386u);
  /* 10252386 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252388 pop ecx */
  ECX = (pop32());
  /* 10252389 mov ebp, 0x10258a48 */
  EBP = (0x10258a48u);
  /* 1025238e jne 0x102523d8 */
  if (!C.zf) goto L_102523d8;
  /* 10252390 push 0x10258b38 */
  push32((uint32_t)(0x10258b38u));
  /* 10252395 call dword ptr [0x10257134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257134))), 0x1025239bu);
  /* 1025239b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025239d pop ecx */
  ECX = (pop32());
  /* 1025239e je 0x102523d8 */
  if (C.zf) goto L_102523d8;
  /* 102523a0 push 0x10258b38 */
  push32((uint32_t)(0x10258b38u));
  /* 102523a5 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x102523abu);
  /* 102523ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102523ad pop ecx */
  ECX = (pop32());
  /* 102523ae jle 0x102523d8 */
  if ((C.zf||C.sf!=C.of)) goto L_102523d8;
  /* 102523b0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 102523b2 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102523b8u);
  /* 102523b8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102523ba pop ecx */
  ECX = (pop32());
  /* 102523bb je 0x102523c4 */
  if (C.zf) goto L_102523c4;
  /* 102523bd push 0x10258a40 */
  push32((uint32_t)(0x10258a40u));
  /* 102523c2 jmp 0x102523c5 */
  goto L_102523c5;
L_102523c4:;
  /* 102523c4 push ebp */
  push32((uint32_t)(EBP));
L_102523c5:;
  /* 102523c5 push 0x10258998 */
  push32((uint32_t)(0x10258998u));
  /* 102523ca push 0x10258b38 */
  push32((uint32_t)(0x10258b38u));
  /* 102523cf call dword ptr [0x102570e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e0))), 0x102523d5u);
  /* 102523d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102523d8:;
  /* 102523d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 102523da call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102523e0u);
  /* 102523e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102523e2 pop ecx */
  ECX = (pop32());
  /* 102523e3 jne 0x1025242d */
  if (!C.zf) goto L_1025242d;
  /* 102523e5 push 0x10258b48 */
  push32((uint32_t)(0x10258b48u));
  /* 102523ea call dword ptr [0x10257134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257134))), 0x102523f0u);
  /* 102523f0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102523f2 pop ecx */
  ECX = (pop32());
  /* 102523f3 je 0x1025242d */
  if (C.zf) goto L_1025242d;
  /* 102523f5 push 0x10258b48 */
  push32((uint32_t)(0x10258b48u));
  /* 102523fa call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252400u);
  /* 10252400 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252402 pop ecx */
  ECX = (pop32());
  /* 10252403 jle 0x1025242d */
  if ((C.zf||C.sf!=C.of)) goto L_1025242d;
  /* 10252405 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10252407 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x1025240du);
  /* 1025240d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025240f pop ecx */
  ECX = (pop32());
  /* 10252410 je 0x10252419 */
  if (C.zf) goto L_10252419;
  /* 10252412 push 0x10258a40 */
  push32((uint32_t)(0x10258a40u));
  /* 10252417 jmp 0x1025241a */
  goto L_1025241a;
L_10252419:;
  /* 10252419 push ebp */
  push32((uint32_t)(EBP));
L_1025241a:;
  /* 1025241a push 0x10258de8 */
  push32((uint32_t)(0x10258de8u));
  /* 1025241f push 0x10258b48 */
  push32((uint32_t)(0x10258b48u));
  /* 10252424 call dword ptr [0x102570e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e0))), 0x1025242au);
  /* 1025242a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1025242d:;
  /* 1025242d push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1025242f call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252435u);
  /* 10252435 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252437 pop ecx */
  ECX = (pop32());
  /* 10252438 je 0x10252479 */
  if (C.zf) goto L_10252479;
  /* 1025243a push edi */
  push32((uint32_t)(EDI));
  /* 1025243b call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10252441u);
  /* 10252441 mov ebp, eax */
  EBP = (EAX);
  /* 10252443 mov dword ptr [esp], 0x10258a40 */
  w32((uint32_t)(ESP), (0x10258a40u));
  /* 1025244a inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1025244b inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1025244c imul ebp, ebp, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(EBP)*(int64_t)(int32_t)(0x32u); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1025244f call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252455u);
  /* 10252455 cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10252457 pop ecx */
  ECX = (pop32());
  /* 10252458 jle 0x10252474 */
  if ((C.zf||C.sf!=C.of)) goto L_10252474;
  /* 1025245a push edi */
  push32((uint32_t)(EDI));
  /* 1025245b push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1025245d call esi */
  call_ind((uint32_t)(ESI), 0x1025245fu);
  /* 1025245f push edi */
  push32((uint32_t)(EDI));
  /* 10252460 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10252462 call esi */
  call_ind((uint32_t)(ESI), 0x10252464u);
  /* 10252464 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10252469 push 8 */
  push32((uint32_t)(0x8u));
  /* 1025246b call dword ptr [0x102570e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e4))), 0x10252471u);
  /* 10252471 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10252474:;
  /* 10252474 mov ebp, 0x10258a48 */
  EBP = (0x10258a48u);
L_10252479:;
  /* 10252479 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1025247b call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252481u);
  /* 10252481 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252483 pop ecx */
  ECX = (pop32());
  /* 10252484 jne 0x102524c9 */
  if (!C.zf) goto L_102524c9;
  /* 10252486 push edi */
  push32((uint32_t)(EDI));
  /* 10252487 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x1025248du);
  /* 1025248d mov edx, eax */
  EDX = (EAX);
  /* 1025248f push ebp */
  push32((uint32_t)(EBP));
  /* 10252490 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10252491 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10252492 imul edx, edx, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x32u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10252495 mov dword ptr [esp + 0x18], edx */
  w32((uint32_t)(ESP + 0x18), (EDX));
  /* 10252499 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x1025249fu);
  /* 1025249f pop ecx */
  ECX = (pop32());
  /* 102524a0 pop ecx */
  ECX = (pop32());
  /* 102524a1 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 102524a5 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102524a7 jle 0x102524c4 */
  if ((C.zf||C.sf!=C.of)) goto L_102524c4;
  /* 102524a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 102524ab push 0x37 */
  push32((uint32_t)(0x37u));
  /* 102524ad call esi */
  call_ind((uint32_t)(ESI), 0x102524afu);
  /* 102524af push edi */
  push32((uint32_t)(EDI));
  /* 102524b0 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 102524b2 call esi */
  call_ind((uint32_t)(ESI), 0x102524b4u);
  /* 102524b4 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 102524b9 push 8 */
  push32((uint32_t)(0x8u));
  /* 102524bb call dword ptr [0x102570e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e4))), 0x102524c1u);
  /* 102524c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102524c4:;
  /* 102524c4 mov ebp, 0x10258a48 */
  EBP = (0x10258a48u);
L_102524c9:;
  /* 102524c9 push 8 */
  push32((uint32_t)(0x8u));
  /* 102524cb call dword ptr [0x10257138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257138))), 0x102524d1u);
  /* 102524d1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102524d3 pop ecx */
  ECX = (pop32());
  /* 102524d4 je 0x10252510 */
  if (C.zf) goto L_10252510;
  /* 102524d6 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 102524d8 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102524deu);
  /* 102524de pop ecx */
  ECX = (pop32());
  /* 102524df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102524e1 push edi */
  push32((uint32_t)(EDI));
  /* 102524e2 je 0x102524e7 */
  if (C.zf) goto L_102524e7;
  /* 102524e4 push ebp */
  push32((uint32_t)(EBP));
  /* 102524e5 jmp 0x102524ec */
  goto L_102524ec;
L_102524e7:;
  /* 102524e7 push 0x10258a40 */
  push32((uint32_t)(0x10258a40u));
L_102524ec:;
  /* 102524ec call ebx */
  call_ind((uint32_t)(EBX), 0x102524eeu);
  /* 102524ee push edi */
  push32((uint32_t)(EDI));
  /* 102524ef push edi */
  push32((uint32_t)(EDI));
  /* 102524f0 push 0x10258c70 */
  push32((uint32_t)(0x10258c70u));
  /* 102524f5 push 3 */
  push32((uint32_t)(0x3u));
  /* 102524f7 call dword ptr [0x10257114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257114))), 0x102524fdu);
  /* 102524fd push 2 */
  push32((uint32_t)(0x2u));
  /* 102524ff push edi */
  push32((uint32_t)(EDI));
  /* 10252500 push 0x10258bb0 */
  push32((uint32_t)(0x10258bb0u));
  /* 10252505 push 3 */
  push32((uint32_t)(0x3u));
  /* 10252507 call dword ptr [0x10257114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257114))), 0x1025250du);
  /* 1025250d add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10252510:;
  /* 10252510 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10252512 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252518u);
  /* 10252518 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025251a pop ecx */
  ECX = (pop32());
  /* 1025251b jne 0x10252545 */
  if (!C.zf) goto L_10252545;
  /* 1025251d push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1025251f call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252525u);
  /* 10252525 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252527 pop ecx */
  ECX = (pop32());
  /* 10252528 je 0x10252545 */
  if (C.zf) goto L_10252545;
  /* 1025252a push ebp */
  push32((uint32_t)(EBP));
  /* 1025252b push 0x10258cf0 */
  push32((uint32_t)(0x10258cf0u));
  /* 10252530 call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10252536u);
  /* 10252536 pop ecx */
  ECX = (pop32());
  /* 10252537 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025253a pop ecx */
  ECX = (pop32());
  /* 1025253b jge 0x10252545 */
  if ((C.sf==C.of)) goto L_10252545;
  /* 1025253d push 1 */
  push32((uint32_t)(0x1u));
  /* 1025253f push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10252541 call esi */
  call_ind((uint32_t)(ESI), 0x10252543u);
  /* 10252543 pop ecx */
  ECX = (pop32());
  /* 10252544 pop ecx */
  ECX = (pop32());
L_10252545:;
  /* 10252545 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10252547 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x1025254du);
  /* 1025254d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025254f pop ecx */
  ECX = (pop32());
  /* 10252550 jne 0x1025257e */
  if (!C.zf) goto L_1025257e;
  /* 10252552 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10252554 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x1025255au);
  /* 1025255a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025255c pop ecx */
  ECX = (pop32());
  /* 1025255d jne 0x1025257e */
  if (!C.zf) goto L_1025257e;
  /* 1025255f push 0x10258a40 */
  push32((uint32_t)(0x10258a40u));
  /* 10252564 push 0x10258cf0 */
  push32((uint32_t)(0x10258cf0u));
  /* 10252569 call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x1025256fu);
  /* 1025256f pop ecx */
  ECX = (pop32());
  /* 10252570 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10252573 pop ecx */
  ECX = (pop32());
  /* 10252574 jge 0x1025257e */
  if ((C.sf==C.of)) goto L_1025257e;
  /* 10252576 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252578 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1025257a call esi */
  call_ind((uint32_t)(ESI), 0x1025257cu);
  /* 1025257c pop ecx */
  ECX = (pop32());
  /* 1025257d pop ecx */
  ECX = (pop32());
L_1025257e:;
  /* 1025257e push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10252580 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252586u);
  /* 10252586 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252588 pop ecx */
  ECX = (pop32());
  /* 10252589 je 0x102525f2 */
  if (C.zf) goto L_102525f2;
  /* 1025258b push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1025258d call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252593u);
  /* 10252593 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252595 pop ecx */
  ECX = (pop32());
  /* 10252596 je 0x102525f2 */
  if (C.zf) goto L_102525f2;
  /* 10252598 push ebp */
  push32((uint32_t)(EBP));
  /* 10252599 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x1025259fu);
  /* 1025259f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102525a1 pop ecx */
  ECX = (pop32());
  /* 102525a2 jle 0x102525f2 */
  if ((C.zf||C.sf!=C.of)) goto L_102525f2;
  /* 102525a4 push ebp */
  push32((uint32_t)(EBP));
  /* 102525a5 push 0x10258bb0 */
  push32((uint32_t)(0x10258bb0u));
  /* 102525aa call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x102525b0u);
  /* 102525b0 mov edx, eax */
  EDX = (EAX);
  /* 102525b2 push ebp */
  push32((uint32_t)(EBP));
  /* 102525b3 mov dword ptr [esp + 0x1c], edx */
  w32((uint32_t)(ESP + 0x1c), (EDX));
  /* 102525b7 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x102525bdu);
  /* 102525bd mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 102525c1 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102525c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102525c7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102525c9 jg 0x102525ed */
  if ((!C.zf&&C.sf==C.of)) goto L_102525ed;
  /* 102525cb push edi */
  push32((uint32_t)(EDI));
  /* 102525cc push 0x39 */
  push32((uint32_t)(0x39u));
  /* 102525ce call esi */
  call_ind((uint32_t)(ESI), 0x102525d0u);
  /* 102525d0 mov ebp, 0x10258a48 */
  EBP = (0x10258a48u);
  /* 102525d5 push edi */
  push32((uint32_t)(EDI));
  /* 102525d6 push ebp */
  push32((uint32_t)(EBP));
  /* 102525d7 call ebx */
  call_ind((uint32_t)(EBX), 0x102525d9u);
  /* 102525d9 push edi */
  push32((uint32_t)(EDI));
  /* 102525da push edi */
  push32((uint32_t)(EDI));
  /* 102525db push 0x10258b90 */
  push32((uint32_t)(0x10258b90u));
  /* 102525e0 push 3 */
  push32((uint32_t)(0x3u));
  /* 102525e2 call dword ptr [0x10257114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257114))), 0x102525e8u);
  /* 102525e8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102525eb jmp 0x102525f2 */
  goto L_102525f2;
L_102525ed:;
  /* 102525ed mov ebp, 0x10258a48 */
  EBP = (0x10258a48u);
L_102525f2:;
  /* 102525f2 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 102525f4 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102525fau);
  /* 102525fa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102525fc pop ecx */
  ECX = (pop32());
  /* 102525fd je 0x1025262e */
  if (C.zf) goto L_1025262e;
  /* 102525ff push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10252601 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252607u);
  /* 10252607 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252609 pop ecx */
  ECX = (pop32());
  /* 1025260a jne 0x1025262e */
  if (!C.zf) goto L_1025262e;
  /* 1025260c push ebp */
  push32((uint32_t)(EBP));
  /* 1025260d push 0x10258b90 */
  push32((uint32_t)(0x10258b90u));
  /* 10252612 call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10252618u);
  /* 10252618 pop ecx */
  ECX = (pop32());
  /* 10252619 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025261b pop ecx */
  ECX = (pop32());
  /* 1025261c jle 0x1025262e */
  if ((C.zf||C.sf!=C.of)) goto L_1025262e;
  /* 1025261e push edi */
  push32((uint32_t)(EDI));
  /* 1025261f push 0x10258b90 */
  push32((uint32_t)(0x10258b90u));
  /* 10252624 push ebp */
  push32((uint32_t)(EBP));
  /* 10252625 call dword ptr [0x10257110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257110))), 0x1025262bu);
  /* 1025262b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1025262e:;
  /* 1025262e push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10252630 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252636u);
  /* 10252636 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252638 pop ecx */
  ECX = (pop32());
  /* 10252639 jne 0x1025265c */
  if (!C.zf) goto L_1025265c;
  /* 1025263b push ebp */
  push32((uint32_t)(EBP));
  /* 1025263c call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252642u);
  /* 10252642 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252644 pop ecx */
  ECX = (pop32());
  /* 10252645 je 0x10252654 */
  if (C.zf) goto L_10252654;
  /* 10252647 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10252649 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x1025264fu);
  /* 1025264f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252651 pop ecx */
  ECX = (pop32());
  /* 10252652 jne 0x1025265c */
  if (!C.zf) goto L_1025265c;
L_10252654:;
  /* 10252654 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252656 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10252658 call esi */
  call_ind((uint32_t)(ESI), 0x1025265au);
  /* 1025265a pop ecx */
  ECX = (pop32());
  /* 1025265b pop ecx */
  ECX = (pop32());
L_1025265c:;
  /* 1025265c mov ebp, dword ptr [0x102570d8] */
  EBP = (r32((uint32_t)(0x102570d8)));
  /* 10252662 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10252664 call ebp */
  call_ind((uint32_t)(EBP), 0x10252666u);
  /* 10252666 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252668 pop ecx */
  ECX = (pop32());
  /* 10252669 je 0x102526c9 */
  if (C.zf) goto L_102526c9;
  /* 1025266b push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1025266d call ebp */
  call_ind((uint32_t)(EBP), 0x1025266fu);
  /* 1025266f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252671 pop ecx */
  ECX = (pop32());
  /* 10252672 jne 0x102526c9 */
  if (!C.zf) goto L_102526c9;
  /* 10252674 mov ebp, 0x10258a40 */
  EBP = (0x10258a40u);
  /* 10252679 push ebp */
  push32((uint32_t)(EBP));
  /* 1025267a call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252680u);
  /* 10252680 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252682 pop ecx */
  ECX = (pop32());
  /* 10252683 jle 0x102526ce */
  if ((C.zf||C.sf!=C.of)) goto L_102526ce;
  /* 10252685 push ebp */
  push32((uint32_t)(EBP));
  /* 10252686 push 0x10258bb0 */
  push32((uint32_t)(0x10258bb0u));
  /* 1025268b call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10252691u);
  /* 10252691 mov edx, eax */
  EDX = (EAX);
  /* 10252693 push ebp */
  push32((uint32_t)(EBP));
  /* 10252694 mov dword ptr [esp + 0x1c], edx */
  w32((uint32_t)(ESP + 0x1c), (EDX));
  /* 10252698 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x1025269eu);
  /* 1025269e mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 102526a2 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102526a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102526a8 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102526aa jg 0x102526c9 */
  if ((!C.zf&&C.sf==C.of)) goto L_102526c9;
  /* 102526ac push edi */
  push32((uint32_t)(EDI));
  /* 102526ad push 0x3a */
  push32((uint32_t)(0x3au));
  /* 102526af call esi */
  call_ind((uint32_t)(ESI), 0x102526b1u);
  /* 102526b1 push edi */
  push32((uint32_t)(EDI));
  /* 102526b2 push ebp */
  push32((uint32_t)(EBP));
  /* 102526b3 call ebx */
  call_ind((uint32_t)(EBX), 0x102526b5u);
  /* 102526b5 push edi */
  push32((uint32_t)(EDI));
  /* 102526b6 push edi */
  push32((uint32_t)(EDI));
  /* 102526b7 push 0x10258b90 */
  push32((uint32_t)(0x10258b90u));
  /* 102526bc push 3 */
  push32((uint32_t)(0x3u));
  /* 102526be call dword ptr [0x10257114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257114))), 0x102526c4u);
  /* 102526c4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102526c7 jmp 0x102526ce */
  goto L_102526ce;
L_102526c9:;
  /* 102526c9 mov ebp, 0x10258a40 */
  EBP = (0x10258a40u);
L_102526ce:;
  /* 102526ce push 0x37 */
  push32((uint32_t)(0x37u));
  /* 102526d0 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102526d6u);
  /* 102526d6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102526d8 pop ecx */
  ECX = (pop32());
  /* 102526d9 jne 0x1025270a */
  if (!C.zf) goto L_1025270a;
  /* 102526db push 0x3a */
  push32((uint32_t)(0x3au));
  /* 102526dd call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102526e3u);
  /* 102526e3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102526e5 pop ecx */
  ECX = (pop32());
  /* 102526e6 jne 0x1025270a */
  if (!C.zf) goto L_1025270a;
  /* 102526e8 push ebp */
  push32((uint32_t)(EBP));
  /* 102526e9 push 0x10258b90 */
  push32((uint32_t)(0x10258b90u));
  /* 102526ee call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x102526f4u);
  /* 102526f4 pop ecx */
  ECX = (pop32());
  /* 102526f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102526f7 pop ecx */
  ECX = (pop32());
  /* 102526f8 jle 0x1025270a */
  if ((C.zf||C.sf!=C.of)) goto L_1025270a;
  /* 102526fa push edi */
  push32((uint32_t)(EDI));
  /* 102526fb push 0x10258b90 */
  push32((uint32_t)(0x10258b90u));
  /* 10252700 push ebp */
  push32((uint32_t)(EBP));
  /* 10252701 call dword ptr [0x10257110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257110))), 0x10252707u);
  /* 10252707 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1025270a:;
  /* 1025270a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1025270c call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252712u);
  /* 10252712 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252714 pop ecx */
  ECX = (pop32());
  /* 10252715 jne 0x10252738 */
  if (!C.zf) goto L_10252738;
  /* 10252717 push ebp */
  push32((uint32_t)(EBP));
  /* 10252718 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x1025271eu);
  /* 1025271e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252720 pop ecx */
  ECX = (pop32());
  /* 10252721 je 0x10252730 */
  if (C.zf) goto L_10252730;
  /* 10252723 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10252725 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x1025272bu);
  /* 1025272b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025272d pop ecx */
  ECX = (pop32());
  /* 1025272e je 0x10252738 */
  if (C.zf) goto L_10252738;
L_10252730:;
  /* 10252730 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252732 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10252734 call esi */
  call_ind((uint32_t)(ESI), 0x10252736u);
  /* 10252736 pop ecx */
  ECX = (pop32());
  /* 10252737 pop ecx */
  ECX = (pop32());
L_10252738:;
  /* 10252738 push 9 */
  push32((uint32_t)(0x9u));
  /* 1025273a call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252740u);
  /* 10252740 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252742 pop ecx */
  ECX = (pop32());
  /* 10252743 jne 0x1025293d */
  if (!C.zf) goto L_1025293d;
  /* 10252749 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1025274b call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252751u);
  /* 10252751 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252753 pop ecx */
  ECX = (pop32());
  /* 10252754 mov ebp, 0x10258a50 */
  EBP = (0x10258a50u);
  /* 10252759 je 0x102527b9 */
  if (C.zf) goto L_102527b9;
  /* 1025275b push edi */
  push32((uint32_t)(EDI));
  /* 1025275c call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10252762u);
  /* 10252762 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10252763 push ebp */
  push32((uint32_t)(EBP));
  /* 10252764 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10252765 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10252768 mov dword ptr [esp + 0x18], edx */
  w32((uint32_t)(ESP + 0x18), (EDX));
  /* 1025276c call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252772u);
  /* 10252772 pop ecx */
  ECX = (pop32());
  /* 10252773 pop ecx */
  ECX = (pop32());
  /* 10252774 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10252778 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025277a jge 0x102527b4 */
  if ((C.sf==C.of)) goto L_102527b4;
  /* 1025277c mov ebp, 0x10258b58 */
  EBP = (0x10258b58u);
  /* 10252781 push ebp */
  push32((uint32_t)(EBP));
  /* 10252782 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252788u);
  /* 10252788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025278a pop ecx */
  ECX = (pop32());
  /* 1025278b jle 0x102527b4 */
  if ((C.zf||C.sf!=C.of)) goto L_102527b4;
  /* 1025278d push ebp */
  push32((uint32_t)(EBP));
  /* 1025278e call dword ptr [0x10257134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257134))), 0x10252794u);
  /* 10252794 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252796 pop ecx */
  ECX = (pop32());
  /* 10252797 mov ebp, 0x10258a50 */
  EBP = (0x10258a50u);
  /* 1025279c je 0x102527b9 */
  if (C.zf) goto L_102527b9;
  /* 1025279e push ebp */
  push32((uint32_t)(EBP));
  /* 1025279f push 0x10258d60 */
  push32((uint32_t)(0x10258d60u));
  /* 102527a4 push 0x10258b58 */
  push32((uint32_t)(0x10258b58u));
  /* 102527a9 call dword ptr [0x102570e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e0))), 0x102527afu);
  /* 102527af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102527b2 jmp 0x102527b9 */
  goto L_102527b9;
L_102527b4:;
  /* 102527b4 mov ebp, 0x10258a50 */
  EBP = (0x10258a50u);
L_102527b9:;
  /* 102527b9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 102527bb call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102527c1u);
  /* 102527c1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102527c3 pop ecx */
  ECX = (pop32());
  /* 102527c4 je 0x10252801 */
  if (C.zf) goto L_10252801;
  /* 102527c6 push edi */
  push32((uint32_t)(EDI));
  /* 102527c7 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x102527cdu);
  /* 102527cd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102527ce push ebp */
  push32((uint32_t)(EBP));
  /* 102527cf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102527d0 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 102527d3 mov dword ptr [esp + 0x18], edx */
  w32((uint32_t)(ESP + 0x18), (EDX));
  /* 102527d7 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x102527ddu);
  /* 102527dd pop ecx */
  ECX = (pop32());
  /* 102527de pop ecx */
  ECX = (pop32());
  /* 102527df mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 102527e3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102527e5 jl 0x102527fc */
  if ((C.sf!=C.of)) goto L_102527fc;
  /* 102527e7 push edi */
  push32((uint32_t)(EDI));
  /* 102527e8 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 102527ea call esi */
  call_ind((uint32_t)(ESI), 0x102527ecu);
  /* 102527ec push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 102527f1 push 9 */
  push32((uint32_t)(0x9u));
  /* 102527f3 call dword ptr [0x102570e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e4))), 0x102527f9u);
  /* 102527f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102527fc:;
  /* 102527fc mov ebp, 0x10258a50 */
  EBP = (0x10258a50u);
L_10252801:;
  /* 10252801 push 9 */
  push32((uint32_t)(0x9u));
  /* 10252803 call dword ptr [0x10257138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257138))), 0x10252809u);
  /* 10252809 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025280b pop ecx */
  ECX = (pop32());
  /* 1025280c je 0x1025283d */
  if (C.zf) goto L_1025283d;
  /* 1025280e push edi */
  push32((uint32_t)(EDI));
  /* 1025280f push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10252811 call esi */
  call_ind((uint32_t)(ESI), 0x10252813u);
  /* 10252813 push edi */
  push32((uint32_t)(EDI));
  /* 10252814 push ebp */
  push32((uint32_t)(EBP));
  /* 10252815 call ebx */
  call_ind((uint32_t)(EBX), 0x10252817u);
  /* 10252817 push edi */
  push32((uint32_t)(EDI));
  /* 10252818 push edi */
  push32((uint32_t)(EDI));
  /* 10252819 push 0x10258c70 */
  push32((uint32_t)(0x10258c70u));
  /* 1025281e push 3 */
  push32((uint32_t)(0x3u));
  /* 10252820 call dword ptr [0x10257114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257114))), 0x10252826u);
  /* 10252826 push 2 */
  push32((uint32_t)(0x2u));
  /* 10252828 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 1025282d push 0x10258bb8 */
  push32((uint32_t)(0x10258bb8u));
  /* 10252832 push 3 */
  push32((uint32_t)(0x3u));
  /* 10252834 call dword ptr [0x10257114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257114))), 0x1025283au);
  /* 1025283a add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1025283d:;
  /* 1025283d push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1025283f call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252845u);
  /* 10252845 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252847 pop ecx */
  ECX = (pop32());
  /* 10252848 jne 0x10252865 */
  if (!C.zf) goto L_10252865;
  /* 1025284a push ebp */
  push32((uint32_t)(EBP));
  /* 1025284b push 0x10258cf0 */
  push32((uint32_t)(0x10258cf0u));
  /* 10252850 call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10252856u);
  /* 10252856 pop ecx */
  ECX = (pop32());
  /* 10252857 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025285a pop ecx */
  ECX = (pop32());
  /* 1025285b jge 0x10252865 */
  if ((C.sf==C.of)) goto L_10252865;
  /* 1025285d push 1 */
  push32((uint32_t)(0x1u));
  /* 1025285f push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10252861 call esi */
  call_ind((uint32_t)(ESI), 0x10252863u);
  /* 10252863 pop ecx */
  ECX = (pop32());
  /* 10252864 pop ecx */
  ECX = (pop32());
L_10252865:;
  /* 10252865 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10252867 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x1025286du);
  /* 1025286d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025286f pop ecx */
  ECX = (pop32());
  /* 10252870 jne 0x102528d9 */
  if (!C.zf) goto L_102528d9;
  /* 10252872 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10252874 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x1025287au);
  /* 1025287a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025287c pop ecx */
  ECX = (pop32());
  /* 1025287d je 0x102528d9 */
  if (C.zf) goto L_102528d9;
  /* 1025287f push ebp */
  push32((uint32_t)(EBP));
  /* 10252880 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252886u);
  /* 10252886 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252888 pop ecx */
  ECX = (pop32());
  /* 10252889 jle 0x102528d9 */
  if ((C.zf||C.sf!=C.of)) goto L_102528d9;
  /* 1025288b push ebp */
  push32((uint32_t)(EBP));
  /* 1025288c push 0x10258bb8 */
  push32((uint32_t)(0x10258bb8u));
  /* 10252891 call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10252897u);
  /* 10252897 mov edx, eax */
  EDX = (EAX);
  /* 10252899 push ebp */
  push32((uint32_t)(EBP));
  /* 1025289a mov dword ptr [esp + 0x1c], edx */
  w32((uint32_t)(ESP + 0x1c), (EDX));
  /* 1025289e call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x102528a4u);
  /* 102528a4 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 102528a8 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102528ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102528ae cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102528b0 jg 0x102528d4 */
  if ((!C.zf&&C.sf==C.of)) goto L_102528d4;
  /* 102528b2 push edi */
  push32((uint32_t)(EDI));
  /* 102528b3 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 102528b5 call esi */
  call_ind((uint32_t)(ESI), 0x102528b7u);
  /* 102528b7 mov ebp, 0x10258a50 */
  EBP = (0x10258a50u);
  /* 102528bc push edi */
  push32((uint32_t)(EDI));
  /* 102528bd push ebp */
  push32((uint32_t)(EBP));
  /* 102528be call ebx */
  call_ind((uint32_t)(EBX), 0x102528c0u);
  /* 102528c0 push edi */
  push32((uint32_t)(EDI));
  /* 102528c1 push edi */
  push32((uint32_t)(EDI));
  /* 102528c2 push 0x10258cd8 */
  push32((uint32_t)(0x10258cd8u));
  /* 102528c7 push 3 */
  push32((uint32_t)(0x3u));
  /* 102528c9 call dword ptr [0x10257114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257114))), 0x102528cfu);
  /* 102528cf add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102528d2 jmp 0x102528d9 */
  goto L_102528d9;
L_102528d4:;
  /* 102528d4 mov ebp, 0x10258a50 */
  EBP = (0x10258a50u);
L_102528d9:;
  /* 102528d9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 102528db call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102528e1u);
  /* 102528e1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102528e3 pop ecx */
  ECX = (pop32());
  /* 102528e4 jne 0x10252915 */
  if (!C.zf) goto L_10252915;
  /* 102528e6 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 102528e8 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102528eeu);
  /* 102528ee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102528f0 pop ecx */
  ECX = (pop32());
  /* 102528f1 jne 0x10252915 */
  if (!C.zf) goto L_10252915;
  /* 102528f3 push ebp */
  push32((uint32_t)(EBP));
  /* 102528f4 push 0x10258cd8 */
  push32((uint32_t)(0x10258cd8u));
  /* 102528f9 call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x102528ffu);
  /* 102528ff pop ecx */
  ECX = (pop32());
  /* 10252900 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252902 pop ecx */
  ECX = (pop32());
  /* 10252903 jle 0x10252915 */
  if ((C.zf||C.sf!=C.of)) goto L_10252915;
  /* 10252905 push edi */
  push32((uint32_t)(EDI));
  /* 10252906 push 0x10258cd8 */
  push32((uint32_t)(0x10258cd8u));
  /* 1025290b push ebp */
  push32((uint32_t)(EBP));
  /* 1025290c call dword ptr [0x10257110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257110))), 0x10252912u);
  /* 10252912 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10252915:;
  /* 10252915 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10252917 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x1025291du);
  /* 1025291d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025291f pop ecx */
  ECX = (pop32());
  /* 10252920 jne 0x1025293d */
  if (!C.zf) goto L_1025293d;
  /* 10252922 push ebp */
  push32((uint32_t)(EBP));
  /* 10252923 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252929u);
  /* 10252929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025292b pop ecx */
  ECX = (pop32());
  /* 1025292c jne 0x1025293d */
  if (!C.zf) goto L_1025293d;
  /* 1025292e push 1 */
  push32((uint32_t)(0x1u));
  /* 10252930 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10252932 call esi */
  call_ind((uint32_t)(ESI), 0x10252934u);
  /* 10252934 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252936 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10252938 call esi */
  call_ind((uint32_t)(ESI), 0x1025293au);
  /* 1025293a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1025293d:;
  /* 1025293d push 9 */
  push32((uint32_t)(0x9u));
  /* 1025293f call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252945u);
  /* 10252945 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252947 pop ecx */
  ECX = (pop32());
  /* 10252948 jne 0x1025297f */
  if (!C.zf) goto L_1025297f;
  /* 1025294a push edi */
  push32((uint32_t)(EDI));
  /* 1025294b push 0x10258c70 */
  push32((uint32_t)(0x10258c70u));
  /* 10252950 call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10252956u);
  /* 10252956 pop ecx */
  ECX = (pop32());
  /* 10252957 mov ebp, 0x10258af0 */
  EBP = (0x10258af0u);
  /* 1025295c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025295e pop ecx */
  ECX = (pop32());
  /* 1025295f jle 0x10252984 */
  if ((C.zf||C.sf!=C.of)) goto L_10252984;
  /* 10252961 push ebp */
  push32((uint32_t)(EBP));
  /* 10252962 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252968u);
  /* 10252968 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025296a pop ecx */
  ECX = (pop32());
  /* 1025296b jle 0x10252984 */
  if ((C.zf||C.sf!=C.of)) goto L_10252984;
  /* 1025296d push edi */
  push32((uint32_t)(EDI));
  /* 1025296e push 0x10258c70 */
  push32((uint32_t)(0x10258c70u));
  /* 10252973 push ebp */
  push32((uint32_t)(EBP));
  /* 10252974 call dword ptr [0x10257110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257110))), 0x1025297au);
  /* 1025297a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025297d jmp 0x10252984 */
  goto L_10252984;
L_1025297f:;
  /* 1025297f mov ebp, 0x10258af0 */
  EBP = (0x10258af0u);
L_10252984:;
  /* 10252984 push ebp */
  push32((uint32_t)(EBP));
  /* 10252985 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x1025298bu);
  /* 1025298b push ebp */
  push32((uint32_t)(EBP));
  /* 1025298c push 0x10258d78 */
  push32((uint32_t)(0x10258d78u));
  /* 10252991 mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 10252995 call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x1025299bu);
  /* 1025299b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025299e cmp eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102529a2 jge 0x102529c0 */
  if ((C.sf==C.of)) goto L_102529c0;
  /* 102529a4 push edi */
  push32((uint32_t)(EDI));
  /* 102529a5 push ebp */
  push32((uint32_t)(EBP));
  /* 102529a6 push 3 */
  push32((uint32_t)(0x3u));
  /* 102529a8 call dword ptr [0x1025713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025713c))), 0x102529aeu);
  /* 102529ae push edi */
  push32((uint32_t)(EDI));
  /* 102529af push edi */
  push32((uint32_t)(EDI));
  /* 102529b0 push 0x10258d78 */
  push32((uint32_t)(0x10258d78u));
  /* 102529b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 102529b7 call dword ptr [0x10257140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257140))), 0x102529bdu);
  /* 102529bd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102529c0:;
  /* 102529c0 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 102529c2 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102529c8u);
  /* 102529c8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102529ca pop ecx */
  ECX = (pop32());
  /* 102529cb mov ebp, 0x10258c68 */
  EBP = (0x10258c68u);
  /* 102529d0 je 0x10252a70 */
  if (C.zf) goto L_10252a70;
  /* 102529d6 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 102529d8 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102529deu);
  /* 102529de test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102529e0 pop ecx */
  ECX = (pop32());
  /* 102529e1 je 0x10252a70 */
  if (C.zf) goto L_10252a70;
  /* 102529e7 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 102529e9 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102529efu);
  /* 102529ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102529f1 pop ecx */
  ECX = (pop32());
  /* 102529f2 je 0x10252a70 */
  if (C.zf) goto L_10252a70;
  /* 102529f4 push 0x10258a78 */
  push32((uint32_t)(0x10258a78u));
  /* 102529f9 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x102529ffu);
  /* 102529ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252a01 pop ecx */
  ECX = (pop32());
  /* 10252a02 jle 0x10252a70 */
  if ((C.zf||C.sf!=C.of)) goto L_10252a70;
  /* 10252a04 push 5 */
  push32((uint32_t)(0x5u));
  /* 10252a06 push ebp */
  push32((uint32_t)(EBP));
  /* 10252a07 call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10252a0du);
  /* 10252a0d pop ecx */
  ECX = (pop32());
  /* 10252a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252a10 pop ecx */
  ECX = (pop32());
  /* 10252a11 jg 0x10252a58 */
  if ((!C.zf&&C.sf==C.of)) goto L_10252a58;
  /* 10252a13 push 9 */
  push32((uint32_t)(0x9u));
  /* 10252a15 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252a1bu);
  /* 10252a1b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252a1d pop ecx */
  ECX = (pop32());
  /* 10252a1e jne 0x10252a2e */
  if (!C.zf) goto L_10252a2e;
  /* 10252a20 push edi */
  push32((uint32_t)(EDI));
  /* 10252a21 push ebp */
  push32((uint32_t)(EBP));
  /* 10252a22 call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10252a28u);
  /* 10252a28 pop ecx */
  ECX = (pop32());
  /* 10252a29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252a2b pop ecx */
  ECX = (pop32());
  /* 10252a2c jg 0x10252a58 */
  if ((!C.zf&&C.sf==C.of)) goto L_10252a58;
L_10252a2e:;
  /* 10252a2e push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 10252a33 push ebp */
  push32((uint32_t)(EBP));
  /* 10252a34 call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10252a3au);
  /* 10252a3a mov edx, eax */
  EDX = (EAX);
  /* 10252a3c push edi */
  push32((uint32_t)(EDI));
  /* 10252a3d push ebp */
  push32((uint32_t)(EBP));
  /* 10252a3e mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 10252a42 call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10252a48u);
  /* 10252a48 mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 10252a4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10252a4f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10252a51 mov ebp, 0x10258c68 */
  EBP = (0x10258c68u);
  /* 10252a56 jle 0x10252a70 */
  if ((C.zf||C.sf!=C.of)) goto L_10252a70;
L_10252a58:;
  /* 10252a58 push edi */
  push32((uint32_t)(EDI));
  /* 10252a59 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10252a5b call esi */
  call_ind((uint32_t)(ESI), 0x10252a5du);
  /* 10252a5d push edi */
  push32((uint32_t)(EDI));
  /* 10252a5e push 0x10258a78 */
  push32((uint32_t)(0x10258a78u));
  /* 10252a63 call ebx */
  call_ind((uint32_t)(EBX), 0x10252a65u);
  /* 10252a65 push 3 */
  push32((uint32_t)(0x3u));
  /* 10252a67 call dword ptr [0x10257144] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257144))), 0x10252a6du);
  /* 10252a6d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10252a70:;
  /* 10252a70 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10252a72 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252a78u);
  /* 10252a78 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252a7a pop ecx */
  ECX = (pop32());
  /* 10252a7b jne 0x10252b18 */
  if (!C.zf) goto L_10252b18;
  /* 10252a81 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10252a83 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252a89u);
  /* 10252a89 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252a8b pop ecx */
  ECX = (pop32());
  /* 10252a8c je 0x10252aff */
  if (C.zf) goto L_10252aff;
  /* 10252a8e push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10252a90 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252a96u);
  /* 10252a96 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252a98 pop ecx */
  ECX = (pop32());
  /* 10252a99 je 0x10252aff */
  if (C.zf) goto L_10252aff;
  /* 10252a9b push 0x10258a78 */
  push32((uint32_t)(0x10258a78u));
  /* 10252aa0 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252aa6u);
  /* 10252aa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252aa8 pop ecx */
  ECX = (pop32());
  /* 10252aa9 jle 0x10252b18 */
  if ((C.zf||C.sf!=C.of)) goto L_10252b18;
  /* 10252aab push 5 */
  push32((uint32_t)(0x5u));
  /* 10252aad push ebp */
  push32((uint32_t)(EBP));
  /* 10252aae call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10252ab4u);
  /* 10252ab4 pop ecx */
  ECX = (pop32());
  /* 10252ab5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252ab7 pop ecx */
  ECX = (pop32());
  /* 10252ab8 jne 0x10252b18 */
  if (!C.zf) goto L_10252b18;
  /* 10252aba push 9 */
  push32((uint32_t)(0x9u));
  /* 10252abc call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252ac2u);
  /* 10252ac2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252ac4 pop ecx */
  ECX = (pop32());
  /* 10252ac5 je 0x10252af1 */
  if (C.zf) goto L_10252af1;
  /* 10252ac7 push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 10252acc push ebp */
  push32((uint32_t)(EBP));
  /* 10252acd call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10252ad3u);
  /* 10252ad3 mov edx, eax */
  EDX = (EAX);
  /* 10252ad5 push edi */
  push32((uint32_t)(EDI));
  /* 10252ad6 push ebp */
  push32((uint32_t)(EBP));
  /* 10252ad7 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 10252adb call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10252ae1u);
  /* 10252ae1 mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 10252ae5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10252ae8 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10252aea je 0x10252aff */
  if (C.zf) goto L_10252aff;
  /* 10252aec mov ebp, 0x10258c68 */
  EBP = (0x10258c68u);
L_10252af1:;
  /* 10252af1 push edi */
  push32((uint32_t)(EDI));
  /* 10252af2 push ebp */
  push32((uint32_t)(EBP));
  /* 10252af3 call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10252af9u);
  /* 10252af9 pop ecx */
  ECX = (pop32());
  /* 10252afa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252afc pop ecx */
  ECX = (pop32());
  /* 10252afd jne 0x10252b18 */
  if (!C.zf) goto L_10252b18;
L_10252aff:;
  /* 10252aff push 1 */
  push32((uint32_t)(0x1u));
  /* 10252b01 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10252b03 call esi */
  call_ind((uint32_t)(ESI), 0x10252b05u);
  /* 10252b05 push edi */
  push32((uint32_t)(EDI));
  /* 10252b06 push 0x10258a78 */
  push32((uint32_t)(0x10258a78u));
  /* 10252b0b call ebx */
  call_ind((uint32_t)(EBX), 0x10252b0du);
  /* 10252b0d push 3 */
  push32((uint32_t)(0x3u));
  /* 10252b0f call dword ptr [0x102570dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570dc))), 0x10252b15u);
  /* 10252b15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10252b18:;
  /* 10252b18 mov ebp, dword ptr [0x102570d8] */
  EBP = (r32((uint32_t)(0x102570d8)));
  /* 10252b1e push 9 */
  push32((uint32_t)(0x9u));
  /* 10252b20 call ebp */
  call_ind((uint32_t)(EBP), 0x10252b22u);
  /* 10252b22 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252b24 pop ecx */
  ECX = (pop32());
  /* 10252b25 je 0x10252b55 */
  if (C.zf) goto L_10252b55;
  /* 10252b27 push 0xa */
  push32((uint32_t)(0xau));
  /* 10252b29 call ebp */
  call_ind((uint32_t)(EBP), 0x10252b2bu);
  /* 10252b2b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252b2d pop ecx */
  ECX = (pop32());
  /* 10252b2e je 0x10252b55 */
  if (C.zf) goto L_10252b55;
  /* 10252b30 push edi */
  push32((uint32_t)(EDI));
  /* 10252b31 push 0x10258c70 */
  push32((uint32_t)(0x10258c70u));
  /* 10252b36 call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10252b3cu);
  /* 10252b3c pop ecx */
  ECX = (pop32());
  /* 10252b3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252b3f pop ecx */
  ECX = (pop32());
  /* 10252b40 jle 0x10252b55 */
  if ((C.zf||C.sf!=C.of)) goto L_10252b55;
  /* 10252b42 push edi */
  push32((uint32_t)(EDI));
  /* 10252b43 push 0xa */
  push32((uint32_t)(0xau));
  /* 10252b45 call esi */
  call_ind((uint32_t)(ESI), 0x10252b47u);
  /* 10252b47 push 0x1025859c */
  push32((uint32_t)(0x1025859cu));
  /* 10252b4c call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x10252b52u);
  /* 10252b52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10252b55:;
  /* 10252b55 mov ebp, dword ptr [0x102570f0] */
  EBP = (r32((uint32_t)(0x102570f0)));
  /* 10252b5b push 0x10258b40 */
  push32((uint32_t)(0x10258b40u));
  /* 10252b60 call ebp */
  call_ind((uint32_t)(EBP), 0x10252b62u);
  /* 10252b62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252b64 pop ecx */
  ECX = (pop32());
  /* 10252b65 jle 0x102530fd */
  if ((C.zf||C.sf!=C.of)) goto L_102530fd;
  /* 10252b6b push 0x10258b50 */
  push32((uint32_t)(0x10258b50u));
  /* 10252b70 call ebp */
  call_ind((uint32_t)(EBP), 0x10252b72u);
  /* 10252b72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252b74 pop ecx */
  ECX = (pop32());
  /* 10252b75 jle 0x102530fd */
  if ((C.zf||C.sf!=C.of)) goto L_102530fd;
  /* 10252b7b mov ebp, dword ptr [0x102570d8] */
  EBP = (r32((uint32_t)(0x102570d8)));
  /* 10252b81 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10252b83 call ebp */
  call_ind((uint32_t)(EBP), 0x10252b85u);
  /* 10252b85 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252b87 pop ecx */
  ECX = (pop32());
  /* 10252b88 je 0x102530fd */
  if (C.zf) goto L_102530fd;
  /* 10252b8e push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10252b90 call ebp */
  call_ind((uint32_t)(EBP), 0x10252b92u);
  /* 10252b92 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252b94 pop ecx */
  ECX = (pop32());
  /* 10252b95 je 0x10252bbc */
  if (C.zf) goto L_10252bbc;
  /* 10252b97 push 0x10258b40 */
  push32((uint32_t)(0x10258b40u));
  /* 10252b9c call dword ptr [0x10257134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257134))), 0x10252ba2u);
  /* 10252ba2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252ba4 pop ecx */
  ECX = (pop32());
  /* 10252ba5 je 0x10252bbc */
  if (C.zf) goto L_10252bbc;
  /* 10252ba7 push edi */
  push32((uint32_t)(EDI));
  /* 10252ba8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10252baa call esi */
  call_ind((uint32_t)(ESI), 0x10252bacu);
  /* 10252bac push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10252bb1 push 5 */
  push32((uint32_t)(0x5u));
  /* 10252bb3 call dword ptr [0x102570e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e4))), 0x10252bb9u);
  /* 10252bb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10252bbc:;
  /* 10252bbc push 0x10258b40 */
  push32((uint32_t)(0x10258b40u));
  /* 10252bc1 call dword ptr [0x10257134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257134))), 0x10252bc7u);
  /* 10252bc7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252bc9 pop ecx */
  ECX = (pop32());
  /* 10252bca mov ebp, 0x10258a28 */
  EBP = (0x10258a28u);
  /* 10252bcf je 0x10252c04 */
  if (C.zf) goto L_10252c04;
  /* 10252bd1 push ebp */
  push32((uint32_t)(EBP));
  /* 10252bd2 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252bd8u);
  /* 10252bd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252bda pop ecx */
  ECX = (pop32());
  /* 10252bdb jne 0x10252c04 */
  if (!C.zf) goto L_10252c04;
  /* 10252bdd push 5 */
  push32((uint32_t)(0x5u));
  /* 10252bdf call dword ptr [0x10257118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257118))), 0x10252be5u);
  /* 10252be5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252be7 pop ecx */
  ECX = (pop32());
  /* 10252be8 je 0x10252c04 */
  if (C.zf) goto L_10252c04;
  /* 10252bea push ebp */
  push32((uint32_t)(EBP));
  /* 10252beb push 0x10258990 */
  push32((uint32_t)(0x10258990u));
  /* 10252bf0 push 0x10258b40 */
  push32((uint32_t)(0x10258b40u));
  /* 10252bf5 call dword ptr [0x102570e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e0))), 0x10252bfbu);
  /* 10252bfb push 1 */
  push32((uint32_t)(0x1u));
  /* 10252bfd push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10252bff call esi */
  call_ind((uint32_t)(ESI), 0x10252c01u);
  /* 10252c01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10252c04:;
  /* 10252c04 push 0x10258b50 */
  push32((uint32_t)(0x10258b50u));
  /* 10252c09 call dword ptr [0x10257134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257134))), 0x10252c0fu);
  /* 10252c0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252c11 pop ecx */
  ECX = (pop32());
  /* 10252c12 je 0x10252c3d */
  if (C.zf) goto L_10252c3d;
  /* 10252c14 push 0x10258a38 */
  push32((uint32_t)(0x10258a38u));
  /* 10252c19 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252c1fu);
  /* 10252c1f cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10252c22 pop ecx */
  ECX = (pop32());
  /* 10252c23 jge 0x10252c3d */
  if ((C.sf==C.of)) goto L_10252c3d;
  /* 10252c25 push 0x10258a38 */
  push32((uint32_t)(0x10258a38u));
  /* 10252c2a push 0x10258c18 */
  push32((uint32_t)(0x10258c18u));
  /* 10252c2f push 0x10258b50 */
  push32((uint32_t)(0x10258b50u));
  /* 10252c34 call dword ptr [0x102570e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e0))), 0x10252c3au);
  /* 10252c3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10252c3d:;
  /* 10252c3d push 3 */
  push32((uint32_t)(0x3u));
  /* 10252c3f call dword ptr [0x10257118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257118))), 0x10252c45u);
  /* 10252c45 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252c47 pop ecx */
  ECX = (pop32());
  /* 10252c48 je 0x10253012 */
  if (C.zf) goto L_10253012;
  /* 10252c4e push ebp */
  push32((uint32_t)(EBP));
  /* 10252c4f call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252c55u);
  /* 10252c55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252c57 pop ecx */
  ECX = (pop32());
  /* 10252c58 jle 0x10253012 */
  if ((C.zf||C.sf!=C.of)) goto L_10253012;
  /* 10252c5e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10252c60 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252c66u);
  /* 10252c66 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252c68 pop ecx */
  ECX = (pop32());
  /* 10252c69 je 0x10252c98 */
  if (C.zf) goto L_10252c98;
  /* 10252c6b push ebp */
  push32((uint32_t)(EBP));
  /* 10252c6c push 0x10258c78 */
  push32((uint32_t)(0x10258c78u));
  /* 10252c71 call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10252c77u);
  /* 10252c77 pop ecx */
  ECX = (pop32());
  /* 10252c78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252c7a pop ecx */
  ECX = (pop32());
  /* 10252c7b jne 0x10252c98 */
  if (!C.zf) goto L_10252c98;
  /* 10252c7d push edi */
  push32((uint32_t)(EDI));
  /* 10252c7e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10252c80 call esi */
  call_ind((uint32_t)(ESI), 0x10252c82u);
  /* 10252c82 push edi */
  push32((uint32_t)(EDI));
  /* 10252c83 push ebp */
  push32((uint32_t)(EBP));
  /* 10252c84 call ebx */
  call_ind((uint32_t)(EBX), 0x10252c86u);
  /* 10252c86 push edi */
  push32((uint32_t)(EDI));
  /* 10252c87 push edi */
  push32((uint32_t)(EDI));
  /* 10252c88 push 0x10258c78 */
  push32((uint32_t)(0x10258c78u));
  /* 10252c8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10252c8f call dword ptr [0x10257140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257140))), 0x10252c95u);
  /* 10252c95 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10252c98:;
  /* 10252c98 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10252c9a call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252ca0u);
  /* 10252ca0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252ca2 pop ecx */
  ECX = (pop32());
  /* 10252ca3 je 0x10252d23 */
  if (C.zf) goto L_10252d23;
  /* 10252ca5 push ebp */
  push32((uint32_t)(EBP));
  /* 10252ca6 push 0x10258c78 */
  push32((uint32_t)(0x10258c78u));
  /* 10252cab call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10252cb1u);
  /* 10252cb1 pop ecx */
  ECX = (pop32());
  /* 10252cb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252cb4 pop ecx */
  ECX = (pop32());
  /* 10252cb5 jle 0x10252d23 */
  if ((C.zf||C.sf!=C.of)) goto L_10252d23;
  /* 10252cb7 push edi */
  push32((uint32_t)(EDI));
  /* 10252cb8 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10252cba call esi */
  call_ind((uint32_t)(ESI), 0x10252cbcu);
  /* 10252cbc push edi */
  push32((uint32_t)(EDI));
  /* 10252cbd push ebp */
  push32((uint32_t)(EBP));
  /* 10252cbe call ebx */
  call_ind((uint32_t)(EBX), 0x10252cc0u);
  /* 10252cc0 push edi */
  push32((uint32_t)(EDI));
  /* 10252cc1 push edi */
  push32((uint32_t)(EDI));
  /* 10252cc2 push 0x10258ce0 */
  push32((uint32_t)(0x10258ce0u));
  /* 10252cc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252cc9 call dword ptr [0x10257140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257140))), 0x10252ccfu);
  /* 10252ccf push 0x10258d38 */
  push32((uint32_t)(0x10258d38u));
  /* 10252cd4 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252cdau);
  /* 10252cda add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10252cdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252cdf jne 0x10252d05 */
  if (!C.zf) goto L_10252d05;
  /* 10252ce1 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10252ce6 push 0x10258db0 */
  push32((uint32_t)(0x10258db0u));
  /* 10252ceb push 1 */
  push32((uint32_t)(0x1u));
  /* 10252ced push 0x102589a8 */
  push32((uint32_t)(0x102589a8u));
  /* 10252cf2 push 0x10258c30 */
  push32((uint32_t)(0x10258c30u));
  /* 10252cf7 push 0x10258d38 */
  push32((uint32_t)(0x10258d38u));
  /* 10252cfc call dword ptr [0x102570c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c0))), 0x10252d02u);
  /* 10252d02 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10252d05:;
  /* 10252d05 push edi */
  push32((uint32_t)(EDI));
  /* 10252d06 push 0x10258d38 */
  push32((uint32_t)(0x10258d38u));
  /* 10252d0b call ebx */
  call_ind((uint32_t)(EBX), 0x10252d0du);
  /* 10252d0d push edi */
  push32((uint32_t)(EDI));
  /* 10252d0e push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10252d13 push 0x10258db8 */
  push32((uint32_t)(0x10258db8u));
  /* 10252d18 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252d1a call dword ptr [0x10257140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257140))), 0x10252d20u);
  /* 10252d20 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10252d23:;
  /* 10252d23 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10252d25 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252d2bu);
  /* 10252d2b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252d2d pop ecx */
  ECX = (pop32());
  /* 10252d2e je 0x10252d6c */
  if (C.zf) goto L_10252d6c;
  /* 10252d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10252d31 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252d37u);
  /* 10252d37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252d39 pop ecx */
  ECX = (pop32());
  /* 10252d3a jle 0x10252d6c */
  if ((C.zf||C.sf!=C.of)) goto L_10252d6c;
  /* 10252d3c push edi */
  push32((uint32_t)(EDI));
  /* 10252d3d push ebp */
  push32((uint32_t)(EBP));
  /* 10252d3e call ebx */
  call_ind((uint32_t)(EBX), 0x10252d40u);
  /* 10252d40 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252d42 call dword ptr [0x10257148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257148))), 0x10252d48u);
  /* 10252d48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10252d4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252d4d je 0x10252d6c */
  if (C.zf) goto L_10252d6c;
  /* 10252d4f push edi */
  push32((uint32_t)(EDI));
  /* 10252d50 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10252d52 call esi */
  call_ind((uint32_t)(ESI), 0x10252d54u);
  /* 10252d54 push edi */
  push32((uint32_t)(EDI));
  /* 10252d55 push ebp */
  push32((uint32_t)(EBP));
  /* 10252d56 call ebx */
  call_ind((uint32_t)(EBX), 0x10252d58u);
  /* 10252d58 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252d5a push 0x10258d38 */
  push32((uint32_t)(0x10258d38u));
  /* 10252d5f call ebx */
  call_ind((uint32_t)(EBX), 0x10252d61u);
  /* 10252d61 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252d63 call dword ptr [0x1025714c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025714c))), 0x10252d69u);
  /* 10252d69 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10252d6c:;
  /* 10252d6c push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10252d6e call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252d74u);
  /* 10252d74 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252d76 pop ecx */
  ECX = (pop32());
  /* 10252d77 je 0x10252dd5 */
  if (C.zf) goto L_10252dd5;
  /* 10252d79 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10252d7b call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252d81u);
  /* 10252d81 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252d83 pop ecx */
  ECX = (pop32());
  /* 10252d84 jne 0x10252dd5 */
  if (!C.zf) goto L_10252dd5;
  /* 10252d86 push ebp */
  push32((uint32_t)(EBP));
  /* 10252d87 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252d8du);
  /* 10252d8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252d8f pop ecx */
  ECX = (pop32());
  /* 10252d90 jle 0x10252dd5 */
  if ((C.zf||C.sf!=C.of)) goto L_10252dd5;
  /* 10252d92 push edi */
  push32((uint32_t)(EDI));
  /* 10252d93 push ebp */
  push32((uint32_t)(EBP));
  /* 10252d94 call ebx */
  call_ind((uint32_t)(EBX), 0x10252d96u);
  /* 10252d96 push 0x10258d38 */
  push32((uint32_t)(0x10258d38u));
  /* 10252d9b call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252da1u);
  /* 10252da1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252da3 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 10252da7 call dword ptr [0x10257150] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257150))), 0x10252dadu);
  /* 10252dad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10252db0 cmp eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10252db4 jne 0x10252dd5 */
  if (!C.zf) goto L_10252dd5;
  /* 10252db6 push edi */
  push32((uint32_t)(EDI));
  /* 10252db7 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10252db9 call esi */
  call_ind((uint32_t)(ESI), 0x10252dbbu);
  /* 10252dbb push edi */
  push32((uint32_t)(EDI));
  /* 10252dbc push ebp */
  push32((uint32_t)(EBP));
  /* 10252dbd call ebx */
  call_ind((uint32_t)(EBX), 0x10252dbfu);
  /* 10252dbf push edi */
  push32((uint32_t)(EDI));
  /* 10252dc0 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10252dc5 push 0x10258c90 */
  push32((uint32_t)(0x10258c90u));
  /* 10252dca push 1 */
  push32((uint32_t)(0x1u));
  /* 10252dcc call dword ptr [0x10257140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257140))), 0x10252dd2u);
  /* 10252dd2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10252dd5:;
  /* 10252dd5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10252dd7 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252dddu);
  /* 10252ddd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252ddf pop ecx */
  ECX = (pop32());
  /* 10252de0 je 0x10252e13 */
  if (C.zf) goto L_10252e13;
  /* 10252de2 push ebp */
  push32((uint32_t)(EBP));
  /* 10252de3 push 0x10258c90 */
  push32((uint32_t)(0x10258c90u));
  /* 10252de8 call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10252deeu);
  /* 10252dee pop ecx */
  ECX = (pop32());
  /* 10252def test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252df1 pop ecx */
  ECX = (pop32());
  /* 10252df2 jle 0x10252e13 */
  if ((C.zf||C.sf!=C.of)) goto L_10252e13;
  /* 10252df4 push edi */
  push32((uint32_t)(EDI));
  /* 10252df5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10252df7 call esi */
  call_ind((uint32_t)(ESI), 0x10252df9u);
  /* 10252df9 push edi */
  push32((uint32_t)(EDI));
  /* 10252dfa push ebp */
  push32((uint32_t)(EBP));
  /* 10252dfb call ebx */
  call_ind((uint32_t)(EBX), 0x10252dfdu);
  /* 10252dfd push edi */
  push32((uint32_t)(EDI));
  /* 10252dfe push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10252e03 push 0x10258cf8 */
  push32((uint32_t)(0x10258cf8u));
  /* 10252e08 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252e0a call dword ptr [0x10257140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257140))), 0x10252e10u);
  /* 10252e10 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10252e13:;
  /* 10252e13 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10252e15 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252e1bu);
  /* 10252e1b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252e1d pop ecx */
  ECX = (pop32());
  /* 10252e1e je 0x10252e60 */
  if (C.zf) goto L_10252e60;
  /* 10252e20 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10252e22 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252e28u);
  /* 10252e28 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252e2a pop ecx */
  ECX = (pop32());
  /* 10252e2b jne 0x10252e60 */
  if (!C.zf) goto L_10252e60;
  /* 10252e2d push ebp */
  push32((uint32_t)(EBP));
  /* 10252e2e call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252e34u);
  /* 10252e34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252e36 pop ecx */
  ECX = (pop32());
  /* 10252e37 jle 0x10252e60 */
  if ((C.zf||C.sf!=C.of)) goto L_10252e60;
  /* 10252e39 push edi */
  push32((uint32_t)(EDI));
  /* 10252e3a push ebp */
  push32((uint32_t)(EBP));
  /* 10252e3b call ebx */
  call_ind((uint32_t)(EBX), 0x10252e3du);
  /* 10252e3d push 1 */
  push32((uint32_t)(0x1u));
  /* 10252e3f call dword ptr [0x10257148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257148))), 0x10252e45u);
  /* 10252e45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10252e48 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252e4a je 0x10252e60 */
  if (C.zf) goto L_10252e60;
  /* 10252e4c push edi */
  push32((uint32_t)(EDI));
  /* 10252e4d push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10252e4f call esi */
  call_ind((uint32_t)(ESI), 0x10252e51u);
  /* 10252e51 push edi */
  push32((uint32_t)(EDI));
  /* 10252e52 push ebp */
  push32((uint32_t)(EBP));
  /* 10252e53 call ebx */
  call_ind((uint32_t)(EBX), 0x10252e55u);
  /* 10252e55 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252e57 call dword ptr [0x10257154] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257154))), 0x10252e5du);
  /* 10252e5d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10252e60:;
  /* 10252e60 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10252e62 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252e68u);
  /* 10252e68 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252e6a pop ecx */
  ECX = (pop32());
  /* 10252e6b je 0x10252eab */
  if (C.zf) goto L_10252eab;
  /* 10252e6d push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10252e6f call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252e75u);
  /* 10252e75 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252e77 pop ecx */
  ECX = (pop32());
  /* 10252e78 jne 0x10252eab */
  if (!C.zf) goto L_10252eab;
  /* 10252e7a push ebp */
  push32((uint32_t)(EBP));
  /* 10252e7b call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252e81u);
  /* 10252e81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252e83 pop ecx */
  ECX = (pop32());
  /* 10252e84 jle 0x10252eab */
  if ((C.zf||C.sf!=C.of)) goto L_10252eab;
  /* 10252e86 push edi */
  push32((uint32_t)(EDI));
  /* 10252e87 push ebp */
  push32((uint32_t)(EBP));
  /* 10252e88 call ebx */
  call_ind((uint32_t)(EBX), 0x10252e8au);
  /* 10252e8a push 1 */
  push32((uint32_t)(0x1u));
  /* 10252e8c call dword ptr [0x10257150] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257150))), 0x10252e92u);
  /* 10252e92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10252e95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252e97 jne 0x10252eab */
  if (!C.zf) goto L_10252eab;
  /* 10252e99 push edi */
  push32((uint32_t)(EDI));
  /* 10252e9a push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10252e9c call esi */
  call_ind((uint32_t)(ESI), 0x10252e9eu);
  /* 10252e9e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10252ea0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10252ea2 call dword ptr [0x102570e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e4))), 0x10252ea8u);
  /* 10252ea8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10252eab:;
  /* 10252eab push 4 */
  push32((uint32_t)(0x4u));
  /* 10252ead call dword ptr [0x10257138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257138))), 0x10252eb3u);
  /* 10252eb3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252eb5 pop ecx */
  ECX = (pop32());
  /* 10252eb6 je 0x10252f6a */
  if (C.zf) goto L_10252f6a;
  /* 10252ebc push edi */
  push32((uint32_t)(EDI));
  /* 10252ebd push ebp */
  push32((uint32_t)(EBP));
  /* 10252ebe call ebx */
  call_ind((uint32_t)(EBX), 0x10252ec0u);
  /* 10252ec0 push edi */
  push32((uint32_t)(EDI));
  /* 10252ec1 push edi */
  push32((uint32_t)(EDI));
  /* 10252ec2 push 0x10258c78 */
  push32((uint32_t)(0x10258c78u));
  /* 10252ec7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252ec9 call dword ptr [0x10257140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257140))), 0x10252ecfu);
  /* 10252ecf push 0x10258d38 */
  push32((uint32_t)(0x10258d38u));
  /* 10252ed4 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252edau);
  /* 10252eda add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10252edd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252edf jle 0x10252f6a */
  if ((C.zf||C.sf!=C.of)) goto L_10252f6a;
  /* 10252ee5 push edi */
  push32((uint32_t)(EDI));
  /* 10252ee6 push 0x10258d38 */
  push32((uint32_t)(0x10258d38u));
  /* 10252eeb call ebx */
  call_ind((uint32_t)(EBX), 0x10252eedu);
  /* 10252eed push edi */
  push32((uint32_t)(EDI));
  /* 10252eee push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10252ef3 push 0x10258dc0 */
  push32((uint32_t)(0x10258dc0u));
  /* 10252ef8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252efa call dword ptr [0x10257140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257140))), 0x10252f00u);
  /* 10252f00 push 2 */
  push32((uint32_t)(0x2u));
  /* 10252f02 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10252f07 push 0x10258dc8 */
  push32((uint32_t)(0x10258dc8u));
  /* 10252f0c push 1 */
  push32((uint32_t)(0x1u));
  /* 10252f0e call dword ptr [0x10257140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257140))), 0x10252f14u);
  /* 10252f14 push 2 */
  push32((uint32_t)(0x2u));
  /* 10252f16 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10252f1b push 0x10258dd0 */
  push32((uint32_t)(0x10258dd0u));
  /* 10252f20 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252f22 call dword ptr [0x10257140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257140))), 0x10252f28u);
  /* 10252f28 push 2 */
  push32((uint32_t)(0x2u));
  /* 10252f2a push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10252f2f push 0x10258dd8 */
  push32((uint32_t)(0x10258dd8u));
  /* 10252f34 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252f36 call dword ptr [0x10257140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257140))), 0x10252f3cu);
  /* 10252f3c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10252f3f push 2 */
  push32((uint32_t)(0x2u));
  /* 10252f41 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10252f46 push 0x10258de0 */
  push32((uint32_t)(0x10258de0u));
  /* 10252f4b push 1 */
  push32((uint32_t)(0x1u));
  /* 10252f4d call dword ptr [0x10257140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257140))), 0x10252f53u);
  /* 10252f53 push 2 */
  push32((uint32_t)(0x2u));
  /* 10252f55 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10252f5a push 0x10258df0 */
  push32((uint32_t)(0x10258df0u));
  /* 10252f5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10252f61 call dword ptr [0x10257140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257140))), 0x10252f67u);
  /* 10252f67 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10252f6a:;
  /* 10252f6a push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10252f6c call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252f72u);
  /* 10252f72 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252f74 pop ecx */
  ECX = (pop32());
  /* 10252f75 je 0x10252fb3 */
  if (C.zf) goto L_10252fb3;
  /* 10252f77 push 0x10258d38 */
  push32((uint32_t)(0x10258d38u));
  /* 10252f7c push 0x10258df0 */
  push32((uint32_t)(0x10258df0u));
  /* 10252f81 call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10252f87u);
  /* 10252f87 pop ecx */
  ECX = (pop32());
  /* 10252f88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252f8a pop ecx */
  ECX = (pop32());
  /* 10252f8b jle 0x10252fb3 */
  if ((C.zf||C.sf!=C.of)) goto L_10252fb3;
  /* 10252f8d push edi */
  push32((uint32_t)(EDI));
  /* 10252f8e push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10252f90 call esi */
  call_ind((uint32_t)(ESI), 0x10252f92u);
  /* 10252f92 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252f94 call dword ptr [0x10257124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257124))), 0x10252f9au);
  /* 10252f9a push edi */
  push32((uint32_t)(EDI));
  /* 10252f9b push 0x10258d38 */
  push32((uint32_t)(0x10258d38u));
  /* 10252fa0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252fa2 call dword ptr [0x1025713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025713c))), 0x10252fa8u);
  /* 10252fa8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252faa call dword ptr [0x10257128] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257128))), 0x10252fb0u);
  /* 10252fb0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10252fb3:;
  /* 10252fb3 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10252fb5 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10252fbbu);
  /* 10252fbb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10252fbd pop ecx */
  ECX = (pop32());
  /* 10252fbe jne 0x10253012 */
  if (!C.zf) goto L_10253012;
  /* 10252fc0 push 0x10258d38 */
  push32((uint32_t)(0x10258d38u));
  /* 10252fc5 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10252fcbu);
  /* 10252fcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10252fcd pop ecx */
  ECX = (pop32());
  /* 10252fce jne 0x10253012 */
  if (!C.zf) goto L_10253012;
  /* 10252fd0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10252fd5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10252fd7 call dword ptr [0x102570e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e4))), 0x10252fddu);
  /* 10252fdd push 1 */
  push32((uint32_t)(0x1u));
  /* 10252fdf push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10252fe1 call esi */
  call_ind((uint32_t)(ESI), 0x10252fe3u);
  /* 10252fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252fe5 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10252fe7 call esi */
  call_ind((uint32_t)(ESI), 0x10252fe9u);
  /* 10252fe9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252feb push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10252fed call esi */
  call_ind((uint32_t)(ESI), 0x10252fefu);
  /* 10252fef push 1 */
  push32((uint32_t)(0x1u));
  /* 10252ff1 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10252ff3 call esi */
  call_ind((uint32_t)(ESI), 0x10252ff5u);
  /* 10252ff5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10252ff7 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10252ff9 call esi */
  call_ind((uint32_t)(ESI), 0x10252ffbu);
  /* 10252ffb push 1 */
  push32((uint32_t)(0x1u));
  /* 10252ffd push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10252fff call esi */
  call_ind((uint32_t)(ESI), 0x10253001u);
  /* 10253001 push 1 */
  push32((uint32_t)(0x1u));
  /* 10253003 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10253005 call esi */
  call_ind((uint32_t)(ESI), 0x10253007u);
  /* 10253007 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025300a push 1 */
  push32((uint32_t)(0x1u));
  /* 1025300c push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1025300e call esi */
  call_ind((uint32_t)(ESI), 0x10253010u);
  /* 10253010 pop ecx */
  ECX = (pop32());
  /* 10253011 pop ecx */
  ECX = (pop32());
L_10253012:;
  /* 10253012 push ebp */
  push32((uint32_t)(EBP));
  /* 10253013 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253019u);
  /* 10253019 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025301b pop ecx */
  ECX = (pop32());
  /* 1025301c jle 0x10253102 */
  if ((C.zf||C.sf!=C.of)) goto L_10253102;
  /* 10253022 push 0x10258a38 */
  push32((uint32_t)(0x10258a38u));
  /* 10253027 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x1025302du);
  /* 1025302d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025302f pop ecx */
  ECX = (pop32());
  /* 10253030 jle 0x10253102 */
  if ((C.zf||C.sf!=C.of)) goto L_10253102;
  /* 10253036 push 6 */
  push32((uint32_t)(0x6u));
  /* 10253038 call dword ptr [0x10257118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257118))), 0x1025303eu);
  /* 1025303e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253040 pop ecx */
  ECX = (pop32());
  /* 10253041 je 0x10253102 */
  if (C.zf) goto L_10253102;
  /* 10253047 push ebp */
  push32((uint32_t)(EBP));
  /* 10253048 push 0x10258d80 */
  push32((uint32_t)(0x10258d80u));
  /* 1025304d call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10253053u);
  /* 10253053 pop ecx */
  ECX = (pop32());
  /* 10253054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253056 pop ecx */
  ECX = (pop32());
  /* 10253057 jle 0x10253075 */
  if ((C.zf||C.sf!=C.of)) goto L_10253075;
  /* 10253059 push edi */
  push32((uint32_t)(EDI));
  /* 1025305a push 0x10258a38 */
  push32((uint32_t)(0x10258a38u));
  /* 1025305f call ebx */
  call_ind((uint32_t)(EBX), 0x10253061u);
  /* 10253061 push edi */
  push32((uint32_t)(EDI));
  /* 10253062 push edi */
  push32((uint32_t)(EDI));
  /* 10253063 push 0x10258c78 */
  push32((uint32_t)(0x10258c78u));
L_10253068:;
  /* 10253068 push 1 */
  push32((uint32_t)(0x1u));
  /* 1025306a call dword ptr [0x10257114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257114))), 0x10253070u);
  /* 10253070 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10253073 jmp 0x102530ec */
  goto L_102530ec;
L_10253075:;
  /* 10253075 push ebp */
  push32((uint32_t)(EBP));
  /* 10253076 push 0x10258d88 */
  push32((uint32_t)(0x10258d88u));
  /* 1025307b call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10253081u);
  /* 10253081 pop ecx */
  ECX = (pop32());
  /* 10253082 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253084 pop ecx */
  ECX = (pop32());
  /* 10253085 jle 0x10253098 */
  if ((C.zf||C.sf!=C.of)) goto L_10253098;
  /* 10253087 push edi */
  push32((uint32_t)(EDI));
  /* 10253088 push 0x10258a38 */
  push32((uint32_t)(0x10258a38u));
  /* 1025308d call ebx */
  call_ind((uint32_t)(EBX), 0x1025308fu);
  /* 1025308f push edi */
  push32((uint32_t)(EDI));
  /* 10253090 push edi */
  push32((uint32_t)(EDI));
  /* 10253091 push 0x10258c90 */
  push32((uint32_t)(0x10258c90u));
  /* 10253096 jmp 0x10253068 */
  goto L_10253068;
L_10253098:;
  /* 10253098 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 1025309d push ebp */
  push32((uint32_t)(EBP));
  /* 1025309e push 0x10258c78 */
  push32((uint32_t)(0x10258c78u));
  /* 102530a3 push 0x10258c00 */
  push32((uint32_t)(0x10258c00u));
  /* 102530a8 call dword ptr [0x10257158] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257158))), 0x102530aeu);
  /* 102530ae push edi */
  push32((uint32_t)(EDI));
  /* 102530af push 0x10258a38 */
  push32((uint32_t)(0x10258a38u));
  /* 102530b4 call ebx */
  call_ind((uint32_t)(EBX), 0x102530b6u);
  /* 102530b6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102530b8 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102530beu);
  /* 102530be add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102530c1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102530c3 je 0x102530da */
  if (C.zf) goto L_102530da;
  /* 102530c5 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102530c7 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102530cdu);
  /* 102530cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102530cf pop ecx */
  ECX = (pop32());
  /* 102530d0 jne 0x102530da */
  if (!C.zf) goto L_102530da;
  /* 102530d2 push edi */
  push32((uint32_t)(EDI));
  /* 102530d3 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 102530d8 jmp 0x102530dc */
  goto L_102530dc;
L_102530da:;
  /* 102530da push edi */
  push32((uint32_t)(EDI));
  /* 102530db push edi */
  push32((uint32_t)(EDI));
L_102530dc:;
  /* 102530dc push 0x10258c00 */
  push32((uint32_t)(0x10258c00u));
  /* 102530e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 102530e3 call dword ptr [0x10257114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257114))), 0x102530e9u);
  /* 102530e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102530ec:;
  /* 102530ec push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 102530f1 push 6 */
  push32((uint32_t)(0x6u));
  /* 102530f3 call dword ptr [0x102570e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e4))), 0x102530f9u);
  /* 102530f9 pop ecx */
  ECX = (pop32());
  /* 102530fa pop ecx */
  ECX = (pop32());
  /* 102530fb jmp 0x10253102 */
  goto L_10253102;
L_102530fd:;
  /* 102530fd mov ebp, 0x10258a28 */
  EBP = (0x10258a28u);
L_10253102:;
  /* 10253102 push ebp */
  push32((uint32_t)(EBP));
  /* 10253103 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253109u);
  /* 10253109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025310b pop ecx */
  ECX = (pop32());
  /* 1025310c jle 0x10253137 */
  if ((C.zf||C.sf!=C.of)) goto L_10253137;
  /* 1025310e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10253110 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10253116u);
  /* 10253116 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253118 pop ecx */
  ECX = (pop32());
  /* 10253119 jne 0x10253123 */
  if (!C.zf) goto L_10253123;
  /* 1025311b push 1 */
  push32((uint32_t)(0x1u));
  /* 1025311d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1025311f call esi */
  call_ind((uint32_t)(ESI), 0x10253121u);
  /* 10253121 pop ecx */
  ECX = (pop32());
  /* 10253122 pop ecx */
  ECX = (pop32());
L_10253123:;
  /* 10253123 push edi */
  push32((uint32_t)(EDI));
  /* 10253124 push ebp */
  push32((uint32_t)(EBP));
  /* 10253125 call ebx */
  call_ind((uint32_t)(EBX), 0x10253127u);
  /* 10253127 push 1 */
  push32((uint32_t)(0x1u));
  /* 10253129 call dword ptr [0x10257150] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257150))), 0x1025312fu);
  /* 1025312f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10253132 mov dword ptr [0x10258c10], eax */
  w32((uint32_t)(0x10258c10), (EAX));
L_10253137:;
  /* 10253137 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10253139 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x1025313fu);
  /* 1025313f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253141 pop ecx */
  ECX = (pop32());
  /* 10253142 je 0x1025320a */
  if (C.zf) goto L_1025320a;
  /* 10253148 push ebp */
  push32((uint32_t)(EBP));
  /* 10253149 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x1025314fu);
  /* 1025314f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253151 pop ecx */
  ECX = (pop32());
  /* 10253152 jne 0x1025320a */
  if (!C.zf) goto L_1025320a;
  /* 10253158 push edi */
  push32((uint32_t)(EDI));
  /* 10253159 push 0xb */
  push32((uint32_t)(0xbu));
  /* 1025315b call esi */
  call_ind((uint32_t)(ESI), 0x1025315du);
  /* 1025315d cmp dword ptr [0x10258c10], edi */
  { uint32_t _a=(r32((uint32_t)(0x10258c10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10253163 pop ecx */
  ECX = (pop32());
  /* 10253164 pop ecx */
  ECX = (pop32());
  /* 10253165 jle 0x102531ae */
  if ((C.zf||C.sf!=C.of)) goto L_102531ae;
  /* 10253167 mov ebp, dword ptr [0x102571a0] */
  EBP = (r32((uint32_t)(0x102571a0)));
  /* 1025316d push edi */
  push32((uint32_t)(EDI));
  /* 1025316e call ebp */
  call_ind((uint32_t)(EBP), 0x10253170u);
  /* 10253170 push 5 */
  push32((uint32_t)(0x5u));
  /* 10253172 pop ecx */
  ECX = (pop32());
  /* 10253173 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10253175 imul ecx, dword ptr [0x10258c10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(0x10258c10)))*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1025317c imul ecx, ecx, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x32u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1025317f push ecx */
  push32((uint32_t)(ECX));
  /* 10253180 push 0x10258594 */
  push32((uint32_t)(0x10258594u));
  /* 10253185 call dword ptr [0x10257100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257100))), 0x1025318bu);
  /* 1025318b push edi */
  push32((uint32_t)(EDI));
  /* 1025318c call ebp */
  call_ind((uint32_t)(EBP), 0x1025318eu);
  /* 1025318e push 5 */
  push32((uint32_t)(0x5u));
  /* 10253190 pop ecx */
  ECX = (pop32());
  /* 10253191 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10253193 imul ecx, dword ptr [0x10258c10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(0x10258c10)))*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1025319a imul ecx, ecx, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x32u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1025319d push ecx */
  push32((uint32_t)(ECX));
  /* 1025319e push 1 */
  push32((uint32_t)(0x1u));
  /* 102531a0 pop ebp */
  EBP = (pop32());
  /* 102531a1 push ebp */
  push32((uint32_t)(EBP));
  /* 102531a2 push edi */
  push32((uint32_t)(EDI));
  /* 102531a3 call dword ptr [0x102570fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570fc))), 0x102531a9u);
  /* 102531a9 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102531ac jmp 0x102531bd */
  goto L_102531bd;
L_102531ae:;
  /* 102531ae push 0x10258588 */
  push32((uint32_t)(0x10258588u));
  /* 102531b3 call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x102531b9u);
  /* 102531b9 pop ecx */
  ECX = (pop32());
  /* 102531ba push 1 */
  push32((uint32_t)(0x1u));
  /* 102531bc pop ebp */
  EBP = (pop32());
L_102531bd:;
  /* 102531bd push 3 */
  push32((uint32_t)(0x3u));
  /* 102531bf call dword ptr [0x10257118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257118))), 0x102531c5u);
  /* 102531c5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102531c7 pop ecx */
  ECX = (pop32());
  /* 102531c8 je 0x10253204 */
  if (C.zf) goto L_10253204;
  /* 102531ca push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 102531cf push 3 */
  push32((uint32_t)(0x3u));
  /* 102531d1 call dword ptr [0x102570e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e4))), 0x102531d7u);
  /* 102531d7 push ebp */
  push32((uint32_t)(EBP));
  /* 102531d8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 102531da call esi */
  call_ind((uint32_t)(ESI), 0x102531dcu);
  /* 102531dc push ebp */
  push32((uint32_t)(EBP));
  /* 102531dd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 102531df call esi */
  call_ind((uint32_t)(ESI), 0x102531e1u);
  /* 102531e1 push ebp */
  push32((uint32_t)(EBP));
  /* 102531e2 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 102531e4 call esi */
  call_ind((uint32_t)(ESI), 0x102531e6u);
  /* 102531e6 push ebp */
  push32((uint32_t)(EBP));
  /* 102531e7 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102531e9 call esi */
  call_ind((uint32_t)(ESI), 0x102531ebu);
  /* 102531eb push ebp */
  push32((uint32_t)(EBP));
  /* 102531ec push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102531ee call esi */
  call_ind((uint32_t)(ESI), 0x102531f0u);
  /* 102531f0 push ebp */
  push32((uint32_t)(EBP));
  /* 102531f1 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 102531f3 call esi */
  call_ind((uint32_t)(ESI), 0x102531f5u);
  /* 102531f5 push ebp */
  push32((uint32_t)(EBP));
  /* 102531f6 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 102531f8 call esi */
  call_ind((uint32_t)(ESI), 0x102531fau);
  /* 102531fa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102531fd push ebp */
  push32((uint32_t)(EBP));
  /* 102531fe push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10253200 call esi */
  call_ind((uint32_t)(ESI), 0x10253202u);
  /* 10253202 pop ecx */
  ECX = (pop32());
  /* 10253203 pop ecx */
  ECX = (pop32());
L_10253204:;
  /* 10253204 mov dword ptr [0x10258c10], edi */
  w32((uint32_t)(0x10258c10), (EDI));
L_1025320a:;
  /* 1025320a push edi */
  push32((uint32_t)(EDI));
  /* 1025320b push 0x10258d38 */
  push32((uint32_t)(0x10258d38u));
  /* 10253210 call dword ptr [0x1025715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025715c))), 0x10253216u);
  /* 10253216 pop ecx */
  ECX = (pop32());
  /* 10253217 mov ebp, 0x10258ac0 */
  EBP = (0x10258ac0u);
  /* 1025321c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025321e pop ecx */
  ECX = (pop32());
  /* 1025321f jle 0x1025324c */
  if ((C.zf||C.sf!=C.of)) goto L_1025324c;
  /* 10253221 push edi */
  push32((uint32_t)(EDI));
  /* 10253222 push ebp */
  push32((uint32_t)(EBP));
  /* 10253223 push edi */
  push32((uint32_t)(EDI));
  /* 10253224 call dword ptr [0x10257160] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257160))), 0x1025322au);
  /* 1025322a push edi */
  push32((uint32_t)(EDI));
  /* 1025322b call dword ptr [0x10257124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257124))), 0x10253231u);
  /* 10253231 push edi */
  push32((uint32_t)(EDI));
  /* 10253232 push 0x10258d38 */
  push32((uint32_t)(0x10258d38u));
  /* 10253237 push edi */
  push32((uint32_t)(EDI));
  /* 10253238 call dword ptr [0x1025713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025713c))), 0x1025323eu);
  /* 1025323e push edi */
  push32((uint32_t)(EDI));
  /* 1025323f call dword ptr [0x102570b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570b4))), 0x10253245u);
  /* 10253245 push edi */
  push32((uint32_t)(EDI));
  /* 10253246 push ebp */
  push32((uint32_t)(EBP));
  /* 10253247 call ebx */
  call_ind((uint32_t)(EBX), 0x10253249u);
  /* 10253249 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1025324c:;
  /* 1025324c push edi */
  push32((uint32_t)(EDI));
  /* 1025324d push 0x10258b08 */
  push32((uint32_t)(0x10258b08u));
  /* 10253252 call dword ptr [0x1025715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025715c))), 0x10253258u);
  /* 10253258 pop ecx */
  ECX = (pop32());
  /* 10253259 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025325b pop ecx */
  ECX = (pop32());
  /* 1025325c jle 0x10253289 */
  if ((C.zf||C.sf!=C.of)) goto L_10253289;
  /* 1025325e push edi */
  push32((uint32_t)(EDI));
  /* 1025325f push ebp */
  push32((uint32_t)(EBP));
  /* 10253260 push edi */
  push32((uint32_t)(EDI));
  /* 10253261 call dword ptr [0x10257160] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257160))), 0x10253267u);
  /* 10253267 push edi */
  push32((uint32_t)(EDI));
  /* 10253268 call dword ptr [0x10257124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257124))), 0x1025326eu);
  /* 1025326e push edi */
  push32((uint32_t)(EDI));
  /* 1025326f push 0x10258b08 */
  push32((uint32_t)(0x10258b08u));
  /* 10253274 push edi */
  push32((uint32_t)(EDI));
  /* 10253275 call dword ptr [0x1025713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025713c))), 0x1025327bu);
  /* 1025327b push edi */
  push32((uint32_t)(EDI));
  /* 1025327c call dword ptr [0x102570b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570b4))), 0x10253282u);
  /* 10253282 push edi */
  push32((uint32_t)(EDI));
  /* 10253283 push ebp */
  push32((uint32_t)(EBP));
  /* 10253284 call ebx */
  call_ind((uint32_t)(EBX), 0x10253286u);
  /* 10253286 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10253289:;
  /* 10253289 push edi */
  push32((uint32_t)(EDI));
  /* 1025328a push 0x10258af0 */
  push32((uint32_t)(0x10258af0u));
  /* 1025328f call dword ptr [0x1025715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025715c))), 0x10253295u);
  /* 10253295 pop ecx */
  ECX = (pop32());
  /* 10253296 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253298 pop ecx */
  ECX = (pop32());
  /* 10253299 jle 0x102532c6 */
  if ((C.zf||C.sf!=C.of)) goto L_102532c6;
  /* 1025329b push edi */
  push32((uint32_t)(EDI));
  /* 1025329c push ebp */
  push32((uint32_t)(EBP));
  /* 1025329d push edi */
  push32((uint32_t)(EDI));
  /* 1025329e call dword ptr [0x10257160] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257160))), 0x102532a4u);
  /* 102532a4 push edi */
  push32((uint32_t)(EDI));
  /* 102532a5 call dword ptr [0x10257124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257124))), 0x102532abu);
  /* 102532ab push edi */
  push32((uint32_t)(EDI));
  /* 102532ac push 0x10258af0 */
  push32((uint32_t)(0x10258af0u));
  /* 102532b1 push edi */
  push32((uint32_t)(EDI));
  /* 102532b2 call dword ptr [0x1025713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025713c))), 0x102532b8u);
  /* 102532b8 push edi */
  push32((uint32_t)(EDI));
  /* 102532b9 call dword ptr [0x102570b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570b4))), 0x102532bfu);
  /* 102532bf push edi */
  push32((uint32_t)(EDI));
  /* 102532c0 push ebp */
  push32((uint32_t)(EBP));
  /* 102532c1 call ebx */
  call_ind((uint32_t)(EBX), 0x102532c3u);
  /* 102532c3 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102532c6:;
  /* 102532c6 push edi */
  push32((uint32_t)(EDI));
  /* 102532c7 push 0x10258af8 */
  push32((uint32_t)(0x10258af8u));
  /* 102532cc call dword ptr [0x1025715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025715c))), 0x102532d2u);
  /* 102532d2 pop ecx */
  ECX = (pop32());
  /* 102532d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102532d5 pop ecx */
  ECX = (pop32());
  /* 102532d6 jle 0x10253303 */
  if ((C.zf||C.sf!=C.of)) goto L_10253303;
  /* 102532d8 push edi */
  push32((uint32_t)(EDI));
  /* 102532d9 push ebp */
  push32((uint32_t)(EBP));
  /* 102532da push edi */
  push32((uint32_t)(EDI));
  /* 102532db call dword ptr [0x10257160] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257160))), 0x102532e1u);
  /* 102532e1 push edi */
  push32((uint32_t)(EDI));
  /* 102532e2 call dword ptr [0x10257124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257124))), 0x102532e8u);
  /* 102532e8 push edi */
  push32((uint32_t)(EDI));
  /* 102532e9 push 0x10258af8 */
  push32((uint32_t)(0x10258af8u));
  /* 102532ee push edi */
  push32((uint32_t)(EDI));
  /* 102532ef call dword ptr [0x1025713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025713c))), 0x102532f5u);
  /* 102532f5 push edi */
  push32((uint32_t)(EDI));
  /* 102532f6 call dword ptr [0x102570b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570b4))), 0x102532fcu);
  /* 102532fc push edi */
  push32((uint32_t)(EDI));
  /* 102532fd push ebp */
  push32((uint32_t)(EBP));
  /* 102532fe call ebx */
  call_ind((uint32_t)(EBX), 0x10253300u);
  /* 10253300 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10253303:;
  /* 10253303 push edi */
  push32((uint32_t)(EDI));
  /* 10253304 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x1025330au);
  /* 1025330a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025330c pop ecx */
  ECX = (pop32());
  /* 1025330d jle 0x10253347 */
  if ((C.zf||C.sf!=C.of)) goto L_10253347;
  /* 1025330f push 5 */
  push32((uint32_t)(0x5u));
  /* 10253311 push 0x10258b70 */
  push32((uint32_t)(0x10258b70u));
  /* 10253316 call dword ptr [0x1025715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025715c))), 0x1025331cu);
  /* 1025331c pop ecx */
  ECX = (pop32());
  /* 1025331d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025331f pop ecx */
  ECX = (pop32());
  /* 10253320 jle 0x10253347 */
  if ((C.zf||C.sf!=C.of)) goto L_10253347;
  /* 10253322 mov ebp, dword ptr [0x10257124] */
  EBP = (r32((uint32_t)(0x10257124)));
  /* 10253328 push 5 */
  push32((uint32_t)(0x5u));
  /* 1025332a call ebp */
  call_ind((uint32_t)(EBP), 0x1025332cu);
  /* 1025332c push edi */
  push32((uint32_t)(EDI));
  /* 1025332d push 0x10258b70 */
  push32((uint32_t)(0x10258b70u));
  /* 10253332 push 5 */
  push32((uint32_t)(0x5u));
  /* 10253334 call dword ptr [0x1025713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025713c))), 0x1025333au);
  /* 1025333a push 5 */
  push32((uint32_t)(0x5u));
  /* 1025333c call dword ptr [0x102570b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570b4))), 0x10253342u);
  /* 10253342 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10253345 jmp 0x1025334d */
  goto L_1025334d;
L_10253347:;
  /* 10253347 mov ebp, dword ptr [0x10257124] */
  EBP = (r32((uint32_t)(0x10257124)));
L_1025334d:;
  /* 1025334d push edi */
  push32((uint32_t)(EDI));
  /* 1025334e call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10253354u);
  /* 10253354 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253356 pop ecx */
  ECX = (pop32());
  /* 10253357 jle 0x10253389 */
  if ((C.zf||C.sf!=C.of)) goto L_10253389;
  /* 10253359 push 3 */
  push32((uint32_t)(0x3u));
  /* 1025335b push 0x10258b70 */
  push32((uint32_t)(0x10258b70u));
  /* 10253360 call dword ptr [0x1025715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025715c))), 0x10253366u);
  /* 10253366 pop ecx */
  ECX = (pop32());
  /* 10253367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253369 pop ecx */
  ECX = (pop32());
  /* 1025336a jle 0x10253389 */
  if ((C.zf||C.sf!=C.of)) goto L_10253389;
  /* 1025336c push 3 */
  push32((uint32_t)(0x3u));
  /* 1025336e call ebp */
  call_ind((uint32_t)(EBP), 0x10253370u);
  /* 10253370 push edi */
  push32((uint32_t)(EDI));
  /* 10253371 push 0x10258b70 */
  push32((uint32_t)(0x10258b70u));
  /* 10253376 push 3 */
  push32((uint32_t)(0x3u));
  /* 10253378 call dword ptr [0x1025713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025713c))), 0x1025337eu);
  /* 1025337e push 3 */
  push32((uint32_t)(0x3u));
  /* 10253380 call dword ptr [0x102570b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570b4))), 0x10253386u);
  /* 10253386 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10253389:;
  /* 10253389 push 3 */
  push32((uint32_t)(0x3u));
  /* 1025338b push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 10253390 call dword ptr [0x1025715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025715c))), 0x10253396u);
  /* 10253396 pop ecx */
  ECX = (pop32());
  /* 10253397 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253399 pop ecx */
  ECX = (pop32());
  /* 1025339a jle 0x102533b9 */
  if ((C.zf||C.sf!=C.of)) goto L_102533b9;
  /* 1025339c push 3 */
  push32((uint32_t)(0x3u));
  /* 1025339e call ebp */
  call_ind((uint32_t)(EBP), 0x102533a0u);
  /* 102533a0 push edi */
  push32((uint32_t)(EDI));
  /* 102533a1 push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 102533a6 push 3 */
  push32((uint32_t)(0x3u));
  /* 102533a8 call dword ptr [0x1025713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025713c))), 0x102533aeu);
  /* 102533ae push 3 */
  push32((uint32_t)(0x3u));
  /* 102533b0 call dword ptr [0x102570b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570b4))), 0x102533b6u);
  /* 102533b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102533b9:;
  /* 102533b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 102533bb push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 102533c0 call dword ptr [0x1025715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025715c))), 0x102533c6u);
  /* 102533c6 pop ecx */
  ECX = (pop32());
  /* 102533c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102533c9 pop ecx */
  ECX = (pop32());
  /* 102533ca jle 0x102533e9 */
  if ((C.zf||C.sf!=C.of)) goto L_102533e9;
  /* 102533cc push 5 */
  push32((uint32_t)(0x5u));
  /* 102533ce call ebp */
  call_ind((uint32_t)(EBP), 0x102533d0u);
  /* 102533d0 push edi */
  push32((uint32_t)(EDI));
  /* 102533d1 push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 102533d6 push 5 */
  push32((uint32_t)(0x5u));
  /* 102533d8 call dword ptr [0x1025713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025713c))), 0x102533deu);
  /* 102533de push 5 */
  push32((uint32_t)(0x5u));
  /* 102533e0 call dword ptr [0x102570b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570b4))), 0x102533e6u);
  /* 102533e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102533e9:;
  /* 102533e9 push 0xc */
  push32((uint32_t)(0xcu));
  /* 102533eb call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102533f1u);
  /* 102533f1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102533f3 pop ecx */
  ECX = (pop32());
  /* 102533f4 je 0x10253466 */
  if (C.zf) goto L_10253466;
  /* 102533f6 push edi */
  push32((uint32_t)(EDI));
  /* 102533f7 push 0x10258bd8 */
  push32((uint32_t)(0x10258bd8u));
  /* 102533fc call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10253402u);
  /* 10253402 pop ecx */
  ECX = (pop32());
  /* 10253403 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253405 pop ecx */
  ECX = (pop32());
  /* 10253406 jle 0x10253466 */
  if ((C.zf||C.sf!=C.of)) goto L_10253466;
  /* 10253408 push 5 */
  push32((uint32_t)(0x5u));
  /* 1025340a push 0x10258bd8 */
  push32((uint32_t)(0x10258bd8u));
  /* 1025340f call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10253415u);
  /* 10253415 pop ecx */
  ECX = (pop32());
  /* 10253416 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253418 pop ecx */
  ECX = (pop32());
  /* 10253419 jne 0x10253466 */
  if (!C.zf) goto L_10253466;
  /* 1025341b push edi */
  push32((uint32_t)(EDI));
  /* 1025341c push 0xc */
  push32((uint32_t)(0xcu));
  /* 1025341e call esi */
  call_ind((uint32_t)(ESI), 0x10253420u);
  /* 10253420 push 0x10258580 */
  push32((uint32_t)(0x10258580u));
  /* 10253425 call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x1025342bu);
  /* 1025342b push 5 */
  push32((uint32_t)(0x5u));
  /* 1025342d call ebp */
  call_ind((uint32_t)(EBP), 0x1025342fu);
  /* 1025342f push edi */
  push32((uint32_t)(EDI));
  /* 10253430 push 0x10258bf8 */
  push32((uint32_t)(0x10258bf8u));
  /* 10253435 call ebx */
  call_ind((uint32_t)(EBX), 0x10253437u);
  /* 10253437 push 5 */
  push32((uint32_t)(0x5u));
  /* 10253439 call dword ptr [0x102570b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570b4))), 0x1025343fu);
  /* 1025343f push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10253441 call dword ptr [0x102570ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570ec))), 0x10253447u);
  /* 10253447 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10253449 call dword ptr [0x10257130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257130))), 0x1025344fu);
  /* 1025344f push edi */
  push32((uint32_t)(EDI));
  /* 10253450 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10253456u);
  /* 10253456 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10253459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025345b jne 0x10253466 */
  if (!C.zf) goto L_10253466;
  /* 1025345d push 2 */
  push32((uint32_t)(0x2u));
  /* 1025345f call dword ptr [0x10257104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257104))), 0x10253465u);
  /* 10253465 pop ecx */
  ECX = (pop32());
L_10253466:;
  /* 10253466 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10253468 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x1025346eu);
  /* 1025346e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253470 pop ecx */
  ECX = (pop32());
  /* 10253471 je 0x10253517 */
  if (C.zf) goto L_10253517;
  /* 10253477 push 7 */
  push32((uint32_t)(0x7u));
  /* 10253479 call dword ptr [0x10257118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257118))), 0x1025347fu);
  /* 1025347f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253481 pop ecx */
  ECX = (pop32());
  /* 10253482 je 0x10253517 */
  if (C.zf) goto L_10253517;
  /* 10253488 push edi */
  push32((uint32_t)(EDI));
  /* 10253489 push 0x10258bd8 */
  push32((uint32_t)(0x10258bd8u));
  /* 1025348e call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10253494u);
  /* 10253494 pop ecx */
  ECX = (pop32());
  /* 10253495 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253497 pop ecx */
  ECX = (pop32());
  /* 10253498 jne 0x10253517 */
  if (!C.zf) goto L_10253517;
  /* 1025349a push edi */
  push32((uint32_t)(EDI));
  /* 1025349b call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x102534a1u);
  /* 102534a1 pop ecx */
  ECX = (pop32());
  /* 102534a2 mov ebp, 0x80 */
  EBP = (0x80u);
  /* 102534a7 push ebp */
  push32((uint32_t)(EBP));
  /* 102534a8 push 0x10258cb0 */
  push32((uint32_t)(0x10258cb0u));
  /* 102534ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102534af push 5 */
  push32((uint32_t)(0x5u));
  /* 102534b1 push 0x10258c08 */
  push32((uint32_t)(0x10258c08u));
  /* 102534b6 jne 0x102534bf */
  if (!C.zf) goto L_102534bf;
  /* 102534b8 push 0x10258c28 */
  push32((uint32_t)(0x10258c28u));
  /* 102534bd jmp 0x102534c4 */
  goto L_102534c4;
L_102534bf:;
  /* 102534bf push 0x10258978 */
  push32((uint32_t)(0x10258978u));
L_102534c4:;
  /* 102534c4 push 0x10258d50 */
  push32((uint32_t)(0x10258d50u));
  /* 102534c9 call dword ptr [0x102570c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c0))), 0x102534cfu);
  /* 102534cf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102534d2 push edi */
  push32((uint32_t)(EDI));
  /* 102534d3 push 0x10258d50 */
  push32((uint32_t)(0x10258d50u));
  /* 102534d8 call ebx */
  call_ind((uint32_t)(EBX), 0x102534dau);
  /* 102534da push edi */
  push32((uint32_t)(EDI));
  /* 102534db push ebp */
  push32((uint32_t)(EBP));
  /* 102534dc push 0x10258bc0 */
  push32((uint32_t)(0x10258bc0u));
  /* 102534e1 push 5 */
  push32((uint32_t)(0x5u));
  /* 102534e3 call dword ptr [0x10257114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257114))), 0x102534e9u);
  /* 102534e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 102534eb push ebp */
  push32((uint32_t)(EBP));
  /* 102534ec push 0x10258b90 */
  push32((uint32_t)(0x10258b90u));
  /* 102534f1 push 5 */
  push32((uint32_t)(0x5u));
  /* 102534f3 call dword ptr [0x10257114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257114))), 0x102534f9u);
  /* 102534f9 push edi */
  push32((uint32_t)(EDI));
  /* 102534fa call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10253500u);
  /* 10253500 push 5 */
  push32((uint32_t)(0x5u));
  /* 10253502 pop ecx */
  ECX = (pop32());
  /* 10253503 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10253505 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1025350b push ecx */
  push32((uint32_t)(ECX));
  /* 1025350c push 7 */
  push32((uint32_t)(0x7u));
  /* 1025350e call dword ptr [0x102570e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e4))), 0x10253514u);
  /* 10253514 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10253517:;
  /* 10253517 mov ebp, dword ptr [0x102570f0] */
  EBP = (r32((uint32_t)(0x102570f0)));
  /* 1025351d push 0x10258b18 */
  push32((uint32_t)(0x10258b18u));
  /* 10253522 call ebp */
  call_ind((uint32_t)(EBP), 0x10253524u);
  /* 10253524 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253526 pop ecx */
  ECX = (pop32());
  /* 10253527 jle 0x1025354f */
  if ((C.zf||C.sf!=C.of)) goto L_1025354f;
  /* 10253529 push edi */
  push32((uint32_t)(EDI));
  /* 1025352a push 0x10258ca8 */
  push32((uint32_t)(0x10258ca8u));
  /* 1025352f call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10253535u);
  /* 10253535 pop ecx */
  ECX = (pop32());
  /* 10253536 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253538 pop ecx */
  ECX = (pop32());
  /* 10253539 jle 0x1025354f */
  if ((C.zf||C.sf!=C.of)) goto L_1025354f;
  /* 1025353b push edi */
  push32((uint32_t)(EDI));
  /* 1025353c push 0x10258ca8 */
  push32((uint32_t)(0x10258ca8u));
  /* 10253541 push 0x10258b18 */
  push32((uint32_t)(0x10258b18u));
  /* 10253546 call dword ptr [0x10257164] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257164))), 0x1025354cu);
  /* 1025354c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1025354f:;
  /* 1025354f push 0x10258b18 */
  push32((uint32_t)(0x10258b18u));
  /* 10253554 call ebp */
  call_ind((uint32_t)(EBP), 0x10253556u);
  /* 10253556 mov dword ptr [esp], 0x10258b18 */
  w32((uint32_t)(ESP), (0x10258b18u));
  /* 1025355d push 0x10258d98 */
  push32((uint32_t)(0x10258d98u));
  /* 10253562 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 10253566 call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x1025356cu);
  /* 1025356c cmp eax, dword ptr [esp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10253570 pop ecx */
  ECX = (pop32());
  /* 10253571 pop ecx */
  ECX = (pop32());
  /* 10253572 jge 0x1025358f */
  if ((C.sf==C.of)) goto L_1025358f;
  /* 10253574 push edi */
  push32((uint32_t)(EDI));
  /* 10253575 push 0x10258b18 */
  push32((uint32_t)(0x10258b18u));
  /* 1025357a call ebx */
  call_ind((uint32_t)(EBX), 0x1025357cu);
  /* 1025357c push edi */
  push32((uint32_t)(EDI));
  /* 1025357d push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1025357f push 0x10258d98 */
  push32((uint32_t)(0x10258d98u));
  /* 10253584 push 1 */
  push32((uint32_t)(0x1u));
  /* 10253586 call dword ptr [0x10257140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257140))), 0x1025358cu);
  /* 1025358c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1025358f:;
  /* 1025358f push 0x10258b28 */
  push32((uint32_t)(0x10258b28u));
  /* 10253594 call ebp */
  call_ind((uint32_t)(EBP), 0x10253596u);
  /* 10253596 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253598 pop ecx */
  ECX = (pop32());
  /* 10253599 jle 0x102535c1 */
  if ((C.zf||C.sf!=C.of)) goto L_102535c1;
  /* 1025359b push edi */
  push32((uint32_t)(EDI));
  /* 1025359c push 0x10258cc0 */
  push32((uint32_t)(0x10258cc0u));
  /* 102535a1 call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x102535a7u);
  /* 102535a7 pop ecx */
  ECX = (pop32());
  /* 102535a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102535aa pop ecx */
  ECX = (pop32());
  /* 102535ab jle 0x102535c1 */
  if ((C.zf||C.sf!=C.of)) goto L_102535c1;
  /* 102535ad push edi */
  push32((uint32_t)(EDI));
  /* 102535ae push 0x10258cc0 */
  push32((uint32_t)(0x10258cc0u));
  /* 102535b3 push 0x10258b28 */
  push32((uint32_t)(0x10258b28u));
  /* 102535b8 call dword ptr [0x10257164] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257164))), 0x102535beu);
  /* 102535be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102535c1:;
  /* 102535c1 push 0x10258b28 */
  push32((uint32_t)(0x10258b28u));
  /* 102535c6 call ebp */
  call_ind((uint32_t)(EBP), 0x102535c8u);
  /* 102535c8 mov dword ptr [esp], 0x10258b28 */
  w32((uint32_t)(ESP), (0x10258b28u));
  /* 102535cf push 0x10258da0 */
  push32((uint32_t)(0x10258da0u));
  /* 102535d4 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 102535d8 call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x102535deu);
  /* 102535de cmp eax, dword ptr [esp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102535e2 pop ecx */
  ECX = (pop32());
  /* 102535e3 pop ecx */
  ECX = (pop32());
  /* 102535e4 jge 0x10253601 */
  if ((C.sf==C.of)) goto L_10253601;
  /* 102535e6 push edi */
  push32((uint32_t)(EDI));
  /* 102535e7 push 0x10258b28 */
  push32((uint32_t)(0x10258b28u));
  /* 102535ec call ebx */
  call_ind((uint32_t)(EBX), 0x102535eeu);
  /* 102535ee push edi */
  push32((uint32_t)(EDI));
  /* 102535ef push 0x46 */
  push32((uint32_t)(0x46u));
  /* 102535f1 push 0x10258da0 */
  push32((uint32_t)(0x10258da0u));
  /* 102535f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102535f8 call dword ptr [0x10257140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257140))), 0x102535feu);
  /* 102535fe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10253601:;
  /* 10253601 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10253603 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10253609u);
  /* 10253609 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025360b pop ecx */
  ECX = (pop32());
  /* 1025360c je 0x102536e8 */
  if (C.zf) goto L_102536e8;
  /* 10253612 push 0x10258b20 */
  push32((uint32_t)(0x10258b20u));
  /* 10253617 call ebp */
  call_ind((uint32_t)(EBP), 0x10253619u);
  /* 10253619 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025361b pop ecx */
  ECX = (pop32());
  /* 1025361c jle 0x102536e8 */
  if ((C.zf||C.sf!=C.of)) goto L_102536e8;
  /* 10253622 push edi */
  push32((uint32_t)(EDI));
  /* 10253623 push 0x10258cc8 */
  push32((uint32_t)(0x10258cc8u));
  /* 10253628 call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x1025362eu);
  /* 1025362e pop ecx */
  ECX = (pop32());
  /* 1025362f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253631 pop ecx */
  ECX = (pop32());
  /* 10253632 jle 0x102536e8 */
  if ((C.zf||C.sf!=C.of)) goto L_102536e8;
  /* 10253638 push 5 */
  push32((uint32_t)(0x5u));
  /* 1025363a push 0x10258cc8 */
  push32((uint32_t)(0x10258cc8u));
  /* 1025363f call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10253645u);
  /* 10253645 pop ecx */
  ECX = (pop32());
  /* 10253646 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253648 pop ecx */
  ECX = (pop32());
  /* 10253649 jne 0x102536e8 */
  if (!C.zf) goto L_102536e8;
  /* 1025364f push edi */
  push32((uint32_t)(EDI));
  /* 10253650 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10253652 call esi */
  call_ind((uint32_t)(ESI), 0x10253654u);
  /* 10253654 push 0x1025856c */
  push32((uint32_t)(0x1025856cu));
  /* 10253659 push edi */
  push32((uint32_t)(EDI));
  /* 1025365a push 0x10258564 */
  push32((uint32_t)(0x10258564u));
  /* 1025365f push 9 */
  push32((uint32_t)(0x9u));
  /* 10253661 call dword ptr [0x10257168] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257168))), 0x10253667u);
  /* 10253667 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025366a sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1025366c je 0x102536dc */
  if (C.zf) goto L_102536dc;
  /* 1025366e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1025366f je 0x102536d4 */
  if (C.zf) goto L_102536d4;
  /* 10253671 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10253672 jne 0x102536e8 */
  if (!C.zf) goto L_102536e8;
  /* 10253674 push 0x1025854c */
  push32((uint32_t)(0x1025854cu));
  /* 10253679 push edi */
  push32((uint32_t)(EDI));
  /* 1025367a push 0x10258540 */
  push32((uint32_t)(0x10258540u));
  /* 1025367f push 9 */
  push32((uint32_t)(0x9u));
  /* 10253681 call dword ptr [0x10257168] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257168))), 0x10253687u);
  /* 10253687 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025368a sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1025368c je 0x102536b2 */
  if (C.zf) goto L_102536b2;
  /* 1025368e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1025368f je 0x102536dc */
  if (C.zf) goto L_102536dc;
  /* 10253691 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10253692 je 0x102536d4 */
  if (C.zf) goto L_102536d4;
  /* 10253694 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10253695 jne 0x102536e8 */
  if (!C.zf) goto L_102536e8;
  /* 10253697 push 0x10258534 */
  push32((uint32_t)(0x10258534u));
  /* 1025369c call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x102536a2u);
  /* 102536a2 push edi */
  push32((uint32_t)(EDI));
  /* 102536a3 push 0xe */
  push32((uint32_t)(0xeu));
  /* 102536a5 call esi */
  call_ind((uint32_t)(ESI), 0x102536a7u);
  /* 102536a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102536a9 push 0xf */
  push32((uint32_t)(0xfu));
  /* 102536ab call esi */
  call_ind((uint32_t)(ESI), 0x102536adu);
  /* 102536ad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102536b0 jmp 0x102536e8 */
  goto L_102536e8;
L_102536b2:;
  /* 102536b2 push edi */
  push32((uint32_t)(EDI));
  /* 102536b3 push 0xe */
  push32((uint32_t)(0xeu));
  /* 102536b5 call esi */
  call_ind((uint32_t)(ESI), 0x102536b7u);
  /* 102536b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 102536b9 call dword ptr [0x10257124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257124))), 0x102536bfu);
  /* 102536bf push edi */
  push32((uint32_t)(EDI));
  /* 102536c0 push 0x10258b20 */
  push32((uint32_t)(0x10258b20u));
  /* 102536c5 call ebx */
  call_ind((uint32_t)(EBX), 0x102536c7u);
  /* 102536c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 102536c9 call dword ptr [0x102570b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570b4))), 0x102536cfu);
  /* 102536cf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102536d2 jmp 0x102536e8 */
  goto L_102536e8;
L_102536d4:;
  /* 102536d4 push edi */
  push32((uint32_t)(EDI));
  /* 102536d5 push 0xe */
  push32((uint32_t)(0xeu));
  /* 102536d7 call esi */
  call_ind((uint32_t)(ESI), 0x102536d9u);
  /* 102536d9 pop ecx */
  ECX = (pop32());
  /* 102536da jmp 0x102536e7 */
  goto L_102536e7;
L_102536dc:;
  /* 102536dc push 0x10258528 */
  push32((uint32_t)(0x10258528u));
  /* 102536e1 call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x102536e7u);
L_102536e7:;
  /* 102536e7 pop ecx */
  ECX = (pop32());
L_102536e8:;
  /* 102536e8 push 0xf */
  push32((uint32_t)(0xfu));
  /* 102536ea call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102536f0u);
  /* 102536f0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102536f2 pop ecx */
  ECX = (pop32());
  /* 102536f3 je 0x10253749 */
  if (C.zf) goto L_10253749;
  /* 102536f5 push edi */
  push32((uint32_t)(EDI));
  /* 102536f6 push 0x10258d08 */
  push32((uint32_t)(0x10258d08u));
  /* 102536fb call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10253701u);
  /* 10253701 pop ecx */
  ECX = (pop32());
  /* 10253702 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253704 pop ecx */
  ECX = (pop32());
  /* 10253705 jle 0x10253749 */
  if ((C.zf||C.sf!=C.of)) goto L_10253749;
  /* 10253707 push edi */
  push32((uint32_t)(EDI));
  /* 10253708 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1025370a call esi */
  call_ind((uint32_t)(ESI), 0x1025370cu);
  /* 1025370c push edi */
  push32((uint32_t)(EDI));
  /* 1025370d call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10253713u);
  /* 10253713 push 5 */
  push32((uint32_t)(0x5u));
  /* 10253715 pop ecx */
  ECX = (pop32());
  /* 10253716 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10253718 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1025371e push ecx */
  push32((uint32_t)(ECX));
  /* 1025371f push 0x10258520 */
  push32((uint32_t)(0x10258520u));
  /* 10253724 call dword ptr [0x10257100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257100))), 0x1025372au);
  /* 1025372a push edi */
  push32((uint32_t)(EDI));
  /* 1025372b call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10253731u);
  /* 10253731 push 5 */
  push32((uint32_t)(0x5u));
  /* 10253733 pop ecx */
  ECX = (pop32());
  /* 10253734 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10253736 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1025373c push ecx */
  push32((uint32_t)(ECX));
  /* 1025373d push 1 */
  push32((uint32_t)(0x1u));
  /* 1025373f push edi */
  push32((uint32_t)(EDI));
  /* 10253740 call dword ptr [0x102570fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570fc))), 0x10253746u);
  /* 10253746 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10253749:;
  /* 10253749 push 0xe */
  push32((uint32_t)(0xeu));
  /* 1025374b call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10253751u);
  /* 10253751 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253753 pop ecx */
  ECX = (pop32());
  /* 10253754 je 0x102538f8 */
  if (C.zf) goto L_102538f8;
  /* 1025375a push 0x10258b60 */
  push32((uint32_t)(0x10258b60u));
  /* 1025375f call ebp */
  call_ind((uint32_t)(EBP), 0x10253761u);
  /* 10253761 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253763 pop ecx */
  ECX = (pop32());
  /* 10253764 jle 0x102538f8 */
  if ((C.zf||C.sf!=C.of)) goto L_102538f8;
  /* 1025376a push 0x10258b60 */
  push32((uint32_t)(0x10258b60u));
  /* 1025376f push 0x10258da8 */
  push32((uint32_t)(0x10258da8u));
  /* 10253774 call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x1025377au);
  /* 1025377a mov edx, eax */
  EDX = (EAX);
  /* 1025377c push 0x10258b60 */
  push32((uint32_t)(0x10258b60u));
  /* 10253781 mov dword ptr [esp + 0x1c], edx */
  w32((uint32_t)(ESP + 0x1c), (EDX));
  /* 10253785 call ebp */
  call_ind((uint32_t)(EBP), 0x10253787u);
  /* 10253787 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 1025378b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025378e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10253790 jne 0x102538f2 */
  if (!C.zf) goto L_102538f2;
  /* 10253796 mov ebp, 0x10258b60 */
  EBP = (0x10258b60u);
  /* 1025379b push edi */
  push32((uint32_t)(EDI));
  /* 1025379c push ebp */
  push32((uint32_t)(EBP));
  /* 1025379d call dword ptr [0x1025715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025715c))), 0x102537a3u);
  /* 102537a3 mov edx, eax */
  EDX = (EAX);
  /* 102537a5 push ebp */
  push32((uint32_t)(EBP));
  /* 102537a6 mov dword ptr [esp + 0x1c], edx */
  w32((uint32_t)(ESP + 0x1c), (EDX));
  /* 102537aa call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x102537b0u);
  /* 102537b0 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 102537b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102537b7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102537b9 jne 0x102538f2 */
  if (!C.zf) goto L_102538f2;
  /* 102537bf push edi */
  push32((uint32_t)(EDI));
  /* 102537c0 push 0xe */
  push32((uint32_t)(0xeu));
  /* 102537c2 call esi */
  call_ind((uint32_t)(ESI), 0x102537c4u);
  /* 102537c4 push edi */
  push32((uint32_t)(EDI));
  /* 102537c5 push 0x10258ac0 */
  push32((uint32_t)(0x10258ac0u));
  /* 102537ca push edi */
  push32((uint32_t)(EDI));
  /* 102537cb call dword ptr [0x10257160] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257160))), 0x102537d1u);
  /* 102537d1 push edi */
  push32((uint32_t)(EDI));
  /* 102537d2 call dword ptr [0x10257124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257124))), 0x102537d8u);
  /* 102537d8 push edi */
  push32((uint32_t)(EDI));
  /* 102537d9 push ebp */
  push32((uint32_t)(EBP));
  /* 102537da push edi */
  push32((uint32_t)(EDI));
  /* 102537db call dword ptr [0x1025713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025713c))), 0x102537e1u);
  /* 102537e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 102537e3 push edi */
  push32((uint32_t)(EDI));
  /* 102537e4 call dword ptr [0x102570e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e8))), 0x102537eau);
  /* 102537ea push edi */
  push32((uint32_t)(EDI));
  /* 102537eb push ebp */
  push32((uint32_t)(EBP));
  /* 102537ec push 4 */
  push32((uint32_t)(0x4u));
  /* 102537ee call dword ptr [0x1025713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025713c))), 0x102537f4u);
  /* 102537f4 push edi */
  push32((uint32_t)(EDI));
  /* 102537f5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102537f7 push 0x10258cc8 */
  push32((uint32_t)(0x10258cc8u));
  /* 102537fc push 4 */
  push32((uint32_t)(0x4u));
  /* 102537fe call dword ptr [0x10257140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257140))), 0x10253804u);
  /* 10253804 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10253807 push edi */
  push32((uint32_t)(EDI));
  /* 10253808 push 0x10258ac0 */
  push32((uint32_t)(0x10258ac0u));
  /* 1025380d call ebx */
  call_ind((uint32_t)(EBX), 0x1025380fu);
  /* 1025380f push ebp */
  push32((uint32_t)(EBP));
  /* 10253810 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253816u);
  /* 10253816 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10253819 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025381c jle 0x1025383a */
  if ((C.zf||C.sf!=C.of)) goto L_1025383a;
  /* 1025381e push 0x10258518 */
  push32((uint32_t)(0x10258518u));
  /* 10253823 call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x10253829u);
  /* 10253829 push 1 */
  push32((uint32_t)(0x1u));
  /* 1025382b push 0xf */
  push32((uint32_t)(0xfu));
  /* 1025382d call esi */
  call_ind((uint32_t)(ESI), 0x1025382fu);
  /* 1025382f push 1 */
  push32((uint32_t)(0x1u));
  /* 10253831 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10253833 call esi */
  call_ind((uint32_t)(ESI), 0x10253835u);
  /* 10253835 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10253838 jmp 0x10253875 */
  goto L_10253875;
L_1025383a:;
  /* 1025383a push 0x1025850c */
  push32((uint32_t)(0x1025850cu));
  /* 1025383f push edi */
  push32((uint32_t)(EDI));
  /* 10253840 push 0x10258500 */
  push32((uint32_t)(0x10258500u));
  /* 10253845 push 9 */
  push32((uint32_t)(0x9u));
  /* 10253847 call dword ptr [0x10257168] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257168))), 0x1025384du);
  /* 1025384d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10253850 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10253852 je 0x1025386d */
  if (C.zf) goto L_1025386d;
  /* 10253854 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10253855 jne 0x10253875 */
  if (!C.zf) goto L_10253875;
  /* 10253857 push 0x10258534 */
  push32((uint32_t)(0x10258534u));
  /* 1025385c call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x10253862u);
  /* 10253862 push 1 */
  push32((uint32_t)(0x1u));
  /* 10253864 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10253866 call esi */
  call_ind((uint32_t)(ESI), 0x10253868u);
  /* 10253868 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025386b jmp 0x10253875 */
  goto L_10253875;
L_1025386d:;
  /* 1025386d push 1 */
  push32((uint32_t)(0x1u));
  /* 1025386f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10253871 call esi */
  call_ind((uint32_t)(ESI), 0x10253873u);
  /* 10253873 pop ecx */
  ECX = (pop32());
  /* 10253874 pop ecx */
  ECX = (pop32());
L_10253875:;
  /* 10253875 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10253877 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x1025387du);
  /* 1025387d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025387f pop ecx */
  ECX = (pop32());
  /* 10253880 je 0x102538f2 */
  if (C.zf) goto L_102538f2;
  /* 10253882 push edi */
  push32((uint32_t)(EDI));
  /* 10253883 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10253889u);
  /* 10253889 pop ecx */
  ECX = (pop32());
  /* 1025388a push 9 */
  push32((uint32_t)(0x9u));
  /* 1025388c pop ebp */
  EBP = (pop32());
  /* 1025388d sub ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; EBP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1025388f imul ebp, ebp, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EBP)*(int64_t)(int32_t)(0x1388u); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10253895 call dword ptr [0x1025712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025712c))), 0x1025389bu);
  /* 1025389b cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025389d jle 0x102538f2 */
  if ((C.zf||C.sf!=C.of)) goto L_102538f2;
  /* 1025389f mov ebp, dword ptr [0x102570f0] */
  EBP = (r32((uint32_t)(0x102570f0)));
  /* 102538a5 push 0x10258b20 */
  push32((uint32_t)(0x10258b20u));
  /* 102538aa call ebp */
  call_ind((uint32_t)(EBP), 0x102538acu);
  /* 102538ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102538ae pop ecx */
  ECX = (pop32());
  /* 102538af jle 0x102538f2 */
  if ((C.zf||C.sf!=C.of)) goto L_102538f2;
  /* 102538b1 push 0x10258b78 */
  push32((uint32_t)(0x10258b78u));
  /* 102538b6 call ebp */
  call_ind((uint32_t)(EBP), 0x102538b8u);
  /* 102538b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102538ba pop ecx */
  ECX = (pop32());
  /* 102538bb jle 0x102538f2 */
  if ((C.zf||C.sf!=C.of)) goto L_102538f2;
  /* 102538bd push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 102538c2 call ebp */
  call_ind((uint32_t)(EBP), 0x102538c4u);
  /* 102538c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102538c6 pop ecx */
  ECX = (pop32());
  /* 102538c7 jle 0x102538f2 */
  if ((C.zf||C.sf!=C.of)) goto L_102538f2;
  /* 102538c9 push edi */
  push32((uint32_t)(EDI));
  /* 102538ca push 0x10 */
  push32((uint32_t)(0x10u));
  /* 102538cc call esi */
  call_ind((uint32_t)(ESI), 0x102538ceu);
  /* 102538ce push edi */
  push32((uint32_t)(EDI));
  /* 102538cf call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x102538d5u);
  /* 102538d5 push 0xa */
  push32((uint32_t)(0xau));
  /* 102538d7 pop ecx */
  ECX = (pop32());
  /* 102538d8 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102538da imul ecx, ecx, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x32u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102538dd push ecx */
  push32((uint32_t)(ECX));
  /* 102538de push 0x102584f4 */
  push32((uint32_t)(0x102584f4u));
  /* 102538e3 call dword ptr [0x10257100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257100))), 0x102538e9u);
  /* 102538e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 102538eb push 0x4a */
  push32((uint32_t)(0x4au));
  /* 102538ed call esi */
  call_ind((uint32_t)(ESI), 0x102538efu);
  /* 102538ef add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102538f2:;
  /* 102538f2 mov ebp, dword ptr [0x102570f0] */
  EBP = (r32((uint32_t)(0x102570f0)));
L_102538f8:;
  /* 102538f8 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 102538fa call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10253900u);
  /* 10253900 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253902 pop ecx */
  ECX = (pop32());
  /* 10253903 je 0x1025397d */
  if (C.zf) goto L_1025397d;
  /* 10253905 push edi */
  push32((uint32_t)(EDI));
  /* 10253906 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x1025390cu);
  /* 1025390c pop ecx */
  ECX = (pop32());
  /* 1025390d push 9 */
  push32((uint32_t)(0x9u));
  /* 1025390f pop ebp */
  EBP = (pop32());
  /* 10253910 sub ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; EBP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10253912 imul ebp, ebp, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EBP)*(int64_t)(int32_t)(0x1388u); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10253918 call dword ptr [0x1025712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025712c))), 0x1025391eu);
  /* 1025391e cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10253920 jle 0x10253977 */
  if ((C.zf||C.sf!=C.of)) goto L_10253977;
  /* 10253922 mov ebp, dword ptr [0x102570f0] */
  EBP = (r32((uint32_t)(0x102570f0)));
  /* 10253928 push 0x10258b20 */
  push32((uint32_t)(0x10258b20u));
  /* 1025392d call ebp */
  call_ind((uint32_t)(EBP), 0x1025392fu);
  /* 1025392f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253931 pop ecx */
  ECX = (pop32());
  /* 10253932 jle 0x1025397d */
  if ((C.zf||C.sf!=C.of)) goto L_1025397d;
  /* 10253934 push 0x10258b78 */
  push32((uint32_t)(0x10258b78u));
  /* 10253939 call ebp */
  call_ind((uint32_t)(EBP), 0x1025393bu);
  /* 1025393b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025393d pop ecx */
  ECX = (pop32());
  /* 1025393e jle 0x1025397d */
  if ((C.zf||C.sf!=C.of)) goto L_1025397d;
  /* 10253940 push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 10253945 call ebp */
  call_ind((uint32_t)(EBP), 0x10253947u);
  /* 10253947 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253949 pop ecx */
  ECX = (pop32());
  /* 1025394a jle 0x1025397d */
  if ((C.zf||C.sf!=C.of)) goto L_1025397d;
  /* 1025394c push edi */
  push32((uint32_t)(EDI));
  /* 1025394d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1025394f call esi */
  call_ind((uint32_t)(ESI), 0x10253951u);
  /* 10253951 push edi */
  push32((uint32_t)(EDI));
  /* 10253952 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10253958u);
  /* 10253958 push 0xa */
  push32((uint32_t)(0xau));
  /* 1025395a pop ecx */
  ECX = (pop32());
  /* 1025395b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1025395d imul ecx, ecx, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x32u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10253960 push ecx */
  push32((uint32_t)(ECX));
  /* 10253961 push 0x102584ec */
  push32((uint32_t)(0x102584ecu));
  /* 10253966 call dword ptr [0x10257100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257100))), 0x1025396cu);
  /* 1025396c push 1 */
  push32((uint32_t)(0x1u));
  /* 1025396e push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10253970 call esi */
  call_ind((uint32_t)(ESI), 0x10253972u);
  /* 10253972 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10253975 jmp 0x1025397d */
  goto L_1025397d;
L_10253977:;
  /* 10253977 mov ebp, dword ptr [0x102570f0] */
  EBP = (r32((uint32_t)(0x102570f0)));
L_1025397d:;
  /* 1025397d push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1025397f call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10253985u);
  /* 10253985 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253987 pop ecx */
  ECX = (pop32());
  /* 10253988 je 0x102539f2 */
  if (C.zf) goto L_102539f2;
  /* 1025398a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1025398c call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10253992u);
  /* 10253992 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253994 pop ecx */
  ECX = (pop32());
  /* 10253995 je 0x102539f2 */
  if (C.zf) goto L_102539f2;
  /* 10253997 push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 1025399c call ebp */
  call_ind((uint32_t)(EBP), 0x1025399eu);
  /* 1025399e push edi */
  push32((uint32_t)(EDI));
  /* 1025399f push edi */
  push32((uint32_t)(EDI));
  /* 102539a0 mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 102539a4 call dword ptr [0x102570f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f4))), 0x102539aau);
  /* 102539aa mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 102539ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102539b1 imul ecx, ecx, 0xfa0 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfa0u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102539b7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102539b9 jl 0x102539f2 */
  if ((C.sf!=C.of)) goto L_102539f2;
  /* 102539bb push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 102539c0 call ebp */
  call_ind((uint32_t)(EBP), 0x102539c2u);
  /* 102539c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102539c4 pop ecx */
  ECX = (pop32());
  /* 102539c5 jle 0x102539f2 */
  if ((C.zf||C.sf!=C.of)) goto L_102539f2;
  /* 102539c7 push 0x10258b78 */
  push32((uint32_t)(0x10258b78u));
  /* 102539cc call ebp */
  call_ind((uint32_t)(EBP), 0x102539ceu);
  /* 102539ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102539d0 pop ecx */
  ECX = (pop32());
  /* 102539d1 jle 0x102539f2 */
  if ((C.zf||C.sf!=C.of)) goto L_102539f2;
  /* 102539d3 push 0x10258b20 */
  push32((uint32_t)(0x10258b20u));
  /* 102539d8 call ebp */
  call_ind((uint32_t)(EBP), 0x102539dau);
  /* 102539da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102539dc pop ecx */
  ECX = (pop32());
  /* 102539dd jle 0x102539f2 */
  if ((C.zf||C.sf!=C.of)) goto L_102539f2;
  /* 102539df push edi */
  push32((uint32_t)(EDI));
  /* 102539e0 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 102539e2 call esi */
  call_ind((uint32_t)(ESI), 0x102539e4u);
  /* 102539e4 push 0x102584e4 */
  push32((uint32_t)(0x102584e4u));
  /* 102539e9 call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x102539efu);
  /* 102539ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102539f2:;
  /* 102539f2 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 102539f4 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x102539fau);
  /* 102539fa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102539fc pop ecx */
  ECX = (pop32());
  /* 102539fd je 0x10253abd */
  if (C.zf) goto L_10253abd;
  /* 10253a03 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10253a05 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10253a0bu);
  /* 10253a0b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253a0d pop ecx */
  ECX = (pop32());
  /* 10253a0e jne 0x10253abd */
  if (!C.zf) goto L_10253abd;
  /* 10253a14 push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 10253a19 call ebp */
  call_ind((uint32_t)(EBP), 0x10253a1bu);
  /* 10253a1b push edi */
  push32((uint32_t)(EDI));
  /* 10253a1c push edi */
  push32((uint32_t)(EDI));
  /* 10253a1d mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 10253a21 call dword ptr [0x102570f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f4))), 0x10253a27u);
  /* 10253a27 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 10253a2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10253a2e imul ecx, ecx, 0xfa0 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfa0u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10253a34 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10253a36 jl 0x10253abd */
  if ((C.sf!=C.of)) goto L_10253abd;
  /* 10253a3c push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 10253a41 call ebp */
  call_ind((uint32_t)(EBP), 0x10253a43u);
  /* 10253a43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253a45 pop ecx */
  ECX = (pop32());
  /* 10253a46 jle 0x10253abd */
  if ((C.zf||C.sf!=C.of)) goto L_10253abd;
  /* 10253a48 push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 10253a4d call ebp */
  call_ind((uint32_t)(EBP), 0x10253a4fu);
  /* 10253a4f mov dword ptr [esp], 0x10258a70 */
  w32((uint32_t)(ESP), (0x10258a70u));
  /* 10253a56 push 0x10258ba0 */
  push32((uint32_t)(0x10258ba0u));
  /* 10253a5b mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 10253a5f call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10253a65u);
  /* 10253a65 cmp eax, dword ptr [esp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10253a69 pop ecx */
  ECX = (pop32());
  /* 10253a6a pop ecx */
  ECX = (pop32());
  /* 10253a6b jne 0x10253abd */
  if (!C.zf) goto L_10253abd;
  /* 10253a6d push 0x10258b78 */
  push32((uint32_t)(0x10258b78u));
  /* 10253a72 call ebp */
  call_ind((uint32_t)(EBP), 0x10253a74u);
  /* 10253a74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253a76 pop ecx */
  ECX = (pop32());
  /* 10253a77 jle 0x10253abd */
  if ((C.zf||C.sf!=C.of)) goto L_10253abd;
  /* 10253a79 push 0x10258b20 */
  push32((uint32_t)(0x10258b20u));
  /* 10253a7e call ebp */
  call_ind((uint32_t)(EBP), 0x10253a80u);
  /* 10253a80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253a82 pop ecx */
  ECX = (pop32());
  /* 10253a83 jle 0x10253abd */
  if ((C.zf||C.sf!=C.of)) goto L_10253abd;
  /* 10253a85 push edi */
  push32((uint32_t)(EDI));
  /* 10253a86 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10253a88 call esi */
  call_ind((uint32_t)(ESI), 0x10253a8au);
  /* 10253a8a push 0x102584dc */
  push32((uint32_t)(0x102584dcu));
  /* 10253a8f call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x10253a95u);
  /* 10253a95 push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 10253a9a call ebp */
  call_ind((uint32_t)(EBP), 0x10253a9cu);
  /* 10253a9c imul eax, eax, 0xfffff060 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xfffff060u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10253aa2 push eax */
  push32((uint32_t)(EAX));
  /* 10253aa3 push edi */
  push32((uint32_t)(EDI));
  /* 10253aa4 push edi */
  push32((uint32_t)(EDI));
  /* 10253aa5 call dword ptr [0x102570fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570fc))), 0x10253aabu);
  /* 10253aab push 1 */
  push32((uint32_t)(0x1u));
  /* 10253aad push 1 */
  push32((uint32_t)(0x1u));
  /* 10253aaf push 0x10258cc8 */
  push32((uint32_t)(0x10258cc8u));
  /* 10253ab4 call dword ptr [0x102570b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570b8))), 0x10253abau);
  /* 10253aba add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10253abd:;
  /* 10253abd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10253abf call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10253ac5u);
  /* 10253ac5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253ac7 pop ecx */
  ECX = (pop32());
  /* 10253ac8 jne 0x10253b7a */
  if (!C.zf) goto L_10253b7a;
  /* 10253ace push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 10253ad3 call ebp */
  call_ind((uint32_t)(EBP), 0x10253ad5u);
  /* 10253ad5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253ad7 pop ecx */
  ECX = (pop32());
  /* 10253ad8 jle 0x10253b7a */
  if ((C.zf||C.sf!=C.of)) goto L_10253b7a;
  /* 10253ade push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 10253ae3 call ebp */
  call_ind((uint32_t)(EBP), 0x10253ae5u);
  /* 10253ae5 mov dword ptr [esp], 0x10258a70 */
  w32((uint32_t)(ESP), (0x10258a70u));
  /* 10253aec push 0x10258da8 */
  push32((uint32_t)(0x10258da8u));
  /* 10253af1 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 10253af5 call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10253afbu);
  /* 10253afb cmp eax, dword ptr [esp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10253aff pop ecx */
  ECX = (pop32());
  /* 10253b00 pop ecx */
  ECX = (pop32());
  /* 10253b01 jne 0x10253b7a */
  if (!C.zf) goto L_10253b7a;
  /* 10253b03 push 0x10258b20 */
  push32((uint32_t)(0x10258b20u));
  /* 10253b08 call ebp */
  call_ind((uint32_t)(EBP), 0x10253b0au);
  /* 10253b0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253b0c pop ecx */
  ECX = (pop32());
  /* 10253b0d jle 0x10253b7a */
  if ((C.zf||C.sf!=C.of)) goto L_10253b7a;
  /* 10253b0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10253b11 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10253b13 call esi */
  call_ind((uint32_t)(ESI), 0x10253b15u);
  /* 10253b15 push 1 */
  push32((uint32_t)(0x1u));
  /* 10253b17 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10253b19 call esi */
  call_ind((uint32_t)(ESI), 0x10253b1bu);
  /* 10253b1b push edi */
  push32((uint32_t)(EDI));
  /* 10253b1c call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10253b22u);
  /* 10253b22 push 0xa */
  push32((uint32_t)(0xau));
  /* 10253b24 pop edx */
  EDX = (pop32());
  /* 10253b25 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10253b27 push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 10253b2c mov dword ptr [esp + 0x28], edx */
  w32((uint32_t)(ESP + 0x28), (EDX));
  /* 10253b30 call ebp */
  call_ind((uint32_t)(EBP), 0x10253b32u);
  /* 10253b32 mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 10253b36 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10253b39 imul ecx, ecx, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x32u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10253b3c push ecx */
  push32((uint32_t)(ECX));
  /* 10253b3d push 0x102584d4 */
  push32((uint32_t)(0x102584d4u));
  /* 10253b42 call dword ptr [0x10257100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257100))), 0x10253b48u);
  /* 10253b48 push edi */
  push32((uint32_t)(EDI));
  /* 10253b49 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10253b4fu);
  /* 10253b4f push 0xa */
  push32((uint32_t)(0xau));
  /* 10253b51 pop ebp */
  EBP = (pop32());
  /* 10253b52 push 0x10258a70 */
  push32((uint32_t)(0x10258a70u));
  /* 10253b57 sub ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; EBP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10253b59 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253b5fu);
  /* 10253b5f imul ebp, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EBP); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10253b62 imul ebp, ebp, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(EBP)*(int64_t)(int32_t)(0x32u); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10253b65 push ebp */
  push32((uint32_t)(EBP));
  /* 10253b66 push 1 */
  push32((uint32_t)(0x1u));
  /* 10253b68 push edi */
  push32((uint32_t)(EDI));
  /* 10253b69 call dword ptr [0x102570fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570fc))), 0x10253b6fu);
  /* 10253b6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10253b71 call dword ptr [0x10257104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257104))), 0x10253b77u);
  /* 10253b77 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10253b7a:;
  /* 10253b7a push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10253b7c call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10253b82u);
  /* 10253b82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253b84 pop ecx */
  ECX = (pop32());
  /* 10253b85 mov ebp, 0x10258c98 */
  EBP = (0x10258c98u);
  /* 10253b8a je 0x10253be7 */
  if (C.zf) goto L_10253be7;
  /* 10253b8c push edi */
  push32((uint32_t)(EDI));
  /* 10253b8d call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10253b93u);
  /* 10253b93 imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10253b99 mov ebp, 0x61a8 */
  EBP = (0x61a8u);
  /* 10253b9e pop ecx */
  ECX = (pop32());
  /* 10253b9f sub ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; EBP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10253ba1 call dword ptr [0x1025712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025712c))), 0x10253ba7u);
  /* 10253ba7 cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10253ba9 jle 0x10253be2 */
  if ((C.zf||C.sf!=C.of)) goto L_10253be2;
  /* 10253bab push edi */
  push32((uint32_t)(EDI));
  /* 10253bac push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10253bae call esi */
  call_ind((uint32_t)(ESI), 0x10253bb0u);
  /* 10253bb0 push edi */
  push32((uint32_t)(EDI));
  /* 10253bb1 push 0x10258b00 */
  push32((uint32_t)(0x10258b00u));
  /* 10253bb6 call ebx */
  call_ind((uint32_t)(EBX), 0x10253bb8u);
  /* 10253bb8 push edi */
  push32((uint32_t)(EDI));
  /* 10253bb9 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10253bbe push 0x10258d90 */
  push32((uint32_t)(0x10258d90u));
  /* 10253bc3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10253bc5 call dword ptr [0x10257114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257114))), 0x10253bcbu);
  /* 10253bcb push 2 */
  push32((uint32_t)(0x2u));
  /* 10253bcd mov ebp, 0x10258c98 */
  EBP = (0x10258c98u);
  /* 10253bd2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10253bd4 push ebp */
  push32((uint32_t)(EBP));
  /* 10253bd5 push 5 */
  push32((uint32_t)(0x5u));
  /* 10253bd7 call dword ptr [0x10257114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257114))), 0x10253bddu);
  /* 10253bdd add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10253be0 jmp 0x10253be7 */
  goto L_10253be7;
L_10253be2:;
  /* 10253be2 mov ebp, 0x10258c98 */
  EBP = (0x10258c98u);
L_10253be7:;
  /* 10253be7 push 0x10258b00 */
  push32((uint32_t)(0x10258b00u));
  /* 10253bec push ebp */
  push32((uint32_t)(EBP));
  /* 10253bed call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10253bf3u);
  /* 10253bf3 pop ecx */
  ECX = (pop32());
  /* 10253bf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253bf6 pop ecx */
  ECX = (pop32());
  /* 10253bf7 jle 0x10253c21 */
  if ((C.zf||C.sf!=C.of)) goto L_10253c21;
  /* 10253bf9 push 0x10258b80 */
  push32((uint32_t)(0x10258b80u));
  /* 10253bfe call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253c04u);
  /* 10253c04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253c06 pop ecx */
  ECX = (pop32());
  /* 10253c07 jle 0x10253c21 */
  if ((C.zf||C.sf!=C.of)) goto L_10253c21;
  /* 10253c09 push edi */
  push32((uint32_t)(EDI));
  /* 10253c0a push 0x10258b00 */
  push32((uint32_t)(0x10258b00u));
  /* 10253c0f call ebx */
  call_ind((uint32_t)(EBX), 0x10253c11u);
  /* 10253c11 push 0x10258b80 */
  push32((uint32_t)(0x10258b80u));
  /* 10253c16 push 5 */
  push32((uint32_t)(0x5u));
  /* 10253c18 call dword ptr [0x10257108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257108))), 0x10253c1eu);
  /* 10253c1e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10253c21:;
  /* 10253c21 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10253c23 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10253c29u);
  /* 10253c29 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253c2b pop ecx */
  ECX = (pop32());
  /* 10253c2c jne 0x10253c7c */
  if (!C.zf) goto L_10253c7c;
  /* 10253c2e push 0x10258b10 */
  push32((uint32_t)(0x10258b10u));
  /* 10253c33 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253c39u);
  /* 10253c39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253c3b pop ecx */
  ECX = (pop32());
  /* 10253c3c jle 0x10253c7c */
  if ((C.zf||C.sf!=C.of)) goto L_10253c7c;
  /* 10253c3e push 0x10258a58 */
  push32((uint32_t)(0x10258a58u));
  /* 10253c43 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253c49u);
  /* 10253c49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253c4b pop ecx */
  ECX = (pop32());
  /* 10253c4c jne 0x10253c7c */
  if (!C.zf) goto L_10253c7c;
  /* 10253c4e push 0x10258b10 */
  push32((uint32_t)(0x10258b10u));
  /* 10253c53 call dword ptr [0x10257134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257134))), 0x10253c59u);
  /* 10253c59 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253c5b pop ecx */
  ECX = (pop32());
  /* 10253c5c je 0x10253c7c */
  if (C.zf) goto L_10253c7c;
  /* 10253c5e push 1 */
  push32((uint32_t)(0x1u));
  /* 10253c60 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10253c62 call esi */
  call_ind((uint32_t)(ESI), 0x10253c64u);
  /* 10253c64 push 0x10258a58 */
  push32((uint32_t)(0x10258a58u));
  /* 10253c69 push 0x10258d30 */
  push32((uint32_t)(0x10258d30u));
  /* 10253c6e push 0x10258b10 */
  push32((uint32_t)(0x10258b10u));
  /* 10253c73 call dword ptr [0x102570e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e0))), 0x10253c79u);
  /* 10253c79 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10253c7c:;
  /* 10253c7c push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10253c7e call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10253c84u);
  /* 10253c84 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253c86 pop ecx */
  ECX = (pop32());
  /* 10253c87 je 0x10253ce9 */
  if (C.zf) goto L_10253ce9;
  /* 10253c89 push 0x10258a58 */
  push32((uint32_t)(0x10258a58u));
  /* 10253c8e call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253c94u);
  /* 10253c94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253c96 pop ecx */
  ECX = (pop32());
  /* 10253c97 jle 0x10253ce9 */
  if ((C.zf||C.sf!=C.of)) goto L_10253ce9;
  /* 10253c99 push 0x10258a58 */
  push32((uint32_t)(0x10258a58u));
  /* 10253c9e call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253ca4u);
  /* 10253ca4 mov dword ptr [esp], 0x10258a58 */
  w32((uint32_t)(ESP), (0x10258a58u));
  /* 10253cab push ebp */
  push32((uint32_t)(EBP));
  /* 10253cac mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 10253cb0 call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10253cb6u);
  /* 10253cb6 cmp eax, dword ptr [esp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10253cba pop ecx */
  ECX = (pop32());
  /* 10253cbb pop ecx */
  ECX = (pop32());
  /* 10253cbc jge 0x10253ce9 */
  if ((C.sf==C.of)) goto L_10253ce9;
  /* 10253cbe push edi */
  push32((uint32_t)(EDI));
  /* 10253cbf push 0x10258a58 */
  push32((uint32_t)(0x10258a58u));
  /* 10253cc4 call ebx */
  call_ind((uint32_t)(EBX), 0x10253cc6u);
  /* 10253cc6 push edi */
  push32((uint32_t)(EDI));
  /* 10253cc7 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10253ccc push 0x10258d90 */
  push32((uint32_t)(0x10258d90u));
  /* 10253cd1 push 5 */
  push32((uint32_t)(0x5u));
  /* 10253cd3 call dword ptr [0x10257114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257114))), 0x10253cd9u);
  /* 10253cd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10253cdb push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10253cdd push ebp */
  push32((uint32_t)(EBP));
  /* 10253cde push 5 */
  push32((uint32_t)(0x5u));
  /* 10253ce0 call dword ptr [0x10257114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257114))), 0x10253ce6u);
  /* 10253ce6 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10253ce9:;
  /* 10253ce9 push 0x10258a58 */
  push32((uint32_t)(0x10258a58u));
  /* 10253cee call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253cf4u);
  /* 10253cf4 mov dword ptr [esp], 0x10258a58 */
  w32((uint32_t)(ESP), (0x10258a58u));
  /* 10253cfb push ebp */
  push32((uint32_t)(EBP));
  /* 10253cfc mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 10253d00 call dword ptr [0x102570f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f8))), 0x10253d06u);
  /* 10253d06 cmp eax, dword ptr [esp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10253d0a pop ecx */
  ECX = (pop32());
  /* 10253d0b pop ecx */
  ECX = (pop32());
  /* 10253d0c jne 0x10253d43 */
  if (!C.zf) goto L_10253d43;
  /* 10253d0e mov ebp, 0x10258a58 */
  EBP = (0x10258a58u);
  /* 10253d13 push ebp */
  push32((uint32_t)(EBP));
  /* 10253d14 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253d1au);
  /* 10253d1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253d1c pop ecx */
  ECX = (pop32());
  /* 10253d1d jle 0x10253d43 */
  if ((C.zf||C.sf!=C.of)) goto L_10253d43;
  /* 10253d1f push 0x10258b80 */
  push32((uint32_t)(0x10258b80u));
  /* 10253d24 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253d2au);
  /* 10253d2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253d2c pop ecx */
  ECX = (pop32());
  /* 10253d2d jle 0x10253d43 */
  if ((C.zf||C.sf!=C.of)) goto L_10253d43;
  /* 10253d2f push edi */
  push32((uint32_t)(EDI));
  /* 10253d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10253d31 call ebx */
  call_ind((uint32_t)(EBX), 0x10253d33u);
  /* 10253d33 push 0x10258b80 */
  push32((uint32_t)(0x10258b80u));
  /* 10253d38 push 1 */
  push32((uint32_t)(0x1u));
  /* 10253d3a call dword ptr [0x10257108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257108))), 0x10253d40u);
  /* 10253d40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10253d43:;
  /* 10253d43 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10253d45 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10253d4bu);
  /* 10253d4b mov ebp, dword ptr [0x1025716c] */
  EBP = (r32((uint32_t)(0x1025716c)));
  /* 10253d51 pop ecx */
  ECX = (pop32());
  /* 10253d52 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253d54 je 0x10253d7b */
  if (C.zf) goto L_10253d7b;
  /* 10253d56 push 0x10258a68 */
  push32((uint32_t)(0x10258a68u));
  /* 10253d5b call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253d61u);
  /* 10253d61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253d63 pop ecx */
  ECX = (pop32());
  /* 10253d64 jne 0x10253d7b */
  if (!C.zf) goto L_10253d7b;
  /* 10253d66 push edi */
  push32((uint32_t)(EDI));
  /* 10253d67 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10253d69 call esi */
  call_ind((uint32_t)(ESI), 0x10253d6bu);
  /* 10253d6b push 0x102584cc */
  push32((uint32_t)(0x102584ccu));
  /* 10253d70 call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x10253d76u);
  /* 10253d76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10253d79 call ebp */
  call_ind((uint32_t)(EBP), 0x10253d7bu);
L_10253d7b:;
  /* 10253d7b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10253d7d call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10253d83u);
  /* 10253d83 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253d85 pop ecx */
  ECX = (pop32());
  /* 10253d86 je 0x10253dad */
  if (C.zf) goto L_10253dad;
  /* 10253d88 push 0x10258b80 */
  push32((uint32_t)(0x10258b80u));
  /* 10253d8d call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253d93u);
  /* 10253d93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253d95 pop ecx */
  ECX = (pop32());
  /* 10253d96 jne 0x10253dad */
  if (!C.zf) goto L_10253dad;
  /* 10253d98 push edi */
  push32((uint32_t)(EDI));
  /* 10253d99 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10253d9b call esi */
  call_ind((uint32_t)(ESI), 0x10253d9du);
  /* 10253d9d push 0x102584c0 */
  push32((uint32_t)(0x102584c0u));
  /* 10253da2 call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x10253da8u);
  /* 10253da8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10253dab call ebp */
  call_ind((uint32_t)(EBP), 0x10253dadu);
L_10253dad:;
  /* 10253dad push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10253daf call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10253db5u);
  /* 10253db5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253db7 pop ecx */
  ECX = (pop32());
  /* 10253db8 je 0x10253ddf */
  if (C.zf) goto L_10253ddf;
  /* 10253dba push 0x10258b88 */
  push32((uint32_t)(0x10258b88u));
  /* 10253dbf call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253dc5u);
  /* 10253dc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253dc7 pop ecx */
  ECX = (pop32());
  /* 10253dc8 jne 0x10253ddf */
  if (!C.zf) goto L_10253ddf;
  /* 10253dca push edi */
  push32((uint32_t)(EDI));
  /* 10253dcb push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10253dcd call esi */
  call_ind((uint32_t)(ESI), 0x10253dcfu);
  /* 10253dcf push 0x102584b4 */
  push32((uint32_t)(0x102584b4u));
  /* 10253dd4 call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x10253ddau);
  /* 10253dda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10253ddd call ebp */
  call_ind((uint32_t)(EBP), 0x10253ddfu);
L_10253ddf:;
  /* 10253ddf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10253de1 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10253de7u);
  /* 10253de7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253de9 pop ecx */
  ECX = (pop32());
  /* 10253dea je 0x10253e11 */
  if (C.zf) goto L_10253e11;
  /* 10253dec push 0x10258b98 */
  push32((uint32_t)(0x10258b98u));
  /* 10253df1 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253df7u);
  /* 10253df7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253df9 pop ecx */
  ECX = (pop32());
  /* 10253dfa jne 0x10253e11 */
  if (!C.zf) goto L_10253e11;
  /* 10253dfc push edi */
  push32((uint32_t)(EDI));
  /* 10253dfd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10253dff call esi */
  call_ind((uint32_t)(ESI), 0x10253e01u);
  /* 10253e01 push 0x102584a8 */
  push32((uint32_t)(0x102584a8u));
  /* 10253e06 call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x10253e0cu);
  /* 10253e0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10253e0f call ebp */
  call_ind((uint32_t)(EBP), 0x10253e11u);
L_10253e11:;
  /* 10253e11 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10253e13 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10253e19u);
  /* 10253e19 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253e1b pop ecx */
  ECX = (pop32());
  /* 10253e1c je 0x10253ec5 */
  if (C.zf) goto L_10253ec5;
  /* 10253e22 push edi */
  push32((uint32_t)(EDI));
  /* 10253e23 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10253e29u);
  /* 10253e29 pop ecx */
  ECX = (pop32());
  /* 10253e2a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10253e2c pop ebp */
  EBP = (pop32());
  /* 10253e2d sub ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; EBP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10253e2f imul ebp, ebp, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EBP)*(int64_t)(int32_t)(0x1388u); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10253e35 call dword ptr [0x1025712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025712c))), 0x10253e3bu);
  /* 10253e3b cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10253e3d jle 0x10253ec5 */
  if ((C.zf||C.sf!=C.of)) goto L_10253ec5;
  /* 10253e43 mov ebp, dword ptr [0x102570f0] */
  EBP = (r32((uint32_t)(0x102570f0)));
  /* 10253e49 push 0x10258b50 */
  push32((uint32_t)(0x10258b50u));
  /* 10253e4e call ebp */
  call_ind((uint32_t)(EBP), 0x10253e50u);
  /* 10253e50 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 10253e54 mov dword ptr [esp], 0x10258b40 */
  w32((uint32_t)(ESP), (0x10258b40u));
  /* 10253e5b call ebp */
  call_ind((uint32_t)(EBP), 0x10253e5du);
  /* 10253e5d add eax, dword ptr [esp + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10253e61 pop ecx */
  ECX = (pop32());
  /* 10253e62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253e64 jle 0x10253ec5 */
  if ((C.zf||C.sf!=C.of)) goto L_10253ec5;
  /* 10253e66 push edi */
  push32((uint32_t)(EDI));
  /* 10253e67 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10253e69 call esi */
  call_ind((uint32_t)(ESI), 0x10253e6bu);
  /* 10253e6b mov ebp, dword ptr [0x102570c8] */
  EBP = (r32((uint32_t)(0x102570c8)));
  /* 10253e71 push 0x102584a0 */
  push32((uint32_t)(0x102584a0u));
  /* 10253e76 call ebp */
  call_ind((uint32_t)(EBP), 0x10253e78u);
  /* 10253e78 push edi */
  push32((uint32_t)(EDI));
  /* 10253e79 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10253e7fu);
  /* 10253e7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10253e82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253e84 jne 0x10253eac */
  if (!C.zf) goto L_10253eac;
  /* 10253e86 push 0x10258498 */
  push32((uint32_t)(0x10258498u));
  /* 10253e8b call ebp */
  call_ind((uint32_t)(EBP), 0x10253e8du);
  /* 10253e8d mov ebp, dword ptr [0x102570b8] */
  EBP = (r32((uint32_t)(0x102570b8)));
  /* 10253e93 push 3 */
  push32((uint32_t)(0x3u));
  /* 10253e95 push 1 */
  push32((uint32_t)(0x1u));
  /* 10253e97 push 0x10258ce8 */
  push32((uint32_t)(0x10258ce8u));
  /* 10253e9c call ebp */
  call_ind((uint32_t)(EBP), 0x10253e9eu);
  /* 10253e9e push 4 */
  push32((uint32_t)(0x4u));
  /* 10253ea0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10253ea2 push 0x10258d00 */
  push32((uint32_t)(0x10258d00u));
  /* 10253ea7 call ebp */
  call_ind((uint32_t)(EBP), 0x10253ea9u);
  /* 10253ea9 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10253eac:;
  /* 10253eac push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10253eae call dword ptr [0x102570ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570ec))), 0x10253eb4u);
  /* 10253eb4 mov ebp, dword ptr [0x10257130] */
  EBP = (r32((uint32_t)(0x10257130)));
  /* 10253eba push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10253ebc call ebp */
  call_ind((uint32_t)(EBP), 0x10253ebeu);
  /* 10253ebe push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10253ec0 call ebp */
  call_ind((uint32_t)(EBP), 0x10253ec2u);
  /* 10253ec2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10253ec5:;
  /* 10253ec5 mov ebp, dword ptr [0x102570f0] */
  EBP = (r32((uint32_t)(0x102570f0)));
  /* 10253ecb push 0x10258b40 */
  push32((uint32_t)(0x10258b40u));
  /* 10253ed0 call ebp */
  call_ind((uint32_t)(EBP), 0x10253ed2u);
  /* 10253ed2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253ed4 pop ecx */
  ECX = (pop32());
  /* 10253ed5 jg 0x10253ee7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10253ee7;
  /* 10253ed7 push 0x10258b50 */
  push32((uint32_t)(0x10258b50u));
  /* 10253edc call ebp */
  call_ind((uint32_t)(EBP), 0x10253edeu);
  /* 10253ede test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253ee0 pop ecx */
  ECX = (pop32());
  /* 10253ee1 jle 0x10253f7b */
  if ((C.zf||C.sf!=C.of)) goto L_10253f7b;
L_10253ee7:;
  /* 10253ee7 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10253ee9 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10253eefu);
  /* 10253eef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253ef1 pop ecx */
  ECX = (pop32());
  /* 10253ef2 jne 0x10253f7b */
  if (!C.zf) goto L_10253f7b;
  /* 10253ef8 push edi */
  push32((uint32_t)(EDI));
  /* 10253ef9 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10253effu);
  /* 10253eff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10253f00 mov dword ptr [esp], 0x10258a60 */
  w32((uint32_t)(ESP), (0x10258a60u));
  /* 10253f07 lea edx, [eax + eax*2] */
  EDX = ((uint32_t)(EAX + EAX*2));
  /* 10253f0a mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 10253f0e call ebp */
  call_ind((uint32_t)(EBP), 0x10253f10u);
  /* 10253f10 pop ecx */
  ECX = (pop32());
  /* 10253f11 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10253f15 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10253f17 jge 0x10253f7b */
  if ((C.sf==C.of)) goto L_10253f7b;
  /* 10253f19 mov ebp, 0x10258b40 */
  EBP = (0x10258b40u);
  /* 10253f1e push ebp */
  push32((uint32_t)(EBP));
  /* 10253f1f call dword ptr [0x10257134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257134))), 0x10253f25u);
  /* 10253f25 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253f27 pop ecx */
  ECX = (pop32());
  /* 10253f28 je 0x10253f4a */
  if (C.zf) goto L_10253f4a;
  /* 10253f2a push ebp */
  push32((uint32_t)(EBP));
  /* 10253f2b call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253f31u);
  /* 10253f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253f33 pop ecx */
  ECX = (pop32());
  /* 10253f34 jle 0x10253f4a */
  if ((C.zf||C.sf!=C.of)) goto L_10253f4a;
  /* 10253f36 push 0x10258a60 */
  push32((uint32_t)(0x10258a60u));
  /* 10253f3b push 0x10258c18 */
  push32((uint32_t)(0x10258c18u));
  /* 10253f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10253f41 call dword ptr [0x102570e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e0))), 0x10253f47u);
  /* 10253f47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10253f4a:;
  /* 10253f4a mov ebp, 0x10258b50 */
  EBP = (0x10258b50u);
  /* 10253f4f push ebp */
  push32((uint32_t)(EBP));
  /* 10253f50 call dword ptr [0x10257134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257134))), 0x10253f56u);
  /* 10253f56 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253f58 pop ecx */
  ECX = (pop32());
  /* 10253f59 je 0x10253f7b */
  if (C.zf) goto L_10253f7b;
  /* 10253f5b push ebp */
  push32((uint32_t)(EBP));
  /* 10253f5c call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253f62u);
  /* 10253f62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10253f64 pop ecx */
  ECX = (pop32());
  /* 10253f65 jle 0x10253f7b */
  if ((C.zf||C.sf!=C.of)) goto L_10253f7b;
  /* 10253f67 push 0x10258a60 */
  push32((uint32_t)(0x10258a60u));
  /* 10253f6c push 0x10258c18 */
  push32((uint32_t)(0x10258c18u));
  /* 10253f71 push ebp */
  push32((uint32_t)(EBP));
  /* 10253f72 call dword ptr [0x102570e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e0))), 0x10253f78u);
  /* 10253f78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10253f7b:;
  /* 10253f7b mov ebp, dword ptr [0x102570d8] */
  EBP = (r32((uint32_t)(0x102570d8)));
  /* 10253f81 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10253f83 call ebp */
  call_ind((uint32_t)(EBP), 0x10253f85u);
  /* 10253f85 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253f87 pop ecx */
  ECX = (pop32());
  /* 10253f88 jne 0x10253fd0 */
  if (!C.zf) goto L_10253fd0;
  /* 10253f8a push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10253f8c call ebp */
  call_ind((uint32_t)(EBP), 0x10253f8eu);
  /* 10253f8e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253f90 pop ecx */
  ECX = (pop32());
  /* 10253f91 je 0x10253fd0 */
  if (C.zf) goto L_10253fd0;
  /* 10253f93 push edi */
  push32((uint32_t)(EDI));
  /* 10253f94 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10253f9au);
  /* 10253f9a lea ebp, [eax + eax + 6] */
  EBP = ((uint32_t)(EAX + EAX*1 + 0x6));
  /* 10253f9e mov dword ptr [esp], 0x10258a60 */
  w32((uint32_t)(ESP), (0x10258a60u));
  /* 10253fa5 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253fabu);
  /* 10253fab cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10253fad pop ecx */
  ECX = (pop32());
  /* 10253fae jl 0x10253fd0 */
  if ((C.sf!=C.of)) goto L_10253fd0;
  /* 10253fb0 push edi */
  push32((uint32_t)(EDI));
  /* 10253fb1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10253fb3 call esi */
  call_ind((uint32_t)(ESI), 0x10253fb5u);
  /* 10253fb5 push edi */
  push32((uint32_t)(EDI));
  /* 10253fb6 push 0x10258a60 */
  push32((uint32_t)(0x10258a60u));
  /* 10253fbb call ebx */
  call_ind((uint32_t)(EBX), 0x10253fbdu);
  /* 10253fbd push edi */
  push32((uint32_t)(EDI));
  /* 10253fbe push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10253fc0 push 0x10258c98 */
  push32((uint32_t)(0x10258c98u));
  /* 10253fc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10253fc7 call dword ptr [0x10257114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257114))), 0x10253fcdu);
  /* 10253fcd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10253fd0:;
  /* 10253fd0 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10253fd2 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10253fd8u);
  /* 10253fd8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10253fda pop ecx */
  ECX = (pop32());
  /* 10253fdb jne 0x10254002 */
  if (!C.zf) goto L_10254002;
  /* 10253fdd push edi */
  push32((uint32_t)(EDI));
  /* 10253fde call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10253fe4u);
  /* 10253fe4 lea ebp, [eax + eax + 6] */
  EBP = ((uint32_t)(EAX + EAX*1 + 0x6));
  /* 10253fe8 mov dword ptr [esp], 0x10258a60 */
  w32((uint32_t)(ESP), (0x10258a60u));
  /* 10253fef call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10253ff5u);
  /* 10253ff5 cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10253ff7 pop ecx */
  ECX = (pop32());
  /* 10253ff8 jge 0x10254002 */
  if ((C.sf==C.of)) goto L_10254002;
  /* 10253ffa push 1 */
  push32((uint32_t)(0x1u));
  /* 10253ffc push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10253ffe call esi */
  call_ind((uint32_t)(ESI), 0x10254000u);
  /* 10254000 pop ecx */
  ECX = (pop32());
  /* 10254001 pop ecx */
  ECX = (pop32());
L_10254002:;
  /* 10254002 mov ebp, dword ptr [0x102570d8] */
  EBP = (r32((uint32_t)(0x102570d8)));
  /* 10254008 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1025400a call ebp */
  call_ind((uint32_t)(EBP), 0x1025400cu);
  /* 1025400c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025400e pop ecx */
  ECX = (pop32());
  /* 1025400f je 0x1025409b */
  if (C.zf) goto L_1025409b;
  /* 10254015 push 0x10258b40 */
  push32((uint32_t)(0x10258b40u));
  /* 1025401a call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10254020u);
  /* 10254020 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254022 pop ecx */
  ECX = (pop32());
  /* 10254023 jne 0x1025409b */
  if (!C.zf) goto L_1025409b;
  /* 10254025 push 0x10258b50 */
  push32((uint32_t)(0x10258b50u));
  /* 1025402a call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10254030u);
  /* 10254030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254032 pop ecx */
  ECX = (pop32());
  /* 10254033 jne 0x1025409b */
  if (!C.zf) goto L_1025409b;
  /* 10254035 push edi */
  push32((uint32_t)(EDI));
  /* 10254036 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10254038 call esi */
  call_ind((uint32_t)(ESI), 0x1025403au);
  /* 1025403a push 0x10258490 */
  push32((uint32_t)(0x10258490u));
  /* 1025403f call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x10254045u);
  /* 10254045 push edi */
  push32((uint32_t)(EDI));
  /* 10254046 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x1025404cu);
  /* 1025404c push 5 */
  push32((uint32_t)(0x5u));
  /* 1025404e pop ecx */
  ECX = (pop32());
  /* 1025404f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10254051 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10254057 push ecx */
  push32((uint32_t)(ECX));
  /* 10254058 push 0xa */
  push32((uint32_t)(0xau));
  /* 1025405a call dword ptr [0x102570e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570e4))), 0x10254060u);
  /* 10254060 push edi */
  push32((uint32_t)(EDI));
  /* 10254061 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10254067u);
  /* 10254067 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025406a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025406c jne 0x10254080 */
  if (!C.zf) goto L_10254080;
  /* 1025406e push 3 */
  push32((uint32_t)(0x3u));
  /* 10254070 call dword ptr [0x10257104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257104))), 0x10254076u);
  /* 10254076 push 4 */
  push32((uint32_t)(0x4u));
  /* 10254078 call dword ptr [0x10257104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257104))), 0x1025407eu);
  /* 1025407e pop ecx */
  ECX = (pop32());
  /* 1025407f pop ecx */
  ECX = (pop32());
L_10254080:;
  /* 10254080 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10254082 call dword ptr [0x102570ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570ec))), 0x10254088u);
  /* 10254088 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1025408a call dword ptr [0x10257130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257130))), 0x10254090u);
  /* 10254090 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10254092 call dword ptr [0x10257130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257130))), 0x10254098u);
  /* 10254098 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1025409b:;
  /* 1025409b push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1025409d call ebp */
  call_ind((uint32_t)(EBP), 0x1025409fu);
  /* 1025409f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102540a1 pop ecx */
  ECX = (pop32());
  /* 102540a2 je 0x1025413f */
  if (C.zf) goto L_1025413f;
  /* 102540a8 push 0xa */
  push32((uint32_t)(0xau));
  /* 102540aa call dword ptr [0x10257118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257118))), 0x102540b0u);
  /* 102540b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102540b2 pop ecx */
  ECX = (pop32());
  /* 102540b3 je 0x1025413f */
  if (C.zf) goto L_1025413f;
  /* 102540b9 push edi */
  push32((uint32_t)(EDI));
  /* 102540ba call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x102540c0u);
  /* 102540c0 pop ecx */
  ECX = (pop32());
  /* 102540c1 push 0xc */
  push32((uint32_t)(0xcu));
  /* 102540c3 pop ebp */
  EBP = (pop32());
  /* 102540c4 sub ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; EBP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102540c6 imul ebp, ebp, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EBP)*(int64_t)(int32_t)(0x1388u); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102540cc call dword ptr [0x1025712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025712c))), 0x102540d2u);
  /* 102540d2 cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102540d4 jle 0x1025413f */
  if ((C.zf||C.sf!=C.of)) goto L_1025413f;
  /* 102540d6 push edi */
  push32((uint32_t)(EDI));
  /* 102540d7 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 102540d9 call esi */
  call_ind((uint32_t)(ESI), 0x102540dbu);
  /* 102540db push edi */
  push32((uint32_t)(EDI));
  /* 102540dc call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x102540e2u);
  /* 102540e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102540e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102540e7 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102540e9 push 0x10258d10 */
  push32((uint32_t)(0x10258d10u));
  /* 102540ee push 1 */
  push32((uint32_t)(0x1u));
  /* 102540f0 push 0x10258c18 */
  push32((uint32_t)(0x10258c18u));
  /* 102540f5 jne 0x102540fe */
  if (!C.zf) goto L_102540fe;
  /* 102540f7 push 0x10258e08 */
  push32((uint32_t)(0x10258e08u));
  /* 102540fc jmp 0x10254103 */
  goto L_10254103;
L_102540fe:;
  /* 102540fe push 0x10258970 */
  push32((uint32_t)(0x10258970u));
L_10254103:;
  /* 10254103 mov ebp, 0x10258d58 */
  EBP = (0x10258d58u);
  /* 10254108 push ebp */
  push32((uint32_t)(EBP));
  /* 10254109 call dword ptr [0x102570c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c0))), 0x1025410fu);
  /* 1025410f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10254112 push edi */
  push32((uint32_t)(EDI));
  /* 10254113 push ebp */
  push32((uint32_t)(EBP));
  /* 10254114 call ebx */
  call_ind((uint32_t)(EBX), 0x10254116u);
  /* 10254116 push edi */
  push32((uint32_t)(EDI));
  /* 10254117 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10254119 push 0x10258c98 */
  push32((uint32_t)(0x10258c98u));
  /* 1025411e push 1 */
  push32((uint32_t)(0x1u));
  /* 10254120 call dword ptr [0x10257114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257114))), 0x10254126u);
  /* 10254126 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10254128 call dword ptr [0x102570ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570ec))), 0x1025412eu);
  /* 1025412e mov ebx, dword ptr [0x10257130] */
  EBX = (r32((uint32_t)(0x10257130)));
  /* 10254134 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10254136 call ebx */
  call_ind((uint32_t)(EBX), 0x10254138u);
  /* 10254138 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1025413a call ebx */
  call_ind((uint32_t)(EBX), 0x1025413cu);
  /* 1025413c add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1025413f:;
  /* 1025413f mov ebx, dword ptr [0x102570d8] */
  EBX = (r32((uint32_t)(0x102570d8)));
  /* 10254145 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10254147 call ebx */
  call_ind((uint32_t)(EBX), 0x10254149u);
  /* 10254149 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025414b pop ecx */
  ECX = (pop32());
  /* 1025414c je 0x10254180 */
  if (C.zf) goto L_10254180;
  /* 1025414e push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10254150 call ebx */
  call_ind((uint32_t)(EBX), 0x10254152u);
  /* 10254152 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10254154 pop ecx */
  ECX = (pop32());
  /* 10254155 jne 0x10254180 */
  if (!C.zf) goto L_10254180;
  /* 10254157 push 0x10258d58 */
  push32((uint32_t)(0x10258d58u));
  /* 1025415c call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10254162u);
  /* 10254162 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254164 pop ecx */
  ECX = (pop32());
  /* 10254165 jne 0x10254180 */
  if (!C.zf) goto L_10254180;
  /* 10254167 push edi */
  push32((uint32_t)(EDI));
  /* 10254168 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1025416a call esi */
  call_ind((uint32_t)(ESI), 0x1025416cu);
  /* 1025416c push 0x10258488 */
  push32((uint32_t)(0x10258488u));
  /* 10254171 call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x10254177u);
  /* 10254177 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025417a call dword ptr [0x10257170] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257170))), 0x10254180u);
L_10254180:;
  /* 10254180 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10254182 call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10254188u);
  /* 10254188 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025418a pop ecx */
  ECX = (pop32());
  /* 1025418b mov ebp, 0x10258b68 */
  EBP = (0x10258b68u);
  /* 10254190 je 0x10254224 */
  if (C.zf) goto L_10254224;
  /* 10254196 push edi */
  push32((uint32_t)(EDI));
  /* 10254197 push 0x10258a80 */
  push32((uint32_t)(0x10258a80u));
  /* 1025419c call dword ptr [0x1025715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025715c))), 0x102541a2u);
  /* 102541a2 pop ecx */
  ECX = (pop32());
  /* 102541a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102541a5 pop ecx */
  ECX = (pop32());
  /* 102541a6 jle 0x10254224 */
  if ((C.zf||C.sf!=C.of)) goto L_10254224;
  /* 102541a8 push edi */
  push32((uint32_t)(EDI));
  /* 102541a9 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 102541ab call esi */
  call_ind((uint32_t)(ESI), 0x102541adu);
  /* 102541ad push 0x10258480 */
  push32((uint32_t)(0x10258480u));
  /* 102541b2 call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x102541b8u);
  /* 102541b8 mov ebx, dword ptr [0x10257198] */
  EBX = (r32((uint32_t)(0x10257198)));
  /* 102541be push 1 */
  push32((uint32_t)(0x1u));
  /* 102541c0 push 0x102589b8 */
  push32((uint32_t)(0x102589b8u));
  /* 102541c5 push edi */
  push32((uint32_t)(EDI));
  /* 102541c6 call ebx */
  call_ind((uint32_t)(EBX), 0x102541c8u);
  /* 102541c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 102541ca push 0x102589c0 */
  push32((uint32_t)(0x102589c0u));
  /* 102541cf push edi */
  push32((uint32_t)(EDI));
  /* 102541d0 call ebx */
  call_ind((uint32_t)(EBX), 0x102541d2u);
  /* 102541d2 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 102541d4 call dword ptr [0x102570ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570ec))), 0x102541dau);
  /* 102541da push 0x45 */
  push32((uint32_t)(0x45u));
  /* 102541dc call dword ptr [0x10257130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257130))), 0x102541e2u);
  /* 102541e2 push 3 */
  push32((uint32_t)(0x3u));
  /* 102541e4 call dword ptr [0x10257124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257124))), 0x102541eau);
  /* 102541ea push edi */
  push32((uint32_t)(EDI));
  /* 102541eb push ebp */
  push32((uint32_t)(EBP));
  /* 102541ec push 3 */
  push32((uint32_t)(0x3u));
  /* 102541ee call dword ptr [0x1025713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025713c))), 0x102541f4u);
  /* 102541f4 push 3 */
  push32((uint32_t)(0x3u));
  /* 102541f6 call dword ptr [0x102570b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570b4))), 0x102541fcu);
  /* 102541fc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102541ff push edi */
  push32((uint32_t)(EDI));
  /* 10254200 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10254206u);
  /* 10254206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254208 pop ecx */
  ECX = (pop32());
  /* 10254209 jne 0x10254224 */
  if (!C.zf) goto L_10254224;
  /* 1025420b push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1025420d call dword ptr [0x102570d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d8))), 0x10254213u);
  /* 10254213 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10254215 pop ecx */
  ECX = (pop32());
  /* 10254216 je 0x10254224 */
  if (C.zf) goto L_10254224;
  /* 10254218 push 0x10258478 */
  push32((uint32_t)(0x10258478u));
  /* 1025421d call dword ptr [0x102570c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570c8))), 0x10254223u);
  /* 10254223 pop ecx */
  ECX = (pop32());
L_10254224:;
  /* 10254224 mov ebx, dword ptr [0x102570d8] */
  EBX = (r32((uint32_t)(0x102570d8)));
  /* 1025422a push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1025422c call ebx */
  call_ind((uint32_t)(EBX), 0x1025422eu);
  /* 1025422e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10254230 pop ecx */
  ECX = (pop32());
  /* 10254231 je 0x102542a0 */
  if (C.zf) goto L_102542a0;
  /* 10254233 push 0x10258a80 */
  push32((uint32_t)(0x10258a80u));
  /* 10254238 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x1025423eu);
  /* 1025423e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254240 pop ecx */
  ECX = (pop32());
  /* 10254241 jne 0x102542a0 */
  if (!C.zf) goto L_102542a0;
  /* 10254243 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10254245 call ebx */
  call_ind((uint32_t)(EBX), 0x10254247u);
  /* 10254247 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10254249 pop ecx */
  ECX = (pop32());
  /* 1025424a je 0x102542a0 */
  if (C.zf) goto L_102542a0;
  /* 1025424c push edi */
  push32((uint32_t)(EDI));
  /* 1025424d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1025424f call esi */
  call_ind((uint32_t)(ESI), 0x10254251u);
  /* 10254251 mov ebx, dword ptr [0x102570c8] */
  EBX = (r32((uint32_t)(0x102570c8)));
  /* 10254257 push 0x1025846c */
  push32((uint32_t)(0x1025846cu));
  /* 1025425c call ebx */
  call_ind((uint32_t)(EBX), 0x1025425eu);
  /* 1025425e push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10254260 call dword ptr [0x102570ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570ec))), 0x10254266u);
  /* 10254266 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10254268 call dword ptr [0x10257130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257130))), 0x1025426eu);
  /* 1025426e push 3 */
  push32((uint32_t)(0x3u));
  /* 10254270 call dword ptr [0x10257124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257124))), 0x10254276u);
  /* 10254276 push edi */
  push32((uint32_t)(EDI));
  /* 10254277 push ebp */
  push32((uint32_t)(EBP));
  /* 10254278 push 3 */
  push32((uint32_t)(0x3u));
  /* 1025427a call dword ptr [0x1025713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025713c))), 0x10254280u);
  /* 10254280 push 3 */
  push32((uint32_t)(0x3u));
  /* 10254282 call dword ptr [0x102570b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570b4))), 0x10254288u);
  /* 10254288 push edi */
  push32((uint32_t)(EDI));
  /* 10254289 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x1025428fu);
  /* 1025428f add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10254292 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254294 jne 0x102542a6 */
  if (!C.zf) goto L_102542a6;
  /* 10254296 push 0x10258478 */
  push32((uint32_t)(0x10258478u));
  /* 1025429b call ebx */
  call_ind((uint32_t)(EBX), 0x1025429du);
  /* 1025429d pop ecx */
  ECX = (pop32());
  /* 1025429e jmp 0x102542a6 */
  goto L_102542a6;
L_102542a0:;
  /* 102542a0 mov ebx, dword ptr [0x102570c8] */
  EBX = (r32((uint32_t)(0x102570c8)));
L_102542a6:;
  /* 102542a6 mov ebp, dword ptr [0x102570d8] */
  EBP = (r32((uint32_t)(0x102570d8)));
  /* 102542ac push 0x16 */
  push32((uint32_t)(0x16u));
  /* 102542ae call ebp */
  call_ind((uint32_t)(EBP), 0x102542b0u);
  /* 102542b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102542b2 pop ecx */
  ECX = (pop32());
  /* 102542b3 je 0x102542e6 */
  if (C.zf) goto L_102542e6;
  /* 102542b5 push edi */
  push32((uint32_t)(EDI));
  /* 102542b6 push 0x10258a88 */
  push32((uint32_t)(0x10258a88u));
  /* 102542bb call dword ptr [0x1025715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025715c))), 0x102542c1u);
  /* 102542c1 pop ecx */
  ECX = (pop32());
  /* 102542c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102542c4 pop ecx */
  ECX = (pop32());
  /* 102542c5 jle 0x102542e6 */
  if ((C.zf||C.sf!=C.of)) goto L_102542e6;
  /* 102542c7 push edi */
  push32((uint32_t)(EDI));
  /* 102542c8 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 102542ca call esi */
  call_ind((uint32_t)(ESI), 0x102542ccu);
  /* 102542cc push 0x10258464 */
  push32((uint32_t)(0x10258464u));
  /* 102542d1 call ebx */
  call_ind((uint32_t)(EBX), 0x102542d3u);
  /* 102542d3 push 0x1025805c */
  push32((uint32_t)(0x1025805cu));
  /* 102542d8 push 0x1025843c */
  push32((uint32_t)(0x1025843cu));
  /* 102542dd call dword ptr [0x102570d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570d4))), 0x102542e3u);
  /* 102542e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102542e6:;
  /* 102542e6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 102542e8 call ebp */
  call_ind((uint32_t)(EBP), 0x102542eau);
  /* 102542ea test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102542ec pop ecx */
  ECX = (pop32());
  /* 102542ed je 0x1025430e */
  if (C.zf) goto L_1025430e;
  /* 102542ef push 0x10258b10 */
  push32((uint32_t)(0x10258b10u));
  /* 102542f4 call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x102542fau);
  /* 102542fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102542fc pop ecx */
  ECX = (pop32());
  /* 102542fd jne 0x1025430e */
  if (!C.zf) goto L_1025430e;
  /* 102542ff push edi */
  push32((uint32_t)(EDI));
  /* 10254300 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10254302 call esi */
  call_ind((uint32_t)(ESI), 0x10254304u);
  /* 10254304 push 0x1025845c */
  push32((uint32_t)(0x1025845cu));
  /* 10254309 call ebx */
  call_ind((uint32_t)(EBX), 0x1025430bu);
  /* 1025430b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1025430e:;
  /* 1025430e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10254310 call ebp */
  call_ind((uint32_t)(EBP), 0x10254312u);
  /* 10254312 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10254314 pop ecx */
  ECX = (pop32());
  /* 10254315 je 0x10254348 */
  if (C.zf) goto L_10254348;
  /* 10254317 push edi */
  push32((uint32_t)(EDI));
  /* 10254318 push 0x10258d18 */
  push32((uint32_t)(0x10258d18u));
  /* 1025431d call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10254323u);
  /* 10254323 pop ecx */
  ECX = (pop32());
  /* 10254324 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254326 pop ecx */
  ECX = (pop32());
  /* 10254327 jle 0x10254348 */
  if ((C.zf||C.sf!=C.of)) goto L_10254348;
  /* 10254329 push 0x10258d28 */
  push32((uint32_t)(0x10258d28u));
  /* 1025432e call dword ptr [0x102570f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570f0))), 0x10254334u);
  /* 10254334 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254336 pop ecx */
  ECX = (pop32());
  /* 10254337 jle 0x10254348 */
  if ((C.zf||C.sf!=C.of)) goto L_10254348;
  /* 10254339 push edi */
  push32((uint32_t)(EDI));
  /* 1025433a push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1025433c call esi */
  call_ind((uint32_t)(ESI), 0x1025433eu);
  /* 1025433e push 0x10258454 */
  push32((uint32_t)(0x10258454u));
  /* 10254343 call ebx */
  call_ind((uint32_t)(EBX), 0x10254345u);
  /* 10254345 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10254348:;
  /* 10254348 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 1025434a call ebp */
  call_ind((uint32_t)(EBP), 0x1025434cu);
  /* 1025434c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025434e pop ecx */
  ECX = (pop32());
  /* 1025434f je 0x102543b8 */
  if (C.zf) goto L_102543b8;
  /* 10254351 push edi */
  push32((uint32_t)(EDI));
  /* 10254352 call dword ptr [0x102571a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102571a0))), 0x10254358u);
  /* 10254358 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025435a pop ecx */
  ECX = (pop32());
  /* 1025435b jne 0x102543b8 */
  if (!C.zf) goto L_102543b8;
  /* 1025435d call dword ptr [0x1025712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025712c))), 0x10254363u);
  /* 10254363 cmp eax, 0x3a98 */
  { uint32_t _a=(EAX),_b=(0x3a98u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254368 jle 0x102543b8 */
  if ((C.zf||C.sf!=C.of)) goto L_102543b8;
  /* 1025436a mov ebp, 0x10258df8 */
  EBP = (0x10258df8u);
  /* 1025436f push 5 */
  push32((uint32_t)(0x5u));
  /* 10254371 push ebp */
  push32((uint32_t)(EBP));
  /* 10254372 call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x10254378u);
  /* 10254378 pop ecx */
  ECX = (pop32());
  /* 10254379 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025437b pop ecx */
  ECX = (pop32());
  /* 1025437c jg 0x10254391 */
  if ((!C.zf&&C.sf==C.of)) goto L_10254391;
  /* 1025437e push 5 */
  push32((uint32_t)(0x5u));
  /* 10254380 push 0x10258e00 */
  push32((uint32_t)(0x10258e00u));
  /* 10254385 call dword ptr [0x1025710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025710c))), 0x1025438bu);
  /* 1025438b pop ecx */
  ECX = (pop32());
  /* 1025438c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025438e pop ecx */
  ECX = (pop32());
  /* 1025438f jle 0x102543b8 */
  if ((C.zf||C.sf!=C.of)) goto L_102543b8;
L_10254391:;
  /* 10254391 push edi */
  push32((uint32_t)(EDI));
  /* 10254392 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10254394 call esi */
  call_ind((uint32_t)(ESI), 0x10254396u);
  /* 10254396 push 0x1025844c */
  push32((uint32_t)(0x1025844cu));
  /* 1025439b call ebx */
  call_ind((uint32_t)(EBX), 0x1025439du);
  /* 1025439d mov esi, dword ptr [0x102570b8] */
  ESI = (r32((uint32_t)(0x102570b8)));
  /* 102543a3 push 5 */
  push32((uint32_t)(0x5u));
  /* 102543a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102543a7 push ebp */
  push32((uint32_t)(EBP));
  /* 102543a8 call esi */
  call_ind((uint32_t)(ESI), 0x102543aau);
  /* 102543aa push 6 */
  push32((uint32_t)(0x6u));
  /* 102543ac push 1 */
  push32((uint32_t)(0x1u));
  /* 102543ae push 0x10258e00 */
  push32((uint32_t)(0x10258e00u));
  /* 102543b3 call esi */
  call_ind((uint32_t)(ESI), 0x102543b5u);
  /* 102543b5 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102543b8:;
  /* 102543b8 pop edi */
  EDI = (pop32());
  /* 102543b9 pop esi */
  ESI = (pop32());
  /* 102543ba pop ebp */
  EBP = (pop32());
  /* 102543bb pop ebx */
  EBX = (pop32());
  /* 102543bc pop ecx */
  ECX = (pop32());
  /* 102543bd ret  */
  ESPCHK(0x10251805u, _esp0);
  ESP += 4; return;
}

/* FUN_100043be @ 0x102543be (217 bytes, 57 insns) */
void f_102543be(void) {
  FTRACE(0x102543beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102543be mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102543c2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102543c5 jne 0x10254453 */
  if (!C.zf) goto L_10254453;
  /* 102543cb call dword ptr [0x102570a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570a4))), 0x102543d1u);
  /* 102543d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 102543d3 mov dword ptr [0x10258e2c], eax */
  w32((uint32_t)(0x10258e2c), (EAX));
  /* 102543d8 call 0x10254df2 */
  push32(0x102543ddu); f_10254df2();
  /* 102543dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102543df pop ecx */
  ECX = (pop32());
  /* 102543e0 je 0x1025441e */
  if (C.zf) goto L_1025441e;
  /* 102543e2 mov eax, dword ptr [0x10258e2c] */
  EAX = (r32((uint32_t)(0x10258e2c)));
  /* 102543e7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102543e9 mov cl, byte ptr [0x10258e2d] */
  CL = (r8((uint32_t)(0x10258e2d)));
  /* 102543ef and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102543f4 shr dword ptr [0x10258e2c], 0x10 */
  w32((uint32_t)(0x10258e2c), (sh_shr((uint32_t)(r32((uint32_t)(0x10258e2c))), (0x10u)&0x1f, 32)));
  /* 102543fb mov dword ptr [0x10258e34], eax */
  w32((uint32_t)(0x10258e34), (EAX));
  /* 10254400 mov dword ptr [0x10258e38], ecx */
  w32((uint32_t)(0x10258e38), (ECX));
  /* 10254406 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10254409 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1025440b mov dword ptr [0x10258e30], eax */
  w32((uint32_t)(0x10258e30), (EAX));
  /* 10254410 call 0x10254685 */
  push32(0x10254415u); f_10254685();
  /* 10254415 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254417 jne 0x10254422 */
  if (!C.zf) goto L_10254422;
  /* 10254419 call 0x10254e2e */
  push32(0x1025441eu); f_10254e2e();
L_1025441e:;
  /* 1025441e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10254420 jmp 0x10254494 */
  goto L_10254494;
L_10254422:;
  /* 10254422 call dword ptr [0x102570a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570a8))), 0x10254428u);
  /* 10254428 mov dword ptr [0x10259398], eax */
  w32((uint32_t)(0x10259398), (EAX));
  /* 1025442d call 0x10254cc0 */
  push32(0x10254432u); f_10254cc0();
  /* 10254432 mov dword ptr [0x10258e18], eax */
  w32((uint32_t)(0x10258e18), (EAX));
  /* 10254437 call 0x102547aa */
  push32(0x1025443cu); f_102547aa();
  /* 1025443c call 0x10254a73 */
  push32(0x10254441u); f_10254a73();
  /* 10254441 call 0x102549ba */
  push32(0x10254446u); f_102549ba();
  /* 10254446 call 0x10254567 */
  push32(0x1025444bu); f_10254567();
  /* 1025444b inc dword ptr [0x10258e14] */
  { uint32_t _r=(r32((uint32_t)(0x10258e14)))+1; w32((uint32_t)(0x10258e14), (_r)); fl_inc(_r,32); }
  /* 10254451 jmp 0x10254491 */
  goto L_10254491;
L_10254453:;
  /* 10254453 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10254455 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254457 jne 0x10254485 */
  if (!C.zf) goto L_10254485;
  /* 10254459 cmp dword ptr [0x10258e14], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10258e14))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025445f jle 0x1025441e */
  if ((C.zf||C.sf!=C.of)) goto L_1025441e;
  /* 10254461 dec dword ptr [0x10258e14] */
  { uint32_t _r=(r32((uint32_t)(0x10258e14)))-1; w32((uint32_t)(0x10258e14), (_r)); fl_dec(_r,32); }
  /* 10254467 cmp dword ptr [0x10258e64], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10258e64))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025446d jne 0x10254474 */
  if (!C.zf) goto L_10254474;
  /* 1025446f call 0x102545a5 */
  push32(0x10254474u); f_102545a5();
L_10254474:;
  /* 10254474 call 0x10254966 */
  push32(0x10254479u); f_10254966();
  /* 10254479 call 0x102546d9 */
  push32(0x1025447eu); f_102546d9();
  /* 1025447e call 0x10254e2e */
  push32(0x10254483u); f_10254e2e();
  /* 10254483 jmp 0x10254491 */
  goto L_10254491;
L_10254485:;
  /* 10254485 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254488 jne 0x10254491 */
  if (!C.zf) goto L_10254491;
  /* 1025448a push ecx */
  push32((uint32_t)(ECX));
  /* 1025448b call 0x1025470a */
  push32(0x10254490u); f_1025470a();
  /* 10254490 pop ecx */
  ECX = (pop32());
L_10254491:;
  /* 10254491 push 1 */
  push32((uint32_t)(0x1u));
  /* 10254493 pop eax */
  EAX = (pop32());
L_10254494:;
  /* 10254494 ret 0xc */
  ESPCHK(0x102543beu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10254497 (157 bytes, 73 insns) */
void f_10254497(void) {
  FTRACE(0x10254497u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10254497 push ebp */
  push32((uint32_t)(EBP));
  /* 10254498 mov ebp, esp */
  EBP = (ESP);
  /* 1025449a push ebx */
  push32((uint32_t)(EBX));
  /* 1025449b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1025449e push esi */
  push32((uint32_t)(ESI));
  /* 1025449f mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102544a2 push edi */
  push32((uint32_t)(EDI));
  /* 102544a3 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 102544a6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102544a8 jne 0x102544b3 */
  if (!C.zf) goto L_102544b3;
  /* 102544aa cmp dword ptr [0x10258e14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10258e14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102544b1 jmp 0x102544d9 */
  goto L_102544d9;
L_102544b3:;
  /* 102544b3 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102544b6 je 0x102544bd */
  if (C.zf) goto L_102544bd;
  /* 102544b8 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102544bb jne 0x102544df */
  if (!C.zf) goto L_102544df;
L_102544bd:;
  /* 102544bd mov eax, dword ptr [0x1025939c] */
  EAX = (r32((uint32_t)(0x1025939c)));
  /* 102544c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102544c4 je 0x102544cf */
  if (C.zf) goto L_102544cf;
  /* 102544c6 push edi */
  push32((uint32_t)(EDI));
  /* 102544c7 push esi */
  push32((uint32_t)(ESI));
  /* 102544c8 push ebx */
  push32((uint32_t)(EBX));
  /* 102544c9 call eax */
  call_ind((uint32_t)(EAX), 0x102544cbu);
  /* 102544cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102544cd je 0x102544db */
  if (C.zf) goto L_102544db;
L_102544cf:;
  /* 102544cf push edi */
  push32((uint32_t)(EDI));
  /* 102544d0 push esi */
  push32((uint32_t)(ESI));
  /* 102544d1 push ebx */
  push32((uint32_t)(EBX));
  /* 102544d2 call 0x102543be */
  push32(0x102544d7u); f_102543be();
  /* 102544d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_102544d9:;
  /* 102544d9 jne 0x102544df */
  if (!C.zf) goto L_102544df;
L_102544db:;
  /* 102544db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102544dd jmp 0x1025452d */
  goto L_1025452d;
L_102544df:;
  /* 102544df push edi */
  push32((uint32_t)(EDI));
  /* 102544e0 push esi */
  push32((uint32_t)(ESI));
  /* 102544e1 push ebx */
  push32((uint32_t)(EBX));
  /* 102544e2 call 0x10251000 */
  push32(0x102544e7u); f_10251000();
  /* 102544e7 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102544ea mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 102544ed jne 0x102544fb */
  if (!C.zf) goto L_102544fb;
  /* 102544ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102544f1 jne 0x1025452a */
  if (!C.zf) goto L_1025452a;
  /* 102544f3 push edi */
  push32((uint32_t)(EDI));
  /* 102544f4 push eax */
  push32((uint32_t)(EAX));
  /* 102544f5 push ebx */
  push32((uint32_t)(EBX));
  /* 102544f6 call 0x102543be */
  push32(0x102544fbu); f_102543be();
L_102544fb:;
  /* 102544fb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102544fd je 0x10254504 */
  if (C.zf) goto L_10254504;
  /* 102544ff cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254502 jne 0x1025452a */
  if (!C.zf) goto L_1025452a;
L_10254504:;
  /* 10254504 push edi */
  push32((uint32_t)(EDI));
  /* 10254505 push esi */
  push32((uint32_t)(ESI));
  /* 10254506 push ebx */
  push32((uint32_t)(EBX));
  /* 10254507 call 0x102543be */
  push32(0x1025450cu); f_102543be();
  /* 1025450c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025450e jne 0x10254513 */
  if (!C.zf) goto L_10254513;
  /* 10254510 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10254513:;
  /* 10254513 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254517 je 0x1025452a */
  if (C.zf) goto L_1025452a;
  /* 10254519 mov eax, dword ptr [0x1025939c] */
  EAX = (r32((uint32_t)(0x1025939c)));
  /* 1025451e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254520 je 0x1025452a */
  if (C.zf) goto L_1025452a;
  /* 10254522 push edi */
  push32((uint32_t)(EDI));
  /* 10254523 push esi */
  push32((uint32_t)(ESI));
  /* 10254524 push ebx */
  push32((uint32_t)(EBX));
  /* 10254525 call eax */
  call_ind((uint32_t)(EAX), 0x10254527u);
  /* 10254527 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_1025452a:;
  /* 1025452a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1025452d:;
  /* 1025452d pop edi */
  EDI = (pop32());
  /* 1025452e pop esi */
  ESI = (pop32());
  /* 1025452f pop ebx */
  EBX = (pop32());
  /* 10254530 pop ebp */
  EBP = (pop32());
  /* 10254531 ret 0xc */
  ESPCHK(0x10254497u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10254534 (48 bytes, 15 insns) */
void f_10254534(void) {
  FTRACE(0x10254534u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10254534 mov eax, dword ptr [0x10258e20] */
  EAX = (r32((uint32_t)(0x10258e20)));
  /* 10254539 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025453c je 0x1025454b */
  if (C.zf) goto L_1025454b;
  /* 1025453e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254540 jne 0x10254550 */
  if (!C.zf) goto L_10254550;
  /* 10254542 cmp dword ptr [0x10258e24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10258e24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254549 jne 0x10254550 */
  if (!C.zf) goto L_10254550;
L_1025454b:;
  /* 1025454b call 0x10254ea3 */
  push32(0x10254550u); f_10254ea3();
L_10254550:;
  /* 10254550 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10254554 call 0x10254edc */
  push32(0x10254559u); f_10254edc();
  /* 10254559 push 0xff */
  push32((uint32_t)(0xffu));
  /* 1025455e call dword ptr [0x1025863c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025863c))), 0x10254564u);
  /* 10254564 pop ecx */
  ECX = (pop32());
  /* 10254565 pop ecx */
  ECX = (pop32());
  /* 10254566 ret  */
  ESPCHK(0x10254534u, _esp0);
  ESP += 4; return;
}

/* FUN_10004567 @ 0x10254567 (45 bytes, 12 insns) */
void f_10254567(void) {
  FTRACE(0x10254567u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10254567 mov eax, dword ptr [0x10259394] */
  EAX = (r32((uint32_t)(0x10259394)));
  /* 1025456c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025456e je 0x10254572 */
  if (C.zf) goto L_10254572;
  /* 10254570 call eax */
  call_ind((uint32_t)(EAX), 0x10254572u);
L_10254572:;
  /* 10254572 push 0x10258010 */
  push32((uint32_t)(0x10258010u));
  /* 10254577 push 0x10258008 */
  push32((uint32_t)(0x10258008u));
  /* 1025457c call 0x1025466b */
  push32(0x10254581u); f_1025466b();
  /* 10254581 push 0x10258004 */
  push32((uint32_t)(0x10258004u));
  /* 10254586 push 0x10258000 */
  push32((uint32_t)(0x10258000u));
  /* 1025458b call 0x1025466b */
  push32(0x10254590u); f_1025466b();
  /* 10254590 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10254593 ret  */
  ESPCHK(0x10254567u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10254594 (17 bytes, 6 insns) */
void f_10254594(void) {
  FTRACE(0x10254594u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10254594 push 0 */
  push32((uint32_t)(0x0u));
  /* 10254596 push 1 */
  push32((uint32_t)(0x1u));
  /* 10254598 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1025459c call 0x102545b4 */
  push32(0x102545a1u); f_102545b4();
  /* 102545a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102545a4 ret  */
  ESPCHK(0x10254594u, _esp0);
  ESP += 4; return;
}

/* FUN_100045a5 @ 0x102545a5 (15 bytes, 6 insns) */
void f_102545a5(void) {
  FTRACE(0x102545a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102545a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102545a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102545a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102545ab call 0x102545b4 */
  push32(0x102545b0u); f_102545b4();
  /* 102545b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102545b3 ret  */
  ESPCHK(0x102545a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100045b4 @ 0x102545b4 (163 bytes, 53 insns) */
void f_102545b4(void) {
  FTRACE(0x102545b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102545b4 push edi */
  push32((uint32_t)(EDI));
  /* 102545b5 call 0x10254659 */
  push32(0x102545bau); f_10254659();
  /* 102545ba push 1 */
  push32((uint32_t)(0x1u));
  /* 102545bc pop edi */
  EDI = (pop32());
  /* 102545bd cmp dword ptr [0x10258e68], edi */
  { uint32_t _a=(r32((uint32_t)(0x10258e68))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102545c3 jne 0x102545d6 */
  if (!C.zf) goto L_102545d6;
  /* 102545c5 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 102545c9 call dword ptr [0x10257098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257098))), 0x102545cfu);
  /* 102545cf push eax */
  push32((uint32_t)(EAX));
  /* 102545d0 call dword ptr [0x1025709c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025709c))), 0x102545d6u);
L_102545d6:;
  /* 102545d6 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102545db push ebx */
  push32((uint32_t)(EBX));
  /* 102545dc mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 102545e0 mov dword ptr [0x10258e64], edi */
  w32((uint32_t)(0x10258e64), (EDI));
  /* 102545e6 mov byte ptr [0x10258e60], bl */
  w8((uint32_t)(0x10258e60), (BL));
  /* 102545ec jne 0x1025462a */
  if (!C.zf) goto L_1025462a;
  /* 102545ee mov eax, dword ptr [0x10259390] */
  EAX = (r32((uint32_t)(0x10259390)));
  /* 102545f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102545f5 je 0x10254619 */
  if (C.zf) goto L_10254619;
  /* 102545f7 mov ecx, dword ptr [0x1025938c] */
  ECX = (r32((uint32_t)(0x1025938c)));
  /* 102545fd push esi */
  push32((uint32_t)(ESI));
  /* 102545fe lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10254601 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254603 jb 0x10254618 */
  if (C.cf) goto L_10254618;
L_10254605:;
  /* 10254605 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10254607 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254609 je 0x1025460d */
  if (C.zf) goto L_1025460d;
  /* 1025460b call eax */
  call_ind((uint32_t)(EAX), 0x1025460du);
L_1025460d:;
  /* 1025460d sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10254610 cmp esi, dword ptr [0x10259390] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10259390))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254616 jae 0x10254605 */
  if (!C.cf) goto L_10254605;
L_10254618:;
  /* 10254618 pop esi */
  ESI = (pop32());
L_10254619:;
  /* 10254619 push 0x10258018 */
  push32((uint32_t)(0x10258018u));
  /* 1025461e push 0x10258014 */
  push32((uint32_t)(0x10258014u));
  /* 10254623 call 0x1025466b */
  push32(0x10254628u); f_1025466b();
  /* 10254628 pop ecx */
  ECX = (pop32());
  /* 10254629 pop ecx */
  ECX = (pop32());
L_1025462a:;
  /* 1025462a push 0x10258020 */
  push32((uint32_t)(0x10258020u));
  /* 1025462f push 0x1025801c */
  push32((uint32_t)(0x1025801cu));
  /* 10254634 call 0x1025466b */
  push32(0x10254639u); f_1025466b();
  /* 10254639 pop ecx */
  ECX = (pop32());
  /* 1025463a pop ecx */
  ECX = (pop32());
  /* 1025463b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1025463d pop ebx */
  EBX = (pop32());
  /* 1025463e je 0x10254647 */
  if (C.zf) goto L_10254647;
  /* 10254640 call 0x10254662 */
  push32(0x10254645u); f_10254662();
  /* 10254645 pop edi */
  EDI = (pop32());
  /* 10254646 ret  */
  ESPCHK(0x102545b4u, _esp0);
  ESP += 4; return;
L_10254647:;
  /* 10254647 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1025464b mov dword ptr [0x10258e68], edi */
  w32((uint32_t)(0x10258e68), (EDI));
  /* 10254651 call dword ptr [0x102570a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102570a0))), 0x10254657u);
  /* 10254657 pop edi */
  EDI = (pop32());
  /* 10254658 ret  */
  ESPCHK(0x102545b4u, _esp0);
  ESP += 4; return;
}

/* FUN_10004659 @ 0x10254659 (9 bytes, 4 insns) */
void f_10254659(void) {
  FTRACE(0x10254659u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10254659 push 0xd */
  push32((uint32_t)(0xdu));
  /* 1025465b call 0x102550c4 */
  push32(0x10254660u); f_102550c4();
  /* 10254660 pop ecx */
  ECX = (pop32());
  /* 10254661 ret  */
  ESPCHK(0x10254659u, _esp0);
  ESP += 4; return;
}

/* FUN_10004662 @ 0x10254662 (9 bytes, 4 insns) */
void f_10254662(void) {
  FTRACE(0x10254662u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10254662 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10254664 call 0x10255125 */
  push32(0x10254669u); f_10255125();
  /* 10254669 pop ecx */
  ECX = (pop32());
  /* 1025466a ret  */
  ESPCHK(0x10254662u, _esp0);
  ESP += 4; return;
}

/* FUN_1000466b @ 0x1025466b (26 bytes, 12 insns) */
void f_1025466b(void) {
  FTRACE(0x1025466bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1025466b push esi */
  push32((uint32_t)(ESI));
  /* 1025466c mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10254670:;
  /* 10254670 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254674 jae 0x10254683 */
  if (!C.cf) goto L_10254683;
  /* 10254676 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10254678 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025467a je 0x1025467e */
  if (C.zf) goto L_1025467e;
  /* 1025467c call eax */
  call_ind((uint32_t)(EAX), 0x1025467eu);
L_1025467e:;
  /* 1025467e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10254681 jmp 0x10254670 */
  goto L_10254670;
L_10254683:;
  /* 10254683 pop esi */
  ESI = (pop32());
  /* 10254684 ret  */
  ESPCHK(0x1025466bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004685 @ 0x10254685 (84 bytes, 32 insns) */
void f_10254685(void) {
  FTRACE(0x10254685u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10254685 push esi */
  push32((uint32_t)(ESI));
  /* 10254686 call 0x1025502f */
  push32(0x1025468bu); f_1025502f();
  /* 1025468b call dword ptr [0x1025708c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025708c))), 0x10254691u);
  /* 10254691 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254694 mov dword ptr [0x10258640], eax */
  w32((uint32_t)(0x10258640), (EAX));
  /* 10254699 je 0x102546d5 */
  if (C.zf) goto L_102546d5;
  /* 1025469b push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1025469d push 1 */
  push32((uint32_t)(0x1u));
  /* 1025469f call 0x1025513a */
  push32(0x102546a4u); f_1025513a();
  /* 102546a4 mov esi, eax */
  ESI = (EAX);
  /* 102546a6 pop ecx */
  ECX = (pop32());
  /* 102546a7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102546a9 pop ecx */
  ECX = (pop32());
  /* 102546aa je 0x102546d5 */
  if (C.zf) goto L_102546d5;
  /* 102546ac push esi */
  push32((uint32_t)(ESI));
  /* 102546ad push dword ptr [0x10258640] */
  push32((uint32_t)(r32((uint32_t)(0x10258640))));
  /* 102546b3 call dword ptr [0x10257090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257090))), 0x102546b9u);
  /* 102546b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102546bb je 0x102546d5 */
  if (C.zf) goto L_102546d5;
  /* 102546bd push esi */
  push32((uint32_t)(ESI));
  /* 102546be call 0x102546f7 */
  push32(0x102546c3u); f_102546f7();
  /* 102546c3 pop ecx */
  ECX = (pop32());
  /* 102546c4 call dword ptr [0x10257094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257094))), 0x102546cau);
  /* 102546ca or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 102546ce push 1 */
  push32((uint32_t)(0x1u));
  /* 102546d0 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102546d2 pop eax */
  EAX = (pop32());
  /* 102546d3 pop esi */
  ESI = (pop32());
  /* 102546d4 ret  */
  ESPCHK(0x10254685u, _esp0);
  ESP += 4; return;
L_102546d5:;
  /* 102546d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102546d7 pop esi */
  ESI = (pop32());
  /* 102546d8 ret  */
  ESPCHK(0x10254685u, _esp0);
  ESP += 4; return;
}

/* FUN_100046d9 @ 0x102546d9 (30 bytes, 8 insns) */
void f_102546d9(void) {
  FTRACE(0x102546d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102546d9 call 0x10255058 */
  push32(0x102546deu); f_10255058();
  /* 102546de mov eax, dword ptr [0x10258640] */
  EAX = (r32((uint32_t)(0x10258640)));
  /* 102546e3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102546e6 je 0x102546f6 */
  if (C.zf) goto L_102546f6;
  /* 102546e8 push eax */
  push32((uint32_t)(EAX));
  /* 102546e9 call dword ptr [0x10257088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257088))), 0x102546efu);
  /* 102546ef or dword ptr [0x10258640], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10258640)))|(0xffffffffu); w32((uint32_t)(0x10258640), (_r)); fl_logic(_r,32); }
L_102546f6:;
  /* 102546f6 ret  */
  ESPCHK(0x102546d9u, _esp0);
  ESP += 4; return;
}

/* FUN_100046f7 @ 0x102546f7 (19 bytes, 4 insns) */
void f_102546f7(void) {
  FTRACE(0x102546f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102546f7 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102546fb mov dword ptr [eax + 0x50], 0x102587c0 */
  w32((uint32_t)(EAX + 0x50), (0x102587c0u));
  /* 10254702 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10254709 ret  */
  ESPCHK(0x102546f7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000470a @ 0x1025470a (160 bytes, 62 insns) */
void f_1025470a(void) {
  FTRACE(0x1025470au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1025470a mov eax, dword ptr [0x10258640] */
  EAX = (r32((uint32_t)(0x10258640)));
  /* 1025470f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254712 je 0x102547a9 */
  if (C.zf) goto L_102547a9;
  /* 10254718 push esi */
  push32((uint32_t)(ESI));
  /* 10254719 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1025471d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1025471f jne 0x1025472e */
  if (!C.zf) goto L_1025472e;
  /* 10254721 push eax */
  push32((uint32_t)(EAX));
  /* 10254722 call dword ptr [0x10257084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257084))), 0x10254728u);
  /* 10254728 mov esi, eax */
  ESI = (EAX);
  /* 1025472a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1025472c je 0x1025479a */
  if (C.zf) goto L_1025479a;
L_1025472e:;
  /* 1025472e mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10254731 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254733 je 0x1025473c */
  if (C.zf) goto L_1025473c;
  /* 10254735 push eax */
  push32((uint32_t)(EAX));
  /* 10254736 call 0x102551c7 */
  push32(0x1025473bu); f_102551c7();
  /* 1025473b pop ecx */
  ECX = (pop32());
L_1025473c:;
  /* 1025473c mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 1025473f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254741 je 0x1025474a */
  if (C.zf) goto L_1025474a;
  /* 10254743 push eax */
  push32((uint32_t)(EAX));
  /* 10254744 call 0x102551c7 */
  push32(0x10254749u); f_102551c7();
  /* 10254749 pop ecx */
  ECX = (pop32());
L_1025474a:;
  /* 1025474a mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 1025474d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025474f je 0x10254758 */
  if (C.zf) goto L_10254758;
  /* 10254751 push eax */
  push32((uint32_t)(EAX));
  /* 10254752 call 0x102551c7 */
  push32(0x10254757u); f_102551c7();
  /* 10254757 pop ecx */
  ECX = (pop32());
L_10254758:;
  /* 10254758 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 1025475b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025475d je 0x10254766 */
  if (C.zf) goto L_10254766;
  /* 1025475f push eax */
  push32((uint32_t)(EAX));
  /* 10254760 call 0x102551c7 */
  push32(0x10254765u); f_102551c7();
  /* 10254765 pop ecx */
  ECX = (pop32());
L_10254766:;
  /* 10254766 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 10254769 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025476b je 0x10254774 */
  if (C.zf) goto L_10254774;
  /* 1025476d push eax */
  push32((uint32_t)(EAX));
  /* 1025476e call 0x102551c7 */
  push32(0x10254773u); f_102551c7();
  /* 10254773 pop ecx */
  ECX = (pop32());
L_10254774:;
  /* 10254774 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 10254777 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254779 je 0x10254782 */
  if (C.zf) goto L_10254782;
  /* 1025477b push eax */
  push32((uint32_t)(EAX));
  /* 1025477c call 0x102551c7 */
  push32(0x10254781u); f_102551c7();
  /* 10254781 pop ecx */
  ECX = (pop32());
L_10254782:;
  /* 10254782 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 10254785 cmp eax, 0x102587c0 */
  { uint32_t _a=(EAX),_b=(0x102587c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025478a je 0x10254793 */
  if (C.zf) goto L_10254793;
  /* 1025478c push eax */
  push32((uint32_t)(EAX));
  /* 1025478d call 0x102551c7 */
  push32(0x10254792u); f_102551c7();
  /* 10254792 pop ecx */
  ECX = (pop32());
L_10254793:;
  /* 10254793 push esi */
  push32((uint32_t)(ESI));
  /* 10254794 call 0x102551c7 */
  push32(0x10254799u); f_102551c7();
  /* 10254799 pop ecx */
  ECX = (pop32());
L_1025479a:;
  /* 1025479a push 0 */
  push32((uint32_t)(0x0u));
  /* 1025479c push dword ptr [0x10258640] */
  push32((uint32_t)(r32((uint32_t)(0x10258640))));
  /* 102547a2 call dword ptr [0x10257090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257090))), 0x102547a8u);
  /* 102547a8 pop esi */
  ESI = (pop32());
L_102547a9:;
  /* 102547a9 ret  */
  ESPCHK(0x1025470au, _esp0);
  ESP += 4; return;
}

/* FUN_100047aa @ 0x102547aa (444 bytes, 150 insns) */
void f_102547aa(void) {
  FTRACE(0x102547aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102547aa push ebp */
  push32((uint32_t)(EBP));
  /* 102547ab mov ebp, esp */
  EBP = (ESP);
  /* 102547ad sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102547b0 push ebx */
  push32((uint32_t)(EBX));
  /* 102547b1 push esi */
  push32((uint32_t)(ESI));
  /* 102547b2 push edi */
  push32((uint32_t)(EDI));
  /* 102547b3 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 102547b8 call 0x1025520f */
  push32(0x102547bdu); f_1025520f();
  /* 102547bd mov esi, eax */
  ESI = (EAX);
  /* 102547bf pop ecx */
  ECX = (pop32());
  /* 102547c0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102547c2 jne 0x102547cc */
  if (!C.zf) goto L_102547cc;
  /* 102547c4 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 102547c6 call 0x10254534 */
  push32(0x102547cbu); f_10254534();
  /* 102547cb pop ecx */
  ECX = (pop32());
L_102547cc:;
  /* 102547cc mov dword ptr [0x10259280], esi */
  w32((uint32_t)(0x10259280), (ESI));
  /* 102547d2 mov dword ptr [0x10259380], 0x20 */
  w32((uint32_t)(0x10259380), (0x20u));
  /* 102547dc lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_102547e2:;
  /* 102547e2 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102547e4 jae 0x10254804 */
  if (!C.cf) goto L_10254804;
  /* 102547e6 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102547ea or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 102547ed and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 102547f1 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 102547f5 mov eax, dword ptr [0x10259280] */
  EAX = (r32((uint32_t)(0x10259280)));
  /* 102547fa add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102547fd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10254802 jmp 0x102547e2 */
  goto L_102547e2;
L_10254804:;
  /* 10254804 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10254807 push eax */
  push32((uint32_t)(EAX));
  /* 10254808 call dword ptr [0x10257074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257074))), 0x1025480eu);
  /* 1025480e cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10254813 je 0x102548ea */
  if (C.zf) goto L_102548ea;
  /* 10254819 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1025481c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025481e je 0x102548ea */
  if (C.zf) goto L_102548ea;
  /* 10254824 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 10254826 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 10254829 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 1025482c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1025482f mov eax, 0x800 */
  EAX = (0x800u);
  /* 10254834 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254836 jl 0x1025483a */
  if ((C.sf!=C.of)) goto L_1025483a;
  /* 10254838 mov edi, eax */
  EDI = (EAX);
L_1025483a:;
  /* 1025483a cmp dword ptr [0x10259380], edi */
  { uint32_t _a=(r32((uint32_t)(0x10259380))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254840 jge 0x10254898 */
  if ((C.sf==C.of)) goto L_10254898;
  /* 10254842 mov esi, 0x10259284 */
  ESI = (0x10259284u);
L_10254847:;
  /* 10254847 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1025484c call 0x1025520f */
  push32(0x10254851u); f_1025520f();
  /* 10254851 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254853 pop ecx */
  ECX = (pop32());
  /* 10254854 je 0x10254892 */
  if (C.zf) goto L_10254892;
  /* 10254856 add dword ptr [0x10259380], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10259380))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10259380), (_r)); fl_add(_a,_b,_r,32); }
  /* 1025485d mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1025485f lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_10254865:;
  /* 10254865 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254867 jae 0x10254885 */
  if (!C.cf) goto L_10254885;
  /* 10254869 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 1025486d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10254870 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10254874 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 10254878 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1025487a add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1025487d add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10254883 jmp 0x10254865 */
  goto L_10254865;
L_10254885:;
  /* 10254885 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10254888 cmp dword ptr [0x10259380], edi */
  { uint32_t _a=(r32((uint32_t)(0x10259380))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025488e jl 0x10254847 */
  if ((C.sf!=C.of)) goto L_10254847;
  /* 10254890 jmp 0x10254898 */
  goto L_10254898;
L_10254892:;
  /* 10254892 mov edi, dword ptr [0x10259380] */
  EDI = (r32((uint32_t)(0x10259380)));
L_10254898:;
  /* 10254898 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1025489a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1025489c jle 0x102548ea */
  if ((C.zf||C.sf!=C.of)) goto L_102548ea;
L_1025489e:;
  /* 1025489e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102548a1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102548a3 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102548a6 je 0x102548e0 */
  if (C.zf) goto L_102548e0;
  /* 102548a8 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 102548aa test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 102548ac je 0x102548e0 */
  if (C.zf) goto L_102548e0;
  /* 102548ae test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 102548b0 jne 0x102548bd */
  if (!C.zf) goto L_102548bd;
  /* 102548b2 push ecx */
  push32((uint32_t)(ECX));
  /* 102548b3 call dword ptr [0x10257078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257078))), 0x102548b9u);
  /* 102548b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102548bb je 0x102548e0 */
  if (C.zf) goto L_102548e0;
L_102548bd:;
  /* 102548bd mov ecx, esi */
  ECX = (ESI);
  /* 102548bf mov eax, esi */
  EAX = (ESI);
  /* 102548c1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 102548c4 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 102548c7 mov ecx, dword ptr [ecx*4 + 0x10259280] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10259280)));
  /* 102548ce lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 102548d1 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 102548d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102548d7 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 102548d9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102548db mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 102548dd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_102548e0:;
  /* 102548e0 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 102548e4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102548e5 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102548e6 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102548e8 jl 0x1025489e */
  if ((C.sf!=C.of)) goto L_1025489e;
L_102548ea:;
  /* 102548ea xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102548ec:;
  /* 102548ec mov ecx, dword ptr [0x10259280] */
  ECX = (r32((uint32_t)(0x10259280)));
  /* 102548f2 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 102548f5 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102548f9 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 102548fc jne 0x1025494b */
  if (!C.zf) goto L_1025494b;
  /* 102548fe test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10254900 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 10254904 jne 0x1025490b */
  if (!C.zf) goto L_1025490b;
  /* 10254906 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10254908 pop eax */
  EAX = (pop32());
  /* 10254909 jmp 0x10254915 */
  goto L_10254915;
L_1025490b:;
  /* 1025490b mov eax, ebx */
  EAX = (EBX);
  /* 1025490d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1025490e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10254910 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10254912 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10254915:;
  /* 10254915 push eax */
  push32((uint32_t)(EAX));
  /* 10254916 call dword ptr [0x1025707c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025707c))), 0x1025491cu);
  /* 1025491c mov edi, eax */
  EDI = (EAX);
  /* 1025491e cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254921 je 0x1025493a */
  if (C.zf) goto L_1025493a;
  /* 10254923 push edi */
  push32((uint32_t)(EDI));
  /* 10254924 call dword ptr [0x10257078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257078))), 0x1025492au);
  /* 1025492a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025492c je 0x1025493a */
  if (C.zf) goto L_1025493a;
  /* 1025492e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10254933 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10254935 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254938 jne 0x10254940 */
  if (!C.zf) goto L_10254940;
L_1025493a:;
  /* 1025493a or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1025493e jmp 0x1025494f */
  goto L_1025494f;
L_10254940:;
  /* 10254940 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254943 jne 0x1025494f */
  if (!C.zf) goto L_1025494f;
  /* 10254945 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10254949 jmp 0x1025494f */
  goto L_1025494f;
L_1025494b:;
  /* 1025494b or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_1025494f:;
  /* 1025494f inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10254950 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254953 jl 0x102548ec */
  if ((C.sf!=C.of)) goto L_102548ec;
  /* 10254955 push dword ptr [0x10259380] */
  push32((uint32_t)(r32((uint32_t)(0x10259380))));
  /* 1025495b call dword ptr [0x10257080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257080))), 0x10254961u);
  /* 10254961 pop edi */
  EDI = (pop32());
  /* 10254962 pop esi */
  ESI = (pop32());
  /* 10254963 pop ebx */
  EBX = (pop32());
  /* 10254964 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10254965 ret  */
  ESPCHK(0x102547aau, _esp0);
  ESP += 4; return;
}

/* FUN_10004966 @ 0x10254966 (84 bytes, 33 insns) */
void f_10254966(void) {
  FTRACE(0x10254966u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10254966 push ebx */
  push32((uint32_t)(EBX));
  /* 10254967 push esi */
  push32((uint32_t)(ESI));
  /* 10254968 push edi */
  push32((uint32_t)(EDI));
  /* 10254969 mov esi, 0x10259280 */
  ESI = (0x10259280u);
L_1025496e:;
  /* 1025496e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10254970 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254972 je 0x102549ab */
  if (C.zf) goto L_102549ab;
  /* 10254974 mov edi, eax */
  EDI = (EAX);
  /* 10254976 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1025497b cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025497d jae 0x102549a0 */
  if (!C.cf) goto L_102549a0;
  /* 1025497f lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10254982:;
  /* 10254982 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254986 je 0x1025498f */
  if (C.zf) goto L_1025498f;
  /* 10254988 push ebx */
  push32((uint32_t)(EBX));
  /* 10254989 call dword ptr [0x10257070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257070))), 0x1025498fu);
L_1025498f:;
  /* 1025498f mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10254991 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10254994 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10254999 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1025499c cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025499e jb 0x10254982 */
  if (C.cf) goto L_10254982;
L_102549a0:;
  /* 102549a0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102549a2 call 0x102551c7 */
  push32(0x102549a7u); f_102551c7();
  /* 102549a7 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 102549aa pop ecx */
  ECX = (pop32());
L_102549ab:;
  /* 102549ab add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102549ae cmp esi, 0x10259380 */
  { uint32_t _a=(ESI),_b=(0x10259380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102549b4 jl 0x1025496e */
  if ((C.sf!=C.of)) goto L_1025496e;
  /* 102549b6 pop edi */
  EDI = (pop32());
  /* 102549b7 pop esi */
  ESI = (pop32());
  /* 102549b8 pop ebx */
  EBX = (pop32());
  /* 102549b9 ret  */
  ESPCHK(0x10254966u, _esp0);
  ESP += 4; return;
}

/* FUN_100049ba @ 0x102549ba (185 bytes, 71 insns) */
void f_102549ba(void) {
  FTRACE(0x102549bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102549ba push ebx */
  push32((uint32_t)(EBX));
  /* 102549bb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102549bd cmp dword ptr [0x10259388], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10259388))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102549c3 push esi */
  push32((uint32_t)(ESI));
  /* 102549c4 push edi */
  push32((uint32_t)(EDI));
  /* 102549c5 jne 0x102549cc */
  if (!C.zf) goto L_102549cc;
  /* 102549c7 call 0x102557e3 */
  push32(0x102549ccu); f_102557e3();
L_102549cc:;
  /* 102549cc mov esi, dword ptr [0x10258e18] */
  ESI = (r32((uint32_t)(0x10258e18)));
  /* 102549d2 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_102549d4:;
  /* 102549d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102549d6 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102549d8 je 0x102549ec */
  if (C.zf) goto L_102549ec;
  /* 102549da cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102549dc je 0x102549df */
  if (C.zf) goto L_102549df;
  /* 102549de inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_102549df:;
  /* 102549df push esi */
  push32((uint32_t)(ESI));
  /* 102549e0 call 0x10255390 */
  push32(0x102549e5u); f_10255390();
  /* 102549e5 pop ecx */
  ECX = (pop32());
  /* 102549e6 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 102549ea jmp 0x102549d4 */
  goto L_102549d4;
L_102549ec:;
  /* 102549ec lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 102549f3 push eax */
  push32((uint32_t)(EAX));
  /* 102549f4 call 0x1025520f */
  push32(0x102549f9u); f_1025520f();
  /* 102549f9 mov esi, eax */
  ESI = (EAX);
  /* 102549fb pop ecx */
  ECX = (pop32());
  /* 102549fc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102549fe mov dword ptr [0x10258e48], esi */
  w32((uint32_t)(0x10258e48), (ESI));
  /* 10254a04 jne 0x10254a0e */
  if (!C.zf) goto L_10254a0e;
  /* 10254a06 push 9 */
  push32((uint32_t)(0x9u));
  /* 10254a08 call 0x10254534 */
  push32(0x10254a0du); f_10254534();
  /* 10254a0d pop ecx */
  ECX = (pop32());
L_10254a0e:;
  /* 10254a0e mov edi, dword ptr [0x10258e18] */
  EDI = (r32((uint32_t)(0x10258e18)));
  /* 10254a14 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254a16 je 0x10254a51 */
  if (C.zf) goto L_10254a51;
  /* 10254a18 push ebp */
  push32((uint32_t)(EBP));
L_10254a19:;
  /* 10254a19 push edi */
  push32((uint32_t)(EDI));
  /* 10254a1a call 0x10255390 */
  push32(0x10254a1fu); f_10255390();
  /* 10254a1f mov ebp, eax */
  EBP = (EAX);
  /* 10254a21 pop ecx */
  ECX = (pop32());
  /* 10254a22 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10254a23 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254a26 je 0x10254a4a */
  if (C.zf) goto L_10254a4a;
  /* 10254a28 push ebp */
  push32((uint32_t)(EBP));
  /* 10254a29 call 0x1025520f */
  push32(0x10254a2eu); f_1025520f();
  /* 10254a2e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254a30 pop ecx */
  ECX = (pop32());
  /* 10254a31 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10254a33 jne 0x10254a3d */
  if (!C.zf) goto L_10254a3d;
  /* 10254a35 push 9 */
  push32((uint32_t)(0x9u));
  /* 10254a37 call 0x10254534 */
  push32(0x10254a3cu); f_10254534();
  /* 10254a3c pop ecx */
  ECX = (pop32());
L_10254a3d:;
  /* 10254a3d push edi */
  push32((uint32_t)(EDI));
  /* 10254a3e push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10254a40 call 0x102552a0 */
  push32(0x10254a45u); f_102552a0();
  /* 10254a45 pop ecx */
  ECX = (pop32());
  /* 10254a46 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10254a49 pop ecx */
  ECX = (pop32());
L_10254a4a:;
  /* 10254a4a add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10254a4c cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254a4e jne 0x10254a19 */
  if (!C.zf) goto L_10254a19;
  /* 10254a50 pop ebp */
  EBP = (pop32());
L_10254a51:;
  /* 10254a51 push dword ptr [0x10258e18] */
  push32((uint32_t)(r32((uint32_t)(0x10258e18))));
  /* 10254a57 call 0x102551c7 */
  push32(0x10254a5cu); f_102551c7();
  /* 10254a5c pop ecx */
  ECX = (pop32());
  /* 10254a5d mov dword ptr [0x10258e18], ebx */
  w32((uint32_t)(0x10258e18), (EBX));
  /* 10254a63 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 10254a65 pop edi */
  EDI = (pop32());
  /* 10254a66 pop esi */
  ESI = (pop32());
  /* 10254a67 mov dword ptr [0x10259384], 1 */
  w32((uint32_t)(0x10259384), (0x1u));
  /* 10254a71 pop ebx */
  EBX = (pop32());
  /* 10254a72 ret  */
  ESPCHK(0x102549bau, _esp0);
  ESP += 4; return;
}

/* FUN_10004a73 @ 0x10254a73 (153 bytes, 62 insns) */
void f_10254a73(void) {
  FTRACE(0x10254a73u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10254a73 push ebp */
  push32((uint32_t)(EBP));
  /* 10254a74 mov ebp, esp */
  EBP = (ESP);
  /* 10254a76 push ecx */
  push32((uint32_t)(ECX));
  /* 10254a77 push ecx */
  push32((uint32_t)(ECX));
  /* 10254a78 push ebx */
  push32((uint32_t)(EBX));
  /* 10254a79 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10254a7b cmp dword ptr [0x10259388], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10259388))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254a81 push esi */
  push32((uint32_t)(ESI));
  /* 10254a82 push edi */
  push32((uint32_t)(EDI));
  /* 10254a83 jne 0x10254a8a */
  if (!C.zf) goto L_10254a8a;
  /* 10254a85 call 0x102557e3 */
  push32(0x10254a8au); f_102557e3();
L_10254a8a:;
  /* 10254a8a mov esi, 0x10258e6c */
  ESI = (0x10258e6cu);
  /* 10254a8f push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10254a94 push esi */
  push32((uint32_t)(ESI));
  /* 10254a95 push ebx */
  push32((uint32_t)(EBX));
  /* 10254a96 call dword ptr [0x1025706c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025706c))), 0x10254a9cu);
  /* 10254a9c mov eax, dword ptr [0x10259398] */
  EAX = (r32((uint32_t)(0x10259398)));
  /* 10254aa1 mov dword ptr [0x10258e58], esi */
  w32((uint32_t)(0x10258e58), (ESI));
  /* 10254aa7 mov edi, esi */
  EDI = (ESI);
  /* 10254aa9 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254aab je 0x10254aaf */
  if (C.zf) goto L_10254aaf;
  /* 10254aad mov edi, eax */
  EDI = (EAX);
L_10254aaf:;
  /* 10254aaf lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10254ab2 push eax */
  push32((uint32_t)(EAX));
  /* 10254ab3 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10254ab6 push eax */
  push32((uint32_t)(EAX));
  /* 10254ab7 push ebx */
  push32((uint32_t)(EBX));
  /* 10254ab8 push ebx */
  push32((uint32_t)(EBX));
  /* 10254ab9 push edi */
  push32((uint32_t)(EDI));
  /* 10254aba call 0x10254b0c */
  push32(0x10254abfu); f_10254b0c();
  /* 10254abf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10254ac2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10254ac5 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 10254ac8 push eax */
  push32((uint32_t)(EAX));
  /* 10254ac9 call 0x1025520f */
  push32(0x10254aceu); f_1025520f();
  /* 10254ace mov esi, eax */
  ESI = (EAX);
  /* 10254ad0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10254ad3 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254ad5 jne 0x10254adf */
  if (!C.zf) goto L_10254adf;
  /* 10254ad7 push 8 */
  push32((uint32_t)(0x8u));
  /* 10254ad9 call 0x10254534 */
  push32(0x10254adeu); f_10254534();
  /* 10254ade pop ecx */
  ECX = (pop32());
L_10254adf:;
  /* 10254adf lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10254ae2 push eax */
  push32((uint32_t)(EAX));
  /* 10254ae3 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10254ae6 push eax */
  push32((uint32_t)(EAX));
  /* 10254ae7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10254aea lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10254aed push eax */
  push32((uint32_t)(EAX));
  /* 10254aee push esi */
  push32((uint32_t)(ESI));
  /* 10254aef push edi */
  push32((uint32_t)(EDI));
  /* 10254af0 call 0x10254b0c */
  push32(0x10254af5u); f_10254b0c();
  /* 10254af5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10254af8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10254afb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10254afc mov dword ptr [0x10258e40], esi */
  w32((uint32_t)(0x10258e40), (ESI));
  /* 10254b02 pop edi */
  EDI = (pop32());
  /* 10254b03 pop esi */
  ESI = (pop32());
  /* 10254b04 mov dword ptr [0x10258e3c], eax */
  w32((uint32_t)(0x10258e3c), (EAX));
  /* 10254b09 pop ebx */
  EBX = (pop32());
  /* 10254b0a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10254b0b ret  */
  ESPCHK(0x10254a73u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b0c @ 0x10254b0c (436 bytes, 187 insns) */
void f_10254b0c(void) {
  FTRACE(0x10254b0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10254b0c push ebp */
  push32((uint32_t)(EBP));
  /* 10254b0d mov ebp, esp */
  EBP = (ESP);
  /* 10254b0f mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10254b12 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10254b15 push ebx */
  push32((uint32_t)(EBX));
  /* 10254b16 push esi */
  push32((uint32_t)(ESI));
  /* 10254b17 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10254b1a mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10254b1d push edi */
  push32((uint32_t)(EDI));
  /* 10254b1e mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10254b21 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 10254b27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10254b2a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10254b2c je 0x10254b36 */
  if (C.zf) goto L_10254b36;
  /* 10254b2e mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10254b30 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10254b33 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10254b36:;
  /* 10254b36 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254b39 jne 0x10254b7f */
  if (!C.zf) goto L_10254b7f;
L_10254b3b:;
  /* 10254b3b mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10254b3e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10254b3f cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254b42 je 0x10254b6d */
  if (C.zf) goto L_10254b6d;
  /* 10254b44 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10254b46 je 0x10254b6d */
  if (C.zf) goto L_10254b6d;
  /* 10254b48 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10254b4b test byte ptr [edx + 0x10259161], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10259161)))&(0x4u); fl_logic(_r,8); }
  /* 10254b52 je 0x10254b60 */
  if (C.zf) goto L_10254b60;
  /* 10254b54 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10254b56 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10254b58 je 0x10254b60 */
  if (C.zf) goto L_10254b60;
  /* 10254b5a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10254b5c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10254b5e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10254b5f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10254b60:;
  /* 10254b60 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10254b62 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10254b64 je 0x10254b3b */
  if (C.zf) goto L_10254b3b;
  /* 10254b66 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10254b68 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10254b6a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10254b6b jmp 0x10254b3b */
  goto L_10254b3b;
L_10254b6d:;
  /* 10254b6d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10254b6f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10254b71 je 0x10254b77 */
  if (C.zf) goto L_10254b77;
  /* 10254b73 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10254b76 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10254b77:;
  /* 10254b77 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254b7a jne 0x10254bc2 */
  if (!C.zf) goto L_10254bc2;
  /* 10254b7c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10254b7d jmp 0x10254bc2 */
  goto L_10254bc2;
L_10254b7f:;
  /* 10254b7f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10254b81 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10254b83 je 0x10254b8a */
  if (C.zf) goto L_10254b8a;
  /* 10254b85 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10254b87 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10254b89 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10254b8a:;
  /* 10254b8a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10254b8c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10254b8d movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10254b90 test byte ptr [ebx + 0x10259161], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10259161)))&(0x4u); fl_logic(_r,8); }
  /* 10254b97 je 0x10254ba5 */
  if (C.zf) goto L_10254ba5;
  /* 10254b99 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10254b9b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10254b9d je 0x10254ba4 */
  if (C.zf) goto L_10254ba4;
  /* 10254b9f mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10254ba1 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10254ba3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10254ba4:;
  /* 10254ba4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10254ba5:;
  /* 10254ba5 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254ba8 je 0x10254bb3 */
  if (C.zf) goto L_10254bb3;
  /* 10254baa test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10254bac je 0x10254bb7 */
  if (C.zf) goto L_10254bb7;
  /* 10254bae cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254bb1 jne 0x10254b7f */
  if (!C.zf) goto L_10254b7f;
L_10254bb3:;
  /* 10254bb3 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10254bb5 jne 0x10254bba */
  if (!C.zf) goto L_10254bba;
L_10254bb7:;
  /* 10254bb7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10254bb8 jmp 0x10254bc2 */
  goto L_10254bc2;
L_10254bba:;
  /* 10254bba test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10254bbc je 0x10254bc2 */
  if (C.zf) goto L_10254bc2;
  /* 10254bbe and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10254bc2:;
  /* 10254bc2 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_10254bc6:;
  /* 10254bc6 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254bc9 je 0x10254caf */
  if (C.zf) goto L_10254caf;
L_10254bcf:;
  /* 10254bcf mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10254bd1 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254bd4 je 0x10254bdb */
  if (C.zf) goto L_10254bdb;
  /* 10254bd6 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254bd9 jne 0x10254bde */
  if (!C.zf) goto L_10254bde;
L_10254bdb:;
  /* 10254bdb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10254bdc jmp 0x10254bcf */
  goto L_10254bcf;
L_10254bde:;
  /* 10254bde cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254be1 je 0x10254caf */
  if (C.zf) goto L_10254caf;
  /* 10254be7 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10254be9 je 0x10254bf3 */
  if (C.zf) goto L_10254bf3;
  /* 10254beb mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10254bed add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10254bf0 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10254bf3:;
  /* 10254bf3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10254bf6 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_10254bf8:;
  /* 10254bf8 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 10254bff xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10254c01:;
  /* 10254c01 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254c04 jne 0x10254c0a */
  if (!C.zf) goto L_10254c0a;
  /* 10254c06 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10254c07 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10254c08 jmp 0x10254c01 */
  goto L_10254c01;
L_10254c0a:;
  /* 10254c0a cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254c0d jne 0x10254c3b */
  if (!C.zf) goto L_10254c3b;
  /* 10254c0f test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10254c12 jne 0x10254c39 */
  if (!C.zf) goto L_10254c39;
  /* 10254c14 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10254c16 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254c19 je 0x10254c28 */
  if (C.zf) goto L_10254c28;
  /* 10254c1b cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254c1f lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10254c22 jne 0x10254c28 */
  if (!C.zf) goto L_10254c28;
  /* 10254c24 mov eax, edx */
  EAX = (EDX);
  /* 10254c26 jmp 0x10254c2b */
  goto L_10254c2b;
L_10254c28:;
  /* 10254c28 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_10254c2b:;
  /* 10254c2b mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10254c2e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10254c30 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254c33 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10254c36 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10254c39:;
  /* 10254c39 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_10254c3b:;
  /* 10254c3b mov edx, ebx */
  EDX = (EBX);
  /* 10254c3d dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10254c3e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10254c40 je 0x10254c50 */
  if (C.zf) goto L_10254c50;
  /* 10254c42 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10254c43:;
  /* 10254c43 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10254c45 je 0x10254c4b */
  if (C.zf) goto L_10254c4b;
  /* 10254c47 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 10254c4a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10254c4b:;
  /* 10254c4b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10254c4d dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10254c4e jne 0x10254c43 */
  if (!C.zf) goto L_10254c43;
L_10254c50:;
  /* 10254c50 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10254c52 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10254c54 je 0x10254ca0 */
  if (C.zf) goto L_10254ca0;
  /* 10254c56 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254c5a jne 0x10254c66 */
  if (!C.zf) goto L_10254c66;
  /* 10254c5c cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254c5f je 0x10254ca0 */
  if (C.zf) goto L_10254ca0;
  /* 10254c61 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254c64 je 0x10254ca0 */
  if (C.zf) goto L_10254ca0;
L_10254c66:;
  /* 10254c66 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254c6a je 0x10254c9a */
  if (C.zf) goto L_10254c9a;
  /* 10254c6c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10254c6e je 0x10254c89 */
  if (C.zf) goto L_10254c89;
  /* 10254c70 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10254c73 test byte ptr [ebx + 0x10259161], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10259161)))&(0x4u); fl_logic(_r,8); }
  /* 10254c7a je 0x10254c82 */
  if (C.zf) goto L_10254c82;
  /* 10254c7c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10254c7e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10254c7f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10254c80 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10254c82:;
  /* 10254c82 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10254c84 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10254c86 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10254c87 jmp 0x10254c98 */
  goto L_10254c98;
L_10254c89:;
  /* 10254c89 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10254c8c test byte ptr [edx + 0x10259161], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10259161)))&(0x4u); fl_logic(_r,8); }
  /* 10254c93 je 0x10254c98 */
  if (C.zf) goto L_10254c98;
  /* 10254c95 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10254c96 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10254c98:;
  /* 10254c98 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10254c9a:;
  /* 10254c9a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10254c9b jmp 0x10254bf8 */
  goto L_10254bf8;
L_10254ca0:;
  /* 10254ca0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10254ca2 je 0x10254ca8 */
  if (C.zf) goto L_10254ca8;
  /* 10254ca4 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10254ca7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10254ca8:;
  /* 10254ca8 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10254caa jmp 0x10254bc6 */
  goto L_10254bc6;
L_10254caf:;
  /* 10254caf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10254cb1 je 0x10254cb6 */
  if (C.zf) goto L_10254cb6;
  /* 10254cb3 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10254cb6:;
  /* 10254cb6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10254cb9 pop edi */
  EDI = (pop32());
  /* 10254cba pop esi */
  ESI = (pop32());
  /* 10254cbb pop ebx */
  EBX = (pop32());
  /* 10254cbc inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10254cbe pop ebp */
  EBP = (pop32());
  /* 10254cbf ret  */
  ESPCHK(0x10254b0cu, _esp0);
  ESP += 4; return;
}

/* FUN_10004cc0 @ 0x10254cc0 (306 bytes, 132 insns) */
void f_10254cc0(void) {
  FTRACE(0x10254cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10254cc0 push ecx */
  push32((uint32_t)(ECX));
  /* 10254cc1 push ecx */
  push32((uint32_t)(ECX));
  /* 10254cc2 mov eax, dword ptr [0x10258f70] */
  EAX = (r32((uint32_t)(0x10258f70)));
  /* 10254cc7 push ebx */
  push32((uint32_t)(EBX));
  /* 10254cc8 push ebp */
  push32((uint32_t)(EBP));
  /* 10254cc9 mov ebp, dword ptr [0x10257058] */
  EBP = (r32((uint32_t)(0x10257058)));
  /* 10254ccf push esi */
  push32((uint32_t)(ESI));
  /* 10254cd0 push edi */
  push32((uint32_t)(EDI));
  /* 10254cd1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10254cd3 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10254cd5 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10254cd7 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254cd9 jne 0x10254d0e */
  if (!C.zf) goto L_10254d0e;
  /* 10254cdb call ebp */
  call_ind((uint32_t)(EBP), 0x10254cddu);
  /* 10254cdd mov esi, eax */
  ESI = (EAX);
  /* 10254cdf cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254ce1 je 0x10254cef */
  if (C.zf) goto L_10254cef;
  /* 10254ce3 mov dword ptr [0x10258f70], 1 */
  w32((uint32_t)(0x10258f70), (0x1u));
  /* 10254ced jmp 0x10254d17 */
  goto L_10254d17;
L_10254cef:;
  /* 10254cef call dword ptr [0x1025705c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025705c))), 0x10254cf5u);
  /* 10254cf5 mov edi, eax */
  EDI = (EAX);
  /* 10254cf7 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254cf9 je 0x10254de9 */
  if (C.zf) goto L_10254de9;
  /* 10254cff mov dword ptr [0x10258f70], 2 */
  w32((uint32_t)(0x10258f70), (0x2u));
  /* 10254d09 jmp 0x10254d9d */
  goto L_10254d9d;
L_10254d0e:;
  /* 10254d0e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254d11 jne 0x10254d98 */
  if (!C.zf) goto L_10254d98;
L_10254d17:;
  /* 10254d17 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254d19 jne 0x10254d27 */
  if (!C.zf) goto L_10254d27;
  /* 10254d1b call ebp */
  call_ind((uint32_t)(EBP), 0x10254d1du);
  /* 10254d1d mov esi, eax */
  ESI = (EAX);
  /* 10254d1f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254d21 je 0x10254de9 */
  if (C.zf) goto L_10254de9;
L_10254d27:;
  /* 10254d27 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10254d2a mov eax, esi */
  EAX = (ESI);
  /* 10254d2c je 0x10254d3c */
  if (C.zf) goto L_10254d3c;
L_10254d2e:;
  /* 10254d2e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10254d2f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10254d30 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10254d33 jne 0x10254d2e */
  if (!C.zf) goto L_10254d2e;
  /* 10254d35 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10254d36 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10254d37 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10254d3a jne 0x10254d2e */
  if (!C.zf) goto L_10254d2e;
L_10254d3c:;
  /* 10254d3c sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10254d3e mov edi, dword ptr [0x10257060] */
  EDI = (r32((uint32_t)(0x10257060)));
  /* 10254d44 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10254d46 push ebx */
  push32((uint32_t)(EBX));
  /* 10254d47 push ebx */
  push32((uint32_t)(EBX));
  /* 10254d48 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10254d49 push ebx */
  push32((uint32_t)(EBX));
  /* 10254d4a push ebx */
  push32((uint32_t)(EBX));
  /* 10254d4b push eax */
  push32((uint32_t)(EAX));
  /* 10254d4c push esi */
  push32((uint32_t)(ESI));
  /* 10254d4d push ebx */
  push32((uint32_t)(EBX));
  /* 10254d4e push ebx */
  push32((uint32_t)(EBX));
  /* 10254d4f mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10254d53 call edi */
  call_ind((uint32_t)(EDI), 0x10254d55u);
  /* 10254d55 mov ebp, eax */
  EBP = (EAX);
  /* 10254d57 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254d59 je 0x10254d8d */
  if (C.zf) goto L_10254d8d;
  /* 10254d5b push ebp */
  push32((uint32_t)(EBP));
  /* 10254d5c call 0x1025520f */
  push32(0x10254d61u); f_1025520f();
  /* 10254d61 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254d63 pop ecx */
  ECX = (pop32());
  /* 10254d64 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10254d68 je 0x10254d8d */
  if (C.zf) goto L_10254d8d;
  /* 10254d6a push ebx */
  push32((uint32_t)(EBX));
  /* 10254d6b push ebx */
  push32((uint32_t)(EBX));
  /* 10254d6c push ebp */
  push32((uint32_t)(EBP));
  /* 10254d6d push eax */
  push32((uint32_t)(EAX));
  /* 10254d6e push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10254d72 push esi */
  push32((uint32_t)(ESI));
  /* 10254d73 push ebx */
  push32((uint32_t)(EBX));
  /* 10254d74 push ebx */
  push32((uint32_t)(EBX));
  /* 10254d75 call edi */
  call_ind((uint32_t)(EDI), 0x10254d77u);
  /* 10254d77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254d79 jne 0x10254d89 */
  if (!C.zf) goto L_10254d89;
  /* 10254d7b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10254d7f call 0x102551c7 */
  push32(0x10254d84u); f_102551c7();
  /* 10254d84 pop ecx */
  ECX = (pop32());
  /* 10254d85 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_10254d89:;
  /* 10254d89 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10254d8d:;
  /* 10254d8d push esi */
  push32((uint32_t)(ESI));
  /* 10254d8e call dword ptr [0x10257064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257064))), 0x10254d94u);
  /* 10254d94 mov eax, ebx */
  EAX = (EBX);
  /* 10254d96 jmp 0x10254deb */
  goto L_10254deb;
L_10254d98:;
  /* 10254d98 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254d9b jne 0x10254de9 */
  if (!C.zf) goto L_10254de9;
L_10254d9d:;
  /* 10254d9d cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254d9f jne 0x10254dad */
  if (!C.zf) goto L_10254dad;
  /* 10254da1 call dword ptr [0x1025705c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025705c))), 0x10254da7u);
  /* 10254da7 mov edi, eax */
  EDI = (EAX);
  /* 10254da9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254dab je 0x10254de9 */
  if (C.zf) goto L_10254de9;
L_10254dad:;
  /* 10254dad cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254daf mov eax, edi */
  EAX = (EDI);
  /* 10254db1 je 0x10254dbd */
  if (C.zf) goto L_10254dbd;
L_10254db3:;
  /* 10254db3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10254db4 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254db6 jne 0x10254db3 */
  if (!C.zf) goto L_10254db3;
  /* 10254db8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10254db9 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10254dbb jne 0x10254db3 */
  if (!C.zf) goto L_10254db3;
L_10254dbd:;
  /* 10254dbd sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10254dbf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10254dc0 mov ebp, eax */
  EBP = (EAX);
  /* 10254dc2 push ebp */
  push32((uint32_t)(EBP));
  /* 10254dc3 call 0x1025520f */
  push32(0x10254dc8u); f_1025520f();
  /* 10254dc8 mov esi, eax */
  ESI = (EAX);
  /* 10254dca pop ecx */
  ECX = (pop32());
  /* 10254dcb cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254dcd jne 0x10254dd3 */
  if (!C.zf) goto L_10254dd3;
  /* 10254dcf xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10254dd1 jmp 0x10254dde */
  goto L_10254dde;
L_10254dd3:;
  /* 10254dd3 push ebp */
  push32((uint32_t)(EBP));
  /* 10254dd4 push edi */
  push32((uint32_t)(EDI));
  /* 10254dd5 push esi */
  push32((uint32_t)(ESI));
  /* 10254dd6 call 0x10255800 */
  push32(0x10254ddbu); f_10255800();
  /* 10254ddb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10254dde:;
  /* 10254dde push edi */
  push32((uint32_t)(EDI));
  /* 10254ddf call dword ptr [0x10257068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257068))), 0x10254de5u);
  /* 10254de5 mov eax, esi */
  EAX = (ESI);
  /* 10254de7 jmp 0x10254deb */
  goto L_10254deb;
L_10254de9:;
  /* 10254de9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10254deb:;
  /* 10254deb pop edi */
  EDI = (pop32());
  /* 10254dec pop esi */
  ESI = (pop32());
  /* 10254ded pop ebp */
  EBP = (pop32());
  /* 10254dee pop ebx */
  EBX = (pop32());
  /* 10254def pop ecx */
  ECX = (pop32());
  /* 10254df0 pop ecx */
  ECX = (pop32());
  /* 10254df1 ret  */
  ESPCHK(0x10254cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004df2 @ 0x10254df2 (60 bytes, 20 insns) */
void f_10254df2(void) {
  FTRACE(0x10254df2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10254df2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10254df4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10254df6 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254dfa push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10254dff sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10254e02 push eax */
  push32((uint32_t)(EAX));
  /* 10254e03 call dword ptr [0x10257050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257050))), 0x10254e09u);
  /* 10254e09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254e0b mov dword ptr [0x10259268], eax */
  w32((uint32_t)(0x10259268), (EAX));
  /* 10254e10 je 0x10254e27 */
  if (C.zf) goto L_10254e27;
  /* 10254e12 call 0x10255b35 */
  push32(0x10254e17u); f_10255b35();
  /* 10254e17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254e19 jne 0x10254e2a */
  if (!C.zf) goto L_10254e2a;
  /* 10254e1b push dword ptr [0x10259268] */
  push32((uint32_t)(r32((uint32_t)(0x10259268))));
  /* 10254e21 call dword ptr [0x10257054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257054))), 0x10254e27u);
L_10254e27:;
  /* 10254e27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10254e29 ret  */
  ESPCHK(0x10254df2u, _esp0);
  ESP += 4; return;
L_10254e2a:;
  /* 10254e2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10254e2c pop eax */
  EAX = (pop32());
  /* 10254e2d ret  */
  ESPCHK(0x10254df2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e2e @ 0x10254e2e (117 bytes, 38 insns) */
void f_10254e2e(void) {
  FTRACE(0x10254e2eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10254e2e push ebx */
  push32((uint32_t)(EBX));
  /* 10254e2f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10254e31 cmp dword ptr [0x10259028], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10259028))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254e37 push ebp */
  push32((uint32_t)(EBP));
  /* 10254e38 mov ebp, dword ptr [0x10257048] */
  EBP = (r32((uint32_t)(0x10257048)));
  /* 10254e3e jle 0x10254e84 */
  if ((C.zf||C.sf!=C.of)) goto L_10254e84;
  /* 10254e40 mov eax, dword ptr [0x1025902c] */
  EAX = (r32((uint32_t)(0x1025902c)));
  /* 10254e45 push esi */
  push32((uint32_t)(ESI));
  /* 10254e46 push edi */
  push32((uint32_t)(EDI));
  /* 10254e47 mov edi, dword ptr [0x1025704c] */
  EDI = (r32((uint32_t)(0x1025704c)));
  /* 10254e4d lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10254e50:;
  /* 10254e50 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10254e55 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10254e5a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10254e5c call edi */
  call_ind((uint32_t)(EDI), 0x10254e5eu);
  /* 10254e5e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10254e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10254e65 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10254e67 call edi */
  call_ind((uint32_t)(EDI), 0x10254e69u);
  /* 10254e69 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 10254e6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10254e6e push dword ptr [0x10259268] */
  push32((uint32_t)(r32((uint32_t)(0x10259268))));
  /* 10254e74 call ebp */
  call_ind((uint32_t)(EBP), 0x10254e76u);
  /* 10254e76 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10254e79 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10254e7a cmp ebx, dword ptr [0x10259028] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10259028))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254e80 jl 0x10254e50 */
  if ((C.sf!=C.of)) goto L_10254e50;
  /* 10254e82 pop edi */
  EDI = (pop32());
  /* 10254e83 pop esi */
  ESI = (pop32());
L_10254e84:;
  /* 10254e84 push dword ptr [0x1025902c] */
  push32((uint32_t)(r32((uint32_t)(0x1025902c))));
  /* 10254e8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10254e8c push dword ptr [0x10259268] */
  push32((uint32_t)(r32((uint32_t)(0x10259268))));
  /* 10254e92 call ebp */
  call_ind((uint32_t)(EBP), 0x10254e94u);
  /* 10254e94 push dword ptr [0x10259268] */
  push32((uint32_t)(r32((uint32_t)(0x10259268))));
  /* 10254e9a call dword ptr [0x10257054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257054))), 0x10254ea0u);
  /* 10254ea0 pop ebp */
  EBP = (pop32());
  /* 10254ea1 pop ebx */
  EBX = (pop32());
  /* 10254ea2 ret  */
  ESPCHK(0x10254e2eu, _esp0);
  ESP += 4; return;
}

/* FUN_10004ea3 @ 0x10254ea3 (57 bytes, 18 insns) */
void f_10254ea3(void) {
  FTRACE(0x10254ea3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10254ea3 mov eax, dword ptr [0x10258e20] */
  EAX = (r32((uint32_t)(0x10258e20)));
  /* 10254ea8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254eab je 0x10254eba */
  if (C.zf) goto L_10254eba;
  /* 10254ead test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254eaf jne 0x10254edb */
  if (!C.zf) goto L_10254edb;
  /* 10254eb1 cmp dword ptr [0x10258e24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10258e24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254eb8 jne 0x10254edb */
  if (!C.zf) goto L_10254edb;
L_10254eba:;
  /* 10254eba push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10254ebf call 0x10254edc */
  push32(0x10254ec4u); f_10254edc();
  /* 10254ec4 mov eax, dword ptr [0x10258f74] */
  EAX = (r32((uint32_t)(0x10258f74)));
  /* 10254ec9 pop ecx */
  ECX = (pop32());
  /* 10254eca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254ecc je 0x10254ed0 */
  if (C.zf) goto L_10254ed0;
  /* 10254ece call eax */
  call_ind((uint32_t)(EAX), 0x10254ed0u);
L_10254ed0:;
  /* 10254ed0 push 0xff */
  push32((uint32_t)(0xffu));
  /* 10254ed5 call 0x10254edc */
  push32(0x10254edau); f_10254edc();
  /* 10254eda pop ecx */
  ECX = (pop32());
L_10254edb:;
  /* 10254edb ret  */
  ESPCHK(0x10254ea3u, _esp0);
  ESP += 4; return;
}

/* FUN_10004edc @ 0x10254edc (339 bytes, 100 insns) */
void f_10254edc(void) {
  FTRACE(0x10254edcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10254edc push ebp */
  push32((uint32_t)(EBP));
  /* 10254edd mov ebp, esp */
  EBP = (ESP);
  /* 10254edf sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10254ee5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10254ee8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10254eea mov eax, 0x10258670 */
  EAX = (0x10258670u);
L_10254eef:;
  /* 10254eef cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254ef1 je 0x10254efe */
  if (C.zf) goto L_10254efe;
  /* 10254ef3 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10254ef6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10254ef7 cmp eax, 0x10258700 */
  { uint32_t _a=(EAX),_b=(0x10258700u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254efc jl 0x10254eef */
  if ((C.sf!=C.of)) goto L_10254eef;
L_10254efe:;
  /* 10254efe push esi */
  push32((uint32_t)(ESI));
  /* 10254eff mov esi, ecx */
  ESI = (ECX);
  /* 10254f01 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10254f04 cmp edx, dword ptr [esi + 0x10258670] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x10258670))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254f0a jne 0x1025502c */
  if (!C.zf) goto L_1025502c;
  /* 10254f10 mov eax, dword ptr [0x10258e20] */
  EAX = (r32((uint32_t)(0x10258e20)));
  /* 10254f15 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254f18 je 0x10255006 */
  if (C.zf) goto L_10255006;
  /* 10254f1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254f20 jne 0x10254f2f */
  if (!C.zf) goto L_10254f2f;
  /* 10254f22 cmp dword ptr [0x10258e24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10258e24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254f29 je 0x10255006 */
  if (C.zf) goto L_10255006;
L_10254f2f:;
  /* 10254f2f cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254f35 je 0x1025502c */
  if (C.zf) goto L_1025502c;
  /* 10254f3b lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10254f41 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10254f46 push eax */
  push32((uint32_t)(EAX));
  /* 10254f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10254f49 call dword ptr [0x1025706c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025706c))), 0x10254f4fu);
  /* 10254f4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10254f51 jne 0x10254f66 */
  if (!C.zf) goto L_10254f66;
  /* 10254f53 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10254f59 push 0x10257480 */
  push32((uint32_t)(0x10257480u));
  /* 10254f5e push eax */
  push32((uint32_t)(EAX));
  /* 10254f5f call 0x102552a0 */
  push32(0x10254f64u); f_102552a0();
  /* 10254f64 pop ecx */
  ECX = (pop32());
  /* 10254f65 pop ecx */
  ECX = (pop32());
L_10254f66:;
  /* 10254f66 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10254f6c push edi */
  push32((uint32_t)(EDI));
  /* 10254f6d push eax */
  push32((uint32_t)(EAX));
  /* 10254f6e lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10254f74 call 0x10255390 */
  push32(0x10254f79u); f_10255390();
  /* 10254f79 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10254f7a pop ecx */
  ECX = (pop32());
  /* 10254f7b cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10254f7e jbe 0x10254fa9 */
  if ((C.cf||C.zf)) goto L_10254fa9;
  /* 10254f80 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10254f86 push eax */
  push32((uint32_t)(EAX));
  /* 10254f87 call 0x10255390 */
  push32(0x10254f8cu); f_10255390();
  /* 10254f8c mov edi, eax */
  EDI = (EAX);
  /* 10254f8e lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10254f94 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10254f97 push 3 */
  push32((uint32_t)(0x3u));
  /* 10254f99 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10254f9b push 0x1025747c */
  push32((uint32_t)(0x1025747cu));
  /* 10254fa0 push edi */
  push32((uint32_t)(EDI));
  /* 10254fa1 call 0x10256410 */
  push32(0x10254fa6u); f_10256410();
  /* 10254fa6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10254fa9:;
  /* 10254fa9 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10254faf push 0x10257460 */
  push32((uint32_t)(0x10257460u));
  /* 10254fb4 push eax */
  push32((uint32_t)(EAX));
  /* 10254fb5 call 0x102552a0 */
  push32(0x10254fbau); f_102552a0();
  /* 10254fba lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10254fc0 push edi */
  push32((uint32_t)(EDI));
  /* 10254fc1 push eax */
  push32((uint32_t)(EAX));
  /* 10254fc2 call 0x102552b0 */
  push32(0x10254fc7u); f_102552b0();
  /* 10254fc7 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10254fcd push 0x1025745c */
  push32((uint32_t)(0x1025745cu));
  /* 10254fd2 push eax */
  push32((uint32_t)(EAX));
  /* 10254fd3 call 0x102552b0 */
  push32(0x10254fd8u); f_102552b0();
  /* 10254fd8 push dword ptr [esi + 0x10258674] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10258674))));
  /* 10254fde lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10254fe4 push eax */
  push32((uint32_t)(EAX));
  /* 10254fe5 call 0x102552b0 */
  push32(0x10254feau); f_102552b0();
  /* 10254fea push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10254fef lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10254ff5 push 0x10257434 */
  push32((uint32_t)(0x10257434u));
  /* 10254ffa push eax */
  push32((uint32_t)(EAX));
  /* 10254ffb call 0x1025637e */
  push32(0x10255000u); f_1025637e();
  /* 10255000 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10255003 pop edi */
  EDI = (pop32());
  /* 10255004 jmp 0x1025502c */
  goto L_1025502c;
L_10255006:;
  /* 10255006 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10255009 lea esi, [esi + 0x10258674] */
  ESI = ((uint32_t)(ESI + 0x10258674));
  /* 1025500f push 0 */
  push32((uint32_t)(0x0u));
  /* 10255011 push eax */
  push32((uint32_t)(EAX));
  /* 10255012 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10255014 call 0x10255390 */
  push32(0x10255019u); f_10255390();
  /* 10255019 pop ecx */
  ECX = (pop32());
  /* 1025501a push eax */
  push32((uint32_t)(EAX));
  /* 1025501b push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1025501d push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1025501f call dword ptr [0x1025707c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025707c))), 0x10255025u);
  /* 10255025 push eax */
  push32((uint32_t)(EAX));
  /* 10255026 call dword ptr [0x10257044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257044))), 0x1025502cu);
L_1025502c:;
  /* 1025502c pop esi */
  ESI = (pop32());
  /* 1025502d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1025502e ret  */
  ESPCHK(0x10254edcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000502f @ 0x1025502f (41 bytes, 12 insns) */
void f_1025502f(void) {
  FTRACE(0x1025502fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1025502f push esi */
  push32((uint32_t)(ESI));
  /* 10255030 mov esi, dword ptr [0x10257040] */
  ESI = (r32((uint32_t)(0x10257040)));
  /* 10255036 push dword ptr [0x10258744] */
  push32((uint32_t)(r32((uint32_t)(0x10258744))));
  /* 1025503c call esi */
  call_ind((uint32_t)(ESI), 0x1025503eu);
  /* 1025503e push dword ptr [0x10258734] */
  push32((uint32_t)(r32((uint32_t)(0x10258734))));
  /* 10255044 call esi */
  call_ind((uint32_t)(ESI), 0x10255046u);
  /* 10255046 push dword ptr [0x10258724] */
  push32((uint32_t)(r32((uint32_t)(0x10258724))));
  /* 1025504c call esi */
  call_ind((uint32_t)(ESI), 0x1025504eu);
  /* 1025504e push dword ptr [0x10258704] */
  push32((uint32_t)(r32((uint32_t)(0x10258704))));
  /* 10255054 call esi */
  call_ind((uint32_t)(ESI), 0x10255056u);
  /* 10255056 pop esi */
  ESI = (pop32());
  /* 10255057 ret  */
  ESPCHK(0x1025502fu, _esp0);
  ESP += 4; return;
}

/* FUN_10005058 @ 0x10255058 (108 bytes, 34 insns) */
void f_10255058(void) {
  FTRACE(0x10255058u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10255058 push esi */
  push32((uint32_t)(ESI));
  /* 10255059 push edi */
  push32((uint32_t)(EDI));
  /* 1025505a mov edi, dword ptr [0x10257070] */
  EDI = (r32((uint32_t)(0x10257070)));
  /* 10255060 mov esi, 0x10258700 */
  ESI = (0x10258700u);
L_10255065:;
  /* 10255065 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10255067 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10255069 je 0x10255096 */
  if (C.zf) goto L_10255096;
  /* 1025506b cmp esi, 0x10258744 */
  { uint32_t _a=(ESI),_b=(0x10258744u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255071 je 0x10255096 */
  if (C.zf) goto L_10255096;
  /* 10255073 cmp esi, 0x10258734 */
  { uint32_t _a=(ESI),_b=(0x10258734u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255079 je 0x10255096 */
  if (C.zf) goto L_10255096;
  /* 1025507b cmp esi, 0x10258724 */
  { uint32_t _a=(ESI),_b=(0x10258724u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255081 je 0x10255096 */
  if (C.zf) goto L_10255096;
  /* 10255083 cmp esi, 0x10258704 */
  { uint32_t _a=(ESI),_b=(0x10258704u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255089 je 0x10255096 */
  if (C.zf) goto L_10255096;
  /* 1025508b push eax */
  push32((uint32_t)(EAX));
  /* 1025508c call edi */
  call_ind((uint32_t)(EDI), 0x1025508eu);
  /* 1025508e push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10255090 call 0x102551c7 */
  push32(0x10255095u); f_102551c7();
  /* 10255095 pop ecx */
  ECX = (pop32());
L_10255096:;
  /* 10255096 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10255099 cmp esi, 0x102587c0 */
  { uint32_t _a=(ESI),_b=(0x102587c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025509f jl 0x10255065 */
  if ((C.sf!=C.of)) goto L_10255065;
  /* 102550a1 push dword ptr [0x10258724] */
  push32((uint32_t)(r32((uint32_t)(0x10258724))));
  /* 102550a7 call edi */
  call_ind((uint32_t)(EDI), 0x102550a9u);
  /* 102550a9 push dword ptr [0x10258734] */
  push32((uint32_t)(r32((uint32_t)(0x10258734))));
  /* 102550af call edi */
  call_ind((uint32_t)(EDI), 0x102550b1u);
  /* 102550b1 push dword ptr [0x10258744] */
  push32((uint32_t)(r32((uint32_t)(0x10258744))));
  /* 102550b7 call edi */
  call_ind((uint32_t)(EDI), 0x102550b9u);
  /* 102550b9 push dword ptr [0x10258704] */
  push32((uint32_t)(r32((uint32_t)(0x10258704))));
  /* 102550bf call edi */
  call_ind((uint32_t)(EDI), 0x102550c1u);
  /* 102550c1 pop edi */
  EDI = (pop32());
  /* 102550c2 pop esi */
  ESI = (pop32());
  /* 102550c3 ret  */
  ESPCHK(0x10255058u, _esp0);
  ESP += 4; return;
}

/* FUN_100050c4 @ 0x102550c4 (97 bytes, 37 insns) */
void f_102550c4(void) {
  FTRACE(0x102550c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102550c4 push ebp */
  push32((uint32_t)(EBP));
  /* 102550c5 mov ebp, esp */
  EBP = (ESP);
  /* 102550c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102550ca push esi */
  push32((uint32_t)(ESI));
  /* 102550cb cmp dword ptr [eax*4 + 0x10258700], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10258700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102550d3 lea esi, [eax*4 + 0x10258700] */
  ESI = ((uint32_t)(EAX*4 + 0x10258700));
  /* 102550da jne 0x1025511a */
  if (!C.zf) goto L_1025511a;
  /* 102550dc push edi */
  push32((uint32_t)(EDI));
  /* 102550dd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 102550df call 0x1025520f */
  push32(0x102550e4u); f_1025520f();
  /* 102550e4 mov edi, eax */
  EDI = (EAX);
  /* 102550e6 pop ecx */
  ECX = (pop32());
  /* 102550e7 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102550e9 jne 0x102550f3 */
  if (!C.zf) goto L_102550f3;
  /* 102550eb push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102550ed call 0x10254534 */
  push32(0x102550f2u); f_10254534();
  /* 102550f2 pop ecx */
  ECX = (pop32());
L_102550f3:;
  /* 102550f3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102550f5 call 0x102550c4 */
  push32(0x102550fau); f_102550c4();
  /* 102550fa cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102550fd pop ecx */
  ECX = (pop32());
  /* 102550fe push edi */
  push32((uint32_t)(EDI));
  /* 102550ff jne 0x1025510b */
  if (!C.zf) goto L_1025510b;
  /* 10255101 call dword ptr [0x10257040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257040))), 0x10255107u);
  /* 10255107 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10255109 jmp 0x10255111 */
  goto L_10255111;
L_1025510b:;
  /* 1025510b call 0x102551c7 */
  push32(0x10255110u); f_102551c7();
  /* 10255110 pop ecx */
  ECX = (pop32());
L_10255111:;
  /* 10255111 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10255113 call 0x10255125 */
  push32(0x10255118u); f_10255125();
  /* 10255118 pop ecx */
  ECX = (pop32());
  /* 10255119 pop edi */
  EDI = (pop32());
L_1025511a:;
  /* 1025511a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1025511c call dword ptr [0x1025703c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025703c))), 0x10255122u);
  /* 10255122 pop esi */
  ESI = (pop32());
  /* 10255123 pop ebp */
  EBP = (pop32());
  /* 10255124 ret  */
  ESPCHK(0x102550c4u, _esp0);
  ESP += 4; return;
}

/* FUN_10005125 @ 0x10255125 (21 bytes, 7 insns) */
void f_10255125(void) {
  FTRACE(0x10255125u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10255125 push ebp */
  push32((uint32_t)(EBP));
  /* 10255126 mov ebp, esp */
  EBP = (ESP);
  /* 10255128 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1025512b push dword ptr [eax*4 + 0x10258700] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10258700))));
  /* 10255132 call dword ptr [0x10257038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257038))), 0x10255138u);
  /* 10255138 pop ebp */
  EBP = (pop32());
  /* 10255139 ret  */
  ESPCHK(0x10255125u, _esp0);
  ESP += 4; return;
}

/* FUN_1000513a @ 0x1025513a (141 bytes, 56 insns) */
void f_1025513a(void) {
  FTRACE(0x1025513au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1025513a push ebx */
  push32((uint32_t)(EBX));
  /* 1025513b push esi */
  push32((uint32_t)(ESI));
  /* 1025513c mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10255140 push edi */
  push32((uint32_t)(EDI));
  /* 10255141 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10255146 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255149 mov ebx, esi */
  EBX = (ESI);
  /* 1025514b ja 0x1025515a */
  if ((!C.cf&&!C.zf)) goto L_1025515a;
  /* 1025514d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1025514f jne 0x10255154 */
  if (!C.zf) goto L_10255154;
  /* 10255151 push 1 */
  push32((uint32_t)(0x1u));
  /* 10255153 pop esi */
  ESI = (pop32());
L_10255154:;
  /* 10255154 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10255157 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_1025515a:;
  /* 1025515a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1025515c cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025515f ja 0x1025519b */
  if ((!C.cf&&!C.zf)) goto L_1025519b;
  /* 10255161 cmp ebx, dword ptr [0x10258950] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10258950))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255167 ja 0x10255186 */
  if ((!C.cf&&!C.zf)) goto L_10255186;
  /* 10255169 push 9 */
  push32((uint32_t)(0x9u));
  /* 1025516b call 0x102550c4 */
  push32(0x10255170u); f_102550c4();
  /* 10255170 push ebx */
  push32((uint32_t)(EBX));
  /* 10255171 call 0x10255ec9 */
  push32(0x10255176u); f_10255ec9();
  /* 10255176 push 9 */
  push32((uint32_t)(0x9u));
  /* 10255178 mov edi, eax */
  EDI = (EAX);
  /* 1025517a call 0x10255125 */
  push32(0x1025517fu); f_10255125();
  /* 1025517f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10255182 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10255184 jne 0x102551b1 */
  if (!C.zf) goto L_102551b1;
L_10255186:;
  /* 10255186 push esi */
  push32((uint32_t)(ESI));
  /* 10255187 push 8 */
  push32((uint32_t)(0x8u));
  /* 10255189 push dword ptr [0x10259268] */
  push32((uint32_t)(r32((uint32_t)(0x10259268))));
  /* 1025518f call dword ptr [0x10257034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257034))), 0x10255195u);
  /* 10255195 mov edi, eax */
  EDI = (EAX);
  /* 10255197 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10255199 jne 0x102551bd */
  if (!C.zf) goto L_102551bd;
L_1025519b:;
  /* 1025519b cmp dword ptr [0x10258fec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10258fec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102551a2 je 0x102551bd */
  if (C.zf) goto L_102551bd;
  /* 102551a4 push esi */
  push32((uint32_t)(ESI));
  /* 102551a5 call 0x10256568 */
  push32(0x102551aau); f_10256568();
  /* 102551aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102551ac pop ecx */
  ECX = (pop32());
  /* 102551ad je 0x102551c3 */
  if (C.zf) goto L_102551c3;
  /* 102551af jmp 0x1025515a */
  goto L_1025515a;
L_102551b1:;
  /* 102551b1 push ebx */
  push32((uint32_t)(EBX));
  /* 102551b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102551b4 push edi */
  push32((uint32_t)(EDI));
  /* 102551b5 call 0x10256510 */
  push32(0x102551bau); f_10256510();
  /* 102551ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102551bd:;
  /* 102551bd mov eax, edi */
  EAX = (EDI);
L_102551bf:;
  /* 102551bf pop edi */
  EDI = (pop32());
  /* 102551c0 pop esi */
  ESI = (pop32());
  /* 102551c1 pop ebx */
  EBX = (pop32());
  /* 102551c2 ret  */
  ESPCHK(0x1025513au, _esp0);
  ESP += 4; return;
L_102551c3:;
  /* 102551c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102551c5 jmp 0x102551bf */
  goto L_102551bf;
}

/* FUN_100051c7 @ 0x102551c7 (72 bytes, 29 insns) */
void f_102551c7(void) {
  FTRACE(0x102551c7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102551c7 push esi */
  push32((uint32_t)(ESI));
  /* 102551c8 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102551cc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102551ce je 0x1025520d */
  if (C.zf) goto L_1025520d;
  /* 102551d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 102551d2 call 0x102550c4 */
  push32(0x102551d7u); f_102550c4();
  /* 102551d7 push esi */
  push32((uint32_t)(ESI));
  /* 102551d8 call 0x10255b73 */
  push32(0x102551ddu); f_10255b73();
  /* 102551dd pop ecx */
  ECX = (pop32());
  /* 102551de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102551e0 pop ecx */
  ECX = (pop32());
  /* 102551e1 je 0x102551f6 */
  if (C.zf) goto L_102551f6;
  /* 102551e3 push esi */
  push32((uint32_t)(ESI));
  /* 102551e4 push eax */
  push32((uint32_t)(EAX));
  /* 102551e5 call 0x10255b9e */
  push32(0x102551eau); f_10255b9e();
  /* 102551ea push 9 */
  push32((uint32_t)(0x9u));
  /* 102551ec call 0x10255125 */
  push32(0x102551f1u); f_10255125();
  /* 102551f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102551f4 pop esi */
  ESI = (pop32());
  /* 102551f5 ret  */
  ESPCHK(0x102551c7u, _esp0);
  ESP += 4; return;
L_102551f6:;
  /* 102551f6 push 9 */
  push32((uint32_t)(0x9u));
  /* 102551f8 call 0x10255125 */
  push32(0x102551fdu); f_10255125();
  /* 102551fd pop ecx */
  ECX = (pop32());
  /* 102551fe push esi */
  push32((uint32_t)(ESI));
  /* 102551ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10255201 push dword ptr [0x10259268] */
  push32((uint32_t)(r32((uint32_t)(0x10259268))));
  /* 10255207 call dword ptr [0x10257048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257048))), 0x1025520du);
L_1025520d:;
  /* 1025520d pop esi */
  ESI = (pop32());
  /* 1025520e ret  */
  ESPCHK(0x102551c7u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x1025520f (18 bytes, 6 insns) */
void f_1025520f(void) {
  FTRACE(0x1025520fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1025520f push dword ptr [0x10258fec] */
  push32((uint32_t)(r32((uint32_t)(0x10258fec))));
  /* 10255215 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10255219 call 0x10255221 */
  push32(0x1025521eu); f_10255221();
  /* 1025521e pop ecx */
  ECX = (pop32());
  /* 1025521f pop ecx */
  ECX = (pop32());
  /* 10255220 ret  */
  ESPCHK(0x1025520fu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10255221 (44 bytes, 16 insns) */
void f_10255221(void) {
  FTRACE(0x10255221u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10255221 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255226 ja 0x1025524a */
  if ((!C.cf&&!C.zf)) goto L_1025524a;
L_10255228:;
  /* 10255228 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1025522c call 0x1025524d */
  push32(0x10255231u); f_1025524d();
  /* 10255231 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10255233 pop ecx */
  ECX = (pop32());
  /* 10255234 jne 0x1025524c */
  if (!C.zf) goto L_1025524c;
  /* 10255236 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025523a je 0x1025524c */
  if (C.zf) goto L_1025524c;
  /* 1025523c push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10255240 call 0x10256568 */
  push32(0x10255245u); f_10256568();
  /* 10255245 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10255247 pop ecx */
  ECX = (pop32());
  /* 10255248 jne 0x10255228 */
  if (!C.zf) goto L_10255228;
L_1025524a:;
  /* 1025524a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1025524c:;
  /* 1025524c ret  */
  ESPCHK(0x10255221u, _esp0);
  ESP += 4; return;
}

/* FUN_1000524d @ 0x1025524d (78 bytes, 30 insns) */
void f_1025524d(void) {
  FTRACE(0x1025524du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1025524d push esi */
  push32((uint32_t)(ESI));
  /* 1025524e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10255252 cmp esi, dword ptr [0x10258950] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10258950))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255258 push edi */
  push32((uint32_t)(EDI));
  /* 10255259 ja 0x1025527c */
  if ((!C.cf&&!C.zf)) goto L_1025527c;
  /* 1025525b push 9 */
  push32((uint32_t)(0x9u));
  /* 1025525d call 0x102550c4 */
  push32(0x10255262u); f_102550c4();
  /* 10255262 push esi */
  push32((uint32_t)(ESI));
  /* 10255263 call 0x10255ec9 */
  push32(0x10255268u); f_10255ec9();
  /* 10255268 push 9 */
  push32((uint32_t)(0x9u));
  /* 1025526a mov edi, eax */
  EDI = (EAX);
  /* 1025526c call 0x10255125 */
  push32(0x10255271u); f_10255125();
  /* 10255271 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10255274 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10255276 je 0x1025527c */
  if (C.zf) goto L_1025527c;
  /* 10255278 mov eax, edi */
  EAX = (EDI);
  /* 1025527a jmp 0x10255298 */
  goto L_10255298;
L_1025527c:;
  /* 1025527c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1025527e jne 0x10255283 */
  if (!C.zf) goto L_10255283;
  /* 10255280 push 1 */
  push32((uint32_t)(0x1u));
  /* 10255282 pop esi */
  ESI = (pop32());
L_10255283:;
  /* 10255283 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10255286 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10255289 push esi */
  push32((uint32_t)(ESI));
  /* 1025528a push 0 */
  push32((uint32_t)(0x0u));
  /* 1025528c push dword ptr [0x10259268] */
  push32((uint32_t)(r32((uint32_t)(0x10259268))));
  /* 10255292 call dword ptr [0x10257034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257034))), 0x10255298u);
L_10255298:;
  /* 10255298 pop edi */
  EDI = (pop32());
  /* 10255299 pop esi */
  ESI = (pop32());
  /* 1025529a ret  */
  ESPCHK(0x1025524du, _esp0);
  ESP += 4; return;
}

/* FUN_100052a0 @ 0x102552a0 (7 bytes, 3 insns) */
void f_102552a0(void) {
  FTRACE(0x102552a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102552a0 push edi */
  push32((uint32_t)(EDI));
  /* 102552a1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 102552a5 jmp 0x10255311 */
  jmp_ind(0x10255311u); return;
}

/* FUN_100052b0 @ 0x102552b0 (224 bytes, 84 insns) */
void f_102552b0(void) {
  FTRACE(0x102552b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102552b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102552b4 push edi */
  push32((uint32_t)(EDI));
  /* 102552b5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102552bb je 0x102552cc */
  if (C.zf) goto L_102552cc;
L_102552bd:;
  /* 102552bd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 102552bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102552c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102552c2 je 0x102552ff */
  if (C.zf) goto L_102552ff;
  /* 102552c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102552ca jne 0x102552bd */
  if (!C.zf) goto L_102552bd;
L_102552cc:;
  /* 102552cc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102552ce mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102552d3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102552d5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102552d8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102552da add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102552dd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102552e2 je 0x102552cc */
  if (C.zf) goto L_102552cc;
  /* 102552e4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 102552e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102552e9 je 0x1025530e */
  if (C.zf) goto L_1025530e;
  /* 102552eb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 102552ed je 0x10255309 */
  if (C.zf) goto L_10255309;
  /* 102552ef test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 102552f4 je 0x10255304 */
  if (C.zf) goto L_10255304;
  /* 102552f6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 102552fb je 0x102552ff */
  if (C.zf) goto L_102552ff;
  /* 102552fd jmp 0x102552cc */
  goto L_102552cc;
L_102552ff:;
  /* 102552ff lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10255302 jmp 0x10255311 */
  goto L_10255311;
L_10255304:;
  /* 10255304 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10255307 jmp 0x10255311 */
  goto L_10255311;
L_10255309:;
  /* 10255309 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1025530c jmp 0x10255311 */
  goto L_10255311;
L_1025530e:;
  /* 1025530e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10255311:;
  /* 10255311 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10255315 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1025531b je 0x10255336 */
  if (C.zf) goto L_10255336;
L_1025531d:;
  /* 1025531d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1025531f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10255320 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10255322 je 0x10255388 */
  if (C.zf) goto L_10255388;
  /* 10255324 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10255326 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10255327 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1025532d jne 0x1025531d */
  if (!C.zf) goto L_1025531d;
  /* 1025532f jmp 0x10255336 */
  goto L_10255336;
L_10255331:;
  /* 10255331 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10255333 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10255336:;
  /* 10255336 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1025533b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1025533d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1025533f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10255342 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10255344 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10255346 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10255349 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1025534e je 0x10255331 */
  if (C.zf) goto L_10255331;
  /* 10255350 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10255352 je 0x10255388 */
  if (C.zf) goto L_10255388;
  /* 10255354 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10255356 je 0x1025537f */
  if (C.zf) goto L_1025537f;
  /* 10255358 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1025535e je 0x10255372 */
  if (C.zf) goto L_10255372;
  /* 10255360 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10255366 je 0x1025536a */
  if (C.zf) goto L_1025536a;
  /* 10255368 jmp 0x10255331 */
  goto L_10255331;
L_1025536a:;
  /* 1025536a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1025536c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10255370 pop edi */
  EDI = (pop32());
  /* 10255371 ret  */
  ESPCHK(0x102552b0u, _esp0);
  ESP += 4; return;
L_10255372:;
  /* 10255372 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10255375 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10255379 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1025537d pop edi */
  EDI = (pop32());
  /* 1025537e ret  */
  ESPCHK(0x102552b0u, _esp0);
  ESP += 4; return;
L_1025537f:;
  /* 1025537f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10255382 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10255386 pop edi */
  EDI = (pop32());
  /* 10255387 ret  */
  ESPCHK(0x102552b0u, _esp0);
  ESP += 4; return;
L_10255388:;
  /* 10255388 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1025538a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1025538e pop edi */
  EDI = (pop32());
  /* 1025538f ret  */
  ESPCHK(0x102552b0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10255390 (123 bytes, 44 insns) */
void f_10255390(void) {
  FTRACE(0x10255390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10255390 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10255394 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1025539a je 0x102553b0 */
  if (C.zf) goto L_102553b0;
L_1025539c:;
  /* 1025539c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1025539e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1025539f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102553a1 je 0x102553e3 */
  if (C.zf) goto L_102553e3;
  /* 102553a3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102553a9 jne 0x1025539c */
  if (!C.zf) goto L_1025539c;
  /* 102553ab add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_102553b0:;
  /* 102553b0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102553b2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102553b7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102553b9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102553bc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102553be add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102553c1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102553c6 je 0x102553b0 */
  if (C.zf) goto L_102553b0;
  /* 102553c8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 102553cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102553cd je 0x10255401 */
  if (C.zf) goto L_10255401;
  /* 102553cf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 102553d1 je 0x102553f7 */
  if (C.zf) goto L_102553f7;
  /* 102553d3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 102553d8 je 0x102553ed */
  if (C.zf) goto L_102553ed;
  /* 102553da test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 102553df je 0x102553e3 */
  if (C.zf) goto L_102553e3;
  /* 102553e1 jmp 0x102553b0 */
  goto L_102553b0;
L_102553e3:;
  /* 102553e3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 102553e6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102553ea sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102553ec ret  */
  ESPCHK(0x10255390u, _esp0);
  ESP += 4; return;
L_102553ed:;
  /* 102553ed lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 102553f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102553f4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102553f6 ret  */
  ESPCHK(0x10255390u, _esp0);
  ESP += 4; return;
L_102553f7:;
  /* 102553f7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 102553fa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102553fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10255400 ret  */
  ESPCHK(0x10255390u, _esp0);
  ESP += 4; return;
L_10255401:;
  /* 10255401 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10255404 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10255408 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1025540a ret  */
  ESPCHK(0x10255390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000540b @ 0x1025540b (429 bytes, 143 insns) */
void f_1025540b(void) {
  FTRACE(0x1025540bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1025540b push ebp */
  push32((uint32_t)(EBP));
  /* 1025540c mov ebp, esp */
  EBP = (ESP);
  /* 1025540e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10255411 push ebx */
  push32((uint32_t)(EBX));
  /* 10255412 push esi */
  push32((uint32_t)(ESI));
  /* 10255413 push edi */
  push32((uint32_t)(EDI));
  /* 10255414 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10255416 call 0x102550c4 */
  push32(0x1025541bu); f_102550c4();
  /* 1025541b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1025541e call 0x102555b8 */
  push32(0x10255423u); f_102555b8();
  /* 10255423 mov ebx, eax */
  EBX = (EAX);
  /* 10255425 pop ecx */
  ECX = (pop32());
  /* 10255426 cmp ebx, dword ptr [0x10259030] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10259030))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025542c pop ecx */
  ECX = (pop32());
  /* 1025542d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10255430 jne 0x10255439 */
  if (!C.zf) goto L_10255439;
L_10255432:;
  /* 10255432 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10255434 jmp 0x102555a9 */
  goto L_102555a9;
L_10255439:;
  /* 10255439 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1025543b je 0x10255597 */
  if (C.zf) goto L_10255597;
  /* 10255441 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10255443 mov eax, 0x10258858 */
  EAX = (0x10258858u);
L_10255448:;
  /* 10255448 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025544a je 0x102554c0 */
  if (C.zf) goto L_102554c0;
  /* 1025544c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1025544f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10255450 cmp eax, 0x10258948 */
  { uint32_t _a=(EAX),_b=(0x10258948u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255455 jl 0x10255448 */
  if ((C.sf!=C.of)) goto L_10255448;
  /* 10255457 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1025545a push eax */
  push32((uint32_t)(EAX));
  /* 1025545b push ebx */
  push32((uint32_t)(EBX));
  /* 1025545c call dword ptr [0x10257030] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257030))), 0x10255462u);
  /* 10255462 push 1 */
  push32((uint32_t)(0x1u));
  /* 10255464 pop esi */
  ESI = (pop32());
  /* 10255465 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255467 jne 0x1025558e */
  if (!C.zf) goto L_1025558e;
  /* 1025546d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1025546f and dword ptr [0x10259264], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10259264)))&(0x0u); w32((uint32_t)(0x10259264), (_r)); fl_logic(_r,32); }
  /* 10255476 pop ecx */
  ECX = (pop32());
  /* 10255477 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10255479 mov edi, 0x10259160 */
  EDI = (0x10259160u);
  /* 1025547e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255481 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10255483 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10255484 mov dword ptr [0x10259030], ebx */
  w32((uint32_t)(0x10259030), (EBX));
  /* 1025548a jbe 0x1025557b */
  if ((C.cf||C.zf)) goto L_1025557b;
  /* 10255490 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10255494 je 0x10255556 */
  if (C.zf) goto L_10255556;
  /* 1025549a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1025549d:;
  /* 1025549d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1025549f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102554a1 je 0x10255556 */
  if (C.zf) goto L_10255556;
  /* 102554a7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 102554ab movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_102554ae:;
  /* 102554ae cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102554b0 ja 0x1025554a */
  if ((!C.cf&&!C.zf)) goto L_1025554a;
  /* 102554b6 or byte ptr [eax + 0x10259161], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10259161)))|(0x4u); w8((uint32_t)(EAX + 0x10259161), (_r)); fl_logic(_r,8); }
  /* 102554bd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102554be jmp 0x102554ae */
  goto L_102554ae;
L_102554c0:;
  /* 102554c0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102554c4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102554c6 pop ecx */
  ECX = (pop32());
  /* 102554c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102554c9 mov edi, 0x10259160 */
  EDI = (0x10259160u);
  /* 102554ce lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 102554d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102554d3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 102554d6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 102554d7 lea ebx, [esi + 0x10258868] */
  EBX = ((uint32_t)(ESI + 0x10258868));
L_102554dd:;
  /* 102554dd cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102554e0 mov ecx, ebx */
  ECX = (EBX);
  /* 102554e2 je 0x10255510 */
  if (C.zf) goto L_10255510;
L_102554e4:;
  /* 102554e4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 102554e7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102554e9 je 0x10255510 */
  if (C.zf) goto L_10255510;
  /* 102554eb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 102554ee movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 102554f1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102554f3 ja 0x10255509 */
  if ((!C.cf&&!C.zf)) goto L_10255509;
  /* 102554f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102554f8 mov dl, byte ptr [edx + 0x10258850] */
  DL = (r8((uint32_t)(EDX + 0x10258850)));
L_102554fe:;
  /* 102554fe or byte ptr [eax + 0x10259161], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10259161)))|(DL); w8((uint32_t)(EAX + 0x10259161), (_r)); fl_logic(_r,8); }
  /* 10255504 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10255505 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255507 jbe 0x102554fe */
  if ((C.cf||C.zf)) goto L_102554fe;
L_10255509:;
  /* 10255509 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1025550a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1025550b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1025550e jne 0x102554e4 */
  if (!C.zf) goto L_102554e4;
L_10255510:;
  /* 10255510 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10255513 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10255516 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025551a jb 0x102554dd */
  if (C.cf) goto L_102554dd;
  /* 1025551c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1025551f mov dword ptr [0x1025904c], 1 */
  w32((uint32_t)(0x1025904c), (0x1u));
  /* 10255529 push eax */
  push32((uint32_t)(EAX));
  /* 1025552a mov dword ptr [0x10259030], eax */
  w32((uint32_t)(0x10259030), (EAX));
  /* 1025552f call 0x10255602 */
  push32(0x10255534u); f_10255602();
  /* 10255534 lea esi, [esi + 0x1025885c] */
  ESI = ((uint32_t)(ESI + 0x1025885c));
  /* 1025553a mov edi, 0x10259040 */
  EDI = (0x10259040u);
  /* 1025553f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10255540 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10255541 pop ecx */
  ECX = (pop32());
  /* 10255542 mov dword ptr [0x10259264], eax */
  w32((uint32_t)(0x10259264), (EAX));
  /* 10255547 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10255548 jmp 0x1025559c */
  goto L_1025559c;
L_1025554a:;
  /* 1025554a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1025554b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1025554c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10255550 jne 0x1025549d */
  if (!C.zf) goto L_1025549d;
L_10255556:;
  /* 10255556 mov eax, esi */
  EAX = (ESI);
L_10255558:;
  /* 10255558 or byte ptr [eax + 0x10259161], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10259161)))|(0x8u); w8((uint32_t)(EAX + 0x10259161), (_r)); fl_logic(_r,8); }
  /* 1025555f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10255560 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255565 jb 0x10255558 */
  if (C.cf) goto L_10255558;
  /* 10255567 push ebx */
  push32((uint32_t)(EBX));
  /* 10255568 call 0x10255602 */
  push32(0x1025556du); f_10255602();
  /* 1025556d pop ecx */
  ECX = (pop32());
  /* 1025556e mov dword ptr [0x10259264], eax */
  w32((uint32_t)(0x10259264), (EAX));
  /* 10255573 mov dword ptr [0x1025904c], esi */
  w32((uint32_t)(0x1025904c), (ESI));
  /* 10255579 jmp 0x10255582 */
  goto L_10255582;
L_1025557b:;
  /* 1025557b and dword ptr [0x1025904c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1025904c)))&(0x0u); w32((uint32_t)(0x1025904c), (_r)); fl_logic(_r,32); }
L_10255582:;
  /* 10255582 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10255584 mov edi, 0x10259040 */
  EDI = (0x10259040u);
  /* 10255589 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1025558a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1025558b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1025558c jmp 0x1025559c */
  goto L_1025559c;
L_1025558e:;
  /* 1025558e cmp dword ptr [0x10258fd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10258fd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255595 je 0x102555a6 */
  if (C.zf) goto L_102555a6;
L_10255597:;
  /* 10255597 call 0x10255635 */
  push32(0x1025559cu); f_10255635();
L_1025559c:;
  /* 1025559c call 0x1025565e */
  push32(0x102555a1u); f_1025565e();
  /* 102555a1 jmp 0x10255432 */
  goto L_10255432;
L_102555a6:;
  /* 102555a6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_102555a9:;
  /* 102555a9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 102555ab call 0x10255125 */
  push32(0x102555b0u); f_10255125();
  /* 102555b0 pop ecx */
  ECX = (pop32());
  /* 102555b1 mov eax, esi */
  EAX = (ESI);
  /* 102555b3 pop edi */
  EDI = (pop32());
  /* 102555b4 pop esi */
  ESI = (pop32());
  /* 102555b5 pop ebx */
  EBX = (pop32());
  /* 102555b6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102555b7 ret  */
  ESPCHK(0x1025540bu, _esp0);
  ESP += 4; return;
}

/* FUN_100055b8 @ 0x102555b8 (74 bytes, 15 insns) */
void f_102555b8(void) {
  FTRACE(0x102555b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102555b8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102555bc and dword ptr [0x10258fd8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10258fd8)))&(0x0u); w32((uint32_t)(0x10258fd8), (_r)); fl_logic(_r,32); }
  /* 102555c3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102555c6 jne 0x102555d8 */
  if (!C.zf) goto L_102555d8;
  /* 102555c8 mov dword ptr [0x10258fd8], 1 */
  w32((uint32_t)(0x10258fd8), (0x1u));
  /* 102555d2 jmp dword ptr [0x10257028] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10257028)))); return;
L_102555d8:;
  /* 102555d8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102555db jne 0x102555ed */
  if (!C.zf) goto L_102555ed;
  /* 102555dd mov dword ptr [0x10258fd8], 1 */
  w32((uint32_t)(0x10258fd8), (0x1u));
  /* 102555e7 jmp dword ptr [0x1025702c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1025702c)))); return;
L_102555ed:;
  /* 102555ed cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102555f0 jne 0x10255601 */
  if (!C.zf) goto L_10255601;
  /* 102555f2 mov eax, dword ptr [0x10259008] */
  EAX = (r32((uint32_t)(0x10259008)));
  /* 102555f7 mov dword ptr [0x10258fd8], 1 */
  w32((uint32_t)(0x10258fd8), (0x1u));
L_10255601:;
  /* 10255601 ret  */
  ESPCHK(0x102555b8u, _esp0);
  ESP += 4; return;
}

/* FUN_10005602 @ 0x10255602 (51 bytes, 19 insns) */
void f_10255602(void) {
  FTRACE(0x10255602u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10255602 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10255606 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1025560b je 0x1025562f */
  if (C.zf) goto L_1025562f;
  /* 1025560d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10255610 je 0x10255629 */
  if (C.zf) goto L_10255629;
  /* 10255612 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10255615 je 0x10255623 */
  if (C.zf) goto L_10255623;
  /* 10255617 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10255618 je 0x1025561d */
  if (C.zf) goto L_1025561d;
  /* 1025561a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1025561c ret  */
  ESPCHK(0x10255602u, _esp0);
  ESP += 4; return;
L_1025561d:;
  /* 1025561d mov eax, 0x404 */
  EAX = (0x404u);
  /* 10255622 ret  */
  ESPCHK(0x10255602u, _esp0);
  ESP += 4; return;
L_10255623:;
  /* 10255623 mov eax, 0x412 */
  EAX = (0x412u);
  /* 10255628 ret  */
  ESPCHK(0x10255602u, _esp0);
  ESP += 4; return;
L_10255629:;
  /* 10255629 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1025562e ret  */
  ESPCHK(0x10255602u, _esp0);
  ESP += 4; return;
L_1025562f:;
  /* 1025562f mov eax, 0x411 */
  EAX = (0x411u);
  /* 10255634 ret  */
  ESPCHK(0x10255602u, _esp0);
  ESP += 4; return;
}

/* FUN_10005635 @ 0x10255635 (41 bytes, 17 insns) */
void f_10255635(void) {
  FTRACE(0x10255635u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10255635 push edi */
  push32((uint32_t)(EDI));
  /* 10255636 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10255638 pop ecx */
  ECX = (pop32());
  /* 10255639 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1025563b mov edi, 0x10259160 */
  EDI = (0x10259160u);
  /* 10255640 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10255642 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10255643 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10255645 mov edi, 0x10259040 */
  EDI = (0x10259040u);
  /* 1025564a mov dword ptr [0x10259030], eax */
  w32((uint32_t)(0x10259030), (EAX));
  /* 1025564f mov dword ptr [0x1025904c], eax */
  w32((uint32_t)(0x1025904c), (EAX));
  /* 10255654 mov dword ptr [0x10259264], eax */
  w32((uint32_t)(0x10259264), (EAX));
  /* 10255659 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1025565a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1025565b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1025565c pop edi */
  EDI = (pop32());
  /* 1025565d ret  */
  ESPCHK(0x10255635u, _esp0);
  ESP += 4; return;
}

/* FUN_1000565e @ 0x1025565e (389 bytes, 124 insns) */
void f_1025565e(void) {
  FTRACE(0x1025565eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1025565e push ebp */
  push32((uint32_t)(EBP));
  /* 1025565f mov ebp, esp */
  EBP = (ESP);
  /* 10255661 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10255667 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1025566a push esi */
  push32((uint32_t)(ESI));
  /* 1025566b push eax */
  push32((uint32_t)(EAX));
  /* 1025566c push dword ptr [0x10259030] */
  push32((uint32_t)(r32((uint32_t)(0x10259030))));
  /* 10255672 call dword ptr [0x10257030] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257030))), 0x10255678u);
  /* 10255678 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025567b jne 0x10255797 */
  if (!C.zf) goto L_10255797;
  /* 10255681 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10255683 mov esi, 0x100 */
  ESI = (0x100u);
L_10255688:;
  /* 10255688 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1025568f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10255690 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255692 jb 0x10255688 */
  if (C.cf) goto L_10255688;
  /* 10255694 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 10255697 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1025569e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102556a0 je 0x102556d9 */
  if (C.zf) goto L_102556d9;
  /* 102556a2 push ebx */
  push32((uint32_t)(EBX));
  /* 102556a3 push edi */
  push32((uint32_t)(EDI));
  /* 102556a4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_102556a7:;
  /* 102556a7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 102556aa movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 102556ad cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102556af ja 0x102556ce */
  if ((!C.cf&&!C.zf)) goto L_102556ce;
  /* 102556b1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102556b3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 102556ba inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102556bb mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 102556c0 mov ebx, ecx */
  EBX = (ECX);
  /* 102556c2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102556c5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102556c7 mov ecx, ebx */
  ECX = (EBX);
  /* 102556c9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 102556cc rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_102556ce:;
  /* 102556ce inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102556cf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102556d0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 102556d3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102556d5 jne 0x102556a7 */
  if (!C.zf) goto L_102556a7;
  /* 102556d7 pop edi */
  EDI = (pop32());
  /* 102556d8 pop ebx */
  EBX = (pop32());
L_102556d9:;
  /* 102556d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102556db lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 102556e1 push dword ptr [0x10259264] */
  push32((uint32_t)(r32((uint32_t)(0x10259264))));
  /* 102556e7 push dword ptr [0x10259030] */
  push32((uint32_t)(r32((uint32_t)(0x10259030))));
  /* 102556ed push eax */
  push32((uint32_t)(EAX));
  /* 102556ee lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 102556f4 push esi */
  push32((uint32_t)(ESI));
  /* 102556f5 push eax */
  push32((uint32_t)(EAX));
  /* 102556f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102556f8 call 0x102567d2 */
  push32(0x102556fdu); f_102567d2();
  /* 102556fd push 0 */
  push32((uint32_t)(0x0u));
  /* 102556ff lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 10255705 push dword ptr [0x10259030] */
  push32((uint32_t)(r32((uint32_t)(0x10259030))));
  /* 1025570b push esi */
  push32((uint32_t)(ESI));
  /* 1025570c push eax */
  push32((uint32_t)(EAX));
  /* 1025570d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10255713 push esi */
  push32((uint32_t)(ESI));
  /* 10255714 push eax */
  push32((uint32_t)(EAX));
  /* 10255715 push esi */
  push32((uint32_t)(ESI));
  /* 10255716 push dword ptr [0x10259264] */
  push32((uint32_t)(r32((uint32_t)(0x10259264))));
  /* 1025571c call 0x10256583 */
  push32(0x10255721u); f_10256583();
  /* 10255721 push 0 */
  push32((uint32_t)(0x0u));
  /* 10255723 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 10255729 push dword ptr [0x10259030] */
  push32((uint32_t)(r32((uint32_t)(0x10259030))));
  /* 1025572f push esi */
  push32((uint32_t)(ESI));
  /* 10255730 push eax */
  push32((uint32_t)(EAX));
  /* 10255731 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10255737 push esi */
  push32((uint32_t)(ESI));
  /* 10255738 push eax */
  push32((uint32_t)(EAX));
  /* 10255739 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1025573e push dword ptr [0x10259264] */
  push32((uint32_t)(r32((uint32_t)(0x10259264))));
  /* 10255744 call 0x10256583 */
  push32(0x10255749u); f_10256583();
  /* 10255749 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1025574c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1025574e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_10255754:;
  /* 10255754 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10255757 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1025575a je 0x10255772 */
  if (C.zf) goto L_10255772;
  /* 1025575c or byte ptr [eax + 0x10259161], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10259161)))|(0x10u); w8((uint32_t)(EAX + 0x10259161), (_r)); fl_logic(_r,8); }
  /* 10255763 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1025576a:;
  /* 1025576a mov byte ptr [eax + 0x10259060], dl */
  w8((uint32_t)(EAX + 0x10259060), (DL));
  /* 10255770 jmp 0x1025578e */
  goto L_1025578e;
L_10255772:;
  /* 10255772 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 10255775 je 0x10255787 */
  if (C.zf) goto L_10255787;
  /* 10255777 or byte ptr [eax + 0x10259161], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10259161)))|(0x20u); w8((uint32_t)(EAX + 0x10259161), (_r)); fl_logic(_r,8); }
  /* 1025577e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 10255785 jmp 0x1025576a */
  goto L_1025576a;
L_10255787:;
  /* 10255787 and byte ptr [eax + 0x10259060], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10259060)))&(0x0u); w8((uint32_t)(EAX + 0x10259060), (_r)); fl_logic(_r,8); }
L_1025578e:;
  /* 1025578e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1025578f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10255790 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10255791 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255793 jb 0x10255754 */
  if (C.cf) goto L_10255754;
  /* 10255795 jmp 0x102557e0 */
  goto L_102557e0;
L_10255797:;
  /* 10255797 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10255799 mov esi, 0x100 */
  ESI = (0x100u);
L_1025579e:;
  /* 1025579e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102557a1 jb 0x102557bc */
  if (C.cf) goto L_102557bc;
  /* 102557a3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102557a6 ja 0x102557bc */
  if ((!C.cf&&!C.zf)) goto L_102557bc;
  /* 102557a8 or byte ptr [eax + 0x10259161], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10259161)))|(0x10u); w8((uint32_t)(EAX + 0x10259161), (_r)); fl_logic(_r,8); }
  /* 102557af mov cl, al */
  CL = (AL);
  /* 102557b1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_102557b4:;
  /* 102557b4 mov byte ptr [eax + 0x10259060], cl */
  w8((uint32_t)(EAX + 0x10259060), (CL));
  /* 102557ba jmp 0x102557db */
  goto L_102557db;
L_102557bc:;
  /* 102557bc cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102557bf jb 0x102557d4 */
  if (C.cf) goto L_102557d4;
  /* 102557c1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102557c4 ja 0x102557d4 */
  if ((!C.cf&&!C.zf)) goto L_102557d4;
  /* 102557c6 or byte ptr [eax + 0x10259161], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10259161)))|(0x20u); w8((uint32_t)(EAX + 0x10259161), (_r)); fl_logic(_r,8); }
  /* 102557cd mov cl, al */
  CL = (AL);
  /* 102557cf sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102557d2 jmp 0x102557b4 */
  goto L_102557b4;
L_102557d4:;
  /* 102557d4 and byte ptr [eax + 0x10259060], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10259060)))&(0x0u); w8((uint32_t)(EAX + 0x10259060), (_r)); fl_logic(_r,8); }
L_102557db:;
  /* 102557db inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102557dc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102557de jb 0x1025579e */
  if (C.cf) goto L_1025579e;
L_102557e0:;
  /* 102557e0 pop esi */
  ESI = (pop32());
  /* 102557e1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102557e2 ret  */
  ESPCHK(0x1025565eu, _esp0);
  ESP += 4; return;
}

/* FUN_100057e3 @ 0x102557e3 (28 bytes, 7 insns) */
void f_102557e3(void) {
  FTRACE(0x102557e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102557e3 cmp dword ptr [0x10259388], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10259388))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102557ea jne 0x102557fe */
  if (!C.zf) goto L_102557fe;
  /* 102557ec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 102557ee call 0x1025540b */
  push32(0x102557f3u); f_1025540b();
  /* 102557f3 pop ecx */
  ECX = (pop32());
  /* 102557f4 mov dword ptr [0x10259388], 1 */
  w32((uint32_t)(0x10259388), (0x1u));
L_102557fe:;
  /* 102557fe ret  */
  ESPCHK(0x102557e3u, _esp0);
  ESP += 4; return;
}

/* FUN_10005800 @ 0x10255800 (664 bytes, 257 insns) [15 switch table(s)] */
void f_10255800(void) {
  FTRACE(0x10255800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10255800 push ebp */
  push32((uint32_t)(EBP));
  /* 10255801 mov ebp, esp */
  EBP = (ESP);
  /* 10255803 push edi */
  push32((uint32_t)(EDI));
  /* 10255804 push esi */
  push32((uint32_t)(ESI));
  /* 10255805 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10255808 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1025580b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1025580e mov eax, ecx */
  EAX = (ECX);
  /* 10255810 mov edx, ecx */
  EDX = (ECX);
  /* 10255812 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10255814 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255816 jbe 0x10255820 */
  if ((C.cf||C.zf)) goto L_10255820;
  /* 10255818 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025581a jb 0x10255998 */
  if (C.cf) goto L_10255998;
L_10255820:;
  /* 10255820 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10255826 jne 0x1025583c */
  if (!C.zf) goto L_1025583c;
  /* 10255828 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1025582b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1025582e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255831 jb 0x1025585c */
  if (C.cf) goto L_1025585c;
  /* 10255833 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10255835 jmp dword ptr [edx*4 + 0x10255948] */
  switch (EDX) {
    case 0: goto L_10255958;
    case 1: goto L_10255960;
    case 2: goto L_1025596c;
    case 3: goto L_10255980;
    default: x86_unimpl("switch@0x10255835 out of table"); return;
  }
L_1025583c:;
  /* 1025583c mov eax, edi */
  EAX = (EDI);
  /* 1025583e mov edx, 3 */
  EDX = (0x3u);
  /* 10255843 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10255846 jb 0x10255854 */
  if (C.cf) goto L_10255854;
  /* 10255848 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1025584b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1025584d jmp dword ptr [eax*4 + 0x10255860] */
  switch (EAX) {
    case 1: goto L_10255870;
    case 2: goto L_1025589c;
    case 3: goto L_102558c0;
    default: x86_unimpl("switch@0x1025584d out of table"); return;
  }
L_10255854:;
  /* 10255854 jmp dword ptr [ecx*4 + 0x10255958] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10255958)))); return;
  /* 1025585b nop  */
  /* nop */
L_1025585c:;
  /* 1025585c jmp dword ptr [ecx*4 + 0x102558dc] */
  switch (ECX) {
    case 0: goto L_1025593f;
    case 1: goto L_1025592c;
    case 2: goto L_10255924;
    case 3: goto L_1025591c;
    case 4: goto L_10255914;
    case 5: goto L_1025590c;
    case 6: goto L_10255904;
    case 7: goto L_102558fc;
    default: x86_unimpl("switch@0x1025585c out of table"); return;
  }
  /* 10255863 nop  */
  /* nop */
L_10255870:;
  /* 10255870 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10255872 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10255874 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10255876 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10255879 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1025587c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1025587f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10255882 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10255885 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10255888 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1025588b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025588e jb 0x1025585c */
  if (C.cf) goto L_1025585c;
  /* 10255890 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10255892 jmp dword ptr [edx*4 + 0x10255948] */
  switch (EDX) {
    case 0: goto L_10255958;
    case 1: goto L_10255960;
    case 2: goto L_1025596c;
    case 3: goto L_10255980;
    default: x86_unimpl("switch@0x10255892 out of table"); return;
  }
  /* 10255899 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1025589c:;
  /* 1025589c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1025589e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102558a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102558a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102558a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102558a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102558ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102558ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102558b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102558b4 jb 0x1025585c */
  if (C.cf) goto L_1025585c;
  /* 102558b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102558b8 jmp dword ptr [edx*4 + 0x10255948] */
  switch (EDX) {
    case 0: goto L_10255958;
    case 1: goto L_10255960;
    case 2: goto L_1025596c;
    case 3: goto L_10255980;
    default: x86_unimpl("switch@0x102558b8 out of table"); return;
  }
  /* 102558bf nop  */
  /* nop */
L_102558c0:;
  /* 102558c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102558c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102558c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102558c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102558c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102558ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102558cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102558ce jb 0x1025585c */
  if (C.cf) goto L_1025585c;
  /* 102558d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102558d2 jmp dword ptr [edx*4 + 0x10255948] */
  switch (EDX) {
    case 0: goto L_10255958;
    case 1: goto L_10255960;
    case 2: goto L_1025596c;
    case 3: goto L_10255980;
    default: x86_unimpl("switch@0x102558d2 out of table"); return;
  }
  /* 102558d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102558fc:;
  /* 102558fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10255900 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10255904:;
  /* 10255904 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10255908 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1025590c:;
  /* 1025590c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10255910 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10255914:;
  /* 10255914 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10255918 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1025591c:;
  /* 1025591c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10255920 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10255924:;
  /* 10255924 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10255928 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1025592c:;
  /* 1025592c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10255930 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10255934 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1025593b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1025593d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1025593f:;
  /* 1025593f jmp dword ptr [edx*4 + 0x10255948] */
  switch (EDX) {
    case 0: goto L_10255958;
    case 1: goto L_10255960;
    case 2: goto L_1025596c;
    case 3: goto L_10255980;
    default: x86_unimpl("switch@0x1025593f out of table"); return;
  }
  /* 10255946 mov edi, edi */
  EDI = (EDI);
L_10255958:;
  /* 10255958 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1025595b pop esi */
  ESI = (pop32());
  /* 1025595c pop edi */
  EDI = (pop32());
  /* 1025595d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1025595e ret  */
  ESPCHK(0x10255800u, _esp0);
  ESP += 4; return;
  /* 1025595f nop  */
  /* nop */
L_10255960:;
  /* 10255960 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10255962 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10255964 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10255967 pop esi */
  ESI = (pop32());
  /* 10255968 pop edi */
  EDI = (pop32());
  /* 10255969 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1025596a ret  */
  ESPCHK(0x10255800u, _esp0);
  ESP += 4; return;
  /* 1025596b nop  */
  /* nop */
L_1025596c:;
  /* 1025596c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1025596e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10255970 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10255973 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10255976 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10255979 pop esi */
  ESI = (pop32());
  /* 1025597a pop edi */
  EDI = (pop32());
  /* 1025597b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1025597c ret  */
  ESPCHK(0x10255800u, _esp0);
  ESP += 4; return;
  /* 1025597d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10255980:;
  /* 10255980 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10255982 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10255984 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10255987 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1025598a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1025598d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10255990 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10255993 pop esi */
  ESI = (pop32());
  /* 10255994 pop edi */
  EDI = (pop32());
  /* 10255995 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10255996 ret  */
  ESPCHK(0x10255800u, _esp0);
  ESP += 4; return;
  /* 10255997 nop  */
  /* nop */
L_10255998:;
  /* 10255998 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1025599c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 102559a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102559a6 jne 0x102559cc */
  if (!C.zf) goto L_102559cc;
  /* 102559a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102559ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102559ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102559b1 jb 0x102559c0 */
  if (C.cf) goto L_102559c0;
  /* 102559b3 std  */
  C.df=1;
  /* 102559b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102559b6 cld  */
  C.df=0;
  /* 102559b7 jmp dword ptr [edx*4 + 0x10255ae0] */
  switch (EDX) {
    case 0: goto L_10255af0;
    case 1: goto L_10255af8;
    case 2: goto L_10255b08;
    case 3: goto L_10255b1c;
    default: x86_unimpl("switch@0x102559b7 out of table"); return;
  }
  /* 102559be mov edi, edi */
  EDI = (EDI);
L_102559c0:;
  /* 102559c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102559c2 jmp dword ptr [ecx*4 + 0x10255a90] */
  switch (ECX) {
    case 0: goto L_10255ad7;
    default: x86_unimpl("switch@0x102559c2 out of table"); return;
  }
  /* 102559c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102559cc:;
  /* 102559cc mov eax, edi */
  EAX = (EDI);
  /* 102559ce mov edx, 3 */
  EDX = (0x3u);
  /* 102559d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102559d6 jb 0x102559e4 */
  if (C.cf) goto L_102559e4;
  /* 102559d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102559db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102559dd jmp dword ptr [eax*4 + 0x102559e8] */
  switch (EAX) {
    case 1: goto L_102559f8;
    case 2: goto L_10255a18;
    case 3: goto L_10255a40;
    default: x86_unimpl("switch@0x102559dd out of table"); return;
  }
L_102559e4:;
  /* 102559e4 jmp dword ptr [ecx*4 + 0x10255ae0] */
  switch (ECX) {
    case 0: goto L_10255af0;
    case 1: goto L_10255af8;
    case 2: goto L_10255b08;
    case 3: goto L_10255b1c;
    default: x86_unimpl("switch@0x102559e4 out of table"); return;
  }
  /* 102559eb nop  */
  /* nop */
L_102559f8:;
  /* 102559f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102559fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102559fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10255a00 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10255a01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10255a04 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10255a05 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255a08 jb 0x102559c0 */
  if (C.cf) goto L_102559c0;
  /* 10255a0a std  */
  C.df=1;
  /* 10255a0b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10255a0d cld  */
  C.df=0;
  /* 10255a0e jmp dword ptr [edx*4 + 0x10255ae0] */
  switch (EDX) {
    case 0: goto L_10255af0;
    case 1: goto L_10255af8;
    case 2: goto L_10255b08;
    case 3: goto L_10255b1c;
    default: x86_unimpl("switch@0x10255a0e out of table"); return;
  }
  /* 10255a15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10255a18:;
  /* 10255a18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10255a1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10255a1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10255a20 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10255a23 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10255a26 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10255a29 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10255a2c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10255a2f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255a32 jb 0x102559c0 */
  if (C.cf) goto L_102559c0;
  /* 10255a34 std  */
  C.df=1;
  /* 10255a35 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10255a37 cld  */
  C.df=0;
  /* 10255a38 jmp dword ptr [edx*4 + 0x10255ae0] */
  switch (EDX) {
    case 0: goto L_10255af0;
    case 1: goto L_10255af8;
    case 2: goto L_10255b08;
    case 3: goto L_10255b1c;
    default: x86_unimpl("switch@0x10255a38 out of table"); return;
  }
  /* 10255a3f nop  */
  /* nop */
L_10255a40:;
  /* 10255a40 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10255a43 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10255a45 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10255a48 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10255a4b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10255a4e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10255a51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10255a54 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10255a57 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10255a5a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10255a5d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255a60 jb 0x102559c0 */
  if (C.cf) goto L_102559c0;
  /* 10255a66 std  */
  C.df=1;
  /* 10255a67 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10255a69 cld  */
  C.df=0;
  /* 10255a6a jmp dword ptr [edx*4 + 0x10255ae0] */
  switch (EDX) {
    case 0: goto L_10255af0;
    case 1: goto L_10255af8;
    case 2: goto L_10255b08;
    case 3: goto L_10255b1c;
    default: x86_unimpl("switch@0x10255a6a out of table"); return;
  }
  /* 10255a71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10255a74 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10255a75 pop edx */
  EDX = (pop32());
  /* 10255a76 and eax, 0x255a9c10 */
  { uint32_t _r=(EAX)&(0x255a9c10u); EAX = (_r); fl_logic(_r,32); }
  /* 10255a7b adc byte ptr [edx + ebx*2 + 0x5aac1025], ah */
  { uint32_t _a=(r8((uint32_t)(EDX + EBX*2 + 0x5aac1025))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBX*2 + 0x5aac1025), (_r)); fl_add(_a,_b,_r,8); }
  /* 10255a82 and eax, 0x255ab410 */
  { uint32_t _r=(EAX)&(0x255ab410u); EAX = (_r); fl_logic(_r,32); }
  /* 10255a87 adc byte ptr [edx + ebx*2 + 0x5ac41025], bh */
  { uint32_t _a=(r8((uint32_t)(EDX + EBX*2 + 0x5ac41025))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBX*2 + 0x5ac41025), (_r)); fl_add(_a,_b,_r,8); }
  /* 10255a94 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10255a98 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10255a9c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10255aa0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10255aa4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10255aa8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10255aac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10255ab0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10255ab4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10255ab8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10255abc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10255ac0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10255ac4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10255ac8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10255acc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10255ad3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10255ad5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10255ad7:;
  /* 10255ad7 jmp dword ptr [edx*4 + 0x10255ae0] */
  switch (EDX) {
    case 0: goto L_10255af0;
    case 1: goto L_10255af8;
    case 2: goto L_10255b08;
    case 3: goto L_10255b1c;
    default: x86_unimpl("switch@0x10255ad7 out of table"); return;
  }
  /* 10255ade mov edi, edi */
  EDI = (EDI);
L_10255af0:;
  /* 10255af0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10255af3 pop esi */
  ESI = (pop32());
  /* 10255af4 pop edi */
  EDI = (pop32());
  /* 10255af5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10255af6 ret  */
  ESPCHK(0x10255800u, _esp0);
  ESP += 4; return;
  /* 10255af7 nop  */
  /* nop */
L_10255af8:;
  /* 10255af8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10255afb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10255afe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10255b01 pop esi */
  ESI = (pop32());
  /* 10255b02 pop edi */
  EDI = (pop32());
  /* 10255b03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10255b04 ret  */
  ESPCHK(0x10255800u, _esp0);
  ESP += 4; return;
  /* 10255b05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10255b08:;
  /* 10255b08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10255b0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10255b0e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10255b11 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10255b14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10255b17 pop esi */
  ESI = (pop32());
  /* 10255b18 pop edi */
  EDI = (pop32());
  /* 10255b19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10255b1a ret  */
  ESPCHK(0x10255800u, _esp0);
  ESP += 4; return;
  /* 10255b1b nop  */
  /* nop */
L_10255b1c:;
  /* 10255b1c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10255b1f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10255b22 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10255b25 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10255b28 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10255b2b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10255b2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10255b31 pop esi */
  ESI = (pop32());
  /* 10255b32 pop edi */
  EDI = (pop32());
  /* 10255b33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10255b34 ret  */
  ESPCHK(0x10255800u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b35 @ 0x10255b35 (62 bytes, 15 insns) */
void f_10255b35(void) {
  FTRACE(0x10255b35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10255b35 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10255b3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10255b3c push dword ptr [0x10259268] */
  push32((uint32_t)(r32((uint32_t)(0x10259268))));
  /* 10255b42 call dword ptr [0x10257034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257034))), 0x10255b48u);
  /* 10255b48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10255b4a mov dword ptr [0x1025902c], eax */
  w32((uint32_t)(0x1025902c), (EAX));
  /* 10255b4f jne 0x10255b52 */
  if (!C.zf) goto L_10255b52;
  /* 10255b51 ret  */
  ESPCHK(0x10255b35u, _esp0);
  ESP += 4; return;
L_10255b52:;
  /* 10255b52 and dword ptr [0x10259024], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10259024)))&(0x0u); w32((uint32_t)(0x10259024), (_r)); fl_logic(_r,32); }
  /* 10255b59 and dword ptr [0x10259028], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10259028)))&(0x0u); w32((uint32_t)(0x10259028), (_r)); fl_logic(_r,32); }
  /* 10255b60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10255b62 mov dword ptr [0x10259020], eax */
  w32((uint32_t)(0x10259020), (EAX));
  /* 10255b67 mov dword ptr [0x10259018], 0x10 */
  w32((uint32_t)(0x10259018), (0x10u));
  /* 10255b71 pop eax */
  EAX = (pop32());
  /* 10255b72 ret  */
  ESPCHK(0x10255b35u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b73 @ 0x10255b73 (43 bytes, 14 insns) */
void f_10255b73(void) {
  FTRACE(0x10255b73u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10255b73 mov eax, dword ptr [0x10259028] */
  EAX = (r32((uint32_t)(0x10259028)));
  /* 10255b78 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10255b7b mov eax, dword ptr [0x1025902c] */
  EAX = (r32((uint32_t)(0x1025902c)));
  /* 10255b80 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_10255b83:;
  /* 10255b83 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255b85 jae 0x10255b9b */
  if (!C.cf) goto L_10255b9b;
  /* 10255b87 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10255b8b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10255b8e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255b94 jb 0x10255b9d */
  if (C.cf) goto L_10255b9d;
  /* 10255b96 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10255b99 jmp 0x10255b83 */
  goto L_10255b83;
L_10255b9b:;
  /* 10255b9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10255b9d:;
  /* 10255b9d ret  */
  ESPCHK(0x10255b73u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b9e @ 0x10255b9e (811 bytes, 264 insns) */
void f_10255b9e(void) {
  FTRACE(0x10255b9eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10255b9e push ebp */
  push32((uint32_t)(EBP));
  /* 10255b9f mov ebp, esp */
  EBP = (ESP);
  /* 10255ba1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10255ba4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10255ba7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10255baa push ebx */
  push32((uint32_t)(EBX));
  /* 10255bab push esi */
  push32((uint32_t)(ESI));
  /* 10255bac mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 10255baf mov esi, edx */
  ESI = (EDX);
  /* 10255bb1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10255bb4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 10255bb7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10255bba push edi */
  push32((uint32_t)(EDI));
  /* 10255bbb shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 10255bbe mov ecx, esi */
  ECX = (ESI);
  /* 10255bc0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 10255bc3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10255bc9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10255bca mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10255bcd lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10255bd4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10255bd7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10255bda mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 10255bdd test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 10255be0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10255be3 jne 0x10255c64 */
  if (!C.zf) goto L_10255c64;
  /* 10255be5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10255be8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10255bea dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10255beb pop edi */
  EDI = (pop32());
  /* 10255bec mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10255bef cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255bf1 jbe 0x10255bf6 */
  if ((C.cf||C.zf)) goto L_10255bf6;
  /* 10255bf3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10255bf6:;
  /* 10255bf6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10255bfa cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255bfe jne 0x10255c48 */
  if (!C.zf) goto L_10255c48;
  /* 10255c00 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10255c03 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255c06 jae 0x10255c24 */
  if (!C.cf) goto L_10255c24;
  /* 10255c08 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10255c0d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10255c0f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10255c13 not edi */
  EDI = (~(EDI));
  /* 10255c15 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10255c19 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10255c1b jne 0x10255c48 */
  if (!C.zf) goto L_10255c48;
  /* 10255c1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10255c20 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10255c22 jmp 0x10255c48 */
  goto L_10255c48;
L_10255c24:;
  /* 10255c24 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10255c27 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10255c2c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10255c2e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10255c31 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10255c35 not edi */
  EDI = (~(EDI));
  /* 10255c37 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10255c3e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10255c40 jne 0x10255c48 */
  if (!C.zf) goto L_10255c48;
  /* 10255c42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10255c45 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10255c48:;
  /* 10255c48 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10255c4c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10255c50 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10255c53 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10255c57 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10255c5b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10255c5e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10255c61 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_10255c64:;
  /* 10255c64 mov edi, ebx */
  EDI = (EBX);
  /* 10255c66 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10255c69 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10255c6a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255c6d jbe 0x10255c72 */
  if ((C.cf||C.zf)) goto L_10255c72;
  /* 10255c6f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10255c71 pop edi */
  EDI = (pop32());
L_10255c72:;
  /* 10255c72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10255c75 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10255c78 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10255c7b jne 0x10255d21 */
  if (!C.zf) goto L_10255d21;
  /* 10255c81 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10255c84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10255c87 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10255c8a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10255c8c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10255c8f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10255c90 pop edx */
  EDX = (pop32());
  /* 10255c91 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255c93 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10255c96 jbe 0x10255c9d */
  if ((C.cf||C.zf)) goto L_10255c9d;
  /* 10255c98 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10255c9b mov ecx, edx */
  ECX = (EDX);
L_10255c9d:;
  /* 10255c9d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10255ca0 mov edi, ebx */
  EDI = (EBX);
  /* 10255ca2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10255ca5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10255ca8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10255ca9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255cab jbe 0x10255caf */
  if ((C.cf||C.zf)) goto L_10255caf;
  /* 10255cad mov edi, edx */
  EDI = (EDX);
L_10255caf:;
  /* 10255caf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255cb1 je 0x10255d1e */
  if (C.zf) goto L_10255d1e;
  /* 10255cb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10255cb6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10255cb9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255cbc jne 0x10255d06 */
  if (!C.zf) goto L_10255d06;
  /* 10255cbe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10255cc1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255cc4 jae 0x10255ce2 */
  if (!C.cf) goto L_10255ce2;
  /* 10255cc6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10255ccb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10255ccd lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10255cd1 not edx */
  EDX = (~(EDX));
  /* 10255cd3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10255cd7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10255cd9 jne 0x10255d06 */
  if (!C.zf) goto L_10255d06;
  /* 10255cdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10255cde and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10255ce0 jmp 0x10255d06 */
  goto L_10255d06;
L_10255ce2:;
  /* 10255ce2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10255ce5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10255cea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10255cec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10255cef lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10255cf3 not edx */
  EDX = (~(EDX));
  /* 10255cf5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10255cfc dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10255cfe jne 0x10255d06 */
  if (!C.zf) goto L_10255d06;
  /* 10255d00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10255d03 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10255d06:;
  /* 10255d06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10255d09 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10255d0c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10255d0f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10255d12 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10255d15 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10255d18 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 10255d1b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10255d1e:;
  /* 10255d1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10255d21:;
  /* 10255d21 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255d25 jne 0x10255d30 */
  if (!C.zf) goto L_10255d30;
  /* 10255d27 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255d2a je 0x10255db9 */
  if (C.zf) goto L_10255db9;
L_10255d30:;
  /* 10255d30 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10255d33 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10255d36 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10255d39 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10255d3c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10255d3f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10255d42 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10255d45 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10255d48 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10255d4b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10255d4e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10255d51 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255d54 jne 0x10255db9 */
  if (!C.zf) goto L_10255db9;
  /* 10255d56 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 10255d5a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255d5d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10255d60 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10255d62 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10255d66 jae 0x10255d8d */
  if (!C.cf) goto L_10255d8d;
  /* 10255d68 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10255d6c jne 0x10255d7c */
  if (!C.zf) goto L_10255d7c;
  /* 10255d6e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10255d73 mov ecx, edi */
  ECX = (EDI);
  /* 10255d75 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10255d77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10255d7a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_10255d7c:;
  /* 10255d7c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10255d81 mov ecx, edi */
  ECX = (EDI);
  /* 10255d83 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10255d85 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 10255d89 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10255d8b jmp 0x10255db6 */
  goto L_10255db6;
L_10255d8d:;
  /* 10255d8d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10255d91 jne 0x10255da3 */
  if (!C.zf) goto L_10255da3;
  /* 10255d93 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10255d96 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10255d9b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10255d9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10255da0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10255da3:;
  /* 10255da3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10255da6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10255dab shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10255dad lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 10255db4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_10255db6:;
  /* 10255db6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_10255db9:;
  /* 10255db9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10255dbc mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 10255dbe mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 10255dc2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 10255dc4 jne 0x10255ec4 */
  if (!C.zf) goto L_10255ec4;
  /* 10255dca mov eax, dword ptr [0x10259024] */
  EAX = (r32((uint32_t)(0x10259024)));
  /* 10255dcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10255dd1 je 0x10255eb6 */
  if (C.zf) goto L_10255eb6;
  /* 10255dd7 mov ecx, dword ptr [0x1025901c] */
  ECX = (r32((uint32_t)(0x1025901c)));
  /* 10255ddd mov edi, dword ptr [0x1025704c] */
  EDI = (r32((uint32_t)(0x1025704c)));
  /* 10255de3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10255de6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10255de9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 10255dee push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10255df3 push ebx */
  push32((uint32_t)(EBX));
  /* 10255df4 push ecx */
  push32((uint32_t)(ECX));
  /* 10255df5 call edi */
  call_ind((uint32_t)(EDI), 0x10255df7u);
  /* 10255df7 mov ecx, dword ptr [0x1025901c] */
  ECX = (r32((uint32_t)(0x1025901c)));
  /* 10255dfd mov eax, dword ptr [0x10259024] */
  EAX = (r32((uint32_t)(0x10259024)));
  /* 10255e02 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10255e07 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10255e09 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10255e0c mov eax, dword ptr [0x10259024] */
  EAX = (r32((uint32_t)(0x10259024)));
  /* 10255e11 mov ecx, dword ptr [0x1025901c] */
  ECX = (r32((uint32_t)(0x1025901c)));
  /* 10255e17 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10255e1a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10255e22 mov eax, dword ptr [0x10259024] */
  EAX = (r32((uint32_t)(0x10259024)));
  /* 10255e27 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10255e2a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 10255e2d mov eax, dword ptr [0x10259024] */
  EAX = (r32((uint32_t)(0x10259024)));
  /* 10255e32 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10255e35 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10255e39 jne 0x10255e44 */
  if (!C.zf) goto L_10255e44;
  /* 10255e3b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10255e3f mov eax, dword ptr [0x10259024] */
  EAX = (r32((uint32_t)(0x10259024)));
L_10255e44:;
  /* 10255e44 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255e48 jne 0x10255eb6 */
  if (!C.zf) goto L_10255eb6;
  /* 10255e4a push ebx */
  push32((uint32_t)(EBX));
  /* 10255e4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10255e4d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10255e50 call edi */
  call_ind((uint32_t)(EDI), 0x10255e52u);
  /* 10255e52 mov eax, dword ptr [0x10259024] */
  EAX = (r32((uint32_t)(0x10259024)));
  /* 10255e57 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 10255e5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10255e5c push dword ptr [0x10259268] */
  push32((uint32_t)(r32((uint32_t)(0x10259268))));
  /* 10255e62 call dword ptr [0x10257048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257048))), 0x10255e68u);
  /* 10255e68 mov eax, dword ptr [0x10259028] */
  EAX = (r32((uint32_t)(0x10259028)));
  /* 10255e6d mov edx, dword ptr [0x1025902c] */
  EDX = (r32((uint32_t)(0x1025902c)));
  /* 10255e73 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10255e76 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10255e79 mov ecx, eax */
  ECX = (EAX);
  /* 10255e7b mov eax, dword ptr [0x10259024] */
  EAX = (r32((uint32_t)(0x10259024)));
  /* 10255e80 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10255e82 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10255e86 push ecx */
  push32((uint32_t)(ECX));
  /* 10255e87 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 10255e8a push ecx */
  push32((uint32_t)(ECX));
  /* 10255e8b push eax */
  push32((uint32_t)(EAX));
  /* 10255e8c call 0x10256920 */
  push32(0x10255e91u); f_10256920();
  /* 10255e91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10255e94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10255e97 dec dword ptr [0x10259028] */
  { uint32_t _r=(r32((uint32_t)(0x10259028)))-1; w32((uint32_t)(0x10259028), (_r)); fl_dec(_r,32); }
  /* 10255e9d cmp eax, dword ptr [0x10259024] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10259024))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255ea3 jbe 0x10255ea8 */
  if ((C.cf||C.zf)) goto L_10255ea8;
  /* 10255ea5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10255ea8:;
  /* 10255ea8 mov ecx, dword ptr [0x1025902c] */
  ECX = (r32((uint32_t)(0x1025902c)));
  /* 10255eae mov dword ptr [0x10259020], ecx */
  w32((uint32_t)(0x10259020), (ECX));
  /* 10255eb4 jmp 0x10255eb9 */
  goto L_10255eb9;
L_10255eb6:;
  /* 10255eb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10255eb9:;
  /* 10255eb9 mov dword ptr [0x10259024], eax */
  w32((uint32_t)(0x10259024), (EAX));
  /* 10255ebe mov dword ptr [0x1025901c], esi */
  w32((uint32_t)(0x1025901c), (ESI));
L_10255ec4:;
  /* 10255ec4 pop edi */
  EDI = (pop32());
  /* 10255ec5 pop esi */
  ESI = (pop32());
  /* 10255ec6 pop ebx */
  EBX = (pop32());
  /* 10255ec7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10255ec8 ret  */
  ESPCHK(0x10255b9eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005ec9 @ 0x10255ec9 (777 bytes, 275 insns) */
void f_10255ec9(void) {
  FTRACE(0x10255ec9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10255ec9 push ebp */
  push32((uint32_t)(EBP));
  /* 10255eca mov ebp, esp */
  EBP = (ESP);
  /* 10255ecc sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10255ecf mov eax, dword ptr [0x10259028] */
  EAX = (r32((uint32_t)(0x10259028)));
  /* 10255ed4 mov edx, dword ptr [0x1025902c] */
  EDX = (r32((uint32_t)(0x1025902c)));
  /* 10255eda push ebx */
  push32((uint32_t)(EBX));
  /* 10255edb push esi */
  push32((uint32_t)(ESI));
  /* 10255edc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10255edf push edi */
  push32((uint32_t)(EDI));
  /* 10255ee0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10255ee3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10255ee6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10255ee9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 10255eec and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10255eef mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10255ef2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10255ef5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10255ef6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255ef9 jge 0x10255f09 */
  if ((C.sf==C.of)) goto L_10255f09;
  /* 10255efb or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 10255efe shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10255f00 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10255f04 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10255f07 jmp 0x10255f19 */
  goto L_10255f19;
L_10255f09:;
  /* 10255f09 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10255f0c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10255f0f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10255f11 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10255f13 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10255f16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10255f19:;
  /* 10255f19 mov eax, dword ptr [0x10259020] */
  EAX = (r32((uint32_t)(0x10259020)));
  /* 10255f1e mov ebx, eax */
  EBX = (EAX);
  /* 10255f20 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255f22 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10255f25 jae 0x10255f40 */
  if (!C.cf) goto L_10255f40;
L_10255f27:;
  /* 10255f27 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10255f2a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10255f2c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10255f2f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10255f31 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10255f33 jne 0x10255f40 */
  if (!C.zf) goto L_10255f40;
  /* 10255f35 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10255f38 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255f3b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10255f3e jb 0x10255f27 */
  if (C.cf) goto L_10255f27;
L_10255f40:;
  /* 10255f40 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255f43 jne 0x10255fbe */
  if (!C.zf) goto L_10255fbe;
  /* 10255f45 mov ebx, edx */
  EBX = (EDX);
L_10255f47:;
  /* 10255f47 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255f49 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10255f4c jae 0x10255f63 */
  if (!C.cf) goto L_10255f63;
  /* 10255f4e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10255f51 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10255f53 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10255f56 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10255f58 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10255f5a jne 0x10255f61 */
  if (!C.zf) goto L_10255f61;
  /* 10255f5c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10255f5f jmp 0x10255f47 */
  goto L_10255f47;
L_10255f61:;
  /* 10255f61 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10255f63:;
  /* 10255f63 jne 0x10255fbe */
  if (!C.zf) goto L_10255fbe;
L_10255f65:;
  /* 10255f65 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255f68 jae 0x10255f7b */
  if (!C.cf) goto L_10255f7b;
  /* 10255f6a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255f6e jne 0x10255f78 */
  if (!C.zf) goto L_10255f78;
  /* 10255f70 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10255f73 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10255f76 jmp 0x10255f65 */
  goto L_10255f65;
L_10255f78:;
  /* 10255f78 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10255f7b:;
  /* 10255f7b jne 0x10255fa3 */
  if (!C.zf) goto L_10255fa3;
  /* 10255f7d mov ebx, edx */
  EBX = (EDX);
L_10255f7f:;
  /* 10255f7f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255f81 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10255f84 jae 0x10255f93 */
  if (!C.cf) goto L_10255f93;
  /* 10255f86 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255f8a jne 0x10255f91 */
  if (!C.zf) goto L_10255f91;
  /* 10255f8c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10255f8f jmp 0x10255f7f */
  goto L_10255f7f;
L_10255f91:;
  /* 10255f91 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10255f93:;
  /* 10255f93 jne 0x10255fa3 */
  if (!C.zf) goto L_10255fa3;
  /* 10255f95 call 0x102561d2 */
  push32(0x10255f9au); f_102561d2();
  /* 10255f9a mov ebx, eax */
  EBX = (EAX);
  /* 10255f9c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10255f9e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10255fa1 je 0x10255fb7 */
  if (C.zf) goto L_10255fb7;
L_10255fa3:;
  /* 10255fa3 push ebx */
  push32((uint32_t)(EBX));
  /* 10255fa4 call 0x10256283 */
  push32(0x10255fa9u); f_10256283();
  /* 10255fa9 pop ecx */
  ECX = (pop32());
  /* 10255faa mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 10255fad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10255faf mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10255fb2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255fb5 jne 0x10255fbe */
  if (!C.zf) goto L_10255fbe;
L_10255fb7:;
  /* 10255fb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10255fb9 jmp 0x102561cd */
  goto L_102561cd;
L_10255fbe:;
  /* 10255fbe mov dword ptr [0x10259020], ebx */
  w32((uint32_t)(0x10259020), (EBX));
  /* 10255fc4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10255fc7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10255fc9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10255fcc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10255fcf je 0x10255fe5 */
  if (C.zf) goto L_10255fe5;
  /* 10255fd1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10255fd8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10255fdc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10255fdf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10255fe1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10255fe3 jne 0x1025601c */
  if (!C.zf) goto L_1025601c;
L_10255fe5:;
  /* 10255fe5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 10255feb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 10255fee and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10255ff1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10255ff4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10255ff8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 10255ffb or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10255ffd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10256000 jne 0x10256019 */
  if (!C.zf) goto L_10256019;
L_10256002:;
  /* 10256002 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 10256008 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1025600b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1025600e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10256011 mov edi, esi */
  EDI = (ESI);
  /* 10256013 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 10256015 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 10256017 je 0x10256002 */
  if (C.zf) goto L_10256002;
L_10256019:;
  /* 10256019 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1025601c:;
  /* 1025601c mov ecx, edx */
  ECX = (EDX);
  /* 1025601e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10256020 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10256026 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1025602d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10256030 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10256034 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10256036 jne 0x10256045 */
  if (!C.zf) goto L_10256045;
  /* 10256038 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1025603f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10256041 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10256044 pop edi */
  EDI = (pop32());
L_10256045:;
  /* 10256045 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10256047 jl 0x1025604e */
  if ((C.sf!=C.of)) goto L_1025604e;
  /* 10256049 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1025604b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1025604c jmp 0x10256045 */
  goto L_10256045;
L_1025604e:;
  /* 1025604e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10256051 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 10256055 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10256057 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1025605a mov esi, ecx */
  ESI = (ECX);
  /* 1025605c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1025605f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10256062 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10256063 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256066 jle 0x1025606b */
  if ((C.zf||C.sf!=C.of)) goto L_1025606b;
  /* 10256068 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1025606a pop esi */
  ESI = (pop32());
L_1025606b:;
  /* 1025606b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025606d je 0x10256180 */
  if (C.zf) goto L_10256180;
  /* 10256073 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10256076 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256079 jne 0x102560dc */
  if (!C.zf) goto L_102560dc;
  /* 1025607b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025607e jge 0x102560ab */
  if ((C.sf==C.of)) goto L_102560ab;
  /* 10256080 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10256085 mov ecx, edi */
  ECX = (EDI);
  /* 10256087 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10256089 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1025608c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10256090 not ebx */
  EBX = (~(EBX));
  /* 10256092 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10256095 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 10256099 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1025609d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1025609f jne 0x102560d9 */
  if (!C.zf) goto L_102560d9;
  /* 102560a1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102560a4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 102560a7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 102560a9 jmp 0x102560dc */
  goto L_102560dc;
L_102560ab:;
  /* 102560ab lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 102560ae mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102560b3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102560b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102560b8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 102560bc lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 102560c3 not ebx */
  EBX = (~(EBX));
  /* 102560c5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102560c7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 102560c9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 102560cc jne 0x102560d9 */
  if (!C.zf) goto L_102560d9;
  /* 102560ce mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102560d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 102560d4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 102560d7 jmp 0x102560dc */
  goto L_102560dc;
L_102560d9:;
  /* 102560d9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_102560dc:;
  /* 102560dc mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 102560df mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 102560e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102560e6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 102560e9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102560ec mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 102560ef mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 102560f2 je 0x1025618c */
  if (C.zf) goto L_1025618c;
  /* 102560f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102560fb mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 102560ff lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 10256102 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 10256105 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10256108 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1025610b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1025610e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10256111 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10256114 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256117 jne 0x1025617d */
  if (!C.zf) goto L_1025617d;
  /* 10256119 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1025611d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256120 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10256123 jge 0x1025614e */
  if ((C.sf==C.of)) goto L_1025614e;
  /* 10256125 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10256127 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1025612b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1025612f jne 0x1025613c */
  if (!C.zf) goto L_1025613c;
  /* 10256131 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10256136 mov ecx, esi */
  ECX = (ESI);
  /* 10256138 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1025613a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1025613c:;
  /* 1025613c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10256141 mov ecx, esi */
  ECX = (ESI);
  /* 10256143 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10256145 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10256148 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1025614c jmp 0x1025617d */
  goto L_1025617d;
L_1025614e:;
  /* 1025614e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10256150 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10256154 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10256158 jne 0x10256167 */
  if (!C.zf) goto L_10256167;
  /* 1025615a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1025615d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10256162 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10256164 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10256167:;
  /* 10256167 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1025616a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10256171 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10256174 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10256179 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1025617b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1025617d:;
  /* 1025617d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10256180:;
  /* 10256180 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10256182 je 0x1025618f */
  if (C.zf) goto L_1025618f;
  /* 10256184 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10256186 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1025618a jmp 0x1025618f */
  goto L_1025618f;
L_1025618c:;
  /* 1025618c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1025618f:;
  /* 1025618f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10256192 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10256194 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10256197 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10256199 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1025619d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 102561a0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 102561a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102561a4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 102561a7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102561a9 jne 0x102561c5 */
  if (!C.zf) goto L_102561c5;
  /* 102561ab cmp ebx, dword ptr [0x10259024] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10259024))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102561b1 jne 0x102561c5 */
  if (!C.zf) goto L_102561c5;
  /* 102561b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102561b6 cmp ecx, dword ptr [0x1025901c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1025901c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102561bc jne 0x102561c5 */
  if (!C.zf) goto L_102561c5;
  /* 102561be and dword ptr [0x10259024], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10259024)))&(0x0u); w32((uint32_t)(0x10259024), (_r)); fl_logic(_r,32); }
L_102561c5:;
  /* 102561c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102561c8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102561ca lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_102561cd:;
  /* 102561cd pop edi */
  EDI = (pop32());
  /* 102561ce pop esi */
  ESI = (pop32());
  /* 102561cf pop ebx */
  EBX = (pop32());
  /* 102561d0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102561d1 ret  */
  ESPCHK(0x10255ec9u, _esp0);
  ESP += 4; return;
}

/* FUN_100061d2 @ 0x102561d2 (177 bytes, 53 insns) */
void f_102561d2(void) {
  FTRACE(0x102561d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102561d2 mov eax, dword ptr [0x10259028] */
  EAX = (r32((uint32_t)(0x10259028)));
  /* 102561d7 mov ecx, dword ptr [0x10259018] */
  ECX = (r32((uint32_t)(0x10259018)));
  /* 102561dd push esi */
  push32((uint32_t)(ESI));
  /* 102561de push edi */
  push32((uint32_t)(EDI));
  /* 102561df xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102561e1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102561e3 jne 0x10256215 */
  if (!C.zf) goto L_10256215;
  /* 102561e5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 102561e9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102561ec push eax */
  push32((uint32_t)(EAX));
  /* 102561ed push dword ptr [0x1025902c] */
  push32((uint32_t)(r32((uint32_t)(0x1025902c))));
  /* 102561f3 push edi */
  push32((uint32_t)(EDI));
  /* 102561f4 push dword ptr [0x10259268] */
  push32((uint32_t)(r32((uint32_t)(0x10259268))));
  /* 102561fa call dword ptr [0x10257020] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257020))), 0x10256200u);
  /* 10256200 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256202 je 0x10256265 */
  if (C.zf) goto L_10256265;
  /* 10256204 add dword ptr [0x10259018], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x10259018))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x10259018), (_r)); fl_add(_a,_b,_r,32); }
  /* 1025620b mov dword ptr [0x1025902c], eax */
  w32((uint32_t)(0x1025902c), (EAX));
  /* 10256210 mov eax, dword ptr [0x10259028] */
  EAX = (r32((uint32_t)(0x10259028)));
L_10256215:;
  /* 10256215 mov ecx, dword ptr [0x1025902c] */
  ECX = (r32((uint32_t)(0x1025902c)));
  /* 1025621b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10256220 push 8 */
  push32((uint32_t)(0x8u));
  /* 10256222 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10256225 push dword ptr [0x10259268] */
  push32((uint32_t)(r32((uint32_t)(0x10259268))));
  /* 1025622b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1025622e call dword ptr [0x10257034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257034))), 0x10256234u);
  /* 10256234 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256236 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10256239 je 0x10256265 */
  if (C.zf) goto L_10256265;
  /* 1025623b push 4 */
  push32((uint32_t)(0x4u));
  /* 1025623d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10256242 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10256247 push edi */
  push32((uint32_t)(EDI));
  /* 10256248 call dword ptr [0x10257024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257024))), 0x1025624eu);
  /* 1025624e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256250 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10256253 jne 0x10256269 */
  if (!C.zf) goto L_10256269;
  /* 10256255 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10256258 push edi */
  push32((uint32_t)(EDI));
  /* 10256259 push dword ptr [0x10259268] */
  push32((uint32_t)(r32((uint32_t)(0x10259268))));
  /* 1025625f call dword ptr [0x10257048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257048))), 0x10256265u);
L_10256265:;
  /* 10256265 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10256267 jmp 0x10256280 */
  goto L_10256280;
L_10256269:;
  /* 10256269 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1025626d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1025626f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10256272 inc dword ptr [0x10259028] */
  { uint32_t _r=(r32((uint32_t)(0x10259028)))+1; w32((uint32_t)(0x10259028), (_r)); fl_inc(_r,32); }
  /* 10256278 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1025627b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1025627e mov eax, esi */
  EAX = (ESI);
L_10256280:;
  /* 10256280 pop edi */
  EDI = (pop32());
  /* 10256281 pop esi */
  ESI = (pop32());
  /* 10256282 ret  */
  ESPCHK(0x102561d2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006283 @ 0x10256283 (251 bytes, 85 insns) */
void f_10256283(void) {
  FTRACE(0x10256283u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10256283 push ebp */
  push32((uint32_t)(EBP));
  /* 10256284 mov ebp, esp */
  EBP = (ESP);
  /* 10256286 push ecx */
  push32((uint32_t)(ECX));
  /* 10256287 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1025628a push ebx */
  push32((uint32_t)(EBX));
  /* 1025628b push esi */
  push32((uint32_t)(ESI));
  /* 1025628c push edi */
  push32((uint32_t)(EDI));
  /* 1025628d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 10256290 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10256293 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10256295:;
  /* 10256295 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10256297 jl 0x1025629e */
  if ((C.sf!=C.of)) goto L_1025629e;
  /* 10256299 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1025629b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1025629c jmp 0x10256295 */
  goto L_10256295;
L_1025629e:;
  /* 1025629e mov eax, ebx */
  EAX = (EBX);
  /* 102562a0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102562a2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102562a8 pop edx */
  EDX = (pop32());
  /* 102562a9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 102562b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_102562b3:;
  /* 102562b3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 102562b6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 102562b9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102562bc dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 102562bd jne 0x102562b3 */
  if (!C.zf) goto L_102562b3;
  /* 102562bf mov edi, ebx */
  EDI = (EBX);
  /* 102562c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 102562c3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 102562c6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102562c9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 102562ce push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 102562d3 push edi */
  push32((uint32_t)(EDI));
  /* 102562d4 call dword ptr [0x10257024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257024))), 0x102562dau);
  /* 102562da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102562dc jne 0x102562e6 */
  if (!C.zf) goto L_102562e6;
  /* 102562de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102562e1 jmp 0x10256379 */
  goto L_10256379;
L_102562e6:;
  /* 102562e6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 102562ec cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102562ee ja 0x1025632c */
  if ((!C.cf&&!C.zf)) goto L_1025632c;
  /* 102562f0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_102562f3:;
  /* 102562f3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 102562f7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 102562fe lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 10256304 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1025630b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1025630d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10256313 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10256316 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 10256320 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10256325 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 10256328 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025632a jbe 0x102562f3 */
  if ((C.cf||C.zf)) goto L_102562f3;
L_1025632c:;
  /* 1025632c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1025632f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 10256332 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10256337 push 1 */
  push32((uint32_t)(0x1u));
  /* 10256339 pop edi */
  EDI = (pop32());
  /* 1025633a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1025633d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10256340 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 10256343 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10256346 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10256349 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1025634e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 10256355 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 10256358 mov cl, al */
  CL = (AL);
  /* 1025635a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1025635c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025635e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10256361 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 10256364 jne 0x10256369 */
  if (!C.zf) goto L_10256369;
  /* 10256366 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_10256369:;
  /* 10256369 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1025636e mov ecx, ebx */
  ECX = (EBX);
  /* 10256370 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10256372 not edx */
  EDX = (~(EDX));
  /* 10256374 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10256377 mov eax, ebx */
  EAX = (EBX);
L_10256379:;
  /* 10256379 pop edi */
  EDI = (pop32());
  /* 1025637a pop esi */
  ESI = (pop32());
  /* 1025637b pop ebx */
  EBX = (pop32());
  /* 1025637c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1025637d ret  */
  ESPCHK(0x10256283u, _esp0);
  ESP += 4; return;
}

/* FUN_1000637e @ 0x1025637e (137 bytes, 50 insns) */
void f_1025637e(void) {
  FTRACE(0x1025637eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1025637e push ebx */
  push32((uint32_t)(EBX));
  /* 1025637f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10256381 cmp dword ptr [0x10258fdc], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10258fdc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256387 push esi */
  push32((uint32_t)(ESI));
  /* 10256388 push edi */
  push32((uint32_t)(EDI));
  /* 10256389 jne 0x102563cd */
  if (!C.zf) goto L_102563cd;
  /* 1025638b push 0x102574c8 */
  push32((uint32_t)(0x102574c8u));
  /* 10256390 call dword ptr [0x10257018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257018))), 0x10256396u);
  /* 10256396 mov edi, eax */
  EDI = (EAX);
  /* 10256398 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025639a je 0x10256403 */
  if (C.zf) goto L_10256403;
  /* 1025639c mov esi, dword ptr [0x1025701c] */
  ESI = (r32((uint32_t)(0x1025701c)));
  /* 102563a2 push 0x102574bc */
  push32((uint32_t)(0x102574bcu));
  /* 102563a7 push edi */
  push32((uint32_t)(EDI));
  /* 102563a8 call esi */
  call_ind((uint32_t)(ESI), 0x102563aau);
  /* 102563aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102563ac mov dword ptr [0x10258fdc], eax */
  w32((uint32_t)(0x10258fdc), (EAX));
  /* 102563b1 je 0x10256403 */
  if (C.zf) goto L_10256403;
  /* 102563b3 push 0x102574ac */
  push32((uint32_t)(0x102574acu));
  /* 102563b8 push edi */
  push32((uint32_t)(EDI));
  /* 102563b9 call esi */
  call_ind((uint32_t)(ESI), 0x102563bbu);
  /* 102563bb push 0x10257498 */
  push32((uint32_t)(0x10257498u));
  /* 102563c0 push edi */
  push32((uint32_t)(EDI));
  /* 102563c1 mov dword ptr [0x10258fe0], eax */
  w32((uint32_t)(0x10258fe0), (EAX));
  /* 102563c6 call esi */
  call_ind((uint32_t)(ESI), 0x102563c8u);
  /* 102563c8 mov dword ptr [0x10258fe4], eax */
  w32((uint32_t)(0x10258fe4), (EAX));
L_102563cd:;
  /* 102563cd mov eax, dword ptr [0x10258fe0] */
  EAX = (r32((uint32_t)(0x10258fe0)));
  /* 102563d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102563d4 je 0x102563ec */
  if (C.zf) goto L_102563ec;
  /* 102563d6 call eax */
  call_ind((uint32_t)(EAX), 0x102563d8u);
  /* 102563d8 mov ebx, eax */
  EBX = (EAX);
  /* 102563da test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102563dc je 0x102563ec */
  if (C.zf) goto L_102563ec;
  /* 102563de mov eax, dword ptr [0x10258fe4] */
  EAX = (r32((uint32_t)(0x10258fe4)));
  /* 102563e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102563e5 je 0x102563ec */
  if (C.zf) goto L_102563ec;
  /* 102563e7 push ebx */
  push32((uint32_t)(EBX));
  /* 102563e8 call eax */
  call_ind((uint32_t)(EAX), 0x102563eau);
  /* 102563ea mov ebx, eax */
  EBX = (EAX);
L_102563ec:;
  /* 102563ec push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102563f0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102563f4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102563f8 push ebx */
  push32((uint32_t)(EBX));
  /* 102563f9 call dword ptr [0x10258fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10258fdc))), 0x102563ffu);
L_102563ff:;
  /* 102563ff pop edi */
  EDI = (pop32());
  /* 10256400 pop esi */
  ESI = (pop32());
  /* 10256401 pop ebx */
  EBX = (pop32());
  /* 10256402 ret  */
  ESPCHK(0x1025637eu, _esp0);
  ESP += 4; return;
L_10256403:;
  /* 10256403 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10256405 jmp 0x102563ff */
  goto L_102563ff;
}

/* _strncpy @ 0x10256410 (254 bytes, 109 insns) */
void f_10256410(void) {
  FTRACE(0x10256410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10256410 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10256414 push edi */
  push32((uint32_t)(EDI));
  /* 10256415 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10256417 je 0x10256493 */
  if (C.zf) goto L_10256493;
  /* 10256419 push esi */
  push32((uint32_t)(ESI));
  /* 1025641a push ebx */
  push32((uint32_t)(EBX));
  /* 1025641b mov ebx, ecx */
  EBX = (ECX);
  /* 1025641d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10256421 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10256427 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1025642b jne 0x10256434 */
  if (!C.zf) goto L_10256434;
  /* 1025642d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10256430 jne 0x102564a1 */
  if (!C.zf) goto L_102564a1;
  /* 10256432 jmp 0x10256455 */
  goto L_10256455;
L_10256434:;
  /* 10256434 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10256436 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10256437 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10256439 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1025643a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1025643b je 0x10256462 */
  if (C.zf) goto L_10256462;
  /* 1025643d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025643f je 0x1025646a */
  if (C.zf) goto L_1025646a;
  /* 10256441 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10256447 jne 0x10256434 */
  if (!C.zf) goto L_10256434;
  /* 10256449 mov ebx, ecx */
  EBX = (ECX);
  /* 1025644b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1025644e jne 0x102564a1 */
  if (!C.zf) goto L_102564a1;
L_10256450:;
  /* 10256450 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10256453 je 0x10256462 */
  if (C.zf) goto L_10256462;
L_10256455:;
  /* 10256455 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10256457 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10256458 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1025645a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1025645b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1025645d je 0x1025648e */
  if (C.zf) goto L_1025648e;
  /* 1025645f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10256460 jne 0x10256455 */
  if (!C.zf) goto L_10256455;
L_10256462:;
  /* 10256462 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10256466 pop ebx */
  EBX = (pop32());
  /* 10256467 pop esi */
  ESI = (pop32());
  /* 10256468 pop edi */
  EDI = (pop32());
  /* 10256469 ret  */
  ESPCHK(0x10256410u, _esp0);
  ESP += 4; return;
L_1025646a:;
  /* 1025646a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10256470 je 0x10256484 */
  if (C.zf) goto L_10256484;
L_10256472:;
  /* 10256472 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10256474 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10256475 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10256476 je 0x10256506 */
  if (C.zf) goto L_10256506;
  /* 1025647c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10256482 jne 0x10256472 */
  if (!C.zf) goto L_10256472;
L_10256484:;
  /* 10256484 mov ebx, ecx */
  EBX = (ECX);
  /* 10256486 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10256489 jne 0x102564f7 */
  if (!C.zf) goto L_102564f7;
L_1025648b:;
  /* 1025648b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1025648d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1025648e:;
  /* 1025648e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1025648f jne 0x1025648b */
  if (!C.zf) goto L_1025648b;
  /* 10256491 pop ebx */
  EBX = (pop32());
  /* 10256492 pop esi */
  ESI = (pop32());
L_10256493:;
  /* 10256493 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10256497 pop edi */
  EDI = (pop32());
  /* 10256498 ret  */
  ESPCHK(0x10256410u, _esp0);
  ESP += 4; return;
L_10256499:;
  /* 10256499 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1025649b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1025649e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1025649f je 0x10256450 */
  if (C.zf) goto L_10256450;
L_102564a1:;
  /* 102564a1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102564a6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102564a8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102564aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102564ad xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102564af mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 102564b1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102564b4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102564b9 je 0x10256499 */
  if (C.zf) goto L_10256499;
  /* 102564bb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102564bd je 0x102564eb */
  if (C.zf) goto L_102564eb;
  /* 102564bf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 102564c1 je 0x102564e1 */
  if (C.zf) goto L_102564e1;
  /* 102564c3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 102564c9 je 0x102564d7 */
  if (C.zf) goto L_102564d7;
  /* 102564cb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 102564d1 jne 0x10256499 */
  if (!C.zf) goto L_10256499;
  /* 102564d3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102564d5 jmp 0x102564ef */
  goto L_102564ef;
L_102564d7:;
  /* 102564d7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 102564dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102564df jmp 0x102564ef */
  goto L_102564ef;
L_102564e1:;
  /* 102564e1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 102564e7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102564e9 jmp 0x102564ef */
  goto L_102564ef;
L_102564eb:;
  /* 102564eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102564ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_102564ef:;
  /* 102564ef add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102564f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102564f4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102564f5 je 0x10256501 */
  if (C.zf) goto L_10256501;
L_102564f7:;
  /* 102564f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102564f9:;
  /* 102564f9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 102564fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102564fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102564ff jne 0x102564f9 */
  if (!C.zf) goto L_102564f9;
L_10256501:;
  /* 10256501 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10256504 jne 0x1025648b */
  if (!C.zf) goto L_1025648b;
L_10256506:;
  /* 10256506 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1025650a pop ebx */
  EBX = (pop32());
  /* 1025650b pop esi */
  ESI = (pop32());
  /* 1025650c pop edi */
  EDI = (pop32());
  /* 1025650d ret  */
  ESPCHK(0x10256410u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10256510 (88 bytes, 40 insns) */
void f_10256510(void) {
  FTRACE(0x10256510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10256510 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10256514 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10256518 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1025651a je 0x10256563 */
  if (C.zf) goto L_10256563;
  /* 1025651c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1025651e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10256522 push edi */
  push32((uint32_t)(EDI));
  /* 10256523 mov edi, ecx */
  EDI = (ECX);
  /* 10256525 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256528 jb 0x10256557 */
  if (C.cf) goto L_10256557;
  /* 1025652a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1025652c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1025652f je 0x10256539 */
  if (C.zf) goto L_10256539;
  /* 10256531 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10256533:;
  /* 10256533 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10256535 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10256536 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10256537 jne 0x10256533 */
  if (!C.zf) goto L_10256533;
L_10256539:;
  /* 10256539 mov ecx, eax */
  ECX = (EAX);
  /* 1025653b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1025653e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10256540 mov ecx, eax */
  ECX = (EAX);
  /* 10256542 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10256545 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10256547 mov ecx, edx */
  ECX = (EDX);
  /* 10256549 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1025654c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1025654f je 0x10256557 */
  if (C.zf) goto L_10256557;
  /* 10256551 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10256553 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10256555 je 0x1025655d */
  if (C.zf) goto L_1025655d;
L_10256557:;
  /* 10256557 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10256559 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1025655a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1025655b jne 0x10256557 */
  if (!C.zf) goto L_10256557;
L_1025655d:;
  /* 1025655d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10256561 pop edi */
  EDI = (pop32());
  /* 10256562 ret  */
  ESPCHK(0x10256510u, _esp0);
  ESP += 4; return;
L_10256563:;
  /* 10256563 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10256567 ret  */
  ESPCHK(0x10256510u, _esp0);
  ESP += 4; return;
}

/* FUN_10006568 @ 0x10256568 (27 bytes, 13 insns) */
void f_10256568(void) {
  FTRACE(0x10256568u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10256568 mov eax, dword ptr [0x10258fe8] */
  EAX = (r32((uint32_t)(0x10258fe8)));
  /* 1025656d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025656f je 0x10256580 */
  if (C.zf) goto L_10256580;
  /* 10256571 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10256575 call eax */
  call_ind((uint32_t)(EAX), 0x10256577u);
  /* 10256577 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10256579 pop ecx */
  ECX = (pop32());
  /* 1025657a je 0x10256580 */
  if (C.zf) goto L_10256580;
  /* 1025657c push 1 */
  push32((uint32_t)(0x1u));
  /* 1025657e pop eax */
  EAX = (pop32());
  /* 1025657f ret  */
  ESPCHK(0x10256568u, _esp0);
  ESP += 4; return;
L_10256580:;
  /* 10256580 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10256582 ret  */
  ESPCHK(0x10256568u, _esp0);
  ESP += 4; return;
}

/* FUN_10006583 @ 0x10256583 (511 bytes, 193 insns) */
void f_10256583(void) {
  FTRACE(0x10256583u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10256583 push ebp */
  push32((uint32_t)(EBP));
  /* 10256584 mov ebp, esp */
  EBP = (ESP);
  /* 10256586 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10256588 push 0x102574e0 */
  push32((uint32_t)(0x102574e0u));
  /* 1025658d push 0x10256d50 */
  push32((uint32_t)(0x10256d50u));
  /* 10256592 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10256598 push eax */
  push32((uint32_t)(EAX));
  /* 10256599 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 102565a0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102565a3 push ebx */
  push32((uint32_t)(EBX));
  /* 102565a4 push esi */
  push32((uint32_t)(ESI));
  /* 102565a5 push edi */
  push32((uint32_t)(EDI));
  /* 102565a6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102565a9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102565ab cmp dword ptr [0x10259010], edi */
  { uint32_t _a=(r32((uint32_t)(0x10259010))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102565b1 jne 0x102565f9 */
  if (!C.zf) goto L_102565f9;
  /* 102565b3 push edi */
  push32((uint32_t)(EDI));
  /* 102565b4 push edi */
  push32((uint32_t)(EDI));
  /* 102565b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102565b7 pop ebx */
  EBX = (pop32());
  /* 102565b8 push ebx */
  push32((uint32_t)(EBX));
  /* 102565b9 push 0x102574d8 */
  push32((uint32_t)(0x102574d8u));
  /* 102565be mov esi, 0x100 */
  ESI = (0x100u);
  /* 102565c3 push esi */
  push32((uint32_t)(ESI));
  /* 102565c4 push edi */
  push32((uint32_t)(EDI));
  /* 102565c5 call dword ptr [0x1025700c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025700c))), 0x102565cbu);
  /* 102565cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102565cd je 0x102565d7 */
  if (C.zf) goto L_102565d7;
  /* 102565cf mov dword ptr [0x10259010], ebx */
  w32((uint32_t)(0x10259010), (EBX));
  /* 102565d5 jmp 0x102565f9 */
  goto L_102565f9;
L_102565d7:;
  /* 102565d7 push edi */
  push32((uint32_t)(EDI));
  /* 102565d8 push edi */
  push32((uint32_t)(EDI));
  /* 102565d9 push ebx */
  push32((uint32_t)(EBX));
  /* 102565da push 0x102574d4 */
  push32((uint32_t)(0x102574d4u));
  /* 102565df push esi */
  push32((uint32_t)(ESI));
  /* 102565e0 push edi */
  push32((uint32_t)(EDI));
  /* 102565e1 call dword ptr [0x10257010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257010))), 0x102565e7u);
  /* 102565e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102565e9 je 0x10256711 */
  if (C.zf) goto L_10256711;
  /* 102565ef mov dword ptr [0x10259010], 2 */
  w32((uint32_t)(0x10259010), (0x2u));
L_102565f9:;
  /* 102565f9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102565fc jle 0x1025660e */
  if ((C.zf||C.sf!=C.of)) goto L_1025660e;
  /* 102565fe push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10256601 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10256604 call 0x102567a7 */
  push32(0x10256609u); f_102567a7();
  /* 10256609 pop ecx */
  ECX = (pop32());
  /* 1025660a pop ecx */
  ECX = (pop32());
  /* 1025660b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1025660e:;
  /* 1025660e mov eax, dword ptr [0x10259010] */
  EAX = (r32((uint32_t)(0x10259010)));
  /* 10256613 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256616 jne 0x10256635 */
  if (!C.zf) goto L_10256635;
  /* 10256618 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1025661b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1025661e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10256621 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10256624 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10256627 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1025662a call dword ptr [0x10257010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257010))), 0x10256630u);
  /* 10256630 jmp 0x10256713 */
  goto L_10256713;
L_10256635:;
  /* 10256635 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256638 jne 0x10256711 */
  if (!C.zf) goto L_10256711;
  /* 1025663e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256641 jne 0x1025664b */
  if (!C.zf) goto L_1025664b;
  /* 10256643 mov eax, dword ptr [0x10259008] */
  EAX = (r32((uint32_t)(0x10259008)));
  /* 10256648 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1025664b:;
  /* 1025664b push edi */
  push32((uint32_t)(EDI));
  /* 1025664c push edi */
  push32((uint32_t)(EDI));
  /* 1025664d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10256650 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10256653 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10256656 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10256658 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1025665a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1025665d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1025665e push eax */
  push32((uint32_t)(EAX));
  /* 1025665f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10256662 call dword ptr [0x10257014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257014))), 0x10256668u);
  /* 10256668 mov ebx, eax */
  EBX = (EAX);
  /* 1025666a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1025666d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025666f je 0x10256711 */
  if (C.zf) goto L_10256711;
  /* 10256675 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10256678 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1025667b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1025667e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10256680 call 0x10256e30 */
  push32(0x10256685u); f_10256e30();
  /* 10256685 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10256688 mov eax, esp */
  EAX = (ESP);
  /* 1025668a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1025668d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10256691 jmp 0x102566a6 */
  goto L_102566a6;
  /* 10256693 push 1 */
  push32((uint32_t)(0x1u));
  /* 10256695 pop eax */
  EAX = (pop32());
  /* 10256696 ret  */
  ESPCHK(0x10256583u, _esp0);
  ESP += 4; return;
  /* 10256697 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1025669a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1025669c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1025669f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102566a3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_102566a6:;
  /* 102566a6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102566a9 je 0x10256711 */
  if (C.zf) goto L_10256711;
  /* 102566ab push ebx */
  push32((uint32_t)(EBX));
  /* 102566ac push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102566af push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102566b2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102566b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102566b7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 102566ba call dword ptr [0x10257014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257014))), 0x102566c0u);
  /* 102566c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102566c2 je 0x10256711 */
  if (C.zf) goto L_10256711;
  /* 102566c4 push edi */
  push32((uint32_t)(EDI));
  /* 102566c5 push edi */
  push32((uint32_t)(EDI));
  /* 102566c6 push ebx */
  push32((uint32_t)(EBX));
  /* 102566c7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102566ca push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102566cd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102566d0 call dword ptr [0x1025700c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025700c))), 0x102566d6u);
  /* 102566d6 mov esi, eax */
  ESI = (EAX);
  /* 102566d8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 102566db cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102566dd je 0x10256711 */
  if (C.zf) goto L_10256711;
  /* 102566df test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 102566e3 je 0x10256725 */
  if (C.zf) goto L_10256725;
  /* 102566e5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102566e8 je 0x102567a0 */
  if (C.zf) goto L_102567a0;
  /* 102566ee cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102566f1 jg 0x10256711 */
  if ((!C.zf&&C.sf==C.of)) goto L_10256711;
  /* 102566f3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 102566f6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102566f9 push ebx */
  push32((uint32_t)(EBX));
  /* 102566fa push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102566fd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10256700 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10256703 call dword ptr [0x1025700c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025700c))), 0x10256709u);
  /* 10256709 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1025670b jne 0x102567a0 */
  if (!C.zf) goto L_102567a0;
L_10256711:;
  /* 10256711 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10256713:;
  /* 10256713 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10256716 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10256719 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10256720 pop edi */
  EDI = (pop32());
  /* 10256721 pop esi */
  ESI = (pop32());
  /* 10256722 pop ebx */
  EBX = (pop32());
  /* 10256723 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10256724 ret  */
  ESPCHK(0x10256583u, _esp0);
  ESP += 4; return;
L_10256725:;
  /* 10256725 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1025672c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1025672f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10256732 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10256734 call 0x10256e30 */
  push32(0x10256739u); f_10256e30();
  /* 10256739 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1025673c mov ebx, esp */
  EBX = (ESP);
  /* 1025673e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 10256741 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10256745 jmp 0x10256759 */
  goto L_10256759;
  /* 10256747 push 1 */
  push32((uint32_t)(0x1u));
  /* 10256749 pop eax */
  EAX = (pop32());
  /* 1025674a ret  */
  ESPCHK(0x10256583u, _esp0);
  ESP += 4; return;
  /* 1025674b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1025674e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10256750 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10256752 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10256756 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_10256759:;
  /* 10256759 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025675b je 0x10256711 */
  if (C.zf) goto L_10256711;
  /* 1025675d push esi */
  push32((uint32_t)(ESI));
  /* 1025675e push ebx */
  push32((uint32_t)(EBX));
  /* 1025675f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10256762 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10256765 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10256768 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1025676b call dword ptr [0x1025700c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1025700c))), 0x10256771u);
  /* 10256771 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10256773 je 0x10256711 */
  if (C.zf) goto L_10256711;
  /* 10256775 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256778 push edi */
  push32((uint32_t)(EDI));
  /* 10256779 push edi */
  push32((uint32_t)(EDI));
  /* 1025677a jne 0x10256780 */
  if (!C.zf) goto L_10256780;
  /* 1025677c push edi */
  push32((uint32_t)(EDI));
  /* 1025677d push edi */
  push32((uint32_t)(EDI));
  /* 1025677e jmp 0x10256786 */
  goto L_10256786;
L_10256780:;
  /* 10256780 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10256783 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_10256786:;
  /* 10256786 push esi */
  push32((uint32_t)(ESI));
  /* 10256787 push ebx */
  push32((uint32_t)(EBX));
  /* 10256788 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1025678d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10256790 call dword ptr [0x10257060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257060))), 0x10256796u);
  /* 10256796 mov esi, eax */
  ESI = (EAX);
  /* 10256798 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025679a je 0x10256711 */
  if (C.zf) goto L_10256711;
L_102567a0:;
  /* 102567a0 mov eax, esi */
  EAX = (ESI);
  /* 102567a2 jmp 0x10256713 */
  goto L_10256713;
}

/* FUN_100067a7 @ 0x102567a7 (43 bytes, 20 insns) */
void f_102567a7(void) {
  FTRACE(0x102567a7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102567a7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 102567ab mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102567af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102567b1 push esi */
  push32((uint32_t)(ESI));
  /* 102567b2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 102567b5 je 0x102567c4 */
  if (C.zf) goto L_102567c4;
L_102567b7:;
  /* 102567b7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102567ba je 0x102567c4 */
  if (C.zf) goto L_102567c4;
  /* 102567bc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102567bd mov esi, ecx */
  ESI = (ECX);
  /* 102567bf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102567c0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102567c2 jne 0x102567b7 */
  if (!C.zf) goto L_102567b7;
L_102567c4:;
  /* 102567c4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102567c7 pop esi */
  ESI = (pop32());
  /* 102567c8 jne 0x102567cf */
  if (!C.zf) goto L_102567cf;
  /* 102567ca sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102567ce ret  */
  ESPCHK(0x102567a7u, _esp0);
  ESP += 4; return;
L_102567cf:;
  /* 102567cf mov eax, edx */
  EAX = (EDX);
  /* 102567d1 ret  */
  ESPCHK(0x102567a7u, _esp0);
  ESP += 4; return;
}

/* FUN_100067d2 @ 0x102567d2 (318 bytes, 123 insns) */
void f_102567d2(void) {
  FTRACE(0x102567d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102567d2 push ebp */
  push32((uint32_t)(EBP));
  /* 102567d3 mov ebp, esp */
  EBP = (ESP);
  /* 102567d5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 102567d7 push 0x102574f8 */
  push32((uint32_t)(0x102574f8u));
  /* 102567dc push 0x10256d50 */
  push32((uint32_t)(0x10256d50u));
  /* 102567e1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 102567e7 push eax */
  push32((uint32_t)(EAX));
  /* 102567e8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 102567ef sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102567f2 push ebx */
  push32((uint32_t)(EBX));
  /* 102567f3 push esi */
  push32((uint32_t)(ESI));
  /* 102567f4 push edi */
  push32((uint32_t)(EDI));
  /* 102567f5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102567f8 mov eax, dword ptr [0x10259014] */
  EAX = (r32((uint32_t)(0x10259014)));
  /* 102567fd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102567ff cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256801 jne 0x10256841 */
  if (!C.zf) goto L_10256841;
  /* 10256803 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10256806 push eax */
  push32((uint32_t)(EAX));
  /* 10256807 push 1 */
  push32((uint32_t)(0x1u));
  /* 10256809 pop esi */
  ESI = (pop32());
  /* 1025680a push esi */
  push32((uint32_t)(ESI));
  /* 1025680b push 0x102574d8 */
  push32((uint32_t)(0x102574d8u));
  /* 10256810 push esi */
  push32((uint32_t)(ESI));
  /* 10256811 call dword ptr [0x10257004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257004))), 0x10256817u);
  /* 10256817 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10256819 je 0x1025681f */
  if (C.zf) goto L_1025681f;
  /* 1025681b mov eax, esi */
  EAX = (ESI);
  /* 1025681d jmp 0x1025683c */
  goto L_1025683c;
L_1025681f:;
  /* 1025681f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10256822 push eax */
  push32((uint32_t)(EAX));
  /* 10256823 push esi */
  push32((uint32_t)(ESI));
  /* 10256824 push 0x102574d4 */
  push32((uint32_t)(0x102574d4u));
  /* 10256829 push esi */
  push32((uint32_t)(ESI));
  /* 1025682a push ebx */
  push32((uint32_t)(EBX));
  /* 1025682b call dword ptr [0x10257008] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257008))), 0x10256831u);
  /* 10256831 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10256833 je 0x10256907 */
  if (C.zf) goto L_10256907;
  /* 10256839 push 2 */
  push32((uint32_t)(0x2u));
  /* 1025683b pop eax */
  EAX = (pop32());
L_1025683c:;
  /* 1025683c mov dword ptr [0x10259014], eax */
  w32((uint32_t)(0x10259014), (EAX));
L_10256841:;
  /* 10256841 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256844 jne 0x1025686a */
  if (!C.zf) goto L_1025686a;
  /* 10256846 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10256849 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025684b jne 0x10256852 */
  if (!C.zf) goto L_10256852;
  /* 1025684d mov eax, dword ptr [0x10258ff8] */
  EAX = (r32((uint32_t)(0x10258ff8)));
L_10256852:;
  /* 10256852 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10256855 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10256858 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1025685b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1025685e push eax */
  push32((uint32_t)(EAX));
  /* 1025685f call dword ptr [0x10257008] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257008))), 0x10256865u);
  /* 10256865 jmp 0x10256909 */
  goto L_10256909;
L_1025686a:;
  /* 1025686a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025686d jne 0x10256907 */
  if (!C.zf) goto L_10256907;
  /* 10256873 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256876 jne 0x10256880 */
  if (!C.zf) goto L_10256880;
  /* 10256878 mov eax, dword ptr [0x10259008] */
  EAX = (r32((uint32_t)(0x10259008)));
  /* 1025687d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10256880:;
  /* 10256880 push ebx */
  push32((uint32_t)(EBX));
  /* 10256881 push ebx */
  push32((uint32_t)(EBX));
  /* 10256882 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10256885 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10256888 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1025688b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1025688d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1025688f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10256892 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10256893 push eax */
  push32((uint32_t)(EAX));
  /* 10256894 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10256897 call dword ptr [0x10257014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257014))), 0x1025689du);
  /* 1025689d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 102568a0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102568a2 je 0x10256907 */
  if (C.zf) goto L_10256907;
  /* 102568a4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 102568a7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 102568aa mov eax, edi */
  EAX = (EDI);
  /* 102568ac add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102568af and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 102568b1 call 0x10256e30 */
  push32(0x102568b6u); f_10256e30();
  /* 102568b6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102568b9 mov esi, esp */
  ESI = (ESP);
  /* 102568bb mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 102568be push edi */
  push32((uint32_t)(EDI));
  /* 102568bf push ebx */
  push32((uint32_t)(EBX));
  /* 102568c0 push esi */
  push32((uint32_t)(ESI));
  /* 102568c1 call 0x10256510 */
  push32(0x102568c6u); f_10256510();
  /* 102568c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102568c9 jmp 0x102568d6 */
  goto L_102568d6;
  /* 102568cb push 1 */
  push32((uint32_t)(0x1u));
  /* 102568cd pop eax */
  EAX = (pop32());
  /* 102568ce ret  */
  ESPCHK(0x102567d2u, _esp0);
  ESP += 4; return;
  /* 102568cf mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102568d2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102568d4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_102568d6:;
  /* 102568d6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102568da cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102568dc je 0x10256907 */
  if (C.zf) goto L_10256907;
  /* 102568de push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 102568e1 push esi */
  push32((uint32_t)(ESI));
  /* 102568e2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102568e5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102568e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 102568ea push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102568ed call dword ptr [0x10257014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257014))), 0x102568f3u);
  /* 102568f3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102568f5 je 0x10256907 */
  if (C.zf) goto L_10256907;
  /* 102568f7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102568fa push eax */
  push32((uint32_t)(EAX));
  /* 102568fb push esi */
  push32((uint32_t)(ESI));
  /* 102568fc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102568ff call dword ptr [0x10257004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10257004))), 0x10256905u);
  /* 10256905 jmp 0x10256909 */
  goto L_10256909;
L_10256907:;
  /* 10256907 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10256909:;
  /* 10256909 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1025690c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1025690f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10256916 pop edi */
  EDI = (pop32());
  /* 10256917 pop esi */
  ESI = (pop32());
  /* 10256918 pop ebx */
  EBX = (pop32());
  /* 10256919 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1025691a ret  */
  ESPCHK(0x102567d2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006920 @ 0x10256920 (664 bytes, 258 insns) [15 switch table(s)] */
void f_10256920(void) {
  FTRACE(0x10256920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10256920 push ebp */
  push32((uint32_t)(EBP));
  /* 10256921 mov ebp, esp */
  EBP = (ESP);
  /* 10256923 push edi */
  push32((uint32_t)(EDI));
  /* 10256924 push esi */
  push32((uint32_t)(ESI));
  /* 10256925 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10256928 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1025692b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1025692e mov eax, ecx */
  EAX = (ECX);
  /* 10256930 mov edx, ecx */
  EDX = (ECX);
  /* 10256932 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10256934 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256936 jbe 0x10256940 */
  if ((C.cf||C.zf)) goto L_10256940;
  /* 10256938 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1025693a jb 0x10256ab8 */
  if (C.cf) goto L_10256ab8;
L_10256940:;
  /* 10256940 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10256946 jne 0x1025695c */
  if (!C.zf) goto L_1025695c;
  /* 10256948 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1025694b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1025694e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256951 jb 0x1025697c */
  if (C.cf) goto L_1025697c;
  /* 10256953 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10256955 jmp dword ptr [edx*4 + 0x10256a68] */
  switch (EDX) {
    case 0: goto L_10256a78;
    case 1: goto L_10256a80;
    case 2: goto L_10256a8c;
    case 3: goto L_10256aa0;
    default: x86_unimpl("switch@0x10256955 out of table"); return;
  }
L_1025695c:;
  /* 1025695c mov eax, edi */
  EAX = (EDI);
  /* 1025695e mov edx, 3 */
  EDX = (0x3u);
  /* 10256963 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10256966 jb 0x10256974 */
  if (C.cf) goto L_10256974;
  /* 10256968 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1025696b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1025696d jmp dword ptr [eax*4 + 0x10256980] */
  switch (EAX) {
    case 1: goto L_10256990;
    case 2: goto L_102569bc;
    case 3: goto L_102569e0;
    default: x86_unimpl("switch@0x1025696d out of table"); return;
  }
L_10256974:;
  /* 10256974 jmp dword ptr [ecx*4 + 0x10256a78] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10256a78)))); return;
  /* 1025697b nop  */
  /* nop */
L_1025697c:;
  /* 1025697c jmp dword ptr [ecx*4 + 0x102569fc] */
  switch (ECX) {
    case 0: goto L_10256a5f;
    case 1: goto L_10256a4c;
    case 2: goto L_10256a44;
    case 3: goto L_10256a3c;
    case 4: goto L_10256a34;
    case 5: goto L_10256a2c;
    case 6: goto L_10256a24;
    case 7: goto L_10256a1c;
    default: x86_unimpl("switch@0x1025697c out of table"); return;
  }
  /* 10256983 nop  */
  /* nop */
L_10256990:;
  /* 10256990 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10256992 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10256994 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10256996 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10256999 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1025699c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1025699f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102569a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102569a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102569a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102569ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102569ae jb 0x1025697c */
  if (C.cf) goto L_1025697c;
  /* 102569b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102569b2 jmp dword ptr [edx*4 + 0x10256a68] */
  switch (EDX) {
    case 0: goto L_10256a78;
    case 1: goto L_10256a80;
    case 2: goto L_10256a8c;
    case 3: goto L_10256aa0;
    default: x86_unimpl("switch@0x102569b2 out of table"); return;
  }
  /* 102569b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102569bc:;
  /* 102569bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102569be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102569c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102569c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102569c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102569c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102569cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102569ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102569d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102569d4 jb 0x1025697c */
  if (C.cf) goto L_1025697c;
  /* 102569d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102569d8 jmp dword ptr [edx*4 + 0x10256a68] */
  switch (EDX) {
    case 0: goto L_10256a78;
    case 1: goto L_10256a80;
    case 2: goto L_10256a8c;
    case 3: goto L_10256aa0;
    default: x86_unimpl("switch@0x102569d8 out of table"); return;
  }
  /* 102569df nop  */
  /* nop */
L_102569e0:;
  /* 102569e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102569e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102569e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102569e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102569e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102569ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102569eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102569ee jb 0x1025697c */
  if (C.cf) goto L_1025697c;
  /* 102569f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102569f2 jmp dword ptr [edx*4 + 0x10256a68] */
  switch (EDX) {
    case 0: goto L_10256a78;
    case 1: goto L_10256a80;
    case 2: goto L_10256a8c;
    case 3: goto L_10256aa0;
    default: x86_unimpl("switch@0x102569f2 out of table"); return;
  }
  /* 102569f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10256a1c:;
  /* 10256a1c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10256a20 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10256a24:;
  /* 10256a24 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10256a28 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10256a2c:;
  /* 10256a2c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10256a30 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10256a34:;
  /* 10256a34 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10256a38 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10256a3c:;
  /* 10256a3c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10256a40 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10256a44:;
  /* 10256a44 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10256a48 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10256a4c:;
  /* 10256a4c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10256a50 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10256a54 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10256a5b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10256a5d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10256a5f:;
  /* 10256a5f jmp dword ptr [edx*4 + 0x10256a68] */
  switch (EDX) {
    case 0: goto L_10256a78;
    case 1: goto L_10256a80;
    case 2: goto L_10256a8c;
    case 3: goto L_10256aa0;
    default: x86_unimpl("switch@0x10256a5f out of table"); return;
  }
  /* 10256a66 mov edi, edi */
  EDI = (EDI);
L_10256a78:;
  /* 10256a78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10256a7b pop esi */
  ESI = (pop32());
  /* 10256a7c pop edi */
  EDI = (pop32());
  /* 10256a7d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10256a7e ret  */
  ESPCHK(0x10256920u, _esp0);
  ESP += 4; return;
  /* 10256a7f nop  */
  /* nop */
L_10256a80:;
  /* 10256a80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10256a82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10256a84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10256a87 pop esi */
  ESI = (pop32());
  /* 10256a88 pop edi */
  EDI = (pop32());
  /* 10256a89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10256a8a ret  */
  ESPCHK(0x10256920u, _esp0);
  ESP += 4; return;
  /* 10256a8b nop  */
  /* nop */
L_10256a8c:;
  /* 10256a8c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10256a8e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10256a90 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10256a93 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10256a96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10256a99 pop esi */
  ESI = (pop32());
  /* 10256a9a pop edi */
  EDI = (pop32());
  /* 10256a9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10256a9c ret  */
  ESPCHK(0x10256920u, _esp0);
  ESP += 4; return;
  /* 10256a9d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10256aa0:;
  /* 10256aa0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10256aa2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10256aa4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10256aa7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10256aaa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10256aad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10256ab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10256ab3 pop esi */
  ESI = (pop32());
  /* 10256ab4 pop edi */
  EDI = (pop32());
  /* 10256ab5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10256ab6 ret  */
  ESPCHK(0x10256920u, _esp0);
  ESP += 4; return;
  /* 10256ab7 nop  */
  /* nop */
L_10256ab8:;
  /* 10256ab8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10256abc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10256ac0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10256ac6 jne 0x10256aec */
  if (!C.zf) goto L_10256aec;
  /* 10256ac8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10256acb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10256ace cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256ad1 jb 0x10256ae0 */
  if (C.cf) goto L_10256ae0;
  /* 10256ad3 std  */
  C.df=1;
  /* 10256ad4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10256ad6 cld  */
  C.df=0;
  /* 10256ad7 jmp dword ptr [edx*4 + 0x10256c00] */
  switch (EDX) {
    case 0: goto L_10256c10;
    case 1: goto L_10256c18;
    case 2: goto L_10256c28;
    case 3: goto L_10256c3c;
    default: x86_unimpl("switch@0x10256ad7 out of table"); return;
  }
  /* 10256ade mov edi, edi */
  EDI = (EDI);
L_10256ae0:;
  /* 10256ae0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10256ae2 jmp dword ptr [ecx*4 + 0x10256bb0] */
  switch (ECX) {
    case 0: goto L_10256bf7;
    default: x86_unimpl("switch@0x10256ae2 out of table"); return;
  }
  /* 10256ae9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10256aec:;
  /* 10256aec mov eax, edi */
  EAX = (EDI);
  /* 10256aee mov edx, 3 */
  EDX = (0x3u);
  /* 10256af3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256af6 jb 0x10256b04 */
  if (C.cf) goto L_10256b04;
  /* 10256af8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10256afb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10256afd jmp dword ptr [eax*4 + 0x10256b08] */
  switch (EAX) {
    case 1: goto L_10256b18;
    case 2: goto L_10256b38;
    case 3: goto L_10256b60;
    default: x86_unimpl("switch@0x10256afd out of table"); return;
  }
L_10256b04:;
  /* 10256b04 jmp dword ptr [ecx*4 + 0x10256c00] */
  switch (ECX) {
    case 0: goto L_10256c10;
    case 1: goto L_10256c18;
    case 2: goto L_10256c28;
    case 3: goto L_10256c3c;
    default: x86_unimpl("switch@0x10256b04 out of table"); return;
  }
  /* 10256b0b nop  */
  /* nop */
L_10256b18:;
  /* 10256b18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10256b1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10256b1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10256b20 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10256b21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10256b24 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10256b25 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256b28 jb 0x10256ae0 */
  if (C.cf) goto L_10256ae0;
  /* 10256b2a std  */
  C.df=1;
  /* 10256b2b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10256b2d cld  */
  C.df=0;
  /* 10256b2e jmp dword ptr [edx*4 + 0x10256c00] */
  switch (EDX) {
    case 0: goto L_10256c10;
    case 1: goto L_10256c18;
    case 2: goto L_10256c28;
    case 3: goto L_10256c3c;
    default: x86_unimpl("switch@0x10256b2e out of table"); return;
  }
  /* 10256b35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10256b38:;
  /* 10256b38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10256b3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10256b3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10256b40 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10256b43 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10256b46 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10256b49 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10256b4c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10256b4f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256b52 jb 0x10256ae0 */
  if (C.cf) goto L_10256ae0;
  /* 10256b54 std  */
  C.df=1;
  /* 10256b55 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10256b57 cld  */
  C.df=0;
  /* 10256b58 jmp dword ptr [edx*4 + 0x10256c00] */
  switch (EDX) {
    case 0: goto L_10256c10;
    case 1: goto L_10256c18;
    case 2: goto L_10256c28;
    case 3: goto L_10256c3c;
    default: x86_unimpl("switch@0x10256b58 out of table"); return;
  }
  /* 10256b5f nop  */
  /* nop */
L_10256b60:;
  /* 10256b60 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10256b63 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10256b65 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10256b68 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10256b6b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10256b6e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10256b71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10256b74 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10256b77 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10256b7a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10256b7d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256b80 jb 0x10256ae0 */
  if (C.cf) goto L_10256ae0;
  /* 10256b86 std  */
  C.df=1;
  /* 10256b87 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10256b89 cld  */
  C.df=0;
  /* 10256b8a jmp dword ptr [edx*4 + 0x10256c00] */
  switch (EDX) {
    case 0: goto L_10256c10;
    case 1: goto L_10256c18;
    case 2: goto L_10256c28;
    case 3: goto L_10256c3c;
    default: x86_unimpl("switch@0x10256b8a out of table"); return;
  }
  /* 10256b91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10256b94 mov ah, 0x6b */
  AH = (0x6bu);
  /* 10256b96 and eax, 0x256bbc10 */
  { uint32_t _r=(EAX)&(0x256bbc10u); EAX = (_r); fl_logic(_r,32); }
  /* 10256b9b adc ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10256b9d imul esp, dword ptr [0x256bcc10], 0x10 */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(0x256bcc10)))*(int64_t)(int32_t)(0x10u); ESP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10256ba4 aam 0x6b */
  x86_unimpl("aam @ 0x10256ba4");
  /* 10256ba6 and eax, 0x256bdc10 */
  { uint32_t _r=(EAX)&(0x256bdc10u); EAX = (_r); fl_logic(_r,32); }
  /* 10256bab adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10256bb4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10256bb8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10256bbc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10256bc0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10256bc4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10256bc8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10256bcc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10256bd0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10256bd4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10256bd8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10256bdc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10256be0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10256be4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10256be8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10256bec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10256bf3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10256bf5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10256bf7:;
  /* 10256bf7 jmp dword ptr [edx*4 + 0x10256c00] */
  switch (EDX) {
    case 0: goto L_10256c10;
    case 1: goto L_10256c18;
    case 2: goto L_10256c28;
    case 3: goto L_10256c3c;
    default: x86_unimpl("switch@0x10256bf7 out of table"); return;
  }
  /* 10256bfe mov edi, edi */
  EDI = (EDI);
L_10256c10:;
  /* 10256c10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10256c13 pop esi */
  ESI = (pop32());
  /* 10256c14 pop edi */
  EDI = (pop32());
  /* 10256c15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10256c16 ret  */
  ESPCHK(0x10256920u, _esp0);
  ESP += 4; return;
  /* 10256c17 nop  */
  /* nop */
L_10256c18:;
  /* 10256c18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10256c1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10256c1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10256c21 pop esi */
  ESI = (pop32());
  /* 10256c22 pop edi */
  EDI = (pop32());
  /* 10256c23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10256c24 ret  */
  ESPCHK(0x10256920u, _esp0);
  ESP += 4; return;
  /* 10256c25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10256c28:;
  /* 10256c28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10256c2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10256c2e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10256c31 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10256c34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10256c37 pop esi */
  ESI = (pop32());
  /* 10256c38 pop edi */
  EDI = (pop32());
  /* 10256c39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10256c3a ret  */
  ESPCHK(0x10256920u, _esp0);
  ESP += 4; return;
  /* 10256c3b nop  */
  /* nop */
L_10256c3c:;
  /* 10256c3c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10256c3f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10256c42 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10256c45 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10256c48 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10256c4b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10256c4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10256c51 pop esi */
  ESI = (pop32());
  /* 10256c52 pop edi */
  EDI = (pop32());
  /* 10256c53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10256c54 ret  */
  ESPCHK(0x10256920u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10256c58 (32 bytes, 18 insns) */
void f_10256c58(void) {
  FTRACE(0x10256c58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10256c58 push ebp */
  push32((uint32_t)(EBP));
  /* 10256c59 mov ebp, esp */
  EBP = (ESP);
  /* 10256c5b push ebx */
  push32((uint32_t)(EBX));
  /* 10256c5c push esi */
  push32((uint32_t)(ESI));
  /* 10256c5d push edi */
  push32((uint32_t)(EDI));
  /* 10256c5e push ebp */
  push32((uint32_t)(EBP));
  /* 10256c5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10256c61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10256c63 push 0x10256c70 */
  push32((uint32_t)(0x10256c70u));
  /* 10256c68 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10256c6b call 0x10256e60 */
  push32(0x10256c70u); f_10256e60();
  /* 10256c70 pop ebp */
  EBP = (pop32());
  /* 10256c71 pop edi */
  EDI = (pop32());
  /* 10256c72 pop esi */
  ESI = (pop32());
  /* 10256c73 pop ebx */
  EBX = (pop32());
  /* 10256c74 mov esp, ebp */
  ESP = (EBP);
  /* 10256c76 pop ebp */
  EBP = (pop32());
  /* 10256c77 ret  */
  ESPCHK(0x10256c58u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10256c9a (104 bytes, 33 insns) */
void f_10256c9a(void) {
  FTRACE(0x10256c9au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10256c9a push ebx */
  push32((uint32_t)(EBX));
  /* 10256c9b push esi */
  push32((uint32_t)(ESI));
  /* 10256c9c push edi */
  push32((uint32_t)(EDI));
  /* 10256c9d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10256ca1 push eax */
  push32((uint32_t)(EAX));
  /* 10256ca2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10256ca4 push 0x10256c78 */
  push32((uint32_t)(0x10256c78u));
  /* 10256ca9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10256cb0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10256cb7:;
  /* 10256cb7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10256cbb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10256cbe mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10256cc1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256cc4 je 0x10256cf4 */
  if (C.zf) goto L_10256cf4;
  /* 10256cc6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256cca je 0x10256cf4 */
  if (C.zf) goto L_10256cf4;
  /* 10256ccc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10256ccf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10256cd2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10256cd6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10256cd9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256cde jne 0x10256cf2 */
  if (!C.zf) goto L_10256cf2;
  /* 10256ce0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10256ce5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10256ce9 call 0x10256d2e */
  push32(0x10256ceeu); f_10256d2e();
  /* 10256cee call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10256cf2u);
L_10256cf2:;
  /* 10256cf2 jmp 0x10256cb7 */
  goto L_10256cb7;
L_10256cf4:;
  /* 10256cf4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10256cfb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10256cfe pop edi */
  EDI = (pop32());
  /* 10256cff pop esi */
  ESI = (pop32());
  /* 10256d00 pop ebx */
  EBX = (pop32());
  /* 10256d01 ret  */
  ESPCHK(0x10256c9au, _esp0);
  ESP += 4; return;
}

/* FUN_10006d2e @ 0x10256d2e (24 bytes, 10 insns) */
void f_10256d2e(void) {
  FTRACE(0x10256d2eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10256d2e push ebx */
  push32((uint32_t)(EBX));
  /* 10256d2f push ecx */
  push32((uint32_t)(ECX));
  /* 10256d30 mov ebx, 0x10258960 */
  EBX = (0x10258960u);
  /* 10256d35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10256d38 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10256d3b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10256d3e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10256d41 pop ecx */
  ECX = (pop32());
  /* 10256d42 pop ebx */
  EBX = (pop32());
  /* 10256d43 ret 4 */
  ESPCHK(0x10256d2eu, _esp0);
  ESP += 8; return;
}

/* FUN_10006e0d @ 0x10256e0d (27 bytes, 11 insns) */
void f_10256e0d(void) {
  FTRACE(0x10256e0du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10256e0d push ebp */
  push32((uint32_t)(EBP));
  /* 10256e0e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10256e12 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10256e14 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10256e17 push eax */
  push32((uint32_t)(EAX));
  /* 10256e18 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10256e1b push eax */
  push32((uint32_t)(EAX));
  /* 10256e1c call 0x10256c9a */
  push32(0x10256e21u); f_10256c9a();
  /* 10256e21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10256e24 pop ebp */
  EBP = (pop32());
  /* 10256e25 ret 4 */
  ESPCHK(0x10256e0du, _esp0);
  ESP += 8; return;
}

/* FUN_10006e30 @ 0x10256e30 (47 bytes, 17 insns) */
void f_10256e30(void) {
  FTRACE(0x10256e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10256e30 push ecx */
  push32((uint32_t)(ECX));
  /* 10256e31 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256e36 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10256e3a jb 0x10256e50 */
  if (C.cf) goto L_10256e50;
L_10256e3c:;
  /* 10256e3c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10256e42 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10256e47 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10256e49 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10256e4e jae 0x10256e3c */
  if (!C.cf) goto L_10256e3c;
L_10256e50:;
  /* 10256e50 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10256e52 mov eax, esp */
  EAX = (ESP);
  /* 10256e54 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10256e56 mov esp, ecx */
  ESP = (ECX);
  /* 10256e58 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10256e5a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10256e5d push eax */
  push32((uint32_t)(EAX));
  /* 10256e5e ret  */
  ESPCHK(0x10256e30u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x10256e60 (6 bytes, 1 insns) */
void f_10256e60(void) {
  FTRACE(0x10256e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10256e60 jmp dword ptr [0x10257000] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10257000)))); return;
}

